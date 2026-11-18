// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 12

// StaticStruct @ 14dadb0d0

UScriptStruct * __cdecl FParticleTransformTrack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FParticleTransformTrack.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosCaching();
    Z_Registration_Info_UScriptStruct_FParticleTransformTrack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FParticleTransformTrack,(UObject *)pUVar1,
                         L"ParticleTransformTrack");
  }
  return Z_Registration_Info_UScriptStruct_FParticleTransformTrack.OuterSingleton;
}

// operator= @ 14dae90b0

FParticleTransformTrack * __thiscall
FParticleTransformTrack::operator=(FParticleTransformTrack *this,FParticleTransformTrack *param_1)

{
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)this,
             (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)param_1);
  pTVar1 = &(param_1->RawTransformTrack).RotKeys;
  pTVar2 = &(this->RawTransformTrack).RotKeys;
  if (pTVar2 != pTVar1) {
    iVar4 = (this->RawTransformTrack).RotKeys.ArrayMax;
    piVar3 = &(this->RawTransformTrack).RotKeys.ArrayMax;
    _Src = (pTVar1->AllocatorInstance).Data;
    iVar5 = (param_1->RawTransformTrack).RotKeys.ArrayNum;
    (this->RawTransformTrack).RotKeys.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar4 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,iVar5,iVar4,&pTVar2->AllocatorInstance,iVar5,piVar3);
      if (iVar5 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar5 << 4);
      }
    }
  }
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->RawTransformTrack).ScaleKeys,&(param_1->RawTransformTrack).ScaleKeys);
  this->BeginOffset = param_1->BeginOffset;
  this->bDeactivateOnEnd = param_1->bDeactivateOnEnd;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->KeyTimestamps,&param_1->KeyTimestamps)
  ;
  return this;
}

// Compress @ 14daed6d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FParticleTransformTrack::Compress(FParticleTransformTrack *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  int iVar27;
  TTransform<double> *pTVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  FParticleTransformTrack *pFVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  longlong lVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  TTransform<double> local_f8 [2];
  
  dVar14 = __real_3f1a36e2e0000000;
  uVar13 = _UNK_15061cc8c;
  uVar12 = _UNK_15061cc88;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (2 < (this->KeyTimestamps).ArrayNum) {
    iVar35 = 0;
    iVar34 = 0;
    do {
      EvaluateAt(this,local_f8,iVar34);
      CopyTrackEntry(this,iVar34,iVar35);
      dVar26 = local_f8[0].Scale3D.ZW.m128d_f64[1];
      dVar25 = local_f8[0].Scale3D.ZW.m128d_f64[0];
      dVar24 = local_f8[0].Scale3D.XY.m128d_f64[1];
      dVar23 = local_f8[0].Scale3D.XY.m128d_f64[0];
      dVar22 = local_f8[0].Translation.ZW.m128d_f64[1];
      dVar21 = local_f8[0].Translation.ZW.m128d_f64[0];
      dVar20 = local_f8[0].Translation.XY.m128d_f64[1];
      dVar19 = local_f8[0].Translation.XY.m128d_f64[0];
      dVar18 = local_f8[0].Rotation.ZW.m128d_f64[1];
      dVar17 = local_f8[0].Rotation.ZW.m128d_f64[0];
      dVar16 = local_f8[0].Rotation.XY.m128d_f64[1];
      dVar15 = local_f8[0].Rotation.XY.m128d_f64[0];
      iVar36 = iVar35 + 1;
      iVar33 = iVar34 + 1;
      if (iVar33 < (this->KeyTimestamps).ArrayNum) {
        while( true ) {
          pFVar32 = this;
          pTVar28 = EvaluateAt(this,local_f8,iVar33);
          lVar37 = -(ulonglong)
                    (dVar14 < (double)CONCAT44((uint)((ulonglong)
                                                      (local_f8[0].Translation.ZW.m128d_f64[1] -
                                                      dVar22) >> 0x20) & uVar13,
                                               SUB84(local_f8[0].Translation.ZW.m128d_f64[1] -
                                                     dVar22,0) & uVar12));
          auVar1._8_4_ = (int)lVar37;
          auVar1._0_8_ = -(ulonglong)
                          (dVar14 < (double)CONCAT44((uint)((ulonglong)
                                                            (local_f8[0].Translation.ZW.m128d_f64[0]
                                                            - dVar21) >> 0x20) & uVar11,
                                                     SUB84(local_f8[0].Translation.ZW.m128d_f64[0] -
                                                           dVar21,0) & uVar10));
          auVar1._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
          uVar29 = movmskpd((int)pFVar32,auVar1);
          lVar37 = -(ulonglong)
                    (dVar14 < (double)CONCAT44((uint)((ulonglong)
                                                      (local_f8[0].Translation.XY.m128d_f64[1] -
                                                      dVar20) >> 0x20) & uVar13,
                                               SUB84(local_f8[0].Translation.XY.m128d_f64[1] -
                                                     dVar20,0) & uVar12));
          auVar2._8_4_ = (int)lVar37;
          auVar2._0_8_ = -(ulonglong)
                          (dVar14 < (double)CONCAT44((uint)((ulonglong)
                                                            (local_f8[0].Translation.XY.m128d_f64[0]
                                                            - dVar19) >> 0x20) & uVar11,
                                                     SUB84(local_f8[0].Translation.XY.m128d_f64[0] -
                                                           dVar19,0) & uVar10));
          auVar2._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
          iVar27 = movmskpd((int)pTVar28,auVar2);
          if ((uVar29 & 0x3fffffff) != 0 || iVar27 != 0) break;
          dVar38 = local_f8[0].Rotation.ZW.m128d_f64[0] - dVar17;
          dVar39 = local_f8[0].Rotation.ZW.m128d_f64[1] - dVar18;
          dVar8 = local_f8[0].Rotation.XY.m128d_f64[0] - dVar15;
          dVar40 = local_f8[0].Rotation.XY.m128d_f64[1] - dVar16;
          lVar37 = -(ulonglong)
                    (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar13,
                                               SUB84(dVar39,0) & uVar12));
          auVar3._8_4_ = (int)lVar37;
          auVar3._0_8_ = -(ulonglong)
                          (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar11,
                                                     SUB84(dVar38,0) & uVar10));
          auVar3._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
          iVar30 = movmskpd(0,auVar3);
          lVar37 = -(ulonglong)
                    (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) & uVar13,
                                               SUB84(dVar40,0) & uVar12));
          dVar40 = local_f8[0].Rotation.XY.m128d_f64[0] + dVar15;
          dVar38 = local_f8[0].Rotation.XY.m128d_f64[1] + dVar16;
          dVar39 = local_f8[0].Rotation.ZW.m128d_f64[0] + dVar17;
          dVar41 = local_f8[0].Rotation.ZW.m128d_f64[1] + dVar18;
          auVar4._8_4_ = (int)lVar37;
          auVar4._0_8_ = -(ulonglong)
                          (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar11,
                                                     SUB84(dVar8,0) & uVar10));
          auVar4._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
          uVar29 = movmskpd(iVar27,auVar4);
          uVar31 = iVar30 << 2 | uVar29;
          if (uVar31 != 0) {
            lVar37 = -(ulonglong)
                      (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar13,
                                                 SUB84(dVar41,0) & uVar12));
            auVar5._8_4_ = (int)lVar37;
            auVar5._0_8_ = -(ulonglong)
                            (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar11,
                                                       SUB84(dVar39,0) & uVar10));
            auVar5._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
            uVar31 = movmskpd(uVar31,auVar5);
            lVar37 = -(ulonglong)
                      (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar13,
                                                 SUB84(dVar38,0) & uVar12));
            auVar9._8_4_ = (int)lVar37;
            auVar9._0_8_ = -(ulonglong)
                            (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) & uVar11,
                                                       SUB84(dVar40,0) & uVar10));
            auVar9._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
            uVar29 = movmskpd(uVar29,auVar9);
            if ((uVar31 & 0x3fffffff) != 0 || uVar29 != 0) break;
          }
          lVar37 = -(ulonglong)
                    (dVar14 < (double)CONCAT44((uint)((ulonglong)
                                                      (local_f8[0].Scale3D.ZW.m128d_f64[1] - dVar26)
                                                     >> 0x20) & uVar13,
                                               SUB84(local_f8[0].Scale3D.ZW.m128d_f64[1] - dVar26,0)
                                               & uVar12));
          auVar6._8_4_ = (int)lVar37;
          auVar6._0_8_ = -(ulonglong)
                          (dVar14 < (double)CONCAT44((uint)((ulonglong)
                                                            (local_f8[0].Scale3D.ZW.m128d_f64[0] -
                                                            dVar25) >> 0x20) & uVar11,
                                                     SUB84(local_f8[0].Scale3D.ZW.m128d_f64[0] -
                                                           dVar25,0) & uVar10));
          auVar6._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
          uVar31 = movmskpd(0,auVar6);
          lVar37 = -(ulonglong)
                    (dVar14 < (double)CONCAT44((uint)((ulonglong)
                                                      (local_f8[0].Scale3D.XY.m128d_f64[1] - dVar24)
                                                     >> 0x20) & uVar13,
                                               SUB84(local_f8[0].Scale3D.XY.m128d_f64[1] - dVar24,0)
                                               & uVar12));
          auVar7._8_4_ = (int)lVar37;
          auVar7._0_8_ = -(ulonglong)
                          (dVar14 < (double)CONCAT44((uint)((ulonglong)
                                                            (local_f8[0].Scale3D.XY.m128d_f64[0] -
                                                            dVar23) >> 0x20) & uVar11,
                                                     SUB84(local_f8[0].Scale3D.XY.m128d_f64[0] -
                                                           dVar23,0) & uVar10));
          auVar7._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
          iVar27 = movmskpd(uVar29,auVar7);
          if (((uVar31 & 0x3fffffff) != 0 || iVar27 != 0) ||
             (iVar33 = iVar33 + 1, (this->KeyTimestamps).ArrayNum <= iVar33)) break;
        }
      }
      iVar33 = iVar33 + -1;
      if ((iVar34 < iVar33) && (iVar34 = iVar33, iVar36 < (this->KeyTimestamps).ArrayNum)) {
        CopyTrackEntry(this,iVar33,iVar36);
        iVar36 = iVar35 + 2;
      }
      iVar35 = iVar36;
      iVar34 = iVar34 + 1;
    } while (iVar34 < (this->KeyTimestamps).ArrayNum);
    if (iVar35 < (this->KeyTimestamps).ArrayNum) {
      TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&this->KeyTimestamps,iVar35,Default);
      TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)this,iVar35,Default
                );
      TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>::SetNum
                (&(this->RawTransformTrack).RotKeys,iVar35,Default);
      TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
                (&(this->RawTransformTrack).ScaleKeys,iVar35,Default);
    }
  }
  return;
}

