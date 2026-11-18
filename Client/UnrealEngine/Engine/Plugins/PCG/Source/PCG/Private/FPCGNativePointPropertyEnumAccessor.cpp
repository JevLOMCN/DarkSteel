// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// FPCGNativePointPropertyEnumAccessor<1> @ 1497dda40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FPCGNativePointPropertyEnumAccessor<1> * __thiscall
FPCGNativePointPropertyEnumAccessor<1>::FPCGNativePointPropertyEnumAccessor<1>
          (FPCGNativePointPropertyEnumAccessor<1> *this,UPCGBasePointData *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_b8 [32];
  TTransform<double> *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong lStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__FPCGNativePointPropertyEnumAccessor__00__6B_;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 8;
  (this->ValueRange).ElementView.FirstElementPtr = (TTransform<double> *)0x0;
  (this->ValueRange).ElementView.BytesBetweenElements = 0;
  (this->ValueRange).ElementView.NumElements = 0;
  (this->ValueRange).NumElements = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ValueRange).StubValue.Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ValueRange).StubValue.Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ValueRange).StubValue.Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ValueRange).StubValue.Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ValueRange).StubValue.Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ValueRange).StubValue.Scale3D.ZW.m128d_f64 = auVar8;
  (**(code **)(param_1->_padding_ + 0x4c0))(param_1,&local_98,1);
  (this->ValueRange).ElementView.FirstElementPtr = local_98;
  (this->ValueRange).ElementView.BytesBetweenElements = (undefined4)uStack_90;
  (this->ValueRange).ElementView.NumElements = uStack_90._4_4_;
  *(undefined8 *)&(this->ValueRange).NumElements = local_88;
  (this->ValueRange)._padding_ = lStack_80;
  (this->ValueRange).StubValue.Rotation.XY.m128d_f64[0] = local_78;
  (this->ValueRange).StubValue.Rotation.XY.m128d_f64[1] = dStack_70;
  (this->ValueRange).StubValue.Rotation.ZW.m128d_f64[0] = local_68;
  (this->ValueRange).StubValue.Rotation.ZW.m128d_f64[1] = dStack_60;
  (this->ValueRange).StubValue.Translation.XY.m128d_f64[0] = local_58;
  (this->ValueRange).StubValue.Translation.XY.m128d_f64[1] = dStack_50;
  (this->ValueRange).StubValue.Translation.ZW.m128d_f64[0] = local_48;
  (this->ValueRange).StubValue.Translation.ZW.m128d_f64[1] = dStack_40;
  (this->ValueRange).StubValue.Scale3D.XY.m128d_f64[0] = local_38;
  (this->ValueRange).StubValue.Scale3D.XY.m128d_f64[1] = dStack_30;
  (this->ValueRange).StubValue.Scale3D.ZW.m128d_f64[0] = local_28;
  (this->ValueRange).StubValue.Scale3D.ZW.m128d_f64[1] = dStack_20;
  return this;
}

// FPCGNativePointPropertyEnumAccessor<16> @ 1497ddb60

FPCGNativePointPropertyEnumAccessor<16> * __thiscall
FPCGNativePointPropertyEnumAccessor<16>::FPCGNativePointPropertyEnumAccessor<16>
          (FPCGNativePointPropertyEnumAccessor<16> *this,UPCGBasePointData *param_1)

{
  TVector4<double> *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong lStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__FPCGNativePointPropertyEnumAccessor__0BA___6B_;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 6;
  (this->ValueRange).ElementView.FirstElementPtr = (TVector4<double> *)0x0;
  (this->ValueRange).ElementView.BytesBetweenElements = 0;
  (this->ValueRange).ElementView.NumElements = 0;
  (this->ValueRange).NumElements = 0;
  (this->ValueRange).StubValue.field0_0x0._s_0.X = 0.0;
  (this->ValueRange).StubValue.field0_0x0._s_0.Y = 0.0;
  (this->ValueRange).StubValue.field0_0x0._s_0.Z = 0.0;
  (this->ValueRange).StubValue.field0_0x0._s_0.W = 1.0;
  (**(code **)(param_1->_padding_ + 0x4e0))(param_1,&local_48,1);
  (this->ValueRange).ElementView.FirstElementPtr = local_48;
  (this->ValueRange).ElementView.BytesBetweenElements = (undefined4)uStack_40;
  (this->ValueRange).ElementView.NumElements = uStack_40._4_4_;
  *(undefined8 *)&(this->ValueRange).NumElements = local_38;
  (this->ValueRange)._padding_ = lStack_30;
  (this->ValueRange).StubValue.field0_0x0._s_0.X = local_28;
  (this->ValueRange).StubValue.field0_0x0._s_0.Y = dStack_20;
  (this->ValueRange).StubValue.field0_0x0._s_0.Z = local_18;
  (this->ValueRange).StubValue.field0_0x0._s_0.W = dStack_10;
  return this;
}

