// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 11

// StaticStruct @ 14debe590

UScriptStruct * __cdecl FControlRigSpline::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigSpline.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRigSpline();
    Z_Registration_Info_UScriptStruct_FControlRigSpline.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigSpline,(UObject *)pUVar1,
                         L"ControlRigSpline");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigSpline.OuterSingleton;
}

// FControlRigSpline @ 14dec1fb0

FControlRigSpline * __thiscall
FControlRigSpline::FControlRigSpline(FControlRigSpline *this,FControlRigSpline *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FControlRigSplineImpl *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FControlRigSpline__6B_;
  (this->SplineData).Object = (FControlRigSplineImpl *)0x0;
  (this->SplineData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar1 = (param_1->SplineData).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->SplineData).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SplineData).SharedReferenceCount.ReferenceController;
  (this->SplineData).Object = pFVar2;
  (this->SplineData).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// ~FControlRigSpline @ 14dec2860

void __thiscall FControlRigSpline::~FControlRigSpline(FControlRigSpline *this)

{
  this->_padding_ = (longlong)&___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SplineData).SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 14dec2980

FControlRigSpline * __thiscall
FControlRigSpline::operator=(FControlRigSpline *this,FControlRigSpline *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FControlRigSplineImpl *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SplineData).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->SplineData).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SplineData).SharedReferenceCount.ReferenceController;
  (this->SplineData).Object = pFVar2;
  (this->SplineData).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// GetDegree @ 14dec4b80

uchar __thiscall FControlRigSpline::GetDegree(FControlRigSpline *this)

{
  FControlRigSplineImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  uchar uVar4;
  
  pFVar1 = (this->SplineData).Object;
  if (pFVar1 == (FControlRigSplineImpl *)0x0) {
    return '\0';
  }
  if (pFVar1->Spline == (ControlRigBaseSpline *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Spline",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRigSpline\\Source\\ControlRigSpline\\Private\\ControlRigSplineTypes.cpp"
                       ,0x13c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return (uchar)pFVar1->Spline->Degree;
}

// LengthAtParam @ 14dec57e0

float __thiscall FControlRigSpline::LengthAtParam(FControlRigSpline *this,float param_1)

{
  FControlRigSplineImpl *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = __real_3f800000;
  pFVar1 = (this->SplineData).Object;
  fVar10 = 0.0;
  if (pFVar1 != (FControlRigSplineImpl *)0x0) {
    iVar6 = (pFVar1->SamplesArray).ArrayNum + -1;
    pFVar1 = (this->SplineData).Object;
    if (__real_3f800000 <= param_1) {
      param_1 = __real_3f800000;
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar10 = (float)iVar6 * param_1;
    uVar7 = (uint)fVar10;
    uVar4 = uVar7 + 1;
    if (iVar6 <= (int)uVar7) {
      uVar4 = uVar7;
    }
    uVar8 = 0;
    if ((int)uVar4 < (pFVar1->AccumulatedLenth).ArrayNum) {
      uVar8 = ~uVar4 >> 0x1f;
    }
    fVar10 = fVar10 - (float)(int)uVar7;
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        fVar9 = (float)(*pcVar3)();
        return fVar9;
      }
    }
    pFVar2 = (pFVar1->AccumulatedLenth).AllocatorInstance.Data;
    uVar8 = 0;
    if ((int)uVar7 < (pFVar1->AccumulatedLenth).ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        fVar9 = (float)(*pcVar3)();
        return fVar9;
      }
    }
    fVar10 = (fVar9 - fVar10) *
             *(float *)((pFVar1->AccumulatedLenth).AllocatorInstance.Data + (longlong)(int)uVar7 * 4
                       ) + fVar10 * *(float *)(pFVar2 + (longlong)(int)uVar4 * 4);
  }
  return fVar10;
}

// PositionAtParam @ 14dec5950

TVector<double> * __thiscall
FControlRigSpline::PositionAtParam
          (FControlRigSpline *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  FScriptContainerElement *pFVar1;
  FControlRigSplineImpl *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  TVector<double> *pTVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  float fVar19;
  
  fVar12 = __real_3f800000;
  pFVar2 = (this->SplineData).Object;
  if (pFVar2 == (FControlRigSplineImpl *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    return __return_storage_ptr__;
  }
  iVar14 = (pFVar2->SamplesArray).ArrayNum + -1;
  pFVar2 = (this->SplineData).Object;
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar19 = (float)iVar14 * param_1;
  uVar17 = (uint)fVar19;
  uVar6 = uVar17 + 1;
  if (iVar14 <= (int)uVar17) {
    uVar6 = uVar17;
  }
  uVar16 = 0;
  if ((int)uVar17 < (pFVar2->SamplesArray).ArrayNum) {
    uVar16 = ~uVar17 >> 0x1f;
  }
  fVar19 = fVar19 - (float)(int)uVar17;
  if (uVar16 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      pTVar15 = (TVector<double> *)(*pcVar4)();
      return pTVar15;
    }
  }
  pFVar3 = (pFVar2->SamplesArray).AllocatorInstance.Data;
  dVar5 = (double)(fVar12 - fVar19);
  pFVar1 = pFVar3 + (longlong)(int)uVar17 * 0x60 + 0x20;
  dVar7 = *(double *)pFVar1;
  dVar8 = *(double *)(pFVar1 + 8);
  dVar9 = *(double *)(pFVar3 + (longlong)(int)uVar17 * 0x60 + 0x30);
  if ((this->SplineData).Object == (FControlRigSplineImpl *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      pTVar15 = (TVector<double> *)(*pcVar4)();
      return pTVar15;
    }
  }
  pFVar2 = (this->SplineData).Object;
  uVar17 = 0;
  if ((int)uVar6 < (pFVar2->SamplesArray).ArrayNum) {
    uVar17 = ~uVar6 >> 0x1f;
  }
  if (uVar17 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      pTVar15 = (TVector<double> *)(*pcVar4)();
      return pTVar15;
    }
  }
  dVar18 = (double)fVar19;
  pFVar3 = (pFVar2->SamplesArray).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(int)uVar6 * 0x60 + 0x20;
  dVar10 = *(double *)(pFVar1 + 8);
  dVar11 = *(double *)(pFVar3 + (longlong)(int)uVar6 * 0x60 + 0x30);
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar18 * *(double *)pFVar1 + dVar5 * dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar18 * dVar10 + dVar5 * dVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar18 * dVar11 + dVar5 * dVar9;
  return __return_storage_ptr__;
}

// SetControlPoints @ 14dec8450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FControlRigSpline::SetControlPoints
          (FControlRigSpline *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,
          ESplineType param_2,bool param_3,int param_4,float param_5,float param_6)

{
  TVector<double> *pTVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  TVector<double> *pTVar7;
  undefined1 auStackY_108 [32];
  ForAnyElementType local_b8;
  int local_b0;
  int iStack_ac;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar2 = param_1->ArrayNum;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  iStack_ac = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar2,&local_b8,0,&iStack_ac);
  }
  pTVar7 = param_1->DataPtr;
  pTVar1 = pTVar7 + param_1->ArrayNum;
  iVar5 = local_b0;
  while( true ) {
    local_b0 = iVar5;
    if (pTVar7 == pTVar1) {
      local_a8.DataPtr = (TTransform<double> *)local_b8.Data;
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_a8.ArrayNum = iVar5;
      SetControlTransforms(this,&local_a8,param_2,param_3,param_4,param_5,param_6);
      if ((TTransform<double> *)local_b8.Data != (TTransform<double> *)0x0) {
        FMemory::Free(local_b8.Data);
      }
      return;
    }
    local_98.Translation.ZW.m128d_f64[0] = (pTVar7->field0_0x0)._s_0.Z;
    local_98.Translation.ZW.m128d_f64[1] = 0.0;
    local_98.Translation.XY.m128d_f64[0] = (pTVar7->field0_0x0)._s_0.X;
    local_98.Translation.XY.m128d_f64[1] = (pTVar7->field0_0x0)._s_0.Y;
    local_98.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_98.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_98.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_98.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    if (((local_b8.Data <= &local_98) &&
        (&local_98 < (TTransform<double> *)((longlong)local_b8.Data + (longlong)iStack_ac * 0x60)))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) break;
    if (local_b0 == iStack_ac) {
      local_b0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&local_b8,&iStack_ac);
    }
    iVar5 = local_b0 + 1;
    pTVar7 = pTVar7 + 1;
    lVar6 = (longlong)local_b0 * 0x60;
    *(double *)(local_b8.Data + lVar6) = local_98.Rotation.XY.m128d_f64[0];
    *(double *)(local_b8.Data + lVar6 + 8) = local_98.Rotation.XY.m128d_f64[1];
    *(double *)(local_b8.Data + lVar6 + 0x10) = local_98.Rotation.ZW.m128d_f64[0];
    *(double *)(local_b8.Data + lVar6 + 0x10 + 8) = local_98.Rotation.ZW.m128d_f64[1];
    *(double *)(local_b8.Data + lVar6 + 0x20) = local_98.Translation.XY.m128d_f64[0];
    *(double *)(local_b8.Data + lVar6 + 0x20 + 8) = local_98.Translation.XY.m128d_f64[1];
    *(double *)(local_b8.Data + lVar6 + 0x30) = local_98.Translation.ZW.m128d_f64[0];
    *(double *)(local_b8.Data + lVar6 + 0x30 + 8) = local_98.Translation.ZW.m128d_f64[1];
    *(double *)(local_b8.Data + lVar6 + 0x40) = local_98.Scale3D.XY.m128d_f64[0];
    *(double *)(local_b8.Data + lVar6 + 0x40 + 8) = local_98.Scale3D.XY.m128d_f64[1];
    *(double *)(local_b8.Data + lVar6 + 0x50) = local_98.Scale3D.ZW.m128d_f64[0];
    *(double *)(local_b8.Data + lVar6 + 0x50 + 8) = local_98.Scale3D.ZW.m128d_f64[1];
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// SetControlTransforms @ 14dec86c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FControlRigSpline::SetControlTransforms
          (FControlRigSpline *this,TArrayView<UE::Math::TTransform<double>_const_,int> *param_1,
          ESplineType param_2,bool param_3,int param_4,float param_5,float param_6)

