// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 14

// ~FControlRigHierarchyMappings @ 14a225590

void __thiscall
FControlRigHierarchyMappings::~FControlRigHierarchyMappings(FControlRigHierarchyMappings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PoseAdapter).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->HierarchyCurveCopied).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ControlRigCurveMappingByName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ControlRigCurveMappingByName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ControlRigCurveMappingByName);
  *(undefined4 *)&(this->ControlRigBoneOutputMappingByName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ControlRigBoneOutputMappingByName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ControlRigBoneOutputMappingByName);
  *(undefined4 *)&(this->ControlRigBoneInputMappingByName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ControlRigBoneInputMappingByName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ControlRigBoneInputMappingByName);
  pFVar1 = (this->ControlRigCurveMappingByIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ControlRigBoneOutputMappingByIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ControlRigBoneInputMappingByIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator= @ 14a228e70

FControlRigHierarchyMappings * __thiscall
FControlRigHierarchyMappings::operator=
          (FControlRigHierarchyMappings *this,FControlRigHierarchyMappings *param_1)

{
  TArray<TTuple<unsigned_short,FName>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FControlRigPoseAdapter *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  TArray<TTuple<unsigned_short,unsigned_short>,TSizedDefaultAllocator<32>_>::operator=
            (&this->ControlRigBoneInputMappingByIndex,&param_1->ControlRigBoneInputMappingByIndex);
  TArray<TTuple<unsigned_short,unsigned_short>,TSizedDefaultAllocator<32>_>::operator=
            (&this->ControlRigBoneOutputMappingByIndex,&param_1->ControlRigBoneOutputMappingByIndex)
  ;
  pTVar1 = &this->ControlRigCurveMappingByIndex;
  if (pTVar1 != &param_1->ControlRigCurveMappingByIndex) {
    iVar4 = (param_1->ControlRigCurveMappingByIndex).ArrayNum;
    piVar2 = &(this->ControlRigCurveMappingByIndex).ArrayMax;
    pFVar5 = (param_1->ControlRigCurveMappingByIndex).AllocatorInstance.Data;
    (this->ControlRigCurveMappingByIndex).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0xc);
      }
    }
  }
  TMap<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
  ::operator=(&this->ControlRigBoneInputMappingByName,&param_1->ControlRigBoneInputMappingByName);
  TMap<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
  ::operator=(&this->ControlRigBoneOutputMappingByName,&param_1->ControlRigBoneOutputMappingByName);
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::operator=
            (&this->ControlRigCurveMappingByName,&param_1->ControlRigCurveMappingByName);
  pTVar3 = &this->HierarchyCurveCopied;
  if (pTVar3 != &param_1->HierarchyCurveCopied) {
    iVar4 = (param_1->HierarchyCurveCopied).ArrayNum;
    piVar2 = &(this->HierarchyCurveCopied).ArrayMax;
    pFVar5 = (param_1->HierarchyCurveCopied).AllocatorInstance.Data;
    (this->HierarchyCurveCopied).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4);
      }
    }
  }
  pTVar6 = (param_1->PoseAdapter).SharedReferenceCount.ReferenceController;
  pFVar7 = (param_1->PoseAdapter).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = (this->PoseAdapter).SharedReferenceCount.ReferenceController;
  (this->PoseAdapter).Object = pFVar7;
  (this->PoseAdapter).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (&param_1->RefPoseSetterHash != &this->RefPoseSetterHash) {
    if ((param_1->RefPoseSetterHash).bIsSet == false) {
      if ((this->RefPoseSetterHash).bIsSet != false) {
        (this->RefPoseSetterHash).bIsSet = false;
      }
    }
    else {
      (this->RefPoseSetterHash).TypedValue = (param_1->RefPoseSetterHash).TypedValue;
      (this->RefPoseSetterHash).bIsSet = true;
    }
  }
  this->bEnablePoseAdapter = param_1->bEnablePoseAdapter;
  return this;
}