// CopyTrackEntry @ 14daedde0

void __thiscall
FParticleTransformTrack::CopyTrackEntry(FParticleTransformTrack *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  
  lVar8 = (longlong)param_2;
  lVar9 = (longlong)param_1;
  if (param_1 != param_2) {
    uVar10 = (uint)~param_1 >> 0x1f;
    uVar7 = 0;
    if (param_1 < (this->KeyTimestamps).ArrayNum) {
      uVar7 = uVar10;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar11 = (uint)~param_2 >> 0x1f;
    uVar1 = *(undefined4 *)((this->KeyTimestamps).AllocatorInstance.Data + lVar9 * 4);
    uVar7 = 0;
    if (param_2 < (this->KeyTimestamps).ArrayNum) {
      uVar7 = uVar11;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(undefined4 *)((this->KeyTimestamps).AllocatorInstance.Data + lVar8 * 4) = uVar1;
    uVar7 = 0;
    if (param_1 < (this->RawTransformTrack).PosKeys.ArrayNum) {
      uVar7 = uVar10;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->RawTransformTrack).PosKeys.AllocatorInstance.Data;
    uVar2 = *(undefined8 *)(pFVar3 + lVar9 * 0xc);
    uVar1 = *(undefined4 *)(pFVar3 + lVar9 * 0xc + 8);
    uVar7 = 0;
    if (param_2 < (this->RawTransformTrack).PosKeys.ArrayNum) {
      uVar7 = uVar11;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->RawTransformTrack).PosKeys.AllocatorInstance.Data;
    *(undefined8 *)(pFVar3 + lVar8 * 0xc) = uVar2;
    *(undefined4 *)(pFVar3 + lVar8 * 0xc + 8) = uVar1;
    uVar7 = 0;
    if (param_1 < (this->RawTransformTrack).RotKeys.ArrayNum) {
      uVar7 = uVar10;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->RawTransformTrack).RotKeys.AllocatorInstance.Data + lVar9 * 0x10;
    uVar2 = *(undefined8 *)pFVar3;
    uVar5 = *(undefined8 *)(pFVar3 + 8);
    uVar7 = 0;
    if (param_2 < (this->RawTransformTrack).RotKeys.ArrayNum) {
      uVar7 = uVar11;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->RawTransformTrack).RotKeys.AllocatorInstance.Data + lVar8 * 0x10;
    *(undefined8 *)pFVar3 = uVar2;
    *(undefined8 *)(pFVar3 + 8) = uVar5;
    uVar7 = 0;
    if (param_1 < (this->RawTransformTrack).ScaleKeys.ArrayNum) {
      uVar7 = uVar10;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->RawTransformTrack).ScaleKeys.AllocatorInstance.Data;
    uVar2 = *(undefined8 *)(pFVar3 + lVar9 * 0xc);
    uVar1 = *(undefined4 *)(pFVar3 + lVar9 * 0xc + 8);
    uVar7 = 0;
    if (param_2 < (this->RawTransformTrack).ScaleKeys.ArrayNum) {
      uVar7 = uVar11;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->RawTransformTrack).ScaleKeys.AllocatorInstance.Data;
    *(undefined8 *)(pFVar3 + lVar8 * 0xc) = uVar2;
    *(undefined4 *)(pFVar3 + lVar8 * 0xc + 8) = uVar1;
  }
  return;
}

// Evaluate @ 14daf0d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __thiscall
FParticleTransformTrack::Evaluate
          (FParticleTransformTrack *this,TTransform<double> *__return_storage_ptr__,float param_1,
          TTransform<double> *param_2,EChaosCacheInterpolationMode param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<_public:_struct_UE::Math::TTransform<double>___cdecl_FParticleTransformTrack::Evaluate(float,UE::Math::TTransform<double>_const_*,EChaosCacheInterpolationMode)const_::_2_::FStat_QSTAT_EvalParticleTransformTrack>
  FVar27;
  TTransform<double> *pTVar28;
  TQuat<double> *pTVar29;
  TDualQuat<double> *pTVar30;
  TDualQuat<double> *pTVar31;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar32;
  FName FVar33;
  undefined1 auVar34 [16];
  uint uVar35;
  uint uVar36;
  uint uVar37;
  float fVar38;
  uint uVar39;
  uint uVar40;
  undefined4 uVar41;
  uint uVar42;
  uint uVar43;
  undefined1 auStackY_748 [32];
  FColor_u_0 local_6e0 [2];
  undefined1 local_6d8 [16];
  FName local_6c8;
  FName local_6c0;
  TTransform<double> local_6a8;
  LARGE_INTEGER local_648;
  FStatMessage local_640;
  TTransform<double> local_628;
  TRotator<double> local_5c8;
  TRotator<double> local_5b0;
  TRotator<double> local_598;
  FName local_580;
  FName local_578 [2];
  TDualQuat<double> local_568;
  TDualQuat<double> local_528;
  TQuat<double> local_4e8;
  TQuat<double> local_4c8;
  TDualQuat<double> local_4a8;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_418;
  double dStack_410;
  TQuat<double> local_318;
  TDualQuat<double> local_2f8;
  TDualQuat<double> local_2b8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_748;
  local_6d8._0_8_ = param_2;
  uVar35 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_QSTAT_EvalParticleTransformTrack ==
        (FThreadSafeStaticStat<_public:_struct_UE::Math::TTransform<double>___cdecl_FParticleTransformTrack::Evaluate(float,UE::Math::TTransform<double>_const_*,EChaosCacheInterpolationMode)const_::_2_::FStat_QSTAT_EvalParticleTransformTrack>
         )0x0) {
      pFVar26 = ::FName::FName(&local_580,"QSTAT_EvalParticleTransformTrack");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_QSTAT_EvalParticleTransformTrack,*pFVar26,
                 L"QSTAT_EvalParticleTransformTrack","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar27 = StatPtr_QSTAT_EvalParticleTransformTrack;
  if (StatPtr_QSTAT_EvalParticleTransformTrack ==
      (FThreadSafeStaticStat<_public:_struct_UE::Math::TTransform<double>___cdecl_FParticleTransformTrack::Evaluate(float,UE::Math::TTransform<double>_const_*,EChaosCacheInterpolationMode)const_::_2_::FStat_QSTAT_EvalParticleTransformTrack>
       )0x0) {
    pFVar26 = ::FName::FName(local_578,"QSTAT_EvalParticleTransformTrack");
    FVar27 = (FThreadSafeStaticStat<_public:_struct_UE::Math::TTransform<double>___cdecl_FParticleTransformTrack::Evaluate(float,UE::Math::TTransform<double>_const_*,EChaosCacheInterpolationMode)const_::_2_::FStat_QSTAT_EvalParticleTransformTrack>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_QSTAT_EvalParticleTransformTrack,
                          *pFVar26,L"QSTAT_EvalParticleTransformTrack","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar33 = *(FName *)FVar27;
  bVar22 = false;
  bVar24 = false;
  local_6c0.ComparisonIndex.Value = 0;
  local_6c0.Number = 0;
  if ((FVar33.ComparisonIndex.Value.Value != 0) || (FVar33.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_6e0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_6e0[0]._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar22 = false;
      bVar24 = true;
      if (-1 < CpuChannel->Enabled) {
        local_6c8.ComparisonIndex.Value = FVar33.ComparisonIndex.Value.Value;
        local_6c8.Number = FVar33.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_6c8,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\ChaosCache.cpp"
                   ,0x362);
        bVar22 = true;
        bVar24 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar33,CycleScopeStart);
      bVar23 = true;
      goto LAB_14daf0f03;
    }
  }
  bVar23 = false;
  FVar33 = local_6c0;
LAB_14daf0f03:
  iVar3 = (this->KeyTimestamps).ArrayNum;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if (0 < iVar3) {
    iVar3 = (this->KeyTimestamps).ArrayNum;
    uVar32 = iVar3 - 1;
    uVar36 = uVar35;
    if ((int)uVar32 < iVar3) {
      uVar36 = ~uVar32 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar5 = (code *)swi(3);
      pTVar28 = (TTransform<double> *)(*pcVar5)();
      return pTVar28;
    }
    iVar3 = (this->KeyTimestamps).ArrayNum;
    fVar2 = *(float *)((this->KeyTimestamps).AllocatorInstance.Data + (longlong)iVar3 * 4 + -4);
    if ((iVar3 < 1) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar5 = (code *)swi(3);
      pTVar28 = (TTransform<double> *)(*pcVar5)();
      return pTVar28;
    }
    pFVar4 = (this->KeyTimestamps).AllocatorInstance.Data;
    if (fVar2 <= param_1) {
      param_1 = fVar2;
    }
    uVar36 = (this->KeyTimestamps).ArrayNum;
    fVar2 = *(float *)pFVar4;
    if (param_1 <= fVar2) {
      param_1 = fVar2;
    }
    uVar37 = 0;
    uVar32 = uVar37;
    if (uVar36 != 0) {
      uVar39 = uVar36 - 1;
      uVar40 = uVar35;
      uVar42 = uVar35;
      if (0 < (int)uVar36) {
        do {
          iVar3 = (uVar36 >> 1) + uVar40;
          uVar42 = iVar3 + (uVar36 & 1);
          if (param_1 < *(float *)(pFVar4 + (longlong)iVar3 * 4)) {
            uVar42 = uVar40;
          }
          uVar43 = uVar36 >> 1;
          uVar36 = uVar36 >> 1;
          uVar40 = uVar42;
        } while (uVar43 != 0);
      }
      if ((int)uVar42 < (int)uVar39) {
        uVar39 = uVar42;
      }
      if (0 < (int)uVar39) {
        uVar32 = uVar39;
      }
    }
    uVar36 = uVar32 - 1;
    if ((int)(uVar32 - 1) < 0) {
      uVar36 = 0;
    }
    EvaluateAt(this,&local_1b8,uVar36);
    EvaluateAt(this,&local_158,uVar32);
    if ((TTransform<double> *)local_6d8._0_8_ == (TTransform<double> *)0x0) {
      pTVar28 = (TTransform<double> *)0x0;
      local_6a8.Rotation.XY.m128d_f64[0]._0_4_ = local_1b8.Rotation.XY.m128d_f64[0]._0_4_;
      local_6a8.Rotation.XY.m128d_f64[0]._4_4_ = local_1b8.Rotation.XY.m128d_f64[0]._4_4_;
      local_6a8.Rotation.XY.m128d_f64[1]._0_4_ = local_1b8.Rotation.XY.m128d_f64[1]._0_4_;
      local_6a8.Rotation.XY.m128d_f64[1]._4_4_ = local_1b8.Rotation.XY.m128d_f64[1]._4_4_;
      local_6a8.Translation.XY.m128d_f64[0]._0_4_ = local_1b8.Translation.XY.m128d_f64[0]._0_4_;
      local_6a8.Translation.XY.m128d_f64[0]._4_4_ = local_1b8.Translation.XY.m128d_f64[0]._4_4_;
      local_6a8.Translation.XY.m128d_f64[1]._0_4_ = local_1b8.Translation.XY.m128d_f64[1]._0_4_;
      local_6a8.Translation.XY.m128d_f64[1]._4_4_ = local_1b8.Translation.XY.m128d_f64[1]._4_4_;
      local_6a8.Translation.ZW.m128d_f64[0]._0_4_ = local_1b8.Translation.ZW.m128d_f64[0]._0_4_;
      local_6a8.Translation.ZW.m128d_f64[0]._4_4_ = local_1b8.Translation.ZW.m128d_f64[0]._4_4_;
      local_6a8.Translation.ZW.m128d_f64[1]._0_4_ = local_1b8.Translation.ZW.m128d_f64[1]._0_4_;
      local_6a8.Translation.ZW.m128d_f64[1]._4_4_ = local_1b8.Translation.ZW.m128d_f64[1]._4_4_;
      local_6a8.Scale3D.XY.m128d_f64[0]._0_4_ = local_1b8.Scale3D.XY.m128d_f64[0]._0_4_;
      local_6a8.Scale3D.XY.m128d_f64[0]._4_4_ = local_1b8.Scale3D.XY.m128d_f64[0]._4_4_;
      local_6a8.Scale3D.XY.m128d_f64[1]._0_4_ = local_1b8.Scale3D.XY.m128d_f64[1]._0_4_;
      local_6a8.Scale3D.XY.m128d_f64[1]._4_4_ = local_1b8.Scale3D.XY.m128d_f64[1]._4_4_;
      local_6a8.Scale3D.ZW.m128d_f64[0]._0_4_ = local_1b8.Scale3D.ZW.m128d_f64[0]._0_4_;
      local_6a8.Scale3D.ZW.m128d_f64[0]._4_4_ = local_1b8.Scale3D.ZW.m128d_f64[0]._4_4_;
      local_6a8.Scale3D.ZW.m128d_f64[1]._0_4_ = local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_;
      local_6a8.Scale3D.ZW.m128d_f64[1]._4_4_ = local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_;
      local_6a8.Rotation.ZW.m128d_f64[0] = local_1b8.Rotation.ZW.m128d_f64[0];
      local_6a8.Rotation.ZW.m128d_f64[1] = local_1b8.Rotation.ZW.m128d_f64[1];
    }
    else {
      local_278.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_278.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_278.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_278.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_278.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_278.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_278.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_278.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_278.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_278.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_278.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_278.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_278.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_278.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_278.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_278.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_278,(TTransform<double> *)local_6d8._0_8_,&local_1b8);
      pTVar28 = (TTransform<double> *)local_6d8._0_8_;
      local_6a8.Rotation.XY.m128d_f64[0]._0_4_ = local_278.Rotation.XY.m128d_f64[0]._0_4_;
      local_6a8.Rotation.XY.m128d_f64[0]._4_4_ = local_278.Rotation.XY.m128d_f64[0]._4_4_;
      local_6a8.Rotation.XY.m128d_f64[1]._0_4_ = local_278.Rotation.XY.m128d_f64[1]._0_4_;
      local_6a8.Rotation.XY.m128d_f64[1]._4_4_ = local_278.Rotation.XY.m128d_f64[1]._4_4_;
      local_6a8.Translation.XY.m128d_f64[0]._0_4_ = local_278.Translation.XY.m128d_f64[0]._0_4_;
      local_6a8.Translation.XY.m128d_f64[0]._4_4_ = local_278.Translation.XY.m128d_f64[0]._4_4_;
      local_6a8.Translation.XY.m128d_f64[1]._0_4_ = local_278.Translation.XY.m128d_f64[1]._0_4_;
      local_6a8.Translation.XY.m128d_f64[1]._4_4_ = local_278.Translation.XY.m128d_f64[1]._4_4_;
      local_6a8.Translation.ZW.m128d_f64[0]._0_4_ = local_278.Translation.ZW.m128d_f64[0]._0_4_;
      local_6a8.Translation.ZW.m128d_f64[0]._4_4_ = local_278.Translation.ZW.m128d_f64[0]._4_4_;
      local_6a8.Translation.ZW.m128d_f64[1]._0_4_ = local_278.Translation.ZW.m128d_f64[1]._0_4_;
      local_6a8.Translation.ZW.m128d_f64[1]._4_4_ = local_278.Translation.ZW.m128d_f64[1]._4_4_;
      local_6a8.Scale3D.XY.m128d_f64[0]._0_4_ = local_278.Scale3D.XY.m128d_f64[0]._0_4_;
      local_6a8.Scale3D.XY.m128d_f64[0]._4_4_ = local_278.Scale3D.XY.m128d_f64[0]._4_4_;
      local_6a8.Scale3D.XY.m128d_f64[1]._0_4_ = local_278.Scale3D.XY.m128d_f64[1]._0_4_;
      local_6a8.Scale3D.XY.m128d_f64[1]._4_4_ = local_278.Scale3D.XY.m128d_f64[1]._4_4_;
      local_6a8.Scale3D.ZW.m128d_f64[0]._0_4_ = local_278.Scale3D.ZW.m128d_f64[0]._0_4_;
      local_6a8.Scale3D.ZW.m128d_f64[0]._4_4_ = local_278.Scale3D.ZW.m128d_f64[0]._4_4_;
      local_6a8.Scale3D.ZW.m128d_f64[1]._0_4_ = local_278.Scale3D.ZW.m128d_f64[1]._0_4_;
      local_6a8.Scale3D.ZW.m128d_f64[1]._4_4_ = local_278.Scale3D.ZW.m128d_f64[1]._4_4_;
      local_6a8.Rotation.ZW.m128d_f64[0] = local_278.Rotation.ZW.m128d_f64[0];
      local_6a8.Rotation.ZW.m128d_f64[1] = local_278.Rotation.ZW.m128d_f64[1];
    }
    local_628.Rotation.XY.m128d_f64[0]._0_4_ = local_158.Rotation.XY.m128d_f64[0]._0_4_;
    local_628.Rotation.XY.m128d_f64[0]._4_4_ = local_158.Rotation.XY.m128d_f64[0]._4_4_;
    local_628.Rotation.XY.m128d_f64[1]._0_4_ = local_158.Rotation.XY.m128d_f64[1]._0_4_;
    local_628.Rotation.XY.m128d_f64[1]._4_4_ = local_158.Rotation.XY.m128d_f64[1]._4_4_;
    local_628.Translation.XY.m128d_f64[0]._0_4_ = local_158.Translation.XY.m128d_f64[0]._0_4_;
    local_628.Translation.XY.m128d_f64[0]._4_4_ = local_158.Translation.XY.m128d_f64[0]._4_4_;
    local_628.Translation.XY.m128d_f64[1]._0_4_ = local_158.Translation.XY.m128d_f64[1]._0_4_;
    local_628.Translation.XY.m128d_f64[1]._4_4_ = local_158.Translation.XY.m128d_f64[1]._4_4_;
    local_628.Translation.ZW.m128d_f64[0]._0_4_ = local_158.Translation.ZW.m128d_f64[0]._0_4_;
    local_628.Translation.ZW.m128d_f64[0]._4_4_ = local_158.Translation.ZW.m128d_f64[0]._4_4_;
    local_628.Translation.ZW.m128d_f64[1]._0_4_ = local_158.Translation.ZW.m128d_f64[1]._0_4_;
    local_628.Translation.ZW.m128d_f64[1]._4_4_ = local_158.Translation.ZW.m128d_f64[1]._4_4_;
    local_628.Scale3D.XY.m128d_f64[0]._0_4_ = local_158.Scale3D.XY.m128d_f64[0]._0_4_;
    local_628.Scale3D.XY.m128d_f64[0]._4_4_ = local_158.Scale3D.XY.m128d_f64[0]._4_4_;
    local_628.Scale3D.XY.m128d_f64[1]._0_4_ = local_158.Scale3D.XY.m128d_f64[1]._0_4_;
    local_628.Scale3D.XY.m128d_f64[1]._4_4_ = local_158.Scale3D.XY.m128d_f64[1]._4_4_;
    local_628.Scale3D.ZW.m128d_f64[0]._0_4_ = local_158.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_628.Scale3D.ZW.m128d_f64[0]._4_4_ = local_158.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_628.Scale3D.ZW.m128d_f64[1]._0_4_ = local_158.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_628.Scale3D.ZW.m128d_f64[1]._4_4_ = local_158.Scale3D.ZW.m128d_f64[1]._4_4_;
    local_628.Rotation.ZW.m128d_f64[0] = local_158.Rotation.ZW.m128d_f64[0];
    local_628.Rotation.ZW.m128d_f64[1] = local_158.Rotation.ZW.m128d_f64[1];
    if (pTVar28 != (TTransform<double> *)0x0) {
      local_218.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_218.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_218.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_218.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_218.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_218.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_218.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_218.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_218.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_218.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_218.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_218.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_218.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_218.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_218.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_218.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_218,pTVar28,&local_158);
      local_628.Rotation.XY.m128d_f64[0]._0_4_ = local_218.Rotation.XY.m128d_f64[0]._0_4_;
      local_628.Rotation.XY.m128d_f64[0]._4_4_ = local_218.Rotation.XY.m128d_f64[0]._4_4_;
      local_628.Rotation.XY.m128d_f64[1]._0_4_ = local_218.Rotation.XY.m128d_f64[1]._0_4_;
      local_628.Rotation.XY.m128d_f64[1]._4_4_ = local_218.Rotation.XY.m128d_f64[1]._4_4_;
      local_628.Translation.XY.m128d_f64[0]._0_4_ = local_218.Translation.XY.m128d_f64[0]._0_4_;
      local_628.Translation.XY.m128d_f64[0]._4_4_ = local_218.Translation.XY.m128d_f64[0]._4_4_;
      local_628.Translation.XY.m128d_f64[1]._0_4_ = local_218.Translation.XY.m128d_f64[1]._0_4_;
      local_628.Translation.XY.m128d_f64[1]._4_4_ = local_218.Translation.XY.m128d_f64[1]._4_4_;
      local_628.Translation.ZW.m128d_f64[0]._0_4_ = local_218.Translation.ZW.m128d_f64[0]._0_4_;
      local_628.Translation.ZW.m128d_f64[0]._4_4_ = local_218.Translation.ZW.m128d_f64[0]._4_4_;
      local_628.Translation.ZW.m128d_f64[1]._0_4_ = local_218.Translation.ZW.m128d_f64[1]._0_4_;
      local_628.Translation.ZW.m128d_f64[1]._4_4_ = local_218.Translation.ZW.m128d_f64[1]._4_4_;
      local_628.Scale3D.XY.m128d_f64[0]._0_4_ = local_218.Scale3D.XY.m128d_f64[0]._0_4_;
      local_628.Scale3D.XY.m128d_f64[0]._4_4_ = local_218.Scale3D.XY.m128d_f64[0]._4_4_;
      local_628.Scale3D.XY.m128d_f64[1]._0_4_ = local_218.Scale3D.XY.m128d_f64[1]._0_4_;
      local_628.Scale3D.XY.m128d_f64[1]._4_4_ = local_218.Scale3D.XY.m128d_f64[1]._4_4_;
      local_628.Scale3D.ZW.m128d_f64[0]._0_4_ = local_218.Scale3D.ZW.m128d_f64[0]._0_4_;
      local_628.Scale3D.ZW.m128d_f64[0]._4_4_ = local_218.Scale3D.ZW.m128d_f64[0]._4_4_;
      local_628.Scale3D.ZW.m128d_f64[1]._0_4_ = local_218.Scale3D.ZW.m128d_f64[1]._0_4_;
      local_628.Scale3D.ZW.m128d_f64[1]._4_4_ = local_218.Scale3D.ZW.m128d_f64[1]._4_4_;
      local_628.Rotation.ZW.m128d_f64[0] = local_218.Rotation.ZW.m128d_f64[0];
      local_628.Rotation.ZW.m128d_f64[1] = local_218.Rotation.ZW.m128d_f64[1];
    }
    uVar39 = uVar35;
    if ((int)uVar36 < (this->KeyTimestamps).ArrayNum) {
      uVar39 = ~uVar36 >> 0x1f;
    }
    if ((uVar39 == 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar5 = (code *)swi(3);
      pTVar28 = (TTransform<double> *)(*pcVar5)();
      return pTVar28;
    }
    local_6d8._0_8_ = (this->KeyTimestamps).AllocatorInstance.Data;
    if ((int)uVar32 < (this->KeyTimestamps).ArrayNum) {
      uVar35 = ~uVar32 >> 0x1f;
    }
    if ((uVar35 == 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar5 = (code *)swi(3);
      pTVar28 = (TTransform<double> *)(*pcVar5)();
      return pTVar28;
    }
    fVar2 = __real_3f800000;
    fVar38 = *(float *)((this->KeyTimestamps).AllocatorInstance.Data + (longlong)(int)uVar32 * 4) -
             *(float *)(local_6d8._0_8_ + (longlong)(int)uVar36 * 4);
    if (fVar38 <= 0.0) {
      fVar38 = 0.0;
    }
    else {
      if ((int)uVar36 < (this->KeyTimestamps).ArrayNum) {
        uVar37 = ~uVar36 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar5 = (code *)swi(3);
        pTVar28 = (TTransform<double> *)(*pcVar5)();
        return pTVar28;
      }
      fVar38 = (param_1 -
               *(float *)((this->KeyTimestamps).AllocatorInstance.Data + (longlong)(int)uVar36 * 4))
               / fVar38;
      if (((fVar38 < 0.0) || (fVar2 < fVar38)) &&
         (bVar25 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<8121540624227763061>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\ChaosCache.cpp"
                              ,0x375,"Alpha >= 0.f && Alpha <= 1.f"), bVar25)) {
        pcVar5 = (code *)swi(3);
        pTVar28 = (TTransform<double> *)(*pcVar5)();
        return pTVar28;
      }
    }
    dVar9 = __real_3fe0000000000000;
    if (bChaosCacheUseInterpolation == false) {
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
           (double)CONCAT44(local_6a8.Rotation.XY.m128d_f64[0]._4_4_,
                            local_6a8.Rotation.XY.m128d_f64[0]._0_4_);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] =
           (double)CONCAT44(local_6a8.Rotation.XY.m128d_f64[1]._4_4_,
                            local_6a8.Rotation.XY.m128d_f64[1]._0_4_);
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_6a8.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_6a8.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
           (double)CONCAT44(local_6a8.Translation.XY.m128d_f64[0]._4_4_,
                            local_6a8.Translation.XY.m128d_f64[0]._0_4_);
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] =
           (double)CONCAT44(local_6a8.Translation.XY.m128d_f64[1]._4_4_,
                            local_6a8.Translation.XY.m128d_f64[1]._0_4_);
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
           (double)CONCAT44(local_6a8.Translation.ZW.m128d_f64[0]._4_4_,
                            local_6a8.Translation.ZW.m128d_f64[0]._0_4_);
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] =
           (double)CONCAT44(local_6a8.Translation.ZW.m128d_f64[1]._4_4_,
                            local_6a8.Translation.ZW.m128d_f64[1]._0_4_);
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
           (double)CONCAT44(local_6a8.Scale3D.XY.m128d_f64[0]._4_4_,
                            local_6a8.Scale3D.XY.m128d_f64[0]._0_4_);
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] =
           (double)CONCAT44(local_6a8.Scale3D.XY.m128d_f64[1]._4_4_,
                            local_6a8.Scale3D.XY.m128d_f64[1]._0_4_);
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] =
           (double)CONCAT44(local_6a8.Scale3D.ZW.m128d_f64[0]._4_4_,
                            local_6a8.Scale3D.ZW.m128d_f64[0]._0_4_);
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] =
           (double)CONCAT44(local_6a8.Scale3D.ZW.m128d_f64[1]._4_4_,
                            local_6a8.Scale3D.ZW.m128d_f64[1]._0_4_);
    }
    else if (param_3 == QuatInterp) {
      UE::Math::TTransform<double>::Blend(__return_storage_ptr__,&local_6a8,&local_628,fVar38);
    }
    else if (param_3 == EulerInterp) {
      dVar10 = (double)fVar38;
      dVar9 = ((double)CONCAT44(local_628.Translation.XY.m128d_f64[1]._4_4_,
                                local_628.Translation.XY.m128d_f64[1]._0_4_) -
              (double)CONCAT44(local_6a8.Translation.XY.m128d_f64[1]._4_4_,
                               local_6a8.Translation.XY.m128d_f64[1]._0_4_)) * dVar10 +
              (double)CONCAT44(local_6a8.Translation.XY.m128d_f64[1]._4_4_,
                               local_6a8.Translation.XY.m128d_f64[1]._0_4_);
      auVar6._8_4_ = SUB84(dVar9,0);
      auVar6._0_8_ = ((double)CONCAT44(local_628.Translation.XY.m128d_f64[0]._4_4_,
                                       local_628.Translation.XY.m128d_f64[0]._0_4_) -
                     (double)CONCAT44(local_6a8.Translation.XY.m128d_f64[0]._4_4_,
                                      local_6a8.Translation.XY.m128d_f64[0]._0_4_)) * dVar10 +
                     (double)CONCAT44(local_6a8.Translation.XY.m128d_f64[0]._4_4_,
                                      local_6a8.Translation.XY.m128d_f64[0]._0_4_);
      auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar6;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
           ((double)CONCAT44(local_628.Translation.ZW.m128d_f64[0]._4_4_,
                             local_628.Translation.ZW.m128d_f64[0]._0_4_) -
           (double)CONCAT44(local_6a8.Translation.ZW.m128d_f64[0]._4_4_,
                            local_6a8.Translation.ZW.m128d_f64[0]._0_4_)) * dVar10 +
           (double)CONCAT44(local_6a8.Translation.ZW.m128d_f64[0]._4_4_,
                            local_6a8.Translation.ZW.m128d_f64[0]._0_4_);
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
      dVar9 = ((double)CONCAT44(local_628.Scale3D.XY.m128d_f64[1]._4_4_,
                                local_628.Scale3D.XY.m128d_f64[1]._0_4_) -
              (double)CONCAT44(local_6a8.Scale3D.XY.m128d_f64[1]._4_4_,
                               local_6a8.Scale3D.XY.m128d_f64[1]._0_4_)) * dVar10 +
              (double)CONCAT44(local_6a8.Scale3D.XY.m128d_f64[1]._4_4_,
                               local_6a8.Scale3D.XY.m128d_f64[1]._0_4_);
      auVar7._8_4_ = SUB84(dVar9,0);
      auVar7._0_8_ = ((double)CONCAT44(local_628.Scale3D.XY.m128d_f64[0]._4_4_,
                                       local_628.Scale3D.XY.m128d_f64[0]._0_4_) -
                     (double)CONCAT44(local_6a8.Scale3D.XY.m128d_f64[0]._4_4_,
                                      local_6a8.Scale3D.XY.m128d_f64[0]._0_4_)) * dVar10 +
                     (double)CONCAT44(local_6a8.Scale3D.XY.m128d_f64[0]._4_4_,
                                      local_6a8.Scale3D.XY.m128d_f64[0]._0_4_);
      auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar7;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] =
           ((double)CONCAT44(local_628.Scale3D.ZW.m128d_f64[0]._4_4_,
                             local_628.Scale3D.ZW.m128d_f64[0]._0_4_) -
           (double)CONCAT44(local_6a8.Scale3D.ZW.m128d_f64[0]._4_4_,
                            local_6a8.Scale3D.ZW.m128d_f64[0]._0_4_)) * dVar10 +
           (double)CONCAT44(local_6a8.Scale3D.ZW.m128d_f64[0]._4_4_,
                            local_6a8.Scale3D.ZW.m128d_f64[0]._0_4_);
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
      local_4e8.X = (double)CONCAT44(local_6a8.Rotation.XY.m128d_f64[0]._4_4_,
                                     local_6a8.Rotation.XY.m128d_f64[0]._0_4_);
      local_4e8.Y = (double)CONCAT44(local_6a8.Rotation.XY.m128d_f64[1]._4_4_,
                                     local_6a8.Rotation.XY.m128d_f64[1]._0_4_);
      local_4e8.Z = local_6a8.Rotation.ZW.m128d_f64[0];
      local_4e8.W = local_6a8.Rotation.ZW.m128d_f64[1];
      UE::Math::TQuat<double>::Rotator(&local_4e8,&local_5b0);
      local_4c8.X = (double)CONCAT44(local_628.Rotation.XY.m128d_f64[0]._4_4_,
                                     local_628.Rotation.XY.m128d_f64[0]._0_4_);
      local_4c8.Y = (double)CONCAT44(local_628.Rotation.XY.m128d_f64[1]._4_4_,
                                     local_628.Rotation.XY.m128d_f64[1]._0_4_);
      local_4c8.Z = local_628.Rotation.ZW.m128d_f64[0];
      local_4c8.W = local_628.Rotation.ZW.m128d_f64[1];
      UE::Math::TQuat<double>::Rotator(&local_4c8,&local_5c8);
      local_598.Pitch = (local_5c8.Pitch - local_5b0.Pitch) * dVar10 + local_5b0.Pitch;
      local_598.Yaw = (local_5c8.Yaw - local_5b0.Yaw) * dVar10 + local_5b0.Yaw;
      local_598.Roll = (local_5c8.Roll - local_5b0.Roll) * dVar10 + local_5b0.Roll;
      pTVar29 = UE::Math::TRotator<double>::Quaternion(&local_598,&local_318);
      local_418 = pTVar29->Z;
      dStack_410 = pTVar29->W;
      dVar9 = pTVar29->Y;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = pTVar29->X;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar9;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_418;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dStack_410;
    }
    else {
      dVar10 = (double)CONCAT44(local_628.Rotation.XY.m128d_f64[0]._4_4_,
                                local_628.Rotation.XY.m128d_f64[0]._0_4_);
      dVar11 = (double)CONCAT44(local_628.Rotation.XY.m128d_f64[1]._4_4_,
                                local_628.Rotation.XY.m128d_f64[1]._0_4_);
      dVar12 = (double)CONCAT44(local_628.Translation.XY.m128d_f64[0]._4_4_,
                                local_628.Translation.XY.m128d_f64[0]._0_4_);
      dVar13 = (double)CONCAT44(local_628.Translation.XY.m128d_f64[1]._4_4_,
                                local_628.Translation.XY.m128d_f64[1]._0_4_);
      dVar14 = (double)CONCAT44(local_628.Translation.ZW.m128d_f64[0]._4_4_,
                                local_628.Translation.ZW.m128d_f64[0]._0_4_);
      dVar17 = local_628.Rotation.ZW.m128d_f64[0];
      dVar18 = local_628.Rotation.ZW.m128d_f64[1];
      if (dVar11 * (double)CONCAT44(local_6a8.Rotation.XY.m128d_f64[1]._4_4_,
                                    local_6a8.Rotation.XY.m128d_f64[1]._0_4_) +
          dVar10 * (double)CONCAT44(local_6a8.Rotation.XY.m128d_f64[0]._4_4_,
                                    local_6a8.Rotation.XY.m128d_f64[0]._0_4_) +
          local_628.Rotation.ZW.m128d_f64[0] * local_6a8.Rotation.ZW.m128d_f64[0] +
          local_628.Rotation.ZW.m128d_f64[1] * local_6a8.Rotation.ZW.m128d_f64[1] < 0.0) {
        dVar10 = dVar10 * ___xmm_bff0000000000000bff0000000000000;
        dVar11 = dVar11 * _UNK_15076c718;
        dVar17 = local_628.Rotation.ZW.m128d_f64[0] * ___xmm_bff0000000000000bff0000000000000;
        dVar18 = local_628.Rotation.ZW.m128d_f64[1] * _UNK_15076c718;
      }
      local_568.R.X = 0.0;
      local_568.R.Y = 0.0;
      local_568.D.X =
           (double)CONCAT44(local_6a8.Translation.XY.m128d_f64[0]._4_4_,
                            local_6a8.Translation.XY.m128d_f64[0]._0_4_) * __real_3fe0000000000000;
      local_568.R.Z = ___xmm_3ff00000000000000000000000000000;
      local_568.R.W = _UNK_15061cbc8;
      local_4a8.R.X =
           (double)CONCAT44(local_6a8.Rotation.XY.m128d_f64[0]._4_4_,
                            local_6a8.Rotation.XY.m128d_f64[0]._0_4_);
      local_4a8.R.Y =
           (double)CONCAT44(local_6a8.Rotation.XY.m128d_f64[1]._4_4_,
                            local_6a8.Rotation.XY.m128d_f64[1]._0_4_);
      local_568.D.Y =
           (double)CONCAT44(local_6a8.Translation.XY.m128d_f64[1]._4_4_,
                            local_6a8.Translation.XY.m128d_f64[1]._0_4_) * __real_3fe0000000000000;
      local_568.D.Z =
           (double)CONCAT44(local_6a8.Translation.ZW.m128d_f64[0]._4_4_,
                            local_6a8.Translation.ZW.m128d_f64[0]._0_4_) * __real_3fe0000000000000;
      local_4a8.R.Z = local_6a8.Rotation.ZW.m128d_f64[0];
      local_4a8.R.W = local_6a8.Rotation.ZW.m128d_f64[1];
      local_4a8.D.X = 0.0;
      local_4a8.D.Y = 0.0;
      local_568.D.W = 0.0;
      local_4a8.D.Z = 0.0;
      local_4a8.D.W = 0.0;
      pTVar30 = UE::Math::TDualQuat<double>::operator*(&local_568,&local_2b8,&local_4a8);
      local_528.D.Z = dVar14 * dVar9;
      local_528.R.X = 0.0;
      local_528.R.Y = 0.0;
      local_528.R.Z = ___xmm_3ff00000000000000000000000000000;
      local_528.R.W = _UNK_15061cbc8;
      local_528.D.X = dVar12 * dVar9;
      dVar12 = (double)(fVar2 - fVar38);
      local_528.D.Y = dVar13 * dVar9;
      local_448 = 0.0;
      dStack_440 = 0.0;
      local_528.D.W = 0.0;
      local_468._8_4_ = SUB84(dVar11,0);
      local_468._0_8_ = dVar10;
      local_468._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      local_458._8_4_ = SUB84(dVar18,0);
      local_458._0_8_ = dVar17;
      local_458._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      local_438 = 0.0;
      dStack_430 = 0.0;
      pTVar31 = UE::Math::TDualQuat<double>::operator*
                          (&local_528,&local_2f8,(TDualQuat<double> *)local_468);
      dVar21 = (double)fVar38;
      dVar18 = dVar12 * (pTVar30->R).X + (pTVar31->R).X * dVar21;
      dVar10 = dVar12 * (pTVar30->R).Y + (pTVar31->R).Y * dVar21;
      dVar11 = dVar12 * (pTVar30->R).Z + (pTVar31->R).Z * dVar21;
      dVar17 = dVar12 * (pTVar30->R).W + (pTVar31->R).W * dVar21;
      dVar9 = __real_3ff0000000000000 /
              SQRT(dVar10 * dVar10 + dVar18 * dVar18 + dVar11 * dVar11 + dVar17 * dVar17);
      uVar35 = (uint)__xmm_80000000000000008000000000000000;
      uVar36 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      dVar13 = (dVar12 * (pTVar30->D).Z + (pTVar31->D).Z * dVar21) * dVar9;
      dVar14 = (dVar12 * (pTVar30->D).W + (pTVar31->D).W * dVar21) * dVar9;
      dVar11 = dVar9 * dVar11;
      dVar17 = dVar9 * dVar17;
      uVar41 = (undefined4)((ulonglong)dVar17 >> 0x20);
      dVar18 = dVar9 * dVar18;
      uVar42 = SUB84(dVar9 * dVar10,0);
      uVar43 = (uint)((ulonglong)(dVar9 * dVar10) >> 0x20);
      uVar39 = SUB84(dVar18,0) ^ uVar35;
      uVar40 = (uint)((ulonglong)dVar18 >> 0x20) ^ uVar36;
      dVar16 = (dVar12 * (pTVar30->D).X + (pTVar31->D).X * dVar21) * dVar9;
      dVar9 = (dVar12 * (pTVar30->D).Y + (pTVar31->D).Y * dVar21) * dVar9;
      uVar32 = SUB84(dVar11,0) ^ uVar35;
      uVar37 = (uint)((ulonglong)dVar11 >> 0x20) ^ uVar36;
      local_6d8._8_4_ = SUB84(dVar13,0);
      local_6d8._0_8_ = dVar13;
      local_6d8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      uVar35 = uVar42 ^ uVar35;
      uVar36 = uVar43 ^ uVar36;
      dVar10 = (double)CONCAT44(uVar36,uVar35);
      auVar34._0_8_ = (double)CONCAT44(uVar37,uVar32);
      auVar34._8_4_ = SUB84(dVar17,0);
      auVar34._12_4_ = uVar41;
      dVar12 = dVar16 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               (double)CONCAT44(uVar40,uVar39) * dVar14 +
               auVar34._0_8_ * dVar9 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar13 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar15 = dVar16 * (double)CONCAT44(uVar37,uVar32) *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               (double)CONCAT44(uVar36,uVar35) * dVar14 +
               auVar34._8_8_ * dVar9 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               (double)local_6d8._8_8_ * (double)CONCAT44(uVar40,uVar39) *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar10 = dVar16 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               (double)CONCAT44(uVar37,uVar32) * dVar14 +
               (double)CONCAT44(uVar40,uVar39) * dVar9 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar13 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar9 = ((double)CONCAT44(local_628.Scale3D.XY.m128d_f64[1]._4_4_,
                                local_628.Scale3D.XY.m128d_f64[1]._0_4_) -
              (double)CONCAT44(local_6a8.Scale3D.XY.m128d_f64[1]._4_4_,
                               local_6a8.Scale3D.XY.m128d_f64[1]._0_4_)) * dVar21 +
              (double)CONCAT44(local_6a8.Scale3D.XY.m128d_f64[1]._4_4_,
                               local_6a8.Scale3D.XY.m128d_f64[1]._0_4_);
      auVar20._8_4_ = uVar42;
      auVar20._0_8_ = dVar18;
      auVar20._12_4_ = uVar43;
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar20;
      auVar19._8_4_ = SUB84(dVar17,0);
      auVar19._0_8_ = dVar11;
      auVar19._12_4_ = uVar41;
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar19;
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar12 + dVar12;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar15 + dVar15;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar10 + dVar10;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
      auVar8._8_4_ = SUB84(dVar9,0);
      auVar8._0_8_ = ((double)CONCAT44(local_628.Scale3D.XY.m128d_f64[0]._4_4_,
                                       local_628.Scale3D.XY.m128d_f64[0]._0_4_) -
                     (double)CONCAT44(local_6a8.Scale3D.XY.m128d_f64[0]._4_4_,
                                      local_6a8.Scale3D.XY.m128d_f64[0]._0_4_)) * dVar21 +
                     (double)CONCAT44(local_6a8.Scale3D.XY.m128d_f64[0]._4_4_,
                                      local_6a8.Scale3D.XY.m128d_f64[0]._0_4_);
      auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar8;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] =
           ((double)CONCAT44(local_628.Scale3D.ZW.m128d_f64[0]._4_4_,
                             local_628.Scale3D.ZW.m128d_f64[0]._0_4_) -
           (double)CONCAT44(local_6a8.Scale3D.ZW.m128d_f64[0]._4_4_,
                            local_6a8.Scale3D.ZW.m128d_f64[0]._0_4_)) * dVar21 +
           (double)CONCAT44(local_6a8.Scale3D.ZW.m128d_f64[0]._4_4_,
                            local_6a8.Scale3D.ZW.m128d_f64[0]._0_4_);
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
    }
  }
  if (bVar24) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar23) && (FVar33 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_640.NameAndInfo.Index = FVar33.ComparisonIndex.Value;
      local_640.NameAndInfo.Number = FVar33.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_648);
      local_640.StatData.Pad[4] = '\0';
      local_640.StatData.Pad[5] = '\0';
      local_640.StatData.Pad[6] = '\0';
      local_640.StatData.Pad[7] = '\0';
      local_640.StatData.Pad[0] = local_648.s.LowPart._0_1_;
      local_640.StatData.Pad[1] = local_648.s.LowPart._1_1_;
      local_640.StatData.Pad[2] = local_648.s.LowPart._2_1_;
      local_640.StatData.Pad[3] = local_648.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_640);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return __return_storage_ptr__;
}

