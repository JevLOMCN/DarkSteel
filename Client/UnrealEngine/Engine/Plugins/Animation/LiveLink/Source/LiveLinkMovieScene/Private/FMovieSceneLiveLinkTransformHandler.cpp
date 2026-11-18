// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 7

// ~FMovieSceneLiveLinkTransformHandler @ 14d09ef40

void __thiscall
FMovieSceneLiveLinkTransformHandler::~FMovieSceneLiveLinkTransformHandler
          (FMovieSceneLiveLinkTransformHandler *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FLiveLinkTransformKeys,int>
            ((FLiveLinkTransformKeys *)(this->BufferedTransformsPerElement).AllocatorInstance.Data,
             (this->BufferedTransformsPerElement).ArrayNum);
  pFVar1 = (this->BufferedTransformsPerElement).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertyBinding).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// CreateChannels @ 14d0a53e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMovieSceneLiveLinkTransformHandler::CreateChannels
          (FMovieSceneLiveLinkTransformHandler *this,UScriptStruct *param_1,int param_2)

{
  TArray<FLiveLinkTransformKeys,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  FNameEntryId FVar6;
  int iVar7;
  FProperty *pFVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  pFVar8 = FLiveLinkStructPropertyBindings::GetProperty(&this->PropertyBinding,param_1);
  if ((param_2 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InElementCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkTransformHandler.cpp"
                         ,0x78,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pFVar8 == (FProperty *)0x0) {
LAB_14d0a54e5:
    pFVar8 = (FProperty *)0x0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    uVar1 = *(uint *)(pFVar8->_padding_ + 0x18);
    if ((uVar1 >> 0x15 & 1) != 0) {
      lVar10 = pFVar8[1]._padding_;
      if ((lVar10 == 0) || ((*(uint *)(*(longlong *)(lVar10 + 8) + 0x18) >> 0x14 & 1) == 0)) {
        lVar10 = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x472,L"CastFieldChecked failed with 0x%016llx");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar3 = *(ulonglong *)(*(longlong *)(lVar10 + 0x70) + 0x18);
      FVar6 = FNameEntryId::FromValidEName((EName)local_res18);
      if ((uVar3 != *(uint *)CONCAT44(extraout_var,FVar6.Value)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayInnerProperty->Struct->GetFName() == NAME_Transform",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkTransformHandler.cpp"
                             ,0x7d,L""), bVar5)) goto code_r0x00014d0a5555;
      goto LAB_14d0a5556;
    }
    if ((uVar1 >> 0x14 & 1) == 0) goto LAB_14d0a54e5;
  }
  uVar3 = *(ulonglong *)(pFVar8[1]._padding_ + 0x18);
  FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
  if ((uVar3 != *(uint *)CONCAT44(extraout_var_00,FVar6.Value)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructProperty->Struct->GetFName() == NAME_Transform",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkTransformHandler.cpp"
                         ,0x82,L""), bVar5)) {
code_r0x00014d0a5555:
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14d0a5556:
  this->ElementCount = param_2;
  TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_>::SetNum
            (&this->PropertyStorage->FloatChannel,param_2 * 9,Default);
  uVar1 = this->ElementCount;
  this_00 = &this->BufferedTransformsPerElement;
  iVar2 = (this->BufferedTransformsPerElement).ArrayNum;
  if (iVar2 < (int)uVar1) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xa0,8,uVar1 - iVar2,&this_00->AllocatorInstance,
                       &(this->BufferedTransformsPerElement).ArrayNum,
                       &(this->BufferedTransformsPerElement).ArrayMax);
    DefaultConstructItems<FLiveLinkTransformKeys,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar7 * 0xa0,uVar1 - iVar2);
    return;
  }
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if ((int)uVar1 < iVar2) {
    uVar9 = iVar2 - uVar1;
    if (((int)(uVar9 | uVar1) < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar9 != 0) {
      TArray<FLiveLinkTransformKeys,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar1,uVar9);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa0,8,&this_00->AllocatorInstance,(this->BufferedTransformsPerElement).ArrayNum,
                 &(this->BufferedTransformsPerElement).ArrayMax);
    }
  }
  return;
}

