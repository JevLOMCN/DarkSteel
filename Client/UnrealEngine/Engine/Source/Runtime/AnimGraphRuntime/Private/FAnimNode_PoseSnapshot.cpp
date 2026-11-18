// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 10

// StaticStruct @ 1463e8df0

UScriptStruct * __cdecl FAnimNode_PoseSnapshot::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_PoseSnapshot.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_PoseSnapshot.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot,(UObject *)pUVar1,
                         L"AnimNode_PoseSnapshot");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_PoseSnapshot.OuterSingleton;
}

// FAnimNode_PoseSnapshot @ 146404c90

FAnimNode_PoseSnapshot * __thiscall
FAnimNode_PoseSnapshot::FAnimNode_PoseSnapshot(FAnimNode_PoseSnapshot *this)

{
  this->_padding_ = (longlong)&___7FAnimNode_PoseSnapshot__6B_;
  this->_padding_ = 0;
  (this->SnapshotName).ComparisonIndex = 0;
  (this->SnapshotName).Number = 0;
  (this->Snapshot).LocalTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Snapshot).LocalTransforms.ArrayNum = 0;
  (this->Snapshot).LocalTransforms.ArrayMax = 0;
  (this->Snapshot).BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Snapshot).BoneNames.ArrayNum = 0;
  (this->Snapshot).BoneNames.ArrayMax = 0;
  (this->Snapshot).SkeletalMeshName.ComparisonIndex = 0;
  (this->Snapshot).SkeletalMeshName.Number = 0;
  (this->Snapshot).SnapshotName.ComparisonIndex = 0;
  (this->Snapshot).SnapshotName.Number = 0;
  (this->Snapshot).bIsValid = false;
  this->Mode = NamedSnapshot;
  (this->SourceBoneMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceBoneMapping).ArrayNum = 0;
  (this->SourceBoneMapping).ArrayMax = 0;
  (this->TargetBoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetBoneNames).ArrayNum = 0;
  (this->TargetBoneNames).ArrayMax = 0;
  (this->MappedSourceMeshName).ComparisonIndex = 0;
  (this->MappedSourceMeshName).Number = 0;
  (this->MappedTargetMeshName).ComparisonIndex = 0;
  (this->MappedTargetMeshName).Number = 0;
  (this->TargetBoneNameMesh).ComparisonIndex = 0;
  (this->TargetBoneNameMesh).Number = 0;
  return this;
}

// operator= @ 14640b860

FAnimNode_PoseSnapshot * __thiscall
FAnimNode_PoseSnapshot::operator=(FAnimNode_PoseSnapshot *this,FAnimNode_PoseSnapshot *param_1)

{
  this->_padding_ = param_1->_padding_;
  this->SnapshotName = param_1->SnapshotName;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Snapshot).LocalTransforms,&(param_1->Snapshot).LocalTransforms);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Snapshot).BoneNames,&(param_1->Snapshot).BoneNames);
  (this->Snapshot).SkeletalMeshName = (param_1->Snapshot).SkeletalMeshName;
  (this->Snapshot).SnapshotName = (param_1->Snapshot).SnapshotName;
  (this->Snapshot).bIsValid = (param_1->Snapshot).bIsValid;
  this->Mode = param_1->Mode;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->SourceBoneMapping,&param_1->SourceBoneMapping);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->TargetBoneNames,&param_1->TargetBoneNames);
  this->MappedSourceMeshName = param_1->MappedSourceMeshName;
  this->MappedTargetMeshName = param_1->MappedTargetMeshName;
  this->TargetBoneNameMesh = param_1->TargetBoneNameMesh;
  return this;
}

// ApplyPose @ 146415b90

