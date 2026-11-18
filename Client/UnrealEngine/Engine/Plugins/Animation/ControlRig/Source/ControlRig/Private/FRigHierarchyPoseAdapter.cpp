// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 19

// GetElementTransformStorage @ 14a30eb20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTuple<FRigComputedTransform_*,FRigTransformDirtyState_*> * __thiscall
FRigHierarchyPoseAdapter::GetElementTransformStorage
          (FRigHierarchyPoseAdapter *this,
          TTuple<FRigComputedTransform_*,FRigTransformDirtyState_*> *__return_storage_ptr__,
          FRigElementKeyAndIndex *param_1,Type param_2,Type param_3)

{
  bool bVar1;
  URigHierarchy *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->WeakHierarchy).WeakPtr);
  if ((bVar1) &&
     (this_00 = (URigHierarchy *)FWeakObjectPtr::Get(&(this->WeakHierarchy).WeakPtr),
     this_00 != (URigHierarchy *)0x0)) {
    URigHierarchy::GetElementTransformStorage
              (this_00,__return_storage_ptr__,param_1,param_2,param_3);
    return __return_storage_ptr__;
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// GetHierarchy @ 14a30f580

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

URigHierarchy * __thiscall FRigHierarchyPoseAdapter::GetHierarchy(FRigHierarchyPoseAdapter *this)

{
  bool bVar1;
  URigHierarchy *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->WeakHierarchy).WeakPtr);
  if (bVar1) {
    pUVar2 = (URigHierarchy *)FWeakObjectPtr::Get(&(this->WeakHierarchy).WeakPtr);
    return pUVar2;
  }
  return (URigHierarchy *)0x0;
}