// SetRangeImpl @ 149835c40

bool __thiscall
FPCGNativePointPropertyEnumAccessor<1>::SetRangeImpl
          (FPCGNativePointPropertyEnumAccessor<1> *this,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  TTransform<double> *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  char local_res20 [8];
  void *local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  
  if (param_3->bIsReadOnly != false) {
    return false;
  }
  iVar1 = param_1->ArrayNum;
  uVar9 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_res20[0] = '\0';
  cVar3 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar1,&local_88,local_res20);
  if (cVar3 == '\0') {
    bVar4 = false;
  }
  else {
    if (local_res20[0] == '\0') {
      uVar10 = uVar9;
      if (0 < iVar1) {
        do {
          uVar8 = (uint)uVar9;
          pTVar7 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[](param_1,uVar8);
          local_28 = (pTVar7->Rotation).XY.m128d_f64[0];
          dStack_20 = (pTVar7->Rotation).XY.m128d_f64[1];
          local_38 = (pTVar7->Rotation).ZW.m128d_f64[0];
          dStack_30 = (pTVar7->Rotation).ZW.m128d_f64[1];
          local_48 = (pTVar7->Translation).XY.m128d_f64[0];
          dStack_40 = (pTVar7->Translation).XY.m128d_f64[1];
          local_58 = (pTVar7->Translation).ZW.m128d_f64[0];
          dStack_50 = (pTVar7->Translation).ZW.m128d_f64[1];
          local_68 = (pTVar7->Scale3D).XY.m128d_f64[0];
          dStack_60 = (pTVar7->Scale3D).XY.m128d_f64[1];
          local_78 = (pTVar7->Scale3D).ZW.m128d_f64[0];
          dStack_70 = (pTVar7->Scale3D).ZW.m128d_f64[1];
          uVar6 = 0;
          if ((int)uVar8 < (int)local_80) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          pTVar7 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                   ::operator[](&this->ValueRange,*(int *)(uVar10 + (longlong)local_88));
          uVar9 = (ulonglong)(uVar8 + 1);
          (pTVar7->Rotation).XY.m128d_f64[0] = local_28;
          (pTVar7->Rotation).XY.m128d_f64[1] = dStack_20;
          (pTVar7->Rotation).ZW.m128d_f64[0] = local_38;
          (pTVar7->Rotation).ZW.m128d_f64[1] = dStack_30;
          (pTVar7->Translation).XY.m128d_f64[0] = local_48;
          (pTVar7->Translation).XY.m128d_f64[1] = dStack_40;
          (pTVar7->Translation).ZW.m128d_f64[0] = local_58;
          (pTVar7->Translation).ZW.m128d_f64[1] = dStack_50;
          (pTVar7->Scale3D).XY.m128d_f64[0] = local_68;
          (pTVar7->Scale3D).XY.m128d_f64[1] = dStack_60;
          (pTVar7->Scale3D).ZW.m128d_f64[0] = local_78;
          (pTVar7->Scale3D).ZW.m128d_f64[1] = dStack_70;
          uVar10 = uVar10 + 4;
        } while ((int)(uVar8 + 1) < param_1->ArrayNum);
      }
    }
    else if (0 < iVar1) {
      do {
        iVar11 = (int)uVar9;
        pTVar7 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[](param_1,iVar11);
        local_78 = (pTVar7->Rotation).XY.m128d_f64[0];
        dStack_70 = (pTVar7->Rotation).XY.m128d_f64[1];
        local_68 = (pTVar7->Rotation).ZW.m128d_f64[0];
        dStack_60 = (pTVar7->Rotation).ZW.m128d_f64[1];
        local_58 = (pTVar7->Translation).XY.m128d_f64[0];
        dStack_50 = (pTVar7->Translation).XY.m128d_f64[1];
        local_48 = (pTVar7->Translation).ZW.m128d_f64[0];
        dStack_40 = (pTVar7->Translation).ZW.m128d_f64[1];
        local_38 = (pTVar7->Scale3D).XY.m128d_f64[0];
        dStack_30 = (pTVar7->Scale3D).XY.m128d_f64[1];
        local_28 = (pTVar7->Scale3D).ZW.m128d_f64[0];
        dStack_20 = (pTVar7->Scale3D).ZW.m128d_f64[1];
        pTVar7 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                 ::operator[](&this->ValueRange,iVar11 + param_2);
        uVar9 = (ulonglong)(iVar11 + 1U);
        (pTVar7->Rotation).XY.m128d_f64[0] = local_78;
        (pTVar7->Rotation).XY.m128d_f64[1] = dStack_70;
        (pTVar7->Rotation).ZW.m128d_f64[0] = local_68;
        (pTVar7->Rotation).ZW.m128d_f64[1] = dStack_60;
        (pTVar7->Translation).XY.m128d_f64[0] = local_58;
        (pTVar7->Translation).XY.m128d_f64[1] = dStack_50;
        (pTVar7->Translation).ZW.m128d_f64[0] = local_48;
        (pTVar7->Translation).ZW.m128d_f64[1] = dStack_40;
        (pTVar7->Scale3D).XY.m128d_f64[0] = local_38;
        (pTVar7->Scale3D).XY.m128d_f64[1] = dStack_30;
        (pTVar7->Scale3D).ZW.m128d_f64[0] = local_28;
        (pTVar7->Scale3D).ZW.m128d_f64[1] = dStack_20;
      } while ((int)(iVar11 + 1U) < iVar1);
    }
    bVar4 = true;
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  return bVar4;
}