// EvaluateAt @ 14daf3c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
FParticleTransformTrack::EvaluateAt
          (FParticleTransformTrack *this,TTransform<double> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  __m128d _Var9;
  __m128d _Var10;
  bool bVar11;
  uint uVar12;
  TTransform<double> *pTVar13;
  longlong lVar14;
  
  _Var9.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  lVar14 = (longlong)param_1;
  if ((this->KeyTimestamps).ArrayNum == 0) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    _Var10 = UE::Math::TTransform<double>::Identity.Translation.XY;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var9.m128d_f64;
    _Var9 = UE::Math::TTransform<double>::Identity.Translation.ZW;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var10.m128d_f64;
    _Var10 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var9.m128d_f64;
    _Var9 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var10.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var9.m128d_f64;
    return __return_storage_ptr__;
  }
  uVar12 = 0;
  if (param_1 < (this->RawTransformTrack).PosKeys.ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TTransform<double> *)(*pcVar7)();
      return pTVar13;
    }
  }
  pFVar6 = (this->RawTransformTrack).PosKeys.AllocatorInstance.Data;
  fVar1 = *(float *)(pFVar6 + lVar14 * 0xc);
  fVar2 = *(float *)(pFVar6 + lVar14 * 0xc + 4);
  fVar3 = *(float *)(pFVar6 + lVar14 * 0xc + 8);
  uVar12 = 0;
  if (param_1 < (this->RawTransformTrack).RotKeys.ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TTransform<double> *)(*pcVar7)();
      return pTVar13;
    }
  }
  pFVar6 = (this->RawTransformTrack).RotKeys.AllocatorInstance.Data;
  uVar5 = *(undefined8 *)(pFVar6 + lVar14 * 0x10 + 8);
  fVar4 = *(float *)(pFVar6 + lVar14 * 0x10 + 4);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (double)*(float *)(pFVar6 + lVar14 * 0x10);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar4;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)(float)uVar5;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (double)fVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar3;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  dVar8 = _UNK_150689688;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar8;
  dVar8 = _UNK_150689518;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar8;
  return __return_storage_ptr__;
}

