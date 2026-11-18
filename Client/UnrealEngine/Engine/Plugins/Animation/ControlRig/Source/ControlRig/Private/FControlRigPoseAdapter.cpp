// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 15

// FControlRigPoseAdapter @ 14a3b6570

FControlRigPoseAdapter * __thiscall
FControlRigPoseAdapter::FControlRigPoseAdapter(FControlRigPoseAdapter *this)

{
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ParentPoseIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentPoseIndices).ArrayNum = 0;
  (this->ParentPoseIndices).ArrayMax = 0;
  (this->RequiresHierarchyForSpaceConversion).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RequiresHierarchyForSpaceConversion).ArrayNum = 0;
  (this->RequiresHierarchyForSpaceConversion).ArrayMax = 0;
  (this->LocalPose).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalPose).ArrayNum = 0;
  (this->LocalPose).ArrayMax = 0;
  (this->GlobalPose).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GlobalPose).ArrayNum = 0;
  (this->GlobalPose).ArrayMax = 0;
  (this->LocalPoseIsDirty).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalPoseIsDirty).ArrayNum = 0;
  (this->LocalPoseIsDirty).ArrayMax = 0;
  (this->GlobalPoseIsDirty).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GlobalPoseIsDirty).ArrayNum = 0;
  (this->GlobalPoseIsDirty).ArrayMax = 0;
  (this->PoseCurveToHierarchyCurve).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseCurveToHierarchyCurve).ArrayNum = 0;
  (this->PoseCurveToHierarchyCurve).ArrayMax = 0;
  *(undefined8 *)&this->HierarchyCurveLookup = 0;
  *(undefined8 *)&(this->HierarchyCurveLookup).field_0x8 = 0;
  *(undefined8 *)&(this->HierarchyCurveLookup).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FControlRigPoseAdapter__6B_;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)&(this->HierarchyCurveLookup).field_0x28 = 0;
  *(undefined4 *)&(this->HierarchyCurveLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->HierarchyCurveLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HierarchyCurveLookup).field_0x34 = 0;
  *(undefined8 *)&(this->HierarchyCurveLookup).field_0x40 = 0;
  *(undefined4 *)&(this->HierarchyCurveLookup).field_0x48 = 0;
  (this->BonesToResetToInitial).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BonesToResetToInitial).ArrayNum = 0;
  (this->BonesToResetToInitial).ArrayMax = 0;
  *(undefined8 *)&this->ElementIndexToPoseIndex = 0;
  *(undefined8 *)&(this->ElementIndexToPoseIndex).field_0x8 = 0;
  *(undefined8 *)&(this->ElementIndexToPoseIndex).field_0x20 = 0;
  *(undefined4 *)&(this->ElementIndexToPoseIndex).field_0x28 = 0;
  *(undefined4 *)&(this->ElementIndexToPoseIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->ElementIndexToPoseIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ElementIndexToPoseIndex).field_0x34 = 0;
  *(undefined8 *)&(this->ElementIndexToPoseIndex).field_0x40 = 0;
  *(undefined4 *)&(this->ElementIndexToPoseIndex).field_0x48 = 0;
  (this->PoseIndexToElementIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseIndexToElementIndex).ArrayNum = 0;
  (this->PoseIndexToElementIndex).ArrayMax = 0;
  (this->Dependents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Dependents).ArrayNum = 0;
  (this->Dependents).ArrayMax = 0;
  this->bTransferInLocalSpace = true;
  this->bRequiresResetPoseToInitial = true;
  this->bEnabled = true;
  return this;
}

