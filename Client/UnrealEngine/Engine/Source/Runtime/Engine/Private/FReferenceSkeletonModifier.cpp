// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FReferenceSkeletonModifier @ 1475a55d0

FReferenceSkeletonModifier * __thiscall
FReferenceSkeletonModifier::FReferenceSkeletonModifier
          (FReferenceSkeletonModifier *this,USkeleton *param_1)

{
  this->Skeleton = param_1;
  this->RefSkeleton = &param_1->ReferenceSkeleton;
  return this;
}

// ~FReferenceSkeletonModifier @ 1475a9f40

void __thiscall
FReferenceSkeletonModifier::~FReferenceSkeletonModifier(FReferenceSkeletonModifier *this)

{
  FReferenceSkeleton::RebuildRefSkeleton(this->RefSkeleton,this->Skeleton,true);
  return;
}

// Add @ 1475b0b90

void __thiscall
FReferenceSkeletonModifier::Add
          (FReferenceSkeletonModifier *this,FMeshBoneInfo *param_1,TTransform<double> *param_2,
          bool param_3)

{
  bool bVar1;
  FReferenceSkeleton *pFVar2;
  
  pFVar2 = this->RefSkeleton;
  bVar1 = pFVar2->bOnlyOneRootAllowed;
  pFVar2->bOnlyOneRootAllowed = !param_3;
  FReferenceSkeleton::Add(this->RefSkeleton,param_1,param_2);
  pFVar2->bOnlyOneRootAllowed = bVar1;
  return;
}

// FindBoneIndex @ 1475c9800

int __thiscall
FReferenceSkeletonModifier::FindBoneIndex(FReferenceSkeletonModifier *this,FName *param_1)

{
  TTuple<FName,int> *pTVar1;
  int *piVar2;
  
  if (*param_1 != (FName)0x0) {
    pTVar1 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
             Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                   *)&this->RefSkeleton->RawNameToIndexMap,*param_1);
    piVar2 = (int *)&pTVar1->field_0x8;
    if (pTVar1 == (TTuple<FName,int> *)0x0) {
      piVar2 = (int *)0x0;
    }
    if (piVar2 != (int *)0x0) {
      return *piVar2;
    }
  }
  return -1;
}

// GetRefBoneInfo @ 1475dcaa0

TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> * __thiscall
FReferenceSkeletonModifier::GetRefBoneInfo(FReferenceSkeletonModifier *this)

{
  return &this->RefSkeleton->RawRefBoneInfo;
}

// Remove @ 1475f2b90

void __thiscall
FReferenceSkeletonModifier::Remove(FReferenceSkeletonModifier *this,FName *param_1,bool param_2)

{
  FReferenceSkeleton::Remove(this->RefSkeleton,*param_1,param_2);
  return;
}

// Rename @ 1475f5410

void __thiscall
FReferenceSkeletonModifier::Rename(FReferenceSkeletonModifier *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  FReferenceSkeleton *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  TTuple<FName,int> *pTVar7;
  uint *puVar8;
  uint local_res8 [2];
  TPairInitializer<FName_const_&,int_const_&> local_res10;
  FName local_res20;
  FName local_58;
  int **local_50;
  uint *local_48;
  
  FVar1 = *param_1;
  local_res10.Value = *(int **)param_2;
  pFVar2 = this->RefSkeleton;
  uVar6 = 0xffffffff;
  local_res8[0] = 0xffffffff;
  local_res20 = FVar1;
  if (FVar1 != (FName)0x0) {
    pTVar7 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
             Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                   *)&pFVar2->RawNameToIndexMap,FVar1);
    puVar8 = (uint *)&pTVar7->field_0x8;
    if (pTVar7 == (TTuple<FName,int> *)0x0) {
      puVar8 = (uint *)0x0;
    }
    local_res8[0] = 0xffffffff;
    if (puVar8 != (uint *)0x0) {
      local_res8[0] = *puVar8;
    }
  }
  if (((FVar1 != (FName)local_res10.Value) ||
      ((FVar1.ComparisonIndex.Value.Value == (uint)local_res10.Value &&
       (FVar1.Number == local_res10.Value._4_4_)))) && ((FName)local_res10.Value != (FName)0x0)) {
    pTVar7 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
             Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                   *)&pFVar2->RawNameToIndexMap,(FName)local_res10.Value);
    puVar8 = (uint *)&pTVar7->field_0x8;
    if (pTVar7 == (TTuple<FName,int> *)0x0) {
      puVar8 = (uint *)0x0;
    }
    if (puVar8 != (uint *)0x0) {
      uVar6 = *puVar8;
    }
  }
  uVar4 = local_res8[0];
  if ((local_res8[0] != 0xffffffff) && (uVar6 == 0xffffffff)) {
    uVar6 = 0;
    if ((int)local_res8[0] < (pFVar2->RawRefBoneInfo).ArrayNum) {
      uVar6 = ~local_res8[0] >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(int **)((pFVar2->RawRefBoneInfo).AllocatorInstance.Data + (longlong)(int)uVar4 * 0xc) =
         local_res10.Value;
    local_58 = FVar1;
    if (*(int *)&(pFVar2->RawNameToIndexMap).field_0x8 !=
        *(int *)&(pFVar2->RawNameToIndexMap).field_0x34) {
      uVar6 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      RemoveImpl<FName>((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                         *)&pFVar2->RawNameToIndexMap,local_res20.Number + uVar6,&local_58);
    }
    local_50 = &local_res10.Value;
    local_48 = local_res8;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,int_const_&>_>
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)&pFVar2->RawNameToIndexMap,&local_res10,(bool *)&local_50);
  }
  return;
}

