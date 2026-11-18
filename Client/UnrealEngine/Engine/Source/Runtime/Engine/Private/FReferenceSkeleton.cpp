// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 28

// GetParentIndexInternal @ 1474031c0

int __thiscall
FReferenceSkeleton::GetParentIndexInternal
          (FReferenceSkeleton *this,int param_1,
          TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < param_2->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((param_2->AllocatorInstance).Data + (longlong)param_1 * 0xc + 8);
}

// BoneIsChildOf @ 14754a470

bool __thiscall FReferenceSkeleton::BoneIsChildOf(FReferenceSkeleton *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_2 != -1) && (param_2 < param_1)) {
    uVar4 = GetParentIndex(this,param_1);
    do {
      if (uVar4 == param_2) {
        return true;
      }
      uVar5 = 0;
      if ((int)uVar4 < (this->FinalRefBoneInfo).ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if (uVar5 == 0) {
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
      uVar4 = *(uint *)((this->FinalRefBoneInfo).AllocatorInstance.Data +
                       (longlong)(int)uVar4 * 0xc + 8);
    } while (uVar4 != 0xffffffff);
  }
  return false;
}

// FReferenceSkeleton @ 1475a5500

FReferenceSkeleton * __thiscall
FReferenceSkeleton::FReferenceSkeleton(FReferenceSkeleton *this,bool param_1)

{
  (this->RawRefBoneInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawRefBoneInfo).ArrayNum = 0;
  (this->RawRefBoneInfo).ArrayMax = 0;
  (this->RawRefBonePose).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawRefBonePose).ArrayNum = 0;
  (this->RawRefBonePose).ArrayMax = 0;
  (this->FinalRefBoneInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FinalRefBoneInfo).ArrayNum = 0;
  (this->FinalRefBoneInfo).ArrayMax = 0;
  (this->FinalRefBonePose).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FinalRefBonePose).ArrayNum = 0;
  (this->FinalRefBonePose).ArrayMax = 0;
  *(undefined8 *)&this->RawNameToIndexMap = 0;
  *(undefined8 *)&(this->RawNameToIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->RawNameToIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->RawNameToIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->RawNameToIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RawNameToIndexMap).field_0x34 = 0;
  *(undefined4 *)&(this->RawNameToIndexMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RawNameToIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->RawNameToIndexMap).field_0x48 = 0;
  *(undefined8 *)&this->FinalNameToIndexMap = 0;
  *(undefined8 *)&(this->FinalNameToIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->FinalNameToIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->FinalNameToIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->FinalNameToIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FinalNameToIndexMap).field_0x34 = 0;
  *(undefined4 *)&(this->FinalNameToIndexMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FinalNameToIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->FinalNameToIndexMap).field_0x48 = 0;
  (this->RequiredVirtualBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequiredVirtualBones).ArrayNum = 0;
  (this->RequiredVirtualBones).ArrayMax = 0;
  (this->UsedVirtualBoneData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedVirtualBoneData).ArrayNum = 0;
  (this->UsedVirtualBoneData).ArrayMax = 0;
  (this->CachedEndOfBranchIndicesRaw).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedEndOfBranchIndicesRaw).ArrayNum = 0;
  (this->CachedEndOfBranchIndicesRaw).ArrayMax = 0;
  this->bOnlyOneRootAllowed = param_1;
  return this;
}

// ~FReferenceSkeleton @ 1475a9e60

void __thiscall FReferenceSkeleton::~FReferenceSkeleton(FReferenceSkeleton *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->CachedEndOfBranchIndicesRaw).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UsedVirtualBoneData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RequiredVirtualBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->FinalNameToIndexMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FinalNameToIndexMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FinalNameToIndexMap);
  *(undefined4 *)&(this->RawNameToIndexMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RawNameToIndexMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RawNameToIndexMap);
  pFVar1 = (this->FinalRefBonePose).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FinalRefBoneInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RawRefBonePose).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RawRefBoneInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 1475ac820

int __thiscall `FReferenceSkeleton::SetParent'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (-1 < param_1) {
    plVar1 = *(longlong **)this;
    if (param_1 < (int)plVar1[1]) {
      if (param_1 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
      }
      return *(int *)(*plVar1 + 8 + (longlong)param_1 * 0xc);
    }
  }
  return -1;
}

// Add @ 1475b0830

void __thiscall
FReferenceSkeleton::Add(FReferenceSkeleton *this,FMeshBoneInfo *param_1,TTransform<double> *param_2)

{
  FMeshBoneInfo *pFVar1;
  FScriptContainerElement *pFVar2;
  TTransform<double> *pTVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  int iVar16;
  TTuple<FName,int> *pTVar17;
  int *piVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint local_res8 [4];
  FMeshBoneInfo *local_38;
  uint *local_30;
  
  if (param_1->Name != (FName)0x0) {
    pTVar17 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                      *)&this->RawNameToIndexMap,param_1->Name);
    piVar18 = (int *)&pTVar17->field_0x8;
    if (pTVar17 == (TTuple<FName,int> *)0x0) {
      piVar18 = (int *)0x0;
    }
    if (((piVar18 != (int *)0x0) && (*piVar18 != -1)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("FindRawBoneIndex(BoneInfo.Name) == INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ReferenceSkeleton.h"
                            ,0xc9,L""), bVar15)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar1 = (FMeshBoneInfo *)(this->RawRefBoneInfo).AllocatorInstance.Data;
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (this->RawRefBoneInfo).ArrayMax)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res8[0] = (this->RawRefBoneInfo).ArrayNum;
  piVar18 = &(this->RawRefBoneInfo).ArrayMax;
  if (local_res8[0] == *piVar18) {
    local_res8[0] =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,(ForAnyElementType *)this,piVar18);
  }
  (this->RawRefBoneInfo).ArrayNum = local_res8[0] + 1;
  pFVar2 = (this->RawRefBoneInfo).AllocatorInstance.Data;
  *(FName *)(pFVar2 + (longlong)(int)local_res8[0] * 0xc) = param_1->Name;
  *(int *)(pFVar2 + (longlong)(int)local_res8[0] * 0xc + 8) = param_1->ParentIndex;
  pTVar3 = (TTransform<double> *)(this->RawRefBonePose).AllocatorInstance.Data;
  if (((pTVar3 <= param_2) && (param_2 < pTVar3 + (this->RawRefBonePose).ArrayMax)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar16 = (this->RawRefBonePose).ArrayNum;
  piVar18 = &(this->RawRefBonePose).ArrayMax;
  if (iVar16 == *piVar18) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1060,&(this->RawRefBonePose).AllocatorInstance,piVar18);
  }
  (this->RawRefBonePose).ArrayNum = iVar16 + 1;
  dVar8 = (param_2->Rotation).XY.m128d_f64[1];
  pFVar2 = (this->RawRefBonePose).AllocatorInstance.Data;
  lVar19 = (longlong)iVar16 * 0x60;
  *(double *)(pFVar2 + lVar19) = (param_2->Rotation).XY.m128d_f64[0];
  *(double *)(pFVar2 + lVar19 + 8) = dVar8;
  dVar8 = (param_2->Rotation).ZW.m128d_f64[1];
  *(double *)(pFVar2 + lVar19 + 0x10) = (param_2->Rotation).ZW.m128d_f64[0];
  *(double *)(pFVar2 + lVar19 + 0x10 + 8) = dVar8;
  dVar8 = (param_2->Translation).XY.m128d_f64[1];
  *(double *)(pFVar2 + lVar19 + 0x20) = (param_2->Translation).XY.m128d_f64[0];
  *(double *)(pFVar2 + lVar19 + 0x20 + 8) = dVar8;
  dVar8 = (param_2->Translation).ZW.m128d_f64[1];
  *(double *)(pFVar2 + lVar19 + 0x30) = (param_2->Translation).ZW.m128d_f64[0];
  *(double *)(pFVar2 + lVar19 + 0x30 + 8) = dVar8;
  dVar8 = (param_2->Scale3D).XY.m128d_f64[1];
  *(double *)(pFVar2 + lVar19 + 0x40) = (param_2->Scale3D).XY.m128d_f64[0];
  *(double *)(pFVar2 + lVar19 + 0x40 + 8) = dVar8;
  dVar8 = (param_2->Scale3D).ZW.m128d_f64[1];
  *(double *)(pFVar2 + lVar19 + 0x50) = (param_2->Scale3D).ZW.m128d_f64[0];
  *(double *)(pFVar2 + lVar19 + 0x50 + 8) = dVar8;
  local_30 = local_res8;
  local_38 = param_1;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,int_const_&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->RawNameToIndexMap,
             (TPairInitializer<FName_const_&,int_const_&> *)(local_res8 + 2),(bool *)&local_38);
  lVar19 = (longlong)(int)local_res8[0];
  uVar20 = 0;
  if ((int)local_res8[0] < (this->RawRefBonePose).ArrayNum) {
    uVar20 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (this->RawRefBonePose).AllocatorInstance.Data;
  lVar19 = lVar19 * 0x60;
  dVar11 = *(double *)(pFVar2 + lVar19);
  dVar12 = *(double *)(pFVar2 + lVar19 + 8);
  dVar13 = *(double *)(pFVar2 + lVar19 + 0x10);
  dVar14 = *(double *)(pFVar2 + lVar19 + 0x10 + 8);
  dVar8 = dVar13 * dVar13 + dVar11 * dVar11;
  dVar9 = dVar14 * dVar14 + dVar12 * dVar12;
  auVar25._8_4_ = SUB84(dVar9,0);
  auVar25._0_8_ = dVar8;
  auVar25._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar26._0_8_ = auVar25._8_8_ + dVar8;
  auVar26._8_8_ = dVar8 + dVar9;
  auVar29 = sqrtpd(in_XMM2,auVar26);
  uVar21 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar26._0_8_);
  uVar23 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar26._8_8_);
  uVar22 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar26._0_8_);
  uVar24 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar26._8_8_);
  auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar29);
  auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar29);
  auVar28._0_8_ = uVar22 & (ulonglong)(auVar27._0_8_ * dVar11);
  uVar10 = uVar24 & (ulonglong)(auVar27._8_8_ * dVar12);
  auVar28._8_4_ = (undefined4)uVar10;
  auVar28._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar30._0_8_ = uVar21 & (ulonglong)(auVar29._0_8_ * dVar13);
  uVar10 = uVar23 & (ulonglong)(auVar29._8_8_ * dVar14);
  auVar30._8_4_ = (undefined4)uVar10;
  auVar30._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar29._4_4_ = ~(uint)(uVar22 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar29._0_4_ = ~(uint)uVar22 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar29._8_4_ = ~(uint)uVar24 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar29._12_4_ = ~(uint)(uVar24 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  uVar20 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  uVar5 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  uVar6 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  uVar7 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  *(undefined1 (*) [16])(pFVar2 + lVar19) = auVar28 | auVar29;
  auVar27._4_4_ = ~(uint)(uVar21 >> 0x20) & uVar5;
  auVar27._0_4_ = ~(uint)uVar21 & uVar20;
  auVar27._8_4_ = ~(uint)uVar23 & uVar6;
  auVar27._12_4_ = ~(uint)(uVar23 >> 0x20) & uVar7;
  *(undefined1 (*) [16])(pFVar2 + lVar19 + 0x10) = auVar30 | auVar27;
  if (this->bOnlyOneRootAllowed != false) {
    if (local_res8[0] == 0) {
      if (param_1->ParentIndex == -1) {
        return;
      }
    }
    else if ((((0 < (int)local_res8[0]) && (iVar16 = param_1->ParentIndex, -1 < iVar16)) &&
             (iVar16 < (this->RawRefBoneInfo).ArrayNum)) && (iVar16 < (int)local_res8[0])) {
      return;
    }
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("!bOnlyOneRootAllowed || (((BoneIndex == 0) && (BoneInfo.ParentIndex == INDEX_NONE)) || ((BoneIndex > 0) && RawRefBoneInfo.IsValidIndex(BoneInfo.ParentIndex) && (BoneInfo.ParentIndex < BoneIndex)))"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ReferenceSkeleton.h"
                        ,0xd8,L"");
    if (bVar15) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// Empty @ 1475c3e30

void __thiscall FReferenceSkeleton::Empty(FReferenceSkeleton *this,int param_1)

{
  int *piVar1;
  
  if (-1 < param_1) {
    piVar1 = &(this->RawRefBoneInfo).ArrayMax;
    (this->RawRefBoneInfo).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    piVar1 = &(this->RawRefBonePose).ArrayMax;
    (this->RawRefBonePose).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,param_1,&(this->RawRefBonePose).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->FinalRefBoneInfo).ArrayMax;
    (this->FinalRefBoneInfo).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,&(this->FinalRefBoneInfo).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->FinalRefBonePose).ArrayMax;
    (this->FinalRefBonePose).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,param_1,&(this->FinalRefBonePose).AllocatorInstance,0,piVar1);
    }
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Empty
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)&this->RawNameToIndexMap,param_1);
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Empty
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)&this->FinalNameToIndexMap,param_1);
    piVar1 = &(this->CachedEndOfBranchIndicesRaw).ArrayMax;
    (this->CachedEndOfBranchIndicesRaw).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->CachedEndOfBranchIndicesRaw).AllocatorInstance,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// EnsureParentsExist @ 1475c4950

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FReferenceSkeleton::EnsureParentsExist
          (FReferenceSkeleton *this,TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *_Src;
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FTlsAutoCleanup *pFVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 local_res10 [8];
  int local_res18;
  code *local_48;
  undefined1 *local_40;
  
  iVar6 = (this->FinalRefBoneInfo).ArrayNum;
  local_40 = local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FEnsureParentsExistScratchArea>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  uVar9 = 0;
  local_res18 = iVar6;
  pFVar7 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_48,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FEnsureParentsExistScratchArea>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  iVar8 = *(int *)&pFVar7[3].field_0x4;
  *(undefined4 *)(pFVar7 + 3) = 0;
  if (iVar8 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)(pFVar7 + 2),0,(int *)&pFVar7[3].field_0x4);
  }
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed
            ((TArray<bool,TSizedDefaultAllocator<32>_> *)(pFVar7 + 2),iVar6,Default);
  iVar8 = param_1->ArrayNum;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar9 < iVar8) {
        uVar4 = ~uVar9 >> 0x1f;
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
      uVar1 = *(ushort *)((param_1->AllocatorInstance).Data + lVar10);
      if (uVar1 == 0) {
        if ((*(int *)(pFVar7 + 3) < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined1 *)pFVar7[2] = 1;
LAB_1475c4c69:
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 2;
      }
      else {
        if (iVar6 <= (int)(uint)uVar1) {
          if (4 < (byte)LogAnimation._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          }
          goto LAB_1475c4c69;
        }
        if ((*(int *)(pFVar7 + 3) <= (int)(uint)uVar1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined1 *)((ulonglong)uVar1 + (longlong)pFVar7[2]) = 1;
        uVar5 = GetParentIndexInternal(this,(uint)uVar1,&this->FinalRefBoneInfo);
        uVar4 = 0;
        if ((int)uVar5 < *(int *)(pFVar7 + 3)) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = local_res18;
        if (*(char *)((longlong)(int)uVar5 + (longlong)pFVar7[2]) != '\0') goto LAB_1475c4c69;
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x202,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar6 + 1;
        _Src = (param_1->AllocatorInstance).Data + (longlong)(int)uVar9 * 2;
        memmove(_Src + 2,_Src,(longlong)(int)(iVar6 - uVar9) * 2);
        uVar4 = 0;
        if ((int)uVar9 < param_1->ArrayNum) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(short *)((param_1->AllocatorInstance).Data + lVar10) = (short)uVar5;
        uVar4 = 0;
        if ((int)uVar5 < *(int *)(pFVar7 + 3)) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined1 *)((longlong)(int)uVar5 + (longlong)pFVar7[2]) = 1;
        iVar6 = local_res18;
      }
      iVar8 = param_1->ArrayNum;
    } while ((int)uVar9 < iVar8);
  }
  return;
}

// EnsureParentsExistAndSort @ 1475c4ca0

void __thiscall
FReferenceSkeleton::EnsureParentsExistAndSort
          (FReferenceSkeleton *this,TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1)

{
  FIdentityFunctor local_res10 [24];
  
  AlgoImpl::
  IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<void>_>_>
            ((ushort *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res10[0],
             (TLess<void> *)local_res10);
  EnsureParentsExist(this,param_1);
  AlgoImpl::
  IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<void>_>_>
            ((ushort *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res10[0],
             (TLess<void> *)local_res10);
  return;
}

// GetBoneAbsoluteTransform @ 1475d27a0

TTransform<double> * __thiscall
FReferenceSkeleton::GetBoneAbsoluteTransform
          (FReferenceSkeleton *this,TTransform<double> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TTransform<double> *pTVar4;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_18;
  
  if ((-1 < param_1) && (param_1 < (this->FinalRefBoneInfo).ArrayNum)) {
    pTVar4 = (TTransform<double> *)(this->FinalRefBonePose).AllocatorInstance.Data;
    iVar1 = (this->FinalRefBonePose).ArrayNum;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TTransform<double> *)(*pcVar2)();
        return pTVar4;
      }
    }
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = iVar1;
    local_18.DataPtr = pTVar4;
    ::`anonymous_namespace'::ComposeSingleAbsoluteTransform
              (__return_storage_ptr__,param_1,this,&local_18);
    return __return_storage_ptr__;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6566475078224052950>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\ReferenceSkeleton.cpp"
                     ,0x2d6,"IsValidIndex(InBoneIndex)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TTransform<double> *)(*pcVar2)();
    return pTVar4;
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return __return_storage_ptr__;
}