// ComputeDependentTransforms @ 14a3f4270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FControlRigPoseAdapter::ComputeDependentTransforms(FControlRigPoseAdapter *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  URigHierarchy *this_00;
  FRigControlElement *pFVar5;
  longlong lVar6;
  UScriptStruct *pUVar7;
  bool *pbVar8;
  FScriptContainerElement *pFVar9;
  Type TVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_188 [32];
  undefined1 local_168 [16];
  TTransform<double> local_158;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  FStatsHierarchical::BeginMeasurement("FControlRigPoseAdapter::ComputeDependentTransforms");
  this_00 = FRigHierarchyPoseAdapter::GetHierarchy((FRigHierarchyPoseAdapter *)this);
  if (this_00 != (URigHierarchy *)0x0) {
    pFVar9 = (this->Dependents).AllocatorInstance.Data;
    iVar1 = (this->Dependents).ArrayNum;
    pFVar11 = pFVar9 + (longlong)iVar1 * 0x20;
    while( true ) {
      if ((this->Dependents).ArrayNum != iVar1) {
        local_168[0] = 0;
        `TCheckedPointerIterator<FControlRigPoseAdapter::FDependentTransform,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_168);
      }
      if (pFVar9 == pFVar11) break;
      pFVar5 = (FRigControlElement *)URigHierarchy::Get(this_00,**(int **)(pFVar9 + 8));
      if (pFVar5 != (FRigControlElement *)0x0) {
        lVar6 = (**(code **)(*(longlong *)pFVar5 + 0x10))(pFVar5);
        pUVar7 = FRigTransformElement::StaticStruct();
        if (pUVar7 != (UScriptStruct *)0x0) {
          iVar2 = (int)pUVar7->_padding_;
          if ((*(int *)(lVar6 + 0x38) < iVar2) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            iVar2 = *(int *)(pFVar9 + 0x14);
            if (iVar2 == 0) {
              if ((*(int *)(pFVar9 + 0x10) == 1) || (*(int *)(pFVar9 + 0x10) == 3)) {
                TVar10 = CurrentLocal;
              }
              else {
                TVar10 = InitialLocal;
              }
              URigHierarchy::GetTransform(this_00,&local_98,(FRigTransformElement *)pFVar5,TVar10);
            }
            else if (iVar2 == 1) {
              lVar6 = (**(code **)(*(longlong *)pFVar5 + 0x10))(pFVar5);
              pUVar7 = FRigControlElement::StaticStruct();
              if (pUVar7 == (UScriptStruct *)0x0) {
LAB_14a3f4466:
                pFVar5 = (FRigControlElement *)0x0;
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Element",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                                   ,0x3f9,L"");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              else {
                iVar2 = (int)pUVar7->_padding_;
                if ((*(int *)(lVar6 + 0x38) < iVar2) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar2 * 8)
                    != &pUVar7->_padding_)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (!bVar4) goto LAB_14a3f4466;
              }
              if ((*(int *)(pFVar9 + 0x10) == 1) || (*(int *)(pFVar9 + 0x10) == 3)) {
                URigHierarchy::GetControlOffsetTransform(this_00,&local_f8,pFVar5,CurrentLocal);
              }
              else {
                URigHierarchy::GetControlOffsetTransform(this_00,&local_f8,pFVar5,InitialLocal);
              }
            }
            else {
              if (iVar2 != 2) goto LAB_14a3f44f9;
              lVar6 = (**(code **)(*(longlong *)pFVar5 + 0x10))(pFVar5);
              pUVar7 = FRigControlElement::StaticStruct();
              if (pUVar7 == (UScriptStruct *)0x0) {
LAB_14a3f43c4:
                pFVar5 = (FRigControlElement *)0x0;
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Element",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                                   ,0x3f9,L"");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              else {
                iVar2 = (int)pUVar7->_padding_;
                if ((*(int *)(lVar6 + 0x38) < iVar2) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar2 * 8)
                    != &pUVar7->_padding_)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (!bVar4) goto LAB_14a3f43c4;
              }
              if ((*(int *)(pFVar9 + 0x10) == 1) || (*(int *)(pFVar9 + 0x10) == 3)) {
                URigHierarchy::GetControlShapeTransform(this_00,&local_158,pFVar5,CurrentLocal);
              }
              else {
                URigHierarchy::GetControlShapeTransform(this_00,&local_158,pFVar5,InitialLocal);
              }
            }
LAB_14a3f44f9:
            pbVar8 = FRigTransformDirtyState::Get
                               ((FRigTransformDirtyState *)(*(longlong *)(pFVar9 + 0x18) + 0x10));
            if ((*pbVar8 != false) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Dependent.DirtyState->Local.Get() == false",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigPoseAdapter.cpp"
                                   ,0x23b,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
      }
      pFVar9 = pFVar9 + 0x20;
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// ConvertToGlobalPose @ 14a3fc2a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FControlRigPoseAdapter::ConvertToGlobalPose(FControlRigPoseAdapter *this)

{
  code *pcVar1;
  bool bVar2;
  URigHierarchy *pUVar3;
  int iVar4;
  
  FStatsHierarchical::BeginMeasurement("FControlRigPoseAdapter::ConvertToGlobalPose");
  if (((this->ParentPoseIndices).ArrayNum != (this->LocalPose).ArrayNum) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentPoseIndices.Num() == LocalPose.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigPoseAdapter.cpp"
                         ,0x195,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->GlobalPose,(this->LocalPose).ArrayNum,Default);
  pUVar3 = FRigHierarchyPoseAdapter::GetHierarchy((FRigHierarchyPoseAdapter *)this);
  if ((pUVar3 != (URigHierarchy *)0x0) && (iVar4 = 0, 0 < (this->ParentPoseIndices).ArrayNum)) {
    do {
      GetGlobalTransform(this,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (this->ParentPoseIndices).ArrayNum);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// ConvertToLocalPose @ 14a3fc340

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FControlRigPoseAdapter::ConvertToLocalPose(FControlRigPoseAdapter *this)

{
  code *pcVar1;
  bool bVar2;
  URigHierarchy *pUVar3;
  int iVar4;
  
  FStatsHierarchical::BeginMeasurement("FControlRigPoseAdapter::ConvertToLocalPose");
  if (((this->ParentPoseIndices).ArrayNum != (this->GlobalPose).ArrayNum) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentPoseIndices.Num() == GlobalPose.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigPoseAdapter.cpp"
                         ,0x186,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->LocalPose,(this->GlobalPose).ArrayNum,Default);
  pUVar3 = FRigHierarchyPoseAdapter::GetHierarchy((FRigHierarchyPoseAdapter *)this);
  if ((pUVar3 != (URigHierarchy *)0x0) && (iVar4 = 0, 0 < (this->ParentPoseIndices).ArrayNum)) {
    do {
      GetLocalTransform(this,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (this->ParentPoseIndices).ArrayNum);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetGlobalTransform @ 14a414470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTransform<double> * __thiscall
FControlRigPoseAdapter::GetGlobalTransform(FControlRigPoseAdapter *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  TTransform<double> *pTVar20;
  URigHierarchy *this_00;
  TTransform<double> *pTVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_188;
  lVar24 = (longlong)param_1;
  FStatsHierarchical::BeginMeasurement("FControlRigPoseAdapter::GetGlobalTransform");
  if ((param_1 < 0) || ((this->GlobalPose).ArrayNum <= param_1)) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("GlobalPose.IsValidIndex(InIndex)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigPoseAdapter.cpp"
                        ,0x1ca,L"");
    if (bVar18) {
      pcVar4 = (code *)swi(3);
      pTVar20 = (TTransform<double> *)(*pcVar4)();
      return pTVar20;
    }
    if (-1 < param_1) goto LAB_14a4144e1;
LAB_14a4144e9:
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("GlobalPoseIsDirty.IsValidIndex(InIndex)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigPoseAdapter.cpp"
                        ,0x1cb,L"");
    if (bVar18) {
      pcVar4 = (code *)swi(3);
      pTVar20 = (TTransform<double> *)(*pcVar4)();
      return pTVar20;
    }
    if (-1 < param_1) goto LAB_14a414513;
LAB_14a414518:
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("ParentPoseIndices.IsValidIndex(InIndex)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigPoseAdapter.cpp"
                        ,0x1cc,L"");
    if (bVar18) {
      pcVar4 = (code *)swi(3);
      pTVar20 = (TTransform<double> *)(*pcVar4)();
      return pTVar20;
    }
    if (-1 < param_1) goto LAB_14a414542;
  }
  else {
LAB_14a4144e1:
    if ((this->GlobalPoseIsDirty).ArrayNum <= param_1) goto LAB_14a4144e9;
LAB_14a414513:
    if ((this->ParentPoseIndices).ArrayNum <= param_1) goto LAB_14a414518;
LAB_14a414542:
    if (param_1 < (this->RequiresHierarchyForSpaceConversion).ArrayNum) goto LAB_14a41456d;
  }
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("RequiresHierarchyForSpaceConversion.IsValidIndex(InIndex)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigPoseAdapter.cpp"
                      ,0x1cd,L"");
  if (bVar18) {
    pcVar4 = (code *)swi(3);
    pTVar20 = (TTransform<double> *)(*pcVar4)();
    return pTVar20;
  }
LAB_14a41456d:
  this_00 = FRigHierarchyPoseAdapter::GetHierarchy((FRigHierarchyPoseAdapter *)this);
  if (this_00 == (URigHierarchy *)0x0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Hierarchy",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigPoseAdapter.cpp"
                        ,0x1d0,L"");
    if (bVar18) {
      pcVar4 = (code *)swi(3);
      pTVar20 = (TTransform<double> *)(*pcVar4)();
      return pTVar20;
    }
  }
  iVar1 = (this->GlobalPoseIsDirty).ArrayNum;
  uVar23 = (uint)~param_1 >> 0x1f;
  uVar19 = 0;
  if (param_1 < iVar1) {
    uVar19 = uVar23;
  }
  if (uVar19 == 0) {
    local_168 = lVar24;
    local_160 = (longlong)iVar1;
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar4 = (code *)swi(3);
      pTVar20 = (TTransform<double> *)(*pcVar4)();
      return pTVar20;
    }
  }
  if ((this->GlobalPoseIsDirty).AllocatorInstance.Data[lVar24] != (FScriptContainerElement)0x0) {
    iVar1 = (this->LocalPoseIsDirty).ArrayNum;
    uVar19 = 0;
    if (param_1 < iVar1) {
      uVar19 = uVar23;
    }
    if (uVar19 == 0) {
      local_168 = lVar24;
      local_160 = (longlong)iVar1;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar4 = (code *)swi(3);
        pTVar20 = (TTransform<double> *)(*pcVar4)();
        return pTVar20;
      }
    }
    if ((this->LocalPoseIsDirty).AllocatorInstance.Data[lVar24] != (FScriptContainerElement)0x0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("LocalPoseIsDirty[InIndex] == false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigPoseAdapter.cpp"
                          ,0x1d4,L"");
      if (bVar18) {
        pcVar4 = (code *)swi(3);
        pTVar20 = (TTransform<double> *)(*pcVar4)();
        return pTVar20;
      }
    }
    iVar1 = (this->RequiresHierarchyForSpaceConversion).ArrayNum;
    uVar19 = 0;
    if (param_1 < iVar1) {
      uVar19 = uVar23;
    }
    if (uVar19 == 0) {
      local_168 = lVar24;
      local_160 = (longlong)iVar1;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar4 = (code *)swi(3);
        pTVar20 = (TTransform<double> *)(*pcVar4)();
        return pTVar20;
      }
    }
    if ((((this->RequiresHierarchyForSpaceConversion).AllocatorInstance.Data[lVar24] ==
          (FScriptContainerElement)0x0) || (param_1 < 0)) ||
       ((this->PoseIndexToElementIndex).ArrayNum <= param_1)) {
      iVar1 = (this->ParentPoseIndices).ArrayNum;
      uVar19 = 0;
      if (param_1 < iVar1) {
        uVar19 = uVar23;
      }
      if (uVar19 == 0) {
        local_168 = lVar24;
        local_160 = (longlong)iVar1;
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar4 = (code *)swi(3);
          pTVar20 = (TTransform<double> *)(*pcVar4)();
          return pTVar20;
        }
      }
      iVar1 = *(int *)((this->ParentPoseIndices).AllocatorInstance.Data + lVar24 * 4);
      pTVar20 = GetLocalTransform(this,param_1);
      if (iVar1 == -1) {
        uVar35 = *(undefined4 *)(pTVar20->Rotation).XY.m128d_f64;
        uVar36 = *(undefined4 *)((longlong)(pTVar20->Rotation).XY.m128d_f64 + 4);
        uVar37 = *(undefined4 *)((pTVar20->Rotation).XY.m128d_f64 + 1);
        uVar38 = *(undefined4 *)((longlong)(pTVar20->Rotation).XY.m128d_f64 + 0xc);
        uVar39 = *(undefined4 *)(pTVar20->Rotation).ZW.m128d_f64;
        uVar40 = *(undefined4 *)((longlong)(pTVar20->Rotation).ZW.m128d_f64 + 4);
        uVar41 = *(undefined4 *)((pTVar20->Rotation).ZW.m128d_f64 + 1);
        uVar42 = *(undefined4 *)((longlong)(pTVar20->Rotation).ZW.m128d_f64 + 0xc);
        uVar43 = *(undefined4 *)(pTVar20->Translation).XY.m128d_f64;
        uVar44 = *(undefined4 *)((longlong)(pTVar20->Translation).XY.m128d_f64 + 4);
        uVar45 = *(undefined4 *)((pTVar20->Translation).XY.m128d_f64 + 1);
        uVar46 = *(undefined4 *)((longlong)(pTVar20->Translation).XY.m128d_f64 + 0xc);
        uVar47 = *(undefined4 *)(pTVar20->Translation).ZW.m128d_f64;
        uVar48 = *(undefined4 *)((longlong)(pTVar20->Translation).ZW.m128d_f64 + 4);
        uVar49 = *(undefined4 *)((pTVar20->Translation).ZW.m128d_f64 + 1);
        uVar50 = *(undefined4 *)((longlong)(pTVar20->Translation).ZW.m128d_f64 + 0xc);
        uVar51 = *(undefined4 *)(pTVar20->Scale3D).XY.m128d_f64;
        uVar52 = *(undefined4 *)((longlong)(pTVar20->Scale3D).XY.m128d_f64 + 4);
        uVar53 = *(undefined4 *)((pTVar20->Scale3D).XY.m128d_f64 + 1);
        uVar54 = *(undefined4 *)((longlong)(pTVar20->Scale3D).XY.m128d_f64 + 0xc);
        uVar55 = *(undefined4 *)(pTVar20->Scale3D).ZW.m128d_f64;
        uVar56 = *(undefined4 *)((longlong)(pTVar20->Scale3D).ZW.m128d_f64 + 4);
        uVar57 = *(undefined4 *)((pTVar20->Scale3D).ZW.m128d_f64 + 1);
        uVar58 = *(undefined4 *)((longlong)(pTVar20->Scale3D).ZW.m128d_f64 + 0xc);
      }
      else {
        pTVar21 = GetGlobalTransform(this,iVar1);
        local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_158.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_158.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        in_XMM2._8_8_ = GlobalVectorConstants::FloatZero.m128_u64[1];
        in_XMM2._0_8_ = in_XMM2._8_8_;
        local_158.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_158.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_158.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_158.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_158.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_158.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_158.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_158.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_158,pTVar20,pTVar21);
        uVar35 = local_158.Rotation.XY.m128d_f64[0]._0_4_;
        uVar36 = local_158.Rotation.XY.m128d_f64[0]._4_4_;
        uVar37 = local_158.Rotation.XY.m128d_f64[1]._0_4_;
        uVar38 = local_158.Rotation.XY.m128d_f64[1]._4_4_;
        uVar39 = local_158.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar40 = local_158.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar41 = local_158.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar42 = local_158.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar43 = local_158.Translation.XY.m128d_f64[0]._0_4_;
        uVar44 = local_158.Translation.XY.m128d_f64[0]._4_4_;
        uVar45 = local_158.Translation.XY.m128d_f64[1]._0_4_;
        uVar46 = local_158.Translation.XY.m128d_f64[1]._4_4_;
        uVar47 = local_158.Translation.ZW.m128d_f64[0]._0_4_;
        uVar48 = local_158.Translation.ZW.m128d_f64[0]._4_4_;
        uVar49 = local_158.Translation.ZW.m128d_f64[1]._0_4_;
        uVar50 = local_158.Translation.ZW.m128d_f64[1]._4_4_;
        uVar51 = local_158.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar52 = local_158.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar53 = local_158.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar54 = local_158.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar55 = local_158.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar56 = local_158.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar57 = local_158.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar58 = local_158.Scale3D.ZW.m128d_f64[1]._4_4_;
      }
      iVar1 = (this->GlobalPose).ArrayNum;
      uVar19 = 0;
      if (param_1 < iVar1) {
        uVar19 = uVar23;
      }
      if (uVar19 == 0) {
        local_168 = lVar24;
        local_160 = (longlong)iVar1;
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar4 = (code *)swi(3);
          pTVar20 = (TTransform<double> *)(*pcVar4)();
          return pTVar20;
        }
      }
      pFVar3 = (this->GlobalPose).AllocatorInstance.Data;
      lVar22 = lVar24 * 0x60;
      pFVar2 = pFVar3 + lVar22;
      *(undefined4 *)pFVar2 = uVar35;
      *(undefined4 *)(pFVar2 + 4) = uVar36;
      *(undefined4 *)(pFVar2 + 8) = uVar37;
      *(undefined4 *)(pFVar2 + 0xc) = uVar38;
      pFVar2 = pFVar3 + lVar22 + 0x10;
      *(undefined4 *)pFVar2 = uVar39;
      *(undefined4 *)(pFVar2 + 4) = uVar40;
      *(undefined4 *)(pFVar2 + 8) = uVar41;
      *(undefined4 *)(pFVar2 + 0xc) = uVar42;
      pFVar2 = pFVar3 + lVar22 + 0x20;
      *(undefined4 *)pFVar2 = uVar43;
      *(undefined4 *)(pFVar2 + 4) = uVar44;
      *(undefined4 *)(pFVar2 + 8) = uVar45;
      *(undefined4 *)(pFVar2 + 0xc) = uVar46;
      pFVar2 = pFVar3 + lVar22 + 0x30;
      *(undefined4 *)pFVar2 = uVar47;
      *(undefined4 *)(pFVar2 + 4) = uVar48;
      *(undefined4 *)(pFVar2 + 8) = uVar49;
      *(undefined4 *)(pFVar2 + 0xc) = uVar50;
      pFVar2 = pFVar3 + lVar22 + 0x40;
      *(undefined4 *)pFVar2 = uVar51;
      *(undefined4 *)(pFVar2 + 4) = uVar52;
      *(undefined4 *)(pFVar2 + 8) = uVar53;
      *(undefined4 *)(pFVar2 + 0xc) = uVar54;
      pFVar3 = pFVar3 + lVar22 + 0x50;
      *(undefined4 *)pFVar3 = uVar55;
      *(undefined4 *)(pFVar3 + 4) = uVar56;
      *(undefined4 *)(pFVar3 + 8) = uVar57;
      *(undefined4 *)(pFVar3 + 0xc) = uVar58;
      iVar1 = (this->GlobalPose).ArrayNum;
      uVar19 = 0;
      if (param_1 < iVar1) {
        uVar19 = uVar23;
      }
      if (uVar19 == 0) {
        local_168 = lVar24;
        local_160 = (longlong)iVar1;
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar4 = (code *)swi(3);
          pTVar20 = (TTransform<double> *)(*pcVar4)();
          return pTVar20;
        }
      }
      pFVar2 = (this->GlobalPose).AllocatorInstance.Data;
      dVar8 = *(double *)(pFVar2 + lVar22);
      dVar9 = *(double *)(pFVar2 + lVar22 + 8);
      dVar10 = *(double *)(pFVar2 + lVar22 + 0x10);
      dVar11 = *(double *)(pFVar2 + lVar22 + 0x10 + 8);
      dVar5 = dVar10 * dVar10 + dVar8 * dVar8;
      dVar6 = dVar11 * dVar11 + dVar9 * dVar9;
      auVar29._8_4_ = SUB84(dVar6,0);
      auVar29._0_8_ = dVar5;
      auVar29._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar30._0_8_ = auVar29._8_8_ + dVar5;
      auVar30._8_8_ = dVar5 + dVar6;
      auVar33 = sqrtpd(in_XMM2,auVar30);
      uVar25 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar30._0_8_)
      ;
      uVar27 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar30._8_8_)
      ;
      uVar26 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar30._0_8_)
      ;
      uVar28 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar30._8_8_)
      ;
      auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar33);
      auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar33);
      auVar32._0_8_ = uVar26 & (ulonglong)(auVar31._0_8_ * dVar8);
      uVar7 = uVar28 & (ulonglong)(auVar31._8_8_ * dVar9);
      auVar32._8_4_ = (undefined4)uVar7;
      auVar32._12_4_ = (undefined4)(uVar7 >> 0x20);
      auVar34._0_8_ = uVar25 & (ulonglong)(auVar33._0_8_ * dVar10);
      uVar7 = uVar27 & (ulonglong)(auVar33._8_8_ * dVar11);
      auVar34._8_4_ = (undefined4)uVar7;
      auVar34._12_4_ = (undefined4)(uVar7 >> 0x20);
      auVar33._4_4_ =
           ~(uint)(uVar26 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar33._0_4_ = ~(uint)uVar26 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar33._8_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar33._12_4_ =
           ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      auVar31._4_4_ =
           ~(uint)(uVar25 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar31._0_4_ = ~(uint)uVar25 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar31._8_4_ = ~(uint)uVar27 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar31._12_4_ =
           ~(uint)(uVar27 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(pFVar2 + lVar22) = auVar32 | auVar33;
      *(undefined1 (*) [16])(pFVar2 + lVar22 + 0x10) = auVar34 | auVar31;
    }
    else {
      iVar1 = (this->PoseIndexToElementIndex).ArrayNum;
      uVar19 = 0;
      if (param_1 < iVar1) {
        uVar19 = uVar23;
      }
      if (uVar19 == 0) {
        local_168 = lVar24;
        local_160 = (longlong)iVar1;
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar4 = (code *)swi(3);
          pTVar20 = (TTransform<double> *)(*pcVar4)();
          return pTVar20;
        }
      }
      pTVar20 = URigHierarchy::GetGlobalTransformByIndex
                          (this_00,&local_f8,
                           *(int *)((this->PoseIndexToElementIndex).AllocatorInstance.Data +
                                   lVar24 * 4),false);
      iVar1 = (this->GlobalPose).ArrayNum;
      dVar5 = (pTVar20->Rotation).XY.m128d_f64[0];
      dVar6 = (pTVar20->Rotation).XY.m128d_f64[1];
      dVar8 = (pTVar20->Rotation).ZW.m128d_f64[0];
      dVar9 = (pTVar20->Rotation).ZW.m128d_f64[1];
      dVar10 = (pTVar20->Translation).XY.m128d_f64[0];
      dVar11 = (pTVar20->Translation).XY.m128d_f64[1];
      dVar12 = (pTVar20->Translation).ZW.m128d_f64[0];
      dVar13 = (pTVar20->Translation).ZW.m128d_f64[1];
      dVar14 = (pTVar20->Scale3D).XY.m128d_f64[0];
      dVar15 = (pTVar20->Scale3D).XY.m128d_f64[1];
      dVar16 = (pTVar20->Scale3D).ZW.m128d_f64[0];
      dVar17 = (pTVar20->Scale3D).ZW.m128d_f64[1];
      uVar19 = 0;
      if (param_1 < iVar1) {
        uVar19 = uVar23;
      }
      if (uVar19 == 0) {
        local_168 = lVar24;
        local_160 = (longlong)iVar1;
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar4 = (code *)swi(3);
          pTVar20 = (TTransform<double> *)(*pcVar4)();
          return pTVar20;
        }
      }
      pFVar2 = (this->GlobalPose).AllocatorInstance.Data;
      lVar22 = lVar24 * 0x60;
      *(double *)(pFVar2 + lVar22) = dVar5;
      *(double *)(pFVar2 + lVar22 + 8) = dVar6;
      *(double *)(pFVar2 + lVar22 + 0x10) = dVar8;
      *(double *)(pFVar2 + lVar22 + 0x10 + 8) = dVar9;
      *(double *)(pFVar2 + lVar22 + 0x20) = dVar10;
      *(double *)(pFVar2 + lVar22 + 0x20 + 8) = dVar11;
      *(double *)(pFVar2 + lVar22 + 0x30) = dVar12;
      *(double *)(pFVar2 + lVar22 + 0x30 + 8) = dVar13;
      *(double *)(pFVar2 + lVar22 + 0x40) = dVar14;
      *(double *)(pFVar2 + lVar22 + 0x40 + 8) = dVar15;
      *(double *)(pFVar2 + lVar22 + 0x50) = dVar16;
      *(double *)(pFVar2 + lVar22 + 0x50 + 8) = dVar17;
    }
    iVar1 = (this->GlobalPoseIsDirty).ArrayNum;
    uVar19 = 0;
    if (param_1 < iVar1) {
      uVar19 = uVar23;
    }
    if (uVar19 == 0) {
      local_168 = lVar24;
      local_160 = (longlong)iVar1;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar4 = (code *)swi(3);
        pTVar20 = (TTransform<double> *)(*pcVar4)();
        return pTVar20;
      }
    }
    (this->GlobalPoseIsDirty).AllocatorInstance.Data[lVar24] = (FScriptContainerElement)0x0;
  }
  iVar1 = (this->GlobalPose).ArrayNum;
  uVar19 = 0;
  if (param_1 < iVar1) {
    uVar19 = uVar23;
  }
  if (uVar19 == 0) {
    local_168 = lVar24;
    local_160 = (longlong)iVar1;
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar4 = (code *)swi(3);
      pTVar20 = (TTransform<double> *)(*pcVar4)();
      return pTVar20;
    }
  }
  pFVar2 = (this->GlobalPose).AllocatorInstance.Data;
  FStatsHierarchical::EndMeasurement();
  return (TTransform<double> *)(pFVar2 + lVar24 * 0x60);
}

// GetLocalTransform @ 14a415a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTransform<double> * __thiscall
FControlRigPoseAdapter::GetLocalTransform(FControlRigPoseAdapter *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  TTransform<double> *pTVar19;
  URigHierarchy *this_00;
  TTransform<double> *pTVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_188;
  lVar23 = (longlong)param_1;
  FStatsHierarchical::BeginMeasurement("FControlRigPoseAdapter::GetLocalTransform");
  if ((param_1 < 0) || ((this->LocalPose).ArrayNum <= param_1)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("LocalPose.IsValidIndex(InIndex)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigPoseAdapter.cpp"
                        ,0x1a5,L"");
    if (bVar17) {
      pcVar3 = (code *)swi(3);
      pTVar19 = (TTransform<double> *)(*pcVar3)();
      return pTVar19;
    }
    if (-1 < param_1) goto LAB_14a415a81;
LAB_14a415a86:
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("LocalPoseIsDirty.IsValidIndex(InIndex)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigPoseAdapter.cpp"
                        ,0x1a6,L"");
    if (bVar17) {
      pcVar3 = (code *)swi(3);
      pTVar19 = (TTransform<double> *)(*pcVar3)();
      return pTVar19;
    }
    if (-1 < param_1) goto LAB_14a415ab0;
LAB_14a415ab5:
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("ParentPoseIndices.IsValidIndex(InIndex)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigPoseAdapter.cpp"
                        ,0x1a7,L"");
    if (bVar17) {
      pcVar3 = (code *)swi(3);
      pTVar19 = (TTransform<double> *)(*pcVar3)();
      return pTVar19;
    }
    if (-1 < param_1) goto LAB_14a415adf;
  }
  else {
LAB_14a415a81:
    if ((this->LocalPoseIsDirty).ArrayNum <= param_1) goto LAB_14a415a86;
LAB_14a415ab0:
    if ((this->ParentPoseIndices).ArrayNum <= param_1) goto LAB_14a415ab5;
LAB_14a415adf:
    if (param_1 < (this->RequiresHierarchyForSpaceConversion).ArrayNum) goto LAB_14a415b0a;
  }
  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                     ("RequiresHierarchyForSpaceConversion.IsValidIndex(InIndex)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigPoseAdapter.cpp"
                      ,0x1a8,L"");
  if (bVar17) {
    pcVar3 = (code *)swi(3);
    pTVar19 = (TTransform<double> *)(*pcVar3)();
    return pTVar19;
  }
LAB_14a415b0a:
  this_00 = FRigHierarchyPoseAdapter::GetHierarchy((FRigHierarchyPoseAdapter *)this);
  if (this_00 == (URigHierarchy *)0x0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Hierarchy",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigPoseAdapter.cpp"
                        ,0x1ab,L"");
    if (bVar17) {
      pcVar3 = (code *)swi(3);
      pTVar19 = (TTransform<double> *)(*pcVar3)();
      return pTVar19;
    }
  }
  iVar1 = (this->LocalPoseIsDirty).ArrayNum;
  uVar22 = (uint)~param_1 >> 0x1f;
  uVar18 = 0;
  if (param_1 < iVar1) {
    uVar18 = uVar22;
  }
  if (uVar18 == 0) {
    local_168 = lVar23;
    local_160 = (longlong)iVar1;
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar3 = (code *)swi(3);
      pTVar19 = (TTransform<double> *)(*pcVar3)();
      return pTVar19;
    }
  }
  if ((this->LocalPoseIsDirty).AllocatorInstance.Data[lVar23] != (FScriptContainerElement)0x0) {
    iVar1 = (this->GlobalPoseIsDirty).ArrayNum;
    uVar18 = 0;
    if (param_1 < iVar1) {
      uVar18 = uVar22;
    }
    if (uVar18 == 0) {
      local_168 = lVar23;
      local_160 = (longlong)iVar1;
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar3 = (code *)swi(3);
        pTVar19 = (TTransform<double> *)(*pcVar3)();
        return pTVar19;
      }
    }
    if ((this->GlobalPoseIsDirty).AllocatorInstance.Data[lVar23] != (FScriptContainerElement)0x0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("GlobalPoseIsDirty[InIndex] == false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigPoseAdapter.cpp"
                          ,0x1af,L"");
      if (bVar17) {
        pcVar3 = (code *)swi(3);
        pTVar19 = (TTransform<double> *)(*pcVar3)();
        return pTVar19;
      }
    }
    iVar1 = (this->RequiresHierarchyForSpaceConversion).ArrayNum;
    uVar18 = 0;
    if (param_1 < iVar1) {
      uVar18 = uVar22;
    }
    if (uVar18 == 0) {
      local_168 = lVar23;
      local_160 = (longlong)iVar1;
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar3 = (code *)swi(3);
        pTVar19 = (TTransform<double> *)(*pcVar3)();
        return pTVar19;
      }
    }
    if ((((this->RequiresHierarchyForSpaceConversion).AllocatorInstance.Data[lVar23] ==
          (FScriptContainerElement)0x0) || (param_1 < 0)) ||
       ((this->PoseIndexToElementIndex).ArrayNum <= param_1)) {
      iVar1 = (this->ParentPoseIndices).ArrayNum;
      uVar18 = 0;
      if (param_1 < iVar1) {
        uVar18 = uVar22;
      }
      if (uVar18 == 0) {
        local_168 = lVar23;
        local_160 = (longlong)iVar1;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar3 = (code *)swi(3);
          pTVar19 = (TTransform<double> *)(*pcVar3)();
          return pTVar19;
        }
      }
      iVar1 = *(int *)((this->ParentPoseIndices).AllocatorInstance.Data + lVar23 * 4);
      pTVar19 = GetGlobalTransform(this,param_1);
      if (iVar1 != -1) {
        pTVar20 = GetGlobalTransform(this,iVar1);
        pTVar19 = UE::Math::TTransform<double>::GetRelativeTransform(pTVar19,&local_f8,pTVar20);
      }
      dVar4 = (pTVar19->Rotation).XY.m128d_f64[0];
      dVar5 = (pTVar19->Rotation).XY.m128d_f64[1];
      dVar7 = (pTVar19->Rotation).ZW.m128d_f64[0];
      dVar8 = (pTVar19->Rotation).ZW.m128d_f64[1];
      dVar9 = (pTVar19->Translation).XY.m128d_f64[0];
      dVar10 = (pTVar19->Translation).XY.m128d_f64[1];
      dVar11 = (pTVar19->Translation).ZW.m128d_f64[0];
      dVar12 = (pTVar19->Translation).ZW.m128d_f64[1];
      dVar13 = (pTVar19->Scale3D).XY.m128d_f64[0];
      dVar14 = (pTVar19->Scale3D).XY.m128d_f64[1];
      dVar15 = (pTVar19->Scale3D).ZW.m128d_f64[0];
      dVar16 = (pTVar19->Scale3D).ZW.m128d_f64[1];
      iVar1 = (this->LocalPose).ArrayNum;
      uVar18 = 0;
      if (param_1 < iVar1) {
        uVar18 = uVar22;
      }
      if (uVar18 == 0) {
        local_168 = lVar23;
        local_160 = (longlong)iVar1;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar3 = (code *)swi(3);
          pTVar19 = (TTransform<double> *)(*pcVar3)();
          return pTVar19;
        }
      }
      pFVar2 = (this->LocalPose).AllocatorInstance.Data;
      lVar21 = lVar23 * 0x60;
      *(double *)(pFVar2 + lVar21) = dVar4;
      *(double *)(pFVar2 + lVar21 + 8) = dVar5;
      *(double *)(pFVar2 + lVar21 + 0x10) = dVar7;
      *(double *)(pFVar2 + lVar21 + 0x10 + 8) = dVar8;
      *(double *)(pFVar2 + lVar21 + 0x20) = dVar9;
      *(double *)(pFVar2 + lVar21 + 0x20 + 8) = dVar10;
      *(double *)(pFVar2 + lVar21 + 0x30) = dVar11;
      *(double *)(pFVar2 + lVar21 + 0x30 + 8) = dVar12;
      *(double *)(pFVar2 + lVar21 + 0x40) = dVar13;
      *(double *)(pFVar2 + lVar21 + 0x40 + 8) = dVar14;
      *(double *)(pFVar2 + lVar21 + 0x50) = dVar15;
      *(double *)(pFVar2 + lVar21 + 0x50 + 8) = dVar16;
      iVar1 = (this->LocalPose).ArrayNum;
      uVar18 = 0;
      if (param_1 < iVar1) {
        uVar18 = uVar22;
      }
      if (uVar18 == 0) {
        local_168 = lVar23;
        local_160 = (longlong)iVar1;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar3 = (code *)swi(3);
          pTVar19 = (TTransform<double> *)(*pcVar3)();
          return pTVar19;
        }
      }
      pFVar2 = (this->LocalPose).AllocatorInstance.Data;
      dVar7 = *(double *)(pFVar2 + lVar21);
      dVar8 = *(double *)(pFVar2 + lVar21 + 8);
      dVar9 = *(double *)(pFVar2 + lVar21 + 0x10);
      dVar10 = *(double *)(pFVar2 + lVar21 + 0x10 + 8);
      dVar4 = dVar7 * dVar7 + dVar9 * dVar9;
      dVar5 = dVar8 * dVar8 + dVar10 * dVar10;
      auVar28._8_4_ = SUB84(dVar5,0);
      auVar28._0_8_ = dVar4;
      auVar28._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar29._0_8_ = auVar28._8_8_ + dVar4;
      auVar29._8_8_ = dVar4 + dVar5;
      auVar32 = sqrtpd(in_XMM2,auVar29);
      uVar24 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar29._0_8_)
      ;
      uVar26 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar29._8_8_)
      ;
      uVar25 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar29._0_8_)
      ;
      uVar27 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar29._8_8_)
      ;
      auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar32);
      auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar32);
      auVar31._0_8_ = uVar25 & (ulonglong)(auVar30._0_8_ * dVar7);
      uVar6 = uVar27 & (ulonglong)(auVar30._8_8_ * dVar8);
      auVar31._8_4_ = (undefined4)uVar6;
      auVar31._12_4_ = (undefined4)(uVar6 >> 0x20);
      auVar33._0_8_ = uVar24 & (ulonglong)(auVar32._0_8_ * dVar9);
      uVar6 = uVar26 & (ulonglong)(auVar32._8_8_ * dVar10);
      auVar33._8_4_ = (undefined4)uVar6;
      auVar33._12_4_ = (undefined4)(uVar6 >> 0x20);
      auVar32._4_4_ =
           ~(uint)(uVar25 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar32._0_4_ = ~(uint)uVar25 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar32._8_4_ = ~(uint)uVar27 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar32._12_4_ =
           ~(uint)(uVar27 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      auVar30._4_4_ =
           ~(uint)(uVar24 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar30._0_4_ = ~(uint)uVar24 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar30._8_4_ = ~(uint)uVar26 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar30._12_4_ =
           ~(uint)(uVar26 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(pFVar2 + lVar21) = auVar31 | auVar32;
      *(undefined1 (*) [16])(pFVar2 + lVar21 + 0x10) = auVar33 | auVar30;
    }
    else {
      iVar1 = (this->PoseIndexToElementIndex).ArrayNum;
      uVar18 = 0;
      if (param_1 < iVar1) {
        uVar18 = uVar22;
      }
      if (uVar18 == 0) {
        local_168 = lVar23;
        local_160 = (longlong)iVar1;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar3 = (code *)swi(3);
          pTVar19 = (TTransform<double> *)(*pcVar3)();
          return pTVar19;
        }
      }
      pTVar19 = URigHierarchy::GetLocalTransformByIndex
                          (this_00,&local_158,
                           *(int *)((this->PoseIndexToElementIndex).AllocatorInstance.Data +
                                   lVar23 * 4),false);
      iVar1 = (this->LocalPose).ArrayNum;
      dVar4 = (pTVar19->Rotation).XY.m128d_f64[0];
      dVar5 = (pTVar19->Rotation).XY.m128d_f64[1];
      dVar7 = (pTVar19->Rotation).ZW.m128d_f64[0];
      dVar8 = (pTVar19->Rotation).ZW.m128d_f64[1];
      dVar9 = (pTVar19->Translation).XY.m128d_f64[0];
      dVar10 = (pTVar19->Translation).XY.m128d_f64[1];
      dVar11 = (pTVar19->Translation).ZW.m128d_f64[0];
      dVar12 = (pTVar19->Translation).ZW.m128d_f64[1];
      dVar13 = (pTVar19->Scale3D).XY.m128d_f64[0];
      dVar14 = (pTVar19->Scale3D).XY.m128d_f64[1];
      dVar15 = (pTVar19->Scale3D).ZW.m128d_f64[0];
      dVar16 = (pTVar19->Scale3D).ZW.m128d_f64[1];
      uVar18 = 0;
      if (param_1 < iVar1) {
        uVar18 = uVar22;
      }
      if (uVar18 == 0) {
        local_168 = lVar23;
        local_160 = (longlong)iVar1;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar3 = (code *)swi(3);
          pTVar19 = (TTransform<double> *)(*pcVar3)();
          return pTVar19;
        }
      }
      pFVar2 = (this->LocalPose).AllocatorInstance.Data;
      lVar21 = lVar23 * 0x60;
      *(double *)(pFVar2 + lVar21) = dVar4;
      *(double *)(pFVar2 + lVar21 + 8) = dVar5;
      *(double *)(pFVar2 + lVar21 + 0x10) = dVar7;
      *(double *)(pFVar2 + lVar21 + 0x10 + 8) = dVar8;
      *(double *)(pFVar2 + lVar21 + 0x20) = dVar9;
      *(double *)(pFVar2 + lVar21 + 0x20 + 8) = dVar10;
      *(double *)(pFVar2 + lVar21 + 0x30) = dVar11;
      *(double *)(pFVar2 + lVar21 + 0x30 + 8) = dVar12;
      *(double *)(pFVar2 + lVar21 + 0x40) = dVar13;
      *(double *)(pFVar2 + lVar21 + 0x40 + 8) = dVar14;
      *(double *)(pFVar2 + lVar21 + 0x50) = dVar15;
      *(double *)(pFVar2 + lVar21 + 0x50 + 8) = dVar16;
    }
    iVar1 = (this->LocalPoseIsDirty).ArrayNum;
    uVar18 = 0;
    if (param_1 < iVar1) {
      uVar18 = uVar22;
    }
    if (uVar18 == 0) {
      local_168 = lVar23;
      local_160 = (longlong)iVar1;
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar3 = (code *)swi(3);
        pTVar19 = (TTransform<double> *)(*pcVar3)();
        return pTVar19;
      }
    }
    (this->LocalPoseIsDirty).AllocatorInstance.Data[lVar23] = (FScriptContainerElement)0x0;
  }
  iVar1 = (this->LocalPose).ArrayNum;
  uVar18 = 0;
  if (param_1 < iVar1) {
    uVar18 = uVar22;
  }
  if (uVar18 == 0) {
    local_168 = lVar23;
    local_160 = (longlong)iVar1;
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar3 = (code *)swi(3);
      pTVar19 = (TTransform<double> *)(*pcVar3)();
      return pTVar19;
    }
  }
  pFVar2 = (this->LocalPose).AllocatorInstance.Data;
  FStatsHierarchical::EndMeasurement();
  return (TTransform<double> *)(pFVar2 + lVar23 * 0x60);
}

// IsUpdateToDate @ 14a428c80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FControlRigPoseAdapter::IsUpdateToDate(FControlRigPoseAdapter *this,URigHierarchy *param_1)

{
  bool bVar1;
  
  FStatsHierarchical::BeginMeasurement("FControlRigPoseAdapter::IsUpdateToDate");
  bVar1 = FRigHierarchyPoseAdapter::IsUpdateToDate((FRigHierarchyPoseAdapter *)this,param_1);
  if (((bVar1) && ((this->LocalPose).ArrayNum != 0)) && ((this->GlobalPose).ArrayNum != 0)) {
    FStatsHierarchical::EndMeasurement();
    return true;
  }
  FStatsHierarchical::EndMeasurement();
  return false;
}

// MarkDependentsDirty @ 14a42cda0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FControlRigPoseAdapter::MarkDependentsDirty(FControlRigPoseAdapter *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  URigHierarchy *pUVar4;
  bool *pbVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  FStatsHierarchical::BeginMeasurement("FControlRigPoseAdapter::MarkDependentsDirty");
  pUVar4 = FRigHierarchyPoseAdapter::GetHierarchy((FRigHierarchyPoseAdapter *)this);
  if ((pUVar4 != (URigHierarchy *)0x0) && (((uint)pUVar4->_padding_ >> 0x1e & 1) == 0)) {
    ComputeDependentTransforms(this);
    iVar1 = (this->Dependents).ArrayNum;
    pFVar6 = (this->Dependents).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x20;
    while( true ) {
      if ((this->Dependents).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FControlRigPoseAdapter::FDependentTransform,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar6 == pFVar7) break;
      pbVar5 = FRigTransformDirtyState::Get
                         ((FRigTransformDirtyState *)(*(longlong *)(pFVar6 + 0x18) + 0x10));
      if ((*pbVar5 != false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Dependent.DirtyState->Local.Get() == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigPoseAdapter.cpp"
                             ,0x24c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FRigTransformDirtyState::Set(*(FRigTransformDirtyState **)(pFVar6 + 0x18),true);
      pFVar6 = pFVar6 + 0x20;
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// PostLinked @ 14a433a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigPoseAdapter::PostLinked(FControlRigPoseAdapter *this,URigHierarchy *param_1)

{
  int *piVar1;
  longlong *plVar2;
  TArray<FControlRigPoseAdapter::FDependentTransform,TSizedDefaultAllocator<32>_> *pTVar3;
  ForElementType<FRigBaseElement_*> FVar4;
  int iVar5;
  FRigControlElement *this_00;
  code *pcVar6;
  FControlRigPoseAdapter *this_01;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  URigHierarchy *pUVar11;
  longlong lVar12;
  UScriptStruct *pUVar13;
  FRigCurrentAndInitialDirtyState *pFVar14;
  FRigBaseElement *pFVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  FRigTransformElement *pFVar20;
  undefined1 *puVar21;
  uint uVar22;
  FRigControlElement *this_02;
  ForAnyElementType FVar23;
  ForElementType<FRigBaseElement_*> FVar24;
  longlong lVar25;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188;
  undefined1 local_187;
  undefined1 local_186;
  undefined1 local_185;
  undefined2 local_184 [2];
  uint local_180 [2];
  FScriptContainerElement *local_178;
  TArray<FRigTransformElement_*,TSizedDefaultAllocator<32>_> local_170;
  TArray<FRigTransformElement_*,TSizedDefaultAllocator<32>_> local_160;
  FRigTransformElement *local_150;
  FRigElementKeyAndIndex local_148;
  FScriptContainerElement *local_138;
  FControlRigPoseAdapter *local_130;
  URigHierarchy *local_128;
  TArray<FRigBaseElement_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_120;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_130 = this;
  local_128 = param_1;
  FStatsHierarchical::BeginMeasurement("FControlRigPoseAdapter::PostLinked");
  FRigHierarchyPoseAdapter::PostLinked((FRigHierarchyPoseAdapter *)this,param_1);
  FRigHierarchyPoseAdapter::SortHierarchyStorage((FRigHierarchyPoseAdapter *)this);
  URigHierarchy::GetElementsOfType<FRigTransformElement>(param_1,&local_160,false);
  iVar8 = local_160.ArrayNum;
  pFVar19 = local_160.AllocatorInstance.Data + (longlong)local_160.ArrayNum * 8;
  FVar23.Data = local_160.AllocatorInstance.Data;
  while( true ) {
    if (local_160.ArrayNum != iVar8) {
      local_188 = 0;
      `TCheckedPointerIterator<FRigTransformElement_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_188);
    }
    if (FVar23.Data == pFVar19) break;
    pFVar20 = *(FRigTransformElement **)FVar23.Data;
    URigHierarchy::GetTransform(param_1,&local_108,pFVar20,InitialLocal);
    URigHierarchy::GetTransform(param_1,&local_a8,pFVar20,CurrentLocal);
    FVar23.Data = FVar23.Data + 8;
  }
  uVar16 = (ulonglong)local_160.ArrayNum;
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  local_180[0] = local_160.ArrayNum;
  pFVar19 = local_160.AllocatorInstance.Data + uVar16 * 8;
  FVar23.Data = local_160.AllocatorInstance.Data;
  local_178 = pFVar19;
