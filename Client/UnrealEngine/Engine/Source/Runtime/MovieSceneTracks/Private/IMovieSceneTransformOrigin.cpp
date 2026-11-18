// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// BP_GetTransformOrigin @ 14663e740

TTransform<double> * __thiscall
IMovieSceneTransformOrigin::BP_GetTransformOrigin
          (IMovieSceneTransformOrigin *this,TTransform<double> *__return_storage_ptr__)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  bool bVar14;
  TTransform<double> *pTVar15;
  
  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                     ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_BP_GetTransformOrigin instead.\""
                      ,
                      "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\MovieSceneTracks\\UHT\\IMovieSceneTransformOrigin.gen.cpp"
                      ,0x1d,L"");
  if (bVar14) {
    pcVar1 = (code *)swi(3);
    pTVar15 = (TTransform<double> *)(*pcVar1)();
    return pTVar15;
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar12._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar12._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar12._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar12;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar6;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar9;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar4;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar7;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar10;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (double)fVar3;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar5;
  auVar13._8_4_ = SUB84((double)fVar11,0);
  auVar13._0_8_ = (double)fVar8;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar13;
  return __return_storage_ptr__;
}

// Execute_BP_GetTransformOrigin @ 146670030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
IMovieSceneTransformOrigin::Execute_BP_GetTransformOrigin
          (TTransform<double> *__return_storage_ptr__,UObject *param_1)

{
  UClass *this;
  code *pcVar1;
  bool bVar2;
  TTransform<double> *pTVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\MovieSceneTracks\\UHT\\IMovieSceneTransformOrigin.gen.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TTransform<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this = *(UClass **)&param_1->field_0x10;
  pUVar4 = UMovieSceneTransformOrigin::StaticClass();
  bVar2 = UClass::ImplementsInterface(this,pUVar4);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UMovieSceneTransformOrigin::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\MovieSceneTracks\\UHT\\IMovieSceneTransformOrigin.gen.cpp"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TTransform<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_28._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_28._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_28._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  pUVar5 = UObject::FindFunction(param_1,NAME_UMovieSceneTransformOrigin_BP_GetTransformOrigin);
  if (pUVar5 != (UFunction *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar5,local_78);
  }
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (double)local_78._0_8_;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)local_78._8_8_;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)local_68._0_8_;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)local_68._8_8_;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (double)local_58._0_8_;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)local_58._8_8_;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)local_48._0_8_;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)local_48._8_8_;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (double)local_38._0_8_;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)local_38._8_8_;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)local_28._0_8_;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)local_28._8_8_;
  return __return_storage_ptr__;
}