void __thiscall
FAnimNode_PoseSnapshot::ApplyPose
          (FAnimNode_PoseSnapshot *this,FPoseSnapshot *param_1,FCompactPose *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  bool bVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  
  plVar7 = *(longlong **)&param_2->field_0x10;
  if (this->TargetBoneNameMesh == param_1->SkeletalMeshName) {
    uVar5 = *(uint *)&param_2->field_0x8;
    uVar27 = 0;
    if (uVar5 != 0) {
      lVar29 = 0;
      lVar28 = 0;
      do {
        uVar25 = 0;
        if ((int)uVar27 < (int)plVar7[1]) {
          uVar25 = ~uVar27 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((int)(uint)*(ushort *)(*plVar7 + lVar28) < (param_1->LocalTransforms).ArrayNum) {
          pFVar8 = (param_1->LocalTransforms).AllocatorInstance.Data;
          lVar26 = (ulonglong)*(ushort *)(*plVar7 + lVar28) * 0x60;
          uVar14 = *(undefined8 *)(pFVar8 + lVar26 + 0x10);
          uVar15 = *(undefined8 *)(pFVar8 + lVar26 + 0x10 + 8);
          uVar16 = *(undefined8 *)(pFVar8 + lVar26 + 0x20);
          uVar17 = *(undefined8 *)(pFVar8 + lVar26 + 0x20 + 8);
          pFVar1 = pFVar8 + lVar26;
          uVar10 = *(undefined4 *)pFVar1;
          uVar11 = *(undefined4 *)(pFVar1 + 4);
          uVar12 = *(undefined4 *)(pFVar1 + 8);
          uVar13 = *(undefined4 *)(pFVar1 + 0xc);
          uVar18 = *(undefined8 *)(pFVar8 + lVar26 + 0x30);
          uVar19 = *(undefined8 *)(pFVar8 + lVar26 + 0x30 + 8);
          uVar20 = *(undefined8 *)(pFVar8 + lVar26 + 0x50);
          uVar21 = *(undefined8 *)(pFVar8 + lVar26 + 0x50 + 8);
          uVar22 = *(undefined8 *)(pFVar8 + lVar26 + 0x40);
          uVar23 = *(undefined8 *)(pFVar8 + lVar26 + 0x40 + 8);
          uVar25 = 0;
          if ((int)uVar27 < *(int *)&param_2->field_0x8) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar26 = *(longlong *)param_2;
          puVar2 = (undefined4 *)(lVar29 + lVar26);
          *puVar2 = uVar10;
          puVar2[1] = uVar11;
          puVar2[2] = uVar12;
          puVar2[3] = uVar13;
          puVar3 = (undefined8 *)(lVar29 + 0x10 + lVar26);
          *puVar3 = uVar14;
          puVar3[1] = uVar15;
          puVar3 = (undefined8 *)(lVar29 + 0x20 + lVar26);
          *puVar3 = uVar16;
          puVar3[1] = uVar17;
          puVar3 = (undefined8 *)(lVar29 + 0x30 + lVar26);
          *puVar3 = uVar18;
          puVar3[1] = uVar19;
          puVar3 = (undefined8 *)(lVar29 + 0x40 + lVar26);
          *puVar3 = uVar22;
          puVar3[1] = uVar23;
          puVar3 = (undefined8 *)(lVar29 + 0x50 + lVar26);
          *puVar3 = uVar20;
          puVar3[1] = uVar21;
        }
        uVar27 = uVar27 + 1;
        lVar28 = lVar28 + 2;
        lVar29 = lVar29 + 0x60;
      } while (uVar27 != uVar5);
    }
  }
  else {
    CacheBoneMapping(this,param_1->SkeletalMeshName,this->TargetBoneNameMesh,&param_1->BoneNames,
                     &this->TargetBoneNames);
    uVar5 = *(uint *)&param_2->field_0x8;
    uVar27 = 0;
    if (uVar5 != 0) {
      lVar28 = 0;
      lVar29 = 0;
      do {
        uVar25 = 0;
        if ((int)uVar27 < (int)plVar7[1]) {
          uVar25 = ~uVar27 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar4 = *(ushort *)(*plVar7 + lVar29);
        if ((int)(uint)uVar4 < (this->SourceBoneMapping).ArrayNum) {
          if (((this->SourceBoneMapping).ArrayNum <= (int)(uint)uVar4) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar6 = *(int *)((this->SourceBoneMapping).AllocatorInstance.Data + (ulonglong)uVar4 * 4);
          if ((-1 < iVar6) && (iVar6 < (param_1->LocalTransforms).ArrayNum)) {
            if ((iVar6 < 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar26 = (longlong)iVar6 * 0x60;
            pFVar8 = (param_1->LocalTransforms).AllocatorInstance.Data;
            uVar14 = *(undefined8 *)(pFVar8 + lVar26 + 0x10);
            uVar15 = *(undefined8 *)(pFVar8 + lVar26 + 0x10 + 8);
            uVar16 = *(undefined8 *)(pFVar8 + lVar26 + 0x20);
            uVar17 = *(undefined8 *)(pFVar8 + lVar26 + 0x20 + 8);
            pFVar1 = pFVar8 + lVar26;
            uVar10 = *(undefined4 *)pFVar1;
            uVar11 = *(undefined4 *)(pFVar1 + 4);
            uVar12 = *(undefined4 *)(pFVar1 + 8);
            uVar13 = *(undefined4 *)(pFVar1 + 0xc);
            uVar18 = *(undefined8 *)(pFVar8 + lVar26 + 0x30);
            uVar19 = *(undefined8 *)(pFVar8 + lVar26 + 0x30 + 8);
            uVar20 = *(undefined8 *)(pFVar8 + lVar26 + 0x50);
            uVar21 = *(undefined8 *)(pFVar8 + lVar26 + 0x50 + 8);
            uVar22 = *(undefined8 *)(pFVar8 + lVar26 + 0x40);
            uVar23 = *(undefined8 *)(pFVar8 + lVar26 + 0x40 + 8);
            uVar25 = 0;
            if ((int)uVar27 < *(int *)&param_2->field_0x8) {
              uVar25 = ~uVar27 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar26 = *(longlong *)param_2;
            puVar2 = (undefined4 *)(lVar26 + lVar28);
            *puVar2 = uVar10;
            puVar2[1] = uVar11;
            puVar2[2] = uVar12;
            puVar2[3] = uVar13;
            puVar3 = (undefined8 *)(lVar26 + 0x10 + lVar28);
            *puVar3 = uVar14;
            puVar3[1] = uVar15;
            puVar3 = (undefined8 *)(lVar26 + 0x20 + lVar28);
            *puVar3 = uVar16;
            puVar3[1] = uVar17;
            puVar3 = (undefined8 *)(lVar26 + 0x30 + lVar28);
            *puVar3 = uVar18;
            puVar3[1] = uVar19;
            puVar3 = (undefined8 *)(lVar26 + 0x40 + lVar28);
            *puVar3 = uVar22;
            puVar3[1] = uVar23;
            puVar3 = (undefined8 *)(lVar26 + 0x50 + lVar28);
            *puVar3 = uVar20;
            puVar3[1] = uVar21;
          }
        }
        uVar27 = uVar27 + 1;
        lVar29 = lVar29 + 2;
        lVar28 = lVar28 + 0x60;
      } while (uVar27 != uVar5);
    }
  }
  return;
}

// CacheBoneMapping @ 146419490

void __thiscall
FAnimNode_PoseSnapshot::CacheBoneMapping
          (FAnimNode_PoseSnapshot *this,FName param_1,FName param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 local_48 [4];
  
  if ((param_1 != this->MappedSourceMeshName) || (param_2 != this->MappedTargetMeshName)) {
    piVar1 = &(this->SourceBoneMapping).ArrayMax;
    (this->SourceBoneMapping).ArrayNum = 0;
    if ((this->SourceBoneMapping).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->SourceBoneMapping).AllocatorInstance,0,piVar1);
    }
    uVar8 = 0;
    iVar6 = param_4->ArrayNum;
    if (0 < iVar6) {
      lVar9 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < iVar6) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (param_3->AllocatorInstance).Data;
        if (pFVar2 != pFVar2 + (longlong)param_3->ArrayNum * 8) {
          pFVar7 = pFVar2;
          do {
            if (*(longlong *)pFVar7 == *(longlong *)((param_4->AllocatorInstance).Data + lVar9)) {
              local_48[0] = (undefined4)((longlong)pFVar7 - (longlong)pFVar2 >> 3);
              goto LAB_1464195aa;
            }
            pFVar7 = pFVar7 + 8;
          } while (pFVar7 != pFVar2 + (longlong)param_3->ArrayNum * 8);
        }
        local_48[0] = 0xffffffff;
LAB_1464195aa:
        pFVar2 = (this->SourceBoneMapping).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
            ((FScriptContainerElement *)local_48 < pFVar2 + (longlong)*piVar1 * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->SourceBoneMapping).ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->SourceBoneMapping).AllocatorInstance,piVar1);
        }
        uVar8 = uVar8 + 1;
        (this->SourceBoneMapping).ArrayNum = iVar6 + 1;
        lVar9 = lVar9 + 8;
        *(undefined4 *)((this->SourceBoneMapping).AllocatorInstance.Data + (longlong)iVar6 * 4) =
             local_48[0];
        iVar6 = param_4->ArrayNum;
      } while ((int)uVar8 < iVar6);
    }
    this->MappedSourceMeshName = param_1;
    this->MappedTargetMeshName = param_2;
  }
  return;
}