LAB_14a433b20:
  if (local_160.ArrayNum != (uint)uVar16) {
    local_187 = 0;
    `TCheckedPointerIterator<FRigTransformElement_*_const,int,0>::operator!='::__l2::<lambda_1>::
    operator()(&local_187);
  }
  if (FVar23.Data != pFVar19) {
    local_150 = *(FRigTransformElement **)FVar23.Data;
    if (local_150 != (FRigTransformElement *)0x0) {
      if (*(int *)&(this->ElementIndexToPoseIndex).field_0x8 !=
          *(int *)&(this->ElementIndexToPoseIndex).field_0x34) {
        puVar21 = *(undefined1 **)&(this->ElementIndexToPoseIndex).field_0x40;
        puVar17 = &(this->ElementIndexToPoseIndex).field_0x38;
        if (puVar21 != (undefined1 *)0x0) {
          puVar17 = puVar21;
        }
        iVar8 = *(int *)(puVar17 +
                        ((ulonglong)(*(int *)&(this->ElementIndexToPoseIndex).field_0x48 - 1) &
                        (ulonglong)*(ushort *)((longlong)&local_150->_padding_ + 4)) * 4);
        if (iVar8 != -1) {
          do {
            if (*(ushort *)(*(longlong *)&this->ElementIndexToPoseIndex + (longlong)iVar8 * 0xc) ==
                *(ushort *)((longlong)&local_150->_padding_ + 4)) goto LAB_14a433cad;
            iVar8 = *(int *)(*(longlong *)&this->ElementIndexToPoseIndex + 4 + (longlong)iVar8 * 0xc
                            );
          } while (iVar8 != -1);
        }
      }
      for (FVar10.Data = local_170.AllocatorInstance.Data;
          FVar10.Data != local_170.AllocatorInstance.Data + (longlong)local_170.ArrayNum * 8;
          FVar10.Data = FVar10.Data + 8) {
        if (*(FRigTransformElement **)FVar10.Data == local_150) goto LAB_14a433cad;
      }
      pUVar11 = FRigHierarchyPoseAdapter::GetHierarchy((FRigHierarchyPoseAdapter *)this);
      URigHierarchy::GetParents(pUVar11,&local_120,(FRigBaseElement *)local_150,false);
      iVar8 = local_120.ArrayNum;
      FVar24 = (ForElementType<FRigBaseElement_*>)&local_120;
      if (local_120.AllocatorInstance.SecondaryData != (ForElementType<FRigBaseElement_*>)0x0) {
        FVar24 = local_120.AllocatorInstance.SecondaryData;
      }
      FVar4 = (ForElementType<FRigBaseElement_*>)((longlong)FVar24 + (longlong)iVar8 * 8);
      do {
        if (local_120.ArrayNum != iVar8) {
          local_186 = 0;
          `TCheckedPointerIterator<FRigBaseElement_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_186);
        }
        if (FVar24 == FVar4) goto LAB_14a433c9a;
        pFVar20 = *(FRigTransformElement **)FVar24;
        if (pFVar20 == (FRigTransformElement *)0x0) {
LAB_14a433c6b:
          pFVar20 = (FRigTransformElement *)0x0;
        }
        else {
          lVar12 = (**(code **)(pFVar20->_padding_ + 0x10))(pFVar20);
          pUVar13 = FRigTransformElement::StaticStruct();
          if (pUVar13 == (UScriptStruct *)0x0) goto LAB_14a433c6b;
          iVar5 = (int)pUVar13->_padding_;
          if ((*(int *)(lVar12 + 0x38) < iVar5) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar5 * 8) !=
              &pUVar13->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (!bVar7) goto LAB_14a433c6b;
        }
        bVar7 = `FControlRigPoseAdapter::PostLinked'::__l2::Local::ProcessTransformElement
                          (this,&local_170,pFVar20);
        if (bVar7) goto LAB_14a433c8b;
        FVar24 = (ForElementType<FRigBaseElement_*>)((longlong)FVar24 + 8);
      } while( true );
    }
    goto LAB_14a433cad;
  }
  pTVar3 = &this->Dependents;
  piVar1 = &(this->Dependents).ArrayMax;
  (this->Dependents).ArrayNum = 0;
  if ((this->Dependents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  uVar18 = local_170.ArrayNum * 3;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (*piVar1 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar18,&pTVar3->AllocatorInstance,(this->Dependents).ArrayNum,piVar1);
  }
  uVar16 = (ulonglong)local_170.ArrayNum;
  local_178 = (FScriptContainerElement *)CONCAT44(local_178._4_4_,local_170.ArrayNum);
  local_138 = local_170.AllocatorInstance.Data + uVar16 * 8;
  FVar23.Data = local_170.AllocatorInstance.Data;
  do {
    while( true ) {
      pFVar19 = local_138;
      if (local_170.ArrayNum != (int)uVar16) {
        local_185 = 0;
        `TCheckedPointerIterator<FRigTransformElement_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_185);
      }
      this_01 = local_130;
      if (FVar23.Data == pFVar19) {
        local_184[0] = 0x101;
        UpdateDirtyStates(local_130,SUB82(local_184,0));
        pUVar11 = local_128;
        uVar18 = 0;
        if (0 < (this_01->PoseIndexToElementIndex).ArrayNum) {
          lVar12 = 0;
          lVar25 = 0;
          do {
            uVar22 = ~uVar18 >> 0x1f;
            uVar9 = 0;
            if ((int)uVar18 < (this_01->PoseIndexToElementIndex).ArrayNum) {
              uVar9 = uVar22;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar8 = *(int *)((this_01->PoseIndexToElementIndex).AllocatorInstance.Data + lVar12 * 4)
            ;
            if (iVar8 != -1) {
              pFVar15 = URigHierarchy::Get(pUVar11,iVar8);
              if (pFVar15 == (FRigBaseElement *)0x0) {
                local_148.Key = &FRigElementKeyAndIndex::InvalidKey;
                local_148.Index = &FRigElementKeyAndIndex::InvalidIndex;
              }
              else {
                local_148.Key = &pFVar15->Key;
                local_148.Index = &pFVar15->Index;
              }
              uVar9 = 0;
              if ((int)uVar18 < (this_01->LocalPoseIsDirty).ArrayNum) {
                uVar9 = uVar22;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar19 = (this_01->LocalPoseIsDirty).AllocatorInstance.Data;
              uVar9 = 0;
              if ((int)uVar18 < (this_01->LocalPose).ArrayNum) {
                uVar9 = uVar22;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FRigHierarchyPoseAdapter::RelinkTransformStorage
                        ((FRigHierarchyPoseAdapter *)this_01,&local_148,CurrentLocal,Pose,
                         (TTransform<double> *)
                         ((this_01->LocalPose).AllocatorInstance.Data + lVar25),
                         (bool *)(pFVar19 + lVar12));
              uVar9 = 0;
              if ((int)uVar18 < (this_01->GlobalPoseIsDirty).ArrayNum) {
                uVar9 = uVar22;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar19 = (this_01->GlobalPoseIsDirty).AllocatorInstance.Data;
              uVar9 = 0;
              if ((int)uVar18 < (this_01->GlobalPose).ArrayNum) {
                uVar9 = uVar22;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FRigHierarchyPoseAdapter::RelinkTransformStorage
                        ((FRigHierarchyPoseAdapter *)this_01,&local_148,CurrentGlobal,Pose,
                         (TTransform<double> *)
                         ((this_01->GlobalPose).AllocatorInstance.Data + lVar25),
                         (bool *)(pFVar19 + lVar12));
            }
            uVar18 = uVar18 + 1;
            lVar12 = lVar12 + 1;
            lVar25 = lVar25 + 0x60;
          } while ((int)uVar18 < (this_01->PoseIndexToElementIndex).ArrayNum);
        }
        local_180[0] = CONCAT22(local_180[0]._2_2_,0x101);
        UpdateDirtyStates(this_01,SUB82(local_180,0));
        FRigHierarchyPoseAdapter::ShrinkHierarchyStorage((FRigHierarchyPoseAdapter *)this_01);
        if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.AllocatorInstance.Data);
        }
        if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.AllocatorInstance.Data);
        }
        FStatsHierarchical::EndMeasurement();
        return;
      }
      this_00 = *(FRigControlElement **)FVar23.Data;
      if (this_00 == (FRigControlElement *)0x0) goto LAB_14a433e3b;
      lVar12 = (**(code **)(*(longlong *)this_00 + 0x10))(this_00);
      pUVar13 = FRigBoneElement::StaticStruct();
      if (pUVar13 != (UScriptStruct *)0x0) break;
LAB_14a433def:
      lVar12 = (**(code **)(*(longlong *)this_00 + 0x10))(this_00);
      pUVar13 = FRigControlElement::StaticStruct();
      if (pUVar13 == (UScriptStruct *)0x0) {
LAB_14a433e3b:
        this_02 = (FRigControlElement *)0x0;
      }
      else {
        iVar8 = (int)pUVar13->_padding_;
        if ((*(int *)(lVar12 + 0x38) < iVar8) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar13->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (!bVar7) goto LAB_14a433e3b;
        this_02 = this_00;
        if ((this_00->Settings).AnimationType == AnimationChannel) goto LAB_14a433f3d;
      }
      pFVar14 = FRigTransformElement::GetDirtyState((FRigTransformElement *)this_00);
      plVar2 = (longlong *)&this_00->field_0x10;
      iVar8 = (this->Dependents).ArrayNum;
      puVar21 = &this_00->field_0x1c;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->Dependents).ArrayNum = iVar8 + 1;
      pFVar19 = (pTVar3->AllocatorInstance).Data;
      lVar12 = (longlong)iVar8 * 0x20;
      *(longlong **)(pFVar19 + lVar12) = plVar2;
      *(undefined1 **)(pFVar19 + lVar12 + 8) = puVar21;
      *(undefined8 *)(pFVar19 + lVar12 + 0x10) = 3;
      *(FRigCurrentAndInitialDirtyState **)(pFVar19 + lVar12 + 0x18) = pFVar14;
      if (this_02 != (FRigControlElement *)0x0) {
        pFVar14 = FRigControlElement::GetOffsetDirtyState(this_02);
        iVar8 = (this->Dependents).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->Dependents).ArrayNum = iVar8 + 1;
        pFVar19 = (pTVar3->AllocatorInstance).Data;
        lVar12 = (longlong)iVar8 * 0x20;
        *(longlong **)(pFVar19 + lVar12) = plVar2;
        *(undefined1 **)(pFVar19 + lVar12 + 8) = puVar21;
        *(undefined4 *)(pFVar19 + lVar12 + 0x10) = 3;
        *(undefined4 *)(pFVar19 + lVar12 + 0x14) = 1;
        *(FRigCurrentAndInitialDirtyState **)(pFVar19 + lVar12 + 0x18) = pFVar14;
        pFVar14 = FRigControlElement::GetShapeDirtyState(this_02);
        iVar8 = (this->Dependents).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->Dependents).ArrayNum = iVar8 + 1;
        pFVar19 = (pTVar3->AllocatorInstance).Data;
        lVar12 = (longlong)iVar8 * 0x20;
        *(longlong **)(pFVar19 + lVar12) = plVar2;
        *(undefined1 **)(pFVar19 + lVar12 + 8) = puVar21;
        *(undefined4 *)(pFVar19 + lVar12 + 0x10) = 3;
        *(undefined4 *)(pFVar19 + lVar12 + 0x14) = 2;
        *(FRigCurrentAndInitialDirtyState **)(pFVar19 + lVar12 + 0x18) = pFVar14;
      }
