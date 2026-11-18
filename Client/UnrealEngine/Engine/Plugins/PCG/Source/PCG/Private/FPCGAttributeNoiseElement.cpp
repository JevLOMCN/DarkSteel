// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 18

// operator()<int> @ 149a19e40

void __thiscall
`FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::operator()<int>
          (void *this,int *param_1)

{
  undefined8 *puVar1;
  FPCGMetadataDomainID FVar2;
  UPCGMetadata *this_00;
  FName FVar3;
  FPCGMetadataDomain *this_01;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar4;
  IPCGAttributeAccessor *pIVar5;
  int local_res8;
  undefined4 uStackX_c;
  FPCGMetadataDomainID local_48;
  FName FStack_30;
  FPCGMetadataDomainID local_20;
  
  this_00 = (UPCGMetadata *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x328))();
  FVar2 = PCGMetadataDomainID::Default;
  local_res8 = 0;
  FVar3 = FPCGAttributePropertySelector::GetName
                    ((FPCGAttributePropertySelector *)(*(longlong *)this + 0x2e0));
  local_48._0_8_ = FVar2._0_8_;
  FVar3 = *(FName *)FVar3;
  FStack_30 = FVar2.DebugName;
  local_20.Flag = local_48.Flag;
  local_20._1_3_ = local_48._1_3_;
  local_20.CustomFlag = local_48.CustomFlag;
  local_20.DebugName = FStack_30;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_20);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<int>(this_01,FVar3,&local_res8,true,false);
  }
  TVar4 = PCGAttributeAccessorHelpers::CreateAccessor
                    ((UPCGData *)&local_res8,*(FPCGAttributePropertySelector **)((longlong)this + 8)
                     ,(bool)((char)*(undefined8 *)this + -0x20));
  pIVar5 = (IPCGAttributeAccessor *)(*(longlong *)this + 0x330);
  if (pIVar5 != TVar4.Ptr) {
    puVar1 = (undefined8 *)pIVar5->_padding_;
    pIVar5->_padding_ = (TVar4.Ptr)->_padding_;
    (TVar4.Ptr)->_padding_ = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  puVar1 = (undefined8 *)CONCAT44(uStackX_c,local_res8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

// operator()<float> @ 149a1b6e0

void __thiscall
`FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::operator()<float>
          (void *this,float *param_1)

{
  undefined8 *puVar1;
  FPCGMetadataDomainID FVar2;
  UPCGMetadata *this_00;
  FName FVar3;
  FPCGMetadataDomain *this_01;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar4;
  IPCGAttributeAccessor *pIVar5;
  float local_res8;
  undefined4 uStackX_c;
  FName FStack_40;
  FPCGMetadataDomainID local_30 [2];
  
  this_00 = (UPCGMetadata *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x328))();
  FVar2 = PCGMetadataDomainID::Default;
  local_res8 = 0.0;
  FVar3 = FPCGAttributePropertySelector::GetName
                    ((FPCGAttributePropertySelector *)(*(longlong *)this + 0x2e0));
  FVar3 = *(FName *)FVar3;
  FStack_40 = FVar2.DebugName;
  local_30[0]._0_8_ = FVar2._0_8_;
  local_30[0].DebugName = FStack_40;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,local_30);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<float>(this_01,FVar3,&local_res8,true,false);
  }
  TVar4 = PCGAttributeAccessorHelpers::CreateAccessor
                    ((UPCGData *)&local_res8,*(FPCGAttributePropertySelector **)((longlong)this + 8)
                     ,(bool)((char)*(undefined8 *)this + -0x20));
  pIVar5 = (IPCGAttributeAccessor *)(*(longlong *)this + 0x330);
  if (pIVar5 != TVar4.Ptr) {
    puVar1 = (undefined8 *)pIVar5->_padding_;
    pIVar5->_padding_ = (TVar4.Ptr)->_padding_;
    (TVar4.Ptr)->_padding_ = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  puVar1 = (undefined8 *)CONCAT44(uStackX_c,local_res8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

// operator()<double> @ 149a1d2d0

void __thiscall
`FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::operator()<double>
          (void *this,double *param_1)

{
  undefined8 *puVar1;
  FPCGMetadataDomainID FVar2;
  UPCGMetadata *this_00;
  FName FVar3;
  FPCGMetadataDomain *this_01;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar4;
  IPCGAttributeAccessor *pIVar5;
  undefined8 *local_res8;
  FName FStack_40;
  FPCGMetadataDomainID local_30 [2];
  
  this_00 = (UPCGMetadata *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x328))();
  FVar2 = PCGMetadataDomainID::Default;
  local_res8 = (undefined8 *)0x0;
  FVar3 = FPCGAttributePropertySelector::GetName
                    ((FPCGAttributePropertySelector *)(*(longlong *)this + 0x2e0));
  FVar3 = *(FName *)FVar3;
  FStack_40 = FVar2.DebugName;
  local_30[0]._0_8_ = FVar2._0_8_;
  local_30[0].DebugName = FStack_40;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,local_30);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<double>(this_01,FVar3,(double *)&local_res8,true,false);
  }
  TVar4 = PCGAttributeAccessorHelpers::CreateAccessor
                    ((UPCGData *)&local_res8,*(FPCGAttributePropertySelector **)((longlong)this + 8)
                     ,(bool)((char)*(undefined8 *)this + -0x20));
  pIVar5 = (IPCGAttributeAccessor *)(*(longlong *)this + 0x330);
  if (pIVar5 != TVar4.Ptr) {
    puVar1 = (undefined8 *)pIVar5->_padding_;
    pIVar5->_padding_ = (TVar4.Ptr)->_padding_;
    (TVar4.Ptr)->_padding_ = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return;
}

// operator()<UE::Math::TQuat<double>_> @ 149a1ed50

void __thiscall
`FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::
operator()<UE::Math::TQuat<double>_>(void *this,TQuat<double> *param_1)

{
  undefined8 *puVar1;
  FPCGMetadataDomainID FVar2;
  UPCGMetadata *this_00;
  FName FVar3;
  FPCGMetadataDomain *this_01;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar4;
  IPCGAttributeAccessor *pIVar5;
  undefined8 *local_res8;
  FPCGMetadataDomainID local_68;
  FName FStack_50;
  FPCGMetadataDomainID local_40;
  TQuat<double> local_28;
  
  this_00 = (UPCGMetadata *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x328))();
  FVar2 = PCGMetadataDomainID::Default;
  local_28.X = 0.0;
  local_28.Y = 0.0;
  local_28.Z = 0.0;
  local_28.W = 0.0;
  FVar3 = FPCGAttributePropertySelector::GetName
                    ((FPCGAttributePropertySelector *)(*(longlong *)this + 0x2e0));
  local_68._0_8_ = FVar2._0_8_;
  FVar3 = *(FName *)FVar3;
  FStack_50 = FVar2.DebugName;
  local_40.Flag = local_68.Flag;
  local_40._1_3_ = local_68._1_3_;
  local_40.CustomFlag = local_68.CustomFlag;
  local_40.DebugName = FStack_50;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_40);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<UE::Math::TQuat<double>_>
              (this_01,FVar3,&local_28,true,false);
  }
  TVar4 = PCGAttributeAccessorHelpers::CreateAccessor
                    ((UPCGData *)&local_res8,*(FPCGAttributePropertySelector **)((longlong)this + 8)
                     ,(bool)((char)*(undefined8 *)this + -0x20));
  pIVar5 = (IPCGAttributeAccessor *)(*(longlong *)this + 0x330);
  if (pIVar5 != TVar4.Ptr) {
    puVar1 = (undefined8 *)pIVar5->_padding_;
    pIVar5->_padding_ = (TVar4.Ptr)->_padding_;
    (TVar4.Ptr)->_padding_ = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return;
}

// operator()<UE::Math::TRotator<double>_> @ 149a20500

void __thiscall
`FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::
operator()<UE::Math::TRotator<double>_>(void *this,TRotator<double> *param_1)

{
  undefined8 *puVar1;
  FPCGMetadataDomainID FVar2;
  UPCGMetadata *this_00;
  FName FVar3;
  FPCGMetadataDomain *this_01;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar4;
  IPCGAttributeAccessor *pIVar5;
  undefined8 *local_res8;
  FPCGMetadataDomainID local_68;
  FName FStack_50;
  FPCGMetadataDomainID local_40;
  TRotator<double> local_28;
  
  this_00 = (UPCGMetadata *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x328))();
  FVar2 = PCGMetadataDomainID::Default;
  local_28.Pitch = 0.0;
  local_28.Yaw = 0.0;
  local_28.Roll = 0.0;
  FVar3 = FPCGAttributePropertySelector::GetName
                    ((FPCGAttributePropertySelector *)(*(longlong *)this + 0x2e0));
  local_68._0_8_ = FVar2._0_8_;
  FVar3 = *(FName *)FVar3;
  FStack_50 = FVar2.DebugName;
  local_40.Flag = local_68.Flag;
  local_40._1_3_ = local_68._1_3_;
  local_40.CustomFlag = local_68.CustomFlag;
  local_40.DebugName = FStack_50;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_40);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<UE::Math::TRotator<double>_>
              (this_01,FVar3,&local_28,true,false);
  }
  TVar4 = PCGAttributeAccessorHelpers::CreateAccessor
                    ((UPCGData *)&local_res8,*(FPCGAttributePropertySelector **)((longlong)this + 8)
                     ,(bool)((char)*(undefined8 *)this + -0x20));
  pIVar5 = (IPCGAttributeAccessor *)(*(longlong *)this + 0x330);
  if (pIVar5 != TVar4.Ptr) {
    puVar1 = (undefined8 *)pIVar5->_padding_;
    pIVar5->_padding_ = (TVar4.Ptr)->_padding_;
    (TVar4.Ptr)->_padding_ = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return;
}

// operator()<UE::Math::TTransform<double>_> @ 149a220f0

void __thiscall
`FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::
operator()<UE::Math::TTransform<double>_>(void *this,TTransform<double> *param_1)

