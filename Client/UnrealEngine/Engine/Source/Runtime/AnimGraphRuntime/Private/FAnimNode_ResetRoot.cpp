// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 8

// StaticStruct @ 1463d6400

UScriptStruct * __cdecl FAnimNode_ResetRoot::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ResetRoot.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_ResetRoot.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ResetRoot,(UObject *)pUVar1,
                         L"AnimNode_ResetRoot");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_ResetRoot.OuterSingleton;
}

// FAnimNode_ResetRoot @ 146404d40

FAnimNode_ResetRoot * __thiscall FAnimNode_ResetRoot::FAnimNode_ResetRoot(FAnimNode_ResetRoot *this)

{
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->_padding_ = (longlong)&___7FAnimNode_ResetRoot__6B_;
  (this->RootChildren).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootChildren).ArrayNum = 0;
  (this->RootChildren).ArrayMax = 0;
  return this;
}

// EvaluateSkeletalControl_AnyThread @ 1464301b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_ResetRoot::EvaluateSkeletalControl_AnyThread
          (FAnimNode_ResetRoot *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TTransform<double> *pTVar8;
  longlong lVar9;
  FCSPose<FCompactPose> *this_00;
  uint uVar10;
  undefined1 auStackY_1f8 [32];
  FIdentityFunctor local_1a8 [4];
  FCompactPoseBoneIndex local_1a4 [3];
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  FCSPose<FCompactPose> *local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
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
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  FStatsHierarchical::BeginMeasurement("FAnimNode_ResetRoot::EvaluateSkeletalControl_AnyThread");
  if ((param_2->ArrayNum != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutBoneTransforms.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_ResetRoot.cpp"
                         ,0x23,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_1a4[0] = (FCompactPoseBoneIndex)0x0;
  local_188 = &param_1->Pose;
  pTVar8 = FBoneContainer::GetRefPoseTransform
                     (*(FBoneContainer **)&(param_1->Pose).Pose.field_0x10,local_1a4);
  uVar10 = (this->RootChildren).ArrayNum + 1;
  local_198 = (pTVar8->Rotation).XY.m128d_f64[0];
  uStack_190 = *(undefined4 *)((pTVar8->Rotation).XY.m128d_f64 + 1);
  uStack_18c = *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 0xc);
  local_178 = *(undefined4 *)(pTVar8->Rotation).ZW.m128d_f64;
  uStack_174 = *(undefined4 *)((longlong)(pTVar8->Rotation).ZW.m128d_f64 + 4);
  uStack_170 = *(undefined4 *)((pTVar8->Rotation).ZW.m128d_f64 + 1);
  uStack_16c = *(undefined4 *)((longlong)(pTVar8->Rotation).ZW.m128d_f64 + 0xc);
  local_168 = *(undefined4 *)(pTVar8->Translation).XY.m128d_f64;
  uStack_164 = *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 4);
  uStack_160 = *(undefined4 *)((pTVar8->Translation).XY.m128d_f64 + 1);
  uStack_15c = *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 0xc);
  local_158 = *(undefined4 *)(pTVar8->Translation).ZW.m128d_f64;
  uStack_154 = *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 4);
  uStack_150 = *(undefined4 *)((pTVar8->Translation).ZW.m128d_f64 + 1);
  uStack_14c = *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 0xc);
  local_148 = *(undefined4 *)(pTVar8->Scale3D).XY.m128d_f64;
  uStack_144 = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 4);
  uStack_140 = *(undefined4 *)((pTVar8->Scale3D).XY.m128d_f64 + 1);
  uStack_13c = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 0xc);
  local_138 = *(undefined4 *)(pTVar8->Scale3D).ZW.m128d_f64;
  uStack_134 = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 4);
  uStack_130 = *(undefined4 *)((pTVar8->Scale3D).ZW.m128d_f64 + 1);
  uStack_12c = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 0xc);
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  iVar6 = param_2->ArrayMax;
  piVar1 = &param_2->ArrayMax;
  local_118 = *(undefined4 *)(pTVar8->Rotation).XY.m128d_f64;
  uStack_114 = *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 4);
  if (iVar6 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,0x10,uVar10,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
    iVar6 = *piVar1;
    local_118 = (undefined4)local_198;
    uStack_114 = local_198._4_4_;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_128 = 0;
  uStack_110 = uStack_190;
  uStack_10c = uStack_18c;
  local_108 = local_178;
  uStack_104 = uStack_174;
  uStack_100 = uStack_170;
  uStack_fc = uStack_16c;
  local_f8 = local_168;
  uStack_f4 = uStack_164;
  uStack_f0 = uStack_160;
  uStack_ec = uStack_15c;
  local_e8 = local_158;
  uStack_e4 = uStack_154;
  uStack_e0 = uStack_150;
  uStack_dc = uStack_14c;
  local_d8 = local_148;
  uStack_d4 = uStack_144;
  uStack_d0 = uStack_140;
  uStack_cc = uStack_13c;
  local_c8 = local_138;
  uStack_c4 = uStack_134;
  uStack_c0 = uStack_130;
  uStack_bc = uStack_12c;
  if (((pFVar2 <= (FScriptContainerElement *)&local_128) &&
      ((FScriptContainerElement *)&local_128 < pFVar2 + (longlong)iVar6 * 0x70)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1070,&param_2->AllocatorInstance,piVar1);
  }
  param_2->ArrayNum = iVar6 + 1;
  uVar10 = 0;
  lVar9 = (longlong)iVar6 * 0x70;
  pFVar2 = (param_2->AllocatorInstance).Data;
  *(ulonglong *)(pFVar2 + lVar9) = CONCAT44(uStack_124,local_128);
  *(undefined8 *)(pFVar2 + lVar9 + 8) = uStack_120;
  *(ulonglong *)(pFVar2 + lVar9 + 0x10) = CONCAT44(uStack_114,local_118);
  *(ulonglong *)(pFVar2 + lVar9 + 0x10 + 8) = CONCAT44(uStack_10c,uStack_110);
  *(ulonglong *)(pFVar2 + lVar9 + 0x20) = CONCAT44(uStack_104,local_108);
  *(ulonglong *)(pFVar2 + lVar9 + 0x20 + 8) = CONCAT44(uStack_fc,uStack_100);
  *(ulonglong *)(pFVar2 + lVar9 + 0x30) = CONCAT44(uStack_f4,local_f8);
  *(ulonglong *)(pFVar2 + lVar9 + 0x30 + 8) = CONCAT44(uStack_ec,uStack_f0);
  *(ulonglong *)(pFVar2 + lVar9 + 0x40) = CONCAT44(uStack_e4,local_e8);
  *(ulonglong *)(pFVar2 + lVar9 + 0x40 + 8) = CONCAT44(uStack_dc,uStack_e0);
  *(ulonglong *)(pFVar2 + lVar9 + 0x50) = CONCAT44(uStack_d4,local_d8);
  *(ulonglong *)(pFVar2 + lVar9 + 0x50 + 8) = CONCAT44(uStack_cc,uStack_d0);
  *(ulonglong *)(pFVar2 + lVar9 + 0x60) = CONCAT44(uStack_c4,local_c8);
  *(ulonglong *)(pFVar2 + lVar9 + 0x60 + 8) = CONCAT44(uStack_bc,uStack_c0);
  iVar6 = (this->RootChildren).ArrayNum;
  if (0 < iVar6) {
    local_198 = 0.0;
    this_00 = &param_1->Pose;
    do {
      uVar7 = 0;
      if ((int)uVar10 < iVar6) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar8 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                         (this_00,*(FCompactPoseBoneIndex *)
                                   ((this->RootChildren).AllocatorInstance.Data +
                                   (longlong)(int)uVar10 * 4));
      uVar7 = 0;
      if ((int)uVar10 < (this->RootChildren).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar4 = local_198;
      pFVar2 = (param_2->AllocatorInstance).Data;
      local_b8 = *(undefined4 *)((this->RootChildren).AllocatorInstance.Data + (longlong)local_198);
      local_a8 = (pTVar8->Rotation).XY.m128d_f64[0];
      dStack_a0 = (pTVar8->Rotation).XY.m128d_f64[1];
      local_98 = (pTVar8->Rotation).ZW.m128d_f64[0];
      dStack_90 = (pTVar8->Rotation).ZW.m128d_f64[1];
      local_88 = (pTVar8->Translation).XY.m128d_f64[0];
      dStack_80 = (pTVar8->Translation).XY.m128d_f64[1];
      local_78 = (pTVar8->Translation).ZW.m128d_f64[0];
      dStack_70 = (pTVar8->Translation).ZW.m128d_f64[1];
      local_68 = (pTVar8->Scale3D).XY.m128d_f64[0];
      dStack_60 = (pTVar8->Scale3D).XY.m128d_f64[1];
      local_58 = (pTVar8->Scale3D).ZW.m128d_f64[0];
      dStack_50 = (pTVar8->Scale3D).ZW.m128d_f64[1];
      if (((pFVar2 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar2 + (longlong)*piVar1 * 0x70)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1070,&param_2->AllocatorInstance,piVar1);
      }
      local_198 = (double)((longlong)dVar4 + 4);
      param_2->ArrayNum = iVar6 + 1;
      uVar10 = uVar10 + 1;
      lVar9 = (longlong)iVar6 * 0x70;
      pFVar2 = (param_2->AllocatorInstance).Data;
      *(ulonglong *)(pFVar2 + lVar9) = CONCAT44(uStack_b4,local_b8);
      *(undefined8 *)(pFVar2 + lVar9 + 8) = uStack_b0;
      *(double *)(pFVar2 + lVar9 + 0x10) = local_a8;
      *(double *)(pFVar2 + lVar9 + 0x10 + 8) = dStack_a0;
      *(double *)(pFVar2 + lVar9 + 0x20) = local_98;
      *(double *)(pFVar2 + lVar9 + 0x20 + 8) = dStack_90;
      *(double *)(pFVar2 + lVar9 + 0x30) = local_88;
      *(double *)(pFVar2 + lVar9 + 0x30 + 8) = dStack_80;
      *(double *)(pFVar2 + lVar9 + 0x40) = local_78;
      *(double *)(pFVar2 + lVar9 + 0x40 + 8) = dStack_70;
      *(double *)(pFVar2 + lVar9 + 0x50) = local_68;
      *(double *)(pFVar2 + lVar9 + 0x50 + 8) = dStack_60;
      *(double *)(pFVar2 + lVar9 + 0x60) = local_58;
      *(double *)(pFVar2 + lVar9 + 0x60 + 8) = dStack_50;
      iVar6 = (this->RootChildren).ArrayNum;
      this_00 = local_188;
    } while ((int)uVar10 < iVar6);
  }
  AlgoImpl::
  IntroSortInternal<FBoneTransform,int,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_>
            ((FBoneTransform *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,local_1a8[0],
             (FCompareBoneTransformIndex *)local_1a8);
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 1464456d0

void __thiscall
FAnimNode_ResetRoot::GatherDebugData(FAnimNode_ResetRoot *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ResetRoot::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ResetRoot.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_ResetRoot.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ResetRoot,(UObject *)pUVar1,
                         L"AnimNode_ResetRoot");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_ResetRoot.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::AppendChars(local_38,"(",1);
  ::FString::PrintfImpl(&local_48,L"Alpha: %.1f%%");
  iVar2 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_48,L")");
  iVar2 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38[0].Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38[0].Data.ArrayNum,0,(ForAnyElementType *)&local_48,
               local_38[0].Data.ArrayNum,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeBoneReferences @ 1464572d0

void __thiscall
FAnimNode_ResetRoot::InitializeBoneReferences(FAnimNode_ResetRoot *this,FBoneContainer *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  FCompactPoseBoneIndex local_res8 [2];
  int local_28 [4];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ResetRoot::InitializeBoneReferences");
  pTVar7 = &this->RootChildren;
  iVar8 = 0;
  piVar1 = &(this->RootChildren).ArrayMax;
  (this->RootChildren).ArrayNum = 0;
  if ((this->RootChildren).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar7->AllocatorInstance,0,piVar1);
  }
  iVar2 = (param_1->BoneIndicesArray).ArrayNum;
  if (0 < iVar2) {
    do {
      local_28[0] = iVar8;
      FBoneContainer::GetParentBoneIndex(param_1,local_res8);
      if (local_res8[0] == (FCompactPoseBoneIndex)0x0) {
        pFVar3 = (pTVar7->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)local_28) &&
           ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)*piVar1 * 4)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = (this->RootChildren).ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar7->AllocatorInstance,piVar1);
        }
        (this->RootChildren).ArrayNum = iVar6 + 1;
        *(int *)((pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_28[0];
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar2);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645bc20

bool __thiscall
FAnimNode_ResetRoot::IsValidToEvaluate
          (FAnimNode_ResetRoot *this,USkeleton *param_1,FBoneContainer *param_2)

{
  return true;
}

// NeedsOnInitializeAnimInstance @ 14645ed40

bool __thiscall FAnimNode_ResetRoot::NeedsOnInitializeAnimInstance(FAnimNode_ResetRoot *this)

{
  return true;
}

// OnInitializeAnimInstance @ 14645eff0

void __thiscall
FAnimNode_ResetRoot::OnInitializeAnimInstance
          (FAnimNode_ResetRoot *this,FAnimInstanceProxy *param_1,UAnimInstance *param_2)

{
  return;
}