// IsLinkedTo @ 14a328350

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigHierarchyPoseAdapter::IsLinkedTo(FRigHierarchyPoseAdapter *this,URigHierarchy *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  URigHierarchy *pUVar4;
  
  if (param_1 == (URigHierarchy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHierarchy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyPoseAdapter.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (this->bLinked != false) {
    bVar2 = FWeakObjectPtr::IsValid(&(this->WeakHierarchy).WeakPtr);
    if (bVar2) {
      pUVar4 = (URigHierarchy *)FWeakObjectPtr::Get(&(this->WeakHierarchy).WeakPtr);
    }
    else {
      pUVar4 = (URigHierarchy *)0x0;
    }
    if (pUVar4 == param_1) {
      return true;
    }
  }
  return false;
}

// IsUpdateToDate @ 14a328cc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigHierarchyPoseAdapter::IsUpdateToDate(FRigHierarchyPoseAdapter *this,URigHierarchy *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  URigHierarchy *pUVar4;
  
  if (param_1 == (URigHierarchy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHierarchy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyPoseAdapter.cpp"
                       ,0x27,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHierarchy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyPoseAdapter.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (this->bLinked != false) {
    bVar2 = FWeakObjectPtr::IsValid(&(this->WeakHierarchy).WeakPtr);
    if (bVar2) {
      pUVar4 = (URigHierarchy *)FWeakObjectPtr::Get(&(this->WeakHierarchy).WeakPtr);
    }
    else {
      pUVar4 = (URigHierarchy *)0x0;
    }
    if (pUVar4 == param_1) {
      return this->LastTopologyVersion == param_1->TopologyVersion;
    }
  }
  return false;
}

// PostLinked @ 14a335df0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigHierarchyPoseAdapter::PostLinked(FRigHierarchyPoseAdapter *this,URigHierarchy *param_1)

{
  URigHierarchy *local_res8;
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (URigHierarchy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakHierarchy).WeakPtr,(FObjectPtr)&local_res8);
  this->LastTopologyVersion = param_1->TopologyVersion;
  return;
}

// PostUnlinked @ 14a335f50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigHierarchyPoseAdapter::PostUnlinked(FRigHierarchyPoseAdapter *this,URigHierarchy *param_1)

{
  (this->WeakHierarchy).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

// PreUnlinked @ 14a335f60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigHierarchyPoseAdapter::PreUnlinked(FRigHierarchyPoseAdapter *this,URigHierarchy *param_1)

{
  this->LastTopologyVersion = 0xffffffff;
  return;
}

// RelinkCurveStorage @ 14a337a40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigHierarchyPoseAdapter::RelinkCurveStorage
          (FRigHierarchyPoseAdapter *this,FRigElementKeyAndIndex *param_1,float *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  undefined1 local_38 [16];
  TTuple<FRigElementKeyAndIndex,float_*> *local_28;
  int *piStack_20;
  float *local_18;
  
  local_38._0_8_ = param_1->Key;
  local_38._8_8_ = param_1->Index;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 1;
  local_18 = param_2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,1,0,&local_48,1,&local_3c);
  iVar2 = local_40;
  local_28 = (TTuple<FRigElementKeyAndIndex,float_*> *)local_38._0_8_;
  piStack_20 = (int *)local_38._8_8_;
  *(undefined8 *)local_48.Data = local_38._0_8_;
  *(undefined8 *)(local_48.Data + 8) = local_38._8_8_;
  *(float **)(local_48.Data + 0x10) = local_18;
  local_38._0_8_ = local_48.Data;
  if (local_40 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  local_38._8_4_ = iVar2;
  bVar3 = RelinkCurveStorage(this,(TArrayView<TTuple<FRigElementKeyAndIndex,float_*>,int> *)local_38
                            );
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return bVar3;
}

// RelinkCurveStorage @ 14a337b30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigHierarchyPoseAdapter::RelinkCurveStorage
          (FRigHierarchyPoseAdapter *this,
          TArrayView<TTuple<FRigElementKeyAndIndex,float_*>,int> *param_1)

{
  TTuple<FRigElementKeyAndIndex,float_*> *pTVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  URigHierarchy *pUVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  URigHierarchy *this_00;
  FRigBaseElement *this_01;
  URigHierarchy *pUVar11;
  float *pfVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  TTuple<FRigElementKeyAndIndex,float_*> *pTVar16;
  uint uVar17;
  int local_res8 [2];
  int local_58 [2];
  ForAnyElementType local_50;
  undefined8 local_48;
  
  bVar7 = FWeakObjectPtr::IsValid(&(this->WeakHierarchy).WeakPtr);
  if ((!bVar7) ||
     (this_00 = (URigHierarchy *)FWeakObjectPtr::Get(&(this->WeakHierarchy).WeakPtr),
     this_00 == (URigHierarchy *)0x0)) {
    return false;
  }
  uVar17 = param_1->ArrayNum;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (0 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,&local_50,0,(int *)((longlong)&local_48 + 4));
  }
  pTVar16 = param_1->DataPtr;
  bVar7 = false;
  pTVar1 = pTVar16 + param_1->ArrayNum;
  FVar14.Data = local_50.Data;
  for (; local_50.Data = FVar14.Data, pTVar16 != pTVar1; pTVar16 = pTVar16 + 1) {
    this_01 = URigHierarchy::Get(this_00,**(int **)&pTVar16->field_0x8);
    if ((this_01 == (FRigBaseElement *)0x0) ||
       (bVar8 = FRigBaseElement::IsA<FRigCurveElement>(this_01), !bVar8)) {
      this_01 = (FRigBaseElement *)0x0;
    }
    pfVar12 = (float *)this_01[1].Owner;
    pUVar11 = (URigHierarchy *)pfVar12;
    if ((URigHierarchy *)pfVar12 == (URigHierarchy *)0x0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4557919968548616148>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                         ,0x82c,"false");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      pfVar12 = &DefaultCurve;
      pUVar11 = this_01[1].Owner;
    }
    pUVar5 = *(URigHierarchy **)&pTVar16->field_0x10;
    lVar15 = ((URigHierarchy *)pfVar12)->_padding_;
    if (pUVar5 == (URigHierarchy *)0x0) {
      uVar9 = (undefined1)this_01[1]._padding_;
      if (pUVar11 != (URigHierarchy *)0x0) goto LAB_14a337d55;
    }
    else {
      iVar10 = *(int *)((longlong)&this_01[1]._padding_ + 4);
      if (((-1 < iVar10) && (iVar10 < (this_00->ElementCurves).Storage.ArrayNum)) &&
         ((URigHierarchy *)
          ((this_00->ElementCurves).Storage.AllocatorInstance.Data + (longlong)iVar10 * 4) ==
          pUVar11)) {
        local_58[0] = iVar10;
        if (((local_50.Data <= (FScriptContainerElement *)local_58) &&
            ((FScriptContainerElement *)local_58 < local_50.Data + (longlong)local_48._4_4_ * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        iVar10 = (int)local_48;
        if ((int)local_48 == local_48._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_50,(int *)((longlong)&local_48 + 4));
        }
        local_48 = CONCAT44(local_48._4_4_,iVar10 + 1);
        *(int *)(local_50.Data + (longlong)iVar10 * 4) = local_58[0];
      }
      uVar9 = (undefined1)this_01[1]._padding_;
      bVar7 = true;
      *(undefined4 *)((longlong)&this_01[1]._padding_ + 4) = 0xffffffff;
      this_01[1].Owner = pUVar5;
      pUVar11 = pUVar5;
LAB_14a337d55:
      *(int *)&pUVar11->_padding_ = (int)lVar15;
      *(undefined1 *)&this_01[1]._padding_ = uVar9;
    }
    FVar14.Data = local_50.Data;
  }
  iVar10 = (int)local_48;
  lVar15 = (longlong)(int)local_48;
  if ((int)local_48 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
  }
  else if ((int)local_48 == 0) goto LAB_14a337e38;
  iVar4 = (this_00->ElementCurves).FreeList.ArrayNum;
  uVar17 = iVar4 + iVar10;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if ((this_00->ElementCurves).FreeList.ArrayMax < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,&(this_00->ElementCurves).FreeList.AllocatorInstance,iVar4,
               &(this_00->ElementCurves).FreeList.ArrayMax);
  }
  pFVar2 = FVar14.Data + lVar15 * 4;
  iVar10 = local_res8[0];
  for (; local_res8[0] = iVar10, FVar14.Data != pFVar2; FVar14.Data = FVar14.Data + 4) {
    local_res8[0] = *(int *)FVar14.Data;
    if (local_res8[0] != -1) {
      pFVar13 = (this_00->ElementCurves).FreeList.AllocatorInstance.Data;
      pFVar3 = pFVar13 + (longlong)(this_00->ElementCurves).FreeList.ArrayNum * 4;
      for (; pFVar13 != pFVar3; pFVar13 = pFVar13 + 4) {
        if (*(int *)pFVar13 == local_res8[0]) goto LAB_14a337e2f;
      }
      FRigReusableElementStorage<float>::Deallocate
                (&this_00->ElementCurves,local_res8,(float **)0x0);
      iVar10 = local_res8[0];
    }
LAB_14a337e2f:
    local_res8[0] = iVar10;
    iVar10 = local_res8[0];
  }
LAB_14a337e38:
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return bVar7;
}

// RelinkTransformStorage @ 14a337ea0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigHierarchyPoseAdapter::RelinkTransformStorage
          (FRigHierarchyPoseAdapter *this,FRigElementKeyAndIndex *param_1,Type param_2,Type param_3,
          TTransform<double> *param_4,bool *param_5)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  undefined1 local_48 [16];
  TTuple<FRigElementKeyAndIndex,ERigTransformType::Type,ERigTransformStorageType::Type,UE::Math::TTransform<double>_*,bool_*>
  *local_38;
  int *piStack_30;
  Type local_28;
  Type TStack_24;
  TTransform<double> *pTStack_20;
  bool *local_18;
  
  local_48._0_8_ = param_1->Key;
  local_48._8_8_ = param_1->Index;
  pTStack_20 = param_4;
  local_18 = param_5;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 1;
  local_28 = param_2;
  TStack_24 = param_3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,1,0,&local_58,1,&local_4c);
  iVar2 = local_50;
  local_38 = (TTuple<FRigElementKeyAndIndex,ERigTransformType::Type,ERigTransformStorageType::Type,UE::Math::TTransform<double>_*,bool_*>
              *)local_48._0_8_;
  piStack_30 = (int *)local_48._8_8_;
  *(undefined8 *)local_58.Data = local_48._0_8_;
  *(undefined8 *)(local_58.Data + 8) = local_48._8_8_;
  *(ulonglong *)(local_58.Data + 0x10) = CONCAT44(TStack_24,local_28);
  *(TTransform<double> **)(local_58.Data + 0x18) = pTStack_20;
  *(bool **)(local_58.Data + 0x20) = local_18;
  local_48._0_8_ = local_58.Data;
  if (local_50 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  local_48._8_4_ = iVar2;
  bVar3 = RelinkTransformStorage
                    (this,(TArrayView<TTuple<FRigElementKeyAndIndex,ERigTransformType::Type,ERigTransformStorageType::Type,UE::Math::TTransform<double>_*,bool_*>,int>
                           *)local_48);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return bVar3;
}

// RelinkTransformStorage @ 14a337fc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigHierarchyPoseAdapter::RelinkTransformStorage
          (FRigHierarchyPoseAdapter *this,
          TArrayView<TTuple<FRigElementKeyAndIndex,ERigTransformType::Type,ERigTransformStorageType::Type,UE::Math::TTransform<double>_*,bool_*>,int>
          *param_1)

{
  TTuple<FRigElementKeyAndIndex,ERigTransformType::Type,ERigTransformStorageType::Type,UE::Math::TTransform<double>_*,bool_*>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TTransform<double> *pTVar5;
  char *pcVar6;
  code *pcVar7;
  FRigComputedTransform *pFVar8;
  int *piVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  int iVar13;
  URigHierarchy *this_00;
  TTransform<double> *pTVar14;
  bool *pbVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  TTuple<FRigElementKeyAndIndex,ERigTransformType::Type,ERigTransformStorageType::Type,UE::Math::TTransform<double>_*,bool_*>
  *pTVar18;
  longlong lVar19;
  uint uVar20;
  int local_res8 [2];
  int local_res18 [4];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  int local_c8;
  int local_c4;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  FRigComputedTransform *local_b0;
  int *local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  
  bVar10 = FWeakObjectPtr::IsValid(&(this->WeakHierarchy).WeakPtr);
  if ((!bVar10) ||
     (this_00 = (URigHierarchy *)FWeakObjectPtr::Get(&(this->WeakHierarchy).WeakPtr),
     this_00 == (URigHierarchy *)0x0)) {
    return false;
  }
  uVar20 = param_1->ArrayNum;
  local_d0._4_4_ = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  if (0 < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar20,&local_c0,0,(int *)((longlong)&local_b8 + 4));
  }
  uVar20 = param_1->ArrayNum;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  if (local_d0._4_4_ < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar20,&local_d8,(int)local_d0,(int *)((longlong)&local_d0 + 4));
  }
  pTVar18 = param_1->DataPtr;
  bVar10 = false;
  pTVar1 = pTVar18 + param_1->ArrayNum;
  FVar17.Data = local_c0.Data;
  for (; local_c0.Data = FVar17.Data, pTVar18 != pTVar1; pTVar18 = pTVar18 + 1) {
    URigHierarchy::GetElementTransformStorage
              (this_00,(TTuple<FRigComputedTransform_*,FRigTransformDirtyState_*> *)&local_b0,
               (FRigElementKeyAndIndex *)pTVar18,*(Type *)&pTVar18->field_0x10,
               *(Type *)&pTVar18->field_0x14);
    pFVar8 = local_b0;
    pTVar5 = *(TTransform<double> **)&pTVar18->field_0x18;
    if (pTVar5 != (TTransform<double> *)0x0) {
      pTVar14 = FRigComputedTransform::Get(local_b0);
      local_98 = (pTVar14->Rotation).XY.m128d_f64[0];
      dStack_90 = (pTVar14->Rotation).XY.m128d_f64[1];
      local_88 = (pTVar14->Rotation).ZW.m128d_f64[0];
      dStack_80 = (pTVar14->Rotation).ZW.m128d_f64[1];
      local_78 = (pTVar14->Translation).XY.m128d_f64[0];
      dStack_70 = (pTVar14->Translation).XY.m128d_f64[1];
      local_68 = (pTVar14->Translation).ZW.m128d_f64[0];
      dStack_60 = (pTVar14->Translation).ZW.m128d_f64[1];
      local_58 = (pTVar14->Scale3D).XY.m128d_f64[0];
      dStack_50 = (pTVar14->Scale3D).XY.m128d_f64[1];
      local_48 = (pTVar14->Scale3D).ZW.m128d_f64[0];
      dStack_40 = (pTVar14->Scale3D).ZW.m128d_f64[1];
      if ((pFVar8 == (FRigComputedTransform *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InOwner",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigReusableElementStorage.h"
                              ,0x148,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      iVar13 = pFVar8->StorageIndex;
      if (((-1 < iVar13) && (iVar13 < (this_00->ElementTransforms).Storage.ArrayNum)) &&
         ((TTransform<double> *)
          ((this_00->ElementTransforms).Storage.AllocatorInstance.Data + (longlong)iVar13 * 0x60) ==
          pFVar8->Storage)) {
        local_c8 = pFVar8->StorageIndex;
        if (((local_c0.Data <= (FScriptContainerElement *)&local_c8) &&
            ((FScriptContainerElement *)&local_c8 < local_c0.Data + (longlong)local_b8._4_4_ * 4))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        iVar13 = (int)local_b8;
        if ((int)local_b8 == local_b8._4_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_c0,(int *)((longlong)&local_b8 + 4));
        }
        local_b8 = CONCAT44(local_b8._4_4_,iVar13 + 1);
        *(int *)(local_c0.Data + (longlong)iVar13 * 4) = local_c8;
      }
      bVar10 = true;
      pFVar8->StorageIndex = -1;
      pFVar8->Storage = pTVar5;
      (pTVar5->Rotation).XY.m128d_f64[0] = local_98;
      (pTVar5->Rotation).XY.m128d_f64[1] = dStack_90;
      (pTVar5->Rotation).ZW.m128d_f64[0] = local_88;
      (pTVar5->Rotation).ZW.m128d_f64[1] = dStack_80;
      (pTVar5->Translation).XY.m128d_f64[0] = local_78;
      (pTVar5->Translation).XY.m128d_f64[1] = dStack_70;
      (pTVar5->Translation).ZW.m128d_f64[0] = local_68;
      (pTVar5->Translation).ZW.m128d_f64[1] = dStack_60;
      (pTVar5->Scale3D).XY.m128d_f64[0] = local_58;
      (pTVar5->Scale3D).XY.m128d_f64[1] = dStack_50;
      (pTVar5->Scale3D).ZW.m128d_f64[0] = local_48;
      (pTVar5->Scale3D).ZW.m128d_f64[1] = dStack_40;
    }
    piVar9 = local_a8;
    pcVar6 = *(char **)&pTVar18->field_0x20;
    if (pcVar6 != (char *)0x0) {
      pbVar15 = *(bool **)(local_a8 + 2);
      if (pbVar15 == (bool *)0x0) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_4557919968548617682>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                            ,0x22e,"false");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        pbVar15 = &bDefaultDirtyFlag;
      }
      bVar10 = *pbVar15;
      if ((piVar9 == (int *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InOwner",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigReusableElementStorage.h"
                              ,0x148,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      iVar13 = *piVar9;
      if (((-1 < iVar13) && (iVar13 < (this_00->ElementDirtyStates).Storage.ArrayNum)) &&
         ((this_00->ElementDirtyStates).Storage.AllocatorInstance.Data + iVar13 ==
          *(FScriptContainerElement **)(piVar9 + 2))) {
        local_c4 = *piVar9;
        if (((local_d8.Data <= (FScriptContainerElement *)&local_c4) &&
            ((FScriptContainerElement *)&local_c4 < local_d8.Data + (longlong)local_d0._4_4_ * 4))
           && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar12)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        iVar13 = (int)local_d0;
        if ((int)local_d0 == local_d0._4_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_d8,(int *)((longlong)&local_d0 + 4));
        }
        local_d0 = CONCAT44(local_d0._4_4_,iVar13 + 1);
        *(int *)(local_d8.Data + (longlong)iVar13 * 4) = local_c4;
      }
      *piVar9 = -1;
      *(char **)(piVar9 + 2) = pcVar6;
      if ((bool)*pcVar6 != bVar10) {
        *pcVar6 = bVar10;
      }
      bVar10 = true;
    }
    FVar17.Data = local_c0.Data;
  }
  iVar13 = (int)local_b8;
  lVar19 = (longlong)(int)local_b8;
  if ((int)local_b8 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
LAB_14a33844a:
    iVar4 = (this_00->ElementTransforms).FreeList.ArrayNum;
    uVar20 = iVar13 + iVar4;
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    if ((this_00->ElementTransforms).FreeList.ArrayMax < (int)uVar20) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar20,&(this_00->ElementTransforms).FreeList.AllocatorInstance,iVar4,
                 &(this_00->ElementTransforms).FreeList.ArrayMax);
    }
    pFVar2 = FVar17.Data + lVar19 * 4;
    iVar13 = local_res8[0];
    for (; local_res8[0] = iVar13, FVar17.Data != pFVar2; FVar17.Data = FVar17.Data + 4) {
      local_res8[0] = *(int *)FVar17.Data;
      if (local_res8[0] != -1) {
        pFVar16 = (this_00->ElementTransforms).FreeList.AllocatorInstance.Data;
        pFVar3 = pFVar16 + (longlong)(this_00->ElementTransforms).FreeList.ArrayNum * 4;
        for (; pFVar16 != pFVar3; pFVar16 = pFVar16 + 4) {
          if (*(int *)pFVar16 == local_res8[0]) goto LAB_14a3384bf;
        }
        FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
                  (&this_00->ElementTransforms,local_res8,(TTransform<double> **)0x0);
        iVar13 = local_res8[0];
      }
LAB_14a3384bf:
      local_res8[0] = iVar13;
      iVar13 = local_res8[0];
    }
  }
  else if ((int)local_b8 != 0) goto LAB_14a33844a;
  FVar17.Data = local_d8.Data;
  iVar13 = (int)local_d0;
  lVar19 = (longlong)(int)local_d0;
  if ((int)local_d0 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
  }
  else if ((int)local_d0 == 0) goto LAB_14a338588;
  iVar4 = (this_00->ElementDirtyStates).FreeList.ArrayNum;
  uVar20 = iVar13 + iVar4;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  if ((this_00->ElementDirtyStates).FreeList.ArrayMax < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar20,&(this_00->ElementDirtyStates).FreeList.AllocatorInstance,iVar4,
               &(this_00->ElementDirtyStates).FreeList.ArrayMax);
  }
  pFVar2 = FVar17.Data + lVar19 * 4;
  iVar13 = local_res18[0];
  for (; local_res18[0] = iVar13, FVar17.Data != pFVar2; FVar17.Data = FVar17.Data + 4) {
    local_res18[0] = *(int *)FVar17.Data;
    if (local_res18[0] != -1) {
      pFVar16 = (this_00->ElementDirtyStates).FreeList.AllocatorInstance.Data;
      pFVar3 = pFVar16 + (longlong)(this_00->ElementDirtyStates).FreeList.ArrayNum * 4;
      for (; pFVar16 != pFVar3; pFVar16 = pFVar16 + 4) {
        if (*(int *)pFVar16 == local_res18[0]) goto LAB_14a33857f;
      }
      FRigReusableElementStorage<bool>::Deallocate
                (&this_00->ElementDirtyStates,local_res18,(bool **)0x0);
      iVar13 = local_res18[0];
    }
LAB_14a33857f:
    local_res18[0] = iVar13;
    iVar13 = local_res18[0];
  }
