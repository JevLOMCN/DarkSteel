// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// GetSourceToTargetTransform @ 14a419a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
UNodeMappingContainer::GetSourceToTargetTransform
          (UNodeMappingContainer *this,TTransform<double> *__return_storage_ptr__,FName *param_1)

{
  ulonglong uVar1;
  FName *pFVar2;
  FNodeItem *pFVar3;
  FNodeItem *pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_b8 [32];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFVar2 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&this->SourceToTarget,*param_1);
  if (pFVar2 != (FName *)0x0) {
    pFVar3 = TMapBase<FName,FNodeItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeItem,0>_>
             ::Find((TMapBase<FName,FNodeItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeItem,0>_>
                     *)&this->TargetItems,*pFVar2);
    pFVar4 = TMapBase<FName,FNodeItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeItem,0>_>
             ::Find((TMapBase<FName,FNodeItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeItem,0>_>
                     *)&this->SourceItems,*param_1);
    if ((pFVar3 != (FNodeItem *)0x0) && (pFVar4 != (FNodeItem *)0x0)) {
      UE::Math::TTransform<double>::GetRelativeTransform
                (&pFVar3->Transform,&local_98,&pFVar4->Transform);
      auVar12._0_8_ =
           local_98.Rotation.XY.m128d_f64[0] * local_98.Rotation.XY.m128d_f64[0] +
           local_98.Rotation.ZW.m128d_f64[0] * local_98.Rotation.ZW.m128d_f64[0];
      auVar12._8_8_ =
           local_98.Rotation.XY.m128d_f64[1] * local_98.Rotation.XY.m128d_f64[1] +
           local_98.Rotation.ZW.m128d_f64[1] * local_98.Rotation.ZW.m128d_f64[1];
      auVar14._8_4_ = SUB84(auVar12._8_8_,0);
      auVar14._0_8_ = auVar12._0_8_;
      auVar14._12_4_ = (int)((ulonglong)auVar12._8_8_ >> 0x20);
      auVar9._0_8_ = auVar14._8_8_ + auVar12._0_8_;
      auVar9._8_8_ = auVar12._0_8_ + auVar12._8_8_;
      auVar13 = sqrtpd(auVar12,auVar9);
      uVar5 = -(ulonglong)
               (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar9._0_8_);
      uVar7 = -(ulonglong)
               (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar9._8_8_);
      uVar6 = -(ulonglong)
               (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar9._0_8_);
      uVar8 = -(ulonglong)
               (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar9._8_8_);
      auVar10 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar13);
      auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar13);
      auVar11._0_8_ = uVar6 & (ulonglong)(auVar10._0_8_ * local_98.Rotation.ZW.m128d_f64[0]);
      uVar1 = uVar8 & (ulonglong)(auVar10._8_8_ * local_98.Rotation.ZW.m128d_f64[1]);
      auVar11._8_4_ = (undefined4)uVar1;
      auVar11._12_4_ = (undefined4)(uVar1 >> 0x20);
      auVar13._4_4_ =
           ~(uint)(uVar6 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar13._0_4_ = ~(uint)uVar6 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar13._8_4_ = ~(uint)uVar8 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar13._12_4_ =
           ~(uint)(uVar8 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      auVar15._0_8_ = uVar5 & (ulonglong)(auVar14._0_8_ * local_98.Rotation.XY.m128d_f64[0]);
      uVar1 = uVar7 & (ulonglong)(auVar14._8_8_ * local_98.Rotation.XY.m128d_f64[1]);
      auVar15._8_4_ = (undefined4)uVar1;
      auVar15._12_4_ = (undefined4)(uVar1 >> 0x20);
      auVar10._4_4_ =
           ~(uint)(uVar5 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar10._0_4_ = ~(uint)uVar5 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar10._8_4_ = ~(uint)uVar7 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar10._12_4_ =
           ~(uint)(uVar7 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar15 | auVar10;
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar11 | auVar13;
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_98.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_98.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_98.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_98.Translation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_98.Scale3D.XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_98.Scale3D.XY.m128d_f64[1];
      goto LAB_14a419ba3;
    }
  }
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
  local_98.Scale3D.ZW = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
LAB_14a419ba3:
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = local_98.Scale3D.ZW.m128d_f64;
  return __return_storage_ptr__;
}

