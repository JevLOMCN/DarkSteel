// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// StaticStruct @ 146592700

UScriptStruct * __cdecl FMovieSceneEventSectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEventSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneEventSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate,(UObject *)pUVar1
                         ,L"MovieSceneEventSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEventSectionTemplate.OuterSingleton;
}

// GetScriptStructImpl @ 146592740

UScriptStruct * __thiscall
FMovieSceneEventSectionTemplate::GetScriptStructImpl(FMovieSceneEventSectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEventSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneEventSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate,(UObject *)pUVar1
                         ,L"MovieSceneEventSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEventSectionTemplate.OuterSingleton;
}

// EvaluateSwept @ 146592780

/* WARNING: Removing unreachable block (ram,0x000146592c04) */
/* WARNING: Removing unreachable block (ram,0x000146592e82) */
/* WARNING: Removing unreachable block (ram,0x000146592c12) */
/* WARNING: Removing unreachable block (ram,0x000146592e90) */

void __thiscall
FMovieSceneEventSectionTemplate::EvaluateSwept
          (FMovieSceneEventSectionTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,TRange<FFrameNumber> *param_3,
          FPersistentEvaluationData *param_4,FMovieSceneExecutionTokens *param_5)

{
  uchar uVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FMovieSceneInverseSequenceTransform *this_00;
  longlong lVar9;
  TRangeBound<FFrameNumber> *pTVar10;
  int iVar11;
  TRange<FFrameNumber> *pTVar12;
  uint uVar13;
  FFrameNumber FVar14;
  FFrameTime FVar15;
  FMovieSceneContext *pFVar16;
  FFrameTime FVar17;
  FEventPayload *pFVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType local_178;
  undefined8 local_170;
  int local_168;
  uint local_164;
  undefined4 uStack_160;
  undefined8 local_15c;
  TRange<FFrameNumber> local_154;
  TRange<FFrameNumber> local_144;
  FMovieSceneEventData local_130;
  FMovieSceneEventData local_e0;
  FEventTrackExecutionToken local_90;
  FFrameTime local_78;
  TOptional<FFrameTime> local_70;
  FMovieSceneInverseSequenceTransform local_60;
  
  if ((param_2->Status != Stopped) && (!param_2->bSilent)) {
    iVar8 = (int)param_2->_padding_;
    if (iVar8 == 1) {
      uVar13 = *(undefined4 *)&this->field_0x130 & 2;
    }
    else {
      uVar13 = ZPULL(*(undefined4 *)&this->field_0x130,0,1);
    }
    if (uVar13 != 0) {
      iVar2 = (this->EventData).Times.ArrayNum;
      pFVar19 = (this->EventData).Times.AllocatorInstance.Data;
      local_178.Data = (FScriptContainerElement *)0x0;
      local_170 = 0;
      if ((iVar2 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_168 = (this->EventData).KeyValues.ArrayNum;
      pFVar18 = (FEventPayload *)(this->EventData).KeyValues.AllocatorInstance.Data;
      if ((local_168 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = FMovieSceneSequenceTransform::Inverse(&param_2->RootToSequenceTransform,&local_60);
      uVar13 = *(uint *)((longlong)&param_2->_padding_ + 4);
      if (uVar13 == 0x80000000) {
        if ((int)param_2->_padding_ == 0) {
          pFVar16 = (FMovieSceneContext *)((longlong)&param_2->_padding_ + 4);
          if ((*(char *)((longlong)&param_2->_padding_ + 4) == '\x02') &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          pFVar16 = param_2;
          if (((char)param_2->_padding_ == '\x02') &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        FVar17 = *(FFrameTime *)((longlong)&pFVar16->_padding_ + 4);
      }
      else {
        uStack_160 = 0;
        FVar17.SubFrame = 0.0;
        FVar17.FrameNumber.Value = uVar13;
        local_164 = uVar13;
      }
      FMovieSceneInverseSequenceTransform::TryTransformTime(this_00,&local_70,FVar17);
      if (local_60.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.NestedTransforms.AllocatorInstance.Data);
      }
      FVar15.FrameNumber.Value = 0;
      FVar15.SubFrame = 0.0;
      local_15c = 0;
      local_78 = FVar15;
      if (local_70.bIsSet != false) {
        local_78 = local_70.TypedValue;
      }
      FVar17 = local_78;
      iVar11 = (int)((ulonglong)param_2->_padding_ >> 0x20);
      fVar4 = ((float)((longlong)local_78.FrameNumber.Value.Value * (longlong)iVar11) +
              local_78.SubFrame * (float)iVar11) / (float)(int)param_2->_padding_;
      local_78 = FVar17;
      if (iVar8 == 1) {
        uVar13 = iVar2 - 1;
        if (-1 < (int)uVar13) {
          pFVar19 = pFVar19 + (longlong)(int)uVar13 * 4;
          pFVar18 = pFVar18 + (int)uVar13;
          do {
            uVar7 = 0;
            if ((int)uVar13 < iVar2) {
              uVar7 = ~uVar13 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar1 = (param_3->LowerBound).Type.Value;
            local_154.LowerBound.Value.Value = *(int *)pFVar19;
            local_154.LowerBound.Type.Value = '\x01';
            if (uVar1 == '\x02') {
LAB_146592a4d:
              uVar1 = (param_3->UpperBound).Type.Value;
              pTVar10 = &param_3->UpperBound;
              local_154.UpperBound.Type.Value = '\x01';
              local_154.UpperBound.Value.Value = local_154.LowerBound.Value.Value;
              if (uVar1 != '\x02') {
                iVar8 = (param_3->UpperBound).Value.Value;
                if (iVar8 <= local_154.LowerBound.Value.Value) {
                  if (iVar8 < local_154.LowerBound.Value.Value) {
                    pTVar10 = &local_154.UpperBound;
                  }
                  if (uVar1 != '\x01') goto LAB_146592c17;
                }
                if ((pTVar10->Value).Value != (param_3->UpperBound).Value.Value) goto LAB_146592c17;
              }
              uVar7 = 0;
              if ((int)uVar13 < local_168) {
                uVar7 = ~uVar13 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FEventPayload::FEventPayload(&local_130.Payload,pFVar18);
              local_130.GlobalPosition = fVar4;
              if (((local_178.Data <= &local_130) &&
                  (&local_130 <
                   (FMovieSceneEventData *)(local_178.Data + (longlong)local_170._4_4_ * 0x50))) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar8 = (int)local_170;
              if ((int)local_170 == local_170._4_4_) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x850,&local_178,(int *)((longlong)&local_170 + 4));
              }
              lVar9 = (longlong)iVar8;
              local_170 = CONCAT44(local_170._4_4_,iVar8 + 1);
              *(FName *)&local_178.Data[lVar9 * 0x50].field_0x0 = local_130.Payload.EventName;
              *(FName *)(local_178.Data + lVar9 * 0x50 + 8) =
                   local_130.Payload.Parameters.StructType.AssetPath.PackageName;
              ((FName *)(local_178.Data + lVar9 * 0x50 + 8))[1] =
                   local_130.Payload.Parameters.StructType.AssetPath.AssetName;
              *(undefined8 *)(local_178.Data + lVar9 * 0x50 + 0x18) = 0;
              *(FScriptContainerElement **)(local_178.Data + lVar9 * 0x50 + 0x18) =
                   local_130.Payload.Parameters.StructType.SubPathString.Data.AllocatorInstance.Data
              ;
              local_130.Payload.Parameters.StructType.SubPathString.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)(local_178.Data + lVar9 * 0x50 + 0x20) =
                   local_130.Payload.Parameters.StructType.SubPathString.Data.ArrayNum;
              *(int *)(local_178.Data + lVar9 * 0x50 + 0x24) =
                   local_130.Payload.Parameters.StructType.SubPathString.Data.ArrayMax;
              local_130.Payload.Parameters.StructType.SubPathString.Data.ArrayNum = 0;
              local_130.Payload.Parameters.StructType.SubPathString.Data.ArrayMax = 0;
              *(FPackageFileVersion *)(local_178.Data + lVar9 * 0x50 + 0x28) =
                   local_130.Payload.Parameters.PackageFileVersion;
              *(int *)(local_178.Data + lVar9 * 0x50 + 0x30) =
                   local_130.Payload.Parameters.LicenseePackageFileVersion;
              *(undefined8 *)(local_178.Data + lVar9 * 0x50 + 0x38) = 0;
              *(FScriptContainerElement **)(local_178.Data + lVar9 * 0x50 + 0x38) =
                   local_130.Payload.Parameters.StructBytes.AllocatorInstance.Data;
              local_130.Payload.Parameters.StructBytes.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)(local_178.Data + lVar9 * 0x50 + 0x40) =
                   local_130.Payload.Parameters.StructBytes.ArrayNum;
              *(int *)(local_178.Data + lVar9 * 0x50 + 0x44) =
                   local_130.Payload.Parameters.StructBytes.ArrayMax;
              local_130.Payload.Parameters.StructBytes.ArrayNum = 0;
              local_130.Payload.Parameters.StructBytes.ArrayMax = 0;
              *(float *)(local_178.Data + lVar9 * 0x50 + 0x48) = local_130.GlobalPosition;
              local_130.Payload.Parameters.StructBytes.ArrayNum = 0;
              local_130.Payload.Parameters.StructBytes.ArrayMax = 0;
              local_130.Payload.Parameters.StructBytes.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              local_130.Payload.Parameters.StructType.SubPathString.Data.ArrayNum = 0;
              local_130.Payload.Parameters.StructType.SubPathString.Data.ArrayMax = 0;
              local_130.Payload.Parameters.StructType.SubPathString.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
            }
            else {
              iVar8 = (param_3->LowerBound).Value.Value;
              pTVar12 = param_3;
              if (iVar8 < local_154.LowerBound.Value.Value) {
LAB_146592a41:
                if ((pTVar12->LowerBound).Value.Value == (param_3->LowerBound).Value.Value)
                goto LAB_146592a4d;
              }
              else {
                if (local_154.LowerBound.Value.Value < iVar8) {
                  pTVar12 = &local_154;
                }
                if (uVar1 == '\x01') goto LAB_146592a41;
              }
            }
LAB_146592c17:
            pFVar18 = pFVar18 + -1;
            pFVar19 = pFVar19 + -4;
            uVar13 = uVar13 - 1;
          } while (-1 < (int)uVar13);
        }
      }
      else if (0 < iVar2) {
        do {
          FVar14 = FVar15.FrameNumber.Value;
          if ((FVar14.Value < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar1 = (param_3->LowerBound).Type.Value;
          local_144.LowerBound.Value.Value = *(int *)pFVar19;
          local_144.LowerBound.Type.Value = '\x01';
          if (uVar1 == '\x02') {
LAB_146592ccd:
            uVar1 = (param_3->UpperBound).Type.Value;
            pTVar10 = &param_3->UpperBound;
            local_144.UpperBound.Type.Value = '\x01';
            local_144.UpperBound.Value.Value = local_144.LowerBound.Value.Value;
            if (uVar1 != '\x02') {
              iVar8 = (param_3->UpperBound).Value.Value;
              if (iVar8 <= local_144.LowerBound.Value.Value) {
                if (iVar8 < local_144.LowerBound.Value.Value) {
                  pTVar10 = &local_144.UpperBound;
                }
                if (uVar1 != '\x01') goto LAB_146592e95;
              }
              if ((pTVar10->Value).Value != (param_3->UpperBound).Value.Value) goto LAB_146592e95;
            }
            uVar13 = 0;
            if (FVar14.Value < local_168) {
              uVar13 = (uint)~FVar14.Value >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FEventPayload::FEventPayload(&local_e0.Payload,pFVar18);
            local_e0.GlobalPosition = fVar4;
            if (((local_178.Data <= &local_e0) &&
                (&local_e0 <
                 (FMovieSceneEventData *)(local_178.Data + (longlong)local_170._4_4_ * 0x50))) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar8 = (int)local_170;
            if ((int)local_170 == local_170._4_4_) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x850,&local_178,(int *)((longlong)&local_170 + 4));
            }
            lVar9 = (longlong)iVar8;
            local_170 = CONCAT44(local_170._4_4_,iVar8 + 1);
            *(FName *)&local_178.Data[lVar9 * 0x50].field_0x0 = local_e0.Payload.EventName;
            *(FName *)(local_178.Data + lVar9 * 0x50 + 8) =
                 local_e0.Payload.Parameters.StructType.AssetPath.PackageName;
            ((FName *)(local_178.Data + lVar9 * 0x50 + 8))[1] =
                 local_e0.Payload.Parameters.StructType.AssetPath.AssetName;
            *(undefined8 *)(local_178.Data + lVar9 * 0x50 + 0x18) = 0;
            *(FScriptContainerElement **)(local_178.Data + lVar9 * 0x50 + 0x18) =
                 local_e0.Payload.Parameters.StructType.SubPathString.Data.AllocatorInstance.Data;
            local_e0.Payload.Parameters.StructType.SubPathString.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            *(int *)(local_178.Data + lVar9 * 0x50 + 0x20) =
                 local_e0.Payload.Parameters.StructType.SubPathString.Data.ArrayNum;
            *(int *)(local_178.Data + lVar9 * 0x50 + 0x24) =
                 local_e0.Payload.Parameters.StructType.SubPathString.Data.ArrayMax;
            local_e0.Payload.Parameters.StructType.SubPathString.Data.ArrayNum = 0;
            local_e0.Payload.Parameters.StructType.SubPathString.Data.ArrayMax = 0;
            *(FPackageFileVersion *)(local_178.Data + lVar9 * 0x50 + 0x28) =
                 local_e0.Payload.Parameters.PackageFileVersion;
            *(int *)(local_178.Data + lVar9 * 0x50 + 0x30) =
                 local_e0.Payload.Parameters.LicenseePackageFileVersion;
            *(undefined8 *)(local_178.Data + lVar9 * 0x50 + 0x38) = 0;
            *(FScriptContainerElement **)(local_178.Data + lVar9 * 0x50 + 0x38) =
                 local_e0.Payload.Parameters.StructBytes.AllocatorInstance.Data;
            local_e0.Payload.Parameters.StructBytes.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            *(int *)(local_178.Data + lVar9 * 0x50 + 0x40) =
                 local_e0.Payload.Parameters.StructBytes.ArrayNum;
            *(int *)(local_178.Data + lVar9 * 0x50 + 0x44) =
                 local_e0.Payload.Parameters.StructBytes.ArrayMax;
            local_e0.Payload.Parameters.StructBytes.ArrayNum = 0;
            local_e0.Payload.Parameters.StructBytes.ArrayMax = 0;
            *(float *)(local_178.Data + lVar9 * 0x50 + 0x48) = local_e0.GlobalPosition;
            local_e0.Payload.Parameters.StructBytes.ArrayNum = 0;
            local_e0.Payload.Parameters.StructBytes.ArrayMax = 0;
            local_e0.Payload.Parameters.StructBytes.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_e0.Payload.Parameters.StructType.SubPathString.Data.ArrayNum = 0;
            local_e0.Payload.Parameters.StructType.SubPathString.Data.ArrayMax = 0;
            local_e0.Payload.Parameters.StructType.SubPathString.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
          }
          else {
            iVar8 = (param_3->LowerBound).Value.Value;
            pTVar12 = param_3;
            if (iVar8 < local_144.LowerBound.Value.Value) {
LAB_146592cc1:
              if ((pTVar12->LowerBound).Value.Value == (param_3->LowerBound).Value.Value)
              goto LAB_146592ccd;
            }
            else {
              if (local_144.LowerBound.Value.Value < iVar8) {
                pTVar12 = &local_144;
              }
              if (uVar1 == '\x01') goto LAB_146592cc1;
            }
          }
LAB_146592e95:
          FVar15.FrameNumber.Value = FVar14.Value + 1;
          FVar15.SubFrame = 0.0;
          pFVar18 = pFVar18 + 1;
          pFVar19 = pFVar19 + 4;
        } while (FVar15.FrameNumber.Value < iVar2);
      }
      iVar8 = 0;
      if ((int)local_170 != 0) {
        local_90.Events.ArrayMax = local_170._4_4_;
        local_90.Events.AllocatorInstance.Data = local_178.Data;
        local_90.Events.ArrayNum = (int)local_170;
        local_178.Data = (FScriptContainerElement *)0x0;
        local_170 = 0;
        local_90._padding_ = (longlong)&___7FEventTrackExecutionToken__6B_;
        DestructItems<FMovieSceneEventData,int>((FMovieSceneEventData *)0x0,0);
        FMovieSceneExecutionTokens::Add<FEventTrackExecutionToken>(param_5,&local_90);
        FVar5.Data = local_90.Events.AllocatorInstance.Data;
        DestructItems<FMovieSceneEventData,int>
                  ((FMovieSceneEventData *)local_90.Events.AllocatorInstance.Data,
                   local_90.Events.ArrayNum);
        if ((FMovieSceneEventData *)FVar5.Data != (FMovieSceneEventData *)0x0) {
          FMemory::Free(FVar5.Data);
        }
        iVar8 = (int)local_170;
      }
      DestructItems<FMovieSceneEventData,int>((FMovieSceneEventData *)local_178.Data,iVar8);
      if ((FMovieSceneEventData *)local_178.Data != (FMovieSceneEventData *)0x0) {
        FMemory::Free(local_178.Data);
      }
    }
  }
  return;
}

// FMovieSceneEventSectionTemplate @ 1466105f0

FMovieSceneEventSectionTemplate * __thiscall
FMovieSceneEventSectionTemplate::FMovieSceneEventSectionTemplate
          (FMovieSceneEventSectionTemplate *this,UMovieSceneEventSection *param_1,
          UMovieSceneEventTrack *param_2)

{
  int *piVar1;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FEventPayload,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FEventPayload *pFVar5;
  uint uVar6;
  
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneEventSectionTemplate__6B_;
  FMovieSceneChannel::FMovieSceneChannel
            ((FMovieSceneChannel *)&this->EventData,(FMovieSceneChannel *)&param_1->EventData);
  pTVar2 = &(this->EventData).Times;
  (this->EventData)._padding_ = (longlong)&___7FMovieSceneEventSectionData__6B_;
  piVar1 = &(this->EventData).Times.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->EventData).Times.ArrayNum;
  _Src = (param_1->EventData).Times.AllocatorInstance.Data;
  (this->EventData).Times.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 << 2);
  }
  pTVar3 = &(this->EventData).KeyValues;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->EventData).KeyValues.ArrayMax;
  iVar4 = (param_1->EventData).KeyValues.ArrayNum;
  pFVar5 = (FEventPayload *)(param_1->EventData).KeyValues.AllocatorInstance.Data;
  (this->EventData).KeyValues.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    ConstructItems<FEventPayload,FEventPayload,int>((pTVar3->AllocatorInstance).Data,pFVar5,iVar4);
  }
  *(undefined8 *)&(this->EventData).KeyHandles = 0;
  *(undefined8 *)&(this->EventData).KeyHandles.field_0x8 = 0;
  *(undefined8 *)&(this->EventData).KeyHandles.field_0x20 = 0;
  *(undefined4 *)&(this->EventData).KeyHandles.field_0x28 = 0;
  *(undefined4 *)&(this->EventData).KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&(this->EventData).KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EventData).KeyHandles.field_0x34 = 0;
  *(undefined8 *)&(this->EventData).KeyHandles.field_0x38 = 0;
  *(undefined8 *)&(this->EventData).KeyHandles.field_0x40 = 0;
  *(undefined8 *)&(this->EventData).KeyHandles.field_0x58 = 0;
  *(undefined4 *)&(this->EventData).KeyHandles.field_0x60 = 0;
  *(undefined4 *)&(this->EventData).KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&(this->EventData).KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&(this->EventData).KeyHandles.field_0x6c = 0;
  *(undefined8 *)&(this->EventData).KeyHandles.field_0x78 = 0;
  *(undefined4 *)&(this->EventData).KeyHandles.field_0x80 = 0;
  uVar6 = (ZPULL(*(undefined4 *)&this->field_0x130,0,1) ^ param_2->bFireEventsWhenForwards) & 1 ^
          *(undefined4 *)&this->field_0x130;
  *(uint *)&this->field_0x130 = uVar6;
  *(uint *)&this->field_0x130 = (uVar6 ^ *(uint *)&param_2->field_0x128) & 2 ^ uVar6;
  return this;
}

// FMovieSceneEventSectionTemplate @ 1466107d0

FMovieSceneEventSectionTemplate * __thiscall
FMovieSceneEventSectionTemplate::FMovieSceneEventSectionTemplate
          (FMovieSceneEventSectionTemplate *this)

{
  undefined1 *puVar1;
  
  (this->EventData)._padding_ = 2;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7FMovieSceneEventSectionTemplate__6B_;
  (this->EventData)._padding_ = (longlong)&___7FMovieSceneEventSectionData__6B_;
  (this->EventData)._padding_ = 0;
  (this->EventData)._padding_ = 0;
  (this->EventData)._padding_ = 0;
  (this->EventData)._padding_ = 0;
  (this->EventData)._padding_ = 0;
  (this->EventData)._padding_ = 0;
  (this->EventData)._padding_ = 2;
  (this->EventData)._padding_ = 0;
  (this->EventData)._padding_ = 0;
  (this->EventData)._padding_ = 0;
  (this->EventData)._padding_ = 2;
  (this->EventData).Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventData).Times.ArrayNum = 0;
  (this->EventData).Times.ArrayMax = 0;
  (this->EventData).KeyValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventData).KeyValues.ArrayNum = 0;
  (this->EventData).KeyValues.ArrayMax = 0;
  *(undefined8 *)&(this->EventData).KeyHandles = 0;
  *(undefined8 *)&(this->EventData).KeyHandles.field_0x8 = 0;
  *(undefined8 *)&(this->EventData).KeyHandles.field_0x20 = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)&(this->EventData).KeyHandles.field_0x28 = 0;
  *(undefined4 *)&(this->EventData).KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&(this->EventData).KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EventData).KeyHandles.field_0x34 = 0;
  *(undefined8 *)&(this->EventData).KeyHandles.field_0x38 = 0;
  *(undefined8 *)&(this->EventData).KeyHandles.field_0x40 = 0;
  *(undefined8 *)&(this->EventData).KeyHandles.field_0x58 = 0;
  *(undefined4 *)&(this->EventData).KeyHandles.field_0x60 = 0;
  *(undefined4 *)&(this->EventData).KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&(this->EventData).KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&(this->EventData).KeyHandles.field_0x6c = 0;
  *(undefined8 *)&(this->EventData).KeyHandles.field_0x78 = 0;
  *(undefined4 *)&(this->EventData).KeyHandles.field_0x80 = 0;
  this->bFireEventsWhenForwards = 0;
  this->bFireEventsWhenBackwards = 0;
  return this;
}