LAB_14a433f3d:
      uVar16 = (ulonglong)local_178 & 0xffffffff;
      FVar23.Data = FVar23.Data + 8;
    }
    iVar8 = (int)pUVar13->_padding_;
    if ((*(int *)(lVar12 + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar13->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((!bVar7) || (this_00->field_0x128 != '\0')) goto LAB_14a433def;
    if (local_170.AllocatorInstance.Data ==
        local_170.AllocatorInstance.Data + (longlong)local_170.ArrayNum * 8) goto LAB_14a433f3d;
    FVar10.Data = local_170.AllocatorInstance.Data;
    do {
      if (*(longlong *)FVar10.Data == *(longlong *)&this_00->field_0x120) goto LAB_14a433def;
      FVar10.Data = FVar10.Data + 8;
    } while (FVar10.Data != local_170.AllocatorInstance.Data + (longlong)local_170.ArrayNum * 8);
    uVar16 = (ulonglong)local_178 & 0xffffffff;
    FVar23.Data = FVar23.Data + 8;
  } while( true );
LAB_14a433c8b:
  TArray<FRigTransformElement_*,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FRigTransformElement_*_const_&>(&local_170,&local_150);
LAB_14a433c9a:
  pFVar19 = local_178;
  if (local_120.AllocatorInstance.SecondaryData != (ForElementType<FRigBaseElement_*>)0x0) {
    FMemory::Free((void *)local_120.AllocatorInstance.SecondaryData);
    pFVar19 = local_178;
  }
LAB_14a433cad:
  uVar16 = (ulonglong)local_180[0];
  FVar23.Data = FVar23.Data + 8;
  goto LAB_14a433b20;
}

// PreUnlinked @ 14a435550

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigPoseAdapter::PreUnlinked(FControlRigPoseAdapter *this,URigHierarchy *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  URigHierarchy *this_00;
  FRigBaseElement *pFVar5;
  longlong lVar6;
  uint uVar7;
  FRigElementKeyAndIndex local_28;
  
  FStatsHierarchical::BeginMeasurement("FControlRigPoseAdapter::PreUnlinked");
  FStatsHierarchical::BeginMeasurement("FControlRigPoseAdapter::UnlinkTransformStorage");
  this_00 = FRigHierarchyPoseAdapter::GetHierarchy((FRigHierarchyPoseAdapter *)this);
  if ((this_00 != (URigHierarchy *)0x0) && (uVar7 = 0, 0 < (this->PoseIndexToElementIndex).ArrayNum)
     ) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->PoseIndexToElementIndex).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = *(int *)((this->PoseIndexToElementIndex).AllocatorInstance.Data + lVar6);
      if (iVar1 != -1) {
        pFVar5 = URigHierarchy::Get(this_00,iVar1);
        if (pFVar5 == (FRigBaseElement *)0x0) {
          local_28.Key = &FRigElementKeyAndIndex::InvalidKey;
          local_28.Index = &FRigElementKeyAndIndex::InvalidIndex;
        }
        else {
          local_28.Key = &pFVar5->Key;
          local_28.Index = &pFVar5->Index;
        }
        FRigHierarchyPoseAdapter::RestoreTransformStorage
                  ((FRigHierarchyPoseAdapter *)this,&local_28,CurrentLocal,Pose,false);
        FRigHierarchyPoseAdapter::RestoreTransformStorage
                  ((FRigHierarchyPoseAdapter *)this,&local_28,CurrentGlobal,Pose,false);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 4;
    } while ((int)uVar7 < (this->PoseIndexToElementIndex).ArrayNum);
  }
  TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
           *)&this->ElementIndexToPoseIndex);
  (this->PoseIndexToElementIndex).ArrayNum = 0;
  if ((this->PoseIndexToElementIndex).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PoseIndexToElementIndex).AllocatorInstance,0,
               &(this->PoseIndexToElementIndex).ArrayMax);
  }
  FStatsHierarchical::EndMeasurement();
  FRigHierarchyPoseAdapter::UpdateHierarchyStorage((FRigHierarchyPoseAdapter *)this);
  FRigHierarchyPoseAdapter::PreUnlinked((FRigHierarchyPoseAdapter *)this,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// ProcessTransformElement @ 14a435fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
`FControlRigPoseAdapter::PostLinked'::__l2::Local::ProcessTransformElement
          (FControlRigPoseAdapter *param_1,
          TArray<FRigTransformElement_*,TSizedDefaultAllocator<32>_> *param_2,
          FRigTransformElement *param_3)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FRigBaseElement_*> FVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  URigHierarchy *this;
  longlong lVar7;
  UScriptStruct *pUVar8;
  int iVar9;
  undefined1 *puVar10;
  FRigTransformElement *pFVar11;
  ForElementType<FRigBaseElement_*> FVar12;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  FRigTransformElement *local_60;
  TArray<FRigBaseElement_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_3 == (FRigTransformElement *)0x0) {
    return false;
  }
  uVar3 = *(ushort *)((longlong)&param_3->_padding_ + 4);
  if (*(int *)&(param_1->ElementIndexToPoseIndex).field_0x8 !=
      *(int *)&(param_1->ElementIndexToPoseIndex).field_0x34) {
    puVar10 = *(undefined1 **)&(param_1->ElementIndexToPoseIndex).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(param_1->ElementIndexToPoseIndex).field_0x38;
    }
    iVar9 = *(int *)(puVar10 +
                    ((ulonglong)(*(int *)&(param_1->ElementIndexToPoseIndex).field_0x48 - 1) &
                    (ulonglong)uVar3) * 4);
    if (iVar9 != -1) {
      do {
        if (*(ushort *)(*(longlong *)&param_1->ElementIndexToPoseIndex + (longlong)iVar9 * 0xc) ==
            uVar3) {
          return true;
        }
        iVar9 = *(int *)(*(longlong *)&param_1->ElementIndexToPoseIndex + 4 + (longlong)iVar9 * 0xc)
        ;
      } while (iVar9 != -1);
    }
  }
  pFVar6 = (param_2->AllocatorInstance).Data;
  pFVar1 = pFVar6 + (longlong)param_2->ArrayNum * 8;
  for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 8) {
    if (*(FRigTransformElement **)pFVar6 == param_3) {
      return true;
    }
  }
  local_60 = param_3;
  this = FRigHierarchyPoseAdapter::GetHierarchy((FRigHierarchyPoseAdapter *)param_1);
  URigHierarchy::GetParents(this,&local_58,(FRigBaseElement *)local_60,false);
  iVar9 = local_58.ArrayNum;
  FVar12 = (ForElementType<FRigBaseElement_*>)&local_58;
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<FRigBaseElement_*>)0x0) {
    FVar12 = local_58.AllocatorInstance.SecondaryData;
  }
  FVar2 = (ForElementType<FRigBaseElement_*>)((longlong)FVar12 + (longlong)iVar9 * 8);
  do {
    if (local_58.ArrayNum != iVar9) {
      `TCheckedPointerIterator<FRigBaseElement_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_68);
    }
    if (FVar12 == FVar2) {
      bVar5 = false;
      goto LAB_14a43615c;
    }
    pFVar11 = *(FRigTransformElement **)FVar12;
    if (pFVar11 == (FRigTransformElement *)0x0) {
LAB_14a43612a:
      pFVar11 = (FRigTransformElement *)0x0;
    }
    else {
      lVar7 = (**(code **)(pFVar11->_padding_ + 0x10))(pFVar11);
      pUVar8 = FRigTransformElement::StaticStruct();
      if (pUVar8 == (UScriptStruct *)0x0) goto LAB_14a43612a;
      iVar4 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar7 + 0x38) < iVar4) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar8->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_14a43612a;
    }
    bVar5 = ProcessTransformElement(param_1,param_2,pFVar11);
    if (bVar5) {
      TArray<FRigTransformElement_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FRigTransformElement_*_const_&>(param_2,&local_60);
      bVar5 = true;
LAB_14a43615c:
      if (local_58.AllocatorInstance.SecondaryData != (ForElementType<FRigBaseElement_*>)0x0) {
        FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
        return bVar5;
      }
      return bVar5;
    }
    FVar12 = (ForElementType<FRigBaseElement_*>)((longlong)FVar12 + 8);
  } while( true );
}

