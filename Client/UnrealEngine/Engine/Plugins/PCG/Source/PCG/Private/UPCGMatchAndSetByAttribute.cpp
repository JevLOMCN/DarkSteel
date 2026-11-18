// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 25

// StaticClass @ 149ce71c0

UClass * __cdecl UPCGMatchAndSetByAttribute::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMatchAndSetByAttribute.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMatchAndSetByAttribute",
               &Z_Registration_Info_UClass_UPCGMatchAndSetByAttribute.InnerSingleton,
               StaticRegisterNativesUPCGMatchAndSetByAttribute,0x50,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGMatchAndSetByAttribute>,
               InternalVTableHelperCtorCaller<UPCGMatchAndSetByAttribute>,local_res8,
               UPCGMatchAndSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMatchAndSetByAttribute.InnerSingleton;
}

// operator()<int> @ 149ceab40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::operator()<int>
          (void *this,int param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  TTransform<double> local_68;
  
  local_88 = *(undefined8 *)this;
  local_a0 = *(longlong **)((longlong)this + 0x28);
  local_a8 = *(undefined8 *)((longlong)this + 0x20);
  local_80 = *(undefined8 *)((longlong)this + 8);
  local_78 = *(undefined8 *)((longlong)this + 0x10);
  local_b8 = &local_88;
  local_b0 = *(undefined8 *)((longlong)this + 0x18);
  local_98 = *(undefined8 *)((longlong)this + 0x30);
  local_70 = local_a8;
  switch(*(undefined2 *)(*local_a0 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<int>'::__l2::<lambda_2>::operator()<float>(&local_b8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<int>'::__l2::<lambda_2>::operator()<double>(&local_b8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<int>'::__l2::<lambda_2>::operator()<int>(&local_b8,0);
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<int>'::__l2::<lambda_2>::operator()<__int64>(&local_b8,0);
    return bVar1;
  case 4:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<int>'::__l2::<lambda_2>::operator()<UE::Math::TVector2<double>_>
                      (&local_b8,(TVector2<double> *)&local_d8._s_0);
    return bVar1;
  case 5:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<int>'::__l2::<lambda_2>::operator()<UE::Math::TVector<double>_>
                      (&local_b8,(TVector<double> *)&local_d8._s_0);
    return bVar1;
  case 6:
    local_f8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_f8._s_0.W = _UNK_15061cbc8;
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<int>'::__l2::<lambda_2>::operator()<UE::Math::TVector4<double>_>
                      (&local_b8,(TVector4<double> *)&local_f8._s_0);
    return bVar1;
  case 7:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<int>'::__l2::<lambda_2>::operator()<UE::Math::TQuat<double>_>
                      (&local_b8,(TQuat<double> *)&local_f8._s_0);
    return bVar1;
  case 8:
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_68.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_68.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_68.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_68.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<int>'::__l2::<lambda_2>::operator()<UE::Math::TTransform<double>_>
                      (&local_b8,&local_68);
    return bVar1;
  case 9:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<int>'::__l2::<lambda_2>::operator()<FString>
                      (&local_b8,(FString *)&local_d8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<int>'::__l2::<lambda_2>::operator()<bool>(&local_b8,false);
    return bVar1;
  case 0xb:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<int>'::__l2::<lambda_2>::operator()<UE::Math::TRotator<double>_>
                      (&local_b8,(TRotator<double> *)&local_d8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<int>'::__l2::<lambda_2>::operator()<FName>(&local_b8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<int>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_b8,(FSoftObjectPath *)&local_f8._s_0);
    return bVar1;
  case 0xe:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<int>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_b8,(FSoftClassPath *)&local_f8._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<float> @ 149cee5c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::operator()<float>
          (void *this,float param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  TTransform<double> local_68;
  
  local_88 = *(undefined8 *)this;
  local_a0 = *(longlong **)((longlong)this + 0x28);
  local_a8 = *(undefined8 *)((longlong)this + 0x20);
  local_80 = *(undefined8 *)((longlong)this + 8);
  local_78 = *(undefined8 *)((longlong)this + 0x10);
  local_b8 = &local_88;
  local_b0 = *(undefined8 *)((longlong)this + 0x18);
  local_98 = *(undefined8 *)((longlong)this + 0x30);
  local_70 = local_a8;
  switch(*(undefined2 *)(*local_a0 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<float>'::__l2::<lambda_2>::operator()<float>(&local_b8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<float>'::__l2::<lambda_2>::operator()<double>(&local_b8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<float>'::__l2::<lambda_2>::operator()<int>(&local_b8,0);
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<float>'::__l2::<lambda_2>::operator()<__int64>(&local_b8,0);
    return bVar1;
  case 4:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<float>'::__l2::<lambda_2>::operator()<UE::Math::TVector2<double>_>
                      (&local_b8,(TVector2<double> *)&local_d8._s_0);
    return bVar1;
  case 5:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<float>'::__l2::<lambda_2>::operator()<UE::Math::TVector<double>_>
                      (&local_b8,(TVector<double> *)&local_d8._s_0);
    return bVar1;
  case 6:
    local_f8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_f8._s_0.W = _UNK_15061cbc8;
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<float>'::__l2::<lambda_2>::operator()<UE::Math::TVector4<double>_>
                      (&local_b8,(TVector4<double> *)&local_f8._s_0);
    return bVar1;
  case 7:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<float>'::__l2::<lambda_2>::operator()<UE::Math::TQuat<double>_>
                      (&local_b8,(TQuat<double> *)&local_f8._s_0);
    return bVar1;
  case 8:
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_68.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_68.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_68.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_68.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<float>'::__l2::<lambda_2>::operator()<UE::Math::TTransform<double>_>
                      (&local_b8,&local_68);
    return bVar1;
  case 9:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<float>'::__l2::<lambda_2>::operator()<FString>
                      (&local_b8,(FString *)&local_d8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<float>'::__l2::<lambda_2>::operator()<bool>(&local_b8,false);
    return bVar1;
  case 0xb:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<float>'::__l2::<lambda_2>::operator()<UE::Math::TRotator<double>_>
                      (&local_b8,(TRotator<double> *)&local_d8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<float>'::__l2::<lambda_2>::operator()<FName>(&local_b8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<float>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_b8,(FSoftObjectPath *)&local_f8._s_0);
    return bVar1;
  case 0xe:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<float>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_b8,(FSoftClassPath *)&local_f8._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<double> @ 149cf2040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::operator()<double>
          (void *this,double param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  TTransform<double> local_68;
  
  local_88 = *(undefined8 *)this;
  local_a0 = *(longlong **)((longlong)this + 0x28);
  local_a8 = *(undefined8 *)((longlong)this + 0x20);
  local_80 = *(undefined8 *)((longlong)this + 8);
  local_78 = *(undefined8 *)((longlong)this + 0x10);
  local_b8 = &local_88;
  local_b0 = *(undefined8 *)((longlong)this + 0x18);
  local_98 = *(undefined8 *)((longlong)this + 0x30);
  local_70 = local_a8;
  switch(*(undefined2 *)(*local_a0 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<double>'::__l2::<lambda_2>::operator()<float>(&local_b8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<double>'::__l2::<lambda_2>::operator()<double>(&local_b8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<double>'::__l2::<lambda_2>::operator()<int>(&local_b8,0);
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<double>'::__l2::<lambda_2>::operator()<__int64>(&local_b8,0);
    return bVar1;
  case 4:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<double>'::__l2::<lambda_2>::operator()<UE::Math::TVector2<double>_>
                      (&local_b8,(TVector2<double> *)&local_d8._s_0);
    return bVar1;
  case 5:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<double>'::__l2::<lambda_2>::operator()<UE::Math::TVector<double>_>
                      (&local_b8,(TVector<double> *)&local_d8._s_0);
    return bVar1;
  case 6:
    local_f8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_f8._s_0.W = _UNK_15061cbc8;
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<double>'::__l2::<lambda_2>::operator()<UE::Math::TVector4<double>_>
                      (&local_b8,(TVector4<double> *)&local_f8._s_0);
    return bVar1;
  case 7:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<double>'::__l2::<lambda_2>::operator()<UE::Math::TQuat<double>_>
                      (&local_b8,(TQuat<double> *)&local_f8._s_0);
    return bVar1;
  case 8:
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_68.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_68.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_68.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_68.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<double>'::__l2::<lambda_2>::operator()<UE::Math::TTransform<double>_>
                      (&local_b8,&local_68);
    return bVar1;
  case 9:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<double>'::__l2::<lambda_2>::operator()<FString>
                      (&local_b8,(FString *)&local_d8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<double>'::__l2::<lambda_2>::operator()<bool>(&local_b8,false);
    return bVar1;
  case 0xb:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<double>'::__l2::<lambda_2>::operator()<UE::Math::TRotator<double>_>
                      (&local_b8,(TRotator<double> *)&local_d8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<double>'::__l2::<lambda_2>::operator()<FName>(&local_b8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<double>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_b8,(FSoftObjectPath *)&local_f8._s_0);
    return bVar1;
  case 0xe:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<double>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_b8,(FSoftClassPath *)&local_f8._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<UE::Math::TQuat<double>_> @ 149cf5cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
operator()<UE::Math::TQuat<double>_>(void *this,TQuat<double> *param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  TTransform<double> local_68;
  
  local_88 = *(undefined8 *)this;
  local_a0 = *(longlong **)((longlong)this + 0x28);
  local_a8 = *(undefined8 *)((longlong)this + 0x20);
  local_80 = *(undefined8 *)((longlong)this + 8);
  local_78 = *(undefined8 *)((longlong)this + 0x10);
  local_b8 = &local_88;
  local_b0 = *(undefined8 *)((longlong)this + 0x18);
  local_98 = *(undefined8 *)((longlong)this + 0x30);
  local_70 = local_a8;
  switch(*(undefined2 *)(*local_a0 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::operator()<float>
                      (&local_b8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::operator()<double>
                      (&local_b8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::operator()<int>(&local_b8,0);
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::operator()<__int64>
                      (&local_b8,0);
    return bVar1;
  case 4:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector2<double>_>(&local_b8,(TVector2<double> *)&local_d8._s_0);
    return bVar1;
  case 5:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector<double>_>(&local_b8,(TVector<double> *)&local_d8._s_0);
    return bVar1;
  case 6:
    local_f8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_f8._s_0.W = _UNK_15061cbc8;
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector4<double>_>(&local_b8,(TVector4<double> *)&local_f8._s_0);
    return bVar1;
  case 7:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TQuat<double>_>(&local_b8,(TQuat<double> *)&local_f8._s_0);
    return bVar1;
  case 8:
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_68.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_68.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_68.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_68.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TTransform<double>_>(&local_b8,&local_68);
    return bVar1;
  case 9:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::operator()<FString>
                      (&local_b8,(FString *)&local_d8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::operator()<bool>
                      (&local_b8,false);
    return bVar1;
  case 0xb:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TRotator<double>_>(&local_b8,(TRotator<double> *)&local_d8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::operator()<FName>
                      (&local_b8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_b8,(FSoftObjectPath *)&local_f8._s_0);
    return bVar1;
  case 0xe:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_b8,(FSoftClassPath *)&local_f8._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<UE::Math::TRotator<double>_> @ 149cf99d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
operator()<UE::Math::TRotator<double>_>(void *this,TRotator<double> *param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  TTransform<double> local_68;
  
  local_88 = *(undefined8 *)this;
  local_a0 = *(longlong **)((longlong)this + 0x28);
  local_a8 = *(undefined8 *)((longlong)this + 0x20);
  local_80 = *(undefined8 *)((longlong)this + 8);
  local_78 = *(undefined8 *)((longlong)this + 0x10);
  local_b8 = &local_88;
  local_b0 = *(undefined8 *)((longlong)this + 0x18);
  local_98 = *(undefined8 *)((longlong)this + 0x30);
  local_70 = local_a8;
  switch(*(undefined2 *)(*local_a0 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::operator()<float>
                      (&local_b8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::operator()<double>
                      (&local_b8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::operator()<int>(&local_b8,0)
    ;
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::operator()<__int64>
                      (&local_b8,0);
    return bVar1;
  case 4:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector2<double>_>(&local_b8,(TVector2<double> *)&local_d8._s_0);
    return bVar1;
  case 5:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector<double>_>(&local_b8,(TVector<double> *)&local_d8._s_0);
    return bVar1;
  case 6:
    local_f8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_f8._s_0.W = _UNK_15061cbc8;
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector4<double>_>(&local_b8,(TVector4<double> *)&local_f8._s_0);
    return bVar1;
  case 7:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TQuat<double>_>(&local_b8,(TQuat<double> *)&local_f8._s_0);
    return bVar1;
  case 8:
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_68.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_68.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_68.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_68.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TTransform<double>_>(&local_b8,&local_68);
    return bVar1;
  case 9:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::operator()<FString>
                      (&local_b8,(FString *)&local_d8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::operator()<bool>
                      (&local_b8,false);
    return bVar1;
  case 0xb:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TRotator<double>_>(&local_b8,(TRotator<double> *)&local_d8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::operator()<FName>
                      (&local_b8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_b8,(FSoftObjectPath *)&local_f8._s_0);
    return bVar1;
  case 0xe:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_b8,(FSoftClassPath *)&local_f8._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<UE::Math::TTransform<double>_> @ 149cfdeb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
operator()<UE::Math::TTransform<double>_>(void *this,TTransform<double> *param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  TTransform<double> local_68;
  
  local_88 = *(undefined8 *)this;
  local_a0 = *(longlong **)((longlong)this + 0x28);
  local_a8 = *(undefined8 *)((longlong)this + 0x20);
  local_80 = *(undefined8 *)((longlong)this + 8);
  local_78 = *(undefined8 *)((longlong)this + 0x10);
  local_b8 = &local_88;
  local_b0 = *(undefined8 *)((longlong)this + 0x18);
  local_98 = *(undefined8 *)((longlong)this + 0x30);
  local_70 = local_a8;
  switch(*(undefined2 *)(*local_a0 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::operator()<float>
                      (&local_b8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::operator()<double>
                      (&local_b8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::operator()<int>
                      (&local_b8,0);
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::operator()<__int64>
                      (&local_b8,0);
    return bVar1;
  case 4:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector2<double>_>(&local_b8,(TVector2<double> *)&local_d8._s_0);
    return bVar1;
  case 5:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector<double>_>(&local_b8,(TVector<double> *)&local_d8._s_0);
    return bVar1;
  case 6:
    local_f8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_f8._s_0.W = _UNK_15061cbc8;
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector4<double>_>(&local_b8,(TVector4<double> *)&local_f8._s_0);
    return bVar1;
  case 7:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TQuat<double>_>(&local_b8,(TQuat<double> *)&local_f8._s_0);
    return bVar1;
  case 8:
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_68.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_68.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_68.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_68.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TTransform<double>_>(&local_b8,&local_68);
    return bVar1;
  case 9:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::operator()<FString>
                      (&local_b8,(FString *)&local_d8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::operator()<bool>
                      (&local_b8,false);
    return bVar1;
  case 0xb:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TRotator<double>_>(&local_b8,(TRotator<double> *)&local_d8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::operator()<FName>
                      (&local_b8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::
            operator()<FSoftObjectPath>(&local_b8,(FSoftObjectPath *)&local_f8._s_0);
    return bVar1;
  case 0xe:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_b8,(FSoftClassPath *)&local_f8._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<UE::Math::TVector2<double>_> @ 149d01ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
operator()<UE::Math::TVector2<double>_>(void *this,TVector2<double> *param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  TTransform<double> local_68;
  
  local_88 = *(undefined8 *)this;
  local_a0 = *(longlong **)((longlong)this + 0x28);
  local_a8 = *(undefined8 *)((longlong)this + 0x20);
  local_80 = *(undefined8 *)((longlong)this + 8);
  local_78 = *(undefined8 *)((longlong)this + 0x10);
  local_b8 = &local_88;
  local_b0 = *(undefined8 *)((longlong)this + 0x18);
  local_98 = *(undefined8 *)((longlong)this + 0x30);
  local_70 = local_a8;
  switch(*(undefined2 *)(*local_a0 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::operator()<float>
                      (&local_b8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::operator()<double>
                      (&local_b8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::operator()<int>(&local_b8,0)
    ;
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::operator()<__int64>
                      (&local_b8,0);
    return bVar1;
  case 4:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector2<double>_>(&local_b8,(TVector2<double> *)&local_d8._s_0);
    return bVar1;
  case 5:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector<double>_>(&local_b8,(TVector<double> *)&local_d8._s_0);
    return bVar1;
  case 6:
    local_f8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_f8._s_0.W = _UNK_15061cbc8;
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector4<double>_>(&local_b8,(TVector4<double> *)&local_f8._s_0);
    return bVar1;
  case 7:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TQuat<double>_>(&local_b8,(TQuat<double> *)&local_f8._s_0);
    return bVar1;
  case 8:
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_68.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_68.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_68.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_68.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TTransform<double>_>(&local_b8,&local_68);
    return bVar1;
  case 9:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::operator()<FString>
                      (&local_b8,(FString *)&local_d8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::operator()<bool>
                      (&local_b8,false);
    return bVar1;
  case 0xb:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TRotator<double>_>(&local_b8,(TRotator<double> *)&local_d8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::operator()<FName>
                      (&local_b8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_b8,(FSoftObjectPath *)&local_f8._s_0);
    return bVar1;
  case 0xe:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_b8,(FSoftClassPath *)&local_f8._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<UE::Math::TVector4<double>_> @ 149d05880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
operator()<UE::Math::TVector4<double>_>(void *this,TVector4<double> *param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  TTransform<double> local_68;
  
  local_88 = *(undefined8 *)this;
  local_a0 = *(longlong **)((longlong)this + 0x28);
  local_a8 = *(undefined8 *)((longlong)this + 0x20);
  local_80 = *(undefined8 *)((longlong)this + 8);
  local_78 = *(undefined8 *)((longlong)this + 0x10);
  local_b8 = &local_88;
  local_b0 = *(undefined8 *)((longlong)this + 0x18);
  local_98 = *(undefined8 *)((longlong)this + 0x30);
  local_70 = local_a8;
  switch(*(undefined2 *)(*local_a0 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::operator()<float>
                      (&local_b8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::operator()<double>
                      (&local_b8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::operator()<int>(&local_b8,0)
    ;
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::operator()<__int64>
                      (&local_b8,0);
    return bVar1;
  case 4:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector2<double>_>(&local_b8,(TVector2<double> *)&local_d8._s_0);
    return bVar1;
  case 5:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector<double>_>(&local_b8,(TVector<double> *)&local_d8._s_0);
    return bVar1;
  case 6:
    local_f8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_f8._s_0.W = _UNK_15061cbc8;
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector4<double>_>(&local_b8,(TVector4<double> *)&local_f8._s_0);
    return bVar1;
  case 7:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TQuat<double>_>(&local_b8,(TQuat<double> *)&local_f8._s_0);
    return bVar1;
  case 8:
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_68.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_68.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_68.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_68.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TTransform<double>_>(&local_b8,&local_68);
    return bVar1;
  case 9:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::operator()<FString>
                      (&local_b8,(FString *)&local_d8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::operator()<bool>
                      (&local_b8,false);
    return bVar1;
  case 0xb:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TRotator<double>_>(&local_b8,(TRotator<double> *)&local_d8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::operator()<FName>
                      (&local_b8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_b8,(FSoftObjectPath *)&local_f8._s_0);
    return bVar1;
  case 0xe:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_b8,(FSoftClassPath *)&local_f8._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<UE::Math::TVector<double>_> @ 149d097d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
operator()<UE::Math::TVector<double>_>(void *this,TVector<double> *param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  TTransform<double> local_68;
  
  local_88 = *(undefined8 *)this;
  local_a0 = *(longlong **)((longlong)this + 0x28);
  local_a8 = *(undefined8 *)((longlong)this + 0x20);
  local_80 = *(undefined8 *)((longlong)this + 8);
  local_78 = *(undefined8 *)((longlong)this + 0x10);
  local_b8 = &local_88;
  local_b0 = *(undefined8 *)((longlong)this + 0x18);
  local_98 = *(undefined8 *)((longlong)this + 0x30);
  local_70 = local_a8;
  switch(*(undefined2 *)(*local_a0 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::operator()<float>
                      (&local_b8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::operator()<double>
                      (&local_b8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::operator()<int>(&local_b8,0);
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::operator()<__int64>
                      (&local_b8,0);
    return bVar1;
  case 4:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector2<double>_>(&local_b8,(TVector2<double> *)&local_d8._s_0);
    return bVar1;
  case 5:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector<double>_>(&local_b8,(TVector<double> *)&local_d8._s_0);
    return bVar1;
  case 6:
    local_f8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_f8._s_0.W = _UNK_15061cbc8;
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector4<double>_>(&local_b8,(TVector4<double> *)&local_f8._s_0);
    return bVar1;
  case 7:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TQuat<double>_>(&local_b8,(TQuat<double> *)&local_f8._s_0);
    return bVar1;
  case 8:
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_68.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_68.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_68.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_68.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TTransform<double>_>(&local_b8,&local_68);
    return bVar1;
  case 9:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::operator()<FString>
                      (&local_b8,(FString *)&local_d8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::operator()<bool>
                      (&local_b8,false);
    return bVar1;
  case 0xb:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TRotator<double>_>(&local_b8,(TRotator<double> *)&local_d8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::operator()<FName>
                      (&local_b8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_b8,(FSoftObjectPath *)&local_f8._s_0);
    return bVar1;
  case 0xe:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_b8,(FSoftClassPath *)&local_f8._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<FSoftClassPath> @ 149d0d860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
operator()<FSoftClassPath>(void *this,FSoftClassPath *param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  TTransform<double> local_68;
  
  local_88 = *(undefined8 *)this;
  local_a0 = *(longlong **)((longlong)this + 0x28);
  local_a8 = *(undefined8 *)((longlong)this + 0x20);
  local_80 = *(undefined8 *)((longlong)this + 8);
  local_78 = *(undefined8 *)((longlong)this + 0x10);
  local_b8 = &local_88;
  local_b0 = *(undefined8 *)((longlong)this + 0x18);
  local_98 = *(undefined8 *)((longlong)this + 0x30);
  local_70 = local_a8;
  switch(*(undefined2 *)(*local_a0 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<float>(&local_b8,0.0);
    break;
  case 1:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<double>(&local_b8,0.0);
    break;
  case 2:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<int>(&local_b8,0);
    break;
  case 3:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<__int64>(&local_b8,0);
    break;
  case 4:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<UE::Math::TVector2<double>_>
                      (&local_b8,(TVector2<double> *)&local_d8._s_0);
    break;
  case 5:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<UE::Math::TVector<double>_>
                      (&local_b8,(TVector<double> *)&local_d8._s_0);
    break;
  case 6:
    local_f8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_f8._s_0.W = _UNK_15061cbc8;
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<UE::Math::TVector4<double>_>
                      (&local_b8,(TVector4<double> *)&local_f8._s_0);
    break;
  case 7:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<UE::Math::TQuat<double>_>
                      (&local_b8,(TQuat<double> *)&local_f8._s_0);
    break;
  case 8:
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_68.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_68.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_68.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_68.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<UE::Math::TTransform<double>_>
                      (&local_b8,&local_68);
    break;
  case 9:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<FString>
                      (&local_b8,(FString *)&local_d8._s_0);
    break;
  case 10:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<bool>(&local_b8,false);
    break;
  case 0xb:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<UE::Math::TRotator<double>_>
                      (&local_b8,(TRotator<double> *)&local_d8._s_0);
    break;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<FName>(&local_b8,(FName)0x0);
    break;
  case 0xd:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_b8,(FSoftObjectPath *)&local_f8._s_0);
    break;
  case 0xe:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_b8,(FSoftClassPath *)&local_f8._s_0);
    break;
  default:
    bVar1 = false;
  }
  if (*(void **)&param_1->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x10);
  }
  return bVar1;
}

// operator()<FSoftObjectPath> @ 149d11a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
operator()<FSoftObjectPath>(void *this,FSoftObjectPath *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  TVector4<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  TTransform<double> local_68;
  
  local_88 = *(undefined8 *)this;
  local_a0 = *(longlong **)((longlong)this + 0x28);
  local_a8 = *(undefined8 *)((longlong)this + 0x20);
  local_80 = *(undefined8 *)((longlong)this + 8);
  local_78 = *(undefined8 *)((longlong)this + 0x10);
  local_b8 = &local_88;
  local_b0 = *(undefined8 *)((longlong)this + 0x18);
  local_98 = *(undefined8 *)((longlong)this + 0x30);
  local_70 = local_a8;
  switch(*(undefined2 *)(*local_a0 + 10)) {
  case 0:
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<float>(&local_b8,0.0);
    break;
  case 1:
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<double>(&local_b8,0.0);
    break;
  case 2:
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<int>(&local_b8,0);
    break;
  case 3:
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<__int64>(&local_b8,0);
    break;
  case 4:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<UE::Math::TVector2<double>_>
                      (&local_b8,(TVector2<double> *)&local_d8._s_0);
    break;
  case 5:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<UE::Math::TVector<double>_>
                      (&local_b8,(TVector<double> *)&local_d8._s_0);
    break;
  case 6:
    local_f8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_f8._s_0.W = _UNK_15061cbc8;
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<UE::Math::TVector4<double>_>
                      (&local_b8,(TVector4<double> *)&local_f8._s_0);
    break;
  case 7:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<UE::Math::TQuat<double>_>
                      (&local_b8,(TQuat<double> *)&local_f8._s_0);
    break;
  case 8:
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_68.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_68.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_68.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_68.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::
            operator()<UE::Math::TTransform<double>_>(&local_b8,&local_68);
    break;
  case 9:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<FString>
                      (&local_b8,(FString *)&local_d8._s_0);
    break;
  case 10:
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<bool>(&local_b8,false);
    break;
  case 0xb:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<UE::Math::TRotator<double>_>
                      (&local_b8,(TRotator<double> *)&local_d8._s_0);
    break;
  case 0xc:
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<FName>(&local_b8,(FName)0x0);
    break;
  case 0xd:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_b8,(FSoftObjectPath *)&local_f8._s_0);
    break;
  case 0xe:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_b8,(FSoftClassPath *)&local_f8._s_0);
    break;
  default:
    bVar2 = false;
  }
  pFVar1 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return bVar2;
}

// operator()<FName> @ 149d15670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::operator()<FName>
          (void *this,FName param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  TTransform<double> local_68;
  
  local_88 = *(undefined8 *)this;
  local_a0 = *(longlong **)((longlong)this + 0x28);
  local_a8 = *(undefined8 *)((longlong)this + 0x20);
  local_80 = *(undefined8 *)((longlong)this + 8);
  local_78 = *(undefined8 *)((longlong)this + 0x10);
  local_b8 = &local_88;
  local_b0 = *(undefined8 *)((longlong)this + 0x18);
  local_98 = *(undefined8 *)((longlong)this + 0x30);
  local_70 = local_a8;
  switch(*(undefined2 *)(*local_a0 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FName>'::__l2::<lambda_2>::operator()<float>(&local_b8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FName>'::__l2::<lambda_2>::operator()<double>(&local_b8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FName>'::__l2::<lambda_2>::operator()<int>(&local_b8,0);
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FName>'::__l2::<lambda_2>::operator()<__int64>(&local_b8,0);
    return bVar1;
  case 4:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FName>'::__l2::<lambda_2>::operator()<UE::Math::TVector2<double>_>
                      (&local_b8,(TVector2<double> *)&local_d8._s_0);
    return bVar1;
  case 5:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FName>'::__l2::<lambda_2>::operator()<UE::Math::TVector<double>_>
                      (&local_b8,(TVector<double> *)&local_d8._s_0);
    return bVar1;
  case 6:
    local_f8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_f8._s_0.W = _UNK_15061cbc8;
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FName>'::__l2::<lambda_2>::operator()<UE::Math::TVector4<double>_>
                      (&local_b8,(TVector4<double> *)&local_f8._s_0);
    return bVar1;
  case 7:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FName>'::__l2::<lambda_2>::operator()<UE::Math::TQuat<double>_>
                      (&local_b8,(TQuat<double> *)&local_f8._s_0);
    return bVar1;
  case 8:
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_68.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_68.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_68.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_68.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FName>'::__l2::<lambda_2>::operator()<UE::Math::TTransform<double>_>
                      (&local_b8,&local_68);
    return bVar1;
  case 9:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FName>'::__l2::<lambda_2>::operator()<FString>
                      (&local_b8,(FString *)&local_d8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FName>'::__l2::<lambda_2>::operator()<bool>(&local_b8,false);
    return bVar1;
  case 0xb:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FName>'::__l2::<lambda_2>::operator()<UE::Math::TRotator<double>_>
                      (&local_b8,(TRotator<double> *)&local_d8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FName>'::__l2::<lambda_2>::operator()<FName>(&local_b8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FName>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_b8,(FSoftObjectPath *)&local_f8._s_0);
    return bVar1;
  case 0xe:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FName>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_b8,(FSoftClassPath *)&local_f8._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<FString> @ 149d195d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::operator()<FString>
          (void *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  TVector4<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  TTransform<double> local_68;
  
  local_88 = *(undefined8 *)this;
  local_a0 = *(longlong **)((longlong)this + 0x28);
  local_a8 = *(undefined8 *)((longlong)this + 0x20);
  local_80 = *(undefined8 *)((longlong)this + 8);
  local_78 = *(undefined8 *)((longlong)this + 0x10);
  local_b8 = &local_88;
  local_b0 = *(undefined8 *)((longlong)this + 0x18);
  local_98 = *(undefined8 *)((longlong)this + 0x30);
  local_70 = local_a8;
  switch(*(undefined2 *)(*local_a0 + 10)) {
  case 0:
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FString>'::__l2::<lambda_2>::operator()<float>(&local_b8,0.0);
    break;
  case 1:
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FString>'::__l2::<lambda_2>::operator()<double>(&local_b8,0.0);
    break;
  case 2:
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FString>'::__l2::<lambda_2>::operator()<int>(&local_b8,0);
    break;
  case 3:
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FString>'::__l2::<lambda_2>::operator()<__int64>(&local_b8,0);
    break;
  case 4:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FString>'::__l2::<lambda_2>::operator()<UE::Math::TVector2<double>_>
                      (&local_b8,(TVector2<double> *)&local_d8._s_0);
    break;
  case 5:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FString>'::__l2::<lambda_2>::operator()<UE::Math::TVector<double>_>
                      (&local_b8,(TVector<double> *)&local_d8._s_0);
    break;
  case 6:
    local_f8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_f8._s_0.W = _UNK_15061cbc8;
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FString>'::__l2::<lambda_2>::operator()<UE::Math::TVector4<double>_>
                      (&local_b8,(TVector4<double> *)&local_f8._s_0);
    break;
  case 7:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FString>'::__l2::<lambda_2>::operator()<UE::Math::TQuat<double>_>
                      (&local_b8,(TQuat<double> *)&local_f8._s_0);
    break;
  case 8:
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_68.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_68.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_68.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_68.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FString>'::__l2::<lambda_2>::operator()<UE::Math::TTransform<double>_>
                      (&local_b8,&local_68);
    break;
  case 9:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FString>'::__l2::<lambda_2>::operator()<FString>
                      (&local_b8,(FString *)&local_d8._s_0);
    break;
  case 10:
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FString>'::__l2::<lambda_2>::operator()<bool>(&local_b8,false);
    break;
  case 0xb:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FString>'::__l2::<lambda_2>::operator()<UE::Math::TRotator<double>_>
                      (&local_b8,(TRotator<double> *)&local_d8._s_0);
    break;
  case 0xc:
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FString>'::__l2::<lambda_2>::operator()<FName>(&local_b8,(FName)0x0);
    break;
  case 0xd:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FString>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_b8,(FSoftObjectPath *)&local_f8._s_0);
    break;
  case 0xe:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar2 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<FString>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_b8,(FSoftClassPath *)&local_f8._s_0);
    break;
  default:
    bVar2 = false;
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return bVar2;
}

// operator()<__int64> @ 149d1d180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::operator()<__int64>
          (void *this,long64 param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  TTransform<double> local_68;
  
  local_88 = *(undefined8 *)this;
  local_a0 = *(longlong **)((longlong)this + 0x28);
  local_a8 = *(undefined8 *)((longlong)this + 0x20);
  local_80 = *(undefined8 *)((longlong)this + 8);
  local_78 = *(undefined8 *)((longlong)this + 0x10);
  local_b8 = &local_88;
  local_b0 = *(undefined8 *)((longlong)this + 0x18);
  local_98 = *(undefined8 *)((longlong)this + 0x30);
  local_70 = local_a8;
  switch(*(undefined2 *)(*local_a0 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<float>(&local_b8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<double>(&local_b8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<int>(&local_b8,0);
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<__int64>(&local_b8,0);
    return bVar1;
  case 4:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<UE::Math::TVector2<double>_>
                      (&local_b8,(TVector2<double> *)&local_d8._s_0);
    return bVar1;
  case 5:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<UE::Math::TVector<double>_>
                      (&local_b8,(TVector<double> *)&local_d8._s_0);
    return bVar1;
  case 6:
    local_f8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_f8._s_0.W = _UNK_15061cbc8;
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<UE::Math::TVector4<double>_>
                      (&local_b8,(TVector4<double> *)&local_f8._s_0);
    return bVar1;
  case 7:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<UE::Math::TQuat<double>_>
                      (&local_b8,(TQuat<double> *)&local_f8._s_0);
    return bVar1;
  case 8:
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_68.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_68.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_68.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_68.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<UE::Math::TTransform<double>_>
                      (&local_b8,&local_68);
    return bVar1;
  case 9:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<FString>
                      (&local_b8,(FString *)&local_d8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<bool>(&local_b8,false);
    return bVar1;
  case 0xb:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<UE::Math::TRotator<double>_>
                      (&local_b8,(TRotator<double> *)&local_d8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<FName>(&local_b8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_b8,(FSoftObjectPath *)&local_f8._s_0);
    return bVar1;
  case 0xe:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_b8,(FSoftClassPath *)&local_f8._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<bool> @ 149d20c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::operator()<bool>
          (void *this,bool param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  TTransform<double> local_68;
  
  local_88 = *(undefined8 *)this;
  local_a0 = *(longlong **)((longlong)this + 0x28);
  local_a8 = *(undefined8 *)((longlong)this + 0x20);
  local_80 = *(undefined8 *)((longlong)this + 8);
  local_78 = *(undefined8 *)((longlong)this + 0x10);
  local_b8 = &local_88;
  local_b0 = *(undefined8 *)((longlong)this + 0x18);
  local_98 = *(undefined8 *)((longlong)this + 0x30);
  local_70 = local_a8;
  switch(*(undefined2 *)(*local_a0 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<bool>'::__l2::<lambda_2>::operator()<float>(&local_b8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<bool>'::__l2::<lambda_2>::operator()<double>(&local_b8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<bool>'::__l2::<lambda_2>::operator()<int>(&local_b8,0);
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<bool>'::__l2::<lambda_2>::operator()<__int64>(&local_b8,0);
    return bVar1;
  case 4:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<bool>'::__l2::<lambda_2>::operator()<UE::Math::TVector2<double>_>
                      (&local_b8,(TVector2<double> *)&local_d8._s_0);
    return bVar1;
  case 5:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<bool>'::__l2::<lambda_2>::operator()<UE::Math::TVector<double>_>
                      (&local_b8,(TVector<double> *)&local_d8._s_0);
    return bVar1;
  case 6:
    local_f8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_f8._s_0.W = _UNK_15061cbc8;
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<bool>'::__l2::<lambda_2>::operator()<UE::Math::TVector4<double>_>
                      (&local_b8,(TVector4<double> *)&local_f8._s_0);
    return bVar1;
  case 7:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<bool>'::__l2::<lambda_2>::operator()<UE::Math::TQuat<double>_>
                      (&local_b8,(TQuat<double> *)&local_f8._s_0);
    return bVar1;
  case 8:
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_68.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_68.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_68.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_68.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<bool>'::__l2::<lambda_2>::operator()<UE::Math::TTransform<double>_>
                      (&local_b8,&local_68);
    return bVar1;
  case 9:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<bool>'::__l2::<lambda_2>::operator()<FString>
                      (&local_b8,(FString *)&local_d8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<bool>'::__l2::<lambda_2>::operator()<bool>(&local_b8,false);
    return bVar1;
  case 0xb:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_d8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<bool>'::__l2::<lambda_2>::operator()<UE::Math::TRotator<double>_>
                      (&local_b8,(TRotator<double> *)&local_d8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<bool>'::__l2::<lambda_2>::operator()<FName>(&local_b8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<bool>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_b8,(FSoftObjectPath *)&local_f8._s_0);
    return bVar1;
  case 0xe:
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    local_f8._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
            operator()<bool>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_b8,(FSoftClassPath *)&local_f8._s_0);
    return bVar1;
  default:
    return false;
  }
}

// UPCGMatchAndSetByAttribute @ 149d344e0

UPCGMatchAndSetByAttribute * __thiscall
UPCGMatchAndSetByAttribute::UPCGMatchAndSetByAttribute
          (UPCGMatchAndSetByAttribute *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UPCGMatchAndSetByAttribute__6B_;
  (this->MatchSourceAttribute).ComparisonIndex = 0;
  (this->MatchSourceAttribute).Number = 0;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  this->MatchSourceType = Double;
  return this;
}

// UPCGMatchAndSetByAttribute @ 149d34520

UPCGMatchAndSetByAttribute * __thiscall
UPCGMatchAndSetByAttribute::UPCGMatchAndSetByAttribute
          (UPCGMatchAndSetByAttribute *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UPCGMatchAndSetByAttribute__6B_;
  (this->MatchSourceAttribute).ComparisonIndex = 0;
  (this->MatchSourceAttribute).Number = 0;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  this->MatchSourceType = Double;
  return this;
}

// ~UPCGMatchAndSetByAttribute @ 149d35090

void __thiscall
UPCGMatchAndSetByAttribute::~UPCGMatchAndSetByAttribute(UPCGMatchAndSetByAttribute *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGMatchAndSetByAttribute__6B_;
  DestructItems<FPCGMatchAndSetByAttributeEntry,int>
            ((FPCGMatchAndSetByAttributeEntry *)(this->Entries).AllocatorInstance.Data,
             (this->Entries).ArrayNum);
  pFVar1 = (this->Entries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGMatchAndSetBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 149d547c0

UClass * __cdecl UPCGMatchAndSetByAttribute::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMatchAndSetByAttribute.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMatchAndSetByAttribute",
               &Z_Registration_Info_UClass_UPCGMatchAndSetByAttribute.InnerSingleton,
               StaticRegisterNativesUPCGMatchAndSetByAttribute,0x50,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGMatchAndSetByAttribute>,
               InternalVTableHelperCtorCaller<UPCGMatchAndSetByAttribute>,local_res8,
               UPCGMatchAndSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMatchAndSetByAttribute.InnerSingleton;
}

// MatchAndSet_Implementation @ 149d58550

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

void __thiscall
UPCGMatchAndSetByAttribute::MatchAndSet_Implementation
          (UPCGMatchAndSetByAttribute *this,FPCGContext *param_1,
          UPCGPointMatchAndSetSettings *param_2,UPCGPointData *param_3,UPCGPointData *param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar5;
  FPCGAttributePropertySelector *pFVar6;
  undefined8 *puVar7;
  FString *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  undefined8 *puVar11;
  FPCGMetadataTypesConstantStruct *this_00;
  FPCGMetadataTypesConstantStruct *pFVar12;
  undefined4 local_res8 [2];
  undefined8 *local_res18;
  UPCGPointData *local_res20;
  ForAnyElementType local_3f8;
  undefined8 local_3f0;
  ForAnyElementType local_3e8;
  undefined8 local_3e0;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [80];
  undefined8 *local_378;
  FString local_370;
  FSoftObjectPath local_360;
  FSoftClassPath local_340;
  FPCGAttributePropertySelector local_318;
  FText local_2d8;
  FText local_2c8;
  TVector2<double>_u_0 local_2b8;
  FString local_2a8;
  FString local_298;
  FText local_288;
  FString local_278;
  FString local_268;
  FText local_258;
  FString local_248;
  FString local_238;
  FText local_228;
  TVector<double>_u_0 local_218;
  TRotator<double> local_1f8;
  FString local_1d8;
  FText local_1c8;
  FString local_1b8;
  FString local_1a8;
  FPCGAttributePropertySelector local_198;
  TVector4<double>_u_0 local_158;
  TQuat<double> local_138;
  undefined8 local_108;
  undefined8 local_f0;
  TTransform<double> local_e8;
  FTextFormat local_88;
  undefined1 local_78 [48];
  int local_48;
  
  puVar11 = (undefined8 *)0x0;
  local_res8[0] = 0;
  local_res20 = param_3;
  if ((((param_2 == (UPCGPointMatchAndSetSettings *)0x0) || (param_3 == (UPCGPointData *)0x0)) ||
      (param_4 == (UPCGPointData *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSettings && InPointData && OutPointData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MatchAndSet\\PCGMatchAndSetByAttribute.cpp"
                         ,99,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_4->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutPointData->Metadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MatchAndSet\\PCGMatchAndSetByAttribute.cpp"
                         ,100,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar5 = UPCGPointData::GetMutablePoints(param_4);
  if (((param_3->Points).ArrayNum != pTVar5->ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPointData->GetPoints().Num() == OutPointData->GetMutablePoints().Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MatchAndSet\\PCGMatchAndSetByAttribute.cpp"
                         ,0x65,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->Entries).ArrayNum == 0) {
    return;
  }
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&local_318);
  FPCGAttributePropertySelector::SetAttributeName(&local_318,this->MatchSourceAttribute,true);
  pFVar6 = (FPCGAttributePropertySelector *)
           FPCGAttributePropertyInputSelector::CopyAndFixLast
                     ((FPCGAttributePropertyInputSelector *)&local_318,
                      (FPCGAttributePropertyInputSelector *)local_78,(UPCGData *)param_3);
  FPCGAttributePropertySelector::operator=(&local_318,pFVar6);
  DestructItems<FString,int>((FString *)local_78._40_8_,local_48);
  if ((FString *)local_78._40_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_78._40_8_);
  }
  FPCGAttributePropertyOutputSelector::CopyAndFixSource
            (&param_2->SetTarget,(FPCGAttributePropertyOutputSelector *)&local_198,
             (FPCGAttributePropertyInputSelector *)&local_318,(UPCGData *)param_4);
  if (((this->Entries).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = UPCGMatchAndSetBase::CreateAttributeIfNeeded
                    ((UPCGMatchAndSetBase *)this,param_1,&local_198,
                     (FPCGMetadataTypesConstantStruct *)
                     ((this->Entries).AllocatorInstance.Data + 0x170),param_4,param_2);
  if (!bVar4) goto LAB_149d58fe0;
  uVar1 = (this->Entries).ArrayNum;
  local_3e8.Data = (FScriptContainerElement *)0x0;
  local_3e0 = 0;
  local_3f8.Data = (FScriptContainerElement *)0x0;
  local_3f0 = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  local_3f0._4_4_ = 0;
  local_3f0._0_4_ = 0;
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar1,&local_3e8,0,(int *)((longlong)&local_3e0 + 4));
  }
  uVar1 = (this->Entries).ArrayNum;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (local_3f0._4_4_ < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar1,&local_3f8,(int)local_3f0,(int *)((longlong)&local_3f0 + 4));
  }
  puVar7 = ::operator_new(0x18);
  local_378 = puVar11;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar7 + 1) = 1;
    *puVar7 = &___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
    puVar7[2] = 0;
    local_378 = puVar7;
  }
  iVar2 = (this->Entries).ArrayNum;
  this_00 = (FPCGMetadataTypesConstantStruct *)(this->Entries).AllocatorInstance.Data;
  pFVar12 = this_00 + (longlong)iVar2 * 2;
  while( true ) {
    if ((this->Entries).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPCGMatchAndSetByAttributeEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar12) break;
    FPCGMetadataTypesConstantStruct::
    Dispatcher<_UPCGMatchAndSetByAttribute::MatchAndSet_Implementation_::__l2::<lambda_1>_>
              (this_00,(TArray<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,TSizedDefaultAllocator<32>_>
                        *)&local_3e8);
    FPCGMetadataTypesConstantStruct::
    Dispatcher<_UPCGMatchAndSetByAttribute::MatchAndSet_Implementation_::__l2::<lambda_2>_>
              (this_00 + 1,
               (TArray<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,TSizedDefaultAllocator<32>_>
                *)&local_3f8);
    this_00 = this_00 + 2;
  }
  PCGAttributeAccessorHelpers::CreateConstAccessor
            ((UPCGData *)&local_res18,(FPCGAttributePropertySelector *)local_res20,
             SUB81(&local_318,0));
  PCGAttributeAccessorHelpers::CreateConstKeys
            ((UPCGData *)local_3c8,(FPCGAttributePropertySelector *)local_res20);
  if ((local_res18 == (undefined8 *)0x0) || ((undefined8 *)local_3c8._0_8_ == (undefined8 *)0x0)) {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_228,L"PCGMatchAndSetByAttributeElement",
                          L"InputAccessorCreationFailed",
                          L"Failed to create input accessor or iterator in MatchAndSet");
      FText::ToString(pFVar9);
      if (param_1 != (FPCGContext *)0x0) {
        FPCGContext::GetTaskName(param_1,&local_238);
        puVar11 = (undefined8 *)&DAT_00000003;
        FPCGContext::GetExecutionSourceName(param_1,&local_248);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)puVar11 & 2) != 0) &&
         (puVar11 = (undefined8 *)(ulonglong)((uint)puVar11 & 0xfffffffd),
         local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)puVar11 & 1) != 0) &&
         (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      if (local_228.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    PCGAttributeAccessorHelpers::CreateAccessor
              ((UPCGData *)(local_3d8 + 8),(FPCGAttributePropertySelector *)param_4,
               SUB81(&local_198,0));
    PCGAttributeAccessorHelpers::CreateKeys
              ((UPCGData *)local_3d8,(FPCGAttributePropertySelector *)param_4);
    if (((undefined8 *)local_3d8._8_8_ == (undefined8 *)0x0) ||
       ((undefined8 *)local_3d8._0_8_ == (undefined8 *)0x0)) {
      if ((byte)LogPCG._0_1_ < 3) goto LAB_149d58e48;
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_258,L"PCGMatchAndSetByAttributeElement",
                          L"FailedToCreateTargetAccessor",
                          L"Failed to create output accessor or iterator");
      FText::ToString(pFVar9);
      if (param_1 != (FPCGContext *)0x0) {
        FPCGContext::GetTaskName(param_1,&local_268);
        puVar11 = (undefined8 *)&DAT_0000000c;
        FPCGContext::GetExecutionSourceName(param_1,&local_278);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)puVar11 & 8) != 0) &&
         (puVar11 = (undefined8 *)(ulonglong)((uint)puVar11 & 0xfffffff7),
         local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)puVar11 & 4) != 0) &&
         (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
LAB_149d58e3d:
      if (local_258.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
      }
    }
    else if (*(char *)(local_3d8._8_8_ + 8) == '\0') {
      local_3c8._16_8_ = &local_res18;
      local_3c8._24_8_ = local_3c8;
      local_3c8._32_8_ = &local_3e8;
      local_3c8._40_8_ = &local_3f8;
      local_3c8._48_8_ = &local_378;
      local_3c8._56_8_ = local_3d8 + 8;
      local_3c8._64_8_ = local_3d8;
      switch(*(undefined2 *)((longlong)local_res18 + 10)) {
      case 0:
        bVar4 = `UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
                operator()<float>(local_3c8 + 0x10,0.0);
        break;
      case 1:
        bVar4 = `UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
                operator()<double>(local_3c8 + 0x10,0.0);
        break;
      case 2:
        bVar4 = `UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
                operator()<int>(local_3c8 + 0x10,0);
        break;
      case 3:
        bVar4 = `UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
                operator()<__int64>(local_3c8 + 0x10,0);
        break;
      case 4:
        local_2b8._s_0.X = 0.0;
        local_2b8._s_0.Y = 0.0;
        bVar4 = `UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
                operator()<UE::Math::TVector2<double>_>
                          (local_3c8 + 0x10,(TVector2<double> *)&local_2b8._s_0);
        break;
      case 5:
        local_218._s_0.X = 0.0;
        local_218._s_0.Y = 0.0;
        local_f0 = 0;
        local_218._s_0.Z = 0.0;
        bVar4 = `UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
                operator()<UE::Math::TVector<double>_>
                          (local_3c8 + 0x10,(TVector<double> *)&local_218._s_0);
        break;
      case 6:
        local_158._s_0.Z = ___xmm_3ff00000000000000000000000000000;
        local_158._s_0.W = _UNK_15061cbc8;
        local_158._s_0.X = 0.0;
        local_158._s_0.Y = 0.0;
        bVar4 = `UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
                operator()<UE::Math::TVector4<double>_>
                          (local_3c8 + 0x10,(TVector4<double> *)&local_158._s_0);
        break;
      case 7:
        local_138.X = 0.0;
        local_138.Y = 0.0;
        local_138.Z = 0.0;
        local_138.W = 0.0;
        bVar4 = `UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
                operator()<UE::Math::TQuat<double>_>(local_3c8 + 0x10,&local_138);
        break;
      case 8:
        local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_e8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        bVar4 = `UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
                operator()<UE::Math::TTransform<double>_>(local_3c8 + 0x10,&local_e8);
        break;
      case 9:
        local_370.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_370.Data.ArrayNum = 0;
        local_370.Data.ArrayMax = 0;
        bVar4 = `UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
                operator()<FString>(local_3c8 + 0x10,&local_370);
        break;
      case 10:
        bVar4 = `UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
                operator()<bool>(local_3c8 + 0x10,false);
        break;
      case 0xb:
        local_1f8.Pitch = 0.0;
        local_1f8.Yaw = 0.0;
        local_108 = 0;
        local_1f8.Roll = 0.0;
        bVar4 = `UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
                operator()<UE::Math::TRotator<double>_>(local_3c8 + 0x10,&local_1f8);
        break;
      case 0xc:
        bVar4 = `UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
                operator()<FName>(local_3c8 + 0x10,(FName)0x0);
        break;
      case 0xd:
        local_360.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_360.AssetPath.PackageName.Number = 0;
        local_360.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_360.AssetPath.AssetName.Number = 0;
        local_360.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_360.SubPathString.Data.ArrayNum = 0;
        local_360.SubPathString.Data.ArrayMax = 0;
        bVar4 = `UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
                operator()<FSoftObjectPath>(local_3c8 + 0x10,&local_360);
        break;
      case 0xe:
        local_340._0_8_ = 0;
        local_340._8_8_ = 0;
        local_340._16_8_ = 0;
        local_340._24_8_ = 0;
        bVar4 = `UPCGMatchAndSetByAttribute::MatchAndSet_Implementation'::__l2::<lambda_3>::
                operator()<FSoftClassPath>(local_3c8 + 0x10,&local_340);
        break;
      default:
        goto switchD_149d58a56_default;
      }
      if (bVar4 == false) {
switchD_149d58a56_default:
        if (2 < (byte)LogPCG._0_1_) {
          pFVar9 = FText::AsLocalizable_Advanced_LocText
                             (&local_288,L"PCGMatchAndSetByAttributeElement",
                              L"ErrorGettingSettingValues",
                              L"Error while getting/setting values in the MatchAndSet");
          FText::ToString(pFVar9);
          if (param_1 != (FPCGContext *)0x0) {
            FPCGContext::GetTaskName(param_1,&local_298);
            puVar11 = (undefined8 *)&DAT_000000c0;
            FPCGContext::GetExecutionSourceName(param_1,&local_2a8);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (((char)puVar11 < '\0') &&
             (puVar11 = (undefined8 *)(ulonglong)((uint)puVar11 & 0xffffff7f),
             local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
          }
          local_258.TextData.Reference = local_288.TextData.Reference;
          if ((((ulonglong)puVar11 & 0x40) != 0) &&
             (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_298.Data.AllocatorInstance.Data);
            local_258.TextData.Reference = local_288.TextData.Reference;
          }
          goto LAB_149d58e3d;
        }
      }
    }
    else if (2 < (byte)LogPCG._0_1_) {
      pFVar8 = FPCGAttributePropertySelector::ToString(&local_198,&local_1d8,false);
      FText::FromString(&local_1c8,pFVar8);
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_2c8,L"PCGMatchAndSetByAttributeElement",
                          L"SetTargetAccessorIsReadOnly",L"Attribute/Property \'{0}\' is read only."
                         );
      pFVar10 = FTextFormat::FTextFormat(&local_88,pFVar9,Default);
      pFVar9 = FText::Format<FText>(&local_2d8,pFVar10,&local_1c8);
      FText::ToString(pFVar9);
      if (param_1 != (FPCGContext *)0x0) {
        FPCGContext::GetTaskName(param_1,&local_1a8);
        puVar11 = (undefined8 *)&DAT_00000030;
        FPCGContext::GetExecutionSourceName(param_1,&local_1b8);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)puVar11 & 0x20) != 0) &&
         (puVar11 = (undefined8 *)(ulonglong)((uint)puVar11 & 0xffffffdf),
         local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)puVar11 & 0x10) != 0) &&
         (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      local_258.TextData.Reference = local_2c8.TextData.Reference;
      if (local_2d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
        local_258.TextData.Reference = local_2c8.TextData.Reference;
      }
      goto LAB_149d58e3d;
    }
LAB_149d58e48:
    if ((undefined8 *)local_3d8._0_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_3d8._0_8_)(local_3d8._0_8_,1);
    }
    if ((undefined8 *)local_3d8._8_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_3d8._8_8_)(local_3d8._8_8_,1);
    }
  }
  if ((undefined8 *)local_3c8._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_3c8._0_8_)(local_3c8._0_8_,1);
  }
  if (local_res18 != (undefined8 *)0x0) {
    (**(code **)*local_res18)(local_res18,1);
  }
  if (local_378 != (undefined8 *)0x0) {
    (**(code **)*local_378)(local_378,1);
  }
  DestructItems<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int>
            ((TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>
              *)local_3f8.Data,(int)local_3f0);
  if (local_3f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data);
  }
  DestructItems<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int>
            ((TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>
              *)local_3e8.Data,(int)local_3e0);
  if (local_3e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data);
  }
LAB_149d58fe0:
  DestructItems<FString,int>
            ((FString *)local_198.ExtraNames.AllocatorInstance.Data,local_198.ExtraNames.ArrayNum);
  if (local_198.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.ExtraNames.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_318.ExtraNames.AllocatorInstance.Data,local_318.ExtraNames.ArrayNum);
  if (local_318.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.ExtraNames.AllocatorInstance.Data);
  }
  return;
}

// SetSourceType @ 149d646f0

void __thiscall
UPCGMatchAndSetByAttribute::SetSourceType
          (UPCGMatchAndSetByAttribute *this,EPCGMetadataTypes param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Entries).ArrayNum;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x2e0;
  while( true ) {
    if ((this->Entries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGMatchAndSetByAttributeEntry,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    *pFVar2 = (FScriptContainerElement)param_1;
    pFVar2 = pFVar2 + 0x2e0;
  }
  return;
}

// SetType @ 149d64920

void __thiscall
UPCGMatchAndSetByAttribute::SetType(UPCGMatchAndSetByAttribute *this,EPCGMetadataTypes param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  iVar1 = (this->Entries).ArrayNum;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x2e0;
  while( true ) {
    if ((this->Entries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGMatchAndSetByAttributeEntry,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2[0x170] = (FScriptContainerElement)param_1;
    pFVar2 = pFVar2 + 0x2e0;
  }
  *(EPCGMetadataTypes *)&this->_padding_ = param_1;
  return;
}

// StaticRegisterNativesUPCGMatchAndSetByAttribute @ 149d66330

void __cdecl UPCGMatchAndSetByAttribute::StaticRegisterNativesUPCGMatchAndSetByAttribute(void)

{
  return;
}

// ValidatePreconditions_Implementation @ 149d67f10

bool __thiscall
UPCGMatchAndSetByAttribute::ValidatePreconditions_Implementation
          (UPCGMatchAndSetByAttribute *this,UPCGPointData *param_1)

{
  bool bVar1;
  FName FVar2;
  FPCGMetadataAttributeBase *pFVar3;
  FPCGAttributeIdentifier local_28;
  
  if ((param_1 != (UPCGPointData *)0x0) &&
     ((UPCGMetadata *)param_1->_padding_ != (UPCGMetadata *)0x0)) {
    FVar2 = this->MatchSourceAttribute;
    if (FVar2 == (FName)0x0) {
      FVar2 = UPCGMetadata::GetLatestAttributeNameOrNone((UPCGMetadata *)param_1->_padding_);
      FVar2 = *(FName *)FVar2;
    }
    local_28.MetadataDomain = PCGMetadataDomainID::Default;
    local_28.Name = FVar2;
    bVar1 = UPCGMetadata::HasAttribute((UPCGMetadata *)param_1->_padding_,&local_28);
    if (bVar1) {
      local_28.MetadataDomain = PCGMetadataDomainID::Default;
      local_28.Name = FVar2;
      pFVar3 = UPCGMetadata::GetConstAttribute((UPCGMetadata *)param_1->_padding_,&local_28);
      if ((pFVar3 != (FPCGMetadataAttributeBase *)0x0) &&
         (pFVar3->TypeId == (ushort)this->MatchSourceType)) {
        return true;
      }
    }
  }
  return false;
}