{
  undefined8 *puVar1;
  FPCGMetadataDomainID FVar2;
  UPCGMetadata *this_00;
  FPCGMetadataDomain *this_01;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar3;
  IPCGAttributeAccessor *pIVar4;
  undefined1 local_b8 [32];
  FName local_98;
  FPCGMetadataDomainID local_88;
  TTransform<double> local_78;
  
  this_00 = (UPCGMetadata *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x328))();
  FVar2 = PCGMetadataDomainID::Default;
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
  local_88 = PCGMetadataDomainID::Default;
  local_b8._16_8_ =
       FPCGAttributePropertySelector::GetName
                 ((FPCGAttributePropertySelector *)(*(longlong *)this + 0x2e0));
  local_b8._16_8_ = *(undefined8 *)local_b8._16_8_;
  local_b8._24_8_ = FVar2._0_8_;
  local_98 = local_88.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain
                      (this_00,(FPCGMetadataDomainID *)(local_b8 + 0x18));
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<UE::Math::TTransform<double>_>
              (this_01,(FName)local_b8._16_8_,&local_78,true,false);
  }
  TVar3 = PCGAttributeAccessorHelpers::CreateAccessor
                    ((UPCGData *)local_b8,*(FPCGAttributePropertySelector **)((longlong)this + 8),
                     (bool)((char)*(undefined8 *)this + -0x20));
  pIVar4 = (IPCGAttributeAccessor *)(*(longlong *)this + 0x330);
  if (pIVar4 != TVar3.Ptr) {
    puVar1 = (undefined8 *)pIVar4->_padding_;
    pIVar4->_padding_ = (TVar3.Ptr)->_padding_;
    (TVar3.Ptr)->_padding_ = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if ((undefined8 *)local_b8._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_b8._0_8_)(local_b8._0_8_,1);
  }
  return;
}

// operator()<UE::Math::TVector2<double>_> @ 149a23f00

void __thiscall
`FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::
operator()<UE::Math::TVector2<double>_>(void *this,TVector2<double> *param_1)

{
  undefined8 *puVar1;
  FPCGMetadataDomainID FVar2;
  UPCGMetadata *this_00;
  FPCGMetadataDomain *this_01;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar3;
  IPCGAttributeAccessor *pIVar4;
  undefined8 *local_res8;
  FPCGMetadataDomainID local_58;
  FName FStack_40;
  TVector2<double>_u_0 local_38;
  FName local_28;
  FPCGMetadataDomainID local_20;
  
  this_00 = (UPCGMetadata *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x328))();
  FVar2 = PCGMetadataDomainID::Default;
  local_38._s_0.X = 0.0;
  local_38._s_0.Y = 0.0;
  local_28 = FPCGAttributePropertySelector::GetName
                       ((FPCGAttributePropertySelector *)(*(longlong *)this + 0x2e0));
  local_58._0_8_ = FVar2._0_8_;
  local_28 = *(FName *)local_28;
  FStack_40 = FVar2.DebugName;
  local_20.Flag = local_58.Flag;
  local_20._1_3_ = local_58._1_3_;
  local_20.CustomFlag = local_58.CustomFlag;
  local_20.DebugName = FStack_40;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_20);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<UE::Math::TVector2<double>_>
              (this_01,local_28,(TVector2<double> *)&local_38._s_0,true,false);
  }
  TVar3 = PCGAttributeAccessorHelpers::CreateAccessor
                    ((UPCGData *)&local_res8,*(FPCGAttributePropertySelector **)((longlong)this + 8)
                     ,(bool)((char)*(undefined8 *)this + -0x20));
  pIVar4 = (IPCGAttributeAccessor *)(*(longlong *)this + 0x330);
  if (pIVar4 != TVar3.Ptr) {
    puVar1 = (undefined8 *)pIVar4->_padding_;
    pIVar4->_padding_ = (TVar3.Ptr)->_padding_;
    (TVar3.Ptr)->_padding_ = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return;
}

// operator()<UE::Math::TVector4<double>_> @ 149a26170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::
operator()<UE::Math::TVector4<double>_>(void *this,TVector4<double> *param_1)

{
  undefined8 *puVar1;
  FPCGMetadataDomainID FVar2;
  UPCGMetadata *this_00;
  FName FVar3;
  FPCGMetadataDomain *this_01;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar4;
  IPCGAttributeAccessor *pIVar5;
  undefined8 *local_res8;
  FName FStack_60;
  FPCGMetadataDomainID local_50;
  TVector4<double>_u_0 local_38;
  
  this_00 = (UPCGMetadata *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x328))();
  FVar2 = PCGMetadataDomainID::Default;
  local_38._s_0.X = 0.0;
  local_38._s_0.Y = 0.0;
  local_38._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_38._s_0.W = _UNK_15061cbc8;
  FVar3 = FPCGAttributePropertySelector::GetName
                    ((FPCGAttributePropertySelector *)(*(longlong *)this + 0x2e0));
  FVar3 = *(FName *)FVar3;
  FStack_60 = FVar2.DebugName;
  local_50._0_8_ = FVar2._0_8_;
  local_50.DebugName = FStack_60;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_50);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<UE::Math::TVector4<double>_>
              (this_01,FVar3,(TVector4<double> *)&local_38._s_0,true,false);
  }
  TVar4 = PCGAttributeAccessorHelpers::CreateAccessor
                    ((UPCGData *)&local_res8,*(FPCGAttributePropertySelector **)((longlong)this + 8)
                     ,(bool)((char)*(undefined8 *)this + -0x20));
  pIVar5 = (IPCGAttributeAccessor *)(*(longlong *)this + 0x330);
  if (pIVar5 != TVar4.Ptr) {
    puVar1 = (undefined8 *)pIVar5->_padding_;
    pIVar5->_padding_ = (TVar4.Ptr)->_padding_;
    (TVar4.Ptr)->_padding_ = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return;
}

// operator()<UE::Math::TVector<double>_> @ 149a28350

void __thiscall
`FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::
operator()<UE::Math::TVector<double>_>(void *this,TVector<double> *param_1)

{
  undefined8 *puVar1;
  FPCGMetadataDomainID FVar2;
  UPCGMetadata *this_00;
  FName FVar3;
  FPCGMetadataDomain *this_01;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar4;
  IPCGAttributeAccessor *pIVar5;
  undefined8 *local_res8;
  FPCGMetadataDomainID local_68;
  FName FStack_50;
  FPCGMetadataDomainID local_40;
  TVector<double>_u_0 local_28;
  
  this_00 = (UPCGMetadata *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x328))();
  FVar2 = PCGMetadataDomainID::Default;
  local_28._s_0.X = 0.0;
  local_28._s_0.Y = 0.0;
  local_28._s_0.Z = 0.0;
  FVar3 = FPCGAttributePropertySelector::GetName
                    ((FPCGAttributePropertySelector *)(*(longlong *)this + 0x2e0));
  local_68._0_8_ = FVar2._0_8_;
  FVar3 = *(FName *)FVar3;
  FStack_50 = FVar2.DebugName;
  local_40.Flag = local_68.Flag;
  local_40._1_3_ = local_68._1_3_;
  local_40.CustomFlag = local_68.CustomFlag;
  local_40.DebugName = FStack_50;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_40);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<UE::Math::TVector<double>_>
              (this_01,FVar3,(TVector<double> *)&local_28._s_0,true,false);
  }
  TVar4 = PCGAttributeAccessorHelpers::CreateAccessor
                    ((UPCGData *)&local_res8,*(FPCGAttributePropertySelector **)((longlong)this + 8)
                     ,(bool)((char)*(undefined8 *)this + -0x20));
  pIVar5 = (IPCGAttributeAccessor *)(*(longlong *)this + 0x330);
  if (pIVar5 != TVar4.Ptr) {
    puVar1 = (undefined8 *)pIVar5->_padding_;
    pIVar5->_padding_ = (TVar4.Ptr)->_padding_;
    (TVar4.Ptr)->_padding_ = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return;
}

// operator()<FSoftClassPath> @ 149a29c30

void __thiscall
`FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::operator()<FSoftClassPath>
          (void *this,FSoftClassPath *param_1)

{
  undefined8 *puVar1;
  FPCGMetadataDomainID FVar2;
  UPCGMetadata *this_00;
  FName FVar3;
  FPCGMetadataDomain *this_01;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar4;
  void *pvVar5;
  IPCGAttributeAccessor *pIVar6;
  undefined8 *local_res8;
  FPCGMetadataDomainID local_68;
  FName FStack_50;
  FPCGMetadataDomainID local_40;
  undefined1 local_28 [16];
  void *local_18;
  undefined8 local_10;
  
  this_00 = (UPCGMetadata *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x328))();
  FVar2 = PCGMetadataDomainID::Default;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  FVar3 = FPCGAttributePropertySelector::GetName
                    ((FPCGAttributePropertySelector *)(*(longlong *)this + 0x2e0));
  local_68._0_8_ = FVar2._0_8_;
  FVar3 = *(FName *)FVar3;
  FStack_50 = FVar2.DebugName;
  local_40.Flag = local_68.Flag;
  local_40._1_3_ = local_68._1_3_;
  local_40.CustomFlag = local_68.CustomFlag;
  local_40.DebugName = FStack_50;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_40);
  pvVar5 = (void *)0x0;
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<FSoftClassPath>
              (this_01,FVar3,(FSoftClassPath *)local_28,true,false);
    pvVar5 = local_18;
  }
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TVar4 = PCGAttributeAccessorHelpers::CreateAccessor
                    ((UPCGData *)&local_res8,*(FPCGAttributePropertySelector **)((longlong)this + 8)
                     ,(bool)((char)*(undefined8 *)this + -0x20));
  pIVar6 = (IPCGAttributeAccessor *)(*(longlong *)this + 0x330);
  if (pIVar6 != TVar4.Ptr) {
    puVar1 = (undefined8 *)pIVar6->_padding_;
    pIVar6->_padding_ = (TVar4.Ptr)->_padding_;
    (TVar4.Ptr)->_padding_ = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return;
}

// operator()<FSoftObjectPath> @ 149a2b310

void __thiscall
`FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::operator()<FSoftObjectPath>
          (void *this,FSoftObjectPath *param_1)

