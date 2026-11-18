// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// StaticStruct @ 146053c20

UScriptStruct * __cdecl FMovieSceneSegment::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSegment.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSegment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSegment,(UObject *)pUVar1,
                         L"MovieSceneSegment");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSegment.OuterSingleton;
}

// Serialize @ 14605c710

bool __thiscall FMovieSceneSegment::Serialize(FMovieSceneSegment *this,FArchive *param_1)

{
  FMovieSceneSegmentIdentifier *pFVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  TRangeBound<FFrameNumber> TVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FArchive *pFVar9;
  TRange<FFrameNumber> *pTVar10;
  UPackage *pUVar11;
  ForElementType<FSectionEvaluationData> FVar12;
  TArray<FSectionEvaluationData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar13;
  ForElementType<FSectionEvaluationData> FVar14;
  int iVar15;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  uint local_res18 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  uint local_50;
  TRange<float> local_48;
  TRange<FFrameNumber> local_38;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FSequencerObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) == 0) ||
     (iVar8 = FArchiveState::CustomVer((FArchiveState *)param_1,&FSequencerObjectVersion::GUID),
     6 < iVar8)) {
    ::operator<<(param_1,&this->Range);
  }
  else {
    local_48.LowerBound.Type.Value = '\x02';
    local_48.LowerBound.Value = 0.0;
    local_48.UpperBound.Type.Value = '\x02';
    local_48.UpperBound.Value = 0.0;
    pFVar9 = ::operator<<(param_1,&local_48.LowerBound);
    ::operator<<(pFVar9,&local_48.UpperBound);
    pTVar10 = FMovieSceneFrameRange::FromFloatRange(&local_38,&local_48);
    TVar5 = pTVar10->UpperBound;
    (this->Range).LowerBound = pTVar10->LowerBound;
    (this->Range).UpperBound = TVar5;
  }
  iVar8 = FArchiveState::CustomVer((FArchiveState *)param_1,&FSequencerObjectVersion::GUID);
  iVar15 = 0;
  if (4 < iVar8) {
    pFVar1 = &this->ID;
    piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar1);
      }
    }
    else {
      pFVar1->IdentifierIndex = *piVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
      local_res18[0] = 0;
      if ((param_1->field_0x28 & 1) == 0) {
        local_res18[0] = (uint)(this->bAllowEmpty != false);
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      if (1 < local_res18[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      if ((param_1->field_0x28 & 1) != 0) {
        this->bAllowEmpty = local_res18[0] != 0;
      }
    }
    else {
      this->bAllowEmpty = *piVar2 != 0;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = (this->Impls).ArrayNum;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      FVar14 = (this->Impls).AllocatorInstance.SecondaryData;
      iVar8 = (this->Impls).ArrayNum;
      if (FVar14 == (ForElementType<FSectionEvaluationData>)0x0) {
        FVar14 = (ForElementType<FSectionEvaluationData>)&this->Impls;
      }
      FVar12 = (ForElementType<FSectionEvaluationData>)((longlong)FVar14 + (longlong)iVar8 * 0xc);
      while( true ) {
        if ((this->Impls).ArrayNum != iVar8) {
          `TCheckedPointerIterator<FSectionEvaluationData,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (FVar14 == FVar12) break;
        if (Z_Registration_Info_UScriptStruct_FSectionEvaluationData.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_MovieScene();
          Z_Registration_Info_UScriptStruct_FSectionEvaluationData.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FSectionEvaluationData,(UObject *)pUVar11,
                               L"SectionEvaluationData");
        }
        UScriptStruct::SerializeItem
                  (Z_Registration_Info_UScriptStruct_FSectionEvaluationData.OuterSingleton,param_1,
                   (void *)FVar14,(void *)0x0);
        FVar14 = (ForElementType<FSectionEvaluationData>)((longlong)FVar14 + 0xc);
      }
    }
  }
  else if (0 < (int)local_res10[0]) {
    pTVar13 = &this->Impls;
    do {
      local_58 = 0xffffffff;
      uStack_54 = 0x80000000;
      local_50 = local_50 & 0xffffff00;
      if (Z_Registration_Info_UScriptStruct_FSectionEvaluationData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_MovieScene();
        Z_Registration_Info_UScriptStruct_FSectionEvaluationData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FSectionEvaluationData,(UObject *)pUVar11,
                             L"SectionEvaluationData");
      }
      UScriptStruct::SerializeItem
                (Z_Registration_Info_UScriptStruct_FSectionEvaluationData.OuterSingleton,param_1,
                 &local_58,(void *)0x0);
      FVar14 = (this->Impls).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FSectionEvaluationData>)pTVar13;
      if (FVar14 != (ForElementType<FSectionEvaluationData>)0x0) {
        FVar12 = FVar14;
      }
      if ((ulonglong)FVar12 <= &local_58) {
        FVar12 = (ForElementType<FSectionEvaluationData>)pTVar13;
        if (FVar14 != (ForElementType<FSectionEvaluationData>)0x0) {
          FVar12 = FVar14;
        }
        if ((&local_58 < (undefined4 *)((longlong)FVar12 + (longlong)(this->Impls).ArrayMax * 0xc))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      iVar8 = (this->Impls).ArrayNum;
      if (iVar8 == (this->Impls).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSectionEvaluationData>_>
                          (0x40c,&pTVar13->AllocatorInstance,&(this->Impls).ArrayMax);
      }
      (this->Impls).ArrayNum = iVar8 + 1;
      FVar14 = (this->Impls).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FSectionEvaluationData>)pTVar13;
      if (FVar14 != (ForElementType<FSectionEvaluationData>)0x0) {
        FVar12 = FVar14;
      }
      iVar15 = iVar15 + 1;
      *(ulonglong *)((longlong)FVar12 + (longlong)iVar8 * 0xc) = CONCAT44(uStack_54,local_58);
      *(uint *)((uchar *)((longlong)FVar12 + 8) + (longlong)iVar8 * 0xc) = local_50;
    } while (iVar15 < (int)local_res10[0]);
  }
  return true;
}