// SetRangeImpl @ 149835ea0

bool __thiscall
FPCGNativePointPropertyEnumAccessor<2>::SetRangeImpl
          (FPCGNativePointPropertyEnumAccessor<2> *this,TArrayView<double_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  double *pdVar8;
  float *pfVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  char local_res20 [8];
  void *local_38;
  undefined8 local_30;
  
  if (param_3->bIsReadOnly != false) {
    return false;
  }
  uVar11 = 0;
  iVar2 = param_1->ArrayNum;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_res20[0] = '\0';
  cVar4 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar2,&local_38,local_res20);
  if (cVar4 != '\0') {
    if (local_res20[0] == '\0') {
      if (0 < iVar2) {
        uVar13 = uVar11;
        do {
          uVar12 = (uint)uVar11;
          pdVar8 = TArrayView<double_const_,int>::operator[](param_1,uVar12);
          dVar1 = *pdVar8;
          uVar7 = 0;
          if ((int)uVar12 < (int)local_30) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pfVar9 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                             (&this->ValueRange,*(int *)(uVar13 + (longlong)local_38));
          uVar11 = (ulonglong)(uVar12 + 1);
          uVar13 = uVar13 + 4;
          *pfVar9 = (float)dVar1;
        } while ((int)(uVar12 + 1) < param_1->ArrayNum);
      }
    }
    else if (0 < iVar2) {
      do {
        iVar10 = (int)uVar11;
        pdVar8 = TArrayView<double_const_,int>::operator[](param_1,iVar10);
        dVar1 = *pdVar8;
        pfVar9 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                           (&this->ValueRange,iVar10 + param_2);
        uVar11 = (ulonglong)(iVar10 + 1U);
        *pfVar9 = (float)dVar1;
      } while ((int)(iVar10 + 1U) < iVar2);
    }
    uVar11 = 1;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return SUB81(uVar11,0);
}

// SetRangeImpl @ 149836020