{
  undefined8 *puVar1;
  FPCGMetadataDomainID FVar2;
  UPCGMetadata *this_00;
  FName FVar3;
  FPCGMetadataDomain *this_01;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar4;
  ForAnyElementType FVar5;
  IPCGAttributeAccessor *pIVar6;
  undefined8 *local_res8;
  FPCGMetadataDomainID local_68;
  FName FStack_50;
  FPCGMetadataDomainID local_40;
  FSoftObjectPath local_28;
  
  this_00 = (UPCGMetadata *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x328))();
  FVar2 = PCGMetadataDomainID::Default;
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FVar3 = FPCGAttributePropertySelector::GetName
                    ((FPCGAttributePropertySelector *)(*(longlong *)this + 0x2e0));
  local_68._0_8_ = FVar2._0_8_;
  FVar3 = *(FName *)FVar3;
  FStack_50 = FVar2.DebugName;
  local_40.Flag = local_68.Flag;
  local_40._1_3_ = local_68._1_3_;
  local_40.CustomFlag = local_68.CustomFlag;
  local_40.DebugName = FStack_50;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_40);
  FVar5.Data = (FScriptContainerElement *)0x0;
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<FSoftObjectPath>(this_01,FVar3,&local_28,true,false);
    FVar5.Data = local_28.SubPathString.Data.AllocatorInstance.Data;
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  TVar4 = PCGAttributeAccessorHelpers::CreateAccessor
                    ((UPCGData *)&local_res8,*(FPCGAttributePropertySelector **)((longlong)this + 8)
                     ,(bool)((char)*(undefined8 *)this + -0x20));
  pIVar6 = (IPCGAttributeAccessor *)(*(longlong *)this + 0x330);
  if (pIVar6 != TVar4.Ptr) {
    puVar1 = (undefined8 *)pIVar6->_padding_;
    pIVar6->_padding_ = (TVar4.Ptr)->_padding_;
    (TVar4.Ptr)->_padding_ = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return;
}

// operator()<FName> @ 149a2c900

void __thiscall
`FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::operator()<FName>
          (void *this,FName *param_1)

{
  undefined8 *puVar1;
  FPCGMetadataDomainID FVar2;
  UPCGMetadata *this_00;
  FName FVar3;
  FPCGMetadataDomain *this_01;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar4;
  IPCGAttributeAccessor *pIVar5;
  FName local_res8;
  FPCGMetadataDomainID local_48;
  FName FStack_30;
  FPCGMetadataDomainID local_20;
  
  this_00 = (UPCGMetadata *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x328))();
  FVar2 = PCGMetadataDomainID::Default;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FVar3 = FPCGAttributePropertySelector::GetName
                    ((FPCGAttributePropertySelector *)(*(longlong *)this + 0x2e0));
  local_48._0_8_ = FVar2._0_8_;
  FVar3 = *(FName *)FVar3;
  FStack_30 = FVar2.DebugName;
  local_20.Flag = local_48.Flag;
  local_20._1_3_ = local_48._1_3_;
  local_20.CustomFlag = local_48.CustomFlag;
  local_20.DebugName = FStack_30;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_20);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<FName>(this_01,FVar3,&local_res8,true,false);
  }
  TVar4 = PCGAttributeAccessorHelpers::CreateAccessor
                    ((UPCGData *)&local_res8,*(FPCGAttributePropertySelector **)((longlong)this + 8)
                     ,(bool)((char)*(undefined8 *)this + -0x20));
  pIVar5 = (IPCGAttributeAccessor *)(*(longlong *)this + 0x330);
  if (pIVar5 != TVar4.Ptr) {
    puVar1 = (undefined8 *)pIVar5->_padding_;
    pIVar5->_padding_ = (TVar4.Ptr)->_padding_;
    (TVar4.Ptr)->_padding_ = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if (local_res8 != (FName)0x0) {
    (*(code *)**(undefined8 **)local_res8)(local_res8,1);
  }
  return;
}

// operator()<FString> @ 149a2f790

void __thiscall
`FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::operator()<FString>
          (void *this,FString *param_1)

{
  undefined8 *puVar1;
  FPCGMetadataDomainID FVar2;
  UPCGMetadata *this_00;
  FPCGMetadataDomain *this_01;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar3;
  ForAnyElementType FVar4;
  IPCGAttributeAccessor *pIVar5;
  undefined8 *local_res8;
  FString local_58;
  FPCGMetadataDomainID local_48;
  FPCGMetadataDomainID local_38;
  FName local_28;
  FPCGMetadataDomainID local_20;
  
  this_00 = (UPCGMetadata *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x328))();
  local_48 = PCGMetadataDomainID::Default;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38 = PCGMetadataDomainID::Default;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_28 = FPCGAttributePropertySelector::GetName
                       ((FPCGAttributePropertySelector *)(*(longlong *)this + 0x2e0));
  FVar2 = local_48;
  local_28 = *(FName *)local_28;
  local_20.Flag = local_48.Flag;
  local_20._1_3_ = local_48._1_3_;
  local_20.CustomFlag = local_48.CustomFlag;
  local_20.DebugName = local_38.DebugName;
  local_48 = FVar2;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_20);
  FVar4.Data = (FScriptContainerElement *)0x0;
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<FString>(this_01,local_28,&local_58,true,false);
    FVar4.Data = local_58.Data.AllocatorInstance.Data;
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  TVar3 = PCGAttributeAccessorHelpers::CreateAccessor
                    ((UPCGData *)&local_res8,*(FPCGAttributePropertySelector **)((longlong)this + 8)
                     ,(bool)((char)*(undefined8 *)this + -0x20));
  pIVar5 = (IPCGAttributeAccessor *)(*(longlong *)this + 0x330);
  if (pIVar5 != TVar3.Ptr) {
    puVar1 = (undefined8 *)pIVar5->_padding_;
    pIVar5->_padding_ = (TVar3.Ptr)->_padding_;
    (TVar3.Ptr)->_padding_ = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return;
}

// operator()<__int64> @ 149a314c0

void __thiscall
`FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::operator()<__int64>
          (void *this,long64 *param_1)

{
  undefined8 *puVar1;
  FPCGMetadataDomainID FVar2;
  UPCGMetadata *this_00;
  FName FVar3;
  FPCGMetadataDomain *this_01;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar4;
  IPCGAttributeAccessor *pIVar5;
  undefined8 *local_res8;
  FPCGMetadataDomainID local_48;
  FName FStack_30;
  FPCGMetadataDomainID local_20;
  
  this_00 = (UPCGMetadata *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x328))();
  FVar2 = PCGMetadataDomainID::Default;
  local_res8 = (undefined8 *)0x0;
  FVar3 = FPCGAttributePropertySelector::GetName
                    ((FPCGAttributePropertySelector *)(*(longlong *)this + 0x2e0));
  local_48._0_8_ = FVar2._0_8_;
  FVar3 = *(FName *)FVar3;
  FStack_30 = FVar2.DebugName;
  local_20.Flag = local_48.Flag;
  local_20._1_3_ = local_48._1_3_;
  local_20.CustomFlag = local_48.CustomFlag;
  local_20.DebugName = FStack_30;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_20);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<__int64>(this_01,FVar3,(long64 *)&local_res8,true,false);
  }
  TVar4 = PCGAttributeAccessorHelpers::CreateAccessor
                    ((UPCGData *)&local_res8,*(FPCGAttributePropertySelector **)((longlong)this + 8)
                     ,(bool)((char)*(undefined8 *)this + -0x20));
  pIVar5 = (IPCGAttributeAccessor *)(*(longlong *)this + 0x330);
  if (pIVar5 != TVar4.Ptr) {
    puVar1 = (undefined8 *)pIVar5->_padding_;
    pIVar5->_padding_ = (TVar4.Ptr)->_padding_;
    (TVar4.Ptr)->_padding_ = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return;
}

// operator()<bool> @ 149a32850

void __thiscall
`FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::operator()<bool>
          (void *this,bool *param_1)