// SetHierarchyCurvesLookup @ 14a4598d0

void __thiscall
FControlRigPoseAdapter::SetHierarchyCurvesLookup
          (FControlRigPoseAdapter *this,
          TArray<FRigBaseElement_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint local_res8 [4];
  longlong local_28;
  uint *local_20;
  
  iVar1 = param_1->ArrayNum;
  this_00 = &this->HierarchyCurveLookup;
  if (*(int *)&(this->HierarchyCurveLookup).field_0x8 -
      *(int *)&(this->HierarchyCurveLookup).field_0x34 != iVar1) {
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)this_00);
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reserve
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)this_00,iVar1);
    local_res8[0] = 0;
    if (0 < iVar1) {
      do {
        uVar3 = local_res8[0];
        uVar5 = 0;
        if ((int)local_res8[0] < param_1->ArrayNum) {
          uVar5 = ~local_res8[0] >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_20 = local_res8;
        local_28 = *(longlong *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar3 * 8) +
                   0x14;
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                  ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)this_00,(TPairInitializer<FName_const_&,int_const_&> *)(local_res8 + 2),
                   (bool *)&local_28);
        local_res8[0] = local_res8[0] + 1;
      } while ((int)local_res8[0] < iVar1);
    }
  }
  return;
}

// SetPoseCurveToHierarchyCurve @ 14a45a010