LAB_14a338588:
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  return bVar10;
}

// RestoreCurveStorage @ 14a342e00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigHierarchyPoseAdapter::RestoreCurveStorage
          (FRigHierarchyPoseAdapter *this,FRigElementKeyAndIndex *param_1,bool param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  undefined1 local_28 [16];
  FRigElementKeyAndIndex *local_18;
  int *piStack_10;
  
  local_28._0_8_ = param_1->Key;
  local_28._8_8_ = param_1->Index;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_38,1,&local_2c);
  iVar2 = local_30;
  local_18 = (FRigElementKeyAndIndex *)local_28._0_8_;
  piStack_10 = (int *)local_28._8_8_;
  *(undefined8 *)local_38.Data = local_28._0_8_;
  *(undefined8 *)(local_38.Data + 8) = local_28._8_8_;
  local_28._0_8_ = local_38.Data;
  if (local_30 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  local_28._8_4_ = iVar2;
  bVar3 = RestoreCurveStorage(this,(TArrayView<FRigElementKeyAndIndex,int> *)local_28,param_2);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return bVar3;
}

// RestoreCurveStorage @ 14a342ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigHierarchyPoseAdapter::RestoreCurveStorage
          (FRigHierarchyPoseAdapter *this,TArrayView<FRigElementKeyAndIndex,int> *param_1,
          bool param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  URigHierarchy *pUVar10;
  FRigBaseElement *this_00;
  float *pfVar11;
  ForElementType<int> FVar12;
  uint uVar13;
  URigHierarchy *pUVar14;
  FRigElementKeyAndIndex *pFVar15;
  FWeakObjectPtr *this_01;
  FRigElementKeyAndIndex *pFVar16;
  longlong lVar17;
  URigHierarchy *pUVar18;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_a0;
  undefined8 local_98;
  FRigBaseElement *local_90;
  float local_88 [2];
  FWeakObjectPtr *local_80;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  this_01 = &(this->WeakHierarchy).WeakPtr;
  local_80 = this_01;
  bVar5 = FWeakObjectPtr::IsValid(this_01);
  pUVar14 = (URigHierarchy *)0x0;
  local_98._0_4_ = 0;
  pUVar10 = pUVar14;
  if (bVar5) {
    pUVar10 = (URigHierarchy *)FWeakObjectPtr::Get(this_01);
  }
  if (pUVar10 == (URigHierarchy *)0x0) {
    bVar5 = false;
  }
  else {
    uVar8 = param_1->ArrayNum;
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_98 = 0;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (0 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar8,&local_a0,0,(int *)((longlong)&local_98 + 4));
    }
    pFVar15 = param_1->DataPtr;
    pFVar16 = pFVar15 + param_1->ArrayNum;
    iVar7 = (int)local_98;
    if (pFVar15 != pFVar16) {
      do {
        this_00 = URigHierarchy::Get(pUVar10,*pFVar15->Index);
        if ((this_00 == (FRigBaseElement *)0x0) ||
           (bVar5 = FRigBaseElement::IsA<FRigCurveElement>(this_00), !bVar5)) {
          local_90 = (FRigBaseElement *)0x0;
        }
        else {
          iVar7 = *(int *)((longlong)&this_00[1]._padding_ + 4);
          local_90 = this_00;
          if (((iVar7 < 0) || ((pUVar10->ElementCurves).Storage.ArrayNum <= iVar7)) ||
             ((URigHierarchy *)
              ((pUVar10->ElementCurves).Storage.AllocatorInstance.Data + (longlong)iVar7 * 4) !=
              this_00[1].Owner)) {
            if (((local_a0.Data <= (FScriptContainerElement *)&local_90) &&
                ((FScriptContainerElement *)&local_90 < local_a0.Data + (longlong)local_98._4_4_ * 8
                )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            iVar7 = (int)local_98;
            if ((int)local_98 == local_98._4_4_) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_a0,(int *)((longlong)&local_98 + 4));
            }
            local_98 = CONCAT44(local_98._4_4_,iVar7 + 1);
            *(FRigBaseElement **)(local_a0.Data + (longlong)iVar7 * 8) = local_90;
          }
        }
        pFVar15 = pFVar15 + 1;
      } while (pFVar15 != pFVar16);
      iVar7 = (int)local_98;
    }
    if (iVar7 == 0) {
      bVar5 = false;
    }
    else {
      local_88[0] = 0.0;
      FRigReusableElementStorage<float>::Allocate
                (&pUVar10->ElementCurves,&local_78,iVar7,local_88,false);
      if ((int)local_98 != local_78.ArrayNum) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Curves.Num() == NewCurveIndices.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyPoseAdapter.cpp"
                           ,0xfa,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      if (0 < (int)local_98) {
        lVar17 = 0;
        pUVar18 = pUVar14;
        iVar7 = (int)local_98;
        do {
          uVar13 = (uint)pUVar14;
          uVar8 = 0;
          if ((int)uVar13 < iVar7) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          lVar3 = *(longlong *)(local_a0.Data + lVar17);
          pfVar11 = *(float **)(lVar3 + 0x68);
          if (pfVar11 == (float *)0x0) {
            bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4557919968548616148>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                               ,0x82c,"false");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            pfVar11 = &DefaultCurve;
          }
          fVar2 = *pfVar11;
          uVar8 = 0;
          if ((int)uVar13 < local_78.ArrayNum) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          FVar12 = (ForElementType<int>)&local_78;
          if (local_78.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar12 = local_78.AllocatorInstance.SecondaryData;
          }
          uVar8 = *(uint *)((longlong)&pUVar18->_padding_ + (longlong)FVar12);
          *(uint *)(lVar3 + 100) = uVar8;
          uVar9 = 0;
          if ((int)uVar8 < (pUVar10->ElementCurves).Storage.ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar1 = (pUVar10->ElementCurves).Storage.AllocatorInstance.Data +
                   (longlong)(int)uVar8 * 4;
          uVar6 = *(undefined1 *)(lVar3 + 0x60);
          *(FScriptContainerElement **)(lVar3 + 0x68) = pFVar1;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            *(float *)pFVar1 = fVar2;
            *(undefined1 *)(lVar3 + 0x60) = uVar6;
          }
          pUVar14 = (URigHierarchy *)(ulonglong)(uVar13 + 1);
          lVar17 = lVar17 + 8;
          pUVar18 = (URigHierarchy *)((longlong)&pUVar18->_padding_ + 4);
          this_01 = local_80;
          iVar7 = (int)local_98;
        } while ((int)(uVar13 + 1) < (int)local_98);
      }
      if (((param_2) && (bVar5 = FWeakObjectPtr::IsValid(this_01), bVar5)) &&
         (pUVar10 = (URigHierarchy *)FWeakObjectPtr::Get(this_01), pUVar10 != (URigHierarchy *)0x0))
      {
        URigHierarchy::UpdateElementStorage(pUVar10);
      }
      bVar5 = true;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
      }
    }
    if (local_a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data);
    }
  }
  return bVar5;
}