{
  undefined8 *puVar1;
  FPCGMetadataDomainID FVar2;
  UPCGMetadata *this_00;
  FName FVar3;
  FPCGMetadataDomain *this_01;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar4;
  IPCGAttributeAccessor *pIVar5;
  bool local_res8;
  undefined7 uStackX_9;
  FPCGMetadataDomainID local_48;
  FName FStack_30;
  FPCGMetadataDomainID local_20;
  
  this_00 = (UPCGMetadata *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x328))();
  FVar2 = PCGMetadataDomainID::Default;
  local_res8 = false;
  FVar3 = FPCGAttributePropertySelector::GetName
                    ((FPCGAttributePropertySelector *)(*(longlong *)this + 0x2e0));
  local_48._0_8_ = FVar2._0_8_;
  FVar3 = *(FName *)FVar3;
  FStack_30 = FVar2.DebugName;
  local_20.Flag = local_48.Flag;
  local_20._1_3_ = local_48._1_3_;
  local_20.CustomFlag = local_48.CustomFlag;
  local_20.DebugName = FStack_30;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_20);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<bool>(this_01,FVar3,&local_res8,true,false);
  }
  TVar4 = PCGAttributeAccessorHelpers::CreateAccessor
                    ((UPCGData *)&local_res8,*(FPCGAttributePropertySelector **)((longlong)this + 8)
                     ,(bool)((char)*(undefined8 *)this + -0x20));
  pIVar5 = (IPCGAttributeAccessor *)(*(longlong *)this + 0x330);
  if (pIVar5 != TVar4.Ptr) {
    puVar1 = (undefined8 *)pIVar5->_padding_;
    pIVar5->_padding_ = (TVar4.Ptr)->_padding_;
    (TVar4.Ptr)->_padding_ = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  puVar1 = (undefined8 *)CONCAT71(uStackX_9,local_res8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

// ExecuteInternal @ 149b05730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeNoiseElement::ExecuteInternal(FPCGAttributeNoiseElement *this,FPCGContext *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool *pbVar4;
  char cVar5;
  ushort uVar6;
  ushort uVar7;
  UPCGNode *this_00;
  undefined8 *puVar8;
  IPCGAttributeAccessor *pIVar9;
  FPCGTaggedData *pFVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  undefined1 uVar15;
  bool bVar16;
  EPCGPointProperties EVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  UClass *pUVar21;
  UPCGSettings *pUVar22;
  TObjectPtr<UPCGSettings>_u_0 TVar23;
  longlong lVar24;
  UPCGBasePointData *this_01;
  FPCGAttributePropertySelector *pFVar25;
  TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> TVar26;
  FObjectPtr_u_0 FVar27;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  TVar28;
  UPCGData *pUVar29;
  FPCGAttributePropertySelector *pFVar30;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar31;
  TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> TVar32;
  FString *pFVar33;
  FText *pFVar34;
  FTextFormat *pFVar35;
  ulonglong uVar36;
  TRefCountPtr<ITextData> TVar37;
  ulonglong uVar38;
  uint uVar39;
  FPCGTaggedData *pFVar40;
  bool bVar41;
  undefined1 auStackY_8c8 [32];
  <lambda_1> local_874 [4];
  uint local_870;
  TObjectPtr<UPCGSettings>_u_0 local_868;
  <lambda_1> local_860;
  <lambda_2> local_85f;
  <lambda_1> local_85e;
  <lambda_2> local_85d;
  <lambda_1> local_85c;
  <lambda_2> local_85b;
  <lambda_1> local_85a;
  <lambda_2> local_859;
  <lambda_1> local_858;
  <lambda_2> local_857;
  <lambda_1> local_856;
  <lambda_2> local_855;
  <lambda_1> local_854;
  <lambda_2> local_853;
  <lambda_1> local_852;
  <lambda_2> local_851;
  <lambda_1> local_850;
  <lambda_2> local_84f;
  <lambda_1> local_84e;
  <lambda_2> local_84d;
  <lambda_1> local_84c;
  <lambda_2> local_84b;
  <lambda_1> local_84a;
  <lambda_2> local_849;
  <lambda_1> local_848;
  <lambda_2> local_847;
  <lambda_1> local_846;
  <lambda_2> local_845;
  <lambda_1> local_844;
  <lambda_2> local_843 [11];
  FPCGContext *local_838;
  UPCGData *pUStack_830;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_828;
  <lambda_3> local_818;
  <lambda_3> local_814;
  <lambda_3> local_810;
  <lambda_3> local_80c;
  <lambda_3> local_808;
  <lambda_3> local_804;
  <lambda_3> local_800;
  <lambda_3> local_7fc;
  <lambda_3> local_7f8;
  <lambda_3> local_7f4;
  <lambda_3> local_7f0;
  <lambda_3> local_7ec;
  <lambda_3> local_7e8;
  <lambda_3> local_7e4;
  int local_7e0 [2];
  TObjectPtr<UPCGSettings>_u_0 local_7d8;
  FObjectPtr_u_0 local_7d0;
  float local_7c8;
  <lambda_3> local_7c4;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_7c0;
  FName local_7b0;
  undefined1 local_7a8 [16];
  undefined1 local_798 [24];
  long64 local_780;
  FPCGCrc local_778;
  TObjectPtr<UPCGMetadata>_u_0 local_770;
  TObjectPtr<UPCGMetadata>_u_0 local_768;
  TObjectPtr<UPCGMetadata>_u_0 local_760;
  undefined8 local_758;
  TObjectPtr<UPCGMetadata>_u_0 local_750;
  undefined8 local_748;
  undefined8 local_740;
  undefined8 local_738;
  TObjectPtr<UPCGMetadata>_u_0 local_730;
  undefined8 local_728;
  undefined8 local_720;
  undefined8 local_718;
  TObjectPtr<UPCGSettings>_u_0 local_710;
  int local_708;
  undefined1 local_704;
  FPCGContext *local_700;
  undefined4 local_6f8;
  int local_6f4;
  TObjectPtr<UPCGSettings>_u_0 local_6f0;
  int local_6e8;
  undefined1 local_6e4;
  FPCGContext *local_6e0;
  undefined4 local_6d8;
  int local_6d4;
  TObjectPtr<UPCGSettings>_u_0 local_6d0;
  int local_6c8;
  undefined1 local_6c4;
  FPCGContext *local_6c0;
  undefined4 local_6b8;
  int local_6b4;
  TObjectPtr<UPCGSettings>_u_0 local_6b0;
  int local_6a8;
  undefined1 local_6a4;
  FPCGContext *local_6a0;
  undefined4 local_698;
  int local_694;
  TObjectPtr<UPCGSettings>_u_0 local_690;
  int local_688;
  undefined1 local_684;
  FPCGContext *local_680;
  undefined4 local_678;
  int local_674;
  TObjectPtr<UPCGSettings>_u_0 local_670;
  int local_668;
  undefined1 local_664;
  FPCGContext *local_660;
  undefined4 local_658;
  int local_654;
  TObjectPtr<UPCGSettings>_u_0 local_650;
  int local_648;
  undefined1 local_644;
  FPCGContext *local_640;
  undefined4 local_638;
  int local_634;
  TObjectPtr<UPCGSettings>_u_0 local_630;
  int local_628;
  undefined1 local_624;
  FPCGContext *local_620;
  undefined4 local_618;
  int local_614;
  TObjectPtr<UPCGSettings>_u_0 local_610;
  int local_608;
  undefined1 local_604;
  FPCGContext *local_600;
  undefined4 local_5f8;
  int local_5f4;
  TObjectPtr<UPCGSettings>_u_0 local_5f0;
  int local_5e8;
  undefined1 local_5e4;
  FPCGContext *local_5e0;
  undefined4 local_5d8;
  int local_5d4;
  TObjectPtr<UPCGSettings>_u_0 local_5d0;
  int local_5c8;
  undefined1 local_5c4;
  FPCGContext *local_5c0;
  undefined4 local_5b8;
  int local_5b4;
  TObjectPtr<UPCGSettings>_u_0 local_5b0;
  int local_5a8;
  undefined1 local_5a4;
  FPCGContext *local_5a0;
  undefined4 local_598;
  int local_594;
  TObjectPtr<UPCGSettings>_u_0 local_590;
  int local_588;
  undefined1 local_584;
  FPCGContext *local_580;
  undefined4 local_578;
  int local_574;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  TObjectPtr<UPCGSettings>_u_0 local_550;
  int local_548;
  undefined1 local_544;
  FPCGContext *local_540;
  undefined4 local_538;
  int local_534;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  TObjectPtr<UPCGSettings>_u_0 local_510;
  int local_508;
  undefined1 local_504;
  FPCGContext *local_500;
  undefined4 local_4f8;
  int local_4f4;
  FText local_4f0;
  FPCGContext *local_4d8;
  UPCGData *pUStack_4d0;
  FText local_4c8;
  FTextFormat local_4b8;
  FFormatArgumentValue local_4a8;
  FString local_488;
  FText local_478;
  FString local_468;
  FString local_458;
  FText local_448;
  FText local_438;
  FString local_428;
  FString local_418;
  FText local_408;
  FText local_3f8;
  FString local_3e8;
  TVector2<double>_u_0 local_3d8;
  FString local_3c8;
  FText local_3b8;
  TVector<double>_u_0 local_3a8;
  TRotator<double> local_390;
  FText local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FText local_318;
  FText local_308;
  FText local_2f8;
  FText local_2e8;
  FString local_2d8;
  FString local_2c8;
  FText local_2b8;
  FText local_2a8;
  FString local_298;
  TVector4<double>_u_0 local_288;
  TQuat<double> local_268;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  TTransform<double> local_218;
  FTextFormat local_1b8;
  FTextFormat local_1a8;
  FTextFormat local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [48];
  int local_128;
  undefined1 local_118 [48];
  int local_e8;
  undefined1 local_d8 [48];
  int local_a8;
  FTextFormat local_98;
  TVector<double>_u_0 local_88;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_57;
  undefined2 local_53;
  undefined1 local_51;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  local_870 = 0;
  bVar41 = -1 < CpuChannel->Enabled;
  if (bVar41) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId212,"FPCGAttributeNoiseElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeNoise.cpp"
               ,0xd4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId212);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeNoise.cpp"
                          ,0xd7,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    uVar15 = (*pcVar11)();
    return (bool)uVar15;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar21 = UPCGAttributeNoiseSettings::StaticClass();
    bVar14 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar21);
    if (bVar14) {
      local_868 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar23 = local_868;
    }
    else {
      local_868.DebugPtr = (UPCGSettings *)0x0;
      TVar23.DebugPtr = local_868.DebugPtr;
    }
    goto LAB_149b05888;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar22 = UPCGNode::GetSettings(this_00), pUVar22 == (UPCGSettings *)0x0)) {
    pFVar40 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttributeNoiseSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,local_874[0]);
    if (pFVar40 != (FPCGTaggedData *)0x0) {
      local_7d8.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar40->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_7d8.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b05880;
        UE::GC::MarkAsReachable((UObject *)local_7d8.DebugPtr);
      }
      if (local_7d8.DebugPtr != (UPCGSettings *)0x0) {
        pUVar21 = UPCGAttributeNoiseSettings::StaticClass();
        bVar14 = FObjectPtr::IsA(&local_7d8.ObjectPtr,pUVar21);
        TVar23 = local_7d8;
        local_868 = local_7d8;
        if (bVar14) goto LAB_149b05888;
      }
    }
  }
  else {
    pUVar22 = UPCGNode::GetSettings(this_00);
    TVar23.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar22);
    if (TVar23.DebugPtr != (UPCGSettings *)0x0) {
      local_868.DebugPtr = TVar23.DebugPtr;
      pUVar21 = UPCGAttributeNoiseSettings::StaticClass();
      iVar18 = (int)pUVar21->_padding_;
      if ((iVar18 <= *(int *)((TVar23.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((TVar23.DebugPtr)->_padding_ + 0x30) + (longlong)iVar18 * 8) ==
          &pUVar21->_padding_)) goto LAB_149b05888;
    }
  }
LAB_149b05880:
  local_868.DebugPtr = (UPCGSettings *)0x0;
  TVar23.DebugPtr = local_868.DebugPtr;