bool __thiscall
FPCGNativePointPropertyEnumAccessor<4>::SetRangeImpl
          (FPCGNativePointPropertyEnumAccessor<4> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  char local_res20 [8];
  void *local_40;
  undefined8 local_38;
  double local_30;
  double dStack_28;
  ulonglong uVar12;
  
  if (param_3->bIsReadOnly != false) {
    return false;
  }
  uVar10 = 0;
  iVar2 = param_1->ArrayNum;
  local_40 = (void *)0x0;
  local_38 = 0;
  local_res20[0] = '\0';
  cVar4 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar2,&local_40,local_res20);
  if (cVar4 != '\0') {
    if (local_res20[0] == '\0') {
      uVar12 = uVar10;
      if (0 < iVar2) {
        do {
          uVar11 = (uint)uVar12;
          pTVar8 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,uVar11);
          local_30 = (pTVar8->field0_0x0)._s_0.X;
          dStack_28 = (pTVar8->field0_0x0)._s_0.Y;
          dVar1 = (pTVar8->field0_0x0)._s_0.Z;
          uVar7 = 0;
          if ((int)uVar11 < (int)local_38) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pTVar8 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                   ::operator[](&this->ValueRange,*(int *)(uVar10 + (longlong)local_40));
          uVar10 = uVar10 + 4;
          (pTVar8->field0_0x0)._s_0.X = local_30;
          (pTVar8->field0_0x0)._s_0.Y = dStack_28;
          (pTVar8->field0_0x0)._s_0.Z = dVar1;
          uVar12 = (ulonglong)(uVar11 + 1);
        } while ((int)(uVar11 + 1) < param_1->ArrayNum);
      }
    }
    else if (0 < iVar2) {
      do {
        iVar9 = (int)uVar10;
        pTVar8 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,iVar9);
        local_30 = (pTVar8->field0_0x0)._s_0.X;
        dStack_28 = (pTVar8->field0_0x0)._s_0.Y;
        dVar1 = (pTVar8->field0_0x0)._s_0.Z;
        pTVar8 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                 ::operator[](&this->ValueRange,iVar9 + param_2);
        uVar10 = (ulonglong)(iVar9 + 1U);
        (pTVar8->field0_0x0)._s_0.X = local_30;
        (pTVar8->field0_0x0)._s_0.Y = dStack_28;
        (pTVar8->field0_0x0)._s_0.Z = dVar1;
      } while ((int)(iVar9 + 1U) < iVar2);
    }
    uVar10 = 1;
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  return SUB81(uVar10,0);
}

// SetRangeImpl @ 1498361d0

bool __thiscall
FPCGNativePointPropertyEnumAccessor<8>::SetRangeImpl
          (FPCGNativePointPropertyEnumAccessor<8> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  char local_res20 [8];
  void *local_40;
  undefined8 local_38;
  double local_30;
  double dStack_28;
  ulonglong uVar12;
  
  if (param_3->bIsReadOnly != false) {
    return false;
  }
  uVar10 = 0;
  iVar2 = param_1->ArrayNum;
  local_40 = (void *)0x0;
  local_38 = 0;
  local_res20[0] = '\0';
  cVar4 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar2,&local_40,local_res20);
  if (cVar4 != '\0') {
    if (local_res20[0] == '\0') {
      uVar12 = uVar10;
      if (0 < iVar2) {
        do {
          uVar11 = (uint)uVar12;
          pTVar8 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,uVar11);
          local_30 = (pTVar8->field0_0x0)._s_0.X;
          dStack_28 = (pTVar8->field0_0x0)._s_0.Y;
          dVar1 = (pTVar8->field0_0x0)._s_0.Z;
          uVar7 = 0;
          if ((int)uVar11 < (int)local_38) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pTVar8 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                   ::operator[](&this->ValueRange,*(int *)(uVar10 + (longlong)local_40));
          uVar10 = uVar10 + 4;
          (pTVar8->field0_0x0)._s_0.X = local_30;
          (pTVar8->field0_0x0)._s_0.Y = dStack_28;
          (pTVar8->field0_0x0)._s_0.Z = dVar1;
          uVar12 = (ulonglong)(uVar11 + 1);
        } while ((int)(uVar11 + 1) < param_1->ArrayNum);
      }
    }
    else if (0 < iVar2) {
      do {
        iVar9 = (int)uVar10;
        pTVar8 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,iVar9);
        local_30 = (pTVar8->field0_0x0)._s_0.X;
        dStack_28 = (pTVar8->field0_0x0)._s_0.Y;
        dVar1 = (pTVar8->field0_0x0)._s_0.Z;
        pTVar8 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                 ::operator[](&this->ValueRange,iVar9 + param_2);
        uVar10 = (ulonglong)(iVar9 + 1U);
        (pTVar8->field0_0x0)._s_0.X = local_30;
        (pTVar8->field0_0x0)._s_0.Y = dStack_28;
        (pTVar8->field0_0x0)._s_0.Z = dVar1;
      } while ((int)(iVar9 + 1U) < iVar2);
    }
    uVar10 = 1;
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  return SUB81(uVar10,0);
}

