// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 148676600

UClass * __cdecl USoundNodeDoppler::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeDoppler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeDoppler",
               &Z_Registration_Info_UClass_USoundNodeDoppler.InnerSingleton,
               StaticRegisterNativesUSoundNodeDoppler,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeDoppler>,
               InternalVTableHelperCtorCaller<USoundNodeDoppler>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeDoppler.InnerSingleton;
}

// USoundNodeDoppler @ 148697540

USoundNodeDoppler * __thiscall
USoundNodeDoppler::USoundNodeDoppler(USoundNodeDoppler *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7USoundNodeDoppler__6B_;
  return this;
}

// USoundNodeDoppler @ 148697580

USoundNodeDoppler * __thiscall
USoundNodeDoppler::USoundNodeDoppler(USoundNodeDoppler *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this->DopplerIntensity = 1.0;
  this->_padding_ = (longlong)&___7USoundNodeDoppler__6B_;
  this->bUseSmoothing = false;
  this->SmoothingInterpSpeed = 5.0;
  return this;
}

// ~USoundNodeDoppler @ 14869b970

void __thiscall USoundNodeDoppler::~USoundNodeDoppler(USoundNodeDoppler *this)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetDopplerPitchMultiplier @ 1486bd9e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
USoundNodeDoppler::GetDopplerPitchMultiplier
          (USoundNodeDoppler *this,float *param_1,bool param_2,FListener *param_3,
          TVector<double> *param_4,TVector<double> *param_5,float param_6)

{
  undefined8 uVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  
  dVar2 = (param_3->Transform).Translation.XY.m128d_f64[0] - (param_4->field0_0x0)._s_0.X;
  dVar7 = (param_3->Transform).Translation.ZW.m128d_f64[0] - (param_4->field0_0x0)._s_0.Z;
  dVar5 = (param_3->Transform).Translation.XY.m128d_f64[1] - (param_4->field0_0x0)._s_0.Y;
  dVar4 = dVar5 * dVar5 + dVar2 * dVar2 + dVar7 * dVar7;
  uVar6 = dVar5;
  uVar8 = dVar7;
  uVar1 = dVar2;
  if ((dVar4 != __real_3ff0000000000000) &&
     (uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     __real_3e45798ee0000000 <= dVar4)) {
    dVar4 = __real_3ff0000000000000 / SQRT(dVar4);
    uVar6 = dVar5 * dVar4;
    uVar8 = dVar7 * dVar4;
    uVar1 = dVar2 * dVar4;
  }
  fVar3 = (__real_3f800000 /
           (__real_3f800000 -
           ((float)((double)uVar6 * (param_5->field0_0x0)._s_0.Y +
                    (double)uVar1 * (param_5->field0_0x0)._s_0.X +
                   (double)uVar8 * (param_5->field0_0x0)._s_0.Z) -
           (float)((double)uVar6 * (param_3->Velocity).field0_0x0._s_0.Y +
                   (double)uVar1 * (param_3->Velocity).field0_0x0._s_0.X +
                  (double)uVar8 * (param_3->Velocity).field0_0x0._s_0.Z)) * ___real_37fe3343) -
          __real_3f800000) * this->DopplerIntensity + __real_3f800000;
  if (!param_2) {
    return fVar3;
  }
  dVar2 = (double)fVar3;
  if (0.0 < (double)this->SmoothingInterpSpeed) {
    dVar4 = dVar2 - (double)*param_1;
    if (__real_3e45798ee0000000 <= dVar4 * dVar4) {
      dVar2 = (double)param_6 * (double)this->SmoothingInterpSpeed;
      if (__real_3ff0000000000000 <= dVar2) {
        dVar2 = __real_3ff0000000000000;
      }
      if (dVar2 <= 0.0) {
        dVar2 = 0.0;
      }
      dVar2 = dVar2 * dVar4 + (double)*param_1;
    }
  }
  *param_1 = (float)dVar2;
  return (float)dVar2;
}

// GetPrivateStaticClass @ 1486c4c30

UClass * __cdecl USoundNodeDoppler::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeDoppler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeDoppler",
               &Z_Registration_Info_UClass_USoundNodeDoppler.InnerSingleton,
               StaticRegisterNativesUSoundNodeDoppler,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeDoppler>,
               InternalVTableHelperCtorCaller<USoundNodeDoppler>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeDoppler.InnerSingleton;
}