// RestoreTransformStorage @ 14a3438a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigHierarchyPoseAdapter::RestoreTransformStorage
          (FRigHierarchyPoseAdapter *this,FRigElementKeyAndIndex *param_1,Type param_2,Type param_3,
          bool param_4)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  undefined1 local_38 [16];
  TTuple<FRigElementKeyAndIndex,ERigTransformType::Type,ERigTransformStorageType::Type> *local_28;
  int *piStack_20;
  Type local_18;
  Type TStack_14;
  
  local_38._0_8_ = param_1->Key;
  local_38._8_8_ = param_1->Index;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 1;
  local_18 = param_2;
  TStack_14 = param_3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,1,0,&local_48,1,&local_3c);
  iVar2 = local_40;
  local_28 = (TTuple<FRigElementKeyAndIndex,ERigTransformType::Type,ERigTransformStorageType::Type>
              *)local_38._0_8_;
  piStack_20 = (int *)local_38._8_8_;
  *(undefined8 *)local_48.Data = local_38._0_8_;
  *(undefined8 *)(local_48.Data + 8) = local_38._8_8_;
  *(ulonglong *)(local_48.Data + 0x10) = CONCAT44(TStack_14,local_18);
  local_38._0_8_ = local_48.Data;
  if (local_40 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  local_38._8_4_ = iVar2;
  bVar3 = RestoreTransformStorage
                    (this,(TArrayView<TTuple<FRigElementKeyAndIndex,ERigTransformType::Type,ERigTransformStorageType::Type>,int>
                           *)local_38,param_4);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return bVar3;
}

