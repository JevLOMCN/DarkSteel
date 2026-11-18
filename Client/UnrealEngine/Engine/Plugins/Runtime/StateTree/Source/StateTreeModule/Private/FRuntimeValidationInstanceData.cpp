// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 17

// ~FRuntimeValidationInstanceData @ 14d4b37e0

void __thiscall
UE::StateTree::Debug::FRuntimeValidationInstanceData::~FRuntimeValidationInstanceData
          (FRuntimeValidationInstanceData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FRuntimeValidationInstanceData *local_18;
  FScriptContainerElement *local_10;
  
  if (((Debug::Private::bRuntimeValidationEnterExitState) && (bVar3 = UObjectInitialized(), bVar3))
     && (GIsRequestingExit == false)) {
    pFVar4 = (this->NodeStates).AllocatorInstance.Data;
    iVar2 = (this->NodeStates).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((this->NodeStates).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::StateTree::Debug::FRuntimeValidationInstanceData::FNodeStatePair,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      if (((byte)pFVar4[0x14] & 1) != 0) {
        local_18 = this;
        local_10 = pFVar4;
        `UE::StateTree::Debug::FRuntimeValidationInstanceData::~FRuntimeValidationInstanceData'::
        __l12::<lambda_1>::operator()(&local_18);
        Debug::Private::bRuntimeValidationEnterExitState = false;
      }
      pFVar4 = pFVar4 + 0x18;
    }
  }
  pFVar1 = (this->NodeStates).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar1);
  return;
}

// NodeEnterState @ 14d4c4e10

void __thiscall
UE::StateTree::Debug::FRuntimeValidationInstanceData::NodeEnterState
          (FRuntimeValidationInstanceData *this,FGuid *param_1,FActiveFrameID param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FRuntimeValidationInstanceData *local_48;
  FGuid *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  undefined4 uStack_24;
  
  pFVar2 = (this->NodeStates).AllocatorInstance.Data;
  if (pFVar2 != pFVar2 + (longlong)(this->NodeStates).ArrayNum * 0x18) {
    pFVar6 = pFVar2;
    do {
      if ((((param_1->B == *(uint *)(pFVar6 + 4) && param_1->C == *(uint *)(pFVar6 + 8)) &&
           param_1->D == *(uint *)(pFVar6 + 0xc)) && param_1->A == *(uint *)pFVar6) &&
         (*(uint *)(pFVar6 + 0x10) == param_2.Value)) {
        if ((Debug::Private::bRuntimeValidationEnterExitState) && (((byte)pFVar6[0x14] & 1) != 0)) {
          local_48 = this;
          local_40 = param_1;
          `UE::StateTree::Debug::FRuntimeValidationInstanceData::NodeEnterState'::__l8::<lambda_2>::
          operator()(&local_48);
          Debug::Private::bRuntimeValidationEnterExitState = false;
        }
        pFVar6[0x14] = (FScriptContainerElement)((byte)pFVar6[0x14] | 1);
        return;
      }
      pFVar6 = pFVar6 + 0x18;
    } while (pFVar6 != pFVar2 + (longlong)(this->NodeStates).ArrayNum * 0x18);
  }
  local_38._0_4_ = param_1->A;
  local_38._4_4_ = param_1->B;
  uStack_30._0_4_ = param_1->C;
  uStack_30._4_4_ = param_1->D;
  uStack_24 = CONCAT31(uStack_24._1_3_,1);
  local_28 = param_2.Value;
  if (((pFVar2 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->NodeStates).ArrayMax * 0x18)
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->NodeStates).ArrayNum;
  piVar1 = &(this->NodeStates).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,(ForAnyElementType *)this,piVar1);
  }
  (this->NodeStates).ArrayNum = iVar5 + 1;
  pFVar6 = (this->NodeStates).AllocatorInstance.Data;
  pFVar2 = pFVar6 + (longlong)iVar5 * 0x18;
  *(undefined8 *)pFVar2 = local_38;
  *(undefined8 *)(pFVar2 + 8) = uStack_30;
  *(ulonglong *)(pFVar6 + (longlong)iVar5 * 0x18 + 0x10) = CONCAT44(uStack_24,local_28);
  return;
}