// ParseNodes @ 1486dbcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
USoundNodeDoppler::ParseNodes
          (USoundNodeDoppler *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
          FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FListener *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uVar20;
  undefined1 auStackY_3c8 [32];
  uint local_388 [2];
  USoundNodeDoppler *local_380;
  ulong64 local_378;
  TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> local_370;
  TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *local_360;
  TVector<double>_u_0 local_358;
  ulong64 *local_338;
  uint *local_330;
  double local_318;
  TVector<double>_u_0 local_308 [3];
  FSoundParseParameters local_2b8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_360 = param_5;
  local_380 = this;
  local_378 = param_2;
  local_370.Value = (uint *)param_3;
  puVar8 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)&param_3->SoundNodeOffsetMap,param_2);
  pTVar2 = &param_3->SoundNodeData;
  piVar1 = &(param_3->SoundNodeData).ArrayNum;
  if (puVar8 == (uint *)0x0) {
    local_388[0] = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (1,1,8,&pTVar2->AllocatorInstance,piVar1,
                              &(param_3->SoundNodeData).ArrayMax);
    *(undefined8 *)((pTVar2->AllocatorInstance).Data + (int)local_388[0]) = 0;
    local_338 = &local_378;
    local_330 = local_388;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)&param_3->SoundNodeOffsetMap,&local_370,(bool *)&local_338);
    lVar11 = (longlong)(int)local_388[0];
    uVar9 = 0;
    if ((int)local_388[0] < *piVar1) {
      uVar9 = ~local_388[0] >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar13 = (pTVar2->AllocatorInstance).Data + lVar11;
    *(int *)pFVar13 = 1;
  }
  else {
    uVar9 = *puVar8;
    uVar10 = 0;
    if ((int)uVar9 < *piVar1) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_388[0] = *puVar8;
    pFVar13 = (pTVar2->AllocatorInstance).Data + (int)uVar9;
  }
  uVar10 = local_388[0] + 4;
  uVar9 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  local_388[0] = uVar10;
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar14 = (pTVar2->AllocatorInstance).Data + (int)uVar10;
  FSoundParseParameters::FSoundParseParameters(&local_2b8,param_4);
  if ((param_1 == (FAudioDevice *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioDevice",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundNodeDoppler.cpp"
                         ,0x1c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar7 = IsInAudioThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDevice.h"
                         ,0x2b4,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar8 = local_370.Value;
  uVar10 = FActiveSound::GetClosestListenerIndex((FActiveSound *)local_370.Value);
  iVar3 = (param_1->Listeners).ArrayNum;
  uVar9 = 0;
  if ((int)uVar10 < iVar3) {
    uVar9 = uVar10;
  }
  uVar10 = 0;
  if ((int)uVar9 < iVar3) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar12 = (FListener *)
            ((param_1->Listeners).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x110);
  if (*(int *)pFVar13 == 0) {
    fVar15 = FAudioDevice::GetDeviceDeltaTime(param_1);
    local_358._s_0.Z = (param_4->Transform).Translation.ZW.m128d_f64[0];
    local_308[0]._16_8_ = (param_4->Velocity).field0_0x0._s_0.Z;
    local_358._s_0.X = (param_4->Transform).Translation.XY.m128d_f64[0];
    local_358._s_0.Y = (param_4->Transform).Translation.XY.m128d_f64[1];
    local_308[0]._0_8_ = (param_4->Velocity).field0_0x0._s_0.X;
    local_308[0]._8_8_ = (param_4->Velocity).field0_0x0._s_0.Y;
    local_318 = local_358._s_0.Z;
    fVar15 = GetDopplerPitchMultiplier
                       (local_380,(float *)pFVar14,local_380->bUseSmoothing,pFVar12,
                        (TVector<double> *)&local_358._s_0,(TVector<double> *)&local_308[0]._s_0,
                        fVar15);
    local_2b8.Pitch = local_2b8.Pitch * fVar15;
  }
  else {
    *(int *)pFVar13 = 0;
    FAudioDevice::GetDeviceDeltaTime(param_1);
    dVar5 = (pFVar12->Transform).Translation.XY.m128d_f64[0] -
            (param_4->Transform).Translation.XY.m128d_f64[0];
    local_358._s_0.Z = (param_4->Velocity).field0_0x0._s_0.Z;
    dVar19 = (pFVar12->Transform).Translation.ZW.m128d_f64[0] -
             (param_4->Transform).Translation.ZW.m128d_f64[0];
    dVar17 = (pFVar12->Transform).Translation.XY.m128d_f64[1] -
             (param_4->Transform).Translation.XY.m128d_f64[1];
    dVar16 = dVar17 * dVar17 + dVar5 * dVar5 + dVar19 * dVar19;
    uVar18 = dVar17;
    uVar20 = dVar19;
    uVar6 = dVar5;
    if ((dVar16 != __real_3ff0000000000000) &&
       (uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       __real_3e45798ee0000000 <= dVar16)) {
      dVar16 = __real_3ff0000000000000 / SQRT(dVar16);
      uVar18 = dVar17 * dVar16;
      uVar20 = dVar19 * dVar16;
      uVar6 = dVar5 * dVar16;
    }
    fVar15 = (__real_3f800000 /
              (__real_3f800000 -
              ((float)((double)uVar18 * (param_4->Velocity).field0_0x0._s_0.Y +
                       (double)uVar6 * (param_4->Velocity).field0_0x0._s_0.X +
                      (double)uVar20 * local_358._s_0.Z) -
              (float)((double)uVar18 * (pFVar12->Velocity).field0_0x0._s_0.Y +
                      (double)uVar6 * (pFVar12->Velocity).field0_0x0._s_0.X +
                     (double)uVar20 * (pFVar12->Velocity).field0_0x0._s_0.Z)) * ___real_37fe3343) -
             __real_3f800000) * local_380->DopplerIntensity + __real_3f800000;
    *(float *)pFVar14 = fVar15;
    local_2b8.Pitch = local_2b8.Pitch * fVar15;
  }
  USoundNode::ParseNodes
            ((USoundNode *)local_380,param_1,local_378,(FActiveSound *)puVar8,&local_2b8,local_360);
  FSoundParseParameters::~FSoundParseParameters(&local_2b8);
  return;
}

// StaticRegisterNativesUSoundNodeDoppler @ 1486f1930

void __cdecl USoundNodeDoppler::StaticRegisterNativesUSoundNodeDoppler(void)

{
  return;
}

