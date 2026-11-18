// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// StaticStruct @ 146244b50

UScriptStruct * __cdecl FMovieSceneTimeWarpClampFloat::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpClampFloat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpClampFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpClampFloat,(UObject *)pUVar1,
                         L"MovieSceneTimeWarpClampFloat");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpClampFloat.OuterSingleton;
}

// Clamp @ 1462a6e70

FFrameTime __thiscall
FMovieSceneTimeWarpClampFloat::Clamp(FMovieSceneTimeWarpClampFloat *this,FFrameTime param_1)

{
  int in_R8D;
  float in_register_00000084;
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 in_XMM2 [16];
  undefined1 auVar4 [16];
  double dVar5;
  
  if ((-1 < in_R8D) && ((in_R8D != 0 || (0.0 <= in_register_00000084)))) {
    dVar5 = (double)this->Max;
    if (dVar5 < (double)in_R8D + (double)in_register_00000084) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar5;
      auVar4 = roundpd(in_XMM2,auVar4,1);
      dVar2 = auVar4._0_8_;
      dVar3 = dVar2;
      if (__real_41dfffffffc00000 <= dVar2) {
        dVar3 = __real_41dfffffffc00000;
      }
      if (dVar3 <= __real_c1e0000000000000) {
        dVar3 = __real_c1e0000000000000;
      }
      fVar1 = (float)(dVar5 - dVar2);
      if (::FFrameTime::MaxSubframe <= (float)(dVar5 - dVar2)) {
        fVar1 = ::FFrameTime::MaxSubframe;
      }
      if (fVar1 <= 0.0) {
        fVar1 = 0.0;
      }
      *(int *)param_1 = (int)dVar3;
      *(float *)((longlong)param_1 + 4) = fVar1;
      if (::FFrameTime::MaxSubframe <= fVar1) {
        fVar1 = ::FFrameTime::MaxSubframe;
      }
      if (fVar1 <= 0.0) {
        fVar1 = 0.0;
      }
      *(float *)((longlong)param_1 + 4) = fVar1;
      return param_1;
    }
    *(ulonglong *)param_1 = CONCAT44(in_register_00000084,in_R8D);
    return param_1;
  }
  *(undefined8 *)param_1 = 0;
  return param_1;
}

// ComputeTraversedHull @ 1462a7630

TRange<FFrameTime> * __thiscall
FMovieSceneTimeWarpClampFloat::ComputeTraversedHull
          (FMovieSceneTimeWarpClampFloat *this,TRange<FFrameTime> *__return_storage_ptr__,
          TRange<FFrameTime> *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined3 uVar5;
  FFrameNumber FVar6;
  bool bVar7;
  TRange<FFrameTime> *pTVar8;
  FFrameTime FVar9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  char local_38;
  char local_2c;
  
  uVar5 = *(undefined3 *)&(param_1->LowerBound).field_0x1;
  FVar6.Value = (param_1->LowerBound).Value.FrameNumber.Value;
  uVar4 = *(undefined8 *)&(param_1->LowerBound).Value.SubFrame;
  (__return_storage_ptr__->LowerBound).Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)(param_1->LowerBound).Type.Value;
  *(undefined3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = uVar5;
  (__return_storage_ptr__->LowerBound).Value.FrameNumber = (FFrameNumber)FVar6.Value;
  *(undefined8 *)&(__return_storage_ptr__->LowerBound).Value.SubFrame = uVar4;
  (__return_storage_ptr__->UpperBound).Value = (param_1->UpperBound).Value;
  uVar1 = (param_1->LowerBound).Type;
  if (uVar1 != '\x02') {
    if ((param_1->LowerBound).Type.Value == '\x02') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TRange<FFrameTime> *)(*pcVar3)();
        return pTVar8;
      }
    }
    FVar9 = Clamp(this,(FFrameTime)local_res10);
    if ((__return_storage_ptr__->LowerBound).Type.Value == '\x02') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,0x73,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TRange<FFrameTime> *)(*pcVar3)();
        return pTVar8;
      }
    }
    (__return_storage_ptr__->LowerBound).Value = *(FFrameTime *)FVar9;
  }
  uVar2 = (param_1->UpperBound).Type;
  if (uVar2 != '\x02') {
    if ((param_1->UpperBound).Type.Value == '\x02') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TRange<FFrameTime> *)(*pcVar3)();
        return pTVar8;
      }
    }
    FVar9 = Clamp(this,(FFrameTime)local_res18);
    TRange<FFrameTime>::SetUpperBoundValue(__return_storage_ptr__,(FFrameTime *)FVar9);
  }
  return __return_storage_ptr__;
}