// NodeExitState @ 14d4c51e0

void __thiscall
UE::StateTree::Debug::FRuntimeValidationInstanceData::NodeExitState
          (FRuntimeValidationInstanceData *this,FGuid *param_1,FActiveFrameID param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FRuntimeValidationInstanceData *local_18;
  FGuid *local_10;
  
  pFVar2 = (this->NodeStates).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->NodeStates).ArrayNum * 0x18;
  local_18 = this;
  local_10 = param_1;
  if (pFVar2 != pFVar1) {
    do {
      if ((((param_1->B == *(uint *)(pFVar2 + 4) && param_1->C == *(uint *)(pFVar2 + 8)) &&
           param_1->D == *(uint *)(pFVar2 + 0xc)) && param_1->A == *(uint *)pFVar2) &&
         (*(uint *)(pFVar2 + 0x10) == param_2.Value)) {
        if ((Debug::Private::bRuntimeValidationEnterExitState) && (((byte)pFVar2[0x14] & 1) == 0)) {
          `UE::StateTree::Debug::FRuntimeValidationInstanceData::NodeExitState'::__l8::<lambda_2>::
          operator()(&local_18);
          Debug::Private::bRuntimeValidationEnterExitState = false;
        }
        pFVar2[0x14] = (FScriptContainerElement)((byte)pFVar2[0x14] & 0xfe);
        return;
      }
      pFVar2 = pFVar2 + 0x18;
    } while (pFVar2 != pFVar1);
  }
  if (Debug::Private::bRuntimeValidationEnterExitState) {
    `UE::StateTree::Debug::FRuntimeValidationInstanceData::NodeExitState'::__l12::<lambda_3>::
    operator()(&local_18);
    Debug::Private::bRuntimeValidationEnterExitState = false;
  }
  return;
}

// SetContext @ 14d4cfdc0

void __thiscall
UE::StateTree::Debug::FRuntimeValidationInstanceData::SetContext
          (FRuntimeValidationInstanceData *this,UObject *param_1,UStateTree *param_2,bool param_3)

{
  code *pcVar1;
  UStateTree *this_00;
  bool bVar2;
  FStateTreeInstanceStorage *pFVar3;
  undefined1 local_res8 [8];
  UObject *local_res10;
  UStateTree *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  FWeakObjectPtr local_80;
  FWeakObjectPtr local_78;
  UStateTree *local_70;
  UObject *local_68;
  TSharedPtr<FStateTreeInstanceData,1> local_60;
  UStateTree **local_50;
  FRuntimeValidationInstanceData *local_48;
  UObject **local_40;
  FRuntimeValidationInstanceData *local_38;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if ((GC::GIsIncrementalReachabilityPending) && (param_2 != (UStateTree *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  local_80.ObjectIndex = 0;
  local_80.ObjectSerialNumber = 0;
  local_70 = param_2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UStateTree *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_80,(FObjectPtr)&local_70);
  local_68 = local_res10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_res10);
  }
  local_78.ObjectIndex = 0;
  local_78.ObjectSerialNumber = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_68);
  }
  FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_68);
  if (Debug::Private::bRuntimeValidationContext != false) {
    bVar2 = FWeakObjectPtr::IsValid(&(this->StateTree).WeakPtr);
    if (bVar2) {
      bVar2 = TWeakObjectPtr<UStateTree_const_,FWeakObjectPtr>::UEOpEquals<UStateTree_const_,bool>
                        (&this->StateTree,
                         (TWeakObjectPtr<UStateTree_const_,FWeakObjectPtr> *)&local_80);
      if ((!bVar2) && (this->bInstanceDataWriteAccessAcquired != false)) {
        local_50 = &local_res18;
        local_48 = this;
        `UE::StateTree::Debug::FRuntimeValidationInstanceData::SetContext'::__l8::<lambda_1>::
        operator()(&local_50);
        Debug::Private::bRuntimeValidationContext = false;
      }
    }
    bVar2 = FWeakObjectPtr::IsValid(&(this->Owner).WeakPtr);
    if (bVar2) {
      bVar2 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject_const_,bool>
                        (&this->Owner,(TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_78);
      if (!bVar2) {
        local_40 = &local_res10;
        local_38 = this;
        `UE::StateTree::Debug::FRuntimeValidationInstanceData::SetContext'::__l11::<lambda_2>::
        operator()(&local_40);
        Debug::Private::bRuntimeValidationContext = false;
      }
    }
  }
  ValidateTreeNodes(this,local_res18);
  this_00 = local_res18;
  if ((Debug::Private::bRuntimeValidationInstanceData == false) ||
     (local_res18 == (UStateTree *)0x0)) goto LAB_14d4cffd1;
  pFVar3 = FStateTreeInstanceData::GetStorage(&local_res18->DefaultInstanceData);
  bVar2 = FStateTreeInstanceStorage::AreAllInstancesValid(pFVar3);
  if (!bVar2) {
    local_res20[0] = 0;
    `UE::StateTree::Debug::FRuntimeValidationInstanceData::ValidateInstanceData'::__l11::<lambda_1>
    ::operator()(local_res20);
    Debug::Private::bRuntimeValidationInstanceData = false;
  }
  UStateTree::GetSharedInstanceData(this_00,&local_60);
  if (local_60.Object == (FStateTreeInstanceData *)0x0) {
    local_res8[0] = 0;
    bVar2 = `UE::StateTree::Debug::FRuntimeValidationInstanceData::ValidateInstanceData'::__l12::
            <lambda_2>::operator()(local_res8);
    if (bVar2) goto LAB_14d4cff75;
  }
  else {
LAB_14d4cff75:
    if (local_60.Object == (FStateTreeInstanceData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar3 = FStateTreeInstanceData::GetStorage(local_60.Object);
    bVar2 = FStateTreeInstanceStorage::AreAllInstancesValid(pFVar3);
    if (!bVar2) {
      `UE::StateTree::Debug::FRuntimeValidationInstanceData::ValidateInstanceData'::__l17::
      <lambda_3>::operator()(local_88);
      Debug::Private::bRuntimeValidationInstanceData = false;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.SharedReferenceCount.ReferenceController);
LAB_14d4cffd1:
  this->bInstanceDataWriteAccessAcquired = (bool)(this->bInstanceDataWriteAccessAcquired | param_3);
  (this->StateTree).WeakPtr = local_80;
  (this->Owner).WeakPtr = local_78;
  return;
}

// ValidateInstanceData @ 14d4d4eb0

void __thiscall
UE::StateTree::Debug::FRuntimeValidationInstanceData::ValidateInstanceData
          (FRuntimeValidationInstanceData *this,UStateTree *param_1)

{
  code *pcVar1;
  bool bVar2;
  FStateTreeInstanceStorage *pFVar3;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_28 [8];
  TSharedPtr<FStateTreeInstanceData,1> local_20;
  
  if (!Debug::Private::bRuntimeValidationInstanceData) {
    return;
  }
  if (param_1 == (UStateTree *)0x0) {
    return;
  }
  pFVar3 = FStateTreeInstanceData::GetStorage(&param_1->DefaultInstanceData);
  bVar2 = FStateTreeInstanceStorage::AreAllInstancesValid(pFVar3);
  if (!bVar2) {
    local_res18[0] = bVar2;
    `UE::StateTree::Debug::FRuntimeValidationInstanceData::ValidateInstanceData'::__l11::<lambda_1>
    ::operator()(local_res18);
    Debug::Private::bRuntimeValidationInstanceData = false;
  }
  UStateTree::GetSharedInstanceData(param_1,&local_20);
  if (local_20.Object == (FStateTreeInstanceData *)0x0) {
    local_res20[0] = 0;
    bVar2 = `UE::StateTree::Debug::FRuntimeValidationInstanceData::ValidateInstanceData'::__l12::
            <lambda_2>::operator()(local_res20);
    if (!bVar2) goto LAB_14d4d4f86;
  }
  if ((local_20.Object == (FStateTreeInstanceData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = FStateTreeInstanceData::GetStorage(local_20.Object);
  bVar2 = FStateTreeInstanceStorage::AreAllInstancesValid(pFVar3);
  if (!bVar2) {
    `UE::StateTree::Debug::FRuntimeValidationInstanceData::ValidateInstanceData'::__l17::<lambda_3>
    ::operator()(local_28);
    Debug::Private::bRuntimeValidationInstanceData = false;
  }
LAB_14d4d4f86:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.SharedReferenceCount.ReferenceController);
  return;
}

// ValidateTreeNodes @ 14d4d5340

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::StateTree::Debug::FRuntimeValidationInstanceData::ValidateTreeNodes
          (FRuntimeValidationInstanceData *this,UStateTree *param_1)

{
  int iVar1;
  int iVar2;
  TObjectPtr<UObject>_u_0 TVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  FStateTreeInstanceStorage *pFVar9;
  FConstStructView *pFVar10;
  UScriptStruct *pUVar11;
  FStateTreeInstanceObjectWrapper *pFVar12;
  UClass *pUVar13;
  UPackage *pUVar14;
  UScriptStruct *pUVar15;
  longlong lVar16;
  int iVar17;
  longlong *plVar18;
  int iVar19;
  TObjectPtr<UObject>_u_0 local_res18;
  longlong local_res20;
  TObjectPtr<UObject>_u_0 *local_78;
  longlong *local_70;
  TObjectPtr<UObject>_u_0 local_68 [2];
  FConstStructView local_58;
  FConstStructView local_48;
  
  if ((((Debug::Private::bRuntimeValidationDoesNewerVersionExists) && (param_1 != (UStateTree *)0x0)
       ) && (0 < (param_1->States).ArrayNum)) &&
     ((param_1->bIsLinked != '\0' && ((char)(param_1->PropertyBindings)._padding_ != '\0')))) {
    pFVar9 = FStateTreeInstanceData::GetStorage(&param_1->DefaultInstanceData);
    iVar19 = 0;
    iVar1 = (pFVar9->InstanceStructs).NumItems;
    iVar17 = iVar19;
    if (0 < iVar1) {
      do {
        local_res18.DebugPtr = (UObject *)0x0;
        pFVar9 = FStateTreeInstanceData::GetStorage(&param_1->DefaultInstanceData);
        pFVar10 = FInstancedStructContainer::operator[](&pFVar9->InstanceStructs,&local_58,iVar17);
        pUVar15 = pFVar10->ScriptStruct;
        pUVar11 = FStateTreeInstanceObjectWrapper::StaticStruct();
        if (pUVar15 == pUVar11) {
          pFVar9 = FStateTreeInstanceData::GetStorage(&param_1->DefaultInstanceData);
          pFVar10 = FInstancedStructContainer::operator[](&pFVar9->InstanceStructs,&local_48,iVar17)
          ;
          pFVar12 = FConstStructView::Get<FStateTreeInstanceObjectWrapper_const_>(pFVar10);
          TVar3.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar12->InstanceObject).field0_0x0.DebugPtr;
          local_res18.ObjectPtr.field0_0x0 = TVar3.ObjectPtr.field0_0x0;
          if ((*(uint *)&(TVar3.DebugPtr)->field_0x8 >> 0xe & 1) == 0) {
            if (TVar3.DebugPtr == (UObject *)0x0) {
LAB_14d4d548a:
              if (TVar3.DebugPtr != (UObject *)0x0) {
                pUVar13 = Z_Construct_UClass_UScriptStruct_NoRegister();
                iVar2 = (int)pUVar13->_padding_;
                if ((iVar2 <= *(int *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x30) +
                     (longlong)iVar2 * 8) == &pUVar13->_padding_)) {
                  bVar7 = TVar3.DebugPtr[4].field_0x13 & 1;
                  goto LAB_14d4d54bb;
                }
              }
            }
            else {
              pUVar13 = Z_Construct_UClass_UClass_NoRegister();
              iVar2 = (int)pUVar13->_padding_;
              if ((*(int *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x38) < iVar2) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x30) +
                   (longlong)iVar2 * 8) != &pUVar13->_padding_)) goto LAB_14d4d548a;
              if (TVar3.DebugPtr != (UObject *)0x0) {
                bVar7 = (byte)((uint)*(undefined4 *)&TVar3.DebugPtr[5].field_0xc >> 0x1f);
LAB_14d4d54bb:
                if (bVar7 != 0) goto LAB_14d4d5600;
              }
            }
            if (local_res18.DebugPtr != (UObject *)0x0) {
              lVar16 = *(longlong *)&(local_res18.DebugPtr)->field_0x10;
              if ((*(uint *)(lVar16 + 8) >> 0xe & 1) != 0) goto LAB_14d4d5600;
              if (lVar16 != 0) {
                pUVar13 = Z_Construct_UClass_UClass_NoRegister();
                iVar2 = (int)pUVar13->_padding_;
                if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < iVar2) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
                    &pUVar13->_padding_)) {
                  pUVar13 = Z_Construct_UClass_UScriptStruct_NoRegister();
                  iVar2 = (int)pUVar13->_padding_;
                  if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < iVar2) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
                      &pUVar13->_padding_)) goto LAB_14d4d561e;
                  bVar7 = *(byte *)(lVar16 + 0xb3) & 1;
                }
                else {
                  bVar7 = (byte)((uint)*(undefined4 *)(lVar16 + 0xd4) >> 0x1f);
                }