LAB_149b05888:
  if ((TVar23.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeNoise.cpp"
                          ,0xda,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    uVar15 = (*pcVar11)();
    return (bool)uVar15;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_7c0,&PCGPinConstants::DefaultInputLabel);
  iVar18 = FPCGContext::GetSeed(param_1);
  dVar13 = _UNK_15061cbc8;
  dVar12 = ___xmm_3ff00000000000000000000000000000;
  uVar39 = (uint)param_1[1]._padding_;
  if ((int)uVar39 < local_7c0.ArrayNum) {
    do {
      uVar19 = 0;
      if ((int)uVar39 < local_7c0.ArrayNum) {
        uVar19 = ~uVar39 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        uVar15 = (*pcVar11)();
        return (bool)uVar15;
      }
      pFVar40 = (FPCGTaggedData *)(local_7c0.AllocatorInstance.Data + (longlong)(int)uVar39 * 0x78);
      bVar14 = -1 < CpuChannel->Enabled;
      local_798._8_8_ = pFVar40;
      if (bVar14) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId231,"FPCGAttributeNoiseElement::InputLoop",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeNoise.cpp"
                   ,0xe7);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId231);
      }
      if (*(char *)((longlong)&param_1[1]._padding_ + 4) != '\0') {
LAB_149b06ad7:
        if ((*(char *)((longlong)TVar23.DebugPtr[1].CacheLock.CriticalSection.Opaque3 + 5) == '\0')
           && ((param_1[1].AsyncState.NumAvailableTasks != 3 ||
               (EVar17 = FPCGAttributePropertySelector::GetPointProperty
                                   ((FPCGAttributePropertySelector *)&param_1[1].AsyncState),
               EVar17 != Density)))) {
          uVar15 = 0;
        }
        else {
          uVar15 = 1;
        }
        switch(*(undefined2 *)
                (*(longlong *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8 + 10)) {
        case 0:
          local_814.NumIterations =
               (**(code **)(**(longlong **)
                              &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20 + 0x10)
               )();
          local_698 = 0x40;
          local_6b0 = TVar23;
          local_6a8 = iVar18;
          local_6a4 = uVar15;
          local_6a0 = param_1;
          local_694 = local_814.NumIterations;
          bVar16 = FPCGAsync::
                   AsyncProcessingRangeEx<__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<float>_::__l2::<lambda_1>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<float>_::__l2::<lambda_4>,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<float>_::__l2::<lambda_2>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<float>_::__l2::<lambda_3>_&>
                             (&param_1->AsyncState,local_814.NumIterations,&local_85e,
                              (<lambda_4> *)&local_6b0.ObjectPtr,&local_85f,&local_814,true,0x40,
                              true);
          break;
        case 1:
          local_810.NumIterations =
               (**(code **)(**(longlong **)
                              &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20 + 0x10)
               )();
          local_678 = 0x40;
          local_690 = TVar23;
          local_688 = iVar18;
          local_684 = uVar15;
          local_680 = param_1;
          local_674 = local_810.NumIterations;
          bVar16 = FPCGAsync::
                   AsyncProcessingRangeEx<__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<double>_::__l2::<lambda_1>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<double>_::__l2::<lambda_4>,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<double>_::__l2::<lambda_2>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<double>_::__l2::<lambda_3>_&>
                             (&param_1->AsyncState,local_810.NumIterations,&local_85c,
                              (<lambda_4> *)&local_690.ObjectPtr,&local_85d,&local_810,true,0x40,
                              true);
          break;
        case 2:
          local_7c4.NumIterations =
               (**(code **)(**(longlong **)
                              &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20 + 0x10)
               )();
          local_6d8 = 0x40;
          local_6f0 = TVar23;
          local_6e8 = iVar18;
          local_6e4 = uVar15;
          local_6e0 = param_1;
          local_6d4 = local_7c4.NumIterations;
          bVar16 = FPCGAsync::
                   AsyncProcessingRangeEx<__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<int>_::__l2::<lambda_1>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<int>_::__l2::<lambda_4>,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<int>_::__l2::<lambda_2>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<int>_::__l2::<lambda_3>_&>
                             (&param_1->AsyncState,local_7c4.NumIterations,&local_844,
                              (<lambda_4> *)&local_6f0.ObjectPtr,&local_845,&local_7c4,true,0x40,
                              true);
          break;
        case 3:
          local_818.NumIterations =
               (**(code **)(**(longlong **)
                              &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20 + 0x10)
               )();
          local_6b8 = 0x40;
          local_6d0 = TVar23;
          local_6c8 = iVar18;
          local_6c4 = uVar15;
          local_6c0 = param_1;
          local_6b4 = local_818.NumIterations;
          bVar16 = FPCGAsync::
                   AsyncProcessingRangeEx<__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<__int64>_::__l2::<lambda_1>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<__int64>_::__l2::<lambda_4>,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<__int64>_::__l2::<lambda_2>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<__int64>_::__l2::<lambda_3>_&>
                             (&param_1->AsyncState,local_818.NumIterations,&local_860,
                              (<lambda_4> *)&local_6d0.ObjectPtr,local_843,&local_818,true,0x40,true
                             );
          break;
        case 4:
          local_188 = 0;
          uStack_180 = 0;
          local_80c.NumIterations =
               (**(code **)(**(longlong **)
                              &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20 + 0x10)
               )();
          local_658 = 0x40;
          local_670 = TVar23;
          local_668 = iVar18;
          local_664 = uVar15;
          local_660 = param_1;
          local_654 = local_80c.NumIterations;
          bVar16 = FPCGAsync::
                   AsyncProcessingRangeEx<__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TVector2<double>_>_::__l2::<lambda_1>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TVector2<double>_>_::__l2::<lambda_4>,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TVector2<double>_>_::__l2::<lambda_2>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TVector2<double>_>_::__l2::<lambda_3>_&>
                             (&param_1->AsyncState,local_80c.NumIterations,&local_85a,
                              (<lambda_4> *)&local_670.ObjectPtr,&local_85b,&local_80c,true,0x40,
                              true);
          break;
        case 5:
          local_238 = 0;
          local_248 = 0;
          uStack_240 = 0;
          local_808.NumIterations =
               (**(code **)(**(longlong **)
                              &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20 + 0x10)
               )();
          local_638 = 0x40;
          local_650 = TVar23;
          local_648 = iVar18;
          local_644 = uVar15;
          local_640 = param_1;
          local_634 = local_808.NumIterations;
          bVar16 = FPCGAsync::
                   AsyncProcessingRangeEx<__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TVector<double>_>_::__l2::<lambda_1>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TVector<double>_>_::__l2::<lambda_4>,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TVector<double>_>_::__l2::<lambda_2>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TVector<double>_>_::__l2::<lambda_3>_&>
                             (&param_1->AsyncState,local_808.NumIterations,&local_858,
                              (<lambda_4> *)&local_650.ObjectPtr,&local_859,&local_808,true,0x40,
                              true);
          break;
        case 6:
          local_804.NumIterations =
               (**(code **)(**(longlong **)
                              &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20 + 0x10)
               )();
          local_618 = 0x40;
          local_630 = TVar23;
          local_628 = iVar18;
          local_624 = uVar15;
          local_620 = param_1;
          local_614 = local_804.NumIterations;
          bVar16 = FPCGAsync::
                   AsyncProcessingRangeEx<__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TVector4<double>_>_::__l2::<lambda_1>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TVector4<double>_>_::__l2::<lambda_4>,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TVector4<double>_>_::__l2::<lambda_2>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TVector4<double>_>_::__l2::<lambda_3>_&>
                             (&param_1->AsyncState,local_804.NumIterations,&local_856,
                              (<lambda_4> *)&local_630.ObjectPtr,&local_857,&local_804,true,0x40,
                              true);
          break;
        case 7:
          local_178 = 0;
          uStack_170 = 0;
          local_168 = 0;
          uStack_160 = 0;
          local_800.NumIterations =
               (**(code **)(**(longlong **)
                              &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20 + 0x10)
               )();
          local_5f8 = 0x40;
          local_610 = TVar23;
          local_608 = iVar18;
          local_604 = uVar15;
          local_600 = param_1;
          local_5f4 = local_800.NumIterations;
          bVar16 = FPCGAsync::
                   AsyncProcessingRangeEx<__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TQuat<double>_>_::__l2::<lambda_1>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TQuat<double>_>_::__l2::<lambda_4>,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TQuat<double>_>_::__l2::<lambda_2>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TQuat<double>_>_::__l2::<lambda_3>_&>
                             (&param_1->AsyncState,local_800.NumIterations,&local_854,
                              (<lambda_4> *)&local_610.ObjectPtr,&local_855,&local_800,true,0x40,
                              true);
          break;
        case 8:
          local_7fc.NumIterations =
               (**(code **)(**(longlong **)
                              &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20 + 0x10)
               )();
          local_6f8 = 0x40;
          local_710 = TVar23;
          local_708 = iVar18;
          local_704 = uVar15;
          local_700 = param_1;
          local_6f4 = local_7fc.NumIterations;
          bVar16 = FPCGAsync::
                   AsyncProcessingRangeEx<__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TTransform<double>_>_::__l2::<lambda_1>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TTransform<double>_>_::__l2::<lambda_4>,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TTransform<double>_>_::__l2::<lambda_2>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TTransform<double>_>_::__l2::<lambda_3>_&>
                             (&param_1->AsyncState,local_7fc.NumIterations,&local_852,
                              (<lambda_4> *)&local_710.ObjectPtr,&local_853,&local_7fc,true,0x40,
                              true);
          break;
        case 9:
          local_7f8.NumIterations =
               (**(code **)(**(longlong **)
                              &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20 + 0x10)
               )();
          local_5d8 = 0x40;
          local_5f0 = TVar23;
          local_5e8 = iVar18;
          local_5e4 = uVar15;
          local_5e0 = param_1;
          local_5d4 = local_7f8.NumIterations;
          bVar16 = FPCGAsync::
                   AsyncProcessingRangeEx<__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<FString>_::__l2::<lambda_1>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<FString>_::__l2::<lambda_4>,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<FString>_::__l2::<lambda_2>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<FString>_::__l2::<lambda_3>_&>
                             (&param_1->AsyncState,local_7f8.NumIterations,&local_850,
                              (<lambda_4> *)&local_5f0.ObjectPtr,&local_851,&local_7f8,true,0x40,
                              true);
          break;
        case 10:
          local_7f4.NumIterations =
               (**(code **)(**(longlong **)
                              &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20 + 0x10)
               )();
          local_5b8 = 0x40;
          local_5d0 = TVar23;
          local_5c8 = iVar18;
          local_5c4 = uVar15;
          local_5c0 = param_1;
          local_5b4 = local_7f4.NumIterations;
          bVar16 = FPCGAsync::
                   AsyncProcessingRangeEx<__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<bool>_::__l2::<lambda_1>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<bool>_::__l2::<lambda_4>,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<bool>_::__l2::<lambda_2>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<bool>_::__l2::<lambda_3>_&>
                             (&param_1->AsyncState,local_7f4.NumIterations,&local_84e,
                              (<lambda_4> *)&local_5d0.ObjectPtr,&local_84f,&local_7f4,true,0x40,
                              true);
          break;
        case 0xb:
          local_220 = 0;
          local_230 = 0;
          uStack_228 = 0;
          local_7f0.NumIterations =
               (**(code **)(**(longlong **)
                              &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20 + 0x10)
               )();
          local_598 = 0x40;
          local_5b0 = TVar23;
          local_5a8 = iVar18;
          local_5a4 = uVar15;
          local_5a0 = param_1;
          local_594 = local_7f0.NumIterations;
          bVar16 = FPCGAsync::
                   AsyncProcessingRangeEx<__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TRotator<double>_>_::__l2::<lambda_1>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TRotator<double>_>_::__l2::<lambda_4>,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TRotator<double>_>_::__l2::<lambda_2>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<UE::Math::TRotator<double>_>_::__l2::<lambda_3>_&>
                             (&param_1->AsyncState,local_7f0.NumIterations,&local_84c,
                              (<lambda_4> *)&local_5b0.ObjectPtr,&local_84d,&local_7f0,true,0x40,
                              true);
          break;
        case 0xc:
          local_7ec.NumIterations =
               (**(code **)(**(longlong **)
                              &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20 + 0x10)
               )();
          local_578 = 0x40;
          local_590 = TVar23;
          local_588 = iVar18;
          local_584 = uVar15;
          local_580 = param_1;
          local_574 = local_7ec.NumIterations;
          bVar16 = FPCGAsync::
                   AsyncProcessingRangeEx<__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<FName>_::__l2::<lambda_1>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<FName>_::__l2::<lambda_4>,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<FName>_::__l2::<lambda_2>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<FName>_::__l2::<lambda_3>_&>
                             (&param_1->AsyncState,local_7ec.NumIterations,&local_84a,
                              (<lambda_4> *)&local_590.ObjectPtr,&local_84b,&local_7ec,true,0x40,
                              true);
          break;
        case 0xd:
          local_570 = 0;
          local_568 = 0;
          local_560 = 0;
          local_558 = 0;
          local_7e8.NumIterations =
               (**(code **)(**(longlong **)
                              &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20 + 0x10)
               )();
          local_538 = 0x40;
          local_550 = TVar23;
          local_548 = iVar18;
          local_544 = uVar15;
          local_540 = param_1;
          local_534 = local_7e8.NumIterations;
          bVar16 = FPCGAsync::
                   AsyncProcessingRangeEx<__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<FSoftObjectPath>_::__l2::<lambda_1>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<FSoftObjectPath>_::__l2::<lambda_4>,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<FSoftObjectPath>_::__l2::<lambda_2>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<FSoftObjectPath>_::__l2::<lambda_3>_&>
                             (&param_1->AsyncState,local_7e8.NumIterations,&local_848,
                              (<lambda_4> *)&local_550.ObjectPtr,&local_849,&local_7e8,true,0x40,
                              true);
          break;
        case 0xe:
          local_530 = 0;
          local_528 = 0;
          local_520 = 0;
          local_518 = 0;
          local_7e4.NumIterations =
               (**(code **)(**(longlong **)
                              &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20 + 0x10)
               )();
          local_4f8 = 0x40;
          local_510 = TVar23;
          local_508 = iVar18;
          local_504 = uVar15;
          local_500 = param_1;
          local_4f4 = local_7e4.NumIterations;
          bVar16 = FPCGAsync::
                   AsyncProcessingRangeEx<__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<FSoftClassPath>_::__l2::<lambda_1>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<FSoftClassPath>_::__l2::<lambda_4>,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<FSoftClassPath>_::__l2::<lambda_2>_&,__FPCGAttributeNoiseElement::ExecuteInternal_::__l18::<lambda_2>::operator()<FSoftClassPath>_::__l2::<lambda_3>_&>
                             (&param_1->AsyncState,local_7e4.NumIterations,&local_846,
                              (<lambda_4> *)&local_510.ObjectPtr,&local_847,&local_7e4,true,0x40,
                              true);
          break;
        default:
          goto switchD_149b06b22_default;
        }
        if (bVar16 != false) {
          *(int *)&param_1[1]._padding_ = (int)param_1[1]._padding_ + 1;
          *(undefined1 *)((longlong)&param_1[1]._padding_ + 4) = 0;
          bVar16 = FPCGAsyncState::ShouldStop(&param_1->AsyncState);
          if (!bVar16) {
            if (bVar14) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            goto LAB_149b05b82;
          }
        }
switchD_149b06b22_default:
        if (bVar14) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        bVar14 = false;
        goto LAB_149b05b9b;
      }
      this_01 = (UPCGBasePointData *)(pFVar40->Data).Data.field0_0x0.DebugPtr;
      if ((this_01 == (UPCGBasePointData *)0x0) ||
         (lVar24 = (**(code **)(this_01->_padding_ + 800))(this_01), lVar24 == 0)) {
        if (1 < (byte)LogPCG._0_1_) {
          lVar24 = param_1[1]._padding_;
          pFVar34 = FText::AsLocalizable_Advanced_LocText
                              (&local_408,L"PCGAttributeNoiseSettings",L"InputUnsuportedData",
                               L"Data {0} is neither spatial nor an attribute set, unsupported.");
          pFVar35 = FTextFormat::FTextFormat(&local_198,pFVar34,Default);
          local_4a8.Type = Int;
          local_4a8.TextValue.field0_0x0.TypedValue.TextData.Reference =
               (TRefCountPtr<ITextData>)(ITextData *)0x0;
          local_4a8.TextValue.field0_0x0.TypedValue.Flags = 0;
          local_828.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_828.ArrayNum = 1;
          local_4a8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)(int)lVar24;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_828.AllocatorInstance,1,&local_828.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_828.AllocatorInstance.Data,&local_4a8,1);
          local_4b8.TextFormatData.Object = (pFVar35->TextFormatData).Object;
          local_4b8.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar35->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_4b8.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_4b8.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_4b8.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_4f0,&local_4b8,&local_828);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_828.AllocatorInstance.Data,local_828.ArrayNum);
          if ((FFormatArgumentValue *)local_828.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_828.AllocatorInstance.Data);
          }
          if (local_4a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_4a8.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar35->TextFormatData).SharedReferenceCount.ReferenceController);
          FText::ToString(&local_4f0);
          uVar39 = local_870;
          FPCGContext::GetTaskName(param_1,&local_418);
          FPCGContext::GetExecutionSourceName(param_1,&local_428);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_428.Data.AllocatorInstance.Data);
          }
          local_870 = uVar39 & 0xfffffffc;
          if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_418.Data.AllocatorInstance.Data);
          }
          if (local_4f0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_4f0.TextData.Reference + 0x10))();
          }
          if (local_408.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_408.TextData.Reference + 0x10))();
          }
        }
      }
      else {
        pUVar21 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
        iVar20 = (int)pUVar21->_padding_;
        if (((iVar20 <= *(int *)(this_01->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar20 * 8) ==
             &pUVar21->_padding_)) && ((char)TVar23.DebugPtr[2]._padding_ != '\0')) {
          local_58 = 0;
          local_57 = 0;
          local_53 = 0;
          local_51 = 0;
          local_88._s_0.X = 0.0;
          local_88._s_0.Y = 0.0;
          local_88._s_0.Z = 0.0;
          uStack_70 = 0;
          local_68 = 0;
          uStack_60 = 0;
          this_01 = UPCGSpatialData::ToBasePointData
                              ((UPCGSpatialData *)this_01,param_1,(TBox<double> *)&local_88._s_0);
        }
        pFVar25 = (FPCGAttributePropertySelector *)
                  FPCGAttributePropertyInputSelector::CopyAndFixLast
                            ((FPCGAttributePropertyInputSelector *)(TVar23.DebugPtr + 1),
                             (FPCGAttributePropertyInputSelector *)local_158,(UPCGData *)this_01);
        pFVar30 = (FPCGAttributePropertySelector *)&param_1[1].InputData;
        FPCGAttributePropertySelector::operator=(pFVar30,pFVar25);
        DestructItems<FString,int>((FString *)local_158._40_8_,local_128);
        if ((FString *)local_158._40_8_ != (FString *)0x0) {
          FMemory::Free((void *)local_158._40_8_);
        }
        TVar26 = PCGAttributeAccessorHelpers::CreateConstAccessor
                           ((UPCGData *)&local_768.ObjectPtr,
                            (FPCGAttributePropertySelector *)this_01,SUB81(pFVar30,0));
        puVar2 = &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8;
        if ((IPCGAttributeAccessor *)puVar2 != TVar26.Ptr) {
          puVar8 = *(undefined8 **)puVar2;
          *(longlong *)puVar2 = (TVar26.Ptr)->_padding_;
          (TVar26.Ptr)->_padding_ = 0;
          if (puVar8 != (undefined8 *)0x0) {
            (**(code **)*puVar8)(puVar8,1);
          }
        }
        if (local_768.DebugPtr != (UPCGMetadata *)0x0) {
          (**(code **)(local_768.DebugPtr)->_padding_)(local_768.DebugPtr,1);
        }
        if (*(longlong *)puVar2 == 0) {
LAB_149b05b68:
          PCGLog::Metadata::LogFailToCreateAccessorError(pFVar30,param_1);
        }
        else {
          uVar6 = *(ushort *)(*(longlong *)puVar2 + 10);
          if ((0xfe < uVar6) || ((7 < uVar6 && (uVar6 != 0xb)))) {
            if (1 < (byte)LogPCG._0_1_) {
              pFVar33 = FPCGAttributePropertySelector::ToString(pFVar30,&local_488,false);
              FText::FromString(&local_478,pFVar33);
              if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_488.Data.AllocatorInstance.Data);
              }
              pFVar34 = FText::AsLocalizable_Advanced_LocText
                                  (&local_438,L"PCGAttributeNoiseSettings",
                                   L"AttributeIsNotANumericalType",
                                   L"Attribute/Property \'{0}\' is not a numerical type, we can\'t apply noise to it."
                                  );
              pFVar35 = FTextFormat::FTextFormat(&local_98,pFVar34,Default);
              pFVar34 = FText::Format<FText>(&local_448,pFVar35,&local_478);
              FText::ToString(pFVar34);
              uVar39 = local_870;
              FPCGContext::GetTaskName(param_1,&local_458);
              FPCGContext::GetExecutionSourceName(param_1,&local_468);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_468.Data.AllocatorInstance.Data);
              }
              local_870 = uVar39 & 0xfffffff3;
              if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_458.Data.AllocatorInstance.Data);
              }
              if (local_448.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_448.TextData.Reference + 0x10))();
              }
              if (local_438.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
              }
            }
            goto LAB_149b05b6d;
          }
          local_7d0.Handle = (UObject *)(pFVar40->Data).Data.field0_0x0.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b05c5c:
            if ((UPCGData *)local_7d0.Handle == (UPCGData *)0x0) goto LAB_149b05c7c;
            pUVar21 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
            bVar16 = FObjectPtr::IsA((FObjectPtr *)&local_7d0,pUVar21);
            FVar27 = local_7d0;
            if (!bVar16) goto LAB_149b05c7c;
          }
          else {
            if ((UPCGData *)local_7d0.Handle != (UPCGData *)0x0) {
              UE::GC::MarkAsReachable(local_7d0.Handle);
              goto LAB_149b05c5c;
            }
LAB_149b05c7c:
            FVar27.Handle = (UObject *)0x0;
          }
          cVar5 = *(char *)((longlong)local_868.DebugPtr[1].CacheLock.CriticalSection.Opaque3 + 6);
          if ((cVar5 != '\0') || ((UPCGData *)FVar27.Handle != (UPCGData *)0x0)) {
            pFVar30 = (FPCGAttributePropertySelector *)
                      &param_1[1].OutputData.bCancelExecutionOnEmpty;
            if (cVar5 == '\0') {
              FPCGAttributePropertySelector::SetPointProperty(pFVar30,Seed,true);
            }
            else {
              pFVar25 = (FPCGAttributePropertySelector *)
                        FPCGAttributePropertyInputSelector::CopyAndFixLast
                                  ((FPCGAttributePropertyInputSelector *)
                                   (local_868.DebugPtr[1].CacheLock.CriticalSection.Opaque3 + 1),
                                   (FPCGAttributePropertyInputSelector *)local_118,
                                   (UPCGData *)this_01);
              FPCGAttributePropertySelector::operator=(pFVar30,pFVar25);
              DestructItems<FString,int>((FString *)local_118._40_8_,local_e8);
              if ((FString *)local_118._40_8_ != (FString *)0x0) {
                FMemory::Free((void *)local_118._40_8_);
              }
            }
            TVar26 = PCGAttributeAccessorHelpers::CreateConstAccessor
                               ((UPCGData *)local_7a8,(FPCGAttributePropertySelector *)this_01,
                                SUB81(pFVar30,0));
            puVar2 = &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x10;
            if ((IPCGAttributeAccessor *)puVar2 != TVar26.Ptr) {
              puVar8 = *(undefined8 **)puVar2;
              *(longlong *)puVar2 = (TVar26.Ptr)->_padding_;
              (TVar26.Ptr)->_padding_ = 0;
              if (puVar8 != (undefined8 *)0x0) {
                (**(code **)*puVar8)(puVar8,1);
              }
            }
            if ((undefined8 *)local_7a8._0_8_ != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)local_7a8._0_8_)(local_7a8._0_8_,1);
            }
            pIVar9 = *(IPCGAttributeAccessor **)puVar2;
            if (pIVar9 == (IPCGAttributeAccessor *)0x0) goto LAB_149b05b68;
            uVar6 = pIVar9->UnderlyingType;
            if ((0xe < uVar6) ||
               ((PCG::Private::BroadcastableTypes.Values[uVar6][2] == false &&
                (PCG::Private::ConstructibleTypes.Values[2][(uint)uVar6] == false)))) {
              pFVar33 = FPCGAttributePropertySelector::ToString(pFVar30,&local_368,false);
              FText::FromString(&local_4c8,pFVar33);
              if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_368.Data.AllocatorInstance.Data);
              }
              PCGLog::Metadata::LogFailToGetAttributeError<int>(&local_4c8,pIVar9,param_1);
              if (local_4c8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_4c8.TextData.Reference + 0x10))();
              }
              goto LAB_149b05b6d;
            }
            TVar28 = PCGAttributeAccessorHelpers::CreateConstKeys
                               ((UPCGData *)(local_7a8 + 8),(FPCGAttributePropertySelector *)this_01
                               );
            puVar2 = &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x28;
            if ((IPCGAttributeAccessorKeys *)puVar2 != TVar28.Ptr) {
              puVar8 = *(undefined8 **)puVar2;
              *(longlong *)puVar2 = (TVar28.Ptr)->_padding_;
              (TVar28.Ptr)->_padding_ = 0;
              if (puVar8 != (undefined8 *)0x0) {
                (**(code **)*puVar8)(puVar8,1);
              }
            }
            if ((undefined8 *)local_7a8._8_8_ != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)local_7a8._8_8_)(local_7a8._8_8_,1);
            }
            if ((*(longlong *)puVar2 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Context->CustomSeedKeys",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeNoise.cpp"
                                    ,300,L""), bVar16)) {
              pcVar11 = (code *)swi(3);
              uVar15 = (*pcVar11)();
              return (bool)uVar15;
            }
          }
          pFVar10 = (FPCGTaggedData *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
          if (((pFVar10 <= pFVar40) &&
              (pFVar40 < pFVar10 + (param_1->OutputData).TaggedData.ArrayMax)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar11 = (code *)swi(3);
            uVar15 = (*pcVar11)();
            return (bool)uVar15;
          }
          iVar20 = (param_1->OutputData).TaggedData.ArrayNum;
          piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
          if (iVar20 == *piVar1) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
          }
          (param_1->OutputData).TaggedData.ArrayNum = iVar20 + 1;
          pFVar40 = FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                               (longlong)iVar20 * 0x78),pFVar40);
          pUVar29 = (UPCGData *)(**(code **)(this_01->_padding_ + 0x310))(this_01,param_1,1);
          FPCGDataPtrWrapper::operator=(&pFVar40->Data,pUVar29);
          TVar28 = PCGAttributeAccessorHelpers::CreateConstKeys
                             ((UPCGData *)local_798,(FPCGAttributePropertySelector *)this_01);
          puVar2 = &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20;
          if ((IPCGAttributeAccessorKeys *)puVar2 != TVar28.Ptr) {
            puVar8 = *(undefined8 **)puVar2;
            *(longlong *)puVar2 = (TVar28.Ptr)->_padding_;
            (TVar28.Ptr)->_padding_ = 0;
            if (puVar8 != (undefined8 *)0x0) {
              (**(code **)*puVar8)(puVar8,1);
            }
          }
          if ((undefined8 *)local_798._0_8_ != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)local_798._0_8_)(local_798._0_8_,1);
          }
          if (((*(longlong *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8 == 0) ||
              (*(longlong *)puVar2 == 0)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Context->InputAccessor && Context->InputKeys",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeNoise.cpp"
                                  ,0x137,L""), bVar16)) {
            pcVar11 = (code *)swi(3);
            uVar15 = (*pcVar11)();
            return (bool)uVar15;
          }
          pFVar30 = (FPCGAttributePropertySelector *)
                    FPCGAttributePropertyOutputSelector::CopyAndFixSource
                              ((FPCGAttributePropertyOutputSelector *)
                               &local_868.DebugPtr[1]._padding_,
                               (FPCGAttributePropertyOutputSelector *)local_d8,
                               (FPCGAttributePropertyInputSelector *)&param_1[1].InputData,
                               (((FPCGDataPtrWrapper *)local_798._8_8_)->Data).field0_0x0.DebugPtr);
          FPCGAttributePropertySelector::operator=
                    ((FPCGAttributePropertySelector *)&param_1[1].AsyncState,pFVar30);
          DestructItems<FString,int>((FString *)local_d8._40_8_,local_a8);
          if ((FString *)local_d8._40_8_ != (FString *)0x0) {
            FMemory::Free((void *)local_d8._40_8_);
          }
          TVar31 = PCGAttributeAccessorHelpers::CreateAccessor
                             ((UPCGData *)(local_798 + 0x10),
                              (FPCGAttributePropertySelector *)pUVar29,(bool)((char)param_1 + -0x20)
                             );
          puVar2 = &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x18;
          if ((IPCGAttributeAccessor *)puVar2 != TVar31.Ptr) {
            puVar8 = *(undefined8 **)puVar2;
            *(longlong *)puVar2 = (TVar31.Ptr)->_padding_;
            (TVar31.Ptr)->_padding_ = 0;
            if (puVar8 != (undefined8 *)0x0) {
              (**(code **)*puVar8)(puVar8,1);
            }
          }
          if ((undefined8 *)local_798._16_8_ != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)local_798._16_8_)(local_798._16_8_,1);
          }
          if ((*(longlong *)puVar2 == 0) &&
             (bVar16 = FPCGAttributePropertySelector::IsBasicAttribute
                                 ((FPCGAttributePropertySelector *)&param_1[1].AsyncState), bVar16))
          {
            local_838 = param_1;
            pUStack_830 = pUVar29;
            local_4d8 = param_1;
            pUStack_4d0 = pUVar29;
            switch(*(undefined2 *)
                    (*(longlong *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8 + 10
                    )) {
            case 0:
              local_7c8 = 0.0;
              `FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::operator()<float>
                        (&local_838,&local_7c8);
              break;
            case 1:
              local_778.Value = 0;
              local_778.bValid = false;
              local_778._5_3_ = 0;
              `FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::operator()<double>
                        (&local_838,(double *)&local_778);
              break;
            case 2:
              local_7e0[0] = 0;
              `FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::operator()<int>
                        (&local_838,local_7e0);
              break;
            case 3:
              local_780 = 0;
              `FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::operator()<__int64>
                        (&local_838,&local_780);
              break;
            case 4:
              local_3d8._s_0.X = 0.0;
              local_3d8._s_0.Y = 0.0;
              `FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::
              operator()<UE::Math::TVector2<double>_>
                        (&local_838,(TVector2<double> *)&local_3d8._s_0);
              break;
            case 5:
              local_3a8._s_0.X = 0.0;
              local_3a8._s_0.Y = 0.0;
              local_3a8._s_0.Z = 0.0;
              `FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::
              operator()<UE::Math::TVector<double>_>(&local_838,(TVector<double> *)&local_3a8._s_0);
              break;
            case 6:
              local_288._s_0.Z = dVar12;
              local_288._s_0.W = dVar13;
              local_288._s_0.X = 0.0;
              local_288._s_0.Y = 0.0;
              `FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::
              operator()<UE::Math::TVector4<double>_>
                        (&local_838,(TVector4<double> *)&local_288._s_0);
              break;
            case 7:
              local_268.X = 0.0;
              local_268.Y = 0.0;
              local_268.Z = 0.0;
              local_268.W = 0.0;
              `FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::
              operator()<UE::Math::TQuat<double>_>(&local_838,&local_268);
              break;
            case 8:
              local_218.Rotation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              local_218.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_218.Rotation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              local_218.Rotation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              local_218.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_218.Rotation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
              local_218.Translation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
              local_218.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_218.Translation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
              local_218.Translation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
              local_218.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_218.Translation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
              local_218.Scale3D.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
              local_218.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_218.Scale3D.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              local_218.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
              local_218.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_218.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
              `FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::
              operator()<UE::Math::TTransform<double>_>(&local_838,&local_218);
              break;
            case 9:
              local_760.DebugPtr = (UPCGMetadata *)0x0;
              local_758._0_1_ = false;
              local_758._1_1_ = (atomic<unsigned_char>)0x0;
              local_758._2_2_ = 0;
              local_758._4_4_ = (atomic<int>)0x0;
              `FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::operator()<FString>
                        (&local_838,(FString *)&local_760.ObjectPtr);
              break;
            case 10:
              local_874[0] = (<lambda_1>)0x0;
              `FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::operator()<bool>
                        (&local_838,(bool *)local_874);
              break;
            case 0xb:
              local_390.Pitch = 0.0;
              local_390.Yaw = 0.0;
              local_390.Roll = 0.0;
              `FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::
              operator()<UE::Math::TRotator<double>_>(&local_838,&local_390);
              break;
            case 0xc:
              local_7b0.ComparisonIndex.Value = 0;
              local_7b0.Number = 0;
              `FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::operator()<FName>
                        (&local_838,&local_7b0);
              break;
            case 0xd:
              local_750.DebugPtr = (UPCGMetadata *)0x0;
              local_748 = 0;
              local_740 = 0;
              local_738 = 0;
              `FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::
              operator()<FSoftObjectPath>(&local_838,(FSoftObjectPath *)&local_750.ObjectPtr);
              break;
            case 0xe:
              local_730.DebugPtr = (UPCGMetadata *)0x0;
              local_728 = 0;
              local_720 = 0;
              local_718 = 0;
              `FPCGAttributeNoiseElement::ExecuteInternal'::__l103::<lambda_1>::
              operator()<FSoftClassPath>(&local_838,(FSoftClassPath *)&local_730.ObjectPtr);
            }
          }
          TVar32 = PCGAttributeAccessorHelpers::CreateKeys
                             ((UPCGData *)&local_770.ObjectPtr,
                              (FPCGAttributePropertySelector *)pUVar29);
          puVar3 = &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x30;
          if ((IPCGAttributeAccessorKeys *)puVar3 != TVar32.Ptr) {
            puVar8 = *(undefined8 **)puVar3;
            *(longlong *)puVar3 = (TVar32.Ptr)->_padding_;
            (TVar32.Ptr)->_padding_ = 0;
            if (puVar8 != (undefined8 *)0x0) {
              (**(code **)*puVar8)(puVar8,1);
            }
          }
          if (local_770.DebugPtr != (UPCGMetadata *)0x0) {
            (**(code **)(local_770.DebugPtr)->_padding_)(local_770.DebugPtr,1);
          }
          if ((*(longlong *)puVar2 == 0) || (*(longlong *)puVar3 == 0)) {
            if (1 < (byte)LogPCG._0_1_) {
              pFVar33 = FPCGAttributePropertySelector::ToString
                                  ((FPCGAttributePropertySelector *)&param_1[1].AsyncState,
                                   &local_298,false);
              FText::FromString(&local_3f8,pFVar33);
              if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_298.Data.AllocatorInstance.Data);
              }
              pFVar34 = FText::AsLocalizable_Advanced_LocText
                                  (&local_378,L"PCGAttributeNoiseSettings",L"OutputTargetInvalid",
                                   L"Failed to find/create Attribute/Property \'{0}\'.");
              pFVar35 = FTextFormat::FTextFormat(&local_1a8,pFVar34,Default);
              pFVar34 = FText::Format<FText>(&local_3b8,pFVar35,&local_3f8);
              FText::ToString(pFVar34);
              uVar39 = local_870;
              FPCGContext::GetTaskName(param_1,&local_3c8);
              FPCGContext::GetExecutionSourceName(param_1,&local_3e8);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
              }
              local_870 = uVar39 & 0xffffffcf;
              if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
              }
              TVar37.Reference = local_378.TextData.Reference;
              if (local_3b8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_3b8.TextData.Reference + 0x10))();
                TVar37.Reference = local_378.TextData.Reference;
              }
LAB_149b06580:
              if (TVar37.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*TVar37.Reference + 0x10))();
              }
            }
          }
          else {
            uVar6 = *(ushort *)(*(longlong *)puVar2 + 10);
            uVar38 = (ulonglong)uVar6;
            uVar7 = *(ushort *)
                     (*(longlong *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8 +
                     10);
            uVar36 = (ulonglong)uVar7;
            if ((uVar7 < 0xf) && (uVar6 < 0xf)) {
              pbVar4 = PCG::Private::BroadcastableTypes.Values[uVar36] + uVar38;
              uVar38 = (ulonglong)(uint)uVar6;
              uVar36 = (ulonglong)(uint)uVar7;
              if (*pbVar4 == false) goto LAB_149b06345;
LAB_149b06357:
              *(undefined1 *)((longlong)&param_1[1]._padding_ + 4) = 1;
              TVar23 = local_868;
              goto LAB_149b06ad7;
            }
            if ((uVar6 < 0xf) && (uVar7 < 0xf)) {
LAB_149b06345:
              if (PCG::Private::ConstructibleTypes.Values[uVar38][uVar36] != false)
              goto LAB_149b06357;
            }
            if (1 < (byte)LogPCG._0_1_) {
              pFVar33 = PCG::Private::GetTypeName(&local_358,uVar6);
              FText::FromString(&local_318,pFVar33);
              if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_358.Data.AllocatorInstance.Data);
              }
              pFVar33 = FPCGAttributePropertySelector::ToString
                                  ((FPCGAttributePropertySelector *)&param_1[1].AsyncState,
                                   &local_348,false);
              FText::FromString(&local_308,pFVar33);
              if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_348.Data.AllocatorInstance.Data);
              }
              pFVar33 = PCG::Private::GetTypeName
                                  (&local_338,
                                   *(ushort *)
                                    (*(longlong *)
                                      &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8
                                    + 10));
              FText::FromString(&local_2f8,pFVar33);
              if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_338.Data.AllocatorInstance.Data);
              }
              pFVar33 = FPCGAttributePropertySelector::ToString
                                  ((FPCGAttributePropertySelector *)&param_1[1].InputData,&local_328
                                   ,false);
              FText::FromString(&local_2e8,pFVar33);
              if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_328.Data.AllocatorInstance.Data);
              }
              pFVar34 = FText::AsLocalizable_Advanced_LocText
                                  (&local_2a8,L"PCGAttributeNoiseSettings",L"CantBroadcast",
                                   L"Cannot convert Attribute \'{0}\' ({1}) into Attribute \'{2}\' ({3})."
                                  );
              pFVar35 = FTextFormat::FTextFormat(&local_1b8,pFVar34,Default);
              pFVar34 = FText::Format<FText,FText,FText,FText>
                                  (&local_2b8,pFVar35,&local_2e8,&local_2f8,&local_308,&local_318);
              FText::ToString(pFVar34);
              uVar39 = local_870;
              FPCGContext::GetTaskName(param_1,&local_2c8);
              FPCGContext::GetExecutionSourceName(param_1,&local_2d8);
              UE::Logging::Private::BasicLog<2>
                        ((FStaticBasicLogRecord *)&PTR_u___s____s____s_151f4f7f0,
                         (FLogCategoryBase *)&LogPCG);
              if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
              }
              local_870 = uVar39 & 0xffffff3f;
              if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
              }
              TVar37.Reference = local_2a8.TextData.Reference;
              if (local_2b8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
                TVar37.Reference = local_2a8.TextData.Reference;
              }
              goto LAB_149b06580;
            }
          }
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&(param_1->OutputData).TaggedData,
                     (param_1->OutputData).TaggedData.ArrayNum + -1,Default);
        }
      }
LAB_149b05b6d:
      *(int *)&param_1[1]._padding_ = (int)param_1[1]._padding_ + 1;
      if (bVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
LAB_149b05b82:
      uVar39 = (uint)param_1[1]._padding_;
      TVar23 = local_868;
    } while ((int)uVar39 < local_7c0.ArrayNum);
  }
  bVar14 = true;
LAB_149b05b9b:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_7c0.AllocatorInstance.Data,local_7c0.ArrayNum);
  if ((FPCGTaggedData *)local_7c0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_7c0.AllocatorInstance.Data);
  }
  if (bVar41) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar14;
}

// ExecutionLoopMode @ 149b11ad0

EPCGElementExecutionLoopMode __thiscall
FPCGAttributeNoiseElement::ExecutionLoopMode(FPCGAttributeNoiseElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b2d150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGAttributeNoiseElement::SupportsBasePointDataInputs
          (FPCGAttributeNoiseElement *this,FPCGContext *param_1)

{
  return true;
}