// FillFrame @ 14d0a9550

void __thiscall
FMovieSceneLiveLinkTransformHandler::FillFrame
          (FMovieSceneLiveLinkTransformHandler *this,int param_1,FLiveLinkWorldTime *param_2,
          TOptional<FQualifiedFrameTime> *param_3,UScriptStruct *param_4,
          FLiveLinkBaseFrameData *param_5)

{
  int iVar1;
  int local_res8 [2];
  TTransform<double> local_78;
  
  iVar1 = 0;
  local_res8[0] = 0;
  if (0 < this->ElementCount) {
    do {
      local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_78.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_78.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_78.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_78.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_78.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      LiveLinkTransformHandlerUtils::FillTransform
                (param_1,local_res8,&this->PropertyStorage->FloatChannel,&local_78);
      FLiveLinkStructPropertyBindings::SetCurrentValueAt<UE::Math::TTransform<double>_>
                (&this->PropertyBinding,iVar1,param_4,param_5,&local_78);
      iVar1 = iVar1 + 1;
    } while (iVar1 < this->ElementCount);
  }
  return;
}

// FillFrameInterpolated @ 14d0aaa70

void __thiscall
FMovieSceneLiveLinkTransformHandler::FillFrameInterpolated
          (FMovieSceneLiveLinkTransformHandler *this,FFrameTime *param_1,FLiveLinkWorldTime *param_2
          ,TOptional<FQualifiedFrameTime> *param_3,UScriptStruct *param_4,
          FLiveLinkBaseFrameData *param_5)

{
  int iVar1;
  int local_res8 [2];
  TTransform<double> local_78;
  
  iVar1 = 0;
  local_res8[0] = 0;
  if (0 < this->ElementCount) {
    do {
      local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_78.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_78.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_78.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_78.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_78.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      LiveLinkTransformHandlerUtils::FillTransformInterpolated
                (param_1,local_res8,&this->PropertyStorage->FloatChannel,&local_78);
      FLiveLinkStructPropertyBindings::SetCurrentValueAt<UE::Math::TTransform<double>_>
                (&this->PropertyBinding,iVar1,param_4,param_5,&local_78);
      iVar1 = iVar1 + 1;
    } while (iVar1 < this->ElementCount);
  }
  return;
}

// Finalize @ 14d0ae570

void __thiscall
FMovieSceneLiveLinkTransformHandler::Finalize
          (FMovieSceneLiveLinkTransformHandler *this,bool param_1,
          FKeyDataOptimizationParams *param_2)

