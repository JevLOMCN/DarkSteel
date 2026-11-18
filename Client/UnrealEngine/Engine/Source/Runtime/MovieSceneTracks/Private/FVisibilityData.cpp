// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// Add @ 1468193a0

void __thiscall
UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::Add
          (FVisibilityData *this,FMovieSceneEntityID param_1,FInstanceHandle param_2,int param_3,
          ELevelVisibility param_4)

{
  TArray<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
  FVar7;
  ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
  FVar8;
  undefined1 local_res8 [8];
  FInstanceHandle local_38;
  ushort uStack_34;
  undefined2 uStack_32;
  int iStack_30;
  undefined4 uStack_2c;
  
  FVar7 = (this->Requests).AllocatorInstance.SecondaryData;
  pTVar1 = &this->Requests;
  iVar6 = (this->Requests).ArrayNum;
  if (FVar7 == (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
                )0x0) {
    FVar7 = (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
             )pTVar1;
  }
  FVar8 = (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
           )((longlong)iVar6 * 0x10 + (longlong)FVar7);
  while( true ) {
    if ((this->Requests).ArrayNum != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar7 == FVar8) goto LAB_146819425;
    if (*(ushort *)((longlong)FVar7 + 4) == param_1.Value) break;
    FVar7 = (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
             )((longlong)FVar7 + 0x10);
  }
  if (FVar7 == (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
                )0x0) {
LAB_146819425:
    FVar7 = (this->Requests).AllocatorInstance.SecondaryData;
    uStack_2c = CONCAT31(uStack_2c._1_3_,param_4);
    if (FVar7 == (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
                  )0x0) {
      FVar7 = (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
               )pTVar1;
    }
    local_38 = param_2;
    uStack_34 = param_1.Value;
    iStack_30 = param_3;
    if (((ulonglong)FVar7 <= &local_38) &&
       (&local_38 <
        (FInstanceHandle *)((longlong)(this->Requests).ArrayMax * 0x10 + (longlong)FVar7))) {
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
    iVar6 = (this->Requests).ArrayNum;
    piVar2 = &(this->Requests).ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>_>
                        (0x410,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->Requests).ArrayNum = iVar6 + 1;
    FVar7 = (this->Requests).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
                  )0x0) {
      FVar7 = (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
               )pTVar1;
    }
    puVar3 = (undefined8 *)((longlong)FVar7 + (longlong)iVar6 * 0x10);
    *puVar3 = CONCAT26(uStack_32,CONCAT24(uStack_34,local_38));
    puVar3[1] = CONCAT44(uStack_2c,iStack_30);
  }
  else {
    *(ELevelVisibility *)((longlong)FVar7 + 0xc) = param_4;
    *(int *)((longlong)FVar7 + 8) = param_3;
  }
  return;
}

// CalculateVisibility @ 146820920

