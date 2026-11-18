// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FISMInstanceUpdateChangeSet @ 147d786b0

FISMInstanceUpdateChangeSet * __thiscall
FISMInstanceUpdateChangeSet::FISMInstanceUpdateChangeSet
          (FISMInstanceUpdateChangeSet *this,FISMInstanceUpdateChangeSet *param_1)

{
  FInstanceUpdateChangeSet::FInstanceUpdateChangeSet
            ((FInstanceUpdateChangeSet *)this,(FInstanceUpdateChangeSet *)param_1);
  (this->LegacyInstanceReorderTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LegacyInstanceReorderTable).AllocatorInstance.Data =
       (param_1->LegacyInstanceReorderTable).AllocatorInstance.Data;
  (param_1->LegacyInstanceReorderTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LegacyInstanceReorderTable).ArrayNum = (param_1->LegacyInstanceReorderTable).ArrayNum;
  (this->LegacyInstanceReorderTable).ArrayMax = (param_1->LegacyInstanceReorderTable).ArrayMax;
  (param_1->LegacyInstanceReorderTable).ArrayNum = 0;
  (param_1->LegacyInstanceReorderTable).ArrayMax = 0;
  this->PostUpdateNumInstances = param_1->PostUpdateNumInstances;
  return this;
}

// operator() @ 147d7f4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRenderTransform * __thiscall
`FISMInstanceUpdateChangeSet::SetInstancePrevTransforms'::__l2::<lambda_1>::operator()
          (void *this,FRenderTransform *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TMatrix<double> *_Src;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88;
  double dStack_80;
  double local_78;
  double local_68;
  double dStack_60;
  double local_58;
  double local_28;
  
  local_28 = (double)(__security_cookie.value ^ (ulonglong)auStack_c8);
  _Src = TArrayView<UE::Math::TMatrix<double>,int>::operator[]
                   (*(TArrayView<UE::Math::TMatrix<double>,int> **)((longlong)this + 0x18),param_1);
  if ((_Src->M[2] + 3 < &local_a8) || ((TMatrix<double> *)&stack0xffffffffffffffb0 < _Src)) {
    local_a8 = _Src->M[0][0];
    dStack_a0 = _Src->M[0][1];
    local_98 = _Src->M[0][2];
    local_88 = _Src->M[1][0];
    dStack_80 = _Src->M[1][1];
    local_78 = _Src->M[1][2];
    local_68 = _Src->M[2][0];
    dStack_60 = _Src->M[2][1];
    local_58 = _Src->M[2][2];
  }
  else {
    memcpy(&local_a8,_Src,0x60);
  }
  dVar3 = *(double *)this;
  dVar4 = *(double *)((longlong)this + 8);
  dVar1 = _Src->M[3][2];
  dVar5 = _Src->M[3][0];
  dVar6 = _Src->M[3][1];
  dVar2 = *(double *)((longlong)this + 0x10);
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.X = (float)local_a8;
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.Y = (float)dStack_a0;
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.Z = (float)local_98;
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.X = (float)local_88;
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.Y = (float)dStack_80;
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.Z = (float)local_78;
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.X = (float)local_68;
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.Y = (float)dStack_60;
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.Z = (float)local_58;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (float)(dVar5 + dVar3);
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (float)(dVar6 + dVar4);
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (float)(dVar1 + dVar2);
  return __return_storage_ptr__;
}

// operator() @ 147d7f630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRenderTransform * __thiscall
`FISMInstanceUpdateChangeSet::SetInstanceTransforms'::__l2::<lambda_1>::operator()
          (void *this,FRenderTransform *__return_storage_ptr__,int param_1)