// GetBeginTime @ 14daf7800

float __thiscall FParticleTransformTrack::GetBeginTime(FParticleTransformTrack *this)

{
  if (0 < (this->KeyTimestamps).ArrayNum) {
    return *(float *)(this->KeyTimestamps).AllocatorInstance.Data;
  }
  return 0.0;
}

// GetDuration @ 14daf7d90

float __thiscall FParticleTransformTrack::GetDuration(FParticleTransformTrack *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  
  if ((this->KeyTimestamps).ArrayNum < 2) {
    return 0.0;
  }
  iVar1 = (this->KeyTimestamps).ArrayNum;
  pFVar2 = (this->KeyTimestamps).AllocatorInstance.Data;
  uVar6 = iVar1 - 1;
  uVar5 = 0;
  if ((int)uVar6 < iVar1) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar7 = (float)(*pcVar3)();
      return fVar7;
    }
  }
  return *(float *)((this->KeyTimestamps).AllocatorInstance.Data +
                   (longlong)(this->KeyTimestamps).ArrayNum * 4 + -4) - *(float *)pFVar2;
}

// GetEndTime @ 14daf7e40

float __thiscall FParticleTransformTrack::GetEndTime(FParticleTransformTrack *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  
  iVar1 = (this->KeyTimestamps).ArrayNum;
  if (iVar1 < 1) {
    return 0.0;
  }
  uVar4 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar4 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  return *(float *)((this->KeyTimestamps).AllocatorInstance.Data +
                   (longlong)(this->KeyTimestamps).ArrayNum * 4 + -4);
}