// GetBoneAbsoluteTransforms @ 1475d28c0

void __thiscall
FReferenceSkeleton::GetBoneAbsoluteTransforms
          (FReferenceSkeleton *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  TTransform<double> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_18;
  
  pTVar2 = (TTransform<double> *)(this->FinalRefBonePose).AllocatorInstance.Data;
  iVar1 = (this->FinalRefBonePose).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pTVar2;
  ::`anonymous_namespace'::ComposeAbsoluteTransforms(this,&local_18,param_1);
  return;
}

// GetCachedEndOfBranchIndex @ 1475d2ca0

int __thiscall FReferenceSkeleton::GetCachedEndOfBranchIndex(FReferenceSkeleton *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  lVar8 = (longlong)param_1;
  if ((param_1 < 0) || ((this->CachedEndOfBranchIndicesRaw).ArrayNum <= param_1)) {
    return -1;
  }
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < (this->CachedEndOfBranchIndicesRaw).ArrayNum) {
    uVar4 = uVar11;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar5 = (*pcVar1)();
    return iVar5;
  }
  if (*(int *)((this->CachedEndOfBranchIndicesRaw).AllocatorInstance.Data + lVar8 * 4) == -2) {
    iVar5 = (this->RawRefBoneInfo).ArrayNum;
    if ((param_1 == 0) || (iVar9 = param_1 + 1, iVar5 <= iVar9)) {
      uVar4 = 0;
      if (param_1 < (this->CachedEndOfBranchIndicesRaw).ArrayNum) {
        uVar4 = uVar11;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      *(int *)((this->CachedEndOfBranchIndicesRaw).AllocatorInstance.Data + lVar8 * 4) = iVar5 + -1;
      uVar4 = 0;
      if (param_1 < (this->CachedEndOfBranchIndicesRaw).ArrayNum) {
        uVar4 = uVar11;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      iVar5 = *(int *)((this->CachedEndOfBranchIndicesRaw).AllocatorInstance.Data + lVar8 * 4);
    }
    else {
      iVar6 = GetParentIndexInternal(this,param_1,&this->FinalRefBoneInfo);
      iVar7 = GetParentIndexInternal(this,iVar9,&this->FinalRefBoneInfo);
      iVar10 = -2;
      while ((iVar2 = iVar9, iVar6 < iVar7 && (iVar9 = iVar2 + 1, iVar10 = iVar2, iVar9 < iVar5))) {
        iVar7 = GetParentIndexInternal(this,iVar9,&this->FinalRefBoneInfo);
      }
      uVar4 = 0;
      if (param_1 < (this->CachedEndOfBranchIndicesRaw).ArrayNum) {
        uVar4 = uVar11;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      *(int *)((this->CachedEndOfBranchIndicesRaw).AllocatorInstance.Data + lVar8 * 4) = iVar10;
      uVar4 = 0;
      if (param_1 < (this->CachedEndOfBranchIndicesRaw).ArrayNum) {
        uVar4 = uVar11;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      iVar5 = *(int *)((this->CachedEndOfBranchIndicesRaw).AllocatorInstance.Data + lVar8 * 4);
    }
  }
  else {
    uVar4 = 0;
    if (param_1 < (this->CachedEndOfBranchIndicesRaw).ArrayNum) {
      uVar4 = uVar11;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
    iVar5 = *(int *)((this->CachedEndOfBranchIndicesRaw).AllocatorInstance.Data + lVar8 * 4);
  }
  return iVar5;
}

// GetChildrenInternal @ 1475d3120

int __thiscall
FReferenceSkeleton::GetChildrenInternal
          (FReferenceSkeleton *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FReferenceSkeleton *pFVar7;
  int local_28 [4];
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  iVar6 = (&this->RawRefBoneInfo)[((ulonglong)param_3 ^ 1) * 2].ArrayNum;
  local_28[0] = param_1 + 1;
  if (local_28[0] < iVar6) {
    pFVar7 = this;
    if (!param_3) {
      pFVar7 = (FReferenceSkeleton *)&this->FinalRefBoneInfo;
    }
    do {
      iVar5 = GetParentIndexInternal(this,local_28[0],&pFVar7->RawRefBoneInfo);
      if (iVar5 == param_1) {
        pFVar2 = (param_2->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)*piVar1 * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar5 + 1;
        *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_28[0];
      }
      local_28[0] = local_28[0] + 1;
    } while (local_28[0] < iVar6);
  }
  return param_2->ArrayNum;
}

// GetDataSize @ 1475d3e80

ulong64 __thiscall FReferenceSkeleton::GetDataSize(FReferenceSkeleton *this)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)&(this->RawNameToIndexMap).field_0x48;
  lVar2 = 0;
  lVar3 = lVar2;
  if (1 < uVar1) {
    lVar3 = (longlong)(int)uVar1 << 2;
  }
  uVar1 = *(uint *)&(this->FinalNameToIndexMap).field_0x48;
  if (1 < uVar1) {
    lVar2 = (longlong)(int)uVar1 << 2;
  }
  return (ulonglong)((*(int *)&(this->FinalNameToIndexMap).field_0x2c + 0x1fU >> 5) << 2) +
         (ulonglong)((*(int *)&(this->RawNameToIndexMap).field_0x2c + 0x1fU >> 5) << 2) +
         ((longlong)*(int *)&(this->FinalNameToIndexMap).field_0xc +
         (longlong)*(int *)&(this->RawNameToIndexMap).field_0xc) * 0x14 +
         ((longlong)(this->FinalRefBoneInfo).ArrayMax +
          ((longlong)(this->FinalRefBonePose).ArrayMax + (longlong)(this->RawRefBonePose).ArrayMax)
          * 8 + (longlong)(this->RawRefBoneInfo).ArrayMax) * 0xc + lVar2 + lVar3;
}

// GetDirectChildBones @ 1475d45c0

int __thiscall
FReferenceSkeleton::GetDirectChildBones
          (FReferenceSkeleton *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  
  iVar1 = GetChildrenInternal(this,param_1,param_2,false);
  return iVar1;
}

// GetRawBoneAbsoluteTransform @ 1475dc2a0

TTransform<double> * __thiscall
FReferenceSkeleton::GetRawBoneAbsoluteTransform
          (FReferenceSkeleton *this,TTransform<double> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TTransform<double> *pTVar4;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_18;
  
  if ((-1 < param_1) && (param_1 < (this->RawRefBoneInfo).ArrayNum)) {
    pTVar4 = (TTransform<double> *)(this->RawRefBonePose).AllocatorInstance.Data;
    iVar1 = (this->RawRefBonePose).ArrayNum;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TTransform<double> *)(*pcVar2)();
        return pTVar4;
      }
    }
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = iVar1;
    local_18.DataPtr = pTVar4;
    ::`anonymous_namespace'::ComposeSingleAbsoluteTransform
              (__return_storage_ptr__,param_1,this,&local_18);
    return __return_storage_ptr__;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6566475078224052940>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\ReferenceSkeleton.cpp"
                     ,0x2cc,"IsValidRawIndex(InRawBoneIndex)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TTransform<double> *)(*pcVar2)();
    return pTVar4;
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return __return_storage_ptr__;
}

// GetRawBoneAbsoluteTransforms @ 1475dc3c0