// operator() @ 14a3c0190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigHierarchyMappings::UpdateInputOutputMappingIfRequiredImpl'::__l5::<lambda_1>::operator()
          (void *this,TArray<FBoneReference,TSizedDefaultAllocator<32>_> *param_1,
          TWeakObjectPtr<UNodeMappingContainer,FWeakObjectPtr> *param_2,FBoneContainer *param_3,
          FReferenceSkeleton *param_4,TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_5,
          UControlRig *param_6,
          TMap<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
          *param_7)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  FReferenceSkeleton *pFVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  UNodeMappingContainer *this_00;
  longlong lVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  FName *pFVar14;
  FName *pFVar15;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  longlong local_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined2 local_106;
  undefined2 local_104 [2];
  FReferenceSkeleton *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  FBoneContainer *local_e8;
  TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
  *local_e0;
  void *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  ushort *local_c0;
  longlong local_b8;
  undefined2 *local_b0;
  ushort **local_a8;
  undefined2 *local_a0;
  undefined1 local_98 [64];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_100 = param_4;
  local_e0 = (TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
              *)param_7;
  local_e8 = param_3;
  TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
           *)param_7);
  bVar7 = FWeakObjectPtr::IsValid(&param_2->WeakPtr);
  if (bVar7) {
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_98._32_8_ = 0;
    local_98._40_4_ = 0;
    local_98._44_4_ = 0x80;
    local_98._48_4_ = 0xffffffff;
    local_98._52_4_ = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    this_00 = (UNodeMappingContainer *)FWeakObjectPtr::Get(&param_2->WeakPtr);
    UNodeMappingContainer::GetTargetToSourceMappingTable
              (this_00,(TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                        *)local_98);
    iVar3 = param_1->ArrayNum;
    pFVar14 = (FName *)(param_1->AllocatorInstance).Data;
    pFVar15 = pFVar14 + (longlong)iVar3 * 2;
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        local_108 = 0;
        `TCheckedPointerIterator<FBoneReference_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_108);
      }
      if (pFVar14 == pFVar15) break;
      uVar8 = FBoneContainer::GetPoseBoneIndexForBoneName(local_e8,pFVar14);
      pFVar6 = local_100;
      if (uVar8 == 0xffffffff) {
LAB_14a3c0389:
        pFVar14 = pFVar14 + 2;
      }
      else {
        iVar10 = (local_100->FinalRefBoneInfo).ArrayNum;
        uVar9 = 0;
        if ((int)uVar8 < iVar10) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (local_118 = (longlong)(int)uVar8, local_110 = (longlong)iVar10,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar11 = *(longlong *)
                  ((pFVar6->FinalRefBoneInfo).AllocatorInstance.Data + (longlong)(int)uVar8 * 0xc);
        uVar9 = ::GetTypeHash((FNameEntryId)(uint)lVar11);
        if (local_98._8_4_ == local_98._52_4_) goto LAB_14a3c0389;
        puVar13 = local_98 + 0x38;
        if (local_58 != (undefined1 *)0x0) {
          puVar13 = local_58;
        }
        iVar10 = *(int *)(puVar13 +
                         (ulonglong)(local_50 - 1U & (int)((ulonglong)lVar11 >> 0x20) + uVar9) * 4);
        if (iVar10 == -1) goto LAB_14a3c0389;
        do {
          lVar1 = local_98._0_8_ + (longlong)iVar10 * 0x18;
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar10 * 0x18) == lVar11) {
            lVar11 = lVar1 + 8;
            if (lVar1 == 0) {
              lVar11 = 0;
            }
            if (lVar11 != 0) {
              local_b0 = &local_106;
              local_106 = (undefined2)uVar8;
              local_b8 = lVar11;
              TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_const_&,unsigned_short_&&>_>
                        (local_e0,(TPairInitializer<FName_const_&,unsigned_short_&&> *)local_c8,
                         (bool *)&local_b8);
            }
            goto LAB_14a3c0389;
          }
          iVar10 = *(int *)(lVar1 + 0x10);
        } while (iVar10 != -1);
        pFVar14 = pFVar14 + 2;
      }
    }
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  else {
    local_f8 = (longlong *)0x0;
    local_f0 = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    (**(code **)(param_6->_padding_ + 0x10))(&param_6->_padding_,&local_f8,&local_d8);
    iVar3 = param_1->ArrayNum;
    pFVar14 = (FName *)(param_1->AllocatorInstance).Data;
    pFVar15 = pFVar14 + (longlong)iVar3 * 2;
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        local_107 = 0;
        `TCheckedPointerIterator<FBoneReference_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_107);
      }
      if (pFVar14 == pFVar15) break;
      iVar10 = FBoneContainer::GetPoseBoneIndexForBoneName(local_e8,pFVar14);
      if ((iVar10 < 0) || (param_5->ArrayNum <= iVar10)) {
LAB_14a3c051b:
        pFVar14 = pFVar14 + 2;
      }
      else {
        if ((iVar10 < 0) &&
           (local_118 = (longlong)iVar10, local_110 = (longlong)param_5->ArrayNum,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar2 = *(ushort *)((param_5->AllocatorInstance).Data + (longlong)iVar10 * 2);
        iVar4 = (local_100->FinalRefBoneInfo).ArrayNum;
        if ((iVar4 <= (int)(uint)uVar2) &&
           (local_118 = (ulonglong)uVar2, local_110 = (longlong)iVar4,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_c0 = *(ushort **)
                    ((local_100->FinalRefBoneInfo).AllocatorInstance.Data + (ulonglong)uVar2 * 0xc);
        plVar12 = local_f8;
        if (local_f8 == local_f8 + (int)local_f0) goto LAB_14a3c051b;
        do {
          if ((ushort *)*plVar12 == local_c0) {
            local_a8 = &local_c0;
            local_a0 = local_104;
            local_104[0] = (undefined2)iVar10;
            TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,unsigned_short_&&>_>
                      (local_e0,(TPairInitializer<FName_const_&,unsigned_short_&&> *)(local_c8 + 4),
                       (bool *)&local_a8);
            goto LAB_14a3c051b;
          }
          plVar12 = plVar12 + 1;
        } while (plVar12 != local_f8 + (int)local_f0);
        pFVar14 = pFVar14 + 2;
      }
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free(local_f8);
    }
  }
  return;
}

// CheckPoseAdapter @ 14a3f1200

bool __thiscall FControlRigHierarchyMappings::CheckPoseAdapter(FControlRigHierarchyMappings *this)

{
  FStatsHierarchical::BeginMeasurement("FControlRigHierarchyMappings::CheckPoseAdapter");
  if ((this->bEnablePoseAdapter != false) &&
     ((this->PoseAdapter).Object == (FControlRigPoseAdapter *)0x0)) {
    FStatsHierarchical::EndMeasurement();
    return false;
  }
  FStatsHierarchical::EndMeasurement();
  return true;
}

// InitializeInstance @ 14a4230d0

void __thiscall FControlRigHierarchyMappings::InitializeInstance(FControlRigHierarchyMappings *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FControlRigPoseAdapter *this_00;
  TRawPtrProxy<FControlRigPoseAdapter> local_res8;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  iVar3 = (**(code **)(*(longlong *)CVarControlRigEnableAnimNodePerformanceOptimizations._padding_ +
                      200))();
  FStatsHierarchical::BeginMeasurement("FControlRigHierarchyMappings::SetEnablePoseAdapter");
  if (this->bEnablePoseAdapter != (iVar3 != 0)) {
    this->bEnablePoseAdapter = iVar3 != 0;
    if (iVar3 == 0) {
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->PoseAdapter != (TSharedPtr<FControlRigPoseAdapter,1> *)&local_18) {
        (this->PoseAdapter).Object = (FControlRigPoseAdapter *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->PoseAdapter).SharedReferenceCount,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
    }
    else {
      this_00 = ::operator_new(0x170);
      if (this_00 == (FControlRigPoseAdapter *)0x0) {
        local_res8.Object = (FControlRigPoseAdapter *)0x0;
      }
      else {
        memset(this_00,0,0x170);
        local_res8.Object = FControlRigPoseAdapter::FControlRigPoseAdapter(this_00);
        if ((((local_res8.Object != (FControlRigPoseAdapter *)0x0) &&
             ((local_res8.Object)->_padding_ != 0)) && ((local_res8.Object)->_padding_ != 0)) &&
           (0 < *(int *)((local_res8.Object)->_padding_ + 8))) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      TSharedPtr<FControlRigPoseAdapter,1>::operator=<FControlRigPoseAdapter>
                (&this->PoseAdapter,&local_res8);
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsUpdateToDate @ 14a428be0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FControlRigHierarchyMappings::IsUpdateToDate
          (FControlRigHierarchyMappings *this,URigHierarchy *param_1)

{
  FControlRigPoseAdapter *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  
  FStatsHierarchical::BeginMeasurement("FControlRigHierarchyMappings::IsUpdateToDate");
  if (this->bEnablePoseAdapter != false) {
    if ((this->PoseAdapter).Object == (FControlRigPoseAdapter *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (this->PoseAdapter).Object;
    cVar5 = (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,param_1);
    if (cVar5 == '\0') {
      FStatsHierarchical::EndMeasurement();
      return false;
    }
  }
  FStatsHierarchical::EndMeasurement();
  return true;
}

// LinkToHierarchy @ 14a429350

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigHierarchyMappings::LinkToHierarchy
          (FControlRigHierarchyMappings *this,URigHierarchy *param_1)

{
  TSharedPtr<FControlRigPoseAdapter,1> *this_00;
  code *pcVar1;
  bool bVar2;
  FControlRigPoseAdapter *this_01;
  TRawPtrProxy<FControlRigPoseAdapter> local_res8;
  TSharedPtr<FRigHierarchyPoseAdapter,1> local_18;
  
  if ((this->bEnablePoseAdapter != false) && (param_1 != (URigHierarchy *)0x0)) {
    this_00 = &this->PoseAdapter;
    if (this_00->Object == (FControlRigPoseAdapter *)0x0) {
      this_01 = ::operator_new(0x170);
      if (this_01 == (FControlRigPoseAdapter *)0x0) {
        local_res8.Object = (FControlRigPoseAdapter *)0x0;
      }
      else {
        memset(this_01,0,0x170);
        local_res8.Object = FControlRigPoseAdapter::FControlRigPoseAdapter(this_01);
        if ((((local_res8.Object != (FControlRigPoseAdapter *)0x0) &&
             ((local_res8.Object)->_padding_ != 0)) && ((local_res8.Object)->_padding_ != 0)) &&
           (0 < *(int *)((local_res8.Object)->_padding_ + 8))) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      TSharedPtr<FControlRigPoseAdapter,1>::operator=<FControlRigPoseAdapter>(this_00,&local_res8);
    }
    local_18.Object = (FRigHierarchyPoseAdapter *)this_00->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (this->PoseAdapter).SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    URigHierarchy::LinkPoseAdapter(param_1,&local_18);
  }
  return;
}

// PerformUpdateToDate @ 14a432980

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigHierarchyMappings::PerformUpdateToDate
          (FControlRigHierarchyMappings *this,UControlRig *param_1,URigHierarchy *param_2,
          FBoneContainer *param_3,TWeakObjectPtr<UNodeMappingContainer,FWeakObjectPtr> *param_4,
          bool param_5,bool param_6)

{
  FControlRigPoseAdapter *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  TSharedPtr<FRigHierarchyPoseAdapter,1> local_28;
  TSharedPtr<FRigHierarchyPoseAdapter,1> local_18;
  
  FStatsHierarchical::BeginMeasurement("FControlRigHierarchyMappings::PerformUpdateToDate");
  if (this->bEnablePoseAdapter != false) {
    if ((this->PoseAdapter).Object == (FControlRigPoseAdapter *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->PoseAdapter).Object;
    cVar4 = (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,param_2);
    if (cVar4 == '\0') {
      local_18.Object = (FRigHierarchyPoseAdapter *)0x0;
      local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      URigHierarchy::LinkPoseAdapter(param_2,&local_18);
      if ((this->PoseAdapter).Object == (FControlRigPoseAdapter *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FControlRigPoseAdapter::UpdateInputOutputMappingIfRequired
                ((this->PoseAdapter).Object,param_1,param_2,param_3,param_4,param_5,param_6);
      local_28.Object = (FRigHierarchyPoseAdapter *)(this->PoseAdapter).Object;
      local_28.SharedReferenceCount.ReferenceController =
           (this->PoseAdapter).SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      URigHierarchy::LinkPoseAdapter(param_2,&local_28);
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// SetEnablePoseAdapter @ 14a459650

void __thiscall
FControlRigHierarchyMappings::SetEnablePoseAdapter(FControlRigHierarchyMappings *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FControlRigPoseAdapter *this_00;
  TRawPtrProxy<FControlRigPoseAdapter> local_res8;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  FStatsHierarchical::BeginMeasurement("FControlRigHierarchyMappings::SetEnablePoseAdapter");
  if (this->bEnablePoseAdapter != param_1) {
    this->bEnablePoseAdapter = param_1;
    if (param_1) {
      this_00 = ::operator_new(0x170);
      if (this_00 == (FControlRigPoseAdapter *)0x0) {
        local_res8.Object = (FControlRigPoseAdapter *)0x0;
      }
      else {
        memset(this_00,0,0x170);
        local_res8.Object = FControlRigPoseAdapter::FControlRigPoseAdapter(this_00);
        if ((((local_res8.Object != (FControlRigPoseAdapter *)0x0) &&
             ((local_res8.Object)->_padding_ != 0)) && ((local_res8.Object)->_padding_ != 0)) &&
           (0 < *(int *)((local_res8.Object)->_padding_ + 8))) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      TSharedPtr<FControlRigPoseAdapter,1>::operator=<FControlRigPoseAdapter>
                (&this->PoseAdapter,&local_res8);
      FStatsHierarchical::EndMeasurement();
      return;
    }
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->PoseAdapter != (TSharedPtr<FControlRigPoseAdapter,1> *)&local_18) {
      (this->PoseAdapter).Object = (FControlRigPoseAdapter *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PoseAdapter).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateControlRigRefPoseIfNeeded @ 14a45f110

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigHierarchyMappings::UpdateControlRigRefPoseIfNeeded
          (FControlRigHierarchyMappings *this,UControlRig *param_1,UObject *param_2,
          USkeletalMeshComponent *param_3,FBoneContainer *param_4,bool param_5,bool param_6)

{
  TOptional<int> *pTVar1;
  ushort uVar2;
  FSkelMeshRefPoseOverride *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FBoneContainer *pFVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  USkeletalMesh *pUVar14;
  uint *puVar15;
  FTlsAutoCleanup *pFVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 local_118 [8];
  FMemMark local_110;
  longlong local_e8;
  FBaseCompactPose<TMemStackAllocator<0>_> local_e0;
  int local_c8 [2];
  code *local_c0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((param_1 == (UControlRig *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ControlRig",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigHierarchyMappings.cpp"
                          ,0x32,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_5) {
    iVar12 = (int)param_2;
    uVar18 = (uint)((ulonglong)param_2 >> 0xd) & 0x7ffff ^ -iVar12;
    iVar21 = (int)param_3;
    uVar17 = (-0x61c88647 - uVar18) - iVar12 ^ uVar18 << 8;
    uVar19 = (iVar12 - uVar17) - uVar18 ^ uVar17 >> 0xd;
    uVar18 = (uVar18 - uVar19) - uVar17 ^ uVar19 >> 0xc;
    uVar17 = (uVar17 - uVar18) - uVar19 ^ uVar18 << 0x10;
    uVar19 = (uVar19 - uVar17) - uVar18 ^ uVar17 >> 5;
    uVar18 = (uVar18 - uVar19) - uVar17 ^ uVar19 >> 3;
    uVar17 = (uVar17 - uVar18) - uVar19 ^ uVar18 << 10;
    uVar18 = ((uVar19 - uVar17) - uVar18 ^ uVar17 >> 0xf) - iVar21 ^
             (uint)((ulonglong)param_3 >> 0xd) & 0x7ffff;
    uVar17 = (-0x61c88647 - uVar18) - iVar21 ^ uVar18 << 8;
    uVar19 = (iVar21 - uVar17) - uVar18 ^ uVar17 >> 0xd;
    uVar18 = (uVar18 - uVar19) - uVar17 ^ uVar19 >> 0xc;
    uVar17 = (uVar17 - uVar18) - uVar19 ^ uVar18 << 0x10;
    uVar19 = (uVar19 - uVar17) - uVar18 ^ uVar17 >> 5;
    uVar18 = (uVar18 - uVar19) - uVar17 ^ uVar19 >> 3;
    uVar17 = (uVar17 - uVar18) - uVar19 ^ uVar18 << 10;
    uVar17 = (uVar19 - uVar17) - uVar18 ^ uVar17 >> 0xf;
    if (param_3 != (USkeletalMeshComponent *)0x0) {
      pUVar14 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_3);
      iVar12 = (int)pUVar14;
      uVar17 = uVar17 - iVar12 ^ (uint)((ulonglong)pUVar14 >> 0xd) & 0x7ffff;
      uVar19 = (-0x61c88647 - uVar17) - iVar12 ^ uVar17 << 8;
      uVar18 = (iVar12 - uVar19) - uVar17 ^ uVar19 >> 0xd;
      uVar17 = (uVar17 - uVar18) - uVar19 ^ uVar18 >> 0xc;
      uVar19 = (uVar19 - uVar17) - uVar18 ^ uVar17 << 0x10;
      uVar18 = (uVar18 - uVar19) - uVar17 ^ uVar19 >> 5;
      uVar17 = (uVar17 - uVar18) - uVar19 ^ uVar18 >> 3;
      uVar19 = (uVar19 - uVar17) - uVar18 ^ uVar17 << 10;
      uVar17 = (uVar18 - uVar19) - uVar17 ^ uVar19 >> 0xf;
    }
    puVar15 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_b8 = local_118;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar16 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_c0,puVar15);
    local_110.Mem = (FMemStackBase *)(pFVar16 + 2);
    local_110.Top = (local_110.Mem)->Top;
    local_110.SavedChunk = *(FTaggedMemory **)(pFVar16 + 4);
    local_110.bPopped = false;
    local_110.NextTopmostMark = *(FMemMark **)(pFVar16 + 5);
    pFVar16[5] = (FTlsAutoCleanup)&local_110;
    *(int *)(pFVar16 + 6) = *(int *)(pFVar16 + 6) + 1;
    local_e0._padding_ = 0;
    local_e0._padding_ = 0;
    local_e0.BoneContainer = (FBoneContainer *)0x0;
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(&local_e0,param_4);
    if (param_6) {
      uVar18 = (uint)local_e0._padding_;
      uVar19 = 0;
      if ((uint)local_e0._padding_ != 0) {
        local_e8 = 0;
        do {
          pFVar10 = local_e0.BoneContainer;
          lVar23 = local_e8;
          pFVar3 = ((local_e0.BoneContainer)->RefPoseOverride).Object;
          if (pFVar3 == (FSkelMeshRefPoseOverride *)0x0) {
            pTVar22 = &(local_e0.BoneContainer)->RefSkeleton->FinalRefBonePose;
          }
          else {
            pTVar22 = &pFVar3->RefBonePoses;
          }
          uVar13 = 0;
          if ((int)uVar19 < ((local_e0.BoneContainer)->BoneIndicesArray).ArrayNum) {
            uVar13 = ~uVar19 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar2 = *(ushort *)((pFVar10->BoneIndicesArray).AllocatorInstance.Data + lVar23);
          if ((pTVar22->ArrayNum <= (int)(uint)uVar2) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (pTVar22->AllocatorInstance).Data;
          lVar23 = (ulonglong)uVar2 * 0x60;
          local_88 = *(undefined8 *)(pFVar4 + lVar23 + 0x20);
          uStack_80 = *(undefined8 *)(pFVar4 + lVar23 + 0x20 + 8);
          local_78 = *(undefined8 *)(pFVar4 + lVar23 + 0x30);
          uVar6 = *(undefined8 *)(pFVar4 + lVar23);
          uVar7 = *(undefined8 *)(pFVar4 + lVar23 + 8);
          uVar8 = *(undefined8 *)(pFVar4 + lVar23 + 0x10);
          uVar9 = *(undefined8 *)(pFVar4 + lVar23 + 0x10 + 8);
          uVar13 = FCrc::MemCrc_DEPRECATED(&local_88,0x18,0);
          uVar17 = uVar17 - uVar13 ^ uVar13 >> 0xd;
          uVar20 = (-0x61c88647 - uVar17) - uVar13 ^ uVar17 << 8;
          uVar13 = (uVar13 - uVar20) - uVar17 ^ uVar20 >> 0xd;
          uVar17 = (uVar17 - uVar13) - uVar20 ^ uVar13 >> 0xc;
          uVar20 = (uVar20 - uVar17) - uVar13 ^ uVar17 << 0x10;
          uVar24 = (uVar13 - uVar20) - uVar17 ^ uVar20 >> 5;
          uVar13 = (uVar17 - uVar24) - uVar20 ^ uVar24 >> 3;
          uVar20 = (uVar20 - uVar13) - uVar24 ^ uVar13 << 10;
          local_a8 = uVar6;
          local_a0 = uVar7;
          local_98 = uVar8;
          local_90 = uVar9;
          uVar17 = FCrc::MemCrc_DEPRECATED(&local_a8,0x20,0);
          uVar24 = ((uVar24 - uVar20) - uVar13 ^ uVar20 >> 0xf) - uVar17 ^ uVar17 >> 0xd;
          local_70 = *(undefined8 *)(pFVar4 + lVar23 + 0x40);
          uStack_68 = *(undefined8 *)(pFVar4 + lVar23 + 0x40 + 8);
          local_60 = *(undefined8 *)(pFVar4 + lVar23 + 0x50);
          uVar13 = (-0x61c88647 - uVar24) - uVar17 ^ uVar24 << 8;
          uVar20 = (uVar17 - uVar13) - uVar24 ^ uVar13 >> 0xd;
          uVar24 = (uVar24 - uVar20) - uVar13 ^ uVar20 >> 0xc;
          uVar17 = (uVar13 - uVar24) - uVar20 ^ uVar24 << 0x10;
          uVar20 = (uVar20 - uVar17) - uVar24 ^ uVar17 >> 5;
          uVar24 = (uVar24 - uVar20) - uVar17 ^ uVar20 >> 3;
          uVar13 = (uVar17 - uVar24) - uVar20 ^ uVar24 << 10;
          uVar17 = FCrc::MemCrc_DEPRECATED(&local_70,0x18,0);
          uVar24 = ((uVar20 - uVar13) - uVar24 ^ uVar13 >> 0xf) - uVar17 ^ uVar17 >> 0xd;
          uVar13 = (-0x61c88647 - uVar24) - uVar17 ^ uVar24 << 8;
          uVar20 = (uVar17 - uVar13) - uVar24 ^ uVar13 >> 0xd;
          uVar24 = (uVar24 - uVar20) - uVar13 ^ uVar20 >> 0xc;
          uVar17 = (uVar13 - uVar24) - uVar20 ^ uVar24 << 0x10;
          uVar13 = (uVar20 - uVar17) - uVar24 ^ uVar17 >> 5;
          uVar20 = (uVar24 - uVar13) - uVar17 ^ uVar13 >> 3;
          local_e8 = local_e8 + 2;
          uVar17 = (uVar17 - uVar20) - uVar13 ^ uVar20 << 10;
          uVar19 = uVar19 + 1;
          uVar17 = (uVar13 - uVar17) - uVar20 ^ uVar17 >> 0xf;
        } while (uVar19 != uVar18);
      }
    }
    pTVar1 = &this->RefPoseSetterHash;
    if ((((this->RefPoseSetterHash).bIsSet == false) || (uVar17 != pTVar1->TypedValue)) &&
       (UControlRig::SetBoneInitialTransformsFromCompactPose(param_1,(FCompactPose *)&local_e0),
       (TOptional<int> *)local_c8 != pTVar1)) {
      pTVar1->TypedValue = uVar17;
      (this->RefPoseSetterHash).bIsSet = true;
    }
    if (local_110.bPopped == false) {
      if (((local_110.Mem)->TopMark != &local_110) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mem.TopMark == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                              ,0x215,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_110.bPopped = true;
      (local_110.Mem)->NumMarks = (local_110.Mem)->NumMarks + -1;
      if (local_110.SavedChunk != (local_110.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_110.Mem,local_110.SavedChunk);
      }
      (local_110.Mem)->Top = local_110.Top;
      (local_110.Mem)->TopMark = local_110.NextTopmostMark;
    }
  }
  return;
}

// UpdateInput @ 14a45fbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigHierarchyMappings::UpdateInput
          (FControlRigHierarchyMappings *this,UControlRig *param_1,FPoseContext *param_2,
          FControlRigIOSettings *param_3,FControlRigIOSettings *param_4,
          TWeakObjectPtr<UNodeMappingContainer,FWeakObjectPtr> *param_5,bool param_6,bool param_7,
          bool param_8,bool param_9,bool param_10)

{
  int *piVar1;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  double *pdVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  URigHierarchy *this_01;
  void *_Src;
  undefined8 uVar8;
  FRigCurveElement *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  FControlRigIOSettings *pFVar23;
  bool bVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  FControlRigPoseAdapter *pFVar29;
  FRigTransformElement *this_02;
  longlong lVar30;
  UScriptStruct *pUVar31;
  FRigCurrentAndInitialTransform *pFVar32;
  FRigCurrentAndInitialDirtyState *pFVar33;
  bool *pbVar34;
  UObject *pUVar35;
  URigHierarchy *pUVar36;
  TArray<FRigBaseElement_*,TSizedDefaultAllocator<32>_> *pTVar37;
  TTransform<double> *pTVar38;
  UNodeMappingContainer *this_03;
  TTransform<double> *this_04;
  ulonglong uVar39;
  longlong lVar40;
  FCompactPoseBoneIndex FVar41;
  FCompactPoseBoneIndex FVar42;
  FScriptContainerElement *pFVar43;
  TSharedPtr<FControlRigPoseAdapter,1> *pTVar44;
  undefined8 *puVar45;
  uint uVar46;
  uint uVar47;
  uint *puVar48;
  undefined8 *puVar49;
  FScriptContainerElement *pFVar50;
  TSharedPtr<FControlRigPoseAdapter,1> *pTVar51;
  undefined1 auStackY_5d8 [32];
  undefined1 local_598;
  undefined1 local_597;
  undefined1 local_596;
  undefined1 local_595;
  undefined1 local_594 [2];
  undefined2 local_592;
  undefined4 local_590;
  FWeakObjectPtr FStack_58c;
  uint local_580 [2];
  FPoseContext *local_578;
  undefined8 local_570;
  uint local_568;
  TArray<FRigBaseElement_*,TSizedDefaultAllocator<32>_> local_560;
  undefined1 local_550;
  FWeakObjectPtr local_54c;
  undefined8 local_540;
  uint local_538;
  int local_530 [2];
  URigHierarchy *local_528;
  TMap<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
  *local_520;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_518;
  TMap<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
  *local_4f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4e8;
  URigHierarchy *local_4c0;
  FRigElementKey local_4b8;
  FRigElementKey local_4a8;
  FRigElementKey local_498;
  FRigElementKey local_488;
  TPairInitializer<FName_const_&,int_const_&> local_478;
  FCSPose<FCompactPose> local_468;
  longlong local_418;
  uint *local_410;
  <lambda_1> local_408;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  undefined4 local_1ec;
  undefined4 local_1cc;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  local_578 = param_2;
  local_540 = param_3;
  FStatsHierarchical::BeginMeasurement("FControlRigHierarchyMappings::UpdateInput");
  pTVar44 = (TSharedPtr<FControlRigPoseAdapter,1> *)CONCAT44(local_570._4_4_,(undefined4)local_570);
  this_01 = (param_1->DynamicHierarchy).field0_0x0.DebugPtr;
  pFVar23 = local_540;
  local_570 = (TSharedPtr<FControlRigPoseAdapter,1> *)
              CONCAT44(local_570._4_4_,(undefined4)local_570);
  if ((this_01 == (URigHierarchy *)0x0) ||
     (local_570 = pTVar44, ((uint)this_01->_padding_ >> 0x1e & 1) != 0)) goto LAB_14a460b54;
  if (this->bEnablePoseAdapter != false) {
    pTVar44 = &this->PoseAdapter;
    local_570 = pTVar44;
    if ((pTVar44->Object != (FControlRigPoseAdapter *)0x0) && (param_3->bUpdatePose != false)) {
      pFVar29 = TSharedPtr<FControlRigPoseAdapter,1>::operator->(pTVar44);
      if ((pFVar29->BonesToResetToInitial).ArrayNum != 0) {
        bVar24 = this_01->bEnableCacheValidityCheck;
        this_01->bEnableCacheValidityCheck = false;
        FStack_58c.ObjectIndex = 0;
        FStack_58c.ObjectSerialNumber = 0;
        local_590 = CONCAT31(local_590._1_3_,bVar24);
        local_528 = this_01;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        FWeakObjectPtr::operator=(&FStack_58c,(FObjectPtr)&local_528);
        pFVar29 = TSharedPtr<FControlRigPoseAdapter,1>::operator->(pTVar44);
        pFVar50 = (pFVar29->BonesToResetToInitial).AllocatorInstance.Data;
        iVar25 = (pFVar29->BonesToResetToInitial).ArrayNum;
        pFVar43 = pFVar50 + (longlong)iVar25 * 4;
        while( true ) {
          if ((pFVar29->BonesToResetToInitial).ArrayNum != iVar25) {
            local_598 = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_598);
          }
          if (pFVar50 == pFVar43) break;
          this_02 = (FRigTransformElement *)URigHierarchy::Get(this_01,*(int *)pFVar50);
          if (this_02 != (FRigTransformElement *)0x0) {
            lVar30 = (**(code **)(this_02->_padding_ + 0x10))(this_02);
            pUVar31 = FRigBoneElement::StaticStruct();
            if (pUVar31 != (UScriptStruct *)0x0) {
              iVar6 = (int)pUVar31->_padding_;
              if ((*(int *)(lVar30 + 0x38) < iVar6) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar30 + 0x30) + (longlong)iVar6 * 8)
                  != &pUVar31->_padding_)) {
                bVar24 = false;
              }
              else {
                bVar24 = true;
              }
              if (bVar24) {
                URigHierarchy::GetTransform(this_01,&local_1c8,this_02,InitialLocal);
                pFVar32 = FRigTransformElement::GetTransform(this_02);
                pTVar38 = (pFVar32->Current).Local.Storage;
                if (pTVar38 != (TTransform<double> *)0x0) {
                  (pTVar38->Rotation).XY.m128d_f64[0] = local_1c8.Rotation.XY.m128d_f64[0];
                  (pTVar38->Rotation).XY.m128d_f64[1] = local_1c8.Rotation.XY.m128d_f64[1];
                  (pTVar38->Rotation).ZW.m128d_f64[0] = local_1c8.Rotation.ZW.m128d_f64[0];
                  (pTVar38->Rotation).ZW.m128d_f64[1] = local_1c8.Rotation.ZW.m128d_f64[1];
                  (pTVar38->Translation).XY.m128d_f64[0] = local_1c8.Translation.XY.m128d_f64[0];
                  (pTVar38->Translation).XY.m128d_f64[1] = local_1c8.Translation.XY.m128d_f64[1];
                  (pTVar38->Translation).ZW.m128d_f64[0] = local_1c8.Translation.ZW.m128d_f64[0];
                  (pTVar38->Translation).ZW.m128d_f64[1] = local_1c8.Translation.ZW.m128d_f64[1];
                  (pTVar38->Scale3D).XY.m128d_f64[0] = local_1c8.Scale3D.XY.m128d_f64[0];
                  (pTVar38->Scale3D).XY.m128d_f64[1] = local_1c8.Scale3D.XY.m128d_f64[1];
                  (pTVar38->Scale3D).ZW.m128d_f64[0] = local_1c8.Scale3D.ZW.m128d_f64[0];
                  (pTVar38->Scale3D).ZW.m128d_f64[1] = local_1c8.Scale3D.ZW.m128d_f64[1];
                }
                pFVar33 = FRigTransformElement::GetDirtyState(this_02);
                pbVar34 = FRigTransformDirtyState::Get(&(pFVar33->Current).Local);
                *pbVar34 = false;
                pFVar33 = FRigTransformElement::GetDirtyState(this_02);
                pbVar34 = FRigTransformDirtyState::Get(&(pFVar33->Current).Local);
                if (*pbVar34 != false) {
                  bVar24 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_3065123850539761247>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                                      ,0x1a1,
                                      "!(GetDirtyFlag(ERigTransformType::SwapLocalAndGlobal(InTransformType)))"
                                     );
                  if (bVar24) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                }
                pbVar34 = FRigTransformDirtyState::Get((FRigTransformDirtyState *)pFVar33);
                *pbVar34 = true;
              }
            }
          }
          pFVar50 = pFVar50 + 4;
        }
        bVar24 = FWeakObjectPtr::IsValid(&FStack_58c);
        param_2 = local_578;
        pTVar44 = local_570;
        if (bVar24) {
          pUVar35 = FWeakObjectPtr::Get(&FStack_58c);
          pUVar35[0x20].field_0x18 = (undefined1)local_590;
          pTVar44 = local_570;
        }
      }
      if (param_7) {
        pFVar29 = TSharedPtr<FControlRigPoseAdapter,1>::operator->(pTVar44);
        if (*(int *)&(param_2->Pose).field_0x8 == (pFVar29->LocalPose).ArrayNum) {
          pFVar29 = TSharedPtr<FControlRigPoseAdapter,1>::operator->(pTVar44);
          FStatsHierarchical::BeginMeasurement("FControlRigPoseAdapter::MarkDependentsDirty");
          pUVar36 = FRigHierarchyPoseAdapter::GetHierarchy((FRigHierarchyPoseAdapter *)pFVar29);
          if ((pUVar36 != (URigHierarchy *)0x0) && (((uint)pUVar36->_padding_ >> 0x1e & 1) == 0)) {
            FControlRigPoseAdapter::ComputeDependentTransforms(pFVar29);
            iVar25 = (pFVar29->Dependents).ArrayNum;
            pFVar43 = (pFVar29->Dependents).AllocatorInstance.Data;
            pFVar50 = pFVar43 + (longlong)iVar25 * 0x20;
            while( true ) {
              pTVar44 = local_570;
              if ((pFVar29->Dependents).ArrayNum != iVar25) {
                local_597 = 0;
                `TCheckedPointerIterator<FControlRigPoseAdapter::FDependentTransform,int,0>::
                operator!='::__l2::<lambda_1>::operator()(&local_597);
                pTVar44 = local_570;
              }
              local_570 = pTVar44;
              if (pFVar43 == pFVar50) break;
              pbVar34 = FRigTransformDirtyState::Get
                                  ((FRigTransformDirtyState *)(*(longlong *)(pFVar43 + 0x18) + 0x10)
                                  );
              if (*pbVar34 != false) {
                bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Dependent.DirtyState->Local.Get() == false",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigPoseAdapter.cpp"
                                    ,0x24c,L"");
                if (bVar24) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              FRigTransformDirtyState::Set(*(FRigTransformDirtyState **)(pFVar43 + 0x18),true);
              pFVar43 = pFVar43 + 0x20;
            }
          }
          FStatsHierarchical::EndMeasurement();
          pFVar29 = TSharedPtr<FControlRigPoseAdapter,1>::operator->(pTVar44);
          iVar25 = *(int *)&(param_2->Pose).field_0x8;
          _Src = *(void **)&param_2->Pose;
          (pFVar29->LocalPose).ArrayNum = iVar25;
          iVar6 = (pFVar29->LocalPose).ArrayMax;
          piVar1 = &(pFVar29->LocalPose).ArrayMax;
          if ((iVar25 == 0) && (iVar6 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,iVar25,iVar6,&(pFVar29->LocalPose).AllocatorInstance,iVar25,piVar1)
            ;
            if (iVar25 != 0) {
              memcpy((pFVar29->LocalPose).AllocatorInstance.Data,_Src,(longlong)iVar25 * 0x60);
            }
          }
          pFVar29 = TSharedPtr<FControlRigPoseAdapter,1>::operator->(pTVar44);
          local_592 = 0x101;
          FControlRigPoseAdapter::UpdateDirtyStates(pFVar29,SUB82(&local_592,0));
        }
      }
      if ((local_540->bUpdateCurves != false) ||
         (pFVar23 = local_540, param_4->bUpdateCurves != false)) {
        URigHierarchy::UnsetCurveValues(this_01,false);
        pTVar37 = URigHierarchy::GetCurvesFast(this_01);
        local_560.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_560.ArrayNum = pTVar37->ArrayNum;
        lVar30 = (longlong)local_560.ArrayNum;
        pFVar43 = (pTVar37->AllocatorInstance).Data;
        if (local_560.ArrayNum == 0) {
          local_560.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_560.ArrayNum,0,&local_560.AllocatorInstance,local_560.ArrayNum,
                     &local_560.ArrayMax);
          memcpy(local_560.AllocatorInstance.Data,pFVar43,lVar30 << 3);
        }
        pFVar29 = TSharedPtr<FControlRigPoseAdapter,1>::operator->(pTVar44);
        iVar25 = local_560.ArrayNum;
        this_00 = &pFVar29->HierarchyCurveLookup;
        if (*(int *)&(pFVar29->HierarchyCurveLookup).field_0x8 -
            *(int *)&(pFVar29->HierarchyCurveLookup).field_0x34 != local_560.ArrayNum) {
          TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
          Reset((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)this_00);
          TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
          Reserve((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                   *)this_00,iVar25);
          local_580[0] = 0;
          if (0 < iVar25) {
            do {
              uVar28 = local_580[0];
              uVar46 = 0;
              if ((int)local_580[0] < local_560.ArrayNum) {
                uVar46 = ~local_580[0] >> 0x1f;
              }
              if (uVar46 == 0) {
                bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar24) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              local_410 = local_580;
              local_418 = *(longlong *)
                           (local_560.AllocatorInstance.Data + (longlong)(int)uVar28 * 8) + 0x14;
              TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                        ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                          *)this_00,&local_478,(bool *)&local_418);
              local_580[0] = local_580[0] + 1;
            } while ((int)local_580[0] < iVar25);
          }
        }
        pFVar29 = TSharedPtr<FControlRigPoseAdapter,1>::operator->(pTVar44);
        uVar28 = *(uint *)&(param_2->Curve).field_0x8;
        piVar1 = &(pFVar29->PoseCurveToHierarchyCurve).ArrayNum;
        iVar25 = *piVar1;
        if (iVar25 < (int)uVar28) {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar28 - iVar25,&(pFVar29->PoseCurveToHierarchyCurve).AllocatorInstance,
                     piVar1,&(pFVar29->PoseCurveToHierarchyCurve).ArrayMax);
        }
        else {
          if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
          }
          if ((int)uVar28 < iVar25) {
            uVar46 = iVar25 - uVar28;
            if ((int)(uVar28 | uVar46) < 0) {
              bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 );
              if (bVar24) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            if (uVar46 != 0) {
              pFVar43 = (pFVar29->PoseCurveToHierarchyCurve).AllocatorInstance.Data +
                        (longlong)(int)uVar28 * 4;
              iVar25 = (*piVar1 - uVar28) - uVar46;
              if (iVar25 != 0) {
                memmove(pFVar43,pFVar43 + (longlong)(int)uVar46 * 4,(longlong)iVar25 << 2);
              }
              *piVar1 = *piVar1 - uVar46;
            }
          }
        }
        local_408.CurveIndex = local_530;
        local_530[0] = 0;
        local_408.InHierarchyCurves = &local_560;
        local_408.__this = pFVar29;
        UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
        ForEachElement<_FControlRigPoseAdapter::SetPoseCurveToHierarchyCurve_::__l2::<lambda_1>_>
                  ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)
                   &param_2->Curve,&local_408);
        pFVar23 = local_540;
        if (local_560.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_560.AllocatorInstance.Data);
          pFVar23 = local_540;
        }
      }
    }
    goto LAB_14a460b54;
  }
  iVar25 = 0;
  uVar28 = 0;
  if ((local_540->bUpdatePose != false) && (param_7)) {
    if ((*(int *)&(this->ControlRigBoneInputMappingByName).field_0x8 !=
         *(int *)&(this->ControlRigBoneInputMappingByName).field_0x34) || (param_8)) {
      local_550 = this_01->bEnableCacheValidityCheck;
      this_01->bEnableCacheValidityCheck = false;
      local_54c.ObjectIndex = 0;
      local_54c.ObjectSerialNumber = 0;
      local_4c0 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FWeakObjectPtr::operator=(&local_54c,(FObjectPtr)&local_4c0);
      URigHierarchy::ResetPoseToInitial(this_01,Bone);
      bVar24 = FWeakObjectPtr::IsValid(&local_54c);
      if (bVar24) {
        pUVar35 = FWeakObjectPtr::Get(&local_54c);
        pUVar35[0x20].field_0x18 = local_550;
      }
    }
    uVar46 = 0;
    if (!param_9) {
      bVar24 = FWeakObjectPtr::IsValid(&param_5->WeakPtr);
      if (!bVar24) {
        iVar6 = (this->ControlRigBoneInputMappingByIndex).ArrayNum;
        if (iVar6 == 0) {
          local_520 = &this->ControlRigBoneInputMappingByName;
          iVar6 = *(int *)&(this->ControlRigBoneInputMappingByName).field_0x28;
          TStack_518.Array =
               (TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ControlRigBoneInputMappingByName).field_0x10;
          uVar26 = 1;
          uVar47 = 0;
          if (iVar6 != 0) {
            puVar48 = *(uint **)&(this->ControlRigBoneInputMappingByName).field_0x20;
            if (puVar48 == (uint *)0x0) {
              puVar48 = (uint *)TStack_518.Array;
            }
            uVar7 = *puVar48;
            uVar46 = uVar28;
            uVar47 = uVar28;
            while (uVar7 == 0) {
              lVar30 = (longlong)(int)uVar47;
              uVar46 = uVar46 + 0x20;
              uVar47 = uVar47 + 1;
              iVar25 = iVar6;
              if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar47)
              goto LAB_14a4604bf;
              uVar7 = puVar48[lVar30 + 1];
            }
            uVar26 = -uVar7 & uVar7;
            uVar39 = (ulonglong)uVar26 * 2 + 1;
            lVar30 = 0x3f;
            if (uVar39 != 0) {
              for (; uVar39 >> lVar30 == 0; lVar30 = lVar30 + -1) {
              }
            }
            local_478.Key._4_4_ = (int)lVar30;
            iVar25 = local_478.Key._4_4_ + -1 + uVar46;
            if (iVar6 < iVar25) {
              iVar25 = iVar6;
            }
          }
LAB_14a4604bf:
          TStack_4e8._padding_ = CONCAT44(uVar26,uVar47);
          TStack_4e8.CurrentBitIndex = iVar25;
          TStack_4e8.UnvisitedBitMask = 0xffffffff;
          TStack_4e8._28_4_ = local_1ec;
          TStack_4e8.BaseBitIndex = uVar46;
          TStack_518._padding_ = TStack_4e8._padding_;
          TStack_518.BaseBitIndex = uVar46;
          TStack_518._28_4_ = local_1ec;
          TStack_518.UnvisitedBitMask = 0xffffffff;
          TStack_518.CurrentBitIndex = iVar25;
          local_4f0 = local_520;
          TStack_4e8.Array = TStack_518.Array;
          pFVar23 = local_540;
          if (iVar25 < iVar6) {
            do {
              local_570._0_4_ = CONCAT31(local_570._1_3_,1);
              uVar8 = *(undefined8 *)(*(longlong *)&local_520->field_0x0 + (longlong)iVar25 * 0x14);
              local_570._4_4_ = (uint)uVar8;
              local_568 = (uint)((ulonglong)uVar8 >> 0x20);
              uVar4 = *(ushort *)(*(longlong *)&local_520->field_0x0 + 8 + (longlong)iVar25 * 0x14);
              if (*(int *)&(param_2->Pose).field_0x8 <= (int)(uint)uVar4) {
                bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar24) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              lVar30 = *(longlong *)&param_2->Pose;
              local_4b8.Name.ComparisonIndex.Value = local_570._4_4_;
              local_4b8._0_4_ = (undefined4)local_570;
              lVar40 = (ulonglong)uVar4 * 0x60;
              dVar11 = *(double *)(lVar40 + lVar30);
              dVar12 = ((double *)(lVar40 + lVar30))[1];
              pdVar2 = (double *)(lVar40 + 0x10 + lVar30);
              dVar13 = *pdVar2;
              dVar14 = pdVar2[1];
              pdVar2 = (double *)(lVar40 + 0x20 + lVar30);
              dVar15 = *pdVar2;
              dVar16 = pdVar2[1];
              pdVar2 = (double *)(lVar40 + 0x30 + lVar30);
              dVar17 = *pdVar2;
              dVar18 = pdVar2[1];
              pdVar2 = (double *)(lVar40 + 0x40 + lVar30);
              dVar19 = *pdVar2;
              dVar20 = pdVar2[1];
              pdVar2 = (double *)(lVar40 + 0x50 + lVar30);
              dVar21 = *pdVar2;
              dVar22 = pdVar2[1];
              local_4b8.Name.Number = local_568;
              iVar25 = URigHierarchy::GetIndex(this_01,&local_4b8,true);
              local_388.Rotation.XY.m128d_f64[0] = dVar11;
              local_388.Rotation.XY.m128d_f64[1] = dVar12;
              local_388.Rotation.ZW.m128d_f64[0] = dVar13;
              local_388.Rotation.ZW.m128d_f64[1] = dVar14;
              local_388.Translation.XY.m128d_f64[0] = dVar15;
              local_388.Translation.XY.m128d_f64[1] = dVar16;
              local_388.Translation.ZW.m128d_f64[0] = dVar17;
              local_388.Translation.ZW.m128d_f64[1] = dVar18;
              local_388.Scale3D.XY.m128d_f64[0] = dVar19;
              local_388.Scale3D.XY.m128d_f64[1] = dVar20;
              local_388.Scale3D.ZW.m128d_f64[0] = dVar21;
              local_388.Scale3D.ZW.m128d_f64[1] = dVar22;
              URigHierarchy::SetLocalTransformByIndex
                        (this_01,iVar25,&local_388,false,true,false,false);
              TStack_518.UnvisitedBitMask =
                   TStack_518.UnvisitedBitMask & ~TStack_518._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_518);
              iVar25 = TStack_518.CurrentBitIndex;
              pFVar23 = local_540;
            } while (TStack_518.CurrentBitIndex < (TStack_518.Array)->NumBits);
          }
        }
        else {
          pTVar44 = (TSharedPtr<FControlRigPoseAdapter,1> *)
                    (this->ControlRigBoneInputMappingByIndex).AllocatorInstance.Data;
          pTVar51 = (TSharedPtr<FControlRigPoseAdapter,1> *)
                    ((longlong)&pTVar44->Object + (longlong)iVar6 * 4);
          while( true ) {
            local_570 = pTVar51;
            if ((this->ControlRigBoneInputMappingByIndex).ArrayNum != iVar6) {
              local_596 = 0;
              `TCheckedPointerIterator<TTuple<unsigned_short,unsigned_short>_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_596);
            }
            param_2 = local_578;
            pFVar23 = local_540;
            if (pTVar44 == pTVar51) break;
            uVar4 = *(ushort *)((longlong)&pTVar44->Object + 2);
            uVar5 = *(ushort *)&pTVar44->Object;
            if (*(int *)&(local_578->Pose).field_0x8 <= (int)(uint)uVar4) {
              bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar24) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            lVar40 = (ulonglong)uVar4 * 0x60;
            lVar30 = *(longlong *)&local_578->Pose;
            local_3e8.Rotation.XY.m128d_f64[0] = *(double *)(lVar40 + lVar30);
            local_3e8.Rotation.XY.m128d_f64[1] = ((double *)(lVar40 + lVar30))[1];
            pdVar2 = (double *)(lVar40 + 0x10 + lVar30);
            local_3e8.Rotation.ZW.m128d_f64[0] = *pdVar2;
            local_3e8.Rotation.ZW.m128d_f64[1] = pdVar2[1];
            pdVar2 = (double *)(lVar40 + 0x20 + lVar30);
            local_3e8.Translation.XY.m128d_f64[0] = *pdVar2;
            local_3e8.Translation.XY.m128d_f64[1] = pdVar2[1];
            pdVar2 = (double *)(lVar40 + 0x30 + lVar30);
            local_3e8.Translation.ZW.m128d_f64[0] = *pdVar2;
            local_3e8.Translation.ZW.m128d_f64[1] = pdVar2[1];
            pdVar2 = (double *)(lVar40 + 0x40 + lVar30);
            local_3e8.Scale3D.XY.m128d_f64[0] = *pdVar2;
            local_3e8.Scale3D.XY.m128d_f64[1] = pdVar2[1];
            pdVar2 = (double *)(lVar40 + 0x50 + lVar30);
            local_3e8.Scale3D.ZW.m128d_f64[0] = *pdVar2;
            local_3e8.Scale3D.ZW.m128d_f64[1] = pdVar2[1];
            URigHierarchy::SetLocalTransformByIndex
                      (this_01,(uint)uVar5,&local_3e8,false,true,false,false);
            pTVar44 = (TSharedPtr<FControlRigPoseAdapter,1> *)((longlong)&pTVar44->Object + 4);
            pTVar51 = local_570;
          }
        }
        goto LAB_14a4609f0;
      }
    }
    local_468.Pose._0_8_ = 0;
    local_468.Pose._16_8_ = 0;
    local_468.ComponentSpaceFlags._0_8_ = 0;
    local_468.Pose._8_8_ = 0;
    local_468.ComponentSpaceFlags._8_8_ = 0;
    local_468.BoneMask._0_8_ = 0;
    local_468.BoneMask._8_8_ = 0;
    local_468.BonesToConvert.AllocatorInstance.Data = (FCompactPoseBoneIndex *)0x0;
    local_468.BonesToConvert.ArrayNum = 0;
    local_468.BonesToConvert.ArrayMax = 0;
    FCSPose<FCompactPose>::InitPose(&local_468,&param_2->Pose);
    iVar6 = (this->ControlRigBoneInputMappingByIndex).ArrayNum;
    if (iVar6 == 0) {
      local_528 = (URigHierarchy *)&this->ControlRigBoneInputMappingByName;
      iVar6 = *(int *)&(this->ControlRigBoneInputMappingByName).field_0x28;
      TStack_518.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)
           &(this->ControlRigBoneInputMappingByName).field_0x10;
      uVar47 = 1;
      iVar27 = iVar25;
      if (iVar6 != 0) {
        puVar48 = *(uint **)&(this->ControlRigBoneInputMappingByName).field_0x20;
        if (puVar48 == (uint *)0x0) {
          puVar48 = (uint *)TStack_518.Array;
        }
        uVar26 = *puVar48;
        uVar46 = uVar28;
        while (uVar26 == 0) {
          lVar30 = (longlong)iVar25;
          uVar46 = uVar46 + 0x20;
          iVar25 = iVar25 + 1;
          iVar27 = iVar6;
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14a4607bf;
          uVar26 = puVar48[lVar30 + 1];
        }
        uVar47 = -uVar26 & uVar26;
        uVar39 = (ulonglong)uVar47 * 2 + 1;
        lVar30 = 0x3f;
        if (uVar39 != 0) {
          for (; uVar39 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        local_478.Value._0_4_ = (int)lVar30;
        iVar27 = (int)local_478.Value + -1 + uVar46;
        if (iVar6 < iVar27) {
          iVar27 = iVar6;
        }
      }
LAB_14a4607bf:
      TStack_518._padding_ = CONCAT44(uVar47,iVar25);
      TStack_518.CurrentBitIndex = iVar27;
      TStack_518.UnvisitedBitMask = 0xffffffff;
      TStack_518._28_4_ = local_1cc;
      TStack_518.BaseBitIndex = uVar46;
      TStack_4e8._padding_ = TStack_518._padding_;
      TStack_4e8.BaseBitIndex = uVar46;
      TStack_4e8._28_4_ = local_1cc;
      TStack_4e8.UnvisitedBitMask = 0xffffffff;
      TStack_4e8.CurrentBitIndex = iVar27;
      local_520 = (TMap<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
                   *)local_528;
      local_4f0 = (TMap<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
                   *)local_528;
      TStack_4e8.Array = TStack_518.Array;
      pFVar23 = local_540;
      if (iVar27 < iVar6) {
        do {
          local_590 = CONCAT31(local_590._1_3_,1);
          lVar30 = *(longlong *)&local_4f0->field_0x0;
          uVar8 = *(undefined8 *)(lVar30 + (longlong)iVar27 * 0x14);
          FStack_58c.ObjectIndex = (int)uVar8;
          FStack_58c.ObjectSerialNumber = (int)((ulonglong)uVar8 >> 0x20);
          FVar42._2_2_ = 0;
          FVar42._0_2_ = *(ushort *)(lVar30 + 8 + (longlong)iVar27 * 0x14);
          pTVar38 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_468,FVar42);
          bVar24 = FWeakObjectPtr::IsValid(&param_5->WeakPtr);
          if (bVar24) {
            this_03 = (UNodeMappingContainer *)FWeakObjectPtr::Get(&param_5->WeakPtr);
            this_04 = UNodeMappingContainer::GetSourceToTargetTransform
                                (this_03,&local_108,(FName *)(lVar30 + (longlong)iVar27 * 0x14));
            UE::Math::TTransform<double>::GetRelativeTransformReverse(this_04,&local_168,pTVar38);
            dVar22 = local_168.Scale3D.ZW.m128d_f64[1];
            dVar21 = local_168.Scale3D.ZW.m128d_f64[0];
            dVar20 = local_168.Scale3D.XY.m128d_f64[1];
            dVar19 = local_168.Scale3D.XY.m128d_f64[0];
            dVar18 = local_168.Translation.ZW.m128d_f64[1];
            dVar17 = local_168.Translation.ZW.m128d_f64[0];
            dVar16 = local_168.Translation.XY.m128d_f64[1];
            dVar15 = local_168.Translation.XY.m128d_f64[0];
            dVar14 = local_168.Rotation.ZW.m128d_f64[1];
            dVar13 = local_168.Rotation.ZW.m128d_f64[0];
            dVar12 = local_168.Rotation.XY.m128d_f64[1];
            dVar11 = local_168.Rotation.XY.m128d_f64[0];
            local_4a8.Name.ComparisonIndex.Value = FStack_58c.ObjectIndex;
            local_4a8._0_4_ = local_590;
            local_4a8.Name.Number = FStack_58c.ObjectSerialNumber;
            iVar25 = URigHierarchy::GetIndex(this_01,&local_4a8,true);
            pTVar38 = &local_2c8;
            local_2c8.Rotation.XY.m128d_f64[0] = dVar11;
            local_2c8.Rotation.XY.m128d_f64[1] = dVar12;
            local_2c8.Rotation.ZW.m128d_f64[0] = dVar13;
            local_2c8.Rotation.ZW.m128d_f64[1] = dVar14;
            local_2c8.Translation.XY.m128d_f64[0] = dVar15;
            local_2c8.Translation.XY.m128d_f64[1] = dVar16;
            local_2c8.Translation.ZW.m128d_f64[0] = dVar17;
            local_2c8.Translation.ZW.m128d_f64[1] = dVar18;
            local_2c8.Scale3D.XY.m128d_f64[0] = dVar19;
            local_2c8.Scale3D.XY.m128d_f64[1] = dVar20;
            local_2c8.Scale3D.ZW.m128d_f64[0] = dVar21;
            local_2c8.Scale3D.ZW.m128d_f64[1] = dVar22;
          }
          else {
            local_498.Name.ComparisonIndex.Value = FStack_58c.ObjectIndex;
            local_498._0_4_ = local_590;
            dVar11 = (pTVar38->Rotation).XY.m128d_f64[0];
            dVar12 = (pTVar38->Rotation).XY.m128d_f64[1];
            dVar13 = (pTVar38->Rotation).ZW.m128d_f64[0];
            dVar14 = (pTVar38->Rotation).ZW.m128d_f64[1];
            dVar15 = (pTVar38->Translation).XY.m128d_f64[0];
            dVar16 = (pTVar38->Translation).XY.m128d_f64[1];
            dVar17 = (pTVar38->Translation).ZW.m128d_f64[0];
            dVar18 = (pTVar38->Translation).ZW.m128d_f64[1];
            dVar19 = (pTVar38->Scale3D).XY.m128d_f64[0];
            dVar20 = (pTVar38->Scale3D).XY.m128d_f64[1];
            dVar21 = (pTVar38->Scale3D).ZW.m128d_f64[0];
            dVar22 = (pTVar38->Scale3D).ZW.m128d_f64[1];
            local_498.Name.Number = FStack_58c.ObjectSerialNumber;
            iVar25 = URigHierarchy::GetIndex(this_01,&local_498,true);
            pTVar38 = &local_268;
            local_268.Rotation.XY.m128d_f64[0] = dVar11;
            local_268.Rotation.XY.m128d_f64[1] = dVar12;
            local_268.Rotation.ZW.m128d_f64[0] = dVar13;
            local_268.Rotation.ZW.m128d_f64[1] = dVar14;
            local_268.Translation.XY.m128d_f64[0] = dVar15;
            local_268.Translation.XY.m128d_f64[1] = dVar16;
            local_268.Translation.ZW.m128d_f64[0] = dVar17;
            local_268.Translation.ZW.m128d_f64[1] = dVar18;
            local_268.Scale3D.XY.m128d_f64[0] = dVar19;
            local_268.Scale3D.XY.m128d_f64[1] = dVar20;
            local_268.Scale3D.ZW.m128d_f64[0] = dVar21;
            local_268.Scale3D.ZW.m128d_f64[1] = dVar22;
          }
          URigHierarchy::SetGlobalTransformByIndex(this_01,iVar25,pTVar38,false,true,false,false);
          TStack_4e8.UnvisitedBitMask = TStack_4e8.UnvisitedBitMask & ~TStack_4e8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4e8);
          iVar27 = TStack_4e8.CurrentBitIndex;
          pFVar23 = local_540;
        } while (TStack_4e8.CurrentBitIndex < (TStack_4e8.Array)->NumBits);
      }
    }
    else {
      pFVar50 = (this->ControlRigBoneInputMappingByIndex).AllocatorInstance.Data;
      pFVar43 = pFVar50 + (longlong)iVar6 * 4;
      while( true ) {
        if ((this->ControlRigBoneInputMappingByIndex).ArrayNum != iVar6) {
          local_595 = 0;
          `TCheckedPointerIterator<TTuple<unsigned_short,unsigned_short>_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(&local_595);
        }
        param_2 = local_578;
        pFVar23 = local_540;
        if (pFVar50 == pFVar43) break;
        uVar4 = *(ushort *)pFVar50;
        FVar41._2_2_ = 0;
        FVar41._0_2_ = *(ushort *)(pFVar50 + 2);
        pTVar38 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_468,FVar41);
        local_328.Rotation.XY.m128d_f64[0] = (pTVar38->Rotation).XY.m128d_f64[0];
        local_328.Rotation.XY.m128d_f64[1] = (pTVar38->Rotation).XY.m128d_f64[1];
        local_328.Rotation.ZW.m128d_f64[0] = (pTVar38->Rotation).ZW.m128d_f64[0];
        local_328.Rotation.ZW.m128d_f64[1] = (pTVar38->Rotation).ZW.m128d_f64[1];
        local_328.Translation.XY.m128d_f64[0] = (pTVar38->Translation).XY.m128d_f64[0];
        local_328.Translation.XY.m128d_f64[1] = (pTVar38->Translation).XY.m128d_f64[1];
        local_328.Translation.ZW.m128d_f64[0] = (pTVar38->Translation).ZW.m128d_f64[0];
        local_328.Translation.ZW.m128d_f64[1] = (pTVar38->Translation).ZW.m128d_f64[1];
        local_328.Scale3D.XY.m128d_f64[0] = (pTVar38->Scale3D).XY.m128d_f64[0];
        local_328.Scale3D.XY.m128d_f64[1] = (pTVar38->Scale3D).XY.m128d_f64[1];
        local_328.Scale3D.ZW.m128d_f64[0] = (pTVar38->Scale3D).ZW.m128d_f64[0];
        local_328.Scale3D.ZW.m128d_f64[1] = (pTVar38->Scale3D).ZW.m128d_f64[1];
        URigHierarchy::SetGlobalTransformByIndex
                  (this_01,(uint)uVar4,&local_328,false,true,false,false);
        pFVar50 = pFVar50 + 4;
      }
    }
  }
LAB_14a4609f0:
  if ((pFVar23->bUpdateCurves != false) && (param_10)) {
    local_540 = pFVar23;
    URigHierarchy::UnsetCurveValues(this_01,false);
    iVar25 = *(int *)&(param_2->Curve).field_0x8;
    uVar39 = (ulonglong)iVar25;
    puVar45 = *(undefined8 **)&param_2->Curve;
    puVar49 = puVar45 + uVar39 * 2;
    local_578 = (FPoseContext *)CONCAT44(local_578._4_4_,iVar25);
    while( true ) {
      pFVar23 = local_540;
      if (*(int *)&(param_2->Curve).field_0x8 != (int)uVar39) {
        local_594[0] = 0;
        `TCheckedPointerIterator<UE::Anim::FCurveElement,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_594);
        pFVar23 = local_540;
      }
      if (puVar45 == puVar49) break;
      fVar3 = *(float *)(puVar45 + 1);
      local_540._4_4_ = (uint)*puVar45;
      local_538 = (uint)((ulonglong)*puVar45 >> 0x20);
      local_540._0_4_ = CONCAT31((int3)((ulonglong)pFVar23 >> 8),8);
      local_488.Name.ComparisonIndex.Value = local_540._4_4_;
      local_488._0_4_ = (undefined4)local_540;
      local_488.Name.Number = local_538;
      uVar28 = URigHierarchy::GetIndex(this_01,&local_488,true);
      if ((-1 < (int)uVar28) && ((int)uVar28 < (this_01->Elements).ArrayNum)) {
        uVar46 = 0;
        if ((int)uVar28 < (this_01->Elements).ArrayNum) {
          uVar46 = ~uVar28 >> 0x1f;
        }
        if (uVar46 == 0) {
          bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar24) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        pFVar9 = *(FRigCurveElement **)
                  ((this_01->Elements).AllocatorInstance.Data + (longlong)(int)uVar28 * 8);
        if (pFVar9 != (FRigCurveElement *)0x0) {
          lVar30 = (**(code **)(pFVar9->_padding_ + 0x10))(pFVar9);
          pUVar31 = FRigCurveElement::StaticStruct();
          if (pUVar31 != (UScriptStruct *)0x0) {
            iVar25 = (int)pUVar31->_padding_;
            if ((*(int *)(lVar30 + 0x38) < iVar25) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar30 + 0x30) + (longlong)iVar25 * 8) !=
                &pUVar31->_padding_)) {
              bVar24 = false;
            }
            else {
              bVar24 = true;
            }
            if (bVar24) {
              URigHierarchy::SetCurveValue(this_01,pFVar9,fVar3,false,false);
            }
          }
        }
      }
      uVar39 = (ulonglong)local_578 & 0xffffffff;
      puVar45 = puVar45 + 2;
    }
  }
LAB_14a460b54:
  local_540 = pFVar23;
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateInputOutputMappingIfRequired @ 14a460ba0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigHierarchyMappings::UpdateInputOutputMappingIfRequired
          (FControlRigHierarchyMappings *this,UControlRig *param_1,URigHierarchy *param_2,
          FBoneContainer *param_3,TArray<FBoneReference,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FBoneReference,TSizedDefaultAllocator<32>_> *param_5,
          TWeakObjectPtr<UNodeMappingContainer,FWeakObjectPtr> *param_6,bool param_7,bool param_8)

{
  FControlRigPoseAdapter *this_00;
  TSharedPtr<FRigHierarchyPoseAdapter,1> local_18;
  
  FStatsHierarchical::BeginMeasurement
            ("FControlRigHierarchyMappings::UpdateInputOutputMappingIfRequired");
  if (param_2 != (URigHierarchy *)0x0) {
    if (this->bEnablePoseAdapter == false) {
      UpdateInputOutputMappingIfRequiredImpl(this,param_1,param_2,param_3,param_4,param_5,param_6);
    }
    else {
      local_18.Object = (FRigHierarchyPoseAdapter *)0x0;
      local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      URigHierarchy::LinkPoseAdapter(param_2,&local_18);
      if ((this->PoseAdapter).Object != (FControlRigPoseAdapter *)0x0) {
        this_00 = TSharedPtr<FControlRigPoseAdapter,1>::operator->(&this->PoseAdapter);
        FControlRigPoseAdapter::UpdateInputOutputMappingIfRequired
                  (this_00,param_1,param_2,param_3,param_6,param_7,param_8);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateInputOutputMappingIfRequiredImpl @ 14a462590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigHierarchyMappings::UpdateInputOutputMappingIfRequiredImpl
          (FControlRigHierarchyMappings *this,UControlRig *param_1,URigHierarchy *param_2,
          FBoneContainer *param_3,TArray<FBoneReference,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FBoneReference,TSizedDefaultAllocator<32>_> *param_5,
          TWeakObjectPtr<UNodeMappingContainer,FWeakObjectPtr> *param_6)

{
  TMap<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
  *this_00;
  longlong lVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  FReferenceSkeleton *pFVar5;
  uint *puVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  UNodeMappingContainer *this_01;
  FControlRigHierarchyMappings *pFVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  UControlRig *pUVar18;
  FControlRigHierarchyMappings *pFVar19;
  int *piVar20;
  int *piVar21;
  int iVar22;
  uint *puVar23;
  TMap<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
  *this_02;
  longlong lVar24;
  TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
  *this_03;
  undefined1 auStackY_218 [32];
  undefined1 local_1c7 [3];
  ushort local_1c4 [2];
  ushort local_1c0 [2];
  undefined4 local_1bc;
  UControlRig *local_1b8;
  FControlRigHierarchyMappings *local_1b0;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *local_1a8;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *local_1a0;
  longlong *local_198;
  undefined8 local_190;
  void *local_188;
  undefined8 local_180;
  undefined1 local_178 [8];
  int local_170;
  TMap<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
  *local_168;
  longlong local_160;
  URigHierarchy *local_158;
  FRigElementKey local_150;
  TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
  *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
  *local_118;
  int iStack_110;
  uint uStack_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  int iStack_fc;
  int local_f8;
  undefined4 uStack_f4;
  longlong local_e8;
  ushort *local_e0;
  longlong *local_d8;
  ushort *local_d0;
  undefined4 local_ac;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1a8 = param_4;
  local_1a0 = param_5;
  local_1b8 = param_1;
  local_1b0 = this;
  local_158 = param_2;
  FStatsHierarchical::BeginMeasurement
            ("FControlRigHierarchyMappings::UpdateInputOutputMappingIfRequiredImpl");
  (this->ControlRigBoneInputMappingByIndex).ArrayNum = 0;
  if ((this->ControlRigBoneInputMappingByIndex).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,0,(ForAnyElementType *)this,0,&(this->ControlRigBoneInputMappingByIndex).ArrayMax
              );
  }
  (this->ControlRigBoneOutputMappingByIndex).ArrayNum = 0;
  if ((this->ControlRigBoneOutputMappingByIndex).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,0,&(this->ControlRigBoneOutputMappingByIndex).AllocatorInstance,0,
               &(this->ControlRigBoneOutputMappingByIndex).ArrayMax);
  }
  (this->ControlRigCurveMappingByIndex).ArrayNum = 0;
  if ((this->ControlRigCurveMappingByIndex).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->ControlRigCurveMappingByIndex).AllocatorInstance,0,
               &(this->ControlRigCurveMappingByIndex).ArrayMax);
  }
  this_00 = &this->ControlRigBoneInputMappingByName;
  TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
           *)this_00);
  this_02 = &this->ControlRigBoneOutputMappingByName;
  local_168 = this_02;
  TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
           *)this_02);
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)&this->ControlRigCurveMappingByName);
  bVar10 = FWeakObjectPtr::IsValid(&(param_3->Asset).WeakPtr);
  if (((bVar10) && (pFVar5 = param_3->RefSkeleton, pFVar5 != (FReferenceSkeleton *)0x0)) &&
     (iVar13 = (param_3->BoneIndicesArray).ArrayNum, 0 < iVar13)) {
    bVar10 = FWeakObjectPtr::IsValid(&param_6->WeakPtr);
    if (bVar10) {
      uVar17 = 0;
      local_a8._44_4_ = 0x80;
      local_a8._0_8_ = 0;
      local_a8._8_8_ = 0;
      local_a8._32_8_ = 0;
      local_a8._40_4_ = 0;
      local_a8._52_4_ = 0;
      local_68 = (undefined1 *)0x0;
      local_60 = 0;
      local_a8._48_4_ = 0xffffffff;
      this_01 = (UNodeMappingContainer *)FWeakObjectPtr::Get(&param_6->WeakPtr);
      UNodeMappingContainer::GetTargetToSourceMappingTable
                (this_01,(TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                          *)local_a8);
      local_1c4[0] = 0;
      do {
        if (((param_3->BoneIndicesArray).ArrayNum <= (int)uVar17) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar2 = *(ushort *)((param_3->BoneIndicesArray).AllocatorInstance.Data + uVar17 * 2);
        if (((pFVar5->FinalRefBoneInfo).ArrayNum <= (int)(uint)uVar2) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar24 = *(longlong *)
                  ((pFVar5->FinalRefBoneInfo).AllocatorInstance.Data + (ulonglong)uVar2 * 0xc);
        uVar12 = ::GetTypeHash((FNameEntryId)(uint)lVar24);
        if (local_a8._8_4_ != local_a8._52_4_) {
          puVar15 = local_a8 + 0x38;
          if (local_68 != (undefined1 *)0x0) {
            puVar15 = local_68;
          }
          iVar22 = *(int *)(puVar15 +
                           (ulonglong)(local_60 - 1U & (int)((ulonglong)lVar24 >> 0x20) + uVar12) *
                           4);
          while (iVar22 != -1) {
            lVar1 = local_a8._0_8_ + (longlong)iVar22 * 0x18;
            if (*(longlong *)(local_a8._0_8_ + (longlong)iVar22 * 0x18) == lVar24) {
              lVar24 = lVar1 + 8;
              if (lVar1 == 0) {
                lVar24 = 0;
              }
              if (lVar24 != 0) {
                local_e0 = local_1c4;
                local_e8 = lVar24;
                TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FName_const_&,unsigned_short_const_&>_>
                          ((TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
                            *)this_00,
                           (TPairInitializer<FName_const_&,unsigned_short_const_&> *)local_178,
                           (bool *)&local_e8);
              }
              break;
            }
            iVar22 = *(int *)(lVar1 + 0x10);
          }
        }
        this_02 = local_168;
        local_1c4[0] = local_1c4[0] + 1;
        uVar17 = (ulonglong)local_1c4[0];
      } while ((int)(uint)local_1c4[0] < iVar13);
      local_60 = 0;
      if (local_68 != (undefined1 *)0x0) {
        FMemory::Free(local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
    }
    else {
      local_198 = (longlong *)0x0;
      local_190 = 0;
      local_188 = (void *)0x0;
      local_180 = 0;
      (**(code **)(param_1->_padding_ + 0x10))(&param_1->_padding_,&local_198,&local_188);
      local_1c0[0] = 0;
      uVar12 = 0;
      do {
        if (((param_3->BoneIndicesArray).ArrayNum <= (int)uVar12) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar2 = *(ushort *)
                 ((param_3->BoneIndicesArray).AllocatorInstance.Data + (ulonglong)uVar12 * 2);
        if (((pFVar5->FinalRefBoneInfo).ArrayNum <= (int)(uint)uVar2) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_160 = *(longlong *)
                     ((pFVar5->FinalRefBoneInfo).AllocatorInstance.Data + (ulonglong)uVar2 * 0xc);
        for (plVar16 = local_198; plVar16 != local_198 + (int)local_190; plVar16 = plVar16 + 1) {
          if (*plVar16 == local_160) {
            local_d8 = &local_160;
            local_d0 = local_1c0;
            TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,unsigned_short_const_&>_>
                      ((TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
                        *)this_00,
                       (TPairInitializer<FName_const_&,unsigned_short_const_&> *)(local_178 + 4),
                       (bool *)&local_d8);
            break;
          }
        }
        local_1c0[0] = local_1c0[0] + 1;
        uVar12 = (uint)local_1c0[0];
      } while ((int)uVar12 < iVar13);
      if (local_188 != (void *)0x0) {
        FMemory::Free(local_188);
      }
      if (local_198 != (longlong *)0x0) {
        FMemory::Free(local_198);
      }
    }
    pTVar9 = local_1a8;
    pUVar18 = local_1b8;
    if (local_1a8->ArrayNum != 0) {
      TMap<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
      ::operator=(this_02,this_00);
      pUVar18 = local_1b8;
      `FControlRigHierarchyMappings::UpdateInputOutputMappingIfRequiredImpl'::__l5::<lambda_1>::
      operator()(local_1c7,pTVar9,param_6,param_3,pFVar5,&param_3->BoneIndicesArray,local_1b8,
                 this_00);
    }
    if (local_1a0->ArrayNum != 0) {
      `FControlRigHierarchyMappings::UpdateInputOutputMappingIfRequiredImpl'::__l5::<lambda_1>::
      operator()(local_1c7,local_1a0,param_6,param_3,pFVar5,&param_3->BoneIndicesArray,pUVar18,
                 this_02);
    }
    bVar10 = FWeakObjectPtr::IsValid(&param_6->WeakPtr);
    if (!bVar10) {
      iVar13 = 0;
      local_1b8 = (UControlRig *)((ulonglong)local_1b8 & 0xffffffff00000000);
      pFVar14 = local_1b0;
      do {
        iVar22 = 0;
        bVar10 = true;
        lVar24 = 0x30;
        if (iVar13 != 0) {
          lVar24 = 0x80;
        }
        this_03 = (TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
                   *)((longlong)&(pFVar14->ControlRigBoneInputMappingByIndex).AllocatorInstance.Data
                     + lVar24);
        if (*(int *)&(this_03->Elements).field_0x8 != *(int *)&(this_03->Elements).field_0x34) {
          iVar4 = *(int *)&(this_03->Elements).field_0x28;
          TStack_138.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this_03->Elements).field_0x10
          ;
          uStack_10c = 1;
          pFVar19 = (FControlRigHierarchyMappings *)&pFVar14->ControlRigBoneOutputMappingByIndex;
          if (iVar13 == 0) {
            pFVar19 = pFVar14;
          }
          local_f8 = iVar22;
          iStack_fc = 0;
          if (iVar4 != 0) {
            puVar6 = *(uint **)&(this_03->Elements).field_0x20;
            puVar23 = (uint *)TStack_138.Array;
            if (puVar6 != (uint *)0x0) {
              puVar23 = puVar6;
            }
            uVar12 = *puVar23;
            while (uVar12 == 0) {
              lVar24 = (longlong)iVar22;
              local_f8 = local_f8 + 0x20;
              iVar22 = iVar22 + 1;
              iStack_fc = iVar4;
              if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22)
              goto LAB_14a462b4e;
              uVar12 = puVar23[lVar24 + 1];
            }
            uStack_10c = -uVar12 & uVar12;
            uVar17 = (ulonglong)uStack_10c * 2 + 1;
            lVar24 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            local_170 = (int)lVar24;
            iStack_fc = local_f8 + -1 + local_170;
            if (iVar4 < iStack_fc) {
              iStack_fc = iVar4;
            }
          }
LAB_14a462b4e:
          uStack_100 = 0xffffffff;
          uStack_f4 = local_ac;
          TStack_138._padding_ = CONCAT44(uStack_10c,iVar22);
          TStack_138.CurrentBitIndex = iStack_fc;
          TStack_138.UnvisitedBitMask = 0xffffffff;
          TStack_138._28_4_ = local_ac;
          TStack_138.BaseBitIndex = local_f8;
          local_140 = this_03;
          local_118 = this_03;
          iStack_110 = iVar22;
          local_108 = (undefined1 *)TStack_138.Array;
          iVar22 = iStack_fc;
          if (iStack_fc < iVar4) {
            do {
              piVar21 = &(pFVar19->ControlRigBoneInputMappingByIndex).ArrayMax;
              piVar20 = &(pFVar19->ControlRigBoneInputMappingByIndex).ArrayNum;
              local_150.Type = Bone;
              uVar3 = *(undefined2 *)
                       (*(longlong *)&local_140->Elements + 8 + (longlong)iVar22 * 0x14);
              local_150.Name =
                   *(FName *)(*(longlong *)&local_140->Elements + (longlong)iVar22 * 0x14);
              local_1a0 = (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)piVar20;
              iVar13 = URigHierarchy::GetIndex(local_158,&local_150,true);
              if (iVar13 == -1) {
                bVar10 = false;
              }
              else {
                pFVar7 = (pFVar19->ControlRigBoneInputMappingByIndex).AllocatorInstance.Data;
                local_1bc = CONCAT22(uVar3,(short)iVar13);
                if (((pFVar7 <= (FScriptContainerElement *)&local_1bc) &&
                    ((FScriptContainerElement *)&local_1bc < pFVar7 + (longlong)*piVar21 * 4)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                iVar13 = *piVar20;
                if (iVar13 == *piVar21) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x204,(ForAnyElementType *)pFVar19,piVar21);
                }
                *piVar20 = iVar13 + 1;
                *(undefined4 *)
                 ((pFVar19->ControlRigBoneInputMappingByIndex).AllocatorInstance.Data +
                 (longlong)iVar13 * 4) = local_1bc;
              }
              TStack_138.UnvisitedBitMask =
                   TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
              iVar22 = TStack_138.CurrentBitIndex;
            } while (TStack_138.CurrentBitIndex < (TStack_138.Array)->NumBits);
            if (!bVar10) {
              iVar13 = *piVar21;
              *(int *)&(local_1a0->AllocatorInstance).Data = 0;
              if (iVar13 < 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,2,0,(ForAnyElementType *)pFVar19,0,piVar21);
              }
              pFVar14 = local_1b0;
              iVar13 = (int)local_1b8;
              goto LAB_14a462d18;
            }
            iVar13 = (int)local_1b8;
          }
          TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
          ::Reset(this_03);
          pFVar14 = local_1b0;
        }
LAB_14a462d18:
        iVar13 = iVar13 + 1;
        local_1b8 = (UControlRig *)CONCAT44(local_1b8._4_4_,iVar13);
      } while (iVar13 < 2);
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateOutput @ 14a463210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FControlRigHierarchyMappings::UpdateOutput
          (FControlRigHierarchyMappings *this,UControlRig *param_1,FPoseContext *param_2,
          FControlRigIOSettings *param_3,
          TWeakObjectPtr<UNodeMappingContainer,FWeakObjectPtr> *param_4,bool param_5,bool param_6)

{
  undefined1 *puVar1;
  TArray<TTuple<unsigned_short,unsigned_short>,TSizedDefaultAllocator<32>_> *pTVar2;
  double *pdVar3;
  TSharedPtr<FControlRigPoseAdapter,1> *this_00;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar4;
  ushort uVar5;
  uint uVar6;
  URigHierarchy *this_01;
  FName FVar7;
  undefined8 uVar8;
  code *pcVar9;
  TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *this_02;
  FControlRigIOSettings *pFVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  bool bVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  FControlRigPoseAdapter *pFVar28;
  URigHierarchy *pUVar29;
  FPoseContext *pFVar30;
  TArray<FRigBaseElement_*,TSizedDefaultAllocator<32>_> *pTVar31;
  FRigCurveElement *pFVar32;
  UScriptStruct *pUVar33;
  float *pfVar34;
  UNodeMappingContainer *this_03;
  TTransform<double> *pTVar35;
  int *piVar36;
  longlong lVar37;
  uint uVar38;
  FCompactPoseBoneIndex FVar39;
  FCompactPoseBoneIndex FVar40;
  longlong lVar42;
  FScriptContainerElement *pFVar43;
  uint *puVar44;
  uint uVar45;
  FControlRigIOSettings *pFVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  uint uVar49;
  FScriptContainerElement *pFVar50;
  ulonglong uVar51;
  undefined1 auStackY_508 [32];
  <lambda_1> local_4c8;
  undefined1 local_4c7;
  undefined1 local_4c6 [6];
  FPoseContext *local_4c0;
  int local_4b8 [2];
  undefined8 local_4b0;
  uint local_4a8;
  undefined8 local_4a0;
  FControlRigIOSettings *local_498;
  TArray<FRigBaseElement_*,TSizedDefaultAllocator<32>_> local_490;
  undefined8 local_480;
  uint local_478;
  TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> local_470;
  undefined8 local_458;
  TMap<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
  *local_450;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_448;
  TMap<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
  *local_420;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_418;
  FCompactPose *local_3f0;
  TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> local_3e8;
  undefined8 local_3d0;
  int local_3c8;
  FRigCurveElement *local_3c0;
  FRigElementKey local_3b8;
  FRigElementKey local_3a8;
  FCSPose<FCompactPose> local_398;
  <lambda_1> local_348;
  undefined4 local_30c;
  undefined4 local_2ec;
  TTransform<double> local_2e8;
  TTransform<double> local_288;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  ulonglong uVar41;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_508;
  local_4c0 = param_2;
  local_498 = param_3;
  local_4b0 = (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_4;
  FStatsHierarchical::BeginMeasurement("FControlRigHierarchyMappings::UpdateOutput");
  this_01 = (param_1->DynamicHierarchy).field0_0x0.DebugPtr;
  local_480 = (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)
              CONCAT44(local_480._4_4_,(undefined4)local_480);
  if ((this_01 == (URigHierarchy *)0x0) ||
     (local_480 = (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)
                  CONCAT44(local_480._4_4_,(undefined4)local_480),
     ((uint)this_01->_padding_ >> 0x1e & 1) != 0)) goto LAB_14a464067;
  uVar41 = 0;
  uVar38 = 0;
  uVar27 = 0;
  if (this->bEnablePoseAdapter != false) {
    if ((param_3->bUpdatePose != false) &&
       (this_00 = &this->PoseAdapter, this_00->Object != (FControlRigPoseAdapter *)0x0)) {
      pFVar28 = TSharedPtr<FControlRigPoseAdapter,1>::operator->(this_00);
      if (pFVar28->bTransferInLocalSpace == false) {
        pFVar28 = TSharedPtr<FControlRigPoseAdapter,1>::operator->(this_00);
        FStatsHierarchical::BeginMeasurement("FControlRigPoseAdapter::ConvertToGlobalPose");
        if ((pFVar28->ParentPoseIndices).ArrayNum != (pFVar28->LocalPose).ArrayNum) {
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParentPoseIndices.Num() == LocalPose.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tools\\ControlRigPoseAdapter.cpp"
                              ,0x195,L"");
          if (bVar23) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
                  (&pFVar28->GlobalPose,(pFVar28->LocalPose).ArrayNum,Default);
        pUVar29 = FRigHierarchyPoseAdapter::GetHierarchy((FRigHierarchyPoseAdapter *)pFVar28);
        if ((pUVar29 != (URigHierarchy *)0x0) && (0 < (pFVar28->ParentPoseIndices).ArrayNum)) {
          do {
            FControlRigPoseAdapter::GetGlobalTransform(pFVar28,(int)uVar41);
            uVar38 = (int)uVar41 + 1;
            uVar41 = (ulonglong)uVar38;
          } while ((int)uVar38 < (pFVar28->ParentPoseIndices).ArrayNum);
        }
        FStatsHierarchical::EndMeasurement();
      }
      else {
        pFVar28 = TSharedPtr<FControlRigPoseAdapter,1>::operator->(this_00);
        FControlRigPoseAdapter::ConvertToLocalPose(pFVar28);
      }
      pFVar28 = TSharedPtr<FControlRigPoseAdapter,1>::operator->(this_00);
      if (pFVar28->bTransferInLocalSpace == false) {
        pFVar28 = TSharedPtr<FControlRigPoseAdapter,1>::operator->(this_00);
        if ((pFVar28->LocalPose).ArrayNum == *(int *)&(param_2->Pose).field_0x8) {
          pFVar28 = TSharedPtr<FControlRigPoseAdapter,1>::operator->(this_00);
          FControlRigPoseAdapter::ConvertToLocalPose(pFVar28);
        }
      }
      pFVar28 = TSharedPtr<FControlRigPoseAdapter,1>::operator->(this_00);
      iVar24 = (pFVar28->LocalPose).ArrayNum;
      if (*(int *)&(param_2->Pose).field_0x8 == iVar24) {
        pFVar50 = (pFVar28->LocalPose).AllocatorInstance.Data;
        puVar1 = &(param_2->Pose).field_0xc;
        *(int *)&(param_2->Pose).field_0x8 = iVar24;
        if ((iVar24 == 0) && (*(int *)puVar1 == 0)) {
          *(undefined4 *)puVar1 = 0;
        }
        else {
          UE::Core::Private::
          ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
                    (0x60,0x10,iVar24,*(int *)puVar1,
                     (ForElementType<UE::Math::TTransform<double>_> *)&param_2->Pose,iVar24,
                     (int *)puVar1);
          if (iVar24 != 0) {
            memcpy(*(void **)&param_2->Pose,pFVar50,(longlong)iVar24 * 0x60);
          }
        }
      }
    }
    if (local_498->bUpdateCurves != false) {
      pFVar30 = (FPoseContext *)URigHierarchy::GetChangedCurveIndices(this_01);
      local_4c0 = pFVar30;
      if (0 < (int)pFVar30->_padding_) {
        pTVar31 = URigHierarchy::GetCurvesFast(this_01);
        local_490.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_490.ArrayNum = pTVar31->ArrayNum;
        lVar42 = (longlong)local_490.ArrayNum;
        pFVar50 = (pTVar31->AllocatorInstance).Data;
        if (local_490.ArrayNum == 0) {
          local_490.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_490.ArrayNum,0,&local_490.AllocatorInstance,local_490.ArrayNum,
                     &local_490.ArrayMax);
          memcpy(local_490.AllocatorInstance.Data,pFVar50,lVar42 << 3);
        }
        local_348.CurveIndex = (int *)&local_4a0;
        local_4a0 = (TMap<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
                     *)((ulonglong)local_4a0._4_4_ << 0x20);
        local_348.CurvesCopied = local_4b8;
        local_4b8[0] = 0;
        local_348.HierarchyCurves = &local_490;
        local_4b0 = (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)
                    &param_2->Curve;
        local_348.__this = this;
        UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
        ForEachElement<_FControlRigHierarchyMappings::UpdateOutput_::__l31::<lambda_1>_>
                  (local_4b0,&local_348);
        if (local_4b8[0] < local_490.ArrayNum) {
          uVar38 = (this_01->Elements).ArrayNum;
          pTVar4 = &this->HierarchyCurveCopied;
          iVar24 = (this->HierarchyCurveCopied).ArrayNum;
          if (iVar24 < (int)uVar38) {
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar38 - iVar24,&pTVar4->AllocatorInstance,
                       &(this->HierarchyCurveCopied).ArrayNum,&(this->HierarchyCurveCopied).ArrayMax
                      );
          }
          else {
            if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
            }
            if ((int)uVar38 < iVar24) {
              uVar45 = iVar24 - uVar38;
              if ((int)(uVar38 | uVar45) < 0) {
                bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   );
                if (bVar23) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              if (uVar45 != 0) {
                pFVar50 = (pTVar4->AllocatorInstance).Data + (int)uVar38;
                iVar24 = ((this->HierarchyCurveCopied).ArrayNum - uVar38) - uVar45;
                if (iVar24 != 0) {
                  memmove(pFVar50,pFVar50 + (int)uVar45,(longlong)iVar24);
                }
                piVar36 = &(this->HierarchyCurveCopied).ArrayNum;
                *piVar36 = *piVar36 - uVar45;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,&pTVar4->AllocatorInstance,*piVar36,
                           &(this->HierarchyCurveCopied).ArrayMax);
              }
            }
          }
          memset((pTVar4->AllocatorInstance).Data,0,(longlong)(this->HierarchyCurveCopied).ArrayMax)
          ;
          uVar38 = (uint)pFVar30->_padding_;
          local_470.Elements.AllocatorInstance.Data = (FCurveElement *)0x0;
          local_470.Elements.ArrayNum = 0;
          local_470.Elements.ArrayMax = 0;
          local_470.bSorted = false;
          local_458 = 0;
          if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
          }
          if (0 < (int)uVar38) {
            UE::Core::Private::
            ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                      (0x10,4,uVar38,(ForElementType<UE::Anim::FCurveElement> *)&local_470,0,
                       &local_470.Elements.ArrayMax);
          }
          pFVar46 = (FControlRigIOSettings *)((ForAnyElementType *)&pFVar30->_padding_)->Data;
          iVar24 = (int)pFVar30->_padding_;
          local_498 = pFVar46 + (longlong)iVar24 * 2;
          while( true ) {
            pFVar10 = local_498;
            if ((int)pFVar30->_padding_ != iVar24) {
              local_4c7 = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_4c7);
            }
            if (pFVar46 == pFVar10) break;
            uVar38 = *(uint *)pFVar46;
            uVar45 = uVar27;
            if ((int)uVar38 < (this->HierarchyCurveCopied).ArrayNum) {
              uVar45 = ~uVar38 >> 0x1f;
            }
            if (uVar45 == 0) {
              bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar23) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            if ((pTVar4->AllocatorInstance).Data[(int)uVar38] == (FScriptContainerElement)0x0) {
              pFVar32 = (FRigCurveElement *)URigHierarchy::Get(this_01,*(uint *)pFVar46);
              if (pFVar32 != (FRigCurveElement *)0x0) {
                lVar42 = (**(code **)(pFVar32->_padding_ + 0x10))(pFVar32);
                pUVar33 = FRigCurveElement::StaticStruct();
                pFVar30 = local_4c0;
                if (pUVar33 != (UScriptStruct *)0x0) {
                  iVar25 = (int)pUVar33->_padding_;
                  if ((*(int *)(lVar42 + 0x38) < iVar25) ||
                     ((longlong *)
                      *(undefined1 **)(*(longlong *)(lVar42 + 0x30) + (longlong)iVar25 * 8) !=
                      &pUVar33->_padding_)) {
                    bVar23 = false;
                  }
                  else {
                    bVar23 = true;
                  }
                  if ((bVar23) && (pFVar32->bIsValueSet != false)) {
                    pfVar34 = FRigCurveElement::Get(pFVar32);
                    iVar25 = local_470.Elements.ArrayNum;
                    if (local_470.Elements.ArrayNum == local_470.Elements.ArrayMax) {
                      iVar25 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                                         (0x410,(ForElementType<UE::Anim::FCurveElement> *)
                                                &local_470,&local_470.Elements.ArrayMax);
                    }
                    FVar7 = *(FName *)((longlong)&pFVar32->_padding_ + 4);
                    local_470.Elements.ArrayNum = iVar25 + 1;
                    local_470.bSorted = false;
                    local_470.Elements.AllocatorInstance.Data[iVar25].Value = *pfVar34;
                    local_470.Elements.AllocatorInstance.Data[iVar25].Name = FVar7;
                    local_470.Elements.AllocatorInstance.Data[iVar25].Flags = None;
                    pFVar30 = local_4c0;
                  }
                }
              }
              uVar38 = *(uint *)pFVar46;
              uVar45 = uVar27;
              if ((int)uVar38 < (this->HierarchyCurveCopied).ArrayNum) {
                uVar45 = ~uVar38 >> 0x1f;
              }
              if (uVar45 == 0) {
                bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar23) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              (pTVar4->AllocatorInstance).Data[(int)uVar38] = (FScriptContainerElement)0x1;
            }
            pFVar46 = pFVar46 + 2;
          }
          UE::Anim::FNamedValueArrayUtils::
          Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Combine<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                    (local_4b0,&local_470,local_4c8);
        }
        if (local_490.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_490.AllocatorInstance.Data);
        }
      }
    }
    goto LAB_14a464067;
  }
  uVar45 = 0;
  if (param_3->bUpdatePose != false) {
    local_4a0 = &this->ControlRigBoneOutputMappingByName;
    pTVar2 = &this->ControlRigBoneOutputMappingByIndex;
    if ((*(int *)&(this->ControlRigBoneOutputMappingByName).field_0x8 ==
         *(int *)&(this->ControlRigBoneOutputMappingByName).field_0x34) &&
       ((this->ControlRigBoneOutputMappingByIndex).ArrayNum == 0)) {
      TMap<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
      ::operator=(local_4a0,&this->ControlRigBoneInputMappingByName);
      if ((FControlRigHierarchyMappings *)pTVar2 != this) {
        iVar24 = (this->ControlRigBoneInputMappingByIndex).ArrayNum;
        piVar36 = &(this->ControlRigBoneOutputMappingByIndex).ArrayMax;
        pFVar50 = (this->ControlRigBoneInputMappingByIndex).AllocatorInstance.Data;
        (this->ControlRigBoneOutputMappingByIndex).ArrayNum = iVar24;
        if ((iVar24 == 0) && (*piVar36 == 0)) {
          *piVar36 = 0;
          param_2 = local_4c0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,2,iVar24,*piVar36,&pTVar2->AllocatorInstance,iVar24,piVar36);
          param_2 = local_4c0;
          if (iVar24 != 0) {
            memcpy((pTVar2->AllocatorInstance).Data,pFVar50,(longlong)iVar24 << 2);
            param_2 = local_4c0;
          }
        }
      }
    }
    if (!param_6) {
      bVar23 = FWeakObjectPtr::IsValid(&param_4->WeakPtr);
      pFVar30 = local_4c0;
      if (!bVar23) {
        iVar24 = (this->ControlRigBoneOutputMappingByIndex).ArrayNum;
        if (iVar24 == 0) {
          TStack_448.Array =
               (TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ControlRigBoneOutputMappingByName).field_0x10;
          uVar26 = 1;
          uVar49 = *(uint *)&(this->ControlRigBoneOutputMappingByName).field_0x28;
          uVar48 = uVar41;
          TStack_418.BaseBitIndex = uVar45;
          if (uVar49 != 0) {
            puVar44 = *(uint **)&(this->ControlRigBoneOutputMappingByName).field_0x20;
            uVar48 = (ulonglong)uVar49;
            if (puVar44 == (uint *)0x0) {
              puVar44 = (uint *)TStack_448.Array;
            }
            uVar6 = *puVar44;
            uVar47 = uVar41;
            uVar51 = uVar41;
            TStack_418.BaseBitIndex = uVar38;
            uVar27 = uVar38;
            while (uVar6 == 0) {
              iVar24 = (int)uVar47;
              TStack_418.BaseBitIndex = (int)uVar51 + 0x20;
              uVar51 = (ulonglong)(uint)TStack_418.BaseBitIndex;
              uVar27 = iVar24 + 1;
              uVar47 = (ulonglong)uVar27;
              if ((int)((uVar49 - 1) + ((int)(uVar49 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar27)
              goto LAB_14a463a2d;
              uVar6 = puVar44[(longlong)iVar24 + 1];
            }
            uVar26 = -uVar6 & uVar6;
            uVar48 = (ulonglong)uVar26 * 2 + 1;
            lVar42 = 0x3f;
            if (uVar48 != 0) {
              for (; uVar48 >> lVar42 == 0; lVar42 = lVar42 + -1) {
              }
            }
            uVar38 = (TStack_418.BaseBitIndex - 1U) + (int)lVar42;
            local_3f0 = (FCompactPose *)CONCAT44(local_3f0._4_4_,(int)lVar42);
            if ((int)uVar49 < (int)uVar38) {
              uVar38 = uVar49;
            }
            uVar48 = (ulonglong)uVar38;
          }
LAB_14a463a2d:
          local_420 = local_4a0;
          TStack_418._padding_ = CONCAT44(uVar26,uVar27);
          TStack_418.CurrentBitIndex = (int)uVar48;
          TStack_418.UnvisitedBitMask = 0xffffffff;
          TStack_418._28_4_ = local_30c;
          local_450 = local_4a0;
          TStack_448._padding_ = TStack_418._padding_;
          TStack_448.BaseBitIndex = TStack_418.BaseBitIndex;
          TStack_448._28_4_ = local_30c;
          TStack_448.UnvisitedBitMask = 0xffffffff;
          TStack_448.CurrentBitIndex = TStack_418.CurrentBitIndex;
          TStack_418.Array = TStack_448.Array;
          if (TStack_418.CurrentBitIndex < (int)uVar49) {
            do {
              local_4b0._0_4_ = CONCAT31(local_4b0._1_3_,1);
              uVar8 = *(undefined8 *)(*(longlong *)local_450 + (longlong)(int)uVar48 * 0x14);
              local_4b0._4_4_ = (uint)uVar8;
              local_4a8 = (uint)((ulonglong)uVar8 >> 0x20);
              local_3b8.Name.ComparisonIndex.Value = local_4b0._4_4_;
              local_3b8._0_4_ = (undefined4)local_4b0;
              uVar5 = *(ushort *)(*(longlong *)local_450 + 8 + (longlong)(int)uVar48 * 0x14);
              local_3b8.Name.Number = local_4a8;
              iVar24 = URigHierarchy::GetIndex(this_01,&local_3b8,true);
              URigHierarchy::GetLocalTransformByIndex(this_01,&local_1c8,iVar24,false);
              dVar22 = local_1c8.Scale3D.ZW.m128d_f64[1];
              dVar21 = local_1c8.Scale3D.ZW.m128d_f64[0];
              dVar20 = local_1c8.Scale3D.XY.m128d_f64[1];
              dVar19 = local_1c8.Scale3D.XY.m128d_f64[0];
              dVar18 = local_1c8.Translation.ZW.m128d_f64[1];
              dVar17 = local_1c8.Translation.ZW.m128d_f64[0];
              dVar16 = local_1c8.Translation.XY.m128d_f64[1];
              dVar15 = local_1c8.Translation.XY.m128d_f64[0];
              dVar14 = local_1c8.Rotation.ZW.m128d_f64[1];
              dVar13 = local_1c8.Rotation.ZW.m128d_f64[0];
              dVar12 = local_1c8.Rotation.XY.m128d_f64[1];
              dVar11 = local_1c8.Rotation.XY.m128d_f64[0];
              if ((*(int *)&(pFVar30->Pose).field_0x8 <= (int)(uint)uVar5) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar42 = *(longlong *)&(pFVar30->Pose).field_0x0;
              lVar37 = (ulonglong)uVar5 * 0x60;
              *(double *)(lVar37 + lVar42) = dVar11;
              ((double *)(lVar37 + lVar42))[1] = dVar12;
              pdVar3 = (double *)(lVar37 + 0x10 + lVar42);
              *pdVar3 = dVar13;
              pdVar3[1] = dVar14;
              pdVar3 = (double *)(lVar37 + 0x20 + lVar42);
              *pdVar3 = dVar15;
              pdVar3[1] = dVar16;
              pdVar3 = (double *)(lVar37 + 0x30 + lVar42);
              *pdVar3 = dVar17;
              pdVar3[1] = dVar18;
              pdVar3 = (double *)(lVar37 + 0x40 + lVar42);
              *pdVar3 = dVar19;
              pdVar3[1] = dVar20;
              pdVar3 = (double *)(lVar37 + 0x50 + lVar42);
              *pdVar3 = dVar21;
              pdVar3[1] = dVar22;
              TStack_448.UnvisitedBitMask =
                   TStack_448.UnvisitedBitMask & ~TStack_448._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_448);
              uVar48 = (ulonglong)(uint)TStack_448.CurrentBitIndex;
            } while (TStack_448.CurrentBitIndex < (TStack_448.Array)->NumBits);
          }
        }
        else {
          pFVar43 = (pTVar2->AllocatorInstance).Data;
          pFVar50 = pFVar43 + (longlong)iVar24 * 4;
          while( true ) {
            if ((this->ControlRigBoneOutputMappingByIndex).ArrayNum != iVar24) {
              local_4c6[0] = 0;
              `TCheckedPointerIterator<TTuple<unsigned_short,unsigned_short>,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_4c6);
            }
            if (pFVar43 == pFVar50) break;
            uVar5 = *(ushort *)(pFVar43 + 2);
            URigHierarchy::GetLocalTransformByIndex
                      (this_01,&local_228,(uint)*(ushort *)pFVar43,false);
            dVar22 = local_228.Scale3D.ZW.m128d_f64[1];
            dVar21 = local_228.Scale3D.ZW.m128d_f64[0];
            dVar20 = local_228.Scale3D.XY.m128d_f64[1];
            dVar19 = local_228.Scale3D.XY.m128d_f64[0];
            dVar18 = local_228.Translation.ZW.m128d_f64[1];
            dVar17 = local_228.Translation.ZW.m128d_f64[0];
            dVar16 = local_228.Translation.XY.m128d_f64[1];
            dVar15 = local_228.Translation.XY.m128d_f64[0];
            dVar14 = local_228.Rotation.ZW.m128d_f64[1];
            dVar13 = local_228.Rotation.ZW.m128d_f64[0];
            dVar12 = local_228.Rotation.XY.m128d_f64[1];
            dVar11 = local_228.Rotation.XY.m128d_f64[0];
            if (*(int *)&(local_4c0->Pose).field_0x8 <= (int)(uint)uVar5) {
              bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar23) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            lVar37 = (ulonglong)uVar5 * 0x60;
            pFVar43 = pFVar43 + 4;
            lVar42 = *(longlong *)&(local_4c0->Pose).field_0x0;
            *(double *)(lVar37 + lVar42) = dVar11;
            ((double *)(lVar37 + lVar42))[1] = dVar12;
            pdVar3 = (double *)(lVar37 + 0x10 + lVar42);
            *pdVar3 = dVar13;
            pdVar3[1] = dVar14;
            pdVar3 = (double *)(lVar37 + 0x20 + lVar42);
            *pdVar3 = dVar15;
            pdVar3[1] = dVar16;
            pdVar3 = (double *)(lVar37 + 0x30 + lVar42);
            *pdVar3 = dVar17;
            pdVar3[1] = dVar18;
            pdVar3 = (double *)(lVar37 + 0x40 + lVar42);
            *pdVar3 = dVar19;
            pdVar3[1] = dVar20;
            pdVar3 = (double *)(lVar37 + 0x50 + lVar42);
            *pdVar3 = dVar21;
            pdVar3[1] = dVar22;
          }
        }
        goto LAB_14a463eda;
      }
    }
    local_3f0 = &param_2->Pose;
    local_398.Pose._0_8_ = 0;
    local_398.Pose._8_8_ = 0;
    local_398.Pose._16_8_ = 0;
    local_398.ComponentSpaceFlags._0_8_ = 0;
    local_398.ComponentSpaceFlags._8_8_ = 0;
    local_398.BoneMask._0_8_ = 0;
    local_398.BoneMask._8_8_ = 0;
    local_398.BonesToConvert.AllocatorInstance.Data = (FCompactPoseBoneIndex *)0x0;
    local_398.BonesToConvert.ArrayNum = 0;
    local_398.BonesToConvert.ArrayMax = 0;
    FCSPose<FCompactPose>::InitPose(&local_398,local_3f0);
    this_02 = local_4b0;
    iVar24 = (this->ControlRigBoneOutputMappingByIndex).ArrayNum;
    if (iVar24 == 0) {
      TStack_448.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)
           &(this->ControlRigBoneOutputMappingByName).field_0x10;
      uVar26 = 1;
      uVar27 = *(uint *)&(this->ControlRigBoneOutputMappingByName).field_0x28;
      uVar48 = uVar41;
      uVar49 = uVar45;
      TStack_448.BaseBitIndex = uVar45;
      if (uVar27 != 0) {
        puVar44 = *(uint **)&(this->ControlRigBoneOutputMappingByName).field_0x20;
        uVar48 = (ulonglong)uVar27;
        if (puVar44 == (uint *)0x0) {
          puVar44 = (uint *)TStack_448.Array;
        }
        uVar6 = *puVar44;
        uVar47 = uVar41;
        uVar51 = uVar41;
        TStack_448.BaseBitIndex = uVar38;
        uVar49 = uVar38;
        while (uVar6 == 0) {
          iVar24 = (int)uVar47;
          TStack_448.BaseBitIndex = (int)uVar51 + 0x20;
          uVar51 = (ulonglong)(uint)TStack_448.BaseBitIndex;
          uVar49 = iVar24 + 1;
          uVar47 = (ulonglong)uVar49;
          if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar49)
          goto LAB_14a463cdd;
          uVar6 = puVar44[(longlong)iVar24 + 1];
        }
        uVar26 = -uVar6 & uVar6;
        uVar48 = (ulonglong)uVar26 * 2 + 1;
        lVar42 = 0x3f;
        if (uVar48 != 0) {
          for (; uVar48 >> lVar42 == 0; lVar42 = lVar42 + -1) {
          }
        }
        local_3c8 = (int)lVar42;
        uVar38 = local_3c8 + -1 + TStack_448.BaseBitIndex;
        if ((int)uVar27 < (int)uVar38) {
          uVar38 = uVar27;
        }
        uVar48 = (ulonglong)uVar38;
      }
LAB_14a463cdd:
      local_450 = local_4a0;
      TStack_448._padding_ = CONCAT44(uVar26,uVar49);
      TStack_448.CurrentBitIndex = (int)uVar48;
      TStack_448.UnvisitedBitMask = 0xffffffff;
      TStack_448._28_4_ = local_2ec;
      local_420 = local_4a0;
      TStack_418._padding_ = TStack_448._padding_;
      TStack_418.BaseBitIndex = TStack_448.BaseBitIndex;
      TStack_418._28_4_ = local_2ec;
      TStack_418.UnvisitedBitMask = 0xffffffff;
      TStack_418.CurrentBitIndex = TStack_448.CurrentBitIndex;
      TStack_418.Array = TStack_448.Array;
      if (TStack_448.CurrentBitIndex < (int)uVar27) {
        do {
          local_480._0_4_ = CONCAT31(local_480._1_3_,1);
          lVar42 = *(longlong *)local_420;
          iVar25 = (int)uVar48;
          uVar8 = *(undefined8 *)(lVar42 + (longlong)iVar25 * 0x14);
          local_480._4_4_ = (uint)uVar8;
          local_478 = (uint)((ulonglong)uVar8 >> 0x20);
          local_3a8.Name.ComparisonIndex.Value = local_480._4_4_;
          local_3a8._0_4_ = (undefined4)local_480;
          FVar40._2_2_ = 0;
          FVar40._0_2_ = *(ushort *)(lVar42 + 8 + (longlong)iVar25 * 0x14);
          local_3a8.Name.Number = local_478;
          iVar24 = URigHierarchy::GetIndex(this_01,&local_3a8,true);
          URigHierarchy::GetGlobalTransformByIndex(this_01,&local_288,iVar24,false);
          bVar23 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_02);
          if (bVar23) {
            this_03 = (UNodeMappingContainer *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_02);
            pTVar35 = UNodeMappingContainer::GetSourceToTargetTransform
                                (this_03,&local_108,(FName *)(lVar42 + (longlong)iVar25 * 0x14));
            local_2e8.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_2e8.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_2e8.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_2e8.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_2e8.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_2e8.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_2e8.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_2e8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_2e8.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_2e8.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_2e8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_2e8.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_2e8.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_2e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_2e8.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_2e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_2e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_2e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply(&local_2e8,pTVar35,&local_288);
            local_288.Rotation.XY.m128d_f64[0] = local_2e8.Rotation.XY.m128d_f64[0];
            local_288.Rotation.XY.m128d_f64[1] = local_2e8.Rotation.XY.m128d_f64[1];
            local_288.Rotation.ZW.m128d_f64[0] = local_2e8.Rotation.ZW.m128d_f64[0];
            local_288.Rotation.ZW.m128d_f64[1] = local_2e8.Rotation.ZW.m128d_f64[1];
            local_288.Translation.XY.m128d_f64[0] = local_2e8.Translation.XY.m128d_f64[0];
            local_288.Translation.XY.m128d_f64[1] = local_2e8.Translation.XY.m128d_f64[1];
            local_288.Translation.ZW.m128d_f64[0] = local_2e8.Translation.ZW.m128d_f64[0];
            local_288.Translation.ZW.m128d_f64[1] = local_2e8.Translation.ZW.m128d_f64[1];
            local_288.Scale3D.XY.m128d_f64[0] = local_2e8.Scale3D.XY.m128d_f64[0];
            local_288.Scale3D.XY.m128d_f64[1] = local_2e8.Scale3D.XY.m128d_f64[1];
            local_288.Scale3D.ZW.m128d_f64[0] = local_2e8.Scale3D.ZW.m128d_f64[0];
            local_288.Scale3D.ZW.m128d_f64[1] = local_2e8.Scale3D.ZW.m128d_f64[1];
          }
          FCSPose<FCompactPose>::SetComponentSpaceTransform(&local_398,FVar40,&local_288);
          TStack_418.UnvisitedBitMask = TStack_418.UnvisitedBitMask & ~TStack_418._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_418);
          uVar48 = (ulonglong)(uint)TStack_418.CurrentBitIndex;
        } while (TStack_418.CurrentBitIndex < (TStack_418.Array)->NumBits);
      }
    }
    else {
      pFVar43 = (pTVar2->AllocatorInstance).Data;
      pFVar50 = pFVar43 + (longlong)iVar24 * 4;
      while( true ) {
        if ((this->ControlRigBoneOutputMappingByIndex).ArrayNum != iVar24) {
          local_4c8 = (<lambda_1>)0x0;
          `TCheckedPointerIterator<TTuple<unsigned_short,unsigned_short>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_4c8);
        }
        if (pFVar43 == pFVar50) break;
        FVar39._2_2_ = 0;
        FVar39._0_2_ = *(ushort *)(pFVar43 + 2);
        URigHierarchy::GetGlobalTransformByIndex(this_01,&local_168,(uint)*(ushort *)pFVar43,false);
        FCSPose<FCompactPose>::SetComponentSpaceTransform(&local_398,FVar39,&local_168);
        pFVar43 = pFVar43 + 4;
      }
    }
    FCSPose<FCompactPose>::ConvertComponentPosesToLocalPosesSafe(&local_398,local_3f0);
    FCompactPose::NormalizeRotations(local_3f0);
  }
LAB_14a463eda:
  if (local_498->bUpdateCurves != false) {
    local_3e8.Elements.AllocatorInstance.Data = (FCurveElement *)0x0;
    local_3e8.Elements.ArrayNum = 0;
    local_3e8.Elements.ArrayMax = 0;
    local_3e8.bSorted = false;
    local_3d0 = 0;
    uVar27 = URigHierarchy::Num(this_01,Curve);
    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
    }
    if (local_3e8.Elements.ArrayMax < (int)uVar27) {
      UE::Core::Private::
      ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar27,(ForElementType<UE::Anim::FCurveElement> *)&local_3e8,
                 local_3e8.Elements.ArrayNum,&local_3e8.Elements.ArrayMax);
    }
    local_480 = &local_3e8;
    uVar48 = uVar41;
    if (0 < (this_01->Elements).ArrayNum) {
      do {
        uVar38 = (uint)uVar41;
        uVar27 = uVar45;
        if ((int)uVar38 < (this_01->Elements).ArrayNum) {
          uVar27 = ~uVar38 >> 0x1f;
        }
        if (uVar27 == 0) {
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar23) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        pFVar32 = *(FRigCurveElement **)((this_01->Elements).AllocatorInstance.Data + uVar48);
        if (pFVar32 != (FRigCurveElement *)0x0) {
          lVar42 = (**(code **)(pFVar32->_padding_ + 0x10))(pFVar32);
          pUVar33 = FRigCurveElement::StaticStruct();
          if (pUVar33 != (UScriptStruct *)0x0) {
            iVar24 = (int)pUVar33->_padding_;
            if ((*(int *)(lVar42 + 0x38) < iVar24) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar42 + 0x30) + (longlong)iVar24 * 8) !=
                &pUVar33->_padding_)) {
              bVar23 = false;
            }
            else {
              bVar23 = true;
            }
            if (bVar23) {
              local_3c0 = pFVar32;
              bVar23 = UE::Core::Private::Function::
                       TFunctionRefCaller<`FControlRigHierarchyMappings::UpdateOutput'::__l88::<lambda_2>,bool,FRigCurveElement_*>
                       ::Call(&local_480,&local_3c0);
              if (!bVar23) break;
            }
          }
        }
        uVar41 = (ulonglong)(uVar38 + 1);
        uVar48 = uVar48 + 8;
      } while ((int)(uVar38 + 1) < (this_01->Elements).ArrayNum);
    }
    UE::Anim::FNamedValueArrayUtils::
    Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Combine<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)&local_4c0->Curve,
               &local_3e8,local_4c8);
  }
LAB_14a464067:
  FStatsHierarchical::EndMeasurement();
  return;
}