joined_r0x00014d4d55fe:
                if (bVar7 != 0) goto LAB_14d4d5600;
              }
            }
          }
          else {
LAB_14d4d5600:
            local_78 = &local_res18;
            `UE::StateTree::Debug::FRuntimeValidationInstanceData::ValidateTreeNodes'::__l19::
            <lambda_2>::operator()(&local_78);
            Debug::Private::bRuntimeValidationDoesNewerVersionExists = false;
          }
        }
        else {
          pFVar9 = FStateTreeInstanceData::GetStorage(&param_1->DefaultInstanceData);
          FInstancedStructContainer::operator[]
                    (&pFVar9->InstanceStructs,(FConstStructView *)&local_68[0].ObjectPtr,iVar17);
          TVar3 = local_68[0];
          local_res18.DebugPtr = local_68[0].DebugPtr;
          uVar8 = *(uint *)&(local_68[0].DebugPtr)->field_0x8 >> 0xe;
          bVar7 = (byte)uVar8 & 1;
          if ((uVar8 & 1) != 0) goto joined_r0x00014d4d55fe;
          if (local_68[0].DebugPtr != (UObject *)0x0) {
            pUVar13 = Z_Construct_UClass_UClass_NoRegister();
            iVar2 = (int)pUVar13->_padding_;
            if ((*(int *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x30) +
                 (longlong)iVar2 * 8) != &pUVar13->_padding_)) {
              if (TVar3.DebugPtr != (UObject *)0x0) {
                pUVar13 = Z_Construct_UClass_UScriptStruct_NoRegister();
                iVar2 = (int)pUVar13->_padding_;
                if (((iVar2 <= *(int *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x38)) &&
                    ((longlong *)
                     *(undefined1 **)
                      (*(longlong *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x30) +
                      (longlong)iVar2 * 8) == &pUVar13->_padding_)) &&
                   (TVar3.DebugPtr != (UObject *)0x0)) {
                  bVar7 = TVar3.DebugPtr[4].field_0x13 & 1;
                  goto joined_r0x00014d4d55fe;
                }
              }
            }
            else if (TVar3.DebugPtr != (UObject *)0x0) {
              bVar7 = (byte)((uint)*(undefined4 *)&(TVar3.DebugPtr + 4)[1].field_0xc >> 0x1f);
              goto joined_r0x00014d4d55fe;
            }
          }
        }
LAB_14d4d561e:
        iVar17 = iVar17 + 1;
      } while (iVar17 < iVar1);
    }
    iVar1 = (param_1->Nodes).NumItems;
    pUVar15 = Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton;
    iVar17 = iVar19;
    if (iVar1 != 0) {
      do {
        iVar2 = (param_1->Nodes).NumItems;
        if (((iVar2 < 1) || (iVar2 <= iVar19)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumItems > 0 && Index < NumItems",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                               ,0x100,L""),
           pUVar15 = Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton, bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar4 = (param_1->Nodes).Memory;
        lVar16 = (longlong)((param_1->Nodes).AllocatedSize - iVar17);
        pUVar11 = *(UScriptStruct **)(puVar4 + lVar16 + -0x10);
        plVar18 = (longlong *)(puVar4 + *(int *)(puVar4 + lVar16 + -8));
        if ((plVar18 == (longlong *)0x0) || (pUVar11 == (UScriptStruct *)0x0)) goto LAB_14d4d57f4;
        if (pUVar15 == (UScriptStruct *)0x0) {
          pUVar14 = Z_Construct_UPackage__Script_StateTreeModule();
          pUVar15 = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar14,
                                    L"StateTreeNodeBase");
          Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton = pUVar15;
        }
        if (pUVar11 != pUVar15) {
          if (pUVar15 == (UScriptStruct *)0x0) {
            pUVar14 = Z_Construct_UPackage__Script_StateTreeModule();
            pUVar15 = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,
                                      (UObject *)pUVar14,L"StateTreeNodeBase");
            Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton = pUVar15;
            if (pUVar15 == (UScriptStruct *)0x0) goto LAB_14d4d57f4;
          }
          iVar2 = (int)pUVar15->_padding_;
          if (((int)pUVar11->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar15->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) goto LAB_14d4d57f4;
        }
        lVar16 = (**(code **)(*plVar18 + 8))(plVar18);
        local_res20 = lVar16;
        if ((*(uint *)(lVar16 + 8) >> 0xe & 1) == 0) {
          if (lVar16 == 0) {
LAB_14d4d579a:
            pUVar15 = Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton;
            if (lVar16 != 0) {
              pUVar13 = Z_Construct_UClass_UScriptStruct_NoRegister();
              iVar2 = (int)pUVar13->_padding_;
              pUVar15 = Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton;
              if ((iVar2 <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
                  &pUVar13->_padding_)) {
                bVar7 = *(byte *)(lVar16 + 0xb3) & 1;
                goto LAB_14d4d57cb;
              }
            }
          }
          else {
            pUVar13 = Z_Construct_UClass_UClass_NoRegister();
            iVar2 = (int)pUVar13->_padding_;
            if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar13->_padding_)) goto LAB_14d4d579a;
            pUVar15 = Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton;
            if (lVar16 == 0) goto LAB_14d4d57f4;
            bVar7 = (byte)((uint)*(undefined4 *)(lVar16 + 0xd4) >> 0x1f);
LAB_14d4d57cb:
            pUVar15 = Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton;
            if (bVar7 != 0) goto LAB_14d4d57cf;
          }
        }
        else {
LAB_14d4d57cf:
          local_70 = &local_res20;
          `UE::StateTree::Debug::FRuntimeValidationInstanceData::ValidateTreeNodes'::__l29::
          <lambda_3>::operator()(&local_70);
          Debug::Private::bRuntimeValidationDoesNewerVersionExists = false;
          pUVar15 = Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton;
        }