void __thiscall
FReferenceSkeleton::GetRawBoneAbsoluteTransforms
          (FReferenceSkeleton *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  TTransform<double> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_18;
  
  pTVar2 = (TTransform<double> *)(this->RawRefBonePose).AllocatorInstance.Data;
  iVar1 = (this->RawRefBonePose).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pTVar2;
  ::`anonymous_namespace'::ComposeAbsoluteTransforms(this,&local_18,param_1);
  return;
}

// GetRawChildrenIndicesCached @ 1475dc440

void __thiscall
FReferenceSkeleton::GetRawChildrenIndicesCached
          (FReferenceSkeleton *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int local_18 [4];
  
  iVar4 = GetCachedEndOfBranchIndex(this,param_1);
  local_18[0] = param_1;
  if (iVar4 != -1) {
    while (local_18[0] = local_18[0] + 1, local_18[0] <= iVar4) {
      iVar5 = GetParentIndexInternal(this,local_18[0],&this->FinalRefBoneInfo);
      if (iVar5 == param_1) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_18[0];
      }
    }
  }
  return;
}

// GetRawChildrenIndicesRecursiveCached @ 1475dc560

void __thiscall
FReferenceSkeleton::GetRawChildrenIndicesRecursiveCached
          (FReferenceSkeleton *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int local_18 [4];
  
  iVar4 = GetCachedEndOfBranchIndex(this,param_1);
  local_18[0] = param_1;
  if (iVar4 != -1) {
    while (local_18[0] = local_18[0] + 1, local_18[0] <= iVar4) {
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_18[0];
    }
  }
  return;
}

// GetRawDirectChildBones @ 1475dc660

int __thiscall
FReferenceSkeleton::GetRawDirectChildBones
          (FReferenceSkeleton *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  
  iVar1 = GetChildrenInternal(this,param_1,param_2,true);
  return iVar1;
}

// GetRawSourceBoneIndex @ 1475dc670

int __thiscall
FReferenceSkeleton::GetRawSourceBoneIndex
          (FReferenceSkeleton *this,USkeleton *param_1,FName *param_2)

{
  FScriptContainerElement *pFVar1;
  TTuple<FName,int> *pTVar2;
  int *piVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 local_res10 [8];
  
  iVar6 = (param_1->VirtualBones).ArrayNum;
  pFVar5 = (param_1->VirtualBones).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar6 * 0x18;
  while( true ) {
    if ((param_1->VirtualBones).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FVirtualBone_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    FVar4 = *param_2;
    if (pFVar5 == pFVar1) goto LAB_1475dc6d1;
    if (*(FName *)(pFVar5 + 0x10) == FVar4) break;
    pFVar5 = pFVar5 + 0x18;
  }
  FVar4 = *(FName *)(pFVar5 + 8);
LAB_1475dc6d1:
  iVar6 = -1;
  if (FVar4 != (FName)0x0) {
    pTVar2 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
             Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                   *)&this->FinalNameToIndexMap,FVar4);
    piVar3 = (int *)&pTVar2->field_0x8;
    if (pTVar2 == (TTuple<FName,int> *)0x0) {
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      iVar6 = *piVar3;
    }
  }
  return iVar6;
}

// RebuildNameToIndexMap @ 1475ec090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FReferenceSkeleton::RebuildNameToIndexMap(FReferenceSkeleton *this)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint local_res8 [4];
  FScriptContainerElement *local_28;
  uint *local_20;
  
  bVar6 = 1 < *(int *)&(this->RawNameToIndexMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)&this->RawNameToIndexMap);
  }
  puVar1 = &(this->RawNameToIndexMap).field_0xc;
  *(undefined4 *)&(this->RawNameToIndexMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)&this->RawNameToIndexMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->RawNameToIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RawNameToIndexMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->RawNameToIndexMap).field_0x2c;
  *(undefined4 *)&(this->RawNameToIndexMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->RawNameToIndexMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RawNameToIndexMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->RawNameToIndexMap).field_0x48 = 1;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)&this->RawNameToIndexMap);
  }
  iVar2 = (this->RawRefBoneInfo).ArrayNum;
  local_res8[0] = 0;
  if (0 < iVar2) {
    do {
      uVar5 = local_res8[0];
      uVar7 = 0;
      if ((int)local_res8[0] < (this->RawRefBoneInfo).ArrayNum) {
        uVar7 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->RawRefBoneInfo).AllocatorInstance.Data;
      if (*(longlong *)(pFVar3 + (longlong)(int)uVar5 * 0xc) == 0) {
        if (2 < (byte)LogAnimation._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
        }
      }
      else {
        local_20 = local_res8;
        local_28 = pFVar3 + (longlong)(int)uVar5 * 0xc;
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                  ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)&this->RawNameToIndexMap,
                   (TPairInitializer<FName_const_&,int_const_&> *)(local_res8 + 2),(bool *)&local_28
                  );
      }
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < iVar2);
  }
  return;
}

// RebuildRefSkeleton @ 1475ec230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FReferenceSkeleton::RebuildRefSkeleton(FReferenceSkeleton *this,USkeleton *param_1,bool param_2)

{
  TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FName *pFVar4;
  TTransform<double> *pTVar5;
  code *pcVar6;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> *pTVar7;
  undefined8 uVar8;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FVirtualBoneRefData,TSizedDefaultAllocator<32>_> *pTVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  TTuple<FName,int> *pTVar16;
  int *piVar17;
  ulong64 uVar18;
  FName FVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar23;
  ulonglong uVar24;
  FName *pFVar25;
  undefined1 auStackY_278 [32];
  undefined2 local_228;
  undefined1 local_226 [6];
  ForAnyElementType local_220;
  undefined8 local_218;
  ForAnyElementType local_210;
  undefined8 local_208;
  uint local_200;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> *local_1f8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1f0;
  int local_1e0;
  int iStack_1dc;
  int local_1d8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_1d0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_1c8;
  FName local_1b8;
  int local_1b0;
  undefined1 local_1ac [12];
  longlong local_1a0;
  FName *local_198;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *local_190;
  TArray<FVirtualBoneRefData,TSizedDefaultAllocator<32>_> *local_188;
  FString local_180;
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1ac._4_8_ = this;
  if (param_2) {
    RebuildNameToIndexMap(this);
  }
  uVar18 = 0;
  if (param_1 != (USkeleton *)0x0) {
    uVar18 = (ulong64)(uint)(param_1->VirtualBones).ArrayNum;
  }
  iVar12 = (this->RawRefBoneInfo).ArrayNum;
  pFVar3 = (this->RawRefBoneInfo).AllocatorInstance.Data;
  local_220.Data = (FScriptContainerElement *)0x0;
  local_218 = CONCAT44(local_218._4_4_,iVar12);
  iVar14 = (int)uVar18;
  if ((iVar12 == 0) && (iVar14 == 0)) {
    local_218 = 0;
  }
  else {
    uVar22 = iVar12 + iVar14;
    if ((int)uVar22 < iVar12) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar22,0,&local_220,iVar12,(int *)((longlong)&local_218 + 4));
    if (iVar12 != 0) {
      memcpy(local_220.Data,pFVar3,(longlong)iVar12 * 0xc);
    }
  }
  pTVar1 = &this->FinalRefBoneInfo;
  if (pTVar1 != (TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *)&local_220) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = local_220.Data;
    (this->FinalRefBoneInfo).ArrayNum = (int)local_218;
    (this->FinalRefBoneInfo).ArrayMax = local_218._4_4_;
    local_218 = 0;
    local_220.Data = (FScriptContainerElement *)0x0;
  }
  if (local_220.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data);
  }
  iVar12 = (this->RawRefBonePose).ArrayNum;
  pFVar3 = (this->RawRefBonePose).AllocatorInstance.Data;
  local_210.Data = (FScriptContainerElement *)0x0;
  local_208 = CONCAT44(local_208._4_4_,iVar12);
  if ((iVar12 == 0) && (iVar14 == 0)) {
    local_208 = 0;
  }
  else {
    uVar22 = iVar12 + iVar14;
    if ((int)uVar22 < iVar12) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar22,0,&local_210,iVar12,(int *)((longlong)&local_208 + 4));
    if (iVar12 != 0) {
      memcpy(local_210.Data,pFVar3,(longlong)iVar12 * 0x60);
    }
  }
  pTVar23 = &this->FinalRefBonePose;
  local_1d0 = pTVar23;
  if (pTVar23 != (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)&local_210) {
    pFVar3 = (pTVar23->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar23->AllocatorInstance).Data = local_210.Data;
    (this->FinalRefBonePose).ArrayNum = (int)local_208;
    (this->FinalRefBonePose).ArrayMax = local_208._4_4_;
    local_208 = 0;
    local_210.Data = (FScriptContainerElement *)0x0;
  }
  if (local_210.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data);
  }
  local_1f8 = (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
               *)&this->FinalNameToIndexMap;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::operator=
            (local_1f8,
             (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->RawNameToIndexMap);
  local_190 = &this->RequiredVirtualBones;
  if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar18);
  }
  (this->RequiredVirtualBones).ArrayNum = 0;
  if ((this->RequiredVirtualBones).ArrayMax < iVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar14,&local_190->AllocatorInstance,0,&(this->RequiredVirtualBones).ArrayMax);
  }
  local_188 = &this->UsedVirtualBoneData;
  (this->UsedVirtualBoneData).ArrayNum = 0;
  if ((this->UsedVirtualBoneData).ArrayMax < iVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar14,&local_188->AllocatorInstance,0,&(this->UsedVirtualBoneData).ArrayMax);
  }
  pTVar2 = &this->CachedEndOfBranchIndicesRaw;
  uVar22 = (this->RawRefBonePose).ArrayNum;
  uVar24 = (ulonglong)uVar22;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar24);
  }
  piVar17 = &(this->CachedEndOfBranchIndicesRaw).ArrayMax;
  (this->CachedEndOfBranchIndicesRaw).ArrayNum = 0;
  if (*piVar17 != uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar22,&pTVar2->AllocatorInstance,0,piVar17);
  }
  if (0 < (int)uVar22) {
    do {
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar3 < (FScriptContainerElement *)((longlong)&BRANCH_CACHE_INVALID_INDEX + 1U)) &&
          (&BRANCH_CACHE_INVALID_INDEX < pFVar3 + (longlong)*piVar17 * 4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = (this->CachedEndOfBranchIndicesRaw).ArrayNum;
      if (iVar12 == *piVar17) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,piVar17);
      }
      (this->CachedEndOfBranchIndicesRaw).ArrayNum = iVar12 + 1;
      *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 4) = 0xfffffffe;
      uVar24 = uVar24 - 1;
      pTVar23 = local_1d0;
    } while (uVar24 != 0);
  }
  uVar8 = local_1ac._4_8_;
  if (0 < iVar14) {
    iVar12 = ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             (local_1ac._4_8_ + 0x10))->ArrayNum;
    local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.ArrayNum = 0;
    local_1f0.ArrayMax = 0;
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar12,&local_1f0.AllocatorInstance,&local_1f0.ArrayNum,
                        &local_1f0.ArrayMax);
    memset(local_1f0.AllocatorInstance.Data + iVar13,0,(longlong)iVar12);
    if ((local_1f0.ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *local_1f0.AllocatorInstance.Data = (FScriptContainerElement)0x1;
    local_1c8.ArrayNum =
         ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(uVar8 + 0x10))->
         ArrayNum;
    lVar20 = (longlong)local_1c8.ArrayNum;
    pFVar3 = (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(uVar8 + 0x10))->
             AllocatorInstance).Data;
    local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_1c8.ArrayNum == 0) {
      local_1c8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,local_1c8.ArrayNum,0,&local_1c8.AllocatorInstance,local_1c8.ArrayNum,
                 &local_1c8.ArrayMax);
      memcpy(local_1c8.AllocatorInstance.Data,pFVar3,lVar20 * 0x60);
    }
    local_1d0 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(longlong)iVar14
    ;
    local_200 = 0;
    if (0 < iVar14) {
      local_1a0 = 0;
      do {
        lVar20 = local_1a0;
        uVar22 = 0;
        if ((int)local_200 < (param_1->VirtualBones).ArrayNum) {
          uVar22 = ~local_200 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar21 = (param_1->VirtualBones).AllocatorInstance.Data;
        pFVar25 = (FName *)(pFVar21 + lVar20);
        iVar12 = (param_1->VirtualBones).ArrayNum;
        pFVar3 = pFVar21 + (longlong)iVar12 * 0x18;
        while( true ) {
          if ((param_1->VirtualBones).ArrayNum != iVar12) {
            local_226[0] = 0;
            `TCheckedPointerIterator<FVirtualBone_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_226);
          }
          FVar19 = *pFVar25;
          if (pFVar21 == pFVar3) goto LAB_1475ec750;
          if (*(FName *)(pFVar21 + 0x10) == FVar19) break;
          pFVar21 = pFVar21 + 0x18;
        }
        FVar19 = *(FName *)(pFVar21 + 8);
