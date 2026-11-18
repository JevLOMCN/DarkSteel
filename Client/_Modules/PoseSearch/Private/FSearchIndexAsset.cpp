// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 5

// GetPoseIndexFromTime @ 14a8bc500

int __thiscall
UE::PoseSearch::FSearchIndexAsset::GetPoseIndexFromTime
          (FSearchIndexAsset *this,float param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((((this->SourceAssetIdx == -1) || (this->PermutationIdx == -1)) || (this->FirstPoseIdx == -1))
     || ((this->FirstSampleIdx == -1 || (this->LastSampleIdx == -1)))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                       ,0xb2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  uVar4 = (this->LastSampleIdx - this->FirstSampleIdx) + 1;
  uVar5 = ((int)ROUND((param_1 + param_1) * (float)param_2 + __real_3f000000) >> 1) -
          this->FirstSampleIdx;
  if (!this->bLooping) {
    if ((-1 < (int)uVar5) && ((int)uVar5 < (int)uVar4)) {
      return this->FirstPoseIdx + uVar5;
    }
    return -1;
  }
  if (uVar4 == 0) {
    return this->FirstPoseIdx;
  }
  if ((int)uVar5 < 0) {
    iVar3 = uVar4 - -uVar5 % uVar4;
    if (-uVar5 % uVar4 == 0) {
      iVar3 = 0;
    }
    return this->FirstPoseIdx + iVar3;
  }
  return this->FirstPoseIdx + uVar5 % uVar4;
}

// GetTimeFromPoseIndex @ 14a8bed00

float __thiscall
UE::PoseSearch::FSearchIndexAsset::GetTimeFromPoseIndex
          (FSearchIndexAsset *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  
  if (param_2 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SchemaSampleRate > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                       ,0xf4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  iVar3 = param_1 - this->FirstPoseIdx;
  if ((iVar3 < 0) || ((this->LastSampleIdx - this->FirstSampleIdx) + 1 <= iVar3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseOffset >= 0 && PoseOffset < GetNumPoses()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                       ,0xf7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return (float)(this->FirstSampleIdx + iVar3) / (float)param_2;
}

// IteratePoseIndexesOverTime @ 14a8c1950

void __thiscall
UE::PoseSearch::FSearchIndexAsset::IteratePoseIndexesOverTime
          (FSearchIndexAsset *this,float param_1,float param_2,int param_3,
          TFunction<void___cdecl(int)> *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_res10 [2];
  int local_res18 [4];
  
  if (((((this->SourceAssetIdx == -1) || (this->PermutationIdx == -1)) || (this->FirstPoseIdx == -1)
       ) || ((this->FirstSampleIdx == -1 || (this->LastSampleIdx == -1)))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                         ,200,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_2 < param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartTime <= EndTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                         ,0xc9,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar1 = this->FirstSampleIdx;
  uVar10 = this->LastSampleIdx - iVar1;
  uVar9 = uVar10 + 1;
  uVar8 = ((int)ROUND((param_1 + param_1) * (float)param_3 + __real_3f000000) >> 1) - iVar1;
  uVar7 = ((int)ROUND((param_2 + param_2) * (float)param_3 + __real_3f000000) >> 1) - iVar1;
  if (this->bLooping) {
    if (uVar9 == 0) {
      uVar10 = 0;
      uVar7 = 0;
    }
    else {
      if ((int)uVar7 < 0) {
        uVar10 = uVar9 - -uVar7 % uVar9;
        if (-uVar7 % uVar9 == 0) {
          uVar10 = 0;
        }
      }
      else {
        uVar10 = uVar7 % uVar9;
      }
      if ((int)uVar8 < 0) {
        uVar7 = uVar9 - -uVar8 % uVar9;
        if (-uVar8 % uVar9 == 0) {
          uVar7 = 0;
        }
      }
      else {
        uVar7 = uVar8 % uVar9;
      }
    }
    while( true ) {
      local_res10[0] = this->FirstPoseIdx + uVar7;
      Core::Private::Function::CheckCallable(*(void **)param_4);
      pcVar2 = *(code **)param_4;
      plVar6 = *(longlong **)&param_4->field_0x28;
      if (*(longlong **)&param_4->field_0x28 == (longlong *)0x0) {
        plVar6 = (longlong *)&param_4->field_0x10;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar2)(uVar5,local_res10);
      if (uVar7 == uVar10) break;
      uVar7 = (int)(uVar7 + 1) % (int)uVar9;
    }
  }
  else {
    if (((int)uVar7 < (int)uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartPoseOffset <= EndPoseOffset",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                           ,0xe1,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((int)uVar8 < 0) && ((int)uVar7 < 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (((int)uVar8 < (int)uVar9) || ((int)uVar7 < (int)uVar9)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((!bVar4) && (!bVar3)) {
      uVar9 = uVar10;
      if ((int)uVar7 < (int)uVar10) {
        uVar9 = uVar7;
      }
      uVar7 = 0;
      if (0 < (int)uVar9) {
        uVar7 = uVar9;
      }
      if ((int)uVar8 < (int)uVar10) {
        uVar10 = uVar8;
      }
      uVar9 = 0;
      if (0 < (int)uVar10) {
        uVar9 = uVar10;
      }
      if ((int)uVar9 <= (int)uVar7) {
        do {
          local_res18[0] = this->FirstPoseIdx + uVar9;
          Core::Private::Function::CheckCallable(*(void **)param_4);
          pcVar2 = *(code **)param_4;
          plVar6 = *(longlong **)&param_4->field_0x28;
          if (*(longlong **)&param_4->field_0x28 == (longlong *)0x0) {
            plVar6 = (longlong *)&param_4->field_0x10;
          }
          uVar5 = (**(code **)(*plVar6 + 8))();
          (*pcVar2)(uVar5,local_res18);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 <= (int)uVar7);
      }
    }
  }
  return;
}

// operator== @ 14a8e4bd0

bool __thiscall
UE::PoseSearch::FSearchIndexAsset::operator==(FSearchIndexAsset *this,FSearchIndexAsset *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  if (this->SourceAssetIdx == param_1->SourceAssetIdx) {
    uVar1 = this->field_0x4;
    uVar2 = param_1->field_0x4;
    if ((((((((this->bMirrored ^ param_1->bMirrored) & 1U) == 0) && (((uVar1 ^ uVar2) & 2) == 0)) &&
          (((uVar1 ^ uVar2) & 4) == 0)) &&
         ((this->PermutationIdx == param_1->PermutationIdx &&
          (param_1->BlendParameterX == this->BlendParameterX)))) &&
        ((param_1->BlendParameterY == this->BlendParameterY &&
         ((this->FirstPoseIdx == param_1->FirstPoseIdx &&
          (this->FirstSampleIdx == param_1->FirstSampleIdx)))))) &&
       ((this->LastSampleIdx == param_1->LastSampleIdx &&
        (param_1->ToRealTimeFactor == this->ToRealTimeFactor)))) {
      return true;
    }
  }
  return false;
}

// GetExtrapolationTimeInterval @ 14a8fa950

FFloatInterval __thiscall
UE::PoseSearch::FSearchIndexAsset::GetExtrapolationTimeInterval
          (FSearchIndexAsset *this,int param_1,FFloatInterval *param_2)

{
  float fVar1;
  int iVar2;
  FFloatInterval FVar3;
  undefined4 in_register_00000014;
  float *in_R9;
  float fVar4;
  
  FVar3._4_4_ = in_register_00000014;
  FVar3._0_4_ = param_1;
  fVar4 = __real_3f800000 / (float)(int)param_2;
  iVar2 = this->LastSampleIdx;
  fVar1 = in_R9[1];
  *(float *)CONCAT44(in_register_00000014,param_1) = (float)this->FirstSampleIdx * fVar4 + *in_R9;
  *(float *)(CONCAT44(in_register_00000014,param_1) + 4) = (float)iVar2 * fVar4 + fVar1;
  return FVar3;
}