LAB_14d4d57f4:
        iVar19 = iVar19 + 1;
        iVar17 = iVar17 + 0x10;
      } while (iVar19 != iVar1);
    }
  }
  return;
}

// operator() @ 15057dee0

bool __thiscall
`UE::StateTree::Debug::FRuntimeValidationInstanceData::SetContext'::__l8::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  UObject *this_00;
  bool bVar5;
  FString local_28;
  FString local_18;
  
  bVar2 = false;
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3592952726805282731>);
  if (bVar3) {
    this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 0x10));
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0,None);
    bVar5 = (UObjectBaseUtility *)**(undefined8 **)this != (UObjectBaseUtility *)0x0;
    if (bVar5) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)**(undefined8 **)this,&local_28,(UObject *)0x0,None);
    }
    bVar2 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3592952726805282731>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15057dfab;
    }
  }
  bVar3 = false;
LAB_15057dfab:
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// operator() @ 15057e040

bool __thiscall
`UE::StateTree::Debug::FRuntimeValidationInstanceData::ValidateInstanceData'::__l11::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3592952726805282580>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3592952726805282580>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15057e080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::StateTree::Debug::FRuntimeValidationInstanceData::~FRuntimeValidationInstanceData'::__l12::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *this_00;
  bool bVar4;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  FString local_170;
  FGuid local_160;
  FGuid local_148;
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_198;
  bVar4 = false;
  local_178 = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3592952726805282749>);
  if (bVar2) {
    local_160._0_8_ = **(undefined8 **)((longlong)this + 8);
    local_160._8_8_ = (*(undefined8 **)((longlong)this + 8))[1];
    this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0x10));
    local_138.bIsDynamic = false;
    local_138.bIsExternal = false;
    local_138.Base = local_118;
    local_138.CurPos = local_118;
    local_138.End = (wchar_t *)local_18;
    local_148.A = local_160.A;
    local_148.B = local_160.B;
    local_148.C = local_160.C;
    local_148.D = local_160.D;
    if (this_00 != (UObject *)0x0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,(UObject *)0x0,&local_138);
    }
    if (local_138.End < local_138.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_138,1);
    }
    *local_138.CurPos = L':';
    local_138.CurPos = local_138.CurPos + 1;
    FGuid::AppendString(&local_148,&local_138,DigitsWithHyphensLower);
    if (local_138.End < local_138.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_138,1);
    }
    *local_138.CurPos = L'\0';
    ::FString::FString(&local_170,local_138.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3592952726805282749>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15057e1df;
    }
  }
  bVar2 = false;