LAB_1475ec750:
        iVar12 = -1;
        if (FVar19 != (FName)0x0) {
          pTVar16 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    ::Find(local_1f8,FVar19);
          piVar17 = (int *)&pTVar16->field_0x8;
          if (pTVar16 == (TTuple<FName,int> *)0x0) {
            piVar17 = (int *)0x0;
          }
          if (piVar17 != (int *)0x0) {
            iVar12 = *piVar17;
          }
        }
        iVar14 = -1;
        if (*pFVar25 != (FName)0x0) {
          pTVar16 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    ::Find(local_1f8,*pFVar25);
          piVar17 = (int *)&pTVar16->field_0x8;
          if (pTVar16 == (TTuple<FName,int> *)0x0) {
            piVar17 = (int *)0x0;
          }
          if (piVar17 != (int *)0x0) {
            iVar14 = *piVar17;
          }
        }
        iVar13 = -1;
        if (pFVar25[1] != (FName)0x0) {
          pTVar16 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    ::Find(local_1f8,pFVar25[1]);
          piVar17 = (int *)&pTVar16->field_0x8;
          if (pTVar16 == (TTuple<FName,int> *)0x0) {
            piVar17 = (int *)0x0;
          }
          if (piVar17 != (int *)0x0) {
            iVar13 = *piVar17;
          }
        }
        if ((iVar14 != -1) && (iVar13 != -1)) {
          pFVar25 = pFVar25 + 2;
          ::FName::ToString(pFVar25,&local_180);
          local_1b8 = *pFVar25;
          pFVar4 = (FName *)(pTVar1->AllocatorInstance).Data;
          local_1b0 = iVar14;
          if ((pFVar4 <= &local_1b8) &&
             ((&local_1b8 <
               (FName *)((longlong)pFVar4 + (longlong)(this->FinalRefBoneInfo).ArrayMax * 0xc) &&
              (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)))) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar14 = (this->FinalRefBoneInfo).ArrayNum;
          piVar17 = &(this->FinalRefBoneInfo).ArrayMax;
          if (iVar14 == *piVar17) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&pTVar1->AllocatorInstance,piVar17);
          }
          (this->FinalRefBoneInfo).ArrayNum = iVar14 + 1;
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          *(FName *)(pFVar3 + (longlong)iVar14 * 0xc) = local_1b8;
          *(int *)(pFVar3 + (longlong)iVar14 * 0xc + 8) = local_1b0;
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
          GetComponentSpaceTransform
                    (&local_a8,&local_1f0,&local_1c8,(FReferenceSkeleton *)local_1ac._4_8_,iVar13);
          GetComponentSpaceTransform
                    (&local_108,&local_1f0,&local_1c8,(FReferenceSkeleton *)local_1ac._4_8_,iVar12);
          UE::Math::TTransform<double>::GetRelativeTransform(&local_a8,&local_168,&local_108);
          pTVar5 = (TTransform<double> *)(pTVar23->AllocatorInstance).Data;
          if (((pTVar5 <= &local_168) && (&local_168 < pTVar5 + pTVar23->ArrayMax)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar14 = pTVar23->ArrayNum;
          if (iVar14 == pTVar23->ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&pTVar23->AllocatorInstance,&pTVar23->ArrayMax);
          }
          pTVar7 = local_1f8;
          pTVar23->ArrayNum = iVar14 + 1;
          pFVar3 = (pTVar23->AllocatorInstance).Data;
          lVar20 = (longlong)iVar14 * 0x60;
          *(double *)(pFVar3 + lVar20) = local_168.Rotation.XY.m128d_f64[0];
          *(double *)(pFVar3 + lVar20 + 8) = local_168.Rotation.XY.m128d_f64[1];
          *(double *)(pFVar3 + lVar20 + 0x10) = local_168.Rotation.ZW.m128d_f64[0];
          *(double *)(pFVar3 + lVar20 + 0x10 + 8) = local_168.Rotation.ZW.m128d_f64[1];
          *(double *)(pFVar3 + lVar20 + 0x20) = local_168.Translation.XY.m128d_f64[0];
          *(double *)(pFVar3 + lVar20 + 0x20 + 8) = local_168.Translation.XY.m128d_f64[1];
          *(double *)(pFVar3 + lVar20 + 0x30) = local_168.Translation.ZW.m128d_f64[0];
          *(double *)(pFVar3 + lVar20 + 0x30 + 8) = local_168.Translation.ZW.m128d_f64[1];
          *(double *)(pFVar3 + lVar20 + 0x40) = local_168.Scale3D.XY.m128d_f64[0];
          *(double *)(pFVar3 + lVar20 + 0x40 + 8) = local_168.Scale3D.XY.m128d_f64[1];
          *(double *)(pFVar3 + lVar20 + 0x50) = local_168.Scale3D.ZW.m128d_f64[0];
          *(double *)(pFVar3 + lVar20 + 0x50 + 8) = local_168.Scale3D.ZW.m128d_f64[1];
          local_198 = pFVar25;
          TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
          Emplace<TKeyInitializer<FName_const_&>_>
                    (local_1f8,(TKeyInitializer<FName_const_&> *)local_1ac,(bool *)&local_198);
          pTVar9 = local_190;
          local_228 = (undefined2)iVar14;
          *(int *)(*(longlong *)&pTVar7->Elements + 8 + (longlong)(int)local_1ac._0_4_ * 0x14) =
               iVar14;
          pFVar3 = (local_190->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_228) &&
              ((FScriptContainerElement *)&local_228 < pFVar3 + (longlong)local_190->ArrayMax * 2))
             && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar15 = pTVar9->ArrayNum;
          if (iVar15 == pTVar9->ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x202,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
          }
          pTVar10 = local_188;
          pTVar9->ArrayNum = iVar15 + 1;
          *(undefined2 *)((pTVar9->AllocatorInstance).Data + (longlong)iVar15 * 2) = local_228;
          pFVar3 = (local_188->AllocatorInstance).Data;
          local_1e0 = iVar14;
          iStack_1dc = iVar12;
          local_1d8 = iVar13;
          if (((pFVar3 <= (FScriptContainerElement *)&local_1e0) &&
              ((FScriptContainerElement *)&local_1e0 < pFVar3 + (longlong)local_188->ArrayMax * 0xc)
              ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar12 = pTVar10->ArrayNum;
          if (iVar12 == pTVar10->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
          }
          pTVar10->ArrayNum = iVar12 + 1;
          pFVar3 = (pTVar10->AllocatorInstance).Data;
          *(ulonglong *)(pFVar3 + (longlong)iVar12 * 0xc) = CONCAT44(iStack_1dc,local_1e0);
          *(int *)(pFVar3 + (longlong)iVar12 * 0xc + 8) = local_1d8;
        }
        local_200 = local_200 + 1;
        local_1a0 = local_1a0 + 0x18;
        local_1d0 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                    ((longlong)
                     &((TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *)(local_1d0 + -1))->
                      ArrayMax + 3);
      } while (local_1d0 != (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0)
      ;
      local_1d0 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0;
    }
    if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.AllocatorInstance.Data);
    }
    if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.AllocatorInstance.Data);
    }
  }
  if ((UE::Anim::GSkeletonRemappingRegistry == (FSkeletonRemappingRegistry *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("GSkeletonRemappingRegistry",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkeletonRemappingRegistry.cpp"
                          ,0x32,
                          L"Skeleton remapping registry is not instanced. It is only valid to access this while the engine module is loaded."
                         ), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UE::Anim::FSkeletonRemappingRegistry::RefreshMappings
            (UE::Anim::GSkeletonRemappingRegistry,param_1);
  return;
}

// Remove @ 1475f1fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FReferenceSkeleton::Remove(FReferenceSkeleton *this,FName param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  TTuple<FName,int> *pTVar19;
  TTransform<double> *pTVar20;
  ulonglong uVar21;
  int iVar22;
  FName *pFVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  uint *puVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  uint *puVar31;
  ForAnyElementType FVar32;
  FName local_res10 [2];
  undefined1 auStackY_338 [32];
  undefined1 local_2f7;
  undefined1 local_2f6;
  undefined1 local_2f5;
  FIdentityFunctor local_2f4 [4];
  uint local_2f0;
  uint local_2ec;
  TArray<int,TSizedDefaultAllocator<32>_> local_2e8;
  uint local_2d8;
  longlong local_2d0;
  FName local_2c8;
  longlong local_2c0;
  FScriptContainerElement *local_2b8;
  longlong local_2b0;
  FName local_2a8;
  FString local_2a0;
  TTransform<double> local_288;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_res10[0] = param_1;
  if (param_1 == (FName)0x0) {
LAB_1475f2b20:
    if (1 < (byte)LogAnimation._0_1_) {
      ::FName::ToString(local_res10,&local_2a0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
      }
    }
    return;
  }
  pTVar19 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
            Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)&this->RawNameToIndexMap,param_1);
  puVar31 = (uint *)0x0;
  puVar26 = (uint *)&pTVar19->field_0x8;
  if (pTVar19 == (TTuple<FName,int> *)0x0) {
    puVar26 = puVar31;
  }
  if (puVar26 == (uint *)0x0) goto LAB_1475f2b20;
  uVar17 = *puVar26;
  lVar27 = (longlong)(int)uVar17;
  local_2f0 = uVar17;
  if (uVar17 == 0xffffffff) goto LAB_1475f2b20;
  uVar29 = ~uVar17 >> 0x1f;
  uVar24 = 0;
  if ((int)uVar17 < (this->RawRefBoneInfo).ArrayNum) {
    uVar24 = uVar29;
  }
  local_2ec = uVar29;
  if ((uVar24 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar25 = (this->RawRefBoneInfo).AllocatorInstance.Data;
  local_2d8 = *(uint *)(pFVar25 + lVar27 * 0xc + 8);
  if (local_2d8 == 0xffffffff) {
    iVar22 = (this->RawRefBoneInfo).ArrayNum;
    pFVar2 = pFVar25 + (longlong)iVar22 * 0xc;
    local_2f0 = uVar17;
    while( true ) {
      if ((this->RawRefBoneInfo).ArrayNum != iVar22) {
        local_2f7 = 0;
        `TCheckedPointerIterator<FMeshBoneInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_2f7);
      }
      if (pFVar25 == pFVar2) break;
      if (*(int *)(pFVar25 + 8) == -1) {
        puVar31 = (uint *)((longlong)puVar31 + 1);
      }
      pFVar25 = pFVar25 + 0xc;
    }
    uVar29 = local_2ec;
    if ((int)puVar31 == 1) {
      if ((byte)LogAnimation._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      return;
    }
  }
  uVar24 = local_2d8;
  local_2e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e8.ArrayNum = 0;
  local_2e8.ArrayMax = 0;
  GetChildrenInternal(this,uVar17,&local_2e8,true);
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FReferenceSkeleton::Remove_::__l2::<lambda_2>_>_>
            ((int *)local_2e8.AllocatorInstance.Data,local_2e8.ArrayNum,local_2f4[0],
             (<lambda_2> *)local_2f4);
  uVar30 = 0;
  if (param_2) {
    iVar22 = local_2e8.ArrayNum;
    uVar21 = (ulonglong)local_2e8.ArrayNum;
    pFVar25 = local_2e8.AllocatorInstance.Data + uVar21 * 4;
    FVar32.Data = local_2e8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar21 != iVar22) {
        local_2f6 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_2f6);
      }
      uVar17 = local_2f0;
      if (FVar32.Data == pFVar25) break;
      uVar17 = *(uint *)FVar32.Data;
      uVar29 = 0;
      if ((int)uVar17 < (this->RawRefBoneInfo).ArrayNum) {
        uVar29 = ~uVar17 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      Remove(this,*(FName *)((this->RawRefBoneInfo).AllocatorInstance.Data +
                            (longlong)(int)uVar17 * 0xc),param_2);
      uVar21 = local_2e8._8_8_ & 0xffffffff;
      FVar32.Data = FVar32.Data + 4;
    }
    lVar27 = (longlong)(int)local_2f0;
    iVar22 = (this->RawRefBoneInfo).ArrayNum;
    uVar29 = local_2f0 + 1;
    if ((int)uVar29 < iVar22) {
      lVar28 = (longlong)(int)uVar29 * 0xc;
      do {
        uVar24 = uVar30;
        if ((int)uVar29 < iVar22) {
          uVar24 = ~uVar29 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar25 = (this->RawRefBoneInfo).AllocatorInstance.Data;
        if ((int)uVar17 < *(int *)(pFVar25 + lVar28 + 8)) {
          *(int *)(pFVar25 + lVar28 + 8) = *(int *)(pFVar25 + lVar28 + 8) + -1;
        }
        pTVar19 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                          *)&this->RawNameToIndexMap,*(FName *)(pFVar25 + lVar28));
        if ((pTVar19 == (TTuple<FName,int> *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar16)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(int *)&pTVar19->field_0x8 = *(int *)&pTVar19->field_0x8 + -1;
        iVar22 = (this->RawRefBoneInfo).ArrayNum;
        uVar29 = uVar29 + 1;
        lVar28 = lVar28 + 0xc;
      } while ((int)uVar29 < iVar22);
    }
    uVar29 = local_2ec;
    uVar24 = uVar30;
    if ((int)(uVar17 + 1) <= (this->RawRefBonePose).ArrayNum) {
      uVar24 = local_2ec;
    }
    if ((uVar24 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar16)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->RawRefBonePose).AllocatorInstance.Data + lVar27 * 0x60;
    iVar22 = (this->RawRefBonePose).ArrayNum + ~uVar17;
    if (iVar22 != 0) {
      memmove(pFVar25,pFVar25 + 0x60,(longlong)iVar22 * 0x60);
    }
    piVar1 = &(this->RawRefBonePose).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,&(this->RawRefBonePose).AllocatorInstance,(this->RawRefBonePose).ArrayNum,
               &(this->RawRefBonePose).ArrayMax);
    if ((int)(uVar17 + 1) <= (this->RawRefBoneInfo).ArrayNum) {
      uVar30 = uVar29;
    }
    if ((uVar30 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar16)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->RawRefBoneInfo).AllocatorInstance.Data + lVar27 * 0xc;
    iVar22 = (this->RawRefBoneInfo).ArrayNum + ~uVar17;
    if (iVar22 != 0) {
      memmove(pFVar25,pFVar25 + 0xc,(longlong)iVar22 * 0xc);
    }
    iVar22 = (this->RawRefBoneInfo).ArrayNum + -1;
    (this->RawRefBoneInfo).ArrayNum = iVar22;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,(ForAnyElementType *)this,iVar22,&(this->RawRefBoneInfo).ArrayMax);
    local_2c8 = local_res10[0];
    if (*(int *)&(this->RawNameToIndexMap).field_0x8 ==
        *(int *)&(this->RawNameToIndexMap).field_0x34) goto LAB_1475f2b08;
    uVar29 = local_res10[0].Number;
    uVar17 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
    pFVar23 = &local_2c8;
  }
  else {
    local_288.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_288.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_288.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_288.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_288.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_288.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    if (-1 < (int)uVar24) {
      lVar28 = (longlong)(int)uVar24 * 0x60;
      do {
        uVar18 = uVar30;
        if ((int)uVar24 < (this->RawRefBonePose).ArrayNum) {
          uVar18 = ~uVar24 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_228.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_228.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_228.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_228.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_228.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_228.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_228.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_228.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_228.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_228.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_228.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_228.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_228.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_228.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_228.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_228.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_228.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_228.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_228,&local_288,
                   (TTransform<double> *)((this->RawRefBonePose).AllocatorInstance.Data + lVar28));
        uVar24 = uVar24 - 1;
        local_288.Rotation.XY.m128d_f64[0] = local_228.Rotation.XY.m128d_f64[0];
        local_288.Rotation.XY.m128d_f64[1] = local_228.Rotation.XY.m128d_f64[1];
        lVar28 = lVar28 + -0x60;
        local_288.Rotation.ZW.m128d_f64[0] = local_228.Rotation.ZW.m128d_f64[0];
        local_288.Rotation.ZW.m128d_f64[1] = local_228.Rotation.ZW.m128d_f64[1];
        local_288.Translation.XY.m128d_f64[0] = local_228.Translation.XY.m128d_f64[0];
        local_288.Translation.XY.m128d_f64[1] = local_228.Translation.XY.m128d_f64[1];
        local_288.Translation.ZW.m128d_f64[0] = local_228.Translation.ZW.m128d_f64[0];
        local_288.Translation.ZW.m128d_f64[1] = local_228.Translation.ZW.m128d_f64[1];
        local_288.Scale3D.XY.m128d_f64[0] = local_228.Scale3D.XY.m128d_f64[0];
        local_288.Scale3D.XY.m128d_f64[1] = local_228.Scale3D.XY.m128d_f64[1];
        local_288.Scale3D.ZW.m128d_f64[0] = local_228.Scale3D.ZW.m128d_f64[0];
        local_288.Scale3D.ZW.m128d_f64[1] = local_228.Scale3D.ZW.m128d_f64[1];
      } while (uVar24 < 0x80000000);
    }
    uVar24 = uVar30;
    if ((int)uVar17 < (this->RawRefBonePose).ArrayNum) {
      uVar24 = uVar29;
    }
    if ((uVar24 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_2b0 = lVar27 * 0x60;
    local_1c8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_1c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_1c8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_1c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_1c8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_1c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_1c8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_1c8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_1c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_1c8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_1c8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_1c8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_2d0 = lVar27;
    UE::Math::TTransform<double>::Multiply
              (&local_1c8,
               (TTransform<double> *)((this->RawRefBonePose).AllocatorInstance.Data + local_2b0),
               &local_288);
    iVar22 = local_2e8.ArrayNum;
    uVar21 = (ulonglong)local_2e8.ArrayNum;
    local_2b8 = local_2e8.AllocatorInstance.Data + uVar21 * 4;
    FVar32.Data = local_2e8.AllocatorInstance.Data;
    while( true ) {
      pFVar25 = local_2b8;
      if ((int)uVar21 != iVar22) {
        local_2f5 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_2f5);
      }
      uVar17 = local_2f0;
      if (FVar32.Data == pFVar25) break;
      uVar17 = *(uint *)FVar32.Data;
      uVar29 = uVar30;
      if ((int)uVar17 < (this->RawRefBonePose).ArrayNum) {
        uVar29 = ~uVar17 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_2c0 = (longlong)(int)uVar17 * 0x60;
      local_168.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_168.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_168.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_168.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_168.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_168.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_168.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_168.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_168.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_168.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_168.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_168.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_168,
                 (TTransform<double> *)((this->RawRefBonePose).AllocatorInstance.Data + local_2c0),
                 &local_1c8);
      pTVar20 = UE::Math::TTransform<double>::GetRelativeTransform(&local_168,&local_108,&local_288)
      ;
      dVar4 = (pTVar20->Rotation).XY.m128d_f64[0];
      dVar5 = (pTVar20->Rotation).XY.m128d_f64[1];
      dVar6 = (pTVar20->Rotation).ZW.m128d_f64[0];
      dVar7 = (pTVar20->Rotation).ZW.m128d_f64[1];
      dVar8 = (pTVar20->Translation).XY.m128d_f64[0];
      dVar9 = (pTVar20->Translation).XY.m128d_f64[1];
      dVar10 = (pTVar20->Translation).ZW.m128d_f64[0];
      dVar11 = (pTVar20->Translation).ZW.m128d_f64[1];
      dVar12 = (pTVar20->Scale3D).XY.m128d_f64[0];
      dVar13 = (pTVar20->Scale3D).XY.m128d_f64[1];
      dVar14 = (pTVar20->Scale3D).ZW.m128d_f64[0];
      dVar15 = (pTVar20->Scale3D).ZW.m128d_f64[1];
      uVar29 = uVar30;
      if ((int)uVar17 < (this->RawRefBonePose).ArrayNum) {
        uVar29 = ~uVar17 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar32.Data = FVar32.Data + 4;
      pFVar25 = (this->RawRefBonePose).AllocatorInstance.Data;
      *(double *)(pFVar25 + local_2c0) = dVar4;
      *(double *)(pFVar25 + local_2c0 + 8) = dVar5;
      *(double *)(pFVar25 + local_2c0 + 0x10) = dVar6;
      *(double *)(pFVar25 + local_2c0 + 0x10 + 8) = dVar7;
      *(double *)(pFVar25 + local_2c0 + 0x20) = dVar8;
      *(double *)(pFVar25 + local_2c0 + 0x20 + 8) = dVar9;
      *(double *)(pFVar25 + local_2c0 + 0x30) = dVar10;
      *(double *)(pFVar25 + local_2c0 + 0x30 + 8) = dVar11;
      *(double *)(pFVar25 + local_2c0 + 0x40) = dVar12;
      *(double *)(pFVar25 + local_2c0 + 0x40 + 8) = dVar13;
      *(double *)(pFVar25 + local_2c0 + 0x50) = dVar14;
      *(double *)(pFVar25 + local_2c0 + 0x50 + 8) = dVar15;
      uVar21 = local_2e8._8_8_ & 0xffffffff;
    }
    iVar22 = (this->RawRefBoneInfo).ArrayNum;
    uVar29 = local_2f0 + 1;
    if ((int)uVar29 < iVar22) {
      lVar27 = (longlong)(int)uVar29 * 0xc;
      do {
        uVar24 = uVar30;
        if ((int)uVar29 < iVar22) {
          uVar24 = ~uVar29 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar23 = (FName *)((this->RawRefBoneInfo).AllocatorInstance.Data + lVar27);
        uVar24 = pFVar23[1].ComparisonIndex.Value;
        if ((int)uVar17 < (int)uVar24) {
          uVar18 = uVar24 - 1;
LAB_1475f2944:
          pFVar23[1].ComparisonIndex.Value = uVar18;
        }
        else {
          uVar18 = local_2d8;
          if (uVar24 == uVar17) goto LAB_1475f2944;
        }
        pTVar19 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                          *)&this->RawNameToIndexMap,*pFVar23);
        if ((pTVar19 == (TTuple<FName,int> *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar16)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(int *)&pTVar19->field_0x8 = *(int *)&pTVar19->field_0x8 + -1;
        iVar22 = (this->RawRefBoneInfo).ArrayNum;
        uVar29 = uVar29 + 1;
        lVar27 = lVar27 + 0xc;
      } while ((int)uVar29 < iVar22);
    }
    lVar27 = local_2d0;
    uVar29 = local_2ec;
    uVar24 = uVar30;
    if ((int)(uVar17 + 1) <= (this->RawRefBonePose).ArrayNum) {
      uVar24 = local_2ec;
    }
    if ((uVar24 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar16)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->RawRefBonePose).AllocatorInstance.Data + local_2b0;
    iVar22 = (this->RawRefBonePose).ArrayNum + ~uVar17;
    if (iVar22 != 0) {
      memmove(pFVar25,pFVar25 + 0x60,(longlong)iVar22 * 0x60);
    }
    iVar22 = (this->RawRefBonePose).ArrayNum + -1;
    (this->RawRefBonePose).ArrayNum = iVar22;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,&(this->RawRefBonePose).AllocatorInstance,iVar22,
               &(this->RawRefBonePose).ArrayMax);
    if ((int)(uVar17 + 1) <= (this->RawRefBoneInfo).ArrayNum) {
      uVar30 = uVar29;
    }
    if ((uVar30 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar16)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->RawRefBoneInfo).AllocatorInstance.Data + lVar27 * 0xc;
    iVar22 = (this->RawRefBoneInfo).ArrayNum + ~uVar17;
    if (iVar22 != 0) {
      memmove(pFVar25,pFVar25 + 0xc,(longlong)iVar22 * 0xc);
    }
    iVar22 = (this->RawRefBoneInfo).ArrayNum + -1;
    (this->RawRefBoneInfo).ArrayNum = iVar22;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,(ForAnyElementType *)this,iVar22,&(this->RawRefBoneInfo).ArrayMax);
    local_2a8 = local_res10[0];
    if (*(int *)&(this->RawNameToIndexMap).field_0x8 ==
        *(int *)&(this->RawNameToIndexMap).field_0x34) goto LAB_1475f2b08;
    uVar29 = local_res10[0].Number;
    uVar17 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
    pFVar23 = &local_2a8;
  }
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  RemoveImpl<FName>((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                     *)&this->RawNameToIndexMap,uVar29 + uVar17,pFVar23);
LAB_1475f2b08:
  if (local_2e8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_2e8.AllocatorInstance.Data);
  return;
}

// RemoveDuplicateBones @ 1475f39b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FReferenceSkeleton::RemoveDuplicateBones
          (FReferenceSkeleton *this,UObject *param_1,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  TTuple<FName,int> *pTVar12;
  UClass *pUVar13;
  USkeleton *pUVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int *piVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStackY_168 [32];
  undefined2 local_118 [2];
  uint local_114;
  FName local_110;
  FString local_108;
  FString local_f8;
  undefined1 local_e8 [8];
  FName local_e0;
  USkeleton *local_d8;
  FName *local_d0;
  uint *local_c8;
  FName *local_c0;
  uint *local_b8;
  FString local_b0;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  iVar10 = (this->RawRefBoneInfo).ArrayNum;
  bVar9 = false;
  param_2->ArrayNum = 0;
  local_d8 = (USkeleton *)param_1;
  if (param_2->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  local_98.Elements._0_8_ = 0;
  local_114 = iVar10 - 1;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.HashSize = 0;
  if ((int)local_114 < 0) {
LAB_1475f3e4c:
    if (*(int *)&(this->RawNameToIndexMap).field_0x8 !=
        *(int *)&(this->RawNameToIndexMap).field_0x34) goto LAB_1475f4035;
  }
  else {
    do {
      uVar18 = (ulonglong)local_114;
      piVar20 = &param_2->ArrayMax;
      if (((this->FinalRefBoneInfo).ArrayNum <= (int)local_114) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_110 = *(FName *)((this->FinalRefBoneInfo).AllocatorInstance.Data + uVar18 * 0xc);
      pTVar12 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                ::Find(&local_98,local_110);
      if ((pTVar12 == (TTuple<FName,int> *)0x0) || (&pTVar12->field_0x8 == (undefined1 *)0x0)) {
        local_c0 = &local_110;
        local_b8 = &local_114;
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                  (&local_98,(TPairInitializer<FName_const_&,int_const_&> *)(local_e8 + 4),
                   (bool *)&local_c0);
      }
      else {
        pFVar15 = (param_2->AllocatorInstance).Data;
        uVar17 = *(uint *)&pTVar12->field_0x8;
        local_118[0] = (undefined2)uVar17;
        if (((pFVar15 <= (FScriptContainerElement *)local_118) &&
            ((FScriptContainerElement *)local_118 < pFVar15 + (longlong)*piVar20 * 2)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar10 = param_2->ArrayNum;
        if (iVar10 == *piVar20) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&param_2->AllocatorInstance,piVar20);
        }
        param_2->ArrayNum = iVar10 + 1;
        *(undefined2 *)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 2) = local_118[0];
        if (2 < (byte)LogAnimation._0_1_) {
          if ((USkeleton *)param_1 == (USkeleton *)0x0) {
            ::FString::FString(&local_108,L"None");
          }
          else {
            local_e0 = (FName)((USkeleton *)param_1)->_padding_;
            ::FName::ToString(&local_e0,&local_108);
          }
          ::FName::ToString(&local_110,&local_b0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
        }
        uVar16 = 0;
        if ((int)(uVar17 + 1) <= (this->RawRefBonePose).ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar9)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar15 = (this->RawRefBonePose).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x60;
        iVar10 = ((this->RawRefBonePose).ArrayNum - uVar17) + -1;
        if (iVar10 != 0) {
          memmove(pFVar15,pFVar15 + 0x60,(longlong)iVar10 * 0x60);
        }
        piVar20 = &(this->RawRefBonePose).ArrayNum;
        *piVar20 = *piVar20 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,&(this->RawRefBonePose).AllocatorInstance,
                   (this->RawRefBonePose).ArrayNum,&(this->RawRefBonePose).ArrayMax);
        uVar16 = 0;
        if ((int)(uVar17 + 1) <= (this->RawRefBoneInfo).ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar9)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar19 = (longlong)(int)uVar17 * 0xc;
        pFVar15 = (this->RawRefBoneInfo).AllocatorInstance.Data + lVar19;
        iVar10 = ((this->RawRefBoneInfo).ArrayNum - uVar17) + -1;
        if (iVar10 != 0) {
          memmove(pFVar15,pFVar15 + 0xc,(longlong)iVar10 * 0xc);
        }
        piVar20 = &(this->RawRefBoneInfo).ArrayNum;
        *piVar20 = *piVar20 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,(ForAnyElementType *)this,(this->RawRefBoneInfo).ArrayNum,
                   &(this->RawRefBoneInfo).ArrayMax);
        uVar16 = uVar17;
        if ((int)uVar17 < (this->RawRefBoneInfo).ArrayNum) {
          do {
            iVar10 = GetParentIndexInternal(this,uVar16,&this->FinalRefBoneInfo);
            if ((int)uVar17 <= iVar10) {
              uVar11 = 0;
              if ((int)uVar16 < (this->RawRefBoneInfo).ArrayNum) {
                uVar11 = ~uVar16 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pFVar15 = (this->RawRefBoneInfo).AllocatorInstance.Data + lVar19 + 8;
              *(int *)pFVar15 = *(int *)pFVar15 + -1;
            }
            uVar16 = uVar16 + 1;
            lVar19 = lVar19 + 0xc;
          } while ((int)uVar16 < (this->RawRefBoneInfo).ArrayNum);
        }
        local_d0 = &local_110;
        local_c8 = &local_114;
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                  (&local_98,(TPairInitializer<FName_const_&,int_const_&> *)local_e8,
                   (bool *)&local_d0);
        bVar9 = true;
        param_1 = (UObject *)local_d8;
      }
      local_114 = local_114 - 1;
    } while (-1 < (int)local_114);
    if (!bVar9) goto LAB_1475f3e4c;
  }
  if ((USkeleton *)param_1 == (USkeleton *)0x0) {
LAB_1475f3ec1:
    pUVar14 = (USkeleton *)0x0;
    if (2 < (byte)LogAnimation._0_1_) {
      if (((USkeleton *)param_1 == (USkeleton *)0x0) || (((USkeleton *)param_1)->_padding_ == 0)) {
        ::FString::FString(&local_f8,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_f8,(UObject *)0x0,None)
        ;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pUVar13 = USkeleton::StaticClass();
    iVar10 = (int)pUVar13->_padding_;
    if ((*(int *)(((USkeleton *)param_1)->_padding_ + 0x38) < iVar10) ||
       (pUVar14 = (USkeleton *)param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(((USkeleton *)param_1)->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
       &pUVar13->_padding_)) {
      if ((USkeleton *)param_1 != (USkeleton *)0x0) {
        pUVar13 = Z_Construct_UClass_USkeletalMesh_NoRegister();
        iVar10 = (int)pUVar13->_padding_;
        if ((iVar10 <= *(int *)(((USkeleton *)param_1)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(((USkeleton *)param_1)->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
            &pUVar13->_padding_)) {
          pUVar14 = (USkeleton *)(**(code **)(((USkeleton *)param_1)->_padding_ + 0x400))(param_1);
          goto LAB_1475f3f2f;
        }
      }
      goto LAB_1475f3ec1;
    }
  }
LAB_1475f3f2f:
  uVar17 = 0;
  if (0 < (this->RawRefBoneInfo).ArrayNum) {
    lVar19 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar17 < (this->RawRefBonePose).ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar15 = (this->RawRefBonePose).AllocatorInstance.Data;
      uVar17 = uVar17 + 1;
      dVar4 = *(double *)(pFVar15 + lVar19);
      dVar5 = *(double *)(pFVar15 + lVar19 + 8);
      dVar6 = *(double *)(pFVar15 + lVar19 + 0x10);
      dVar7 = *(double *)(pFVar15 + lVar19 + 0x10 + 8);
      auVar28._0_8_ = dVar6 * dVar6 + dVar4 * dVar4;
      auVar28._8_8_ = dVar7 * dVar7 + dVar5 * dVar5;
      auVar25._8_4_ = SUB84(auVar28._8_8_,0);
      auVar25._0_8_ = auVar28._0_8_;
      auVar25._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
      auVar26._0_8_ = auVar25._8_8_ + auVar28._0_8_;
      auVar26._8_8_ = auVar28._0_8_ + auVar28._8_8_;
      auVar29 = sqrtpd(auVar28,auVar26);
      uVar21 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar26._0_8_)
      ;
      uVar23 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar26._8_8_)
      ;
      uVar22 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar26._0_8_)
      ;
      uVar24 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar26._8_8_)
      ;
      auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar29);
      auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar29);
      auVar31._0_8_ = uVar21 & (ulonglong)(auVar30._0_8_ * *(double *)(pFVar15 + lVar19));
      uVar18 = uVar23 & (ulonglong)(auVar30._8_8_ * *(double *)(pFVar15 + lVar19 + 8));
      auVar31._8_4_ = (undefined4)uVar18;
      auVar31._12_4_ = (undefined4)(uVar18 >> 0x20);
      auVar27._0_8_ = uVar22 & (ulonglong)(auVar29._0_8_ * *(double *)(pFVar15 + lVar19 + 0x10));
      uVar18 = uVar24 & (ulonglong)(auVar29._8_8_ * *(double *)(pFVar15 + lVar19 + 0x10 + 8));
      auVar27._8_4_ = (undefined4)uVar18;
      auVar27._12_4_ = (undefined4)(uVar18 >> 0x20);
      auVar29._4_4_ =
           ~(uint)(uVar21 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar29._0_4_ = ~(uint)uVar21 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar29._8_4_ = ~(uint)uVar23 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar29._12_4_ =
           ~(uint)(uVar23 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      uVar16 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      uVar11 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      uVar2 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      uVar3 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(pFVar15 + lVar19) = auVar31 | auVar29;
      auVar30._4_4_ = ~(uint)(uVar22 >> 0x20) & uVar11;
      auVar30._0_4_ = ~(uint)uVar22 & uVar16;
      auVar30._8_4_ = ~(uint)uVar24 & uVar2;
      auVar30._12_4_ = ~(uint)(uVar24 >> 0x20) & uVar3;
      *(undefined1 (*) [16])(pFVar15 + lVar19 + 0x10) = auVar27 | auVar30;
      lVar19 = lVar19 + 0x60;
    } while ((int)uVar17 < (this->RawRefBoneInfo).ArrayNum);
  }
  RebuildRefSkeleton(this,pUVar14,true);
LAB_1475f4035:
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// Rename @ 1475f5280

void __thiscall FReferenceSkeleton::Rename(FReferenceSkeleton *this,FName param_1,FName param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  TTuple<FName,int> *pTVar5;
  uint *puVar6;
  FName local_res18;
  uint local_res20 [2];
  TPairInitializer<FName_const_&,int_const_&> local_48;
  FName *local_38;
  uint *local_30;
  
  uVar4 = 0xffffffff;
  local_res20[0] = 0xffffffff;
  local_res18 = param_2;
  if (param_1 != (FName)0x0) {
    pTVar5 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
             Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                   *)&this->RawNameToIndexMap,param_1);
    puVar6 = (uint *)&pTVar5->field_0x8;
    if (pTVar5 == (TTuple<FName,int> *)0x0) {
      puVar6 = (uint *)0x0;
    }
    local_res20[0] = 0xffffffff;
    if (puVar6 != (uint *)0x0) {
      local_res20[0] = *puVar6;
    }
  }
  if (((param_1 != local_res18) ||
      ((param_1.ComparisonIndex.Value.Value == local_res18.ComparisonIndex.Value.Value &&
       (param_1.Number == local_res18.Number)))) && (local_res18 != (FName)0x0)) {
    pTVar5 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
             Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                   *)&this->RawNameToIndexMap,local_res18);
    puVar6 = (uint *)&pTVar5->field_0x8;
    if (pTVar5 == (TTuple<FName,int> *)0x0) {
      puVar6 = (uint *)0x0;
    }
    if (puVar6 != (uint *)0x0) {
      uVar4 = *puVar6;
    }
  }
  uVar2 = local_res20[0];
  if ((local_res20[0] != 0xffffffff) && (uVar4 == 0xffffffff)) {
    uVar4 = 0;
    if ((int)local_res20[0] < (this->RawRefBoneInfo).ArrayNum) {
      uVar4 = ~local_res20[0] >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(FName *)((this->RawRefBoneInfo).AllocatorInstance.Data + (longlong)(int)uVar2 * 0xc) =
         local_res18;
    local_48.Value = (int *)param_1;
    if (*(int *)&(this->RawNameToIndexMap).field_0x8 !=
        *(int *)&(this->RawNameToIndexMap).field_0x34) {
      uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      RemoveImpl<FName>((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                         *)&this->RawNameToIndexMap,param_1.Number + uVar4,(FName *)&local_48.Value)
      ;
    }
    local_38 = &local_res18;
    local_30 = local_res20;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,int_const_&>_>
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)&this->RawNameToIndexMap,&local_48,(bool *)&local_38);
  }
  return;
}

// SetParent @ 1475fc510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FReferenceSkeleton::SetParent(FReferenceSkeleton *this,FName param_1,FName param_2)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  undefined8 uVar2;
  void *pvVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  TTuple<FName,int> *pTVar14;
  ulonglong uVar15;
  uint *puVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  int *piVar19;
  ulonglong uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  TTransform<double> *pTVar26;
  ulonglong uVar27;
  ForElementType<unsigned_int> FVar28;
  uint uVar29;
  ulonglong uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  FName local_res10;
  FName local_res18;
  undefined1 auStackY_268 [32];
  ForAnyElementType local_218;
  undefined8 local_210;
  undefined1 local_208 [24];
  undefined1 local_1f0 [16];
  FHierarchy local_1e0;
  uint local_1c0;
  uint uStack_1bc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1b8;
  undefined4 local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  FReferenceSkeleton *local_1a0;
  FReferenceSkeleton *local_198;
  undefined4 local_190;
  int local_18c;
  TPairInitializer<FName_const_&,int_const_&> local_188;
  FScriptContainerElement *local_178;
  longlong *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_168;
  FScriptContainerElement *local_148;
  undefined1 *local_140;
  FString local_138;
  FString local_128;
  FString local_118;
  undefined1 local_108 [8];
  ForAnyElementType local_100;
  TBitArray<FDefaultBitArrayAllocator> local_f8;
  int local_d8;
  int local_d4;
  FScriptContainerElement local_d0 [8];
  ForAnyElementType local_c8;
  uint local_c0;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if (param_1 == param_2) {
    return -1;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  local_198 = this;
  if (param_1 != (FName)0x0) {
    pTVar14 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                      *)&this->RawNameToIndexMap,param_1);
    puVar16 = (uint *)&pTVar14->field_0x8;
    if (pTVar14 == (TTuple<FName,int> *)0x0) {
      puVar16 = (uint *)0x0;
    }
    if (puVar16 != (uint *)0x0) {
      uVar21 = *puVar16;
      if (uVar21 != 0xffffffff) {
        uVar29 = 0xffffffff;
        if (local_res18 != (FName)0x0) {
          pTVar14 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                            *)&this->RawNameToIndexMap,local_res18);
          puVar16 = (uint *)&pTVar14->field_0x8;
          if (pTVar14 == (TTuple<FName,int> *)0x0) {
            puVar16 = (uint *)0x0;
          }
          if (((puVar16 == (uint *)0x0) || (uVar29 = *puVar16, uVar29 == 0xffffffff)) &&
             (local_res18 != (FName)0x0)) {
            if ((byte)LogAnimation._0_1_ < 2) {
              return -1;
            }
            ::FName::ToString(&local_res18,&local_138);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
            goto LAB_1475fd2d8;
          }
        }
        uVar11 = 0;
        if ((int)uVar21 < (this->RawRefBoneInfo).ArrayNum) {
          uVar11 = ~uVar21 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          iVar10 = (*pcVar4)();
          return iVar10;
        }
        if (*(uint *)((this->RawRefBoneInfo).AllocatorInstance.Data +
                     (longlong)(int)uVar21 * 0xc + 8) == uVar29) {
          return -1;
        }
        local_1a0 = this;
        uVar11 = `FReferenceSkeleton::SetParent'::__l2::<lambda_1>::operator()(&local_1a0,uVar29);
        if (-1 < (int)uVar11) {
          do {
            if (uVar11 == uVar21) {
              if ((byte)LogAnimation._0_1_ < 2) {
                return -1;
              }
              ::FName::ToString(&local_res10,&local_128);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
              local_138.Data.AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
              goto LAB_1475fd2d8;
            }
            if (((int)uVar11 < 0) || ((this->RawRefBoneInfo).ArrayNum <= (int)uVar11)) break;
            if (((int)uVar11 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              iVar10 = (*pcVar4)();
              return iVar10;
            }
            uVar11 = *(uint *)((this->RawRefBoneInfo).AllocatorInstance.Data +
                              (longlong)(int)uVar11 * 0xc + 8);
          } while (uVar11 < 0x80000000);
        }
        FReferenceSkeletonLocals::FHierarchy::FHierarchy(&local_1e0,this);
        FReferenceSkeletonLocals::FHierarchy::SetParent(&local_1e0,uVar21,uVar29);
        uVar23 = 0;
        local_1f0._0_8_ = (FScriptContainerElement *)0x0;
        local_1f0._8_8_ = (FScriptContainerElement *)0x0;
        FReferenceSkeletonLocals::FHierarchy::GetNewToOldIndexes
                  (&local_1e0,(TArray<int,TSizedDefaultAllocator<32>_> *)local_1f0);
        if ((local_1f0._8_4_ != (this->RawRefBoneInfo).ArrayNum) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewToOldIndexes.Num() == Infos.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\ReferenceSkeleton.cpp"
                               ,0x1a2,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          iVar10 = (*pcVar4)();
          return iVar10;
        }
        iVar10 = local_1e0.Elements.ArrayNum;
        local_208._20_4_ = local_1e0.Elements.ArrayNum;
        local_208._0_8_ = (FScriptContainerElement *)0x0;
        local_208._8_4_ = 0;
        local_208._12_4_ = 0;
        if (local_1e0.Elements.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_1e0.Elements.ArrayNum);
        }
        if (local_1e0.Elements.ArrayNum < 1) {
          local_218.Data = (FScriptContainerElement *)0x0;
          local_210 = 0;
        }
        else {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,local_1e0.Elements.ArrayNum,(ForAnyElementType *)local_208,0,
                     (int *)(local_208 + 0xc));
          local_218.Data = (FScriptContainerElement *)0x0;
          local_210 = 0;
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,iVar10,&local_218,0,(int *)((longlong)&local_210 + 4));
        }
        local_108 = (undefined1  [8])0x0;
        local_100.Data = (FScriptContainerElement *)0x0;
        local_f8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_f8.NumBits = 0;
        local_f8.MaxBits = 0x80;
        local_d8 = -1;
        local_d4 = 0;
        local_c8.Data = (FScriptContainerElement *)0x0;
        local_c0 = 0;
        uVar21 = 0;
        if (iVar10 == 0) goto LAB_1475fcabc;
        TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_108,iVar10);
        uVar21 = 1;
        if (3 < (uint)iVar10) {
          uVar20 = (ulonglong)(((uint)iVar10 >> 1) + 7) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_190 = (undefined4)lVar18;
          uVar21 = 1 << ((byte)lVar18 & 0x1f);
        }
        if ((local_c0 == 0) || ((int)local_c0 < (int)uVar21)) {
          local_c0 = uVar21;
          if (local_c8.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,4);
          }
          if (uVar21 != 0) {
            uVar29 = uVar21;
            if (uVar21 < 2) {
              if (local_c8.Data != (FScriptContainerElement *)0x0) {
                uVar29 = 0;
                goto LAB_1475fc8f3;
              }
            }
            else {
LAB_1475fc8f3:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_c8,0,uVar29,4);
            }
            if (0 < (int)uVar21) {
              uVar27 = (ulonglong)uVar21;
              uVar20 = uVar23;
              do {
                FVar17.Data = local_d0;
                if (local_c8.Data != (FScriptContainerElement *)0x0) {
                  FVar17.Data = local_c8.Data;
                }
                uVar15 = uVar20 & (longlong)(int)uVar21 - 1U;
                uVar20 = uVar20 + 1;
                *(undefined4 *)(FVar17.Data + uVar15 * 4) = 0xffffffff;
                uVar27 = uVar27 - 1;
              } while (uVar27 != 0);
            }
          }
          if (local_c0 != 0) {
            pTStack_1b8 = &local_f8;
            local_1c0 = 0;
            uStack_1bc = 1;
            uStack_1ac = 0;
            uStack_1a8 = 0;
            uVar20 = uVar23;
            if (local_f8.NumBits != 0) {
              FVar28 = (ForElementType<unsigned_int>)&local_f8;
              if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FVar28 = local_f8.AllocatorInstance.SecondaryData;
              }
              uVar21 = *(uint *)FVar28;
              uVar27 = uVar23;
              while (uVar21 == 0) {
                uStack_1a8 = (int)uVar27 + 0x20;
                uVar27 = (ulonglong)uStack_1a8;
                iVar13 = (int)uVar20;
                local_1c0 = iVar13 + 1;
                uVar20 = (ulonglong)local_1c0;
                if ((int)((local_f8.NumBits - 1U) + ((int)(local_f8.NumBits - 1U) >> 0x1f & 0x1fU))
                    >> 5 < (int)local_1c0) goto LAB_1475fc9fb;
                uVar21 = *(uint *)((uchar *)((longlong)FVar28 + 4) + (longlong)iVar13 * 4);
              }
              uStack_1bc = -uVar21 & uVar21;
              uVar20 = (ulonglong)uStack_1bc * 2 + 1;
              lVar18 = 0x3f;
              if (uVar20 != 0) {
                for (; uVar20 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              local_18c = (int)lVar18;
              uStack_1ac = local_18c + -1 + uStack_1a8;
              uVar20 = (ulonglong)uStack_1ac;
              if (local_f8.NumBits < (int)uStack_1ac) {
LAB_1475fc9fb:
                uVar20 = local_f8._24_8_ & 0xffffffff;
                uStack_1ac = local_f8.NumBits;
              }
            }
            local_1b0 = 0xffffffff;
            local_170 = (longlong *)local_108;
            local_168._padding_ = CONCAT44(uStack_1bc,local_1c0);
            local_168.CurrentBitIndex = uStack_1ac;
            local_168.UnvisitedBitMask = 0xffffffff;
            local_168._28_4_ = uStack_1a4;
            local_168.BaseBitIndex = uStack_1a8;
            uVar21 = local_f8.NumBits;
            local_168.Array = pTStack_1b8;
            if (local_f8.NumBits <= (int)uVar20) goto LAB_1475fcabc;
            do {
              iVar13 = (int)uVar20;
              uVar2 = *(undefined8 *)(*local_170 + (longlong)iVar13 * 0x14);
              lVar18 = *local_170 + (longlong)iVar13 * 0x14;
              uVar21 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
              uVar21 = local_c0 - 1 & uVar21 + (int)((ulonglong)uVar2 >> 0x20);
              *(uint *)(lVar18 + 0x10) = uVar21;
              FVar17.Data = local_d0;
              if (local_c8.Data != (FScriptContainerElement *)0x0) {
                FVar17.Data = local_c8.Data;
              }
              uVar20 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar21;
              *(undefined4 *)(lVar18 + 0xc) = *(undefined4 *)(FVar17.Data + uVar20 * 4);
              *(int *)(FVar17.Data + uVar20 * 4) = iVar13;
              local_168.UnvisitedBitMask = local_168.UnvisitedBitMask & ~local_168._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_168);
              uVar20 = (ulonglong)(uint)local_168.CurrentBitIndex;
            } while (local_168.CurrentBitIndex < (local_168.Array)->NumBits);
          }
        }
        uVar21 = local_f8.NumBits;