// RestoreTransformStorage @ 14a3439a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigHierarchyPoseAdapter::RestoreTransformStorage
          (FRigHierarchyPoseAdapter *this,
          TArrayView<TTuple<FRigElementKeyAndIndex,ERigTransformType::Type,ERigTransformStorageType::Type>,int>
          *param_1,bool param_2)

{
  TTuple<FRigElementKeyAndIndex,ERigTransformType::Type,ERigTransformStorageType::Type> *pTVar1;
  FRigComputedTransform *this_00;
  uint *puVar2;
  char *pcVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  URigHierarchy *pUVar12;
  TTransform<double> *pTVar13;
  bool *pbVar14;
  ForElementType<int> FVar15;
  uint uVar16;
  TTuple<FRigElementKeyAndIndex,ERigTransformType::Type,ERigTransformStorageType::Type> *pTVar17;
  uint uVar18;
  longlong lVar19;
  FWeakObjectPtr *this_01;
  undefined1 auStackY_188 [32];
  bool local_138;
  char local_137;
  ForAnyElementType local_130;
  undefined8 local_128;
  undefined1 local_120 [16];
  FRigReusableElementStorage<UE::Math::TTransform<double>_> *local_110;
  FRigReusableElementStorage<bool> *local_108;
  longlong local_100;
  FWeakObjectPtr *local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined1 local_88 [16];
  ForElementType<int> local_78;
  int local_70;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_01 = &(this->WeakHierarchy).WeakPtr;
  local_137 = param_2;
  local_f8 = this_01;
  bVar6 = FWeakObjectPtr::IsValid(this_01);
  if (bVar6) {
    pUVar12 = (URigHierarchy *)FWeakObjectPtr::Get(this_01);
  }
  else {
    pUVar12 = (URigHierarchy *)0x0;
  }
  if (pUVar12 == (URigHierarchy *)0x0) {
    bVar6 = false;
  }
  else {
    uVar16 = param_1->ArrayNum;
    local_128._0_4_ = 0;
    local_130.Data = (FScriptContainerElement *)0x0;
    local_128 = 0;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if (0 < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar16,&local_130,0,(int *)((longlong)&local_128 + 4));
    }
    pTVar17 = param_1->DataPtr;
    pTVar1 = pTVar17 + param_1->ArrayNum;
    iVar9 = (int)local_128;
    if (pTVar17 != pTVar1) {
      do {
        URigHierarchy::GetElementTransformStorage
                  (pUVar12,(TTuple<FRigComputedTransform_*,FRigTransformDirtyState_*> *)local_120,
                   (FRigElementKeyAndIndex *)pTVar17,*(Type *)&pTVar17->field_0x10,
                   *(Type *)&pTVar17->field_0x14);
        if (((int *)local_120._0_8_ != (int *)0x0) && ((int *)local_120._8_8_ != (int *)0x0)) {
          iVar9 = *(int *)local_120._0_8_;
          if ((iVar9 < 0) ||
             (((pUVar12->ElementTransforms).Storage.ArrayNum <= iVar9 ||
              ((pUVar12->ElementTransforms).Storage.AllocatorInstance.Data + (longlong)iVar9 * 0x60
               != *(FScriptContainerElement **)(local_120._0_8_ + 8))))) {
            iVar9 = *(int *)local_120._8_8_;
            if ((iVar9 < 0) ||
               (((pUVar12->ElementDirtyStates).Storage.ArrayNum <= iVar9 ||
                ((pUVar12->ElementDirtyStates).Storage.AllocatorInstance.Data + iVar9 !=
                 *(FScriptContainerElement **)(local_120._8_8_ + 8))))) {
              if ((local_130.Data <= (FScriptContainerElement *)local_120) &&
                 (((FScriptContainerElement *)local_120 <
                   local_130.Data + (longlong)local_128._4_4_ * 0x10 &&
                  (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)))) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              iVar9 = (int)local_128;
              if ((int)local_128 == local_128._4_4_) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_130,(int *)((longlong)&local_128 + 4));
              }
              local_128 = CONCAT44(local_128._4_4_,iVar9 + 1);
              *(undefined8 *)(local_130.Data + (longlong)iVar9 * 0x10) = local_120._0_8_;
              *(undefined8 *)(local_130.Data + (longlong)iVar9 * 0x10 + 8) = local_120._8_8_;
            }
          }
        }
        pTVar17 = pTVar17 + 1;
      } while (pTVar17 != pTVar1);
      iVar9 = (int)local_128;
    }
    if (iVar9 == 0) {
      bVar6 = false;
    }
    else {
      local_110 = &pUVar12->ElementTransforms;
      FRigReusableElementStorage<UE::Math::TTransform<double>_>::Allocate
                (local_110,&local_68,iVar9,&UE::Math::TTransform<double>::Identity,false);
      local_108 = &pUVar12->ElementDirtyStates;
      local_138 = false;
      FRigReusableElementStorage<bool>::Allocate
                (local_108,
                 (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)local_88,
                 (int)local_128,&local_138,false);
      if ((int)local_128 != local_68.ArrayNum) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StoragePerElement.Num() == NewTransformIndices.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyPoseAdapter.cpp"
                           ,0x98,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      iVar9 = (int)local_128;
      if ((int)local_128 != local_70) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StoragePerElement.Num() == NewDirtyStateIndices.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyPoseAdapter.cpp"
                           ,0x99,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar9 = (int)local_128;
      }
      uVar16 = 0;
      if (0 < iVar9) {
        lVar19 = 0;
        local_100 = 0;
        do {
          lVar5 = local_100;
          uVar18 = ~uVar16 >> 0x1f;
          uVar10 = 0;
          if ((int)uVar16 < iVar9) {
            uVar10 = uVar18;
          }
          if (uVar10 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            iVar9 = (int)local_128;
          }
          this_00 = *(FRigComputedTransform **)(local_130.Data + lVar19);
          uVar10 = 0;
          if ((int)uVar16 < iVar9) {
            uVar10 = uVar18;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          puVar2 = *(uint **)(local_130.Data + lVar19 + 8);
          pTVar13 = FRigComputedTransform::Get(this_00);
          local_e8 = (pTVar13->Rotation).XY.m128d_f64[0];
          dStack_e0 = (pTVar13->Rotation).XY.m128d_f64[1];
          local_d8 = (pTVar13->Rotation).ZW.m128d_f64[0];
          dStack_d0 = (pTVar13->Rotation).ZW.m128d_f64[1];
          local_c8 = (pTVar13->Translation).XY.m128d_f64[0];
          dStack_c0 = (pTVar13->Translation).XY.m128d_f64[1];
          local_b8 = (pTVar13->Translation).ZW.m128d_f64[0];
          dStack_b0 = (pTVar13->Translation).ZW.m128d_f64[1];
          local_a8 = (pTVar13->Scale3D).XY.m128d_f64[0];
          dStack_a0 = (pTVar13->Scale3D).XY.m128d_f64[1];
          local_98 = (pTVar13->Scale3D).ZW.m128d_f64[0];
          dStack_90 = (pTVar13->Scale3D).ZW.m128d_f64[1];
          pbVar14 = *(bool **)(puVar2 + 2);
          if (pbVar14 == (bool *)0x0) {
            bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4557919968548617682>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                               ,0x22e,"false");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            pbVar14 = &bDefaultDirtyFlag;
          }
          bVar6 = *pbVar14;
          uVar10 = 0;
          if ((int)uVar16 < local_68.ArrayNum) {
            uVar10 = uVar18;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          FVar15 = (ForElementType<int>)&local_68;
          if (local_68.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar15 = local_68.AllocatorInstance.SecondaryData;
          }
          uVar10 = *(uint *)(lVar5 + (longlong)FVar15);
          this_00->StorageIndex = uVar10;
          uVar11 = 0;
          if ((int)uVar10 < (local_110->Storage).ArrayNum) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          this_00->Storage =
               (TTransform<double> *)
               ((local_110->Storage).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x60);
          uVar10 = 0;
          if ((int)uVar16 < local_70) {
            uVar10 = uVar18;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          lVar5 = local_100;
          FVar15 = (ForElementType<int>)local_88;
          if (local_78 != (ForElementType<int>)0x0) {
            FVar15 = local_78;
          }
          uVar10 = *(uint *)(local_100 + (longlong)FVar15);
          *puVar2 = uVar10;
          uVar18 = 0;
          if ((int)uVar10 < (local_108->Storage).ArrayNum) {
            uVar18 = ~uVar10 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          *(FScriptContainerElement **)(puVar2 + 2) =
               (local_108->Storage).AllocatorInstance.Data + (int)uVar10;
          pTVar13 = this_00->Storage;
          if (pTVar13 != (TTransform<double> *)0x0) {
            (pTVar13->Rotation).XY.m128d_f64[0] = local_e8;
            (pTVar13->Rotation).XY.m128d_f64[1] = dStack_e0;
            (pTVar13->Rotation).ZW.m128d_f64[0] = local_d8;
            (pTVar13->Rotation).ZW.m128d_f64[1] = dStack_d0;
            (pTVar13->Translation).XY.m128d_f64[0] = local_c8;
            (pTVar13->Translation).XY.m128d_f64[1] = dStack_c0;
            (pTVar13->Translation).ZW.m128d_f64[0] = local_b8;
            (pTVar13->Translation).ZW.m128d_f64[1] = dStack_b0;
            (pTVar13->Scale3D).XY.m128d_f64[0] = local_a8;
            (pTVar13->Scale3D).XY.m128d_f64[1] = dStack_a0;
            (pTVar13->Scale3D).ZW.m128d_f64[0] = local_98;
            (pTVar13->Scale3D).ZW.m128d_f64[1] = dStack_90;
          }
          pcVar3 = *(char **)(puVar2 + 2);
          if ((pcVar3 != (char *)0x0) && ((bool)*pcVar3 != bVar6)) {
            *pcVar3 = bVar6;
          }
          local_100 = lVar5 + 4;
          uVar16 = uVar16 + 1;
          lVar19 = lVar19 + 0x10;
          this_01 = local_f8;
          iVar9 = (int)local_128;
        } while ((int)uVar16 < (int)local_128);
      }
      if (local_137 != '\0') {
        bVar6 = FWeakObjectPtr::IsValid(this_01);
        if ((bVar6) &&
           (pUVar12 = (URigHierarchy *)FWeakObjectPtr::Get(this_01), pUVar12 != (URigHierarchy *)0x0
           )) {
          URigHierarchy::UpdateElementStorage(pUVar12);
        }
        bVar6 = FWeakObjectPtr::IsValid(this_01);
        if ((bVar6) &&
           (pUVar12 = (URigHierarchy *)FWeakObjectPtr::Get(this_01), pUVar12 != (URigHierarchy *)0x0
           )) {
          URigHierarchy::SortElementStorage(pUVar12);
        }
      }
      bVar6 = true;
      if (local_78 != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_78);
      }
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
      }
    }
    if (local_130.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data);
    }
  }
  return bVar6;
}