void __thiscall
FControlRigPoseAdapter::SetPoseCurveToHierarchyCurve
          (FControlRigPoseAdapter *this,
          TArray<FRigBaseElement_*,TSizedDefaultAllocator<32>_> *param_1,FBlendedCurve *param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int local_res8 [2];
  <lambda_1> local_48;
  
  uVar2 = *(uint *)&param_2->field_0x8;
  piVar1 = &(this->PoseCurveToHierarchyCurve).ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < (int)uVar2) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar2 - iVar5,&(this->PoseCurveToHierarchyCurve).AllocatorInstance,piVar1,
               &(this->PoseCurveToHierarchyCurve).ArrayMax);
  }
  else {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uVar2 < iVar5) {
      uVar6 = iVar5 - uVar2;
      if (((int)(uVar6 | uVar2) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->PoseCurveToHierarchyCurve).AllocatorInstance.Data + (longlong)(int)uVar2 * 4;
        iVar5 = (*piVar1 - uVar2) - uVar6;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 4,(longlong)iVar5 << 2);
        }
        *piVar1 = *piVar1 - uVar6;
      }
    }
  }
  local_48.CurveIndex = local_res8;
  local_res8[0] = 0;
  local_48.__this = this;
  local_48.InHierarchyCurves = param_1;
  UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
  ForEachElement<_FControlRigPoseAdapter::SetPoseCurveToHierarchyCurve_::__l2::<lambda_1>_>
            ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2,&local_48);
  return;
}

