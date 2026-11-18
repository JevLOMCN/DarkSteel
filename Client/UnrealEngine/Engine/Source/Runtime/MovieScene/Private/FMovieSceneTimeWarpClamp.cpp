// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// StaticStruct @ 146244ad0

UScriptStruct * __cdecl FMovieSceneTimeWarpClamp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpClamp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpClamp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpClamp,(UObject *)pUVar1,
                         L"MovieSceneTimeWarpClamp");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpClamp.OuterSingleton;
}

// Clamp @ 1462a6df0

FFrameTime __thiscall
FMovieSceneTimeWarpClamp::Clamp(FMovieSceneTimeWarpClamp *this,FFrameTime param_1)

{
  int iVar1;
  int in_R8D;
  float in_register_00000084;
  
  if ((in_R8D < 0) || ((in_R8D == 0 && (in_register_00000084 < 0.0)))) {
    *(undefined8 *)param_1 = 0;
    return param_1;
  }
  iVar1 = (this->Max).Value;
  if ((in_R8D <= iVar1) && ((in_R8D != iVar1 || (in_register_00000084 <= 0.0)))) {
    *(ulonglong *)param_1 = CONCAT44(in_register_00000084,in_R8D);
    return param_1;
  }
  *(int *)param_1 = iVar1;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return param_1;
}

// ComputeTraversedHull @ 1462a7410

TRange<FFrameTime> * __thiscall
FMovieSceneTimeWarpClamp::ComputeTraversedHull
          (FMovieSceneTimeWarpClamp *this,TRange<FFrameTime> *__return_storage_ptr__,
          TRange<FFrameTime> *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined3 uVar6;
  bool bVar7;
  FFrameNumber FVar8;
  TRange<FFrameTime> *pTVar9;
  FFrameTime local_res10;
  FFrameTime local_res18;
  ulonglong local_res20;
  float fStack_4c;
  char local_40;
  char local_34;
  
  uVar6 = *(undefined3 *)&(param_1->LowerBound).field_0x1;
  FVar8.Value = (param_1->LowerBound).Value.FrameNumber.Value;
  uVar5 = *(undefined8 *)&(param_1->LowerBound).Value.SubFrame;
  (__return_storage_ptr__->LowerBound).Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)(param_1->LowerBound).Type.Value;
  *(undefined3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = uVar6;
  (__return_storage_ptr__->LowerBound).Value.FrameNumber = (FFrameNumber)FVar8.Value;
  *(undefined8 *)&(__return_storage_ptr__->LowerBound).Value.SubFrame = uVar5;
  (__return_storage_ptr__->UpperBound).Value = (param_1->UpperBound).Value;
  uVar1 = (param_1->LowerBound).Type;
  if (uVar1 != '\x02') {
    if (((param_1->LowerBound).Type.Value == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TRange<FFrameTime> *)(*pcVar4)();
      return pTVar9;
    }
    local_res10 = (param_1->LowerBound).Value;
    local_res20 = 0;
    FVar8 = local_res10.FrameNumber.Value;
    if ((FVar8.Value < 0) ||
       ((fStack_4c = local_res10.SubFrame, FVar8.Value == 0 && (fStack_4c < 0.0)))) {
      local_res10.FrameNumber.Value = 0;
      local_res10.SubFrame = 0.0;
    }
    else {
      uVar3 = (this->Max).Value;
      if (((int)uVar3 < FVar8.Value) || ((FVar8.Value == uVar3 && (0.0 < fStack_4c)))) {
        local_res10.SubFrame = 0.0;
        local_res10.FrameNumber.Value = uVar3;
      }
    }
    if (((__return_storage_ptr__->LowerBound).Type.Value == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,0x73,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TRange<FFrameTime> *)(*pcVar4)();
      return pTVar9;
    }
    (__return_storage_ptr__->LowerBound).Value = local_res10;
  }
  uVar2 = (param_1->UpperBound).Type;
  if (uVar2 != '\x02') {
    if (((param_1->UpperBound).Type.Value == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TRange<FFrameTime> *)(*pcVar4)();
      return pTVar9;
    }
    local_res18 = (param_1->UpperBound).Value;
    local_res20 = 0;
    FVar8 = local_res18.FrameNumber.Value;
    if ((FVar8.Value < 0) ||
       ((local_res10.SubFrame = local_res18.SubFrame, FVar8.Value == 0 &&
        (local_res10.SubFrame < 0.0)))) {
      local_res18.FrameNumber.Value = 0;
      local_res18.SubFrame = 0.0;
    }
    else {
      uVar3 = (this->Max).Value;
      local_res20 = (ulonglong)uVar3;
      if (((int)uVar3 < FVar8.Value) || ((FVar8.Value == uVar3 && (0.0 < local_res10.SubFrame)))) {
        local_res18.SubFrame = 0.0;
        local_res18.FrameNumber.Value = uVar3;
      }
    }
    TRange<FFrameTime>::SetUpperBoundValue(__return_storage_ptr__,&local_res18);
  }
  return __return_storage_ptr__;
}