{
  TSharedPtr<FControlRigSplineImpl,1> *this_00;
  int *piVar1;
  double *pdVar2;
  ESplineType EVar3;
  ControlRigBaseSpline *pCVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  undefined1 auVar9 [12];
  ulonglong uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  FControlRigSplineImpl *pFVar18;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar19;
  TTransform<double> *pTVar20;
  undefined7 extraout_var;
  longlong lVar21;
  ControlRigHermite *pCVar22;
  ControlRigBSpline *this_01;
  undefined1 (*pauVar23) [16];
  TQuat<double> *pTVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  VectorRegister4Double *pVVar31;
  TReferenceControllerBase<1> *pTVar32;
  longlong lVar33;
  uint uVar34;
  TTransform<double> *pTVar35;
  uint uVar36;
  bool bVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 extraout_XMM0 [16];
  undefined8 uVar54;
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar55;
  double dVar56;
  double dVar63;
  undefined1 auVar58 [16];
  double dVar57;
  double dVar64;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar78 [16];
  float fVar79;
  float fVar80;
  undefined1 auVar81 [16];
  undefined1 auStackY_628 [32];
  int local_5cc;
  float local_5c4;
  ForAnyElementType local_5c0;
  int local_5b8;
  int local_5b4;
  longlong local_5b0;
  ForAnyElementType local_5a8;
  int local_5a0;
  int local_59c;
  float local_598;
  uint local_594;
  FScriptContainerElement *local_590;
  TVector<double>_u_0 local_588;
  TSharedPtr<FControlRigSplineImpl,1> local_570;
  longlong local_560;
  longlong local_558;
  double local_550;
  double dStack_548;
  double local_540;
  longlong local_538;
  double local_530;
  double dStack_528;
  double local_520;
  double local_518;
  double dStack_510;
  double local_508;
  undefined1 local_500 [16];
  double local_4f0;
  FScriptContainerElement *local_4e8;
  int local_4e0;
  TArrayView<UE::Math::TVector<double>_const_,int> local_4d8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_4c8;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  double local_4a8;
  double local_4a0;
  double local_498;
  double local_490;
  double local_488;
  double local_480;
  double local_478;
  double local_470;
  double local_468;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_460;
  double local_450;
  TQuat<double> local_448;
  TQuat<double> local_428;
  undefined1 local_408 [16];
  double local_3f8;
  double local_3f0;
  double dStack_3e8;
  double local_3e0;
  undefined1 local_3d8 [16];
  double local_3c8;
  double local_3c0;
  double dStack_3b8;
  double local_3b0;
  undefined1 local_3a8 [16];
  double local_398;
  double local_390;
  double dStack_388;
  double local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  double local_368;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_360;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [32];
  TQuat<double> local_308;
  TQuat<double> local_2e8;
  TQuat<double> local_2c8;
  TMatrix<double> local_2a8;
  TMatrix<double> local_228;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_628;
  iVar17 = param_1->ArrayNum;
  if (iVar17 < 4) {
    return;
  }
  if (param_4 < 1) {
    return;
  }
  this_00 = &this->SplineData;
  pTVar32 = (TReferenceControllerBase<1> *)0x0;
  if (this_00->Object == (FControlRigSplineImpl *)0x0) {
    local_570.SharedReferenceCount.ReferenceController = ::operator_new(0x78);
    if (local_570.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      pFVar18 = (FControlRigSplineImpl *)&DAT_00000010;
      local_570.Object = ___xmm_00000000000000000000000000000010;
      local_570.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      (local_570.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pFVar18 = (FControlRigSplineImpl *)(local_570.SharedReferenceCount.ReferenceController + 1);
      (local_570.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (local_570.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFControlRigSplineImpl___00_SharedPointerInternals__6B_
      ;
      local_570.SharedReferenceCount.ReferenceController[2]._padding_ = 0;
      local_570.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
      local_570.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
      local_570.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
      local_570.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
      local_570.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
      local_570.SharedReferenceCount.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
      local_570.SharedReferenceCount.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
      local_570.SharedReferenceCount.ReferenceController[6]._padding_ = 0;
      local_570.SharedReferenceCount.ReferenceController[6].SharedReferenceCount = (atomic<int>)0x0;
      local_570.SharedReferenceCount.ReferenceController[6].WeakReferenceCount = (atomic<int>)0x0;
      local_570.SharedReferenceCount.ReferenceController[7]._padding_ = 0;
      *(undefined1 *)&local_570.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = 0
      ;
      local_570.SharedReferenceCount.ReferenceController[4]._padding_ = 0;
      *(undefined1 *)&local_570.SharedReferenceCount.ReferenceController[4].SharedReferenceCount = 0
      ;
      local_570.SharedReferenceCount.ReferenceController[1]._padding_ =
           (longlong)&___7FControlRigSplineImpl__6B_;
      local_570.SharedReferenceCount.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x10;
      if ((pFVar18 == (FControlRigSplineImpl *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      LOCK();
      (local_570.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_570.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar32 = local_570.SharedReferenceCount.ReferenceController;
      local_570.Object = pFVar18;
    }
    if (this_00 != &local_570) {
      this_00->Object = pFVar18;
      local_570.Object = (FControlRigSplineImpl *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SplineData).SharedReferenceCount,&local_570.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_570.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  }
  local_590 = (FScriptContainerElement *)0x0;
  local_5cc = 0;
  pFVar18 = TSharedPtr<FControlRigSplineImpl,1>::operator->(this_00);
  if (pFVar18->Spline != (ControlRigBaseSpline *)0x0) {
    pFVar18 = TSharedPtr<FControlRigSplineImpl,1>::operator->(this_00);
    pTVar19 = FControlRigSplineImpl::GetControlTransformsWithoutDuplicates(pFVar18,&local_460);
    if (&local_360 != pTVar19) {
      local_590 = (pTVar19->AllocatorInstance).Data;
      (pTVar19->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_5cc = pTVar19->ArrayNum;
      pTVar19->ArrayNum = 0;
      pTVar19->ArrayMax = 0;
    }
    if (local_460.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_460.AllocatorInstance.Data);
    }
  }
  bVar12 = false;
  bVar11 = false;
  pFVar18 = TSharedPtr<FControlRigSplineImpl,1>::operator->(this_00);
  dVar8 = __real_3f1a36e2e0000000;
  uVar29 = _UNK_15061cc8c;
  uVar16 = _UNK_15061cc88;
  uVar36 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar28 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (pFVar18->Spline == (ControlRigBaseSpline *)0x0) {
    bVar37 = true;
LAB_14dec8b71:
    bVar12 = true;
    bVar11 = true;
  }
  else {
    bVar37 = local_5cc != iVar17;
    if (bVar37) goto LAB_14dec8b71;
    uVar34 = 0;
    if (0 < iVar17) {
      local_5b0 = 0;
      pFVar30 = local_590;
      do {
        pTVar20 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[](param_1,uVar34);
        uVar25 = 0;
        if ((int)uVar34 < local_5cc) {
          uVar25 = ~uVar34 >> 0x1f;
        }
        iVar15 = local_5cc;
        if (uVar25 == 0) {
          uVar25 = 0x506106c8;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          iVar15 = (int)CONCAT71(extraout_var,bVar12);
          if (bVar12) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        dVar56 = (pTVar20->Translation).ZW.m128d_f64[0] - *(double *)(pFVar30 + 0x30);
        dVar63 = (pTVar20->Translation).ZW.m128d_f64[1] - *(double *)(pFVar30 + 0x38);
        dVar65 = (pTVar20->Translation).XY.m128d_f64[0] - *(double *)(pFVar30 + 0x20);
        dVar67 = (pTVar20->Translation).XY.m128d_f64[1] - *(double *)(pFVar30 + 0x28);
        auVar58._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) & uVar36,SUB84(dVar56,0) & uVar28);
        auVar58._8_4_ = SUB84(dVar63,0) & uVar16;
        auVar58._12_4_ = (uint)((ulonglong)dVar63 >> 0x20) & uVar29;
        uVar76 = SUB84(dVar8,0);
        auVar73._8_4_ = uVar76;
        auVar73._0_8_ = dVar8;
        uVar77 = (undefined4)((ulonglong)dVar8 >> 0x20);
        auVar73._12_4_ = uVar77;
        local_4a8 = dVar8;
        auVar81._8_8_ = -(ulonglong)(auVar73._8_8_ < auVar58._8_8_);
        auVar81._0_8_ = -(ulonglong)(dVar8 < auVar58._0_8_);
        uVar25 = movmskpd(uVar25,auVar81);
        auVar69._8_8_ =
             -(ulonglong)
              (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar67 >> 0x20) & uVar29,
                                        SUB84(dVar67,0) & uVar16));
        auVar69._0_8_ =
             -(ulonglong)
              (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar65 >> 0x20) & uVar36,
                                        SUB84(dVar65,0) & uVar28));
        iVar15 = movmskpd(iVar15,auVar69);
        if ((uVar25 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_14dec8b71;
        dVar56 = (pTVar20->Rotation).ZW.m128d_f64[0];
        dVar63 = (pTVar20->Rotation).ZW.m128d_f64[1];
        dVar65 = (pTVar20->Rotation).XY.m128d_f64[0];
        dVar67 = (pTVar20->Rotation).XY.m128d_f64[1];
        local_4a0 = dVar8;
        dVar57 = dVar56 - *(double *)(pFVar30 + 0x10);
        dVar64 = dVar63 - *(double *)(pFVar30 + 0x18);
        dVar56 = dVar56 + *(double *)(pFVar30 + 0x10);
        dVar63 = dVar63 + *(double *)(pFVar30 + 0x18);
        dVar66 = dVar65 - *(double *)pFVar30;
        dVar68 = dVar67 - *(double *)(pFVar30 + 8);
        dVar65 = dVar65 + *(double *)pFVar30;
        dVar67 = dVar67 + *(double *)(pFVar30 + 8);
        auVar59._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) & uVar36,SUB84(dVar57,0) & uVar28);
        auVar59._8_4_ = SUB84(dVar64,0) & uVar16;
        auVar59._12_4_ = (uint)((ulonglong)dVar64 >> 0x20) & uVar29;
        auVar41._8_4_ = uVar76;
        auVar41._0_8_ = dVar8;
        auVar41._12_4_ = uVar77;
        auVar42._8_8_ = -(ulonglong)(auVar41._8_8_ < auVar59._8_8_);
        auVar42._0_8_ = -(ulonglong)(dVar8 < auVar59._0_8_);
        iVar26 = movmskpd(0,auVar42);
        auVar43._8_4_ = uVar76;
        auVar43._0_8_ = dVar8;
        auVar43._12_4_ = uVar77;
        auVar44._8_8_ =
             -(ulonglong)
              (auVar43._8_8_ <
              (double)CONCAT44((uint)((ulonglong)dVar68 >> 0x20) & uVar29,SUB84(dVar68,0) & uVar16))
        ;
        auVar44._0_8_ =
             -(ulonglong)
              (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar66 >> 0x20) & uVar36,
                                        SUB84(dVar66,0) & uVar28));
        uVar25 = movmskpd(iVar15,auVar44);
        uVar27 = iVar26 << 2 | uVar25;
        if (uVar27 != 0) {
          auVar45._8_4_ = uVar76;
          auVar45._0_8_ = dVar8;
          auVar45._12_4_ = uVar77;
          auVar46._8_8_ =
               -(ulonglong)
                (auVar45._8_8_ <
                (double)CONCAT44((uint)((ulonglong)dVar63 >> 0x20) & uVar29,SUB84(dVar63,0) & uVar16
                                ));
          auVar46._0_8_ =
               -(ulonglong)
                (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) & uVar36,
                                          SUB84(dVar56,0) & uVar28));
          uVar27 = movmskpd(uVar27,auVar46);
          auVar70._8_8_ =
               -(ulonglong)
                (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar67 >> 0x20) & uVar29,
                                          SUB84(dVar67,0) & uVar16));
          auVar70._0_8_ =
               -(ulonglong)
                (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar65 >> 0x20) & uVar36,
                                          SUB84(dVar65,0) & uVar28));
          uVar25 = movmskpd(uVar25,auVar70);
          if ((uVar27 & 0x3fffffff) != 0 || uVar25 != 0) goto LAB_14dec8b71;
        }
        dVar56 = (pTVar20->Scale3D).ZW.m128d_f64[0] - *(double *)(pFVar30 + 0x50);
        dVar63 = (pTVar20->Scale3D).ZW.m128d_f64[1] - *(double *)(pFVar30 + 0x58);
        dVar65 = (pTVar20->Scale3D).XY.m128d_f64[0] - *(double *)(pFVar30 + 0x40);
        dVar67 = (pTVar20->Scale3D).XY.m128d_f64[1] - *(double *)(pFVar30 + 0x48);
        auVar60._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) & uVar36,SUB84(dVar56,0) & uVar28);
        auVar60._8_4_ = SUB84(dVar63,0) & uVar16;
        auVar60._12_4_ = (uint)((ulonglong)dVar63 >> 0x20) & uVar29;
        auVar47._8_4_ = uVar76;
        auVar47._0_8_ = dVar8;
        auVar47._12_4_ = uVar77;
        local_498 = dVar8;
        auVar48._8_8_ = -(ulonglong)(auVar47._8_8_ < auVar60._8_8_);
        auVar48._0_8_ = -(ulonglong)(dVar8 < auVar60._0_8_);
        uVar27 = movmskpd(0,auVar48);
        auVar71._8_8_ =
             -(ulonglong)
              (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar67 >> 0x20) & uVar29,
                                        SUB84(dVar67,0) & uVar16));
        auVar71._0_8_ =
             -(ulonglong)
              (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar65 >> 0x20) & uVar36,
                                        SUB84(dVar65,0) & uVar28));
        iVar15 = movmskpd(uVar25,auVar71);
        if ((uVar27 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_14dec8b71;
        uVar34 = uVar34 + 1;
        local_5b0 = local_5b0 + 1;
        pFVar30 = pFVar30 + 0x60;
      } while (local_5b0 < iVar17);
      bVar12 = false;
    }
  }
  if ((this_00->Object == (FControlRigSplineImpl *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  EVar3 = this_00->Object->SplineMode;
  if ((this_00->Object == (FControlRigSplineImpl *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar15 = this_00->Object->SamplesPerSegment;
  if ((this_00->Object == (FControlRigSplineImpl *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_6 == this_00->Object->Stretch) &&
     (pFVar18 = TSharedPtr<FControlRigSplineImpl,1>::operator->(this_00),
     param_5 == pFVar18->Compression)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if ((this_00->Object == (FControlRigSplineImpl *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar14 = this_00->Object->bClosed;
  if ((((param_2 == EVar3) && (!bVar12)) && (param_4 == iVar15)) &&
     ((!bVar13 && (param_3 == bVar14)))) goto LAB_14dec91ce;
  if ((this_00->Object == (FControlRigSplineImpl *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar18 = (this->SplineData).Object;
  iVar26 = param_1->ArrayNum;
  pTVar20 = param_1->DataPtr;
  piVar1 = &(pFVar18->ControlTransforms).ArrayMax;
  (pFVar18->ControlTransforms).ArrayNum = iVar26;
  if ((iVar26 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar26,*piVar1,&(pFVar18->ControlTransforms).AllocatorInstance,iVar26,
               piVar1);
    if (iVar26 != 0) {
      memcpy((pFVar18->ControlTransforms).AllocatorInstance.Data,pTVar20,(longlong)iVar26 * 0x60);
    }
  }
  if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ((this->SplineData).Object)->SplineMode = param_2;
  if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ((this->SplineData).Object)->bClosed = param_3;
  if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ((this->SplineData).Object)->SamplesPerSegment = param_4;
  if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ((this->SplineData).Object)->Compression = param_5;
  if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ((this->SplineData).Object)->Stretch = param_6;
  if (((bVar11) || (param_2 != EVar3)) || (param_3 != bVar14)) {
    uVar28 = param_1->ArrayNum;
    local_5c0.Data = (FScriptContainerElement *)0x0;
    local_5b8 = 0;
    local_5b4 = 0;
    if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
    }
    if (0 < (int)uVar28) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar28,&local_5c0,0,&local_5b4);
    }
    pTVar20 = param_1->DataPtr;
    pTVar35 = pTVar20 + param_1->ArrayNum;
    if (pTVar20 != pTVar35) {
      pVVar31 = &pTVar20->Translation;
      do {
        local_550 = (pVVar31->XY).m128d_f64[0];
        dStack_548 = (pVVar31->XY).m128d_f64[1];
        local_540 = (pVVar31->ZW).m128d_f64[0];
        if (((local_5c0.Data <= (FScriptContainerElement *)&local_550) &&
            ((FScriptContainerElement *)&local_550 < local_5c0.Data + (longlong)local_5b4 * 0x18))
           && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_5b8 == local_5b4) {
          local_5b8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_5c0,&local_5b4);
        }
        lVar21 = (longlong)local_5b8;
        local_5b8 = local_5b8 + 1;
        pTVar20 = pTVar20 + 1;
        pVVar31 = pVVar31 + 3;
        *(double *)(local_5c0.Data + lVar21 * 0x18) = local_550;
        *(double *)(local_5c0.Data + lVar21 * 0x18 + 8) = dStack_548;
        *(double *)(local_5c0.Data + lVar21 * 0x18 + 0x10) = local_540;
      } while (pTVar20 != pTVar35);
    }
    if (((bVar37) || (param_2 != EVar3)) || (param_3 != bVar14)) {
      if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar18 = (this->SplineData).Object;
      if (pFVar18->Spline != (ControlRigBaseSpline *)0x0) {
        if ((pFVar18 == (FControlRigSplineImpl *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pCVar4 = ((this->SplineData).Object)->Spline;
        if (pCVar4 != (ControlRigBaseSpline *)0x0) {
          (**(code **)pCVar4->_padding_)(pCVar4,1);
        }
        if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        ((this->SplineData).Object)->Spline = (ControlRigBaseSpline *)0x0;
      }
      if (param_2 == BSpline) {
        this_01 = ::operator_new(0x30);
        iVar26 = local_5b8;
        if (this_01 == (ControlRigBSpline *)0x0) {
LAB_14dec9145:
          pCVar22 = (ControlRigHermite *)0x0;
        }
        else {
          local_4c8.DataPtr = (TVector<double> *)local_5c0.Data;
          if ((local_5b8 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_4c8.ArrayNum = iVar26;
          pCVar22 = (ControlRigHermite *)
                    ControlRigBSpline::ControlRigBSpline(this_01,&local_4c8,3,param_3,true);
        }
      }
      else {
        if (param_2 != Hermite) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRigSpline\\Source\\ControlRigSpline\\Private\\ControlRigSplineTypes.cpp"
                              ,0x1c2,L"");
          if (bVar12) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          goto LAB_14dec9181;
        }
        pCVar22 = ::operator_new(0x38);
        iVar26 = local_5b8;
        if (pCVar22 == (ControlRigHermite *)0x0) goto LAB_14dec9145;
        local_4d8.DataPtr = (TVector<double> *)local_5c0.Data;
        if ((local_5b8 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_4d8.ArrayNum = iVar26;
        pCVar22 = ControlRigHermite::ControlRigHermite(pCVar22,&local_4d8,param_3);
      }
      if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      ((this->SplineData).Object)->Spline = (ControlRigBaseSpline *)pCVar22;
    }
    else if (bVar11) {
      pFVar18 = TSharedPtr<FControlRigSplineImpl,1>::operator->(&this->SplineData);
      local_4e0 = local_5b8;
      pCVar4 = pFVar18->Spline;
      pcVar7 = *(code **)(pCVar4->_padding_ + 0x10);
      local_4e8 = local_5c0.Data;
      if ((local_5b8 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (*pcVar7)(pCVar4,&local_4e8);
    }
LAB_14dec9181:
    if (local_5c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c0.Data);
    }
    if ((!bVar11) && (param_2 == EVar3)) goto LAB_14dec91b1;
  }
  else {
LAB_14dec91b1:
    if ((param_4 == iVar15) && ((!bVar13 && (param_3 == bVar14)))) goto LAB_14dec91ce;
  }
  iVar26 = (iVar17 + -1) * param_4;
  if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&((this->SplineData).Object)->SamplesArray,iVar26,No);
  fVar55 = __real_3f800000;
  uVar28 = 0;
  lVar21 = (longlong)iVar26;
  auVar78 = ZEXT816(0);
  fVar79 = __real_3f800000 / (float)(iVar26 + -1);
  local_5b0 = CONCAT44(local_5b0._4_4_,fVar79);
  local_558 = lVar21;
  if (0 < iVar26) {
    lVar33 = 0;
    do {
      if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar18 = (this->SplineData).Object;
      uVar36 = 0;
      if ((int)uVar28 < (pFVar18->SamplesArray).ArrayNum) {
        uVar36 = ~uVar28 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar30 = (pFVar18->SamplesArray).AllocatorInstance.Data;
      if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pCVar4 = ((this->SplineData).Object)->Spline;
      pauVar23 = (undefined1 (*) [16])
                 (**(code **)(pCVar4->_padding_ + 8))(pCVar4,local_328,auVar78._0_8_);
      uVar28 = uVar28 + 1;
      auVar78._0_4_ = auVar78._0_4_ + fVar79;
      uVar54 = *(undefined8 *)pauVar23[1];
      *(undefined1 (*) [16])(pFVar30 + lVar33 + 0x20) = *pauVar23;
      pFVar30 = pFVar30 + lVar33 + 0x30;
      *(undefined8 *)pFVar30 = uVar54;
      *(undefined8 *)(pFVar30 + 8) = 0;
      lVar33 = lVar33 + 0x60;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  dVar8 = __real_3ff0000000000000;
  uVar76 = SUB84(__real_3e45798ee0000000,0);
  uVar77 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  uVar28 = 0;
  local_5c4 = 0.0;
  if (0 < local_558) {
    lVar21 = 0;
    local_598 = (float)(iVar17 + -1);
    local_560 = 0;
    fVar55 = fVar55 / local_598;
    local_4b8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_4b0 = _UNK_150689688;
    do {
      TangentAtParam(this,(TVector<double> *)&local_588._s_0,local_5c4);
      dVar56 = local_588._s_0.Y * local_588._s_0.Y + local_588._s_0.X * local_588._s_0.X +
               local_588._s_0.Z * local_588._s_0.Z;
      if ((double)CONCAT44(uVar77,uVar76) <= dVar56 && dVar56 != (double)CONCAT44(uVar77,uVar76)) {
        local_490 = dVar8 / SQRT(dVar56);
        local_588._s_0.X = local_588._s_0.X * local_490;
        local_588._s_0.Y = local_588._s_0.Y * local_490;
        local_588._s_0.Z = local_588._s_0.Z * local_490;
      }
      local_2a8.M[2][0] =
           local_588._s_0.Y * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z -
           local_588._s_0.Z * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
      local_2a8.M[2][1] =
           local_588._s_0.Z * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X -
           local_588._s_0.X * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
      local_2a8.M[2][2] =
           local_588._s_0.X * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y -
           local_588._s_0.Y * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
      dVar56 = local_2a8.M[2][1] * local_2a8.M[2][1] + local_2a8.M[2][0] * local_2a8.M[2][0] +
               local_2a8.M[2][2] * local_2a8.M[2][2];
      if ((double)CONCAT44(uVar77,uVar76) <= dVar56 && dVar56 != (double)CONCAT44(uVar77,uVar76)) {
        local_488 = dVar8 / SQRT(dVar56);
        local_2a8.M[2][0] = local_2a8.M[2][0] * local_488;
        local_2a8.M[2][1] = local_2a8.M[2][1] * local_488;
        local_2a8.M[2][2] = local_2a8.M[2][2] * local_488;
      }
      local_2a8.M[1][0] =
           local_588._s_0.Z * local_2a8.M[2][1] - local_588._s_0.Y * local_2a8.M[2][2];
      local_2a8.M[1][1] =
           local_588._s_0.X * local_2a8.M[2][2] - local_588._s_0.Z * local_2a8.M[2][0];
      local_2a8.M[1][2] =
           local_588._s_0.Y * local_2a8.M[2][0] - local_588._s_0.X * local_2a8.M[2][1];
      dVar56 = local_2a8.M[1][1] * local_2a8.M[1][1] + local_2a8.M[1][0] * local_2a8.M[1][0] +
               local_2a8.M[1][2] * local_2a8.M[1][2];
      if (__real_3e45798ee0000000 < dVar56) {
        local_450 = dVar8 / SQRT(dVar56);
        local_2a8.M[1][0] = local_2a8.M[1][0] * local_450;
        local_2a8.M[1][1] = local_2a8.M[1][1] * local_450;
        local_2a8.M[1][2] = local_2a8.M[1][2] * local_450;
      }
      local_2a8.M[3][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_2a8.M[3][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2a8.M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_2a8.M[0][3] = 0.0;
      local_2a8.M[1][3] = 0.0;
      local_2a8.M[2][3] = 0.0;
      local_2a8.M[3][3] = dVar8;
      local_2a8.M[0][0] = local_588._s_0.X;
      local_2a8.M[0][1] = local_588._s_0.Y;
      local_2a8.M[0][2] = local_588._s_0.Z;
      if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar18 = (this->SplineData).Object;
      uVar36 = 0;
      if ((int)uVar28 < (pFVar18->SamplesArray).ArrayNum) {
        uVar36 = ~uVar28 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (pFVar18->SamplesArray).AllocatorInstance.Data;
      pTVar24 = UE::Math::TMatrix<double>::ToQuat(&local_2a8,&local_308);
      dVar56 = pTVar24->Y;
      dVar63 = pTVar24->Z;
      dVar65 = pTVar24->W;
      pFVar30 = pFVar5 + lVar21;
      *(double *)pFVar30 = pTVar24->X;
      *(double *)(pFVar30 + 8) = dVar56;
      pFVar5 = pFVar5 + lVar21 + 0x10;
      *(double *)pFVar5 = dVar63;
      *(double *)(pFVar5 + 8) = dVar65;
      if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar18 = (this->SplineData).Object;
      uVar36 = 0;
      if ((int)uVar28 < (pFVar18->SamplesArray).ArrayNum) {
        uVar36 = ~uVar28 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (pFVar18->SamplesArray).AllocatorInstance.Data;
      local_368 = dVar8;
      local_378 = local_4b8;
      uStack_370 = uStack_4b0;
      pFVar30 = pFVar5 + lVar21 + 0x40;
      *(undefined8 *)pFVar30 = local_4b8;
      *(undefined8 *)(pFVar30 + 8) = uStack_4b0;
      pFVar5 = pFVar5 + lVar21 + 0x50;
      *(double *)pFVar5 = dVar8;
      *(double *)(pFVar5 + 8) = 0.0;
      if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar18 = (this->SplineData).Object;
      uVar36 = 0;
      if ((int)uVar28 < (pFVar18->SamplesArray).ArrayNum) {
        uVar36 = ~uVar28 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar16 = (uint)(local_598 * local_5c4);
      pTVar20 = (TTransform<double> *)
                ((pFVar18->SamplesArray).AllocatorInstance.Data + (longlong)(int)uVar28 * 0x60);
      uVar36 = uVar16 + 1;
      if (((int)uVar36 < 0) || (uVar29 = uVar16, param_1->ArrayNum <= (int)uVar36)) {
        uVar29 = uVar16 - 1;
        uVar36 = uVar16;
      }
      uVar16 = 0;
      if ((int)uVar29 < param_1->ArrayNum) {
        uVar16 = ~uVar29 >> 0x1f;
      }
      fVar79 = (float)(int)uVar29 * fVar55;
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_1a8,pTVar20,param_1->DataPtr + (int)uVar29);
      local_594 = ~uVar36 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar36 < param_1->ArrayNum) {
        uVar16 = local_594;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_148.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_148.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_538 = (longlong)(int)uVar36 * 0x60;
      local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_148.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_148.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_148.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_148,pTVar20,param_1->DataPtr + (int)uVar36);
      uVar16 = 0;
      if ((int)uVar36 < param_1->ArrayNum) {
        uVar16 = local_594;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pdVar2 = (double *)((longlong)(param_1->DataPtr->Rotation).XY.m128d_f64 + local_538);
      local_448.X = *pdVar2;
      local_448.Y = pdVar2[1];
      pdVar2 = (double *)((longlong)(param_1->DataPtr->Rotation).ZW.m128d_f64 + local_538);
      local_448.Z = *pdVar2;
      local_448.W = pdVar2[1];
      uVar16 = 0;
      if ((int)uVar29 < param_1->ArrayNum) {
        uVar16 = ~uVar29 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      auVar72._0_8_ = (double)((local_5c4 - fVar79) / ((float)(int)uVar36 * fVar55 - fVar79));
      auVar72._8_8_ = 0;
      pTVar20 = param_1->DataPtr + (int)uVar29;
      local_428.X = (pTVar20->Rotation).XY.m128d_f64[0];
      local_428.Y = (pTVar20->Rotation).XY.m128d_f64[1];
      pVVar31 = &param_1->DataPtr[(int)uVar29].Rotation;
      local_428.Z = (pVVar31->ZW).m128d_f64[0];
      local_428.W = (pVVar31->ZW).m128d_f64[1];
      pTVar24 = UE::Math::TQuat<double>::Slerp_NotNormalized
                          (&local_2e8,&local_428,&local_448,auVar72._0_8_);
      dVar56 = pTVar24->X;
      dVar63 = pTVar24->Y;
      dVar65 = pTVar24->Z;
      dVar67 = pTVar24->W;
      dVar57 = dVar65 * dVar65 + dVar56 * dVar56;
      dVar64 = dVar67 * dVar67 + dVar63 * dVar63;
      auVar49._8_4_ = SUB84(dVar64,0);
      auVar49._0_8_ = dVar57;
      auVar49._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
      auVar50._0_8_ = auVar49._8_8_ + dVar57;
      auVar50._8_8_ = dVar57 + dVar64;
      auVar73 = sqrtpd(auVar72,auVar50);
      local_480 = __real_3e45798ee0000000;
      auVar81 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar73);
      uVar38 = -(ulonglong)(__real_3e45798ee0000000 <= auVar50._0_8_);
      uVar39 = -(ulonglong)(__real_3e45798ee0000000 <= auVar50._8_8_);
      uVar36 = (uint)(uVar38 >> 0x20);
      uVar16 = (uint)(uVar39 >> 0x20);
      local_348._0_8_ = uVar38 & (ulonglong)(auVar81._0_8_ * dVar56);
      uVar10 = uVar39 & (ulonglong)(auVar81._8_8_ * dVar63);
      local_348._8_4_ = (undefined4)uVar10;
      local_348._12_4_ = (undefined4)(uVar10 >> 0x20);
      auVar61._0_4_ = ~(uint)uVar38 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar61._4_4_ =
           ~uVar36 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar61._8_4_ = ~(uint)uVar39 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar61._12_4_ =
           ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      local_348 = local_348 | auVar61;
      auVar73 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar73);
      local_338._0_4_ =
           ~(uint)uVar38 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      local_338._4_4_ =
           ~uVar36 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      local_338._8_4_ =
           ~(uint)uVar39 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_338._12_4_ =
           ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      auVar62._0_8_ = (ulonglong)(auVar73._0_8_ * dVar65) & uVar38;
      uVar39 = (ulonglong)(auVar73._8_8_ * dVar67) & uVar39;
      auVar62._8_4_ = (undefined4)uVar39;
      auVar62._12_4_ = (undefined4)(uVar39 >> 0x20);
      dVar65 = local_348._0_8_;
      local_338 = local_338 | auVar62;
      dVar57 = local_338._0_8_;
      dVar64 = local_338._8_8_;
      dVar56 = local_348._8_8_;
      dVar63 = dVar56 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z -
               dVar57 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
      dVar63 = dVar63 + dVar63;
      dVar68 = dVar57 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X -
               dVar65 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
      dVar68 = dVar68 + dVar68;
      dVar67 = dVar65 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y -
               dVar56 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
      dVar67 = dVar67 + dVar67;
      dVar66 = (dVar68 * dVar65 - dVar63 * dVar56) +
               dVar67 * dVar64 + UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
      dVar65 = (dVar63 * dVar57 - dVar67 * dVar65) +
               dVar68 * dVar64 + UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
      dVar56 = (dVar67 * dVar56 - dVar68 * dVar57) +
               dVar63 * dVar64 + UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
      local_228.M[2][0] = dVar66 * local_588._s_0.Y - dVar65 * local_588._s_0.Z;
      local_228.M[2][1] = dVar56 * local_588._s_0.Z - dVar66 * local_588._s_0.X;
      local_228.M[2][2] = dVar65 * local_588._s_0.X - dVar56 * local_588._s_0.Y;
      dVar56 = local_228.M[2][1] * local_228.M[2][1] + local_228.M[2][0] * local_228.M[2][0] +
               local_228.M[2][2] * local_228.M[2][2];
      if (__real_3e45798ee0000000 < dVar56) {
        local_478 = dVar8 / SQRT(dVar56);
        local_228.M[2][0] = local_228.M[2][0] * local_478;
        local_228.M[2][1] = local_228.M[2][1] * local_478;
        local_228.M[2][2] = local_228.M[2][2] * local_478;
      }
      local_228.M[1][0] =
           local_588._s_0.Z * local_228.M[2][1] - local_588._s_0.Y * local_228.M[2][2];
      local_228.M[1][1] =
           local_588._s_0.X * local_228.M[2][2] - local_588._s_0.Z * local_228.M[2][0];
      local_228.M[1][2] =
           local_588._s_0.Y * local_228.M[2][0] - local_588._s_0.X * local_228.M[2][1];
      dVar56 = local_228.M[1][1] * local_228.M[1][1] + local_228.M[1][0] * local_228.M[1][0] +
               local_228.M[1][2] * local_228.M[1][2];
      if (__real_3e45798ee0000000 < dVar56) {
        local_470 = dVar8 / SQRT(dVar56);
        local_228.M[1][0] = local_228.M[1][0] * local_470;
        local_228.M[1][1] = local_228.M[1][1] * local_470;
        local_228.M[1][2] = local_228.M[1][2] * local_470;
      }
      local_228.M[0][0] = local_588._s_0.X;
      local_228.M[3][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_228.M[3][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_228.M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_228.M[0][1] = local_588._s_0.Y;
      local_228.M[0][2] = local_588._s_0.Z;
      local_228.M[0][3] = 0.0;
      local_228.M[1][3] = 0.0;
      local_228.M[2][3] = 0.0;
      local_228.M[3][3] = dVar8;
      if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar18 = (this->SplineData).Object;
      uVar36 = 0;
      if ((int)uVar28 < (pFVar18->SamplesArray).ArrayNum) {
        uVar36 = ~uVar28 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (pFVar18->SamplesArray).AllocatorInstance.Data;
      pTVar24 = UE::Math::TMatrix<double>::ToQuat(&local_228,&local_2c8);
      dVar56 = pTVar24->Y;
      auVar73 = *(undefined1 (*) [16])&pTVar24->Z;
      pFVar30 = pFVar5 + lVar21;
      *(double *)pFVar30 = pTVar24->X;
      *(double *)(pFVar30 + 8) = dVar56;
      *(undefined1 (*) [16])(pFVar5 + lVar21 + 0x10) = auVar73;
      if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar18 = (this->SplineData).Object;
      uVar36 = 0;
      if ((int)uVar28 < (pFVar18->SamplesArray).ArrayNum) {
        uVar36 = ~uVar28 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_408._8_8_ = uStack_4b0;
      local_408._0_8_ = local_4b8;
      pFVar30 = (pFVar18->SamplesArray).AllocatorInstance.Data;
      uVar28 = uVar28 + 1;
      auVar51._8_8_ = 0;
      auVar51._0_8_ = dVar8;
      local_5c4 = local_5c4 + (float)local_5b0;
      local_560 = local_560 + 1;
      local_3f8 = dVar8;
      *(undefined1 (*) [16])(pFVar30 + lVar21 + 0x40) = local_408;
      *(undefined1 (*) [16])(pFVar30 + lVar21 + 0x50) = auVar51;
      lVar21 = lVar21 + 0x60;
      uVar76 = SUB84(__real_3e45798ee0000000,0);
      uVar77 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    } while (local_560 < local_558);
  }
  uVar28 = 1;
  if ((((param_2 == EVar3) && (param_4 == iVar15)) && (!bVar37)) && (param_3 == bVar14)) {
    if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar18 = (this->SplineData).Object;
    if (0 < (pFVar18->InitialLengths).ArrayNum) {
      if ((pFVar18 == (FControlRigSplineImpl *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar18 = (this->SplineData).Object;
      local_5a8.Data = (FScriptContainerElement *)0x0;
      local_5a0 = (pFVar18->SamplesArray).ArrayNum;
      lVar21 = (longlong)local_5a0;
      pFVar30 = (pFVar18->SamplesArray).AllocatorInstance.Data;
      if (local_5a0 == 0) {
        local_59c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,local_5a0,0,&local_5a8,local_5a0,&local_59c);
        memcpy(local_5a8.Data,pFVar30,lVar21 * 0x60);
      }
      iVar26 = 0;
      iVar17 = iVar17 + -1;
      local_5b0 = CONCAT44(local_5b0._4_4_,iVar17);
      local_5c4 = 0.0;
      do {
        bVar12 = iVar26 == 0;
        uVar36 = (uint)bVar12;
        if ((int)(uint)bVar12 < param_4) {
          uVar16 = (bVar12 - 1) + (int)local_5c4;
          do {
            if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (((int)uVar16 < 0) ||
               ((((this->SplineData).Object)->InitialLengths).ArrayNum <= (int)uVar16)) break;
            uVar29 = uVar16 + 1;
            uVar34 = 0;
            if ((int)uVar29 < local_5a0) {
              uVar34 = ~uVar29 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_518 = *(double *)(local_5a8.Data + (longlong)(int)uVar29 * 0x60 + 0x20);
            dStack_510 = *(double *)(local_5a8.Data + (longlong)(int)uVar29 * 0x60 + 0x20 + 8);
            local_508 = *(double *)(local_5a8.Data + (longlong)(int)uVar29 * 0x60 + 0x30);
            uVar29 = 0;
            if ((int)uVar16 < local_5a0) {
              uVar29 = ~uVar16 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_3f0 = *(double *)(local_5a8.Data + (longlong)(int)uVar16 * 0x60 + 0x20);
            dStack_3e8 = *(double *)(local_5a8.Data + (longlong)(int)uVar16 * 0x60 + 0x20 + 8);
            local_3e0 = *(double *)(local_5a8.Data + (longlong)(int)uVar16 * 0x60 + 0x30);
            dVar56 = local_518 - local_3f0;
            dVar65 = local_508 - local_3e0;
            dVar63 = dStack_510 - dStack_3e8;
            dVar67 = dVar63 * dVar63 + dVar56 * dVar56 + dVar65 * dVar65;
            if ((double)CONCAT44(uVar77,uVar76) <= dVar67 &&
                dVar67 != (double)CONCAT44(uVar77,uVar76)) {
              local_468 = dVar8 / SQRT(dVar67);
              dVar56 = dVar56 * local_468;
              dVar63 = dVar63 * local_468;
              dVar65 = dVar65 * local_468;
            }
            if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar18 = (this->SplineData).Object;
            uVar29 = 0;
            if ((int)uVar16 < (pFVar18->InitialLengths).ArrayNum) {
              uVar29 = ~uVar16 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar55 = *(float *)((pFVar18->InitialLengths).AllocatorInstance.Data +
                               (longlong)(int)uVar16 * 4);
            if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar18 = (this->SplineData).Object;
            uVar29 = 0;
            if ((int)(uVar16 + 1) < (pFVar18->SamplesArray).ArrayNum) {
              uVar29 = ~(uVar16 + 1) >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar30 = (pFVar18->SamplesArray).AllocatorInstance.Data;
            auVar73 = *(undefined1 (*) [16])(pFVar30 + (longlong)(int)uVar16 * 0x60 + 0x80);
            local_4f0 = *(double *)(pFVar30 + (longlong)(int)uVar16 * 0x60 + 0x90);
            local_500 = auVar73;
            if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), auVar73 = extraout_XMM0, bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar54 = auVar73._8_8_;
            pFVar18 = (this->SplineData).Object;
            uVar29 = 0;
            if ((int)uVar16 < (pFVar18->SamplesArray).ArrayNum) {
              uVar29 = ~uVar16 >> 0x1f;
            }
            if (uVar29 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              uVar54 = extraout_XMM0_00._8_8_;
              if (bVar12) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            pFVar30 = (pFVar18->SamplesArray).AllocatorInstance.Data;
            local_3d8 = *(undefined1 (*) [16])(pFVar30 + (longlong)(int)uVar16 * 0x60 + 0x20);
            local_3c8 = *(double *)(pFVar30 + (longlong)(int)uVar16 * 0x60 + 0x30);
            auVar9._4_8_ = uVar54;
            auVar9._0_4_ = local_3d8._4_4_;
            auVar52._0_8_ = auVar9._0_8_ << 0x20;
            auVar52._8_4_ = local_3d8._8_4_;
            auVar52._12_4_ = local_3d8._12_4_;
            fVar40 = (float)(((double)local_500._8_8_ - auVar52._8_8_) * dVar63 +
                             ((double)local_500._0_8_ - local_3d8._0_8_) * dVar56 +
                            (local_4f0 - local_3c8) * dVar65);
            fVar79 = fVar40;
            if (0.0 < param_6) {
              fVar79 = fVar55 * param_6;
            }
            fVar80 = fVar40;
            if (0.0 < param_5) {
              fVar80 = fVar55 * param_5;
            }
            if (fVar40 <= fVar79) {
              fVar79 = fVar40;
            }
            if (fVar79 <= fVar80) {
              fVar79 = fVar80;
            }
            if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar18 = (this->SplineData).Object;
            uVar29 = 0;
            if ((int)(uVar16 + 1) < (pFVar18->SamplesArray).ArrayNum) {
              uVar29 = ~(uVar16 + 1) >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar21 = (longlong)(int)uVar16;
            pFVar30 = (pFVar18->SamplesArray).AllocatorInstance.Data;
            if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar18 = (this->SplineData).Object;
            uVar29 = 0;
            if ((int)uVar16 < (pFVar18->SamplesArray).ArrayNum) {
              uVar29 = ~uVar16 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            dVar67 = (double)fVar79;
            lVar33 = (longlong)(int)uVar16;
            uVar36 = uVar36 + 1;
            uVar16 = uVar16 + 1;
            pFVar6 = (pFVar18->SamplesArray).AllocatorInstance.Data;
            pFVar5 = pFVar6 + lVar33 * 0x60 + 0x20;
            local_3c0 = *(double *)pFVar5;
            dStack_3b8 = *(double *)(pFVar5 + 8);
            local_3b0 = SUB168(*(undefined1 (*) [16])(pFVar6 + lVar33 * 0x60 + 0x30),0);
            auVar74._0_8_ = dVar67 * dVar65 + local_3b0;
            auVar74._8_8_ = 0;
            local_3a8._8_8_ = dVar67 * dVar63 + dStack_3b8;
            local_3a8._0_8_ = dVar67 * dVar56 + local_3c0;
            *(undefined1 (*) [16])(pFVar30 + (lVar21 + 1) * 0x60 + 0x20) = local_3a8;
            *(undefined1 (*) [16])(pFVar30 + (lVar21 + 1) * 0x60 + 0x30) = auVar74;
            uVar76 = SUB84(__real_3e45798ee0000000,0);
            uVar77 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
            local_398 = auVar74._0_8_;
          } while ((int)uVar36 < param_4);
          iVar17 = (int)(float)local_5b0;
        }
        uVar76 = SUB84(__real_3e45798ee0000000,0);
        uVar77 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
        local_5c4 = (float)((int)local_5c4 + param_4);
        iVar26 = iVar26 + 1;
      } while (iVar26 < iVar17);
      if (local_5a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5a8.Data);
      }
    }
  }
  if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar18 = (this->SplineData).Object;
  if (0 < (pFVar18->SamplesArray).ArrayNum) {
    if ((pFVar18 == (FControlRigSplineImpl *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar18 = (this->SplineData).Object;
    if ((pFVar18 == (FControlRigSplineImpl *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&pFVar18->AccumulatedLenth,(((this->SplineData).Object)->SamplesArray).ArrayNum,No);
    if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar18 = (this->SplineData).Object;
    if (((pFVar18->AccumulatedLenth).ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(undefined4 *)(pFVar18->AccumulatedLenth).AllocatorInstance.Data = 0;
    if ((((param_2 != EVar3) || (param_3 != bVar14)) || (param_4 != iVar15)) || (bVar37)) {
      if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar18 = (this->SplineData).Object;
      if ((pFVar18 == (FControlRigSplineImpl *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&pFVar18->InitialLengths,(((this->SplineData).Object)->SamplesArray).ArrayNum + -1,
                 Default);
    }
    lVar21 = 0;
    iVar17 = 0;
    lVar33 = 0x60;
    while( true ) {
      if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar18 = (this->SplineData).Object;
      if ((pFVar18->SamplesArray).ArrayNum <= (int)uVar28) break;
      if ((pFVar18 == (FControlRigSplineImpl *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar18 = (this->SplineData).Object;
      uVar36 = 0;
      if ((int)uVar28 < (pFVar18->SamplesArray).ArrayNum) {
        uVar36 = ~uVar28 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (pFVar18->SamplesArray).AllocatorInstance.Data;
      pFVar30 = pFVar5 + lVar33 + 0x20;
      local_530 = *(double *)pFVar30;
      dStack_528 = *(double *)(pFVar30 + 8);
      local_520 = *(double *)(pFVar5 + lVar33 + 0x30);
      if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar18 = (this->SplineData).Object;
      uVar36 = 0;
      if (iVar17 < (pFVar18->SamplesArray).ArrayNum) {
        uVar36 = -uVar28 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (pFVar18->SamplesArray).AllocatorInstance.Data;
      pFVar30 = pFVar5 + lVar33 + -0x40;
      local_390 = *(double *)pFVar30;
      dStack_388 = *(double *)(pFVar30 + 8);
      local_380 = *(double *)(pFVar5 + lVar33 + -0x30);
      auVar53._0_8_ = (local_520 - local_380) * (local_520 - local_380);
      auVar53._8_8_ = 0;
      auVar75._0_8_ =
           (dStack_528 - dStack_388) * (dStack_528 - dStack_388) +
           (local_530 - local_390) * (local_530 - local_390) + auVar53._0_8_;
      auVar75._8_8_ = 0;
      auVar73 = sqrtpd(auVar53,auVar75);
      if ((((param_2 != EVar3) || (param_3 != bVar14)) || (param_4 != iVar15)) || (bVar37)) {
        if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar18 = (this->SplineData).Object;
        uVar36 = 0;
        if ((int)(uVar28 - 1) < (pFVar18->InitialLengths).ArrayNum) {
          uVar36 = -uVar28 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(float *)((pFVar18->InitialLengths).AllocatorInstance.Data + lVar21) = (float)auVar73._0_8_
        ;
      }
      if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar18 = (this->SplineData).Object;
      uVar36 = 0;
      if ((int)(uVar28 - 1) < (pFVar18->AccumulatedLenth).ArrayNum) {
        uVar36 = -uVar28 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar55 = *(float *)((pFVar18->AccumulatedLenth).AllocatorInstance.Data + lVar21);
      if (((this->SplineData).Object == (FControlRigSplineImpl *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar18 = (this->SplineData).Object;
      uVar36 = 0;
      if ((int)uVar28 < (pFVar18->AccumulatedLenth).ArrayNum) {
        uVar36 = ~uVar28 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar21 = lVar21 + 4;
      uVar28 = uVar28 + 1;
      lVar33 = lVar33 + 0x60;
      iVar17 = iVar17 + 1;
      *(float *)((pFVar18->AccumulatedLenth).AllocatorInstance.Data + lVar21) =
           (float)auVar73._0_8_ + fVar55;
    }
  }
LAB_14dec91ce:
  if (local_590 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_590);
  }
  return;
}

// TangentAtParam @ 14ded2260

TVector<double> * __thiscall
FControlRigSpline::TangentAtParam
          (FControlRigSpline *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  FScriptContainerElement *pFVar1;
  FControlRigSplineImpl *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [12];
  ulonglong uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  TVector<double> *pTVar13;
  TQuat<double> *pTVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  uint uVar27;
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  TVector<double>_u_0 local_188;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  TVector<double>_u_0 local_140;
  double local_120;
  double dStack_118;
  double local_110;
  TQuat<double> local_108 [2];
  TQuat<double> local_c8 [4];
  
  pFVar2 = (this->SplineData).Object;
  if (pFVar2 == (FControlRigSplineImpl *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    return __return_storage_ptr__;
  }
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  iVar11 = (pFVar2->SamplesArray).ArrayNum + -1;
  pFVar2 = (this->SplineData).Object;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar28 = (float)iVar11 * param_1;
  uVar17 = (uint)fVar28;
  uVar27 = uVar17 + 1;
  if (iVar11 <= (int)uVar17) {
    uVar27 = uVar17;
  }
  uVar16 = 0;
  if ((int)uVar27 < (pFVar2->SamplesArray).ArrayNum) {
    uVar16 = ~uVar27 >> 0x1f;
  }
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TVector<double> *)(*pcVar4)();
      return pTVar13;
    }
  }
  pFVar3 = (pFVar2->SamplesArray).AllocatorInstance.Data;
  lVar15 = (longlong)(int)uVar27 * 0x60;
  pFVar1 = pFVar3 + lVar15 + 0x20;
  local_170 = *(double *)pFVar1;
  dStack_168 = *(double *)(pFVar1 + 8);
  local_160 = *(double *)(pFVar3 + lVar15 + 0x30);
  if ((this->SplineData).Object == (FControlRigSplineImpl *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TVector<double> *)(*pcVar4)();
      return pTVar13;
    }
  }
  pFVar2 = (this->SplineData).Object;
  uVar16 = 0;
  if ((int)uVar17 < (pFVar2->SamplesArray).ArrayNum) {
    uVar16 = ~uVar17 >> 0x1f;
  }
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TVector<double> *)(*pcVar4)();
      return pTVar13;
    }
  }
  pFVar3 = (pFVar2->SamplesArray).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(int)uVar17 * 0x60 + 0x20;
  local_120 = *(double *)pFVar1;
  dStack_118 = *(double *)(pFVar1 + 8);
  local_188._s_0.X = local_170 - local_120;
  local_110 = *(double *)(pFVar3 + (longlong)(int)uVar17 * 0x60 + 0x30);
  local_188._s_0.Y = dStack_168 - dStack_118;
  local_188._s_0.Z = local_160 - local_110;
  if ((this->SplineData).Object == (FControlRigSplineImpl *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TVector<double> *)(*pcVar4)();
      return pTVar13;
    }
  }
  pFVar2 = (this->SplineData).Object;
  uVar16 = uVar27 + 1;
  if ((int)uVar16 < (pFVar2->SamplesArray).ArrayNum) {
    if (pFVar2 == (FControlRigSplineImpl *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TVector<double> *)(*pcVar4)();
        return pTVar13;
      }
    }
    pFVar2 = (this->SplineData).Object;
    uVar12 = 0;
    if ((int)uVar16 < (pFVar2->SamplesArray).ArrayNum) {
      uVar12 = ~uVar16 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TVector<double> *)(*pcVar4)();
        return pTVar13;
      }
    }
    pFVar3 = (pFVar2->SamplesArray).AllocatorInstance.Data;
    pFVar1 = pFVar3 + (longlong)(int)uVar16 * 0x60 + 0x20;
    local_158 = *(double *)pFVar1;
    dStack_150 = *(double *)(pFVar1 + 8);
    local_148 = *(double *)(pFVar3 + (longlong)(int)uVar16 * 0x60 + 0x30);
    if ((this->SplineData).Object == (FControlRigSplineImpl *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TVector<double> *)(*pcVar4)();
        return pTVar13;
      }
    }
    pFVar2 = (this->SplineData).Object;
    uVar16 = 0;
    if ((int)uVar27 < (pFVar2->SamplesArray).ArrayNum) {
      uVar16 = ~uVar27 >> 0x1f;
    }
    if (uVar16 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TVector<double> *)(*pcVar4)();
        return pTVar13;
      }
    }
    pFVar3 = (pFVar2->SamplesArray).AllocatorInstance.Data;
    pFVar1 = pFVar3 + lVar15 + 0x20;
    local_140._s_0.X = local_158 - *(double *)pFVar1;
    local_140._s_0.Y = dStack_150 - *(double *)(pFVar1 + 8);
    local_140._s_0.Z = local_148 - *(double *)(pFVar3 + lVar15 + 0x30);
    FRigVMMathLibrary::FindQuatBetweenVectors
              (local_108,(TVector<double> *)&local_188._s_0,(TVector<double> *)&local_140._s_0);
    auVar24._0_8_ = (double)(fVar28 - (float)(int)uVar17);
    auVar24._8_8_ = 0;
    pTVar14 = UE::Math::TQuat<double>::Slerp_NotNormalized
                        (local_c8,&UE::Math::TQuat<double>::Identity,local_108,auVar24._0_8_);
    dVar6 = pTVar14->X;
    dVar7 = pTVar14->Y;
    dVar26 = pTVar14->Z;
    dVar29 = pTVar14->W;
    dVar20 = dVar26 * dVar26 + dVar6 * dVar6;
    dVar23 = dVar29 * dVar29 + dVar7 * dVar7;
    dVar5 = dVar23 + dVar20;
    dVar20 = dVar20 + dVar23;
    auVar31._8_4_ = SUB84(dVar20,0);
    auVar31._0_8_ = dVar5;
    auVar31._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    auVar24 = sqrtpd(auVar24,auVar31);
    uVar18 = -(ulonglong)(__real_3e45798ee0000000 <= dVar5);
    uVar19 = -(ulonglong)(__real_3e45798ee0000000 <= dVar20);
    auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar24);
    uVar27 = (uint)(uVar18 >> 0x20);
    uVar17 = (uint)(uVar19 >> 0x20);
    auVar32._0_8_ = uVar18 & (ulonglong)(auVar31._0_8_ * dVar6);
    uVar9 = uVar19 & (ulonglong)(auVar31._8_8_ * dVar7);
    auVar32._8_4_ = (undefined4)uVar9;
    auVar32._12_4_ = (undefined4)(uVar9 >> 0x20);
    auVar21._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar21._4_4_ =
         ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar21._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar21._12_4_ =
         ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar24);
    auVar30._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar30._4_4_ =
         ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar30._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar30._12_4_ =
         ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    dVar23 = SUB168(auVar32 | auVar21,0);
    auVar22._0_8_ = (ulonglong)(auVar31._0_8_ * dVar26) & uVar18;
    uVar19 = (ulonglong)(auVar31._8_8_ * dVar29) & uVar19;
    auVar22._8_4_ = (undefined4)uVar19;
    auVar22._12_4_ = (undefined4)(uVar19 >> 0x20);
    auVar30 = auVar30 | auVar22;
    dVar6 = SUB168(auVar32 | auVar21,8);
    dVar5 = auVar30._0_8_;
    dVar7 = dVar6 * local_188._s_0.Z - dVar5 * local_188._s_0.Y;
    dVar7 = dVar7 + dVar7;
    dVar20 = dVar5 * local_188._s_0.X - dVar23 * local_188._s_0.Z;
    dVar20 = dVar20 + dVar20;
    dVar29 = dVar23 * local_188._s_0.Y - dVar6 * local_188._s_0.X;
    dVar29 = dVar29 + dVar29;
    auVar8._4_8_ = auVar24._8_8_;
    auVar8._0_4_ = auVar30._4_4_;
    auVar25._0_8_ = auVar8._0_8_ << 0x20;
    auVar25._8_4_ = auVar30._8_4_;
    auVar25._12_4_ = auVar30._12_4_;
    dVar26 = auVar25._8_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (dVar29 * dVar6 - dVar20 * dVar5) + dVar7 * dVar26 + local_188._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (dVar7 * dVar5 - dVar29 * dVar23) + dVar20 * dVar26 + local_188._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (dVar20 * dVar23 - dVar7 * dVar6) + dVar29 * dVar26 + local_188._s_0.Z;
  }
  else {
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_188._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = local_188._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_188._s_0.Z;
  }
  return __return_storage_ptr__;
}

// TransformAtParam @ 14ded2860

TTransform<double> * __thiscall
FControlRigSpline::TransformAtParam
          (FControlRigSpline *this,TTransform<double> *__return_storage_ptr__,float param_1)

{
  FScriptContainerElement *pFVar1;
  FControlRigSplineImpl *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  __m128 _Var23;
  bool bVar24;
  int iVar25;
  TTransform<double> *pTVar26;
  TQuat<double> *pTVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar48;
  double dVar49;
  undefined1 auVar47 [16];
  undefined1 auVar50 [16];
  uint uVar51;
  uint uVar52;
  double dVar53;
  undefined1 auVar54 [16];
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  float fVar74;
  TQuat<double> local_188;
  TQuat<double> local_168;
  undefined1 local_148 [16];
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  undefined1 local_118 [80];
  TQuat<double> local_c8 [4];
  
  _Var23.m128_f32 = GlobalVectorConstants::Float0001.m128_f32;
  pFVar2 = (this->SplineData).Object;
  if (pFVar2 == (FControlRigSplineImpl *)0x0) {
    fVar74 = GlobalVectorConstants::Float0001.m128_f32[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar74;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)_Var23.m128_f32[2];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)_Var23.m128_f32[3];
    _Var23 = GlobalVectorConstants::FloatZero;
    fVar74 = GlobalVectorConstants::FloatZero.m128_f32[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar74;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)_Var23.m128_f32[2];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)_Var23.m128_f32[3];
    _Var23 = GlobalVectorConstants::Float1110;
    fVar74 = GlobalVectorConstants::Float1110.m128_f32[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar74;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)_Var23.m128_f32[2];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)_Var23.m128_f32[3];
    return __return_storage_ptr__;
  }
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  iVar25 = (pFVar2->SamplesArray).ArrayNum + -1;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  pFVar2 = (this->SplineData).Object;
  fVar74 = (float)iVar25 * param_1;
  uVar30 = (uint)fVar74;
  uVar29 = uVar30 + 1;
  if (iVar25 <= (int)uVar30) {
    uVar29 = uVar30;
  }
  uVar51 = 0;
  if ((int)uVar29 < (pFVar2->SamplesArray).ArrayNum) {
    uVar51 = ~uVar29 >> 0x1f;
  }
  fVar74 = fVar74 - (float)(int)uVar30;
  if (uVar51 == 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TTransform<double> *)(*pcVar4)();
      return pTVar26;
    }
  }
  pFVar3 = (pFVar2->SamplesArray).AllocatorInstance.Data;
  lVar31 = (longlong)(int)uVar29 * 0x60;
  pFVar1 = pFVar3 + lVar31;
  local_188.X = *(double *)pFVar1;
  local_188.Y = *(double *)(pFVar1 + 8);
  pFVar3 = pFVar3 + lVar31 + 0x10;
  local_188.Z = *(double *)pFVar3;
  local_188.W = *(double *)(pFVar3 + 8);
  if ((this->SplineData).Object == (FControlRigSplineImpl *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar24) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TTransform<double> *)(*pcVar4)();
      return pTVar26;
    }
  }
  pFVar2 = (this->SplineData).Object;
  uVar51 = 0;
  if ((int)uVar30 < (pFVar2->SamplesArray).ArrayNum) {
    uVar51 = ~uVar30 >> 0x1f;
  }
  if (uVar51 == 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TTransform<double> *)(*pcVar4)();
      return pTVar26;
    }
  }
  lVar28 = (longlong)(int)uVar30 * 0x60;
  pFVar3 = (pFVar2->SamplesArray).AllocatorInstance.Data;
  pFVar1 = pFVar3 + lVar28;
  local_168.X = *(double *)pFVar1;
  local_168.Y = *(double *)(pFVar1 + 8);
  pFVar3 = pFVar3 + lVar28 + 0x10;
  local_168.Z = *(double *)pFVar3;
  local_168.W = *(double *)(pFVar3 + 8);
  pTVar27 = UE::Math::TQuat<double>::Slerp_NotNormalized
                      (local_c8,&local_168,&local_188,(double)fVar74);
  uVar66 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._0_4_;
  uVar67 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._4_4_;
  uVar68 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._0_4_;
  uVar69 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._4_4_;
  uVar70 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._0_4_;
  uVar71 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._4_4_;
  uVar72 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1]._0_4_;
  uVar73 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1]._4_4_;
  local_148._0_8_ = pTVar27->X;
  local_148._8_8_ = pTVar27->Y;
  local_138 = pTVar27->Z;
  dStack_130 = pTVar27->W;
  auVar45._0_8_ = (double)local_148._0_8_ * (double)local_148._0_8_ + local_138 * local_138;
  auVar45._8_8_ = (double)local_148._8_8_ * (double)local_148._8_8_ + dStack_130 * dStack_130;
  auVar35._8_4_ = SUB84(auVar45._8_8_,0);
  auVar35._0_8_ = auVar45._0_8_;
  auVar35._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
  auVar36._0_8_ = auVar35._8_8_ + auVar45._0_8_;
  auVar36._8_8_ = auVar45._0_8_ + auVar45._8_8_;
  auVar46 = sqrtpd(auVar45,auVar36);
  uVar32 = -(ulonglong)(__real_3e45798ee0000000 <= auVar36._0_8_);
  uVar33 = -(ulonglong)(__real_3e45798ee0000000 <= auVar36._8_8_);
  uVar51 = (uint)(uVar32 >> 0x20);
  uVar52 = (uint)(uVar33 >> 0x20);
  auVar56 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar46);
  uVar58 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  uVar59 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  uVar60 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar61 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  uVar62 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  uVar63 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  uVar64 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar65 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar46);
  auVar57._0_8_ = uVar32 & (ulonglong)(auVar56._0_8_ * (double)local_148._0_8_);
  uVar8 = uVar33 & (ulonglong)(auVar56._8_8_ * (double)local_148._8_8_);
  auVar57._8_4_ = (undefined4)uVar8;
  auVar57._12_4_ = (undefined4)(uVar8 >> 0x20);
  auVar54._0_8_ = (ulonglong)(auVar46._0_8_ * local_138) & uVar32;
  uVar8 = (ulonglong)(auVar46._8_8_ * dStack_130) & uVar33;
  auVar54._8_4_ = (undefined4)uVar8;
  auVar54._12_4_ = (undefined4)(uVar8 >> 0x20);
  auVar37._0_4_ = ~(uint)uVar32 & uVar58;
  auVar37._4_4_ = ~uVar51 & uVar59;
  auVar37._8_4_ = ~(uint)uVar33 & uVar60;
  auVar37._12_4_ = ~uVar52 & uVar61;
  auVar46._4_4_ = ~uVar51 & uVar63;
  auVar46._0_4_ = ~(uint)uVar32 & uVar62;
  auVar46._8_4_ = ~(uint)uVar33 & uVar64;
  auVar46._12_4_ = ~uVar52 & uVar65;
  dVar34 = SUB168(auVar57 | auVar37,0);
  dVar43 = SUB168(auVar54 | auVar46,0);
  dVar42 = SUB168(auVar57 | auVar37,8);
  dVar48 = SUB168(auVar54 | auVar46,8);
  dVar44 = dVar43 * dVar43 + dVar34 * dVar34;
  dVar49 = dVar48 * dVar48 + dVar42 * dVar42;
  auVar38._8_4_ = SUB84(dVar49,0);
  auVar38._0_8_ = dVar44;
  auVar38._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
  auVar39._0_8_ = auVar38._8_8_ + dVar44;
  auVar39._8_8_ = dVar44 + dVar49;
  auVar56 = sqrtpd(local_148,auVar39);
  uVar32 = -(ulonglong)(__real_3e45798ee0000000 <= auVar39._0_8_);
  uVar33 = -(ulonglong)(__real_3e45798ee0000000 <= auVar39._8_8_);
  uVar51 = (uint)(uVar32 >> 0x20);
  uVar52 = (uint)(uVar33 >> 0x20);
  auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar56);
  auVar40._0_4_ = ~(uint)uVar32 & uVar58;
  auVar40._4_4_ = ~uVar51 & uVar59;
  auVar40._8_4_ = ~(uint)uVar33 & uVar60;
  auVar40._12_4_ = ~uVar52 & uVar61;
  auVar47._0_8_ = uVar32 & (ulonglong)(auVar46._0_8_ * dVar34);
  uVar8 = uVar33 & (ulonglong)(auVar46._8_8_ * dVar42);
  auVar47._8_4_ = (undefined4)uVar8;
  auVar47._12_4_ = (undefined4)(uVar8 >> 0x20);
  local_128 = auVar47 | auVar40;
  auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar56);
  auVar41._0_8_ = (ulonglong)(auVar46._0_8_ * dVar43) & uVar32;
  uVar8 = (ulonglong)(auVar46._8_8_ * dVar48) & uVar33;
  auVar41._8_4_ = (undefined4)uVar8;
  auVar41._12_4_ = (undefined4)(uVar8 >> 0x20);
  auVar56._4_4_ = ~uVar51 & uVar63;
  auVar56._0_4_ = ~(uint)uVar32 & uVar62;
  auVar56._8_4_ = ~(uint)uVar33 & uVar64;
  auVar56._12_4_ = ~uVar52 & uVar65;
  local_118._0_16_ = auVar41 | auVar56;
  if ((this->SplineData).Object == (FControlRigSplineImpl *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar24) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TTransform<double> *)(*pcVar4)();
      return pTVar26;
    }
    uVar66 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._0_4_;
    uVar67 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._4_4_;
    uVar68 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._0_4_;
    uVar69 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._4_4_;
    uVar70 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._0_4_;
    uVar71 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._4_4_;
    uVar72 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1]._0_4_;
    uVar73 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1]._4_4_;
  }
  pFVar2 = (this->SplineData).Object;
  uVar51 = 0;
  if ((int)uVar29 < (pFVar2->SamplesArray).ArrayNum) {
    uVar51 = ~uVar29 >> 0x1f;
  }
  if (uVar51 == 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TTransform<double> *)(*pcVar4)();
      return pTVar26;
    }
    uVar66 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._0_4_;
    uVar67 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._4_4_;
    uVar68 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._0_4_;
    uVar69 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._4_4_;
    uVar70 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._0_4_;
    uVar71 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._4_4_;
    uVar72 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1]._0_4_;
    uVar73 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1]._4_4_;
  }
  pFVar1 = (pFVar2->SamplesArray).AllocatorInstance.Data;
  if ((this->SplineData).Object == (FControlRigSplineImpl *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar24) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TTransform<double> *)(*pcVar4)();
      return pTVar26;
    }
    uVar66 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._0_4_;
    uVar67 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._4_4_;
    uVar68 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._0_4_;
    uVar69 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._4_4_;
    uVar70 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._0_4_;
    uVar71 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._4_4_;
    uVar72 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1]._0_4_;
    uVar73 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1]._4_4_;
  }
  pFVar2 = (this->SplineData).Object;
  uVar29 = 0;
  if ((int)uVar30 < (pFVar2->SamplesArray).ArrayNum) {
    uVar29 = ~uVar30 >> 0x1f;
  }
  if (uVar29 == 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TTransform<double> *)(*pcVar4)();
      return pTVar26;
    }
    uVar66 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._0_4_;
    uVar67 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._4_4_;
    uVar68 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._0_4_;
    uVar69 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._4_4_;
    uVar70 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._0_4_;
    uVar71 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._4_4_;
    uVar72 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1]._0_4_;
    uVar73 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1]._4_4_;
  }
  pFVar3 = (pFVar2->SamplesArray).AllocatorInstance.Data;
  dVar53 = (double)fVar74;
  dVar55 = (double)fVar74;
  dVar9 = *(double *)(pFVar3 + lVar28 + 0x20);
  dVar10 = *(double *)(pFVar3 + lVar28 + 0x30);
  dVar11 = *(double *)(pFVar3 + lVar28 + 0x30 + 8);
  dVar12 = *(double *)(pFVar1 + lVar31 + 0x20);
  dVar44 = (double)CONCAT44(uVar67,uVar66) - dVar53;
  dVar48 = (double)CONCAT44(uVar69,uVar68) - dVar55;
  dVar13 = *(double *)(pFVar1 + lVar31 + 0x40);
  dVar14 = *(double *)(pFVar1 + lVar31 + 0x40 + 8);
  dVar42 = (double)fVar74;
  dVar43 = (double)fVar74;
  dVar49 = (double)CONCAT44(uVar71,uVar70) - dVar42;
  dVar7 = (double)CONCAT44(uVar73,uVar72) - dVar43;
  dVar34 = dVar55 * *(double *)(pFVar1 + lVar31 + 0x20 + 8) +
           *(double *)(pFVar3 + lVar28 + 0x20 + 8) * dVar48;
  dVar15 = *(double *)(pFVar3 + lVar28 + 0x40);
  dVar16 = *(double *)(pFVar3 + lVar28 + 0x40 + 8);
  auVar50._8_4_ = SUB84(dVar43,0);
  auVar50._0_8_ = dVar42;
  auVar50._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
  dVar17 = *(double *)(pFVar1 + lVar31 + 0x30);
  dVar18 = *(double *)(pFVar1 + lVar31 + 0x30 + 8);
  dVar19 = *(double *)(pFVar1 + lVar31 + 0x50);
  dVar20 = *(double *)(pFVar1 + lVar31 + 0x50 + 8);
  dVar21 = *(double *)(pFVar3 + lVar28 + 0x50);
  dVar22 = *(double *)(pFVar3 + lVar28 + 0x50 + 8);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (double)local_128._0_8_;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)local_128._8_8_;
  dVar43 = dVar43 * dVar20 + dVar22 * dVar7;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)local_118._0_8_;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)local_118._8_8_;
  auVar5._8_4_ = SUB84(dVar34,0);
  auVar5._0_8_ = dVar53 * dVar12 + dVar9 * dVar44;
  auVar5._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar5;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar42 * dVar17 + dVar10 * dVar49;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = auVar50._8_8_ * dVar18 + dVar11 * dVar7;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar53 * dVar13 + dVar15 * dVar44;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar55 * dVar14 + dVar16 * dVar48;
  auVar6._8_4_ = SUB84(dVar43,0);
  auVar6._0_8_ = dVar42 * dVar19 + dVar21 * dVar49;
  auVar6._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar6;
  return __return_storage_ptr__;
}