LAB_15057e1df:
  if ((bVar4) && (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15057e3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::StateTree::Debug::FRuntimeValidationInstanceData::NodeEnterState'::__l8::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *this_00;
  bool bVar4;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  FString local_170;
  FGuid local_160;
  FGuid local_148;
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_198;
  bVar4 = false;
  local_178 = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3592952726805282698>);
  if (bVar2) {
    local_160._0_8_ = **(undefined8 **)((longlong)this + 8);
    local_160._8_8_ = (*(undefined8 **)((longlong)this + 8))[1];
    this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0x18));
    local_138.bIsDynamic = false;
    local_138.bIsExternal = false;
    local_138.Base = local_118;
    local_138.CurPos = local_118;
    local_138.End = (wchar_t *)local_18;
    local_148.A = local_160.A;
    local_148.B = local_160.B;
    local_148.C = local_160.C;
    local_148.D = local_160.D;
    if (this_00 != (UObject *)0x0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,(UObject *)0x0,&local_138);
    }
    if (local_138.End < local_138.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_138,1);
    }
    *local_138.CurPos = L':';
    local_138.CurPos = local_138.CurPos + 1;
    FGuid::AppendString(&local_148,&local_138,DigitsWithHyphensLower);
    if (local_138.End < local_138.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_138,1);
    }
    *local_138.CurPos = L'\0';
    ::FString::FString(&local_170,local_138.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3592952726805282698>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15057e50f;
    }
  }
  bVar2 = false;