// GetNumKeys @ 14daf82a0

int __thiscall FParticleTransformTrack::GetNumKeys(FParticleTransformTrack *this)

{
  return (this->KeyTimestamps).ArrayNum;
}

// GetUpperBoundEvaluationIndex @ 14daf8ad0

int __thiscall
FParticleTransformTrack::GetUpperBoundEvaluationIndex(FParticleTransformTrack *this,float param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = (this->KeyTimestamps).ArrayNum;
  if (uVar4 != 0) {
    iVar5 = uVar4 - 1;
    iVar6 = 0;
    if (0 < (int)uVar4) {
      do {
        iVar1 = (uVar4 >> 1) + iVar6;
        iVar3 = iVar1 + (uVar4 & 1);
        if (param_1 < *(float *)((this->KeyTimestamps).AllocatorInstance.Data + (longlong)iVar1 * 4)
           ) {
          iVar3 = iVar6;
        }
        iVar6 = iVar3;
        uVar2 = uVar4 >> 1;
        uVar4 = uVar4 >> 1;
      } while (uVar2 != 0);
    }
    if (iVar6 < iVar5) {
      iVar5 = iVar6;
    }
    iVar6 = 0;
    if (0 < iVar5) {
      iVar6 = iVar5;
    }
    return iVar6;
  }
  return 0;
}

// ResizeTrack @ 14db03a30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FParticleTransformTrack::ResizeTrack(FParticleTransformTrack *this,int param_1)

{
  if (param_1 < (this->KeyTimestamps).ArrayNum) {
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&this->KeyTimestamps,param_1,Default);
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)this,param_1,Default)
    ;
    TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&(this->RawTransformTrack).RotKeys,param_1,Default);
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&(this->RawTransformTrack).ScaleKeys,param_1,Default);
  }
  return;
}