LAB_1475fcabc:
        local_208._16_4_ = 0;
        if (0 < iVar10) {
          do {
            uVar11 = (uint)uVar23;
            uVar29 = 0;
            uVar21 = uVar29;
            if ((int)uVar11 < (int)local_1f0._8_4_) {
              uVar21 = ~uVar11 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              iVar10 = (*pcVar4)();
              return iVar10;
            }
            uVar21 = *(uint *)(local_1f0._0_8_ + (longlong)(int)uVar11 * 4);
            uVar24 = ~uVar21 >> 0x1f;
            uVar11 = uVar29;
            if ((int)uVar21 < local_1e0.Elements.ArrayNum) {
              uVar11 = uVar24;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              iVar10 = (*pcVar4)();
              return iVar10;
            }
            pFVar25 = local_1e0.Elements.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x20;
            uVar11 = *(uint *)&pFVar25->field_0x0;
            uVar12 = uVar29;
            if ((int)uVar11 < (this->RawRefBoneInfo).ArrayNum) {
              uVar12 = ~uVar11 >> 0x1f;
            }
            local_188.Value = (int *)pFVar25;
            if ((uVar12 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              iVar10 = (*pcVar4)();
              return iVar10;
            }
            pFVar22 = (this->RawRefBoneInfo).AllocatorInstance.Data + (longlong)(int)uVar11 * 0xc;
            if ((((ulonglong)local_208._0_8_ <= pFVar22) &&
                (pFVar22 < (FScriptContainerElement *)
                           (local_208._0_8_ + (longlong)(int)local_208._12_4_ * 0xc))) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar4 = (code *)swi(3);
              iVar10 = (*pcVar4)();
              return iVar10;
            }
            if (local_208._8_4_ == local_208._12_4_) {
              local_208._8_4_ =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,(ForAnyElementType *)local_208,(int *)(local_208 + 0xc));
            }
            lVar18 = (longlong)(int)local_208._8_4_;
            local_208._8_4_ = local_208._8_4_ + 1;
            *(undefined8 *)(local_208._0_8_ + lVar18 * 0xc) = *(undefined8 *)pFVar22;
            local_178 = (FScriptContainerElement *)(local_208._0_8_ + lVar18 * 0xc);
            *(undefined4 *)(local_178 + 8) = *(undefined4 *)(pFVar22 + 8);
            iVar10 = -1;
            if (*(int **)(pFVar25 + 8) != (int *)0x0) {
              if ((FScriptContainerElement *)local_1f0._0_8_ !=
                  (FScriptContainerElement *)(local_1f0._0_8_ + (longlong)(int)local_1f0._8_4_ * 4))
              {
                pFVar22 = (FScriptContainerElement *)local_1f0._0_8_;
                do {
                  if (**(int **)(pFVar25 + 8) == *(int *)pFVar22) {
                    iVar10 = (int)((longlong)pFVar22 - local_1f0._0_8_ >> 2);
                    goto LAB_1475fccd6;
                  }
                  pFVar22 = pFVar22 + 4;
                } while (pFVar22 !=
                         (FScriptContainerElement *)
                         (local_1f0._0_8_ + (longlong)(int)local_1f0._8_4_ * 4));
              }
              iVar10 = -1;
            }
LAB_1475fccd6:
            *(int *)(local_178 + 8) = iVar10;
            if ((int)uVar21 < local_1e0.Transforms.ArrayNum) {
              uVar29 = uVar24;
            }
            if ((uVar29 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              iVar10 = (*pcVar4)();
              return iVar10;
            }
            lVar18 = (longlong)(int)uVar21 * 0x60;
            pFVar25 = local_1e0.Transforms.AllocatorInstance.Data + lVar18;
            if (((local_218.Data <= pFVar25) &&
                (pFVar25 < local_218.Data + (longlong)local_210._4_4_ * 0x60)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar4 = (code *)swi(3);
              iVar10 = (*pcVar4)();
              return iVar10;
            }
            iVar13 = (int)local_210;
            if ((int)local_210 == local_210._4_4_) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x1060,&local_218,(int *)((longlong)&local_210 + 4));
            }
            local_210 = CONCAT44(local_210._4_4_,iVar13 + 1);
            dVar5 = *(double *)(pFVar25 + 8);
            pFVar22 = local_218.Data + (longlong)iVar13 * 0x60;
            *(double *)pFVar22 = *(double *)pFVar25;
            *(double *)(pFVar22 + 8) = dVar5;
            dVar5 = *(double *)(pFVar25 + 0x18);
            *(double *)(pFVar22 + 0x10) = *(double *)(pFVar25 + 0x10);
            *(double *)(pFVar22 + 0x18) = dVar5;
            dVar5 = *(double *)(pFVar25 + 0x28);
            *(double *)(pFVar22 + 0x20) = *(double *)(pFVar25 + 0x20);
            *(double *)(pFVar22 + 0x28) = dVar5;
            dVar5 = *(double *)(pFVar25 + 0x38);
            *(double *)(pFVar22 + 0x30) = *(double *)(pFVar25 + 0x30);
            *(double *)(pFVar22 + 0x38) = dVar5;
            dVar5 = *(double *)(pFVar25 + 0x48);
            *(double *)(pFVar22 + 0x40) = *(double *)(pFVar25 + 0x40);
            *(double *)(pFVar22 + 0x48) = dVar5;
            dVar5 = *(double *)(pFVar25 + 0x58);
            *(double *)(pFVar22 + 0x50) = *(double *)(pFVar25 + 0x50);
            *(double *)(pFVar22 + 0x58) = dVar5;
            if (iVar10 != -1) {
              iVar10 = local_1e0.Transforms.ArrayNum;
              uVar29 = 0;
              if ((int)uVar21 < iVar10) {
                uVar29 = uVar24;
              }
              if (uVar29 == 0) {
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar9) {
                  pcVar4 = (code *)swi(3);
                  iVar10 = (*pcVar4)();
                  return iVar10;
                }
                iVar10 = local_1e0.Transforms.ArrayNum;
              }
              pTVar26 = (TTransform<double> *)(local_1e0.Transforms.AllocatorInstance.Data + lVar18)
              ;
              uVar21 = **(uint **)((longlong)local_188.Value + 8);
              uVar29 = 0;
              if ((int)uVar21 < iVar10) {
                uVar29 = ~uVar21 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar4 = (code *)swi(3);
                iVar10 = (*pcVar4)();
                return iVar10;
              }
              pTVar26 = UE::Math::TTransform<double>::GetRelativeTransform
                                  (pTVar26,&local_b8,
                                   (TTransform<double> *)
                                   (local_1e0.Transforms.AllocatorInstance.Data +
                                   (longlong)(int)uVar21 * 0x60));
              dVar5 = (pTVar26->Rotation).XY.m128d_f64[1];
              *(double *)pFVar22 = (pTVar26->Rotation).XY.m128d_f64[0];
              *(double *)(pFVar22 + 8) = dVar5;
              dVar5 = (pTVar26->Rotation).ZW.m128d_f64[1];
              *(double *)(pFVar22 + 0x10) = (pTVar26->Rotation).ZW.m128d_f64[0];
              *(double *)(pFVar22 + 0x18) = dVar5;
              dVar5 = (pTVar26->Translation).XY.m128d_f64[1];
              *(double *)(pFVar22 + 0x20) = (pTVar26->Translation).XY.m128d_f64[0];
              *(double *)(pFVar22 + 0x28) = dVar5;
              dVar5 = (pTVar26->Translation).ZW.m128d_f64[1];
              *(double *)(pFVar22 + 0x30) = (pTVar26->Translation).ZW.m128d_f64[0];
              *(double *)(pFVar22 + 0x38) = dVar5;
              dVar5 = (pTVar26->Scale3D).XY.m128d_f64[1];
              *(double *)(pFVar22 + 0x40) = (pTVar26->Scale3D).XY.m128d_f64[0];
              *(double *)(pFVar22 + 0x48) = dVar5;
              dVar5 = (pTVar26->Scale3D).ZW.m128d_f64[1];
              *(double *)(pFVar22 + 0x50) = (pTVar26->Scale3D).ZW.m128d_f64[0];
              *(double *)(pFVar22 + 0x58) = dVar5;
              dVar5 = *(double *)pFVar22;
              dVar6 = *(double *)(pFVar22 + 8);
              dVar7 = *(double *)(pFVar22 + 0x10);
              dVar8 = *(double *)(pFVar22 + 0x18);
              auVar35._0_8_ = dVar7 * dVar7 + dVar5 * dVar5;
              auVar35._8_8_ = dVar8 * dVar8 + dVar6 * dVar6;
              auVar31._8_4_ = SUB84(auVar35._8_8_,0);
              auVar31._0_8_ = auVar35._0_8_;
              auVar31._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
              auVar32._0_8_ = auVar31._8_8_ + auVar35._0_8_;
              auVar32._8_8_ = auVar35._0_8_ + auVar35._8_8_;
              auVar36 = sqrtpd(auVar35,auVar32);
              uVar20 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                        auVar32._0_8_);
              uVar15 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                        auVar32._8_8_);
              uVar27 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                        auVar32._0_8_);
              uVar30 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                        auVar32._8_8_);
              auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                              auVar36);
              auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                              auVar36);
              auVar34._0_8_ = uVar27 & (ulonglong)(auVar33._0_8_ * dVar5);
              uVar23 = uVar30 & (ulonglong)(auVar33._8_8_ * dVar6);
              auVar34._8_4_ = (undefined4)uVar23;
              auVar34._12_4_ = (undefined4)(uVar23 >> 0x20);
              auVar37._0_8_ = uVar20 & (ulonglong)(auVar36._0_8_ * dVar7);
              uVar23 = uVar15 & (ulonglong)(auVar36._8_8_ * dVar8);
              auVar37._8_4_ = (undefined4)uVar23;
              auVar37._12_4_ = (undefined4)(uVar23 >> 0x20);
              auVar36._4_4_ =
                   ~(uint)(uVar27 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_
              ;
              auVar36._0_4_ =
                   ~(uint)uVar27 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
              auVar36._8_4_ =
                   ~(uint)uVar30 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
              auVar36._12_4_ =
                   ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
              ;
              auVar33._4_4_ =
                   ~(uint)(uVar20 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_
              ;
              auVar33._0_4_ =
                   ~(uint)uVar20 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
              auVar33._8_4_ =
                   ~(uint)uVar15 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
              auVar33._12_4_ =
                   ~(uint)(uVar15 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_
              ;
              *(undefined1 (*) [16])pFVar22 = auVar34 | auVar36;
              *(undefined1 (*) [16])(pFVar22 + 0x10) = auVar37 | auVar33;
            }
            local_148 = local_178;
            local_140 = local_208 + 0x10;
            TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                      ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                        *)local_108,&local_188,(bool *)&local_148);
            local_208._16_4_ = local_208._16_4_ + 1;
            uVar23 = (ulonglong)(uint)local_208._16_4_;
            this = local_198;
          } while ((int)local_208._16_4_ < (int)local_208._20_4_);
          uVar21 = local_f8.NumBits;
        }
        pTVar1 = &this->RawRefBonePose;
        if (pTVar1 != (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)&local_218
           ) {
          pFVar25 = (pTVar1->AllocatorInstance).Data;
          if (pFVar25 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar25);
            uVar21 = local_f8.NumBits;
          }
          (pTVar1->AllocatorInstance).Data = local_218.Data;
          (this->RawRefBonePose).ArrayNum = (int)local_210;
          (this->RawRefBonePose).ArrayMax = local_210._4_4_;
          local_210 = 0;
          local_218.Data = (FScriptContainerElement *)0x0;
        }
        if (this != (FReferenceSkeleton *)local_208) {
          pFVar25 = (this->RawRefBoneInfo).AllocatorInstance.Data;
          if (pFVar25 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar25);
            uVar21 = local_f8.NumBits;
          }
          (this->RawRefBoneInfo).AllocatorInstance.Data = (FScriptContainerElement *)local_208._0_8_
          ;
          (this->RawRefBoneInfo).ArrayNum = local_208._8_4_;
          (this->RawRefBoneInfo).ArrayMax = local_208._12_4_;
          local_208._8_4_ = 0;
          local_208._12_4_ = 0;
          local_208._0_8_ = (FScriptContainerElement *)0x0;
        }
        this_00 = &this->RawNameToIndexMap;
        if (this_00 !=
            (TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *)
            local_108) {
          if (*(void **)&this_00->field_0x0 != (void *)0x0) {
            FMemory::Free(*(void **)&this_00->field_0x0);
            uVar21 = local_f8.NumBits;
          }
          *(undefined1 (*) [8])&this_00->field_0x0 = local_108;
          *(int *)&(this->RawNameToIndexMap).field_0x8 = (int)local_100.Data;
          *(uint *)&(this->RawNameToIndexMap).field_0xc = local_100.Data._4_4_;
          local_108 = (undefined1  [8])0x0;
          local_100.Data = (FScriptContainerElement *)0x0;
          if ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RawNameToIndexMap).field_0x10 !=
              &local_f8) {
            if (local_f8.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
              (this->RawNameToIndexMap).field_0x10 = local_f8.AllocatorInstance.InlineData[0];
              (this->RawNameToIndexMap).field_0x11 = local_f8.AllocatorInstance.InlineData[1];
              (this->RawNameToIndexMap).field_0x12 = local_f8.AllocatorInstance.InlineData[2];
              (this->RawNameToIndexMap).field_0x13 = local_f8.AllocatorInstance.InlineData[3];
              (this->RawNameToIndexMap).field_0x14 = local_f8.AllocatorInstance.InlineData[4];
              (this->RawNameToIndexMap).field_0x15 = local_f8.AllocatorInstance.InlineData[5];
              (this->RawNameToIndexMap).field_0x16 = local_f8.AllocatorInstance.InlineData[6];
              (this->RawNameToIndexMap).field_0x17 = local_f8.AllocatorInstance.InlineData[7];
              (this->RawNameToIndexMap).field_0x18 = local_f8.AllocatorInstance.InlineData[8];
              (this->RawNameToIndexMap).field_0x19 = local_f8.AllocatorInstance.InlineData[9];
              (this->RawNameToIndexMap).field_0x1a = local_f8.AllocatorInstance.InlineData[10];
              (this->RawNameToIndexMap).field_0x1b = local_f8.AllocatorInstance.InlineData[0xb];
              (this->RawNameToIndexMap).field_0x1c = local_f8.AllocatorInstance.InlineData[0xc];
              (this->RawNameToIndexMap).field_0x1d = local_f8.AllocatorInstance.InlineData[0xd];
              (this->RawNameToIndexMap).field_0x1e = local_f8.AllocatorInstance.InlineData[0xe];
              (this->RawNameToIndexMap).field_0x1f = local_f8.AllocatorInstance.InlineData[0xf];
            }
            pvVar3 = *(void **)&(this->RawNameToIndexMap).field_0x20;
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
              uVar21 = local_f8.NumBits;
            }
            *(ForElementType<unsigned_int> *)&(this->RawNameToIndexMap).field_0x20 =
                 local_f8.AllocatorInstance.SecondaryData;
            *(int *)&(this->RawNameToIndexMap).field_0x2c = local_f8.MaxBits;
            local_f8.NumBits = 0;
            local_f8.MaxBits = 0;
            local_f8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
            *(uint *)&(this->RawNameToIndexMap).field_0x28 = uVar21;
          }
          *(int *)&(this->RawNameToIndexMap).field_0x30 = local_d8;
          *(int *)&(this->RawNameToIndexMap).field_0x34 = local_d4;
          local_d4 = 0;
          local_d8 = -1;
          if (local_c8.Data == (FScriptContainerElement *)0x0) {
            (this->RawNameToIndexMap).field_0x38 = local_d0[0];
            (this->RawNameToIndexMap).field_0x39 = local_d0[1];
            (this->RawNameToIndexMap).field_0x3a = local_d0[2];
            (this->RawNameToIndexMap).field_0x3b = local_d0[3];
          }
          pvVar3 = *(void **)&(this->RawNameToIndexMap).field_0x40;
          if (pvVar3 != (void *)0x0) {
            FMemory::Free(pvVar3);
          }
          *(FScriptContainerElement **)&(this->RawNameToIndexMap).field_0x40 = local_c8.Data;
          *(uint *)&(this->RawNameToIndexMap).field_0x48 = local_c0;
          local_c0 = 0;
          local_c8.Data = (FScriptContainerElement *)0x0;
        }
        pTVar14 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                          *)this_00,local_res10);
        piVar19 = (int *)&pTVar14->field_0x8;
        if (pTVar14 == (TTuple<FName,int> *)0x0) {
          piVar19 = (int *)0x0;
        }
        iVar10 = *piVar19;
        local_c0 = 0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data);
        }
        bVar9 = local_100.Data._4_4_ != 0;
        local_100.Data = (FScriptContainerElement *)((ulonglong)local_100.Data._4_4_ << 0x20);
        if (bVar9) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,0,(ForAnyElementType *)local_108,0,
                     (int *)((longlong)&local_100.Data + 4));
        }
        iVar13 = local_f8.MaxBits;
        local_d8 = -1;
        local_d4 = 0;
        local_f8._24_8_ = (ulonglong)(uint)local_f8.MaxBits << 0x20;
        if (0x80 < (uint)iVar13) {
          local_f8.NumBits = 0;
          local_f8.MaxBits = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_f8,0);
        }
        if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_f8.AllocatorInstance.SecondaryData);
        }
        if (local_108 != (undefined1  [8])0x0) {
          FMemory::Free((void *)local_108);
        }
        if (local_218.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data);
        }
        if ((FScriptContainerElement *)local_208._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_208._0_8_);
        }
        if ((FScriptContainerElement *)local_1f0._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1f0._0_8_);
        }
        if (local_1e0.Transforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Transforms.AllocatorInstance.Data);
        }
        DestructItems<FReferenceSkeletonLocals::FElement,int>
                  ((FElement *)local_1e0.Elements.AllocatorInstance.Data,local_1e0.Elements.ArrayNum
                  );
        if ((FElement *)local_1e0.Elements.AllocatorInstance.Data != (FElement *)0x0) {
          FMemory::Free(local_1e0.Elements.AllocatorInstance.Data);
          return iVar10;
        }
        return iVar10;
      }
    }
  }
  if ((byte)LogAnimation._0_1_ < 2) {
    return -1;
  }
  ::FName::ToString(&local_res10,&local_118);
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  local_138.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
LAB_1475fd2d8:
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  return -1;
}