LAB_15057e50f:
  if ((bVar4) && (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15057e560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::StateTree::Debug::FRuntimeValidationInstanceData::NodeExitState'::__l8::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *this_00;
  bool bVar4;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  FString local_170;
  FGuid local_160;
  FGuid local_148;
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_198;
  bVar4 = false;
  local_178 = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3592952726805282675>);
  if (bVar2) {
    local_160._0_8_ = **(undefined8 **)((longlong)this + 8);
    local_160._8_8_ = (*(undefined8 **)((longlong)this + 8))[1];
    this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0x18));
    local_138.bIsDynamic = false;
    local_138.bIsExternal = false;
    local_138.Base = local_118;
    local_138.CurPos = local_118;
    local_138.End = (wchar_t *)local_18;
    local_148.A = local_160.A;
    local_148.B = local_160.B;
    local_148.C = local_160.C;
    local_148.D = local_160.D;
    if (this_00 != (UObject *)0x0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,(UObject *)0x0,&local_138);
    }
    if (local_138.End < local_138.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_138,1);
    }
    *local_138.CurPos = L':';
    local_138.CurPos = local_138.CurPos + 1;
    FGuid::AppendString(&local_148,&local_138,DigitsWithHyphensLower);
    if (local_138.End < local_138.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_138,1);
    }
    *local_138.CurPos = L'\0';
    ::FString::FString(&local_170,local_138.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3592952726805282675>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15057e6bf;
    }
  }
  bVar2 = false;