{
  int iVar1;
  FLiveLinkPropertyData *pFVar2;
  code *pcVar3;
  float fVar4;
  FFeedbackContext *pFVar5;
  bool bVar6;
  FText *pFVar7;
  FLiveLinkTransformKeys *this_00;
  FMovieSceneFloatChannel *this_01;
  FLiveLinkTransformKeys *pFVar8;
  FMovieSceneFloatChannel *pFVar9;
  int iVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FSlowTask local_a8;
  
  pFVar5 = GWarn;
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_d8,L"TakeRecorderLiveLink",L"ProcessingTransforms",
                      L"Processing Transforms");
  fVar4 = __real_3f800000;
  FSlowTask::FSlowTask(&local_a8,(float)this->ElementCount + __real_3f800000,pFVar7,true,pFVar5);
  FSlowTask::Initialize(&local_a8);
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  iVar1 = (this->BufferedTransformsPerElement).ArrayNum;
  iVar10 = 0;
  this_00 = (FLiveLinkTransformKeys *)(this->BufferedTransformsPerElement).AllocatorInstance.Data;
  pFVar8 = this_00 + iVar1;
  while( true ) {
    if ((this->BufferedTransformsPerElement).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FLiveLinkTransformKeys,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (this_00 == pFVar8) {
      pFVar7 = FText::FText(&local_b8);
      FSlowTask::EnterProgressFrame(&local_a8,fVar4,pFVar7);
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      pFVar2 = this->PropertyStorage;
      iVar1 = (pFVar2->FloatChannel).ArrayNum;
      this_01 = (FMovieSceneFloatChannel *)(pFVar2->FloatChannel).AllocatorInstance.Data;
      pFVar9 = this_01 + iVar1;
      if (param_1) {
        while( true ) {
          if ((pFVar2->FloatChannel).ArrayNum != iVar1) {
            `TCheckedPointerIterator<FMovieSceneFloatChannel,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (this_01 == pFVar9) break;
          (**(code **)(this_01->_padding_ + 0x68))(this_01,param_2);
          this_01 = this_01 + 1;
        }
      }
      else {
        while( true ) {
          if ((pFVar2->FloatChannel).ArrayNum != iVar1) {
            `TCheckedPointerIterator<FMovieSceneFloatChannel,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (this_01 == pFVar9) break;
          FMovieSceneFloatChannel::AutoSetTangents(this_01,0.0);
          this_01 = this_01 + 1;
        }
      }
      FSlowTask::Destroy(&local_a8);
      if (local_a8.FrameMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.FrameMessage.TextData.Reference + 0x10))();
      }
      if (local_a8.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.DefaultMessage.TextData.Reference + 0x10))();
      }
      return;
    }
    if (((this_00->Times).ArrayNum != (this_00->LocationX).ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("BufferedTransforms.Times.Num() == BufferedTransforms.LocationX.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkTransformHandler.cpp"
                           ,0x9d,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((this_00->Times).ArrayNum != (this_00->LocationY).ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("BufferedTransforms.Times.Num() == BufferedTransforms.LocationY.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkTransformHandler.cpp"
                           ,0x9e,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((this_00->Times).ArrayNum != (this_00->LocationZ).ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("BufferedTransforms.Times.Num() == BufferedTransforms.LocationZ.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkTransformHandler.cpp"
                           ,0x9f,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((this_00->Times).ArrayNum != (this_00->RotationX).ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("BufferedTransforms.Times.Num() == BufferedTransforms.RotationX.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkTransformHandler.cpp"
                           ,0xa0,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((this_00->Times).ArrayNum != (this_00->RotationY).ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("BufferedTransforms.Times.Num() == BufferedTransforms.RotationY.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkTransformHandler.cpp"
                           ,0xa1,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((this_00->Times).ArrayNum != (this_00->RotationZ).ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("BufferedTransforms.Times.Num() == BufferedTransforms.RotationZ.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkTransformHandler.cpp"
                           ,0xa2,L""), bVar6)) break;
    if (((this_00->Times).ArrayNum != (this_00->ScaleX).ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("BufferedTransforms.Times.Num() == BufferedTransforms.ScaleX.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkTransformHandler.cpp"
                           ,0xa3,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((this_00->Times).ArrayNum != (this_00->ScaleY).ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("BufferedTransforms.Times.Num() == BufferedTransforms.ScaleY.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkTransformHandler.cpp"
                           ,0xa4,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((this_00->Times).ArrayNum != (this_00->ScaleZ).ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("BufferedTransforms.Times.Num() == BufferedTransforms.ScaleZ.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkTransformHandler.cpp"
                           ,0xa5,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar7 = FText::FText(&local_c8);
    FSlowTask::EnterProgressFrame(&local_a8,fVar4,pFVar7);
    if (local_c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
    }
    FLiveLinkTransformKeys::AppendToFloatChannelsAndReset
              (this_00,iVar10,&this->PropertyStorage->FloatChannel);
    iVar10 = iVar10 + 9;
    this_00 = this_00 + 1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// InitializeFromExistingChannels @ 14d0b3e10

void __thiscall
FMovieSceneLiveLinkTransformHandler::InitializeFromExistingChannels
          (FMovieSceneLiveLinkTransformHandler *this,UScriptStruct *param_1)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  FNameEntryId FVar5;
  FProperty *pFVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar7;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  iVar1 = (this->PropertyStorage->FloatChannel).ArrayNum;
  if ((iVar1 != (iVar1 / 9) * 9) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(PropertyStorage->FloatChannel.Num() % 9) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkTransformHandler.cpp"
                         ,0x4a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->PropertyStorage->FloatChannel).ArrayNum / 9;
  this->ElementCount = iVar1;
  if ((iVar1 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkTransformHandler.cpp"
                         ,0x4d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = FLiveLinkStructPropertyBindings::GetProperty(&this->PropertyBinding,param_1);
  if (pFVar6 != (FProperty *)0x0) {
    uVar2 = *(ulonglong *)(pFVar6->_padding_ + 0x18);
    if ((uVar2 >> 0x15 & 1) == 0) {
      if ((uVar2 >> 0x14 & 1) == 0) {
        pFVar6 = (FProperty *)0x0;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x472,L"CastFieldChecked failed with 0x%016llx");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar2 = *(ulonglong *)(pFVar6[1]._padding_ + 0x18);
      FVar5 = FNameEntryId::FromValidEName((EName)local_res18);
      if ((uVar2 != *(uint *)CONCAT44(extraout_var_00,FVar5.Value)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructProperty->Struct->GetFName() == NAME_Transform",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkTransformHandler.cpp"
                             ,0x5a,L""), bVar4)) goto code_r0x00014d0b3feb;
    }
    else {
      lVar7 = pFVar6[1]._padding_;
      if ((lVar7 == 0) || ((*(uint *)(*(longlong *)(lVar7 + 8) + 0x18) >> 0x14 & 1) == 0)) {
        lVar7 = 0;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x472,L"CastFieldChecked failed with 0x%016llx");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar2 = *(ulonglong *)(*(longlong *)(lVar7 + 0x70) + 0x18);
      FVar5 = FNameEntryId::FromValidEName((EName)local_res8);
      if (uVar2 != *(uint *)CONCAT44(extraout_var,FVar5.Value)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayStructProperty->Struct->GetFName() == NAME_Transform",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkTransformHandler.cpp"
                           ,0x55,L"");
        if (!bVar4) {
          return;
        }
code_r0x00014d0b3feb:
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

// RecordFrame @ 14d0b59c0

void __thiscall
FMovieSceneLiveLinkTransformHandler::RecordFrame
          (FMovieSceneLiveLinkTransformHandler *this,FFrameNumber *param_1,UScriptStruct *param_2,
          FLiveLinkBaseFrameData *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FLiveLinkTransformKeys *this_00;
  longlong lVar7;
  uint uVar8;
  int local_98 [4];
  TTransform<double> local_88;
  
  if ((param_3 != (FLiveLinkBaseFrameData *)0x0) && (uVar8 = 0, 0 < this->ElementCount)) {
    lVar7 = 0;
    do {
      FLiveLinkStructPropertyBindings::GetCurrentValueAt<UE::Math::TTransform<double>_>
                (&this->PropertyBinding,&local_88,uVar8,param_2,param_3);
      uVar5 = 0;
      if ((int)uVar8 < (this->BufferedTransformsPerElement).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_98[0] = param_1->Value;
      this_00 = (FLiveLinkTransformKeys *)
                ((this->BufferedTransformsPerElement).AllocatorInstance.Data + lVar7);
      pFVar2 = (this_00->Times).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_98) &&
          ((FScriptContainerElement *)local_98 < pFVar2 + (longlong)(this_00->Times).ArrayMax * 4))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (this_00->Times).ArrayNum;
      piVar1 = &(this_00->Times).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)this_00,piVar1);
      }
      (this_00->Times).ArrayNum = iVar6 + 1;
      *(int *)((this_00->Times).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_98[0];
      FLiveLinkTransformKeys::Add(this_00,&local_88);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0xa0;
    } while ((int)uVar8 < this->ElementCount);
  }
  return;
}