// UnlinkTransformStorage @ 14a45e730

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FControlRigPoseAdapter::UnlinkTransformStorage(FControlRigPoseAdapter *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  URigHierarchy *this_00;
  FRigBaseElement *pFVar5;
  longlong lVar6;
  uint uVar7;
  FRigElementKeyAndIndex local_28;
  
  FStatsHierarchical::BeginMeasurement("FControlRigPoseAdapter::UnlinkTransformStorage");
  this_00 = FRigHierarchyPoseAdapter::GetHierarchy((FRigHierarchyPoseAdapter *)this);
  if ((this_00 != (URigHierarchy *)0x0) && (uVar7 = 0, 0 < (this->PoseIndexToElementIndex).ArrayNum)
     ) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->PoseIndexToElementIndex).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = *(int *)((this->PoseIndexToElementIndex).AllocatorInstance.Data + lVar6);
      if (iVar1 != -1) {
        pFVar5 = URigHierarchy::Get(this_00,iVar1);
        if (pFVar5 == (FRigBaseElement *)0x0) {
          local_28.Key = &FRigElementKeyAndIndex::InvalidKey;
          local_28.Index = &FRigElementKeyAndIndex::InvalidIndex;
        }
        else {
          local_28.Key = &pFVar5->Key;
          local_28.Index = &pFVar5->Index;
        }
        FRigHierarchyPoseAdapter::RestoreTransformStorage
                  ((FRigHierarchyPoseAdapter *)this,&local_28,CurrentLocal,Pose,false);
        FRigHierarchyPoseAdapter::RestoreTransformStorage
                  ((FRigHierarchyPoseAdapter *)this,&local_28,CurrentGlobal,Pose,false);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 4;
    } while ((int)uVar7 < (this->PoseIndexToElementIndex).ArrayNum);
  }
  TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
           *)&this->ElementIndexToPoseIndex);
  (this->PoseIndexToElementIndex).ArrayNum = 0;
  if ((this->PoseIndexToElementIndex).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PoseIndexToElementIndex).AllocatorInstance,0,
               &(this->PoseIndexToElementIndex).ArrayMax);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateDirtyStates @ 14a45f9e0