LAB_15057e6bf:
  if ((bVar4) && (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15057e710

bool __thiscall
`UE::StateTree::Debug::FRuntimeValidationInstanceData::ValidateTreeNodes'::__l19::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3592952726805282614>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3592952726805282614>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15057e780;
    }
  }
  bVar2 = false;
LAB_15057e780:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15057e7b0

bool __thiscall
`UE::StateTree::Debug::FRuntimeValidationInstanceData::SetContext'::__l11::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  UObject *this_00;
  bool bVar5;
  FString local_28;
  FString local_18;
  
  bVar2 = false;
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3592952726805282723>);
  if (bVar3) {
    this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 0x18));
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0,None);
    bVar5 = (UObjectBaseUtility *)**(undefined8 **)this != (UObjectBaseUtility *)0x0;
    if (bVar5) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)**(undefined8 **)this,&local_28,(UObject *)0x0,None);
    }
    bVar2 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3592952726805282723>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15057e87b;
    }
  }
  bVar3 = false;
LAB_15057e87b:
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// operator() @ 15057e8d0

bool __thiscall
`UE::StateTree::Debug::FRuntimeValidationInstanceData::ValidateInstanceData'::__l12::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3592952726805282575>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3592952726805282575>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15057e9d0

bool __thiscall
`UE::StateTree::Debug::FRuntimeValidationInstanceData::ValidateInstanceData'::__l17::<lambda_3>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3592952726805282571>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3592952726805282571>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15057ea10