// SetRangeImpl @ 149836380

bool __thiscall
FPCGNativePointPropertyEnumAccessor<16>::SetRangeImpl
          (FPCGNativePointPropertyEnumAccessor<16> *this,
          TArrayView<UE::Math::TVector4<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  TVector4<double> *pTVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  char local_res20 [8];
  void *local_48;
  undefined8 local_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong uVar11;
  
  if (param_3->bIsReadOnly != false) {
    return false;
  }
  uVar9 = 0;
  iVar1 = param_1->ArrayNum;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_res20[0] = '\0';
  cVar3 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar1,&local_48,local_res20);
  if (cVar3 != '\0') {
    if (local_res20[0] == '\0') {
      uVar11 = uVar9;
      if (0 < iVar1) {
        do {
          uVar10 = (uint)uVar11;
          pTVar7 = TArrayView<UE::Math::TVector4<double>_const_,int>::operator[](param_1,uVar10);
          local_28 = (pTVar7->field0_0x0)._s_0.X;
          dStack_20 = (pTVar7->field0_0x0)._s_0.Y;
          local_38 = (pTVar7->field0_0x0)._s_0.Z;
          dStack_30 = (pTVar7->field0_0x0)._s_0.W;
          uVar6 = 0;
          if ((int)uVar10 < (int)local_40) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          pTVar7 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                   ::operator[](&this->ValueRange,*(int *)(uVar9 + (longlong)local_48));
          uVar9 = uVar9 + 4;
          (pTVar7->field0_0x0)._s_0.X = local_28;
          (pTVar7->field0_0x0)._s_0.Y = dStack_20;
          (pTVar7->field0_0x0)._s_0.Z = local_38;
          (pTVar7->field0_0x0)._s_0.W = dStack_30;
          uVar11 = (ulonglong)(uVar10 + 1);
        } while ((int)(uVar10 + 1) < param_1->ArrayNum);
      }
    }
    else if (0 < iVar1) {
      do {
        iVar8 = (int)uVar9;
        pTVar7 = TArrayView<UE::Math::TVector4<double>_const_,int>::operator[](param_1,iVar8);
        local_38 = (pTVar7->field0_0x0)._s_0.X;
        dStack_30 = (pTVar7->field0_0x0)._s_0.Y;
        local_28 = (pTVar7->field0_0x0)._s_0.Z;
        dStack_20 = (pTVar7->field0_0x0)._s_0.W;
        pTVar7 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                 ::operator[](&this->ValueRange,iVar8 + param_2);
        uVar9 = (ulonglong)(iVar8 + 1U);
        (pTVar7->field0_0x0)._s_0.X = local_38;
        (pTVar7->field0_0x0)._s_0.Y = dStack_30;
        (pTVar7->field0_0x0)._s_0.Z = local_28;
        (pTVar7->field0_0x0)._s_0.W = dStack_20;
      } while ((int)(iVar8 + 1U) < iVar1);
    }
    uVar9 = 1;
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return SUB81(uVar9,0);
}

// SetRangeImpl @ 149836520

bool __thiscall
FPCGNativePointPropertyEnumAccessor<32>::SetRangeImpl
          (FPCGNativePointPropertyEnumAccessor<32> *this,TArrayView<double_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  double *pdVar8;
  float *pfVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  char local_res20 [8];
  void *local_38;
  undefined8 local_30;
  
  if (param_3->bIsReadOnly != false) {
    return false;
  }
  uVar11 = 0;
  iVar2 = param_1->ArrayNum;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_res20[0] = '\0';
  cVar4 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar2,&local_38,local_res20);
  if (cVar4 != '\0') {
    if (local_res20[0] == '\0') {
      if (0 < iVar2) {
        uVar13 = uVar11;
        do {
          uVar12 = (uint)uVar11;
          pdVar8 = TArrayView<double_const_,int>::operator[](param_1,uVar12);
          dVar1 = *pdVar8;
          uVar7 = 0;
          if ((int)uVar12 < (int)local_30) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pfVar9 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                             (&this->ValueRange,*(int *)(uVar13 + (longlong)local_38));
          uVar11 = (ulonglong)(uVar12 + 1);
          uVar13 = uVar13 + 4;
          *pfVar9 = (float)dVar1;
        } while ((int)(uVar12 + 1) < param_1->ArrayNum);
      }
    }
    else if (0 < iVar2) {
      do {
        iVar10 = (int)uVar11;
        pdVar8 = TArrayView<double_const_,int>::operator[](param_1,iVar10);
        dVar1 = *pdVar8;
        pfVar9 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                           (&this->ValueRange,iVar10 + param_2);
        uVar11 = (ulonglong)(iVar10 + 1U);
        *pfVar9 = (float)dVar1;
      } while ((int)(iVar10 + 1U) < iVar2);
    }
    uVar11 = 1;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return SUB81(uVar11,0);
}