// Evaluate_AnyThread @ 14643d000

void __thiscall
FAnimNode_PoseSnapshot::Evaluate_AnyThread(FAnimNode_PoseSnapshot *this,FPoseContext *param_1)

{
  FPoseSnapshot *pFVar1;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseSnapshot::Evaluate_AnyThread");
  FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
            ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
             *(FBoneContainer **)&(param_1->Pose).field_0x10);
  if (this->Mode == NamedSnapshot) {
    pFVar1 = FAnimInstanceProxy::GetPoseSnapshot
                       ((FAnimInstanceProxy *)param_1->_padding_,this->SnapshotName);
    if (pFVar1 == (FPoseSnapshot *)0x0) goto LAB_14643d061;
  }
  else {
    if (this->Mode != SnapshotPin) goto LAB_14643d061;
    pFVar1 = &this->Snapshot;
  }
  ApplyPose(this,pFVar1,&param_1->Pose);
LAB_14643d061:
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146445350

void __thiscall
FAnimNode_PoseSnapshot::GatherDebugData(FAnimNode_PoseSnapshot *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  FString *pFVar1;
  UPackage *pUVar2;
  FName local_res8;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseSnapshot::GatherDebugData");
  pFVar1 = ::FName::ToString(&this->SnapshotName,local_38);
  ::FString::FString(&local_48," Snapshot Name:");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_PoseSnapshot.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_PoseSnapshot.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot,(UObject *)pUVar2,
                         L"AnimNode_PoseSnapshot");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_PoseSnapshot.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_88);
  ::FString::PrintfImpl(&local_58,L"%s<W:%.1f%%> %s");
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::ConcatFF(&local_68,&local_58,&local_48);
  ::FString::ConcatFF(&local_78,&local_68,pFVar1);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  _Src.Data = local_78.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_78.Data.ArrayNum == 0) {
    local_88.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_78.Data.ArrayNum,
               &local_88.Data.ArrayMax);
    memcpy(local_88.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_78.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_88,true);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// HasPreUpdate @ 146450c60