{
  undefined8 uVar1;
  double dVar2;
  double *pdVar3;
  double dVar4;
  TMatrix<double> *pTVar5;
  TBox<double> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  TBox<double> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pTVar5 = TStridedView<UE::Math::TMatrix<double>,int>::GetElementPtr
                     (*(TStridedView<UE::Math::TMatrix<double>,int> **)this,param_1);
  FRenderTransform::FRenderTransform(__return_storage_ptr__,pTVar5);
  uVar1 = *(undefined8 *)&(__return_storage_ptr__->Origin).field0_0x0;
  auVar9 = insertps(*(undefined1 (*) [16])__return_storage_ptr__->TransformRows,
                    *(undefined1 (*) [16])__return_storage_ptr__->TransformRows,8);
  auVar10 = insertps(*(undefined1 (*) [16])(__return_storage_ptr__->TransformRows + 1),
                     *(undefined1 (*) [16])(__return_storage_ptr__->TransformRows + 1),8);
  auVar11 = insertps(*(undefined1 (*) [16])(__return_storage_ptr__->TransformRows + 2),
                     *(undefined1 (*) [16])(__return_storage_ptr__->TransformRows + 2),8);
  local_c8._8_4_ = SUB84((double)auVar9._12_4_,0);
  local_c8._0_8_ = (double)auVar9._8_4_;
  local_c8._12_4_ = (int)((ulonglong)(double)auVar9._12_4_ >> 0x20);
  local_d8._8_4_ = SUB84((double)auVar9._4_4_,0);
  local_d8._0_8_ = (double)auVar9._0_4_;
  local_d8._12_4_ = (int)((ulonglong)(double)auVar9._4_4_ >> 0x20);
  local_a8._8_4_ = SUB84((double)auVar10._12_4_,0);
  local_a8._0_8_ = (double)auVar10._8_4_;
  local_a8._12_4_ = (int)((ulonglong)(double)auVar10._12_4_ >> 0x20);
  local_b8._8_4_ = SUB84((double)auVar10._4_4_,0);
  local_b8._0_8_ = (double)auVar10._0_4_;
  local_b8._12_4_ = (int)((ulonglong)(double)auVar10._4_4_ >> 0x20);
  dVar4 = (double)(float)((ulonglong)uVar1 >> 0x20);
  local_88._8_4_ = SUB84((double)auVar11._12_4_,0);
  local_88._0_8_ = (double)auVar11._8_4_;
  local_88._12_4_ = (int)((ulonglong)(double)auVar11._12_4_ >> 0x20);
  local_98._8_4_ = SUB84((double)auVar11._4_4_,0);
  local_98._0_8_ = (double)auVar11._0_4_;
  local_98._12_4_ = (int)((ulonglong)(double)auVar11._4_4_ >> 0x20);
  local_68._8_4_ = SUB84((double)__real_3f800000,0);
  local_68._0_8_ = (double)(__return_storage_ptr__->Origin).field0_0x0._s_0.Z;
  local_68._12_4_ = (int)((ulonglong)(double)__real_3f800000 >> 0x20);
  local_78._8_4_ = SUB84(dVar4,0);
  local_78._0_8_ = (double)(float)uVar1;
  local_78._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  pTVar6 = UE::Math::TBox<double>::TransformBy
                     (*(TBox<double> **)((longlong)this + 0x10),&local_58,
                      (TMatrix<double> *)local_d8);
  pdVar3 = *(double **)((longlong)this + 8);
  if (*(char *)(pdVar3 + 6) == '\0') {
    if (pTVar6->IsValid != '\0') {
      dVar4 = (pTVar6->Min).field0_0x0._s_0.Y;
      *pdVar3 = (pTVar6->Min).field0_0x0._s_0.X;
      pdVar3[1] = dVar4;
      dVar4 = (pTVar6->Max).field0_0x0._s_0.X;
      pdVar3[2] = (pTVar6->Min).field0_0x0._s_0.Z;
      pdVar3[3] = dVar4;
      dVar4 = (pTVar6->Max).field0_0x0._s_0.Z;
      pdVar3[4] = (pTVar6->Max).field0_0x0._s_0.Y;
      pdVar3[5] = dVar4;
      pdVar3[6] = *(double *)&pTVar6->IsValid;
    }
  }
  else if (pTVar6->IsValid != '\0') {
    dVar4 = *pdVar3;
    uVar7 = SUB84(dVar4,0);
    uVar8 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar2 = *(double *)&(pTVar6->Min).field0_0x0;
    if (dVar2 <= dVar4) {
      uVar7 = SUB84(dVar2,0);
      uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    *pdVar3 = (double)CONCAT44(uVar8,uVar7);
    dVar4 = *(double *)((longlong)&(pTVar6->Min).field0_0x0 + 8);
    uVar7 = SUB84(dVar4,0);
    uVar8 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar2 = pdVar3[1];
    if (dVar2 <= dVar4) {
      uVar7 = SUB84(dVar2,0);
      uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    pdVar3[1] = (double)CONCAT44(uVar8,uVar7);
    dVar4 = *(double *)((longlong)&(pTVar6->Min).field0_0x0 + 0x10);
    uVar7 = SUB84(dVar4,0);
    uVar8 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar2 = pdVar3[2];
    if (dVar2 <= dVar4) {
      uVar7 = SUB84(dVar2,0);
      uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    pdVar3[2] = (double)CONCAT44(uVar8,uVar7);
    dVar4 = *(double *)&(pTVar6->Max).field0_0x0;
    uVar7 = SUB84(dVar4,0);
    uVar8 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar2 = pdVar3[3];
    if (dVar4 <= dVar2) {
      uVar7 = SUB84(dVar2,0);
      uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    pdVar3[3] = (double)CONCAT44(uVar8,uVar7);
    dVar4 = *(double *)((longlong)&(pTVar6->Max).field0_0x0 + 8);
    uVar7 = SUB84(dVar4,0);
    uVar8 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar2 = pdVar3[4];
    if (dVar4 <= dVar2) {
      uVar7 = SUB84(dVar2,0);
      uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    pdVar3[4] = (double)CONCAT44(uVar8,uVar7);
    dVar4 = *(double *)((longlong)&(pTVar6->Max).field0_0x0 + 0x10);
    uVar7 = SUB84(dVar4,0);
    uVar8 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar2 = pdVar3[5];
    if (dVar4 <= dVar2) {
      uVar7 = SUB84(dVar2,0);
      uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    pdVar3[5] = (double)CONCAT44(uVar8,uVar7);
  }
  return __return_storage_ptr__;
}

// operator() @ 147d7f7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRenderTransform * __thiscall
`FISMInstanceUpdateChangeSet::SetInstanceTransforms'::__l2::<lambda_1>::operator()
          (void *this,FRenderTransform *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TMatrix<double> *_Src;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88;
  double dStack_80;
  double local_78;
  double local_68;
  double dStack_60;
  double local_58;
  double local_28;
  
  local_28 = (double)(__security_cookie.value ^ (ulonglong)auStack_c8);
  _Src = TStridedView<UE::Math::TMatrix<double>,int>::GetElementPtr
                   (*(TStridedView<UE::Math::TMatrix<double>,int> **)((longlong)this + 0x18),param_1
                   );
  if ((_Src->M[2] + 3 < &local_a8) || ((TMatrix<double> *)&stack0xffffffffffffffb0 < _Src)) {
    local_a8 = _Src->M[0][0];
    dStack_a0 = _Src->M[0][1];
    local_98 = _Src->M[0][2];
    local_88 = _Src->M[1][0];
    dStack_80 = _Src->M[1][1];
    local_78 = _Src->M[1][2];
    local_68 = _Src->M[2][0];
    dStack_60 = _Src->M[2][1];
    local_58 = _Src->M[2][2];
  }
  else {
    memcpy(&local_a8,_Src,0x60);
  }
  dVar3 = *(double *)this;
  dVar4 = *(double *)((longlong)this + 8);
  dVar1 = _Src->M[3][2];
  dVar5 = _Src->M[3][0];
  dVar6 = _Src->M[3][1];
  dVar2 = *(double *)((longlong)this + 0x10);
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.X = (float)local_a8;
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.Y = (float)dStack_a0;
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.Z = (float)local_98;
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.X = (float)local_88;
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.Y = (float)dStack_80;
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.Z = (float)local_78;
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.X = (float)local_68;
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.Y = (float)dStack_60;
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.Z = (float)local_58;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (float)(dVar5 + dVar3);
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (float)(dVar6 + dVar4);
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (float)(dVar1 + dVar2);
  return __return_storage_ptr__;
}

// SetCustomData @ 147dbfe20

void __thiscall
FISMInstanceUpdateChangeSet::SetCustomData
          (FISMInstanceUpdateChangeSet *this,TArrayView<float_const_,int> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  undefined8 local_78;
  TArrayView<float_const_,int> local_68;
  TArray<float,TSizedDefaultAllocator<32>_> *local_58;
  ulonglong uStack_50;
  FISMInstanceUpdateChangeSet *pFStack_48;
  int iStack_40;
  uint uStack_3c;
  int local_38;
  undefined4 uStack_34;
  FWriter local_30;
  
  iStack_40 = (int)this->_padding_;
  local_38 = (int)this->_padding_;
  bVar4 = *(byte *)((longlong)&this->_padding_ + 2) >> 1;
  if ((bVar4 & 1) == 0) {
    uStack_3c = CONCAT31(uStack_3c._1_3_,bVar4) & 0xffffff01;
    local_58 = (TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_;
    uStack_50 = 1;
    pFStack_48 = (FISMInstanceUpdateChangeSet *)0x0;
  }
  else {
    if ((((char)this->_padding_ == '\0') &&
        ((*(byte *)((longlong)&this->_padding_ + 4) >> 1 & 1) == 0)) &&
       (iVar3 = (int)this->_padding_ + (int)this->_padding_, iVar3 != local_38)) {
      local_78 = CONCAT44(iVar3,(undefined4)local_78) & 0xffffffffffffff00;
    }
    else {
      local_78 = CONCAT44(local_38,(undefined4)local_78);
      local_78 = CONCAT71(local_78._1_7_,1);
    }
    local_58 = (TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_;
    uStack_3c = CONCAT31(uStack_3c._1_3_,bVar4) & 0xffffff01;
    uStack_50 = local_78;
    pFStack_48 = this;
    if (((int)this->_padding_ != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                           ,0x113,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_30.Setup._28_4_ = uStack_3c;
  local_30.Setup.ElementStride = iStack_40;
  local_30.Setup.Delta.Tracker = (FInstanceAttributeTracker *)pFStack_48;
  local_68.DataPtr = param_1->DataPtr;
  local_68.ArrayNum = param_1->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_30.Setup.DeltaDataArray = local_58;
  local_30.Setup.Delta.bFullUpdate = (bool)(undefined1)uStack_50;
  local_30.Setup.Delta._1_3_ = uStack_50._1_3_;
  local_30.Setup.Delta.NumItems = uStack_50._4_4_;
  local_30.Setup._36_4_ = uStack_34;
  local_30.Setup.NumInstances = local_38;
  TDeltaSetup<float,FInstanceAttributeTracker::FDeltaRange<2>_>::FWriter::Gather<float_const_>
            (&local_30,&local_68,param_2);
  return;
}

// SetInstancePrevTransforms @ 147dc03d0

void __thiscall
FISMInstanceUpdateChangeSet::SetInstancePrevTransforms
          (FISMInstanceUpdateChangeSet *this,TArrayView<UE::Math::TMatrix<double>,int> *param_1)

{
  FWriter *this_00;
  TArrayView<UE::Math::TMatrix<double>,int> *local_res10 [3];
  code *local_48;
  TArrayView<UE::Math::TMatrix<double>,int> **local_40;
  FWriter local_38;
  
  this_00 = FInstanceUpdateChangeSet::GetPrevTransformWriter
                      ((FInstanceUpdateChangeSet *)this,&local_38);
  local_40 = local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FISMInstanceUpdateChangeSet::SetInstancePrevTransforms'::__l2::<lambda_1>,FRenderTransform,int>
             ::Call;
  local_res10[0] = param_1;
  TDeltaSetup<FRenderTransform,FInstanceAttributeTracker::FDeltaRange<1>_>::FWriter::Gather
            (this_00,(TFunctionRef<FRenderTransform___cdecl(int)> *)&local_48);
  return;
}

// SetInstancePrevTransforms @ 147dc0420

void __thiscall
FISMInstanceUpdateChangeSet::SetInstancePrevTransforms
          (FISMInstanceUpdateChangeSet *this,TArrayView<UE::Math::TMatrix<double>,int> *param_1,
          TVector<double> *param_2)

{
  FWriter *this_00;
  code *local_68;
  undefined8 *local_60;
  double local_58;
  double dStack_50;
  double local_48;
  TArrayView<UE::Math::TMatrix<double>,int> *local_40;
  FWriter local_38;
  
  this_00 = FInstanceUpdateChangeSet::GetPrevTransformWriter
                      ((FInstanceUpdateChangeSet *)this,&local_38);
  local_58 = (param_2->field0_0x0)._s_0.X;
  dStack_50 = (param_2->field0_0x0)._s_0.Y;
  local_60 = &local_58;
  local_48 = (param_2->field0_0x0)._s_0.Z;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FISMInstanceUpdateChangeSet::SetInstancePrevTransforms'::__l2::<lambda_1>,FRenderTransform,int>
             ::Call;
  local_40 = param_1;
  TDeltaSetup<FRenderTransform,FInstanceAttributeTracker::FDeltaRange<1>_>::FWriter::Gather
            (this_00,(TFunctionRef<FRenderTransform___cdecl(int)> *)&local_68);
  return;
}

// SetInstanceTransforms @ 147dc0490

void __thiscall
FISMInstanceUpdateChangeSet::SetInstanceTransforms
          (FISMInstanceUpdateChangeSet *this,TStridedView<UE::Math::TMatrix<double>,int> *param_1)

{
  FWriter *this_00;
  TStridedView<UE::Math::TMatrix<double>,int> *local_res10 [3];
  code *local_48;
  TStridedView<UE::Math::TMatrix<double>,int> **local_40;
  FWriter local_38;
  
  this_00 = FInstanceUpdateChangeSet::GetTransformWriter((FInstanceUpdateChangeSet *)this,&local_38)
  ;
  local_40 = local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FISMInstanceUpdateChangeSet::SetInstanceTransforms'::__l2::<lambda_1>,FRenderTransform,int>
             ::Call;
  local_res10[0] = param_1;
  TDeltaSetup<FRenderTransform,FInstanceAttributeTracker::FDeltaRange<1>_>::FWriter::Gather
            (this_00,(TFunctionRef<FRenderTransform___cdecl(int)> *)&local_48);
  return;
}

// SetInstanceTransforms @ 147dc04e0

void __thiscall
FISMInstanceUpdateChangeSet::SetInstanceTransforms
          (FISMInstanceUpdateChangeSet *this,TStridedView<UE::Math::TMatrix<double>,int> *param_1,
          TBox<double> *param_2,TBox<double> *param_3)

{
  FWriter *this_00;
  code *local_58;
  TStridedView<UE::Math::TMatrix<double>,int> **local_50;
  TStridedView<UE::Math::TMatrix<double>,int> *local_48;
  TBox<double> *local_40;
  TBox<double> *local_38;
  FWriter local_30;
  
  this_00 = FInstanceUpdateChangeSet::GetTransformWriter((FInstanceUpdateChangeSet *)this,&local_30)
  ;
  local_50 = &local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FISMInstanceUpdateChangeSet::SetInstanceTransforms'::__l2::<lambda_1>,FRenderTransform,int>
             ::Call;
  local_48 = param_1;
  local_40 = param_3;
  local_38 = param_2;
  TDeltaSetup<FRenderTransform,FInstanceAttributeTracker::FDeltaRange<1>_>::FWriter::Gather
            (this_00,(TFunctionRef<FRenderTransform___cdecl(int)> *)&local_58);
  return;
}

// SetInstanceTransforms @ 147dc0550

void __thiscall
FISMInstanceUpdateChangeSet::SetInstanceTransforms
          (FISMInstanceUpdateChangeSet *this,TStridedView<UE::Math::TMatrix<double>,int> *param_1,
          TVector<double> *param_2)

{
  FWriter *this_00;
  code *local_68;
  undefined8 *local_60;
  double local_58;
  double dStack_50;
  double local_48;
  TStridedView<UE::Math::TMatrix<double>,int> *local_40;
  FWriter local_38;
  
  this_00 = FInstanceUpdateChangeSet::GetTransformWriter((FInstanceUpdateChangeSet *)this,&local_38)
  ;
  local_58 = (param_2->field0_0x0)._s_0.X;
  dStack_50 = (param_2->field0_0x0)._s_0.Y;
  local_60 = &local_58;
  local_48 = (param_2->field0_0x0)._s_0.Z;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FISMInstanceUpdateChangeSet::SetInstanceTransforms'::__l2::<lambda_1>,FRenderTransform,int>
             ::Call;
  local_40 = param_1;
  TDeltaSetup<FRenderTransform,FInstanceAttributeTracker::FDeltaRange<1>_>::FWriter::Gather
            (this_00,(TFunctionRef<FRenderTransform___cdecl(int)> *)&local_68);
  return;
}