bool __thiscall
`UE::StateTree::Debug::FRuntimeValidationInstanceData::ValidateTreeNodes'::__l29::<lambda_3>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3592952726805282597>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3592952726805282597>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15057ea80;
    }
  }
  bVar2 = false;
LAB_15057ea80:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15057eab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::StateTree::Debug::FRuntimeValidationInstanceData::NodeExitState'::__l12::<lambda_3>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *this_00;
  bool bVar4;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  FString local_170;
  FGuid local_160;
  FGuid local_148;
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_198;
  bVar4 = false;
  local_178 = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3592952726805282666>);
  if (bVar2) {
    local_160._0_8_ = **(undefined8 **)((longlong)this + 8);
    local_160._8_8_ = (*(undefined8 **)((longlong)this + 8))[1];
    this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0x18));
    local_138.bIsDynamic = false;
    local_138.bIsExternal = false;
    local_138.Base = local_118;
    local_138.CurPos = local_118;
    local_138.End = (wchar_t *)local_18;
    local_148.A = local_160.A;
    local_148.B = local_160.B;
    local_148.C = local_160.C;
    local_148.D = local_160.D;
    if (this_00 != (UObject *)0x0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,(UObject *)0x0,&local_138);
    }
    if (local_138.End < local_138.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_138,1);
    }
    *local_138.CurPos = L':';
    local_138.CurPos = local_138.CurPos + 1;
    FGuid::AppendString(&local_148,&local_138,DigitsWithHyphensLower);
    if (local_138.End < local_138.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_138,1);
    }
    *local_138.CurPos = L'\0';
    ::FString::FString(&local_170,local_138.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3592952726805282666>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15057ec0f;
    }
  }
  bVar2 = false;
LAB_15057ec0f:
  if ((bVar4) && (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