bool __thiscall FAnimNode_PoseSnapshot::HasPreUpdate(FAnimNode_PoseSnapshot *this)

{
  return true;
}

// PreUpdate @ 146461560

void __thiscall
FAnimNode_PoseSnapshot::PreUpdate(FAnimNode_PoseSnapshot *this,UAnimInstance *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  USkeletalMeshComponent *pUVar5;
  USkeletalMesh *pUVar6;
  longlong lVar7;
  uint uVar8;
  USkeletalMesh *pUVar9;
  uint uVar10;
  USkeletalMesh *pUVar11;
  USkeletalMesh *pUVar12;
  
  pUVar9 = (USkeletalMesh *)0x0;
  pUVar5 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
  pUVar6 = pUVar9;
  if ((pUVar5 != (USkeletalMeshComponent *)0x0) &&
     (pUVar5 = UAnimInstance::GetSkelMeshComponentChecked(param_1), pUVar6 = (USkeletalMesh *)0x0,
     (pUVar5->_padding_ & 1) != 0)) {
    pUVar5 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
    pUVar6 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar5);
  }
  if (pUVar6 == (USkeletalMesh *)0x0) {
    (this->TargetBoneNameMesh).ComparisonIndex = 0;
    (this->TargetBoneNameMesh).Number = 0;
    return;
  }
  if (this->TargetBoneNameMesh != (FName)pUVar6->_padding_) {
    (this->TargetBoneNames).ArrayNum = 0;
    if ((this->TargetBoneNames).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->TargetBoneNames).AllocatorInstance,0,
                 &(this->TargetBoneNames).ArrayMax);
    }
    lVar7 = (**(code **)(pUVar6->_padding_ + 800))(pUVar6);
    TArray<FName,TSizedDefaultAllocator<32>_>::AddDefaulted
              (&this->TargetBoneNames,*(int *)(lVar7 + 0x28));
    lVar7 = (**(code **)(pUVar6->_padding_ + 800))(pUVar6);
    pUVar11 = pUVar9;
    pUVar12 = pUVar9;
    if (0 < *(int *)(lVar7 + 0x28)) {
      do {
        lVar7 = (**(code **)(pUVar6->_padding_ + 800))();
        uVar10 = (uint)pUVar9;
        uVar8 = 0;
        if ((int)uVar10 < *(int *)(lVar7 + 0x28)) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar8 = 0;
        if ((int)uVar10 < (this->TargetBoneNames).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        uVar1 = *(undefined8 *)((longlong)&pUVar12->_padding_ + *(longlong *)(lVar7 + 0x20));
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar9 = (USkeletalMesh *)(ulonglong)(uVar10 + 1);
        *(undefined8 *)
         ((longlong)&pUVar11->_padding_ + (longlong)(this->TargetBoneNames).AllocatorInstance.Data)
             = uVar1;
        lVar7 = (**(code **)(pUVar6->_padding_ + 800))(pUVar6);
        pUVar11 = (USkeletalMesh *)&pUVar11->_padding_;
        pUVar12 = (USkeletalMesh *)((longlong)&pUVar12->_padding_ + 4);
      } while ((int)(uVar10 + 1) < *(int *)(lVar7 + 0x28));
    }
  }
  uVar3 = *(undefined4 *)((longlong)&pUVar6->_padding_ + 4);
  (this->TargetBoneNameMesh).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar6->_padding_;
  (this->TargetBoneNameMesh).Number = uVar3;
  return;
}

// Update_AnyThread @ 1464787d0

void __thiscall
FAnimNode_PoseSnapshot::Update_AnyThread
          (FAnimNode_PoseSnapshot *this,FAnimationUpdateContext *param_1)

{
  FExposedValueHandler *this_00;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseSnapshot::Update_AnyThread");
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Snapshot Name",&(this->Snapshot).SnapshotName);
  FStatsHierarchical::EndMeasurement();
  return;
}