// SetRangeImpl @ 1498366a0

bool __thiscall
FPCGNativePointPropertyEnumAccessor<64>::SetRangeImpl
          (FPCGNativePointPropertyEnumAccessor<64> *this,TArrayView<int_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  char local_res20 [8];
  void *local_28;
  undefined8 local_20;
  
  if (param_3->bIsReadOnly != false) {
    return false;
  }
  iVar1 = param_1->ArrayNum;
  uVar10 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_res20[0] = '\0';
  cVar4 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar1,&local_28,local_res20);
  if (cVar4 == '\0') {
    bVar5 = false;
  }
  else {
    if (local_res20[0] == '\0') {
      uVar12 = uVar10;
      if (0 < iVar1) {
        do {
          uVar9 = (uint)uVar10;
          piVar8 = TArrayView<int_const_,int>::operator[](param_1,uVar9);
          iVar1 = *piVar8;
          uVar7 = 0;
          if ((int)uVar9 < (int)local_20) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          piVar8 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                             (&this->ValueRange,*(int *)(uVar12 + (longlong)local_28));
          uVar10 = (ulonglong)(uVar9 + 1);
          *piVar8 = iVar1;
          uVar12 = uVar12 + 4;
        } while ((int)(uVar9 + 1) < param_1->ArrayNum);
      }
    }
    else if (0 < iVar1) {
      do {
        iVar11 = (int)uVar10;
        piVar8 = TArrayView<int_const_,int>::operator[](param_1,iVar11);
        iVar2 = *piVar8;
        piVar8 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                           (&this->ValueRange,iVar11 + param_2);
        uVar10 = (ulonglong)(iVar11 + 1U);
        *piVar8 = iVar2;
      } while ((int)(iVar11 + 1U) < iVar1);
    }
    bVar5 = true;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return bVar5;
}

// SetRangeImpl @ 149836800

bool __thiscall
FPCGNativePointPropertyEnumAccessor<128>::SetRangeImpl
          (FPCGNativePointPropertyEnumAccessor<128> *this,TArrayView<__int64_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  long64 lVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  long64 *plVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  char local_res20 [8];
  void *local_28;
  undefined8 local_20;
  
  if (param_3->bIsReadOnly != false) {
    return false;
  }
  iVar1 = param_1->ArrayNum;
  uVar10 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_res20[0] = '\0';
  cVar4 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar1,&local_28,local_res20);
  if (cVar4 == '\0') {
    bVar5 = false;
  }
  else {
    if (local_res20[0] == '\0') {
      uVar12 = uVar10;
      if (0 < iVar1) {
        do {
          uVar9 = (uint)uVar10;
          plVar8 = TArrayView<__int64_const_,int>::operator[](param_1,uVar9);
          lVar2 = *plVar8;
          uVar7 = 0;
          if ((int)uVar9 < (int)local_20) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          plVar8 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                             (&this->ValueRange,*(int *)(uVar12 + (longlong)local_28));
          uVar10 = (ulonglong)(uVar9 + 1);
          *plVar8 = lVar2;
          uVar12 = uVar12 + 4;
        } while ((int)(uVar9 + 1) < param_1->ArrayNum);
      }
    }
    else if (0 < iVar1) {
      do {
        iVar11 = (int)uVar10;
        plVar8 = TArrayView<__int64_const_,int>::operator[](param_1,iVar11);
        lVar2 = *plVar8;
        plVar8 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                           (&this->ValueRange,iVar11 + param_2);
        uVar10 = (ulonglong)(iVar11 + 1U);
        *plVar8 = lVar2;
      } while ((int)(iVar11 + 1U) < iVar1);
    }
    bVar5 = true;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return bVar5;
}