TOptional<ELevelVisibility> __thiscall
UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::CalculateVisibility
          (FVisibilityData *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong in_RDX;
  ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
  FVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 local_res8 [8];
  
  FVar4 = (this->Requests).AllocatorInstance.SecondaryData;
  iVar1 = (this->Requests).ArrayNum;
  if (FVar4 == (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
                )0x0) {
    FVar4 = (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
             )&this->Requests;
  }
  piVar5 = (int *)((longlong)FVar4 + 8);
  iVar6 = -0x80000000;
  iVar7 = 0;
  while( true ) {
    if ((this->Requests).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (piVar5 + -2 == (int *)((longlong)iVar1 * 0x10 + (longlong)FVar4)) break;
    iVar2 = *piVar5;
    iVar3 = -1;
    if ((char)piVar5[1] == '\0') {
      iVar3 = 1;
    }
    if (iVar6 < iVar2) {
      piVar5 = piVar5 + 4;
      iVar6 = iVar2;
      iVar7 = iVar3;
    }
    else {
      if (iVar2 == iVar6) {
        iVar7 = iVar7 + iVar3;
      }
      piVar5 = piVar5 + 4;
    }
  }
  *(undefined1 *)(in_RDX + 1) = 0;
  if (iVar7 != 0) {
    *(undefined1 *)(in_RDX + 1) = 1;
    *(bool *)in_RDX = iVar7 < 1;
  }
  return SUB82(in_RDX,0);
}

// GetSharedPlaybackStates @ 1468376d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::GetSharedPlaybackStates
          (FVisibilityData *this,FInstanceRegistry *param_1,
          TArray<TSharedRef<UE::MovieScene::FSharedPlaybackState,1>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 *puVar7;
  ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
  FVar8;
  ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
  FVar9;
  undefined1 local_res8 [8];
  short sStackX_22;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_48;
  
  iVar1 = (this->Requests).ArrayNum;
  FVar8 = (this->Requests).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
                )0x0) {
    FVar8 = (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
             )&this->Requests;
  }
  FVar9 = (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
           )((longlong)iVar1 * 0x10 + (longlong)FVar8);
  while( true ) {
    if ((this->Requests).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar8 == FVar9) break;
    uVar2 = *(uint *)FVar8;
    if ((int)(uVar2 & 0xffff) < *(int *)&(param_1->Instances).field_0x28) {
      if ((*(int *)&(param_1->Instances).field_0x28 <= (int)(uVar2 & 0xffff)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar3 = *(undefined1 **)&(param_1->Instances).field_0x20;
      puVar7 = &(param_1->Instances).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar7 = puVar3;
      }
      if ((*(uint *)(puVar7 + (ulonglong)((uVar2 & 0xffff) >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
        lVar4 = *(longlong *)&param_1->Instances;
        sStackX_22 = (short)(uVar2 >> 0x10);
        if (*(short *)((ulonglong)(uVar2 & 0xffff) * 0x140 + 0x134 + lVar4) == sStackX_22) {
          local_48.Object =
               *(FSharedPlaybackState **)((ulonglong)*(ushort *)FVar8 * 0x140 + 0x118 + lVar4);
          local_48.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)
                ((ulonglong)*(ushort *)FVar8 * 0x140 + 0x120 + lVar4);
          if (local_48.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          TArray<TSharedRef<UE::MovieScene::FSharedPlaybackState,1>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<TSharedRef<UE::MovieScene::FSharedPlaybackState,1>_const_&>
                    (param_2,&local_48);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48.SharedReferenceCount.ReferenceController);
        }
      }
    }
    FVar8 = (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
             )((longlong)FVar8 + 0x10);
  }
  return;
}

// IsEmpty @ 14683f030

bool __thiscall
UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::IsEmpty(FVisibilityData *this)

{
  return (this->Requests).ArrayNum == 0;
}

// Remove @ 14685e6b0

void __thiscall
UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::Remove
          (FVisibilityData *this,FMovieSceneEntityID param_1)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
  FVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = (this->Requests).ArrayNum;
  lVar3 = (longlong)iVar1;
  if (iVar1 != 0) {
    FVar8 = (this->Requests).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
                  )0x0) {
      FVar8 = (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
               )&this->Requests;
    }
    iVar9 = 0;
    bVar10 = *(ushort *)((longlong)FVar8 + 4) != param_1.Value;
    lVar7 = 0;
    iVar5 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar6 = iVar5 + 1;
      if (lVar7 < lVar3) {
        puVar4 = (ushort *)(lVar7 * 0x10 + 4 + (longlong)FVar8);
        do {
          if (bVar10 != (*puVar4 != param_1.Value)) break;
          iVar6 = iVar6 + 1;
          lVar7 = lVar7 + 1;
          puVar4 = puVar4 + 8;
        } while (lVar7 < lVar3);
      }
      if (bVar10 != false) {
        if (iVar9 != iVar5) {
          memmove((void *)((longlong)iVar9 * 0x10 + (longlong)FVar8),
                  (void *)((longlong)iVar5 * 0x10 + (longlong)FVar8),(longlong)(iVar6 - iVar5) << 4)
          ;
        }
        iVar9 = iVar9 + (iVar6 - iVar5);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar5 = iVar6;
    } while (lVar7 < lVar3);
    (this->Requests).ArrayNum = iVar9;
    if (1 < iVar1 - iVar9) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumRemoved <= 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneLevelVisibilitySystem.cpp"
                          ,0x158,L"");
      if (bVar10) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