// SetParent @ 1475fd320

int __thiscall
FReferenceSkeletonModifier::SetParent
          (FReferenceSkeletonModifier *this,FName *param_1,FName *param_2,bool param_3)

{
  bool bVar1;
  FReferenceSkeleton *pFVar2;
  int iVar3;
  
  pFVar2 = this->RefSkeleton;
  bVar1 = pFVar2->bOnlyOneRootAllowed;
  pFVar2->bOnlyOneRootAllowed = !param_3;
  iVar3 = FReferenceSkeleton::SetParent(this->RefSkeleton,*param_1,*param_2);
  pFVar2->bOnlyOneRootAllowed = bVar1;
  return iVar3;
}

// UpdateRefPoseTransform @ 147602ef0

void __thiscall
FReferenceSkeletonModifier::UpdateRefPoseTransform
          (FReferenceSkeletonModifier *this,int param_1,TTransform<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  FReferenceSkeleton *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  uint uVar20;
  longlong lVar21;
  
  uVar5 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
  uVar6 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
  uVar7 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
  uVar8 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
  dVar9 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar10 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar11 = (param_2->Translation).XY.m128d_f64[0];
  dVar12 = (param_2->Translation).XY.m128d_f64[1];
  dVar13 = (param_2->Translation).ZW.m128d_f64[0];
  dVar14 = (param_2->Translation).ZW.m128d_f64[1];
  dVar15 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar16 = (param_2->Scale3D).XY.m128d_f64[1];
  dVar17 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar18 = (param_2->Scale3D).ZW.m128d_f64[1];
  pFVar2 = this->RefSkeleton;
  uVar20 = 0;
  if (param_1 < (pFVar2->RawRefBonePose).ArrayNum) {
    uVar20 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (pFVar2->RawRefBonePose).AllocatorInstance.Data;
  lVar21 = (longlong)param_1 * 0x60;
  pFVar1 = pFVar3 + lVar21;
  *(undefined4 *)pFVar1 = uVar5;
  *(undefined4 *)(pFVar1 + 4) = uVar6;
  *(undefined4 *)(pFVar1 + 8) = uVar7;
  *(undefined4 *)(pFVar1 + 0xc) = uVar8;
  *(double *)(pFVar3 + lVar21 + 0x10) = dVar9;
  *(double *)(pFVar3 + lVar21 + 0x10 + 8) = dVar10;
  *(double *)(pFVar3 + lVar21 + 0x20) = dVar11;
  *(double *)(pFVar3 + lVar21 + 0x20 + 8) = dVar12;
  *(double *)(pFVar3 + lVar21 + 0x30) = dVar13;
  *(double *)(pFVar3 + lVar21 + 0x30 + 8) = dVar14;
  *(double *)(pFVar3 + lVar21 + 0x40) = dVar15;
  *(double *)(pFVar3 + lVar21 + 0x40 + 8) = dVar16;
  *(double *)(pFVar3 + lVar21 + 0x50) = dVar17;
  *(double *)(pFVar3 + lVar21 + 0x50 + 8) = dVar18;
  return;
}