// operator= @ 148626960

FReferenceSkeleton * __thiscall
FReferenceSkeleton::operator=(FReferenceSkeleton *this,FReferenceSkeleton *param_1)

{
  int *piVar1;
  TArray<FVirtualBoneRefData,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_>::operator=
            (&this->RawRefBoneInfo,&param_1->RawRefBoneInfo);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->RawRefBonePose,&param_1->RawRefBonePose);
  TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_>::operator=
            (&this->FinalRefBoneInfo,&param_1->FinalRefBoneInfo);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->FinalRefBonePose,&param_1->FinalRefBonePose);
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::operator=
            (&this->RawNameToIndexMap,&param_1->RawNameToIndexMap);
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::operator=
            (&this->FinalNameToIndexMap,&param_1->FinalNameToIndexMap);
  TArray<unsigned_short,TSizedDefaultAllocator<32>_>::operator=
            (&this->RequiredVirtualBones,&param_1->RequiredVirtualBones);
  pTVar2 = &this->UsedVirtualBoneData;
  if (pTVar2 != &param_1->UsedVirtualBoneData) {
    iVar3 = (this->UsedVirtualBoneData).ArrayMax;
    piVar1 = &(this->UsedVirtualBoneData).ArrayMax;
    iVar4 = (param_1->UsedVirtualBoneData).ArrayNum;
    _Src = (param_1->UsedVirtualBoneData).AllocatorInstance.Data;
    (this->UsedVirtualBoneData).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0xc);
      }
    }
  }
  this->bOnlyOneRootAllowed = param_1->bOnlyOneRootAllowed;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->CachedEndOfBranchIndicesRaw,&param_1->CachedEndOfBranchIndicesRaw);
  return this;
}