void __thiscall
FControlRigPoseAdapter::UpdateDirtyStates(FControlRigPoseAdapter *this,TOptional<bool> param_1)

{
  int *piVar1;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  undefined6 in_register_00000012;
  FScriptContainerElement *pFVar7;
  char cVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  FStatsHierarchical::BeginMeasurement("FControlRigPoseAdapter::UpdateDirtyStates");
  cVar8 = this->bTransferInLocalSpace;
  if (((char *)CONCAT62(in_register_00000012,param_1))[1] != '\0') {
    cVar8 = *(char *)CONCAT62(in_register_00000012,param_1);
  }
  piVar1 = &(this->LocalPoseIsDirty).ArrayNum;
  if (*piVar1 == (this->LocalPose).ArrayNum) {
    if (cVar8 == '\0') goto LAB_14a45fb47;
    memset((this->LocalPoseIsDirty).AllocatorInstance.Data,0,
           (longlong)(this->LocalPoseIsDirty).ArrayMax);
  }
  else {
    pTVar2 = &this->LocalPoseIsDirty;
    piVar3 = &(this->LocalPoseIsDirty).ArrayMax;
    (this->LocalPoseIsDirty).ArrayNum = 0;
    if ((this->LocalPoseIsDirty).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&pTVar2->AllocatorInstance,0,piVar3);
    }
    iVar5 = (this->LocalPose).ArrayNum;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar5,&pTVar2->AllocatorInstance,piVar1,piVar3);
    memset((pTVar2->AllocatorInstance).Data + iVar6,0,(longlong)iVar5);
    if (cVar8 == '\0') {
LAB_14a45fb47:
      pFVar7 = (this->LocalPoseIsDirty).AllocatorInstance.Data;
      iVar5 = (this->LocalPoseIsDirty).ArrayNum;
      pFVar4 = pFVar7 + iVar5;
      while( true ) {
        if ((this->LocalPoseIsDirty).ArrayNum != iVar5) {
          `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar7 == pFVar4) break;
        *pFVar7 = (FScriptContainerElement)0x1;
        pFVar7 = pFVar7 + 1;
      }
    }
  }
  piVar1 = &(this->GlobalPoseIsDirty).ArrayNum;
  if (*piVar1 == (this->GlobalPose).ArrayNum) {
    if (cVar8 == '\0') {
      memset((this->GlobalPoseIsDirty).AllocatorInstance.Data,0,
             (longlong)(this->GlobalPoseIsDirty).ArrayMax);
      goto LAB_14a45fb10;
    }
  }
  else {
    pTVar2 = &this->GlobalPoseIsDirty;
    piVar3 = &(this->GlobalPoseIsDirty).ArrayMax;
    (this->GlobalPoseIsDirty).ArrayNum = 0;
    if ((this->GlobalPoseIsDirty).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&pTVar2->AllocatorInstance,0,piVar3);
    }
    iVar5 = (this->GlobalPose).ArrayNum;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar5,&pTVar2->AllocatorInstance,piVar1,piVar3);
    memset((pTVar2->AllocatorInstance).Data + iVar6,0,(longlong)iVar5);
    if (cVar8 == '\0') goto LAB_14a45fb10;
  }
  pFVar7 = (this->GlobalPoseIsDirty).AllocatorInstance.Data;
  iVar5 = (this->GlobalPoseIsDirty).ArrayNum;
  pFVar4 = pFVar7 + iVar5;
  while( true ) {
    if ((this->GlobalPoseIsDirty).ArrayNum != iVar5) {
      `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar4) break;
    *pFVar7 = (FScriptContainerElement)0x1;
    pFVar7 = pFVar7 + 1;
  }
LAB_14a45fb10:
  FStatsHierarchical::EndMeasurement();
  return;
}