// ShrinkHierarchyStorage @ 14a355270

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigHierarchyPoseAdapter::ShrinkHierarchyStorage(FRigHierarchyPoseAdapter *this)

{
  bool bVar1;
  URigHierarchy *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->WeakHierarchy).WeakPtr);
  if (bVar1) {
    this_00 = (URigHierarchy *)FWeakObjectPtr::Get(&(this->WeakHierarchy).WeakPtr);
    if (this_00 != (URigHierarchy *)0x0) {
      bVar1 = URigHierarchy::ShrinkElementStorage(this_00);
      return bVar1;
    }
  }
  return false;
}

// SortHierarchyStorage @ 14a3581f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigHierarchyPoseAdapter::SortHierarchyStorage(FRigHierarchyPoseAdapter *this)

{
  bool bVar1;
  URigHierarchy *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->WeakHierarchy).WeakPtr);
  if (bVar1) {
    this_00 = (URigHierarchy *)FWeakObjectPtr::Get(&(this->WeakHierarchy).WeakPtr);
    if (this_00 != (URigHierarchy *)0x0) {
      bVar1 = URigHierarchy::SortElementStorage(this_00);
      return bVar1;
    }
  }
  return false;
}

// UpdateHierarchyStorage @ 14a35dc20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigHierarchyPoseAdapter::UpdateHierarchyStorage(FRigHierarchyPoseAdapter *this)

{
  bool bVar1;
  URigHierarchy *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->WeakHierarchy).WeakPtr);
  if (bVar1) {
    this_00 = (URigHierarchy *)FWeakObjectPtr::Get(&(this->WeakHierarchy).WeakPtr);
    if (this_00 != (URigHierarchy *)0x0) {
      URigHierarchy::UpdateElementStorage(this_00);
      return true;
    }
  }
  return false;
}

// ~FRigHierarchyPoseAdapter @ 14a3bcd10

void __thiscall FRigHierarchyPoseAdapter::~FRigHierarchyPoseAdapter(FRigHierarchyPoseAdapter *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FRigHierarchyPoseAdapter__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014a3bcd3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

