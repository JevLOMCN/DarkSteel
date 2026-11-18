// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 28

// StaticClass @ 149d74200

UClass * __cdecl UPCGMatchAndSetWeightedByCategory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMatchAndSetWeightedByCategory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMatchAndSetWeightedByCategory",
               &Z_Registration_Info_UClass_UPCGMatchAndSetWeightedByCategory.InnerSingleton,
               StaticRegisterNativesUPCGMatchAndSetWeightedByCategory,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMatchAndSetWeightedByCategory>,
               InternalVTableHelperCtorCaller<UPCGMatchAndSetWeightedByCategory>,local_res8,
               UPCGMatchAndSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMatchAndSetWeightedByCategory.InnerSingleton;
}

// operator()<int> @ 149d802c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::operator()<int>
          (void *this,int param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  TTransform<double> local_68;
  
  local_98 = *(undefined8 *)((longlong)this + 8);
  local_a8 = *(longlong **)((longlong)this + 0x38);
  local_b0 = *(undefined8 *)((longlong)this + 0x28);
  local_90 = *(undefined8 *)((longlong)this + 0x10);
  local_88 = *(undefined8 *)((longlong)this + 0x18);
  local_78 = *(undefined4 *)((longlong)this + 0x30);
  local_c8 = &local_98;
  local_c0 = *(undefined8 *)this;
  local_b8 = *(undefined8 *)((longlong)this + 0x20);
  local_a0 = *(undefined8 *)((longlong)this + 0x40);
  local_80 = local_b0;
  switch(*(undefined2 *)(*local_a8 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<int>'::__l2::<lambda_2>::operator()<float>(&local_c8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<int>'::__l2::<lambda_2>::operator()<double>(&local_c8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<int>'::__l2::<lambda_2>::operator()<int>(&local_c8,0);
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<int>'::__l2::<lambda_2>::operator()<__int64>(&local_c8,0);
    return bVar1;
  case 4:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<int>'::__l2::<lambda_2>::operator()<UE::Math::TVector2<double>_>
                      (&local_c8,(TVector2<double> *)&local_e8._s_0);
    return bVar1;
  case 5:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<int>'::__l2::<lambda_2>::operator()<UE::Math::TVector<double>_>
                      (&local_c8,(TVector<double> *)&local_e8._s_0);
    return bVar1;
  case 6:
    local_108._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_108._s_0.W = _UNK_15061cbc8;
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<int>'::__l2::<lambda_2>::operator()<UE::Math::TVector4<double>_>
                      (&local_c8,(TVector4<double> *)&local_108._s_0);
    return bVar1;
  case 7:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<int>'::__l2::<lambda_2>::operator()<UE::Math::TQuat<double>_>
                      (&local_c8,(TQuat<double> *)&local_108._s_0);
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
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<int>'::__l2::<lambda_2>::operator()<UE::Math::TTransform<double>_>
                      (&local_c8,&local_68);
    return bVar1;
  case 9:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<int>'::__l2::<lambda_2>::operator()<FString>
                      (&local_c8,(FString *)&local_e8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<int>'::__l2::<lambda_2>::operator()<bool>(&local_c8,false);
    return bVar1;
  case 0xb:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<int>'::__l2::<lambda_2>::operator()<UE::Math::TRotator<double>_>
                      (&local_c8,(TRotator<double> *)&local_e8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<int>'::__l2::<lambda_2>::operator()<FName>(&local_c8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<int>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_c8,(FSoftObjectPath *)&local_108._s_0);
    return bVar1;
  case 0xe:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<int>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_c8,(FSoftClassPath *)&local_108._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<float> @ 149d858b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::operator()<float>
          (void *this,float param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  TTransform<double> local_68;
  
  local_98 = *(undefined8 *)((longlong)this + 8);
  local_a8 = *(longlong **)((longlong)this + 0x38);
  local_b0 = *(undefined8 *)((longlong)this + 0x28);
  local_90 = *(undefined8 *)((longlong)this + 0x10);
  local_88 = *(undefined8 *)((longlong)this + 0x18);
  local_78 = *(undefined4 *)((longlong)this + 0x30);
  local_c8 = &local_98;
  local_c0 = *(undefined8 *)this;
  local_b8 = *(undefined8 *)((longlong)this + 0x20);
  local_a0 = *(undefined8 *)((longlong)this + 0x40);
  local_80 = local_b0;
  switch(*(undefined2 *)(*local_a8 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<float>'::__l2::<lambda_2>::operator()<float>(&local_c8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<float>'::__l2::<lambda_2>::operator()<double>(&local_c8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<float>'::__l2::<lambda_2>::operator()<int>(&local_c8,0);
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<float>'::__l2::<lambda_2>::operator()<__int64>(&local_c8,0);
    return bVar1;
  case 4:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<float>'::__l2::<lambda_2>::operator()<UE::Math::TVector2<double>_>
                      (&local_c8,(TVector2<double> *)&local_e8._s_0);
    return bVar1;
  case 5:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<float>'::__l2::<lambda_2>::operator()<UE::Math::TVector<double>_>
                      (&local_c8,(TVector<double> *)&local_e8._s_0);
    return bVar1;
  case 6:
    local_108._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_108._s_0.W = _UNK_15061cbc8;
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<float>'::__l2::<lambda_2>::operator()<UE::Math::TVector4<double>_>
                      (&local_c8,(TVector4<double> *)&local_108._s_0);
    return bVar1;
  case 7:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<float>'::__l2::<lambda_2>::operator()<UE::Math::TQuat<double>_>
                      (&local_c8,(TQuat<double> *)&local_108._s_0);
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
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<float>'::__l2::<lambda_2>::operator()<UE::Math::TTransform<double>_>
                      (&local_c8,&local_68);
    return bVar1;
  case 9:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<float>'::__l2::<lambda_2>::operator()<FString>
                      (&local_c8,(FString *)&local_e8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<float>'::__l2::<lambda_2>::operator()<bool>(&local_c8,false);
    return bVar1;
  case 0xb:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<float>'::__l2::<lambda_2>::operator()<UE::Math::TRotator<double>_>
                      (&local_c8,(TRotator<double> *)&local_e8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<float>'::__l2::<lambda_2>::operator()<FName>(&local_c8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<float>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_c8,(FSoftObjectPath *)&local_108._s_0);
    return bVar1;
  case 0xe:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<float>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_c8,(FSoftClassPath *)&local_108._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<double> @ 149d8aed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
operator()<double>(void *this,double param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  TTransform<double> local_68;
  
  local_98 = *(undefined8 *)((longlong)this + 8);
  local_a8 = *(longlong **)((longlong)this + 0x38);
  local_b0 = *(undefined8 *)((longlong)this + 0x28);
  local_90 = *(undefined8 *)((longlong)this + 0x10);
  local_88 = *(undefined8 *)((longlong)this + 0x18);
  local_78 = *(undefined4 *)((longlong)this + 0x30);
  local_c8 = &local_98;
  local_c0 = *(undefined8 *)this;
  local_b8 = *(undefined8 *)((longlong)this + 0x20);
  local_a0 = *(undefined8 *)((longlong)this + 0x40);
  local_80 = local_b0;
  switch(*(undefined2 *)(*local_a8 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<double>'::__l2::<lambda_2>::operator()<float>(&local_c8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<double>'::__l2::<lambda_2>::operator()<double>(&local_c8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<double>'::__l2::<lambda_2>::operator()<int>(&local_c8,0);
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<double>'::__l2::<lambda_2>::operator()<__int64>(&local_c8,0);
    return bVar1;
  case 4:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<double>'::__l2::<lambda_2>::operator()<UE::Math::TVector2<double>_>
                      (&local_c8,(TVector2<double> *)&local_e8._s_0);
    return bVar1;
  case 5:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<double>'::__l2::<lambda_2>::operator()<UE::Math::TVector<double>_>
                      (&local_c8,(TVector<double> *)&local_e8._s_0);
    return bVar1;
  case 6:
    local_108._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_108._s_0.W = _UNK_15061cbc8;
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<double>'::__l2::<lambda_2>::operator()<UE::Math::TVector4<double>_>
                      (&local_c8,(TVector4<double> *)&local_108._s_0);
    return bVar1;
  case 7:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<double>'::__l2::<lambda_2>::operator()<UE::Math::TQuat<double>_>
                      (&local_c8,(TQuat<double> *)&local_108._s_0);
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
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<double>'::__l2::<lambda_2>::operator()<UE::Math::TTransform<double>_>
                      (&local_c8,&local_68);
    return bVar1;
  case 9:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<double>'::__l2::<lambda_2>::operator()<FString>
                      (&local_c8,(FString *)&local_e8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<double>'::__l2::<lambda_2>::operator()<bool>(&local_c8,false);
    return bVar1;
  case 0xb:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<double>'::__l2::<lambda_2>::operator()<UE::Math::TRotator<double>_>
                      (&local_c8,(TRotator<double> *)&local_e8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<double>'::__l2::<lambda_2>::operator()<FName>(&local_c8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<double>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_c8,(FSoftObjectPath *)&local_108._s_0);
    return bVar1;
  case 0xe:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<double>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_c8,(FSoftClassPath *)&local_108._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<UE::Math::TQuat<double>_> @ 149d90020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
operator()<UE::Math::TQuat<double>_>(void *this,TQuat<double> *param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  TTransform<double> local_68;
  
  local_98 = *(undefined8 *)((longlong)this + 8);
  local_a8 = *(longlong **)((longlong)this + 0x38);
  local_b0 = *(undefined8 *)((longlong)this + 0x28);
  local_90 = *(undefined8 *)((longlong)this + 0x10);
  local_88 = *(undefined8 *)((longlong)this + 0x18);
  local_78 = *(undefined4 *)((longlong)this + 0x30);
  local_c8 = &local_98;
  local_c0 = *(undefined8 *)this;
  local_b8 = *(undefined8 *)((longlong)this + 0x20);
  local_a0 = *(undefined8 *)((longlong)this + 0x40);
  local_80 = local_b0;
  switch(*(undefined2 *)(*local_a8 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::operator()<float>
                      (&local_c8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::operator()<double>
                      (&local_c8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::operator()<int>(&local_c8,0);
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::operator()<__int64>
                      (&local_c8,0);
    return bVar1;
  case 4:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector2<double>_>(&local_c8,(TVector2<double> *)&local_e8._s_0);
    return bVar1;
  case 5:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector<double>_>(&local_c8,(TVector<double> *)&local_e8._s_0);
    return bVar1;
  case 6:
    local_108._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_108._s_0.W = _UNK_15061cbc8;
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector4<double>_>(&local_c8,(TVector4<double> *)&local_108._s_0);
    return bVar1;
  case 7:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TQuat<double>_>(&local_c8,(TQuat<double> *)&local_108._s_0);
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
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TTransform<double>_>(&local_c8,&local_68);
    return bVar1;
  case 9:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::operator()<FString>
                      (&local_c8,(FString *)&local_e8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::operator()<bool>
                      (&local_c8,false);
    return bVar1;
  case 0xb:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TRotator<double>_>(&local_c8,(TRotator<double> *)&local_e8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::operator()<FName>
                      (&local_c8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_c8,(FSoftObjectPath *)&local_108._s_0);
    return bVar1;
  case 0xe:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TQuat<double>_>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_c8,(FSoftClassPath *)&local_108._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<UE::Math::TRotator<double>_> @ 149d95260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
operator()<UE::Math::TRotator<double>_>(void *this,TRotator<double> *param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  TTransform<double> local_68;
  
  local_98 = *(undefined8 *)((longlong)this + 8);
  local_a8 = *(longlong **)((longlong)this + 0x38);
  local_b0 = *(undefined8 *)((longlong)this + 0x28);
  local_90 = *(undefined8 *)((longlong)this + 0x10);
  local_88 = *(undefined8 *)((longlong)this + 0x18);
  local_78 = *(undefined4 *)((longlong)this + 0x30);
  local_c8 = &local_98;
  local_c0 = *(undefined8 *)this;
  local_b8 = *(undefined8 *)((longlong)this + 0x20);
  local_a0 = *(undefined8 *)((longlong)this + 0x40);
  local_80 = local_b0;
  switch(*(undefined2 *)(*local_a8 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::operator()<float>
                      (&local_c8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::operator()<double>
                      (&local_c8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::operator()<int>(&local_c8,0)
    ;
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::operator()<__int64>
                      (&local_c8,0);
    return bVar1;
  case 4:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector2<double>_>(&local_c8,(TVector2<double> *)&local_e8._s_0);
    return bVar1;
  case 5:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector<double>_>(&local_c8,(TVector<double> *)&local_e8._s_0);
    return bVar1;
  case 6:
    local_108._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_108._s_0.W = _UNK_15061cbc8;
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector4<double>_>(&local_c8,(TVector4<double> *)&local_108._s_0);
    return bVar1;
  case 7:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TQuat<double>_>(&local_c8,(TQuat<double> *)&local_108._s_0);
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
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TTransform<double>_>(&local_c8,&local_68);
    return bVar1;
  case 9:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::operator()<FString>
                      (&local_c8,(FString *)&local_e8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::operator()<bool>
                      (&local_c8,false);
    return bVar1;
  case 0xb:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TRotator<double>_>(&local_c8,(TRotator<double> *)&local_e8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::operator()<FName>
                      (&local_c8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_c8,(FSoftObjectPath *)&local_108._s_0);
    return bVar1;
  case 0xe:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TRotator<double>_>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_c8,(FSoftClassPath *)&local_108._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<UE::Math::TTransform<double>_> @ 149d9ac90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
operator()<UE::Math::TTransform<double>_>(void *this,TTransform<double> *param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  TTransform<double> local_68;
  
  local_98 = *(undefined8 *)((longlong)this + 8);
  local_a8 = *(longlong **)((longlong)this + 0x38);
  local_b0 = *(undefined8 *)((longlong)this + 0x28);
  local_90 = *(undefined8 *)((longlong)this + 0x10);
  local_88 = *(undefined8 *)((longlong)this + 0x18);
  local_78 = *(undefined4 *)((longlong)this + 0x30);
  local_c8 = &local_98;
  local_c0 = *(undefined8 *)this;
  local_b8 = *(undefined8 *)((longlong)this + 0x20);
  local_a0 = *(undefined8 *)((longlong)this + 0x40);
  local_80 = local_b0;
  switch(*(undefined2 *)(*local_a8 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::operator()<float>
                      (&local_c8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::operator()<double>
                      (&local_c8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::operator()<int>
                      (&local_c8,0);
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::operator()<__int64>
                      (&local_c8,0);
    return bVar1;
  case 4:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector2<double>_>(&local_c8,(TVector2<double> *)&local_e8._s_0);
    return bVar1;
  case 5:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector<double>_>(&local_c8,(TVector<double> *)&local_e8._s_0);
    return bVar1;
  case 6:
    local_108._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_108._s_0.W = _UNK_15061cbc8;
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector4<double>_>(&local_c8,(TVector4<double> *)&local_108._s_0);
    return bVar1;
  case 7:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TQuat<double>_>(&local_c8,(TQuat<double> *)&local_108._s_0);
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
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TTransform<double>_>(&local_c8,&local_68);
    return bVar1;
  case 9:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::operator()<FString>
                      (&local_c8,(FString *)&local_e8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::operator()<bool>
                      (&local_c8,false);
    return bVar1;
  case 0xb:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TRotator<double>_>(&local_c8,(TRotator<double> *)&local_e8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::operator()<FName>
                      (&local_c8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::
            operator()<FSoftObjectPath>(&local_c8,(FSoftObjectPath *)&local_108._s_0);
    return bVar1;
  case 0xe:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TTransform<double>_>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_c8,(FSoftClassPath *)&local_108._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<UE::Math::TVector2<double>_> @ 149d9fd00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
operator()<UE::Math::TVector2<double>_>(void *this,TVector2<double> *param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  TTransform<double> local_68;
  
  local_98 = *(undefined8 *)((longlong)this + 8);
  local_a8 = *(longlong **)((longlong)this + 0x38);
  local_b0 = *(undefined8 *)((longlong)this + 0x28);
  local_90 = *(undefined8 *)((longlong)this + 0x10);
  local_88 = *(undefined8 *)((longlong)this + 0x18);
  local_78 = *(undefined4 *)((longlong)this + 0x30);
  local_c8 = &local_98;
  local_c0 = *(undefined8 *)this;
  local_b8 = *(undefined8 *)((longlong)this + 0x20);
  local_a0 = *(undefined8 *)((longlong)this + 0x40);
  local_80 = local_b0;
  switch(*(undefined2 *)(*local_a8 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::operator()<float>
                      (&local_c8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::operator()<double>
                      (&local_c8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::operator()<int>(&local_c8,0)
    ;
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::operator()<__int64>
                      (&local_c8,0);
    return bVar1;
  case 4:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector2<double>_>(&local_c8,(TVector2<double> *)&local_e8._s_0);
    return bVar1;
  case 5:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector<double>_>(&local_c8,(TVector<double> *)&local_e8._s_0);
    return bVar1;
  case 6:
    local_108._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_108._s_0.W = _UNK_15061cbc8;
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector4<double>_>(&local_c8,(TVector4<double> *)&local_108._s_0);
    return bVar1;
  case 7:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TQuat<double>_>(&local_c8,(TQuat<double> *)&local_108._s_0);
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
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TTransform<double>_>(&local_c8,&local_68);
    return bVar1;
  case 9:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::operator()<FString>
                      (&local_c8,(FString *)&local_e8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::operator()<bool>
                      (&local_c8,false);
    return bVar1;
  case 0xb:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TRotator<double>_>(&local_c8,(TRotator<double> *)&local_e8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::operator()<FName>
                      (&local_c8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_c8,(FSoftObjectPath *)&local_108._s_0);
    return bVar1;
  case 0xe:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector2<double>_>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_c8,(FSoftClassPath *)&local_108._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<UE::Math::TVector4<double>_> @ 149da5230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
operator()<UE::Math::TVector4<double>_>(void *this,TVector4<double> *param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  TTransform<double> local_68;
  
  local_98 = *(undefined8 *)((longlong)this + 8);
  local_a8 = *(longlong **)((longlong)this + 0x38);
  local_b0 = *(undefined8 *)((longlong)this + 0x28);
  local_90 = *(undefined8 *)((longlong)this + 0x10);
  local_88 = *(undefined8 *)((longlong)this + 0x18);
  local_78 = *(undefined4 *)((longlong)this + 0x30);
  local_c8 = &local_98;
  local_c0 = *(undefined8 *)this;
  local_b8 = *(undefined8 *)((longlong)this + 0x20);
  local_a0 = *(undefined8 *)((longlong)this + 0x40);
  local_80 = local_b0;
  switch(*(undefined2 *)(*local_a8 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::operator()<float>
                      (&local_c8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::operator()<double>
                      (&local_c8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::operator()<int>(&local_c8,0)
    ;
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::operator()<__int64>
                      (&local_c8,0);
    return bVar1;
  case 4:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector2<double>_>(&local_c8,(TVector2<double> *)&local_e8._s_0);
    return bVar1;
  case 5:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector<double>_>(&local_c8,(TVector<double> *)&local_e8._s_0);
    return bVar1;
  case 6:
    local_108._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_108._s_0.W = _UNK_15061cbc8;
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector4<double>_>(&local_c8,(TVector4<double> *)&local_108._s_0);
    return bVar1;
  case 7:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TQuat<double>_>(&local_c8,(TQuat<double> *)&local_108._s_0);
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
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TTransform<double>_>(&local_c8,&local_68);
    return bVar1;
  case 9:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::operator()<FString>
                      (&local_c8,(FString *)&local_e8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::operator()<bool>
                      (&local_c8,false);
    return bVar1;
  case 0xb:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TRotator<double>_>(&local_c8,(TRotator<double> *)&local_e8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::operator()<FName>
                      (&local_c8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_c8,(FSoftObjectPath *)&local_108._s_0);
    return bVar1;
  case 0xe:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector4<double>_>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_c8,(FSoftClassPath *)&local_108._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<UE::Math::TVector<double>_> @ 149daa6d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
operator()<UE::Math::TVector<double>_>(void *this,TVector<double> *param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  TTransform<double> local_68;
  
  local_98 = *(undefined8 *)((longlong)this + 8);
  local_a8 = *(longlong **)((longlong)this + 0x38);
  local_b0 = *(undefined8 *)((longlong)this + 0x28);
  local_90 = *(undefined8 *)((longlong)this + 0x10);
  local_88 = *(undefined8 *)((longlong)this + 0x18);
  local_78 = *(undefined4 *)((longlong)this + 0x30);
  local_c8 = &local_98;
  local_c0 = *(undefined8 *)this;
  local_b8 = *(undefined8 *)((longlong)this + 0x20);
  local_a0 = *(undefined8 *)((longlong)this + 0x40);
  local_80 = local_b0;
  switch(*(undefined2 *)(*local_a8 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::operator()<float>
                      (&local_c8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::operator()<double>
                      (&local_c8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::operator()<int>(&local_c8,0);
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::operator()<__int64>
                      (&local_c8,0);
    return bVar1;
  case 4:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector2<double>_>(&local_c8,(TVector2<double> *)&local_e8._s_0);
    return bVar1;
  case 5:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector<double>_>(&local_c8,(TVector<double> *)&local_e8._s_0);
    return bVar1;
  case 6:
    local_108._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_108._s_0.W = _UNK_15061cbc8;
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TVector4<double>_>(&local_c8,(TVector4<double> *)&local_108._s_0);
    return bVar1;
  case 7:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TQuat<double>_>(&local_c8,(TQuat<double> *)&local_108._s_0);
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
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TTransform<double>_>(&local_c8,&local_68);
    return bVar1;
  case 9:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::operator()<FString>
                      (&local_c8,(FString *)&local_e8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::operator()<bool>
                      (&local_c8,false);
    return bVar1;
  case 0xb:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::
            operator()<UE::Math::TRotator<double>_>(&local_c8,(TRotator<double> *)&local_e8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::operator()<FName>
                      (&local_c8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_c8,(FSoftObjectPath *)&local_108._s_0);
    return bVar1;
  case 0xe:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<UE::Math::TVector<double>_>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_c8,(FSoftClassPath *)&local_108._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<FSoftClassPath> @ 149db03f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
operator()<FSoftClassPath>(void *this,FSoftClassPath *param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  TTransform<double> local_68;
  
  local_98 = *(undefined8 *)((longlong)this + 8);
  local_a8 = *(longlong **)((longlong)this + 0x38);
  local_b0 = *(undefined8 *)((longlong)this + 0x28);
  local_90 = *(undefined8 *)((longlong)this + 0x10);
  local_88 = *(undefined8 *)((longlong)this + 0x18);
  local_78 = *(undefined4 *)((longlong)this + 0x30);
  local_c8 = &local_98;
  local_c0 = *(undefined8 *)this;
  local_b8 = *(undefined8 *)((longlong)this + 0x20);
  local_a0 = *(undefined8 *)((longlong)this + 0x40);
  local_80 = local_b0;
  switch(*(undefined2 *)(*local_a8 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<float>(&local_c8,0.0);
    break;
  case 1:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<double>(&local_c8,0.0);
    break;
  case 2:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<int>(&local_c8,0);
    break;
  case 3:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<__int64>(&local_c8,0);
    break;
  case 4:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<UE::Math::TVector2<double>_>
                      (&local_c8,(TVector2<double> *)&local_e8._s_0);
    break;
  case 5:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<UE::Math::TVector<double>_>
                      (&local_c8,(TVector<double> *)&local_e8._s_0);
    break;
  case 6:
    local_108._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_108._s_0.W = _UNK_15061cbc8;
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<UE::Math::TVector4<double>_>
                      (&local_c8,(TVector4<double> *)&local_108._s_0);
    break;
  case 7:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<UE::Math::TQuat<double>_>
                      (&local_c8,(TQuat<double> *)&local_108._s_0);
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
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<UE::Math::TTransform<double>_>
                      (&local_c8,&local_68);
    break;
  case 9:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<FString>
                      (&local_c8,(FString *)&local_e8._s_0);
    break;
  case 10:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<bool>(&local_c8,false);
    break;
  case 0xb:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<UE::Math::TRotator<double>_>
                      (&local_c8,(TRotator<double> *)&local_e8._s_0);
    break;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<FName>(&local_c8,(FName)0x0);
    break;
  case 0xd:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_c8,(FSoftObjectPath *)&local_108._s_0);
    break;
  case 0xe:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftClassPath>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_c8,(FSoftClassPath *)&local_108._s_0);
    break;
  default:
    bVar1 = false;
  }
  if (*(void **)&param_1->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x10);
  }
  return bVar1;
}

// operator()<FSoftObjectPath> @ 149db6210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
operator()<FSoftObjectPath>(void *this,FSoftObjectPath *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  TVector4<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  TTransform<double> local_68;
  
  local_98 = *(undefined8 *)((longlong)this + 8);
  local_a8 = *(longlong **)((longlong)this + 0x38);
  local_b0 = *(undefined8 *)((longlong)this + 0x28);
  local_90 = *(undefined8 *)((longlong)this + 0x10);
  local_88 = *(undefined8 *)((longlong)this + 0x18);
  local_78 = *(undefined4 *)((longlong)this + 0x30);
  local_c8 = &local_98;
  local_c0 = *(undefined8 *)this;
  local_b8 = *(undefined8 *)((longlong)this + 0x20);
  local_a0 = *(undefined8 *)((longlong)this + 0x40);
  local_80 = local_b0;
  switch(*(undefined2 *)(*local_a8 + 10)) {
  case 0:
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<float>(&local_c8,0.0);
    break;
  case 1:
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<double>(&local_c8,0.0);
    break;
  case 2:
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<int>(&local_c8,0);
    break;
  case 3:
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<__int64>(&local_c8,0);
    break;
  case 4:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<UE::Math::TVector2<double>_>
                      (&local_c8,(TVector2<double> *)&local_e8._s_0);
    break;
  case 5:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<UE::Math::TVector<double>_>
                      (&local_c8,(TVector<double> *)&local_e8._s_0);
    break;
  case 6:
    local_108._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_108._s_0.W = _UNK_15061cbc8;
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<UE::Math::TVector4<double>_>
                      (&local_c8,(TVector4<double> *)&local_108._s_0);
    break;
  case 7:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<UE::Math::TQuat<double>_>
                      (&local_c8,(TQuat<double> *)&local_108._s_0);
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
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::
            operator()<UE::Math::TTransform<double>_>(&local_c8,&local_68);
    break;
  case 9:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<FString>
                      (&local_c8,(FString *)&local_e8._s_0);
    break;
  case 10:
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<bool>(&local_c8,false);
    break;
  case 0xb:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<UE::Math::TRotator<double>_>
                      (&local_c8,(TRotator<double> *)&local_e8._s_0);
    break;
  case 0xc:
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<FName>(&local_c8,(FName)0x0);
    break;
  case 0xd:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_c8,(FSoftObjectPath *)&local_108._s_0);
    break;
  case 0xe:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FSoftObjectPath>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_c8,(FSoftClassPath *)&local_108._s_0);
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

// operator()<FName> @ 149dbb590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::operator()<FName>
          (void *this,FName param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  TTransform<double> local_68;
  
  local_98 = *(undefined8 *)((longlong)this + 8);
  local_a8 = *(longlong **)((longlong)this + 0x38);
  local_b0 = *(undefined8 *)((longlong)this + 0x28);
  local_90 = *(undefined8 *)((longlong)this + 0x10);
  local_88 = *(undefined8 *)((longlong)this + 0x18);
  local_78 = *(undefined4 *)((longlong)this + 0x30);
  local_c8 = &local_98;
  local_c0 = *(undefined8 *)this;
  local_b8 = *(undefined8 *)((longlong)this + 0x20);
  local_a0 = *(undefined8 *)((longlong)this + 0x40);
  local_80 = local_b0;
  switch(*(undefined2 *)(*local_a8 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FName>'::__l2::<lambda_2>::operator()<float>(&local_c8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FName>'::__l2::<lambda_2>::operator()<double>(&local_c8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FName>'::__l2::<lambda_2>::operator()<int>(&local_c8,0);
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FName>'::__l2::<lambda_2>::operator()<__int64>(&local_c8,0);
    return bVar1;
  case 4:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FName>'::__l2::<lambda_2>::operator()<UE::Math::TVector2<double>_>
                      (&local_c8,(TVector2<double> *)&local_e8._s_0);
    return bVar1;
  case 5:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FName>'::__l2::<lambda_2>::operator()<UE::Math::TVector<double>_>
                      (&local_c8,(TVector<double> *)&local_e8._s_0);
    return bVar1;
  case 6:
    local_108._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_108._s_0.W = _UNK_15061cbc8;
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FName>'::__l2::<lambda_2>::operator()<UE::Math::TVector4<double>_>
                      (&local_c8,(TVector4<double> *)&local_108._s_0);
    return bVar1;
  case 7:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FName>'::__l2::<lambda_2>::operator()<UE::Math::TQuat<double>_>
                      (&local_c8,(TQuat<double> *)&local_108._s_0);
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
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FName>'::__l2::<lambda_2>::operator()<UE::Math::TTransform<double>_>
                      (&local_c8,&local_68);
    return bVar1;
  case 9:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FName>'::__l2::<lambda_2>::operator()<FString>
                      (&local_c8,(FString *)&local_e8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FName>'::__l2::<lambda_2>::operator()<bool>(&local_c8,false);
    return bVar1;
  case 0xb:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FName>'::__l2::<lambda_2>::operator()<UE::Math::TRotator<double>_>
                      (&local_c8,(TRotator<double> *)&local_e8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FName>'::__l2::<lambda_2>::operator()<FName>(&local_c8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FName>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_c8,(FSoftObjectPath *)&local_108._s_0);
    return bVar1;
  case 0xe:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FName>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_c8,(FSoftClassPath *)&local_108._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<FString> @ 149dc1070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
operator()<FString>(void *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  TVector4<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  TTransform<double> local_68;
  
  local_98 = *(undefined8 *)((longlong)this + 8);
  local_a8 = *(longlong **)((longlong)this + 0x38);
  local_b0 = *(undefined8 *)((longlong)this + 0x28);
  local_90 = *(undefined8 *)((longlong)this + 0x10);
  local_88 = *(undefined8 *)((longlong)this + 0x18);
  local_78 = *(undefined4 *)((longlong)this + 0x30);
  local_c8 = &local_98;
  local_c0 = *(undefined8 *)this;
  local_b8 = *(undefined8 *)((longlong)this + 0x20);
  local_a0 = *(undefined8 *)((longlong)this + 0x40);
  local_80 = local_b0;
  switch(*(undefined2 *)(*local_a8 + 10)) {
  case 0:
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FString>'::__l2::<lambda_2>::operator()<float>(&local_c8,0.0);
    break;
  case 1:
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FString>'::__l2::<lambda_2>::operator()<double>(&local_c8,0.0);
    break;
  case 2:
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FString>'::__l2::<lambda_2>::operator()<int>(&local_c8,0);
    break;
  case 3:
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FString>'::__l2::<lambda_2>::operator()<__int64>(&local_c8,0);
    break;
  case 4:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FString>'::__l2::<lambda_2>::operator()<UE::Math::TVector2<double>_>
                      (&local_c8,(TVector2<double> *)&local_e8._s_0);
    break;
  case 5:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FString>'::__l2::<lambda_2>::operator()<UE::Math::TVector<double>_>
                      (&local_c8,(TVector<double> *)&local_e8._s_0);
    break;
  case 6:
    local_108._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_108._s_0.W = _UNK_15061cbc8;
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FString>'::__l2::<lambda_2>::operator()<UE::Math::TVector4<double>_>
                      (&local_c8,(TVector4<double> *)&local_108._s_0);
    break;
  case 7:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FString>'::__l2::<lambda_2>::operator()<UE::Math::TQuat<double>_>
                      (&local_c8,(TQuat<double> *)&local_108._s_0);
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
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FString>'::__l2::<lambda_2>::operator()<UE::Math::TTransform<double>_>
                      (&local_c8,&local_68);
    break;
  case 9:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FString>'::__l2::<lambda_2>::operator()<FString>
                      (&local_c8,(FString *)&local_e8._s_0);
    break;
  case 10:
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FString>'::__l2::<lambda_2>::operator()<bool>(&local_c8,false);
    break;
  case 0xb:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FString>'::__l2::<lambda_2>::operator()<UE::Math::TRotator<double>_>
                      (&local_c8,(TRotator<double> *)&local_e8._s_0);
    break;
  case 0xc:
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FString>'::__l2::<lambda_2>::operator()<FName>(&local_c8,(FName)0x0);
    break;
  case 0xd:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FString>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_c8,(FSoftObjectPath *)&local_108._s_0);
    break;
  case 0xe:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar2 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<FString>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_c8,(FSoftClassPath *)&local_108._s_0);
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

// operator()<__int64> @ 149dc66a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
operator()<__int64>(void *this,long64 param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  TTransform<double> local_68;
  
  local_98 = *(undefined8 *)((longlong)this + 8);
  local_a8 = *(longlong **)((longlong)this + 0x38);
  local_b0 = *(undefined8 *)((longlong)this + 0x28);
  local_90 = *(undefined8 *)((longlong)this + 0x10);
  local_88 = *(undefined8 *)((longlong)this + 0x18);
  local_78 = *(undefined4 *)((longlong)this + 0x30);
  local_c8 = &local_98;
  local_c0 = *(undefined8 *)this;
  local_b8 = *(undefined8 *)((longlong)this + 0x20);
  local_a0 = *(undefined8 *)((longlong)this + 0x40);
  local_80 = local_b0;
  switch(*(undefined2 *)(*local_a8 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<float>(&local_c8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<double>(&local_c8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<int>(&local_c8,0);
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<__int64>(&local_c8,0);
    return bVar1;
  case 4:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<UE::Math::TVector2<double>_>
                      (&local_c8,(TVector2<double> *)&local_e8._s_0);
    return bVar1;
  case 5:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<UE::Math::TVector<double>_>
                      (&local_c8,(TVector<double> *)&local_e8._s_0);
    return bVar1;
  case 6:
    local_108._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_108._s_0.W = _UNK_15061cbc8;
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<UE::Math::TVector4<double>_>
                      (&local_c8,(TVector4<double> *)&local_108._s_0);
    return bVar1;
  case 7:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<UE::Math::TQuat<double>_>
                      (&local_c8,(TQuat<double> *)&local_108._s_0);
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
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<UE::Math::TTransform<double>_>
                      (&local_c8,&local_68);
    return bVar1;
  case 9:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<FString>
                      (&local_c8,(FString *)&local_e8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<bool>(&local_c8,false);
    return bVar1;
  case 0xb:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<UE::Math::TRotator<double>_>
                      (&local_c8,(TRotator<double> *)&local_e8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<FName>(&local_c8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_c8,(FSoftObjectPath *)&local_108._s_0);
    return bVar1;
  case 0xe:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<__int64>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_c8,(FSoftClassPath *)&local_108._s_0);
    return bVar1;
  default:
    return false;
  }
}

// operator()<bool> @ 149dcbc30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::operator()<bool>
          (void *this,bool param_1)

{
  bool bVar1;
  TVector4<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  TTransform<double> local_68;
  
  local_98 = *(undefined8 *)((longlong)this + 8);
  local_a8 = *(longlong **)((longlong)this + 0x38);
  local_b0 = *(undefined8 *)((longlong)this + 0x28);
  local_90 = *(undefined8 *)((longlong)this + 0x10);
  local_88 = *(undefined8 *)((longlong)this + 0x18);
  local_78 = *(undefined4 *)((longlong)this + 0x30);
  local_c8 = &local_98;
  local_c0 = *(undefined8 *)this;
  local_b8 = *(undefined8 *)((longlong)this + 0x20);
  local_a0 = *(undefined8 *)((longlong)this + 0x40);
  local_80 = local_b0;
  switch(*(undefined2 *)(*local_a8 + 10)) {
  case 0:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<bool>'::__l2::<lambda_2>::operator()<float>(&local_c8,0.0);
    return bVar1;
  case 1:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<bool>'::__l2::<lambda_2>::operator()<double>(&local_c8,0.0);
    return bVar1;
  case 2:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<bool>'::__l2::<lambda_2>::operator()<int>(&local_c8,0);
    return bVar1;
  case 3:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<bool>'::__l2::<lambda_2>::operator()<__int64>(&local_c8,0);
    return bVar1;
  case 4:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<bool>'::__l2::<lambda_2>::operator()<UE::Math::TVector2<double>_>
                      (&local_c8,(TVector2<double> *)&local_e8._s_0);
    return bVar1;
  case 5:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<bool>'::__l2::<lambda_2>::operator()<UE::Math::TVector<double>_>
                      (&local_c8,(TVector<double> *)&local_e8._s_0);
    return bVar1;
  case 6:
    local_108._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_108._s_0.W = _UNK_15061cbc8;
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<bool>'::__l2::<lambda_2>::operator()<UE::Math::TVector4<double>_>
                      (&local_c8,(TVector4<double> *)&local_108._s_0);
    return bVar1;
  case 7:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<bool>'::__l2::<lambda_2>::operator()<UE::Math::TQuat<double>_>
                      (&local_c8,(TQuat<double> *)&local_108._s_0);
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
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<bool>'::__l2::<lambda_2>::operator()<UE::Math::TTransform<double>_>
                      (&local_c8,&local_68);
    return bVar1;
  case 9:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<bool>'::__l2::<lambda_2>::operator()<FString>
                      (&local_c8,(FString *)&local_e8._s_0);
    return bVar1;
  case 10:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<bool>'::__l2::<lambda_2>::operator()<bool>(&local_c8,false);
    return bVar1;
  case 0xb:
    local_e8._s_0.X = 0.0;
    local_e8._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_e8._s_0.Z = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<bool>'::__l2::<lambda_2>::operator()<UE::Math::TRotator<double>_>
                      (&local_c8,(TRotator<double> *)&local_e8._s_0);
    return bVar1;
  case 0xc:
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<bool>'::__l2::<lambda_2>::operator()<FName>(&local_c8,(FName)0x0);
    return bVar1;
  case 0xd:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<bool>'::__l2::<lambda_2>::operator()<FSoftObjectPath>
                      (&local_c8,(FSoftObjectPath *)&local_108._s_0);
    return bVar1;
  case 0xe:
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    local_108._s_0.Z = 0.0;
    local_108._s_0.W = 0.0;
    bVar1 = ``UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
            operator()<bool>'::__l2::<lambda_2>::operator()<FSoftClassPath>
                      (&local_c8,(FSoftClassPath *)&local_108._s_0);
    return bVar1;
  default:
    return false;
  }
}

// UPCGMatchAndSetWeightedByCategory @ 149e35fe0

UPCGMatchAndSetWeightedByCategory * __thiscall
UPCGMatchAndSetWeightedByCategory::UPCGMatchAndSetWeightedByCategory
          (UPCGMatchAndSetWeightedByCategory *this,FVTableHelper *param_1)

{
  UPCGMatchAndSetBase::UPCGMatchAndSetBase((UPCGMatchAndSetBase *)this,param_1);
  this->CategoryType = Double;
  this->_padding_ = (longlong)&___7UPCGMatchAndSetWeightedByCategory__6B_;
  (this->CategoryAttribute).ComparisonIndex = 0;
  (this->CategoryAttribute).Number = 0;
  (this->Categories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Categories).ArrayNum = 0;
  (this->Categories).ArrayMax = 0;
  this->bShouldMutateSeed = true;
  return this;
}

// UPCGMatchAndSetWeightedByCategory @ 149e36020

UPCGMatchAndSetWeightedByCategory * __thiscall
UPCGMatchAndSetWeightedByCategory::UPCGMatchAndSetWeightedByCategory
          (UPCGMatchAndSetWeightedByCategory *this,FObjectInitializer *param_1)

{
  UPCGMatchAndSetBase::UPCGMatchAndSetBase((UPCGMatchAndSetBase *)this,param_1);
  this->CategoryType = Double;
  this->_padding_ = (longlong)&___7UPCGMatchAndSetWeightedByCategory__6B_;
  (this->CategoryAttribute).ComparisonIndex = 0;
  (this->CategoryAttribute).Number = 0;
  (this->Categories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Categories).ArrayNum = 0;
  (this->Categories).ArrayMax = 0;
  this->bShouldMutateSeed = true;
  return this;
}

// ~UPCGMatchAndSetWeightedByCategory @ 149e37570

void __thiscall
UPCGMatchAndSetWeightedByCategory::~UPCGMatchAndSetWeightedByCategory
          (UPCGMatchAndSetWeightedByCategory *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGMatchAndSetWeightedByCategory__6B_;
  DestructItems<FPCGMatchAndSetWeightedByCategoryEntryList,int>
            ((FPCGMatchAndSetWeightedByCategoryEntryList *)(this->Categories).AllocatorInstance.Data
             ,(this->Categories).ArrayNum);
  pFVar1 = (this->Categories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGMatchAndSetBase::~UPCGMatchAndSetBase((UPCGMatchAndSetBase *)this);
  return;
}

// operator() @ 149e40da0

int __thiscall
`UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_3>::operator()
          (void *this,int param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FPCGMatchAndSetWeightedByCategoryEntryList *this_00;
  undefined1 local_res8 [4];
  uint local_resc;
  
  lVar7 = *(longlong *)this;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar7 + 0x48)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  this_00 = (FPCGMatchAndSetWeightedByCategoryEntryList *)
            (*(longlong *)(lVar7 + 0x40) + (longlong)param_1 * 400);
  iVar4 = FPCGMatchAndSetWeightedByCategoryEntryList::GetTotalWeight(this_00);
  if (iVar4 == 0) {
    return -1;
  }
  plVar1 = *(longlong **)((longlong)this + 0x18);
  uVar6 = 0;
  if (param_2 < (int)plVar1[1]) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  PCGHelpers::GetRandomStreamFromSeed
            ((int)local_res8,
             (UPCGSettings *)(ulonglong)*(uint *)((longlong)param_2 * 0xd0 + 0xc4 + *plVar1),
             *(IPCGGraphExecutionSource **)((longlong)this + 8));
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    local_resc = local_resc * 0xbb38435 + 0x3619636b;
    iVar4 = (int)(((float)(local_resc >> 9 | 0x3f800000) - __real_3f800000) * (float)iVar4);
  }
  uVar6 = 0;
  if (0 < (this_00->WeightedEntries).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this_00->WeightedEntries).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      if (iVar4 < *(int *)((this_00->WeightedEntries).AllocatorInstance.Data + lVar7 + 0x170)) {
        return uVar6;
      }
      uVar5 = 0;
      if ((int)uVar6 < (this_00->WeightedEntries).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 - *(int *)((this_00->WeightedEntries).AllocatorInstance.Data + lVar7 + 0x170);
      lVar7 = lVar7 + 0x180;
    } while ((int)uVar6 < (this_00->WeightedEntries).ArrayNum);
  }
  return uVar6;
}

// GetPrivateStaticClass @ 149e5d5b0

UClass * __cdecl UPCGMatchAndSetWeightedByCategory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMatchAndSetWeightedByCategory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMatchAndSetWeightedByCategory",
               &Z_Registration_Info_UClass_UPCGMatchAndSetWeightedByCategory.InnerSingleton,
               StaticRegisterNativesUPCGMatchAndSetWeightedByCategory,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMatchAndSetWeightedByCategory>,
               InternalVTableHelperCtorCaller<UPCGMatchAndSetWeightedByCategory>,local_res8,
               UPCGMatchAndSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMatchAndSetWeightedByCategory.InnerSingleton;
}

// MatchAndSet_Implementation @ 149e785e0

/* WARNING: Type propagation algorithm not settling */
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
UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation
          (UPCGMatchAndSetWeightedByCategory *this,FPCGContext *param_1,
          UPCGPointMatchAndSetSettings *param_2,UPCGPointData *param_3,UPCGPointData *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar7;
  FPCGAttributePropertyInputSelector *pFVar8;
  FPCGCrc FVar9;
  FPCGModule *pFVar10;
  FString *pFVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  ulonglong uVar14;
  longlong lVar15;
  FPCGMetadataTypesConstantStruct *pFVar16;
  double *pdVar17;
  FPCGCrc FVar18;
  uint uVar19;
  FPCGCrc FVar20;
  longlong lVar21;
  FPCGMetadataTypesConstantStruct *pFVar22;
  FPCGMetadataTypesConstantStruct *pFVar23;
  FPCGCrc FVar24;
  <lambda_2> <Var25;
  undefined1 local_4e7 [3];
  uint local_4e4;
  uint local_4e0;
  uint local_4dc;
  ForAnyElementType local_4d8;
  int local_4d0;
  int local_4cc;
  undefined1 local_4c8;
  undefined1 local_4c7 [7];
  FPCGMetadataTypesConstantStruct *local_4c0;
  undefined1 local_4b8 [32];
  undefined1 local_498 [16];
  FString local_488;
  undefined1 local_478 [28];
  undefined8 local_45c;
  TArray<FString,TSizedDefaultAllocator<32>_> local_450;
  undefined1 local_440;
  UPCGMatchAndSetWeightedByCategory **local_438;
  undefined1 *puStack_430;
  undefined1 *local_428;
  undefined1 *puStack_420;
  ForAnyElementType *local_418;
  FString *pFStack_410;
  undefined8 local_408;
  undefined1 *puStack_400;
  undefined1 *local_3f8;
  UPCGPointData *local_3e8;
  UPCGPointData *local_3e0;
  FString local_3d8;
  FSoftObjectPath local_3c8;
  FSoftClassPath local_3a8;
  UPCGMatchAndSetWeightedByCategory **local_388;
  undefined1 *puStack_380;
  undefined1 *local_378;
  undefined1 *puStack_370;
  ForAnyElementType *local_368;
  FString *pFStack_360;
  uint local_358;
  undefined4 uStack_354;
  undefined1 *puStack_350;
  undefined1 *local_348;
  UPCGPointData **local_338;
  undefined1 *puStack_330;
  undefined1 local_328;
  uint7 uStack_327;
  UPCGPointData **local_320;
  FPCGAttributePropertySelector *pFStack_318;
  undefined1 local_310;
  uint7 uStack_30f;
  UPCGMatchAndSetWeightedByCategory *local_308;
  UPCGPointMatchAndSetSettings *local_300;
  FPCGCrc local_2f8;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *local_2f0;
  FString local_2e8;
  FText local_2d8;
  FString local_2c8;
  FString local_2b8;
  FText local_2a8;
  FString local_298;
  FString local_288;
  FText local_278;
  FString local_268;
  FText local_258;
  UPCGPointData **local_248;
  undefined1 *puStack_240;
  longlong local_238;
  UPCGPointData **local_228;
  FPCGAttributePropertySelector *pFStack_220;
  longlong local_218;
  TVector<double>_u_0 local_208;
  TRotator<double> local_1e8;
  FString local_1c8;
  FString local_1b8;
  FText local_1a8;
  FText local_198;
  FPCGAttributePropertySelector local_188;
  TVector2<double>_u_0 local_148;
  FString local_138;
  TQuat<double> local_128;
  TVector4<double>_u_0 local_108;
  undefined8 local_d8;
  undefined8 local_c0;
  TTransform<double> local_b8;
  FTextFormat local_58;
  
  FVar18.Value = 0;
  FVar18.bValid = false;
  FVar18._5_3_ = 0;
  local_4dc = 0;
  if ((((param_2 == (UPCGPointMatchAndSetSettings *)0x0) || (param_3 == (UPCGPointData *)0x0)) ||
      (param_4 == (UPCGPointData *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSettings && InPointData && OutPointData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MatchAndSet\\PCGMatchAndSetWeightedByCategory.cpp"
                         ,0x82,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_4->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutPointData->Metadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MatchAndSet\\PCGMatchAndSetWeightedByCategory.cpp"
                         ,0x83,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar7 = UPCGPointData::GetMutablePoints(param_4);
  if (((param_3->Points).ArrayNum != pTVar7->ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPointData->GetPoints().Num() == OutPointData->GetMutablePoints().Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MatchAndSet\\PCGMatchAndSetWeightedByCategory.cpp"
                         ,0x84,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = false;
  local_4e4 = 0xffffffff;
  local_4c0 = (FPCGMetadataTypesConstantStruct *)0x0;
  local_4e0 = 0;
  FVar9 = FVar18;
  FVar20 = FVar18;
  if ((this->Categories).ArrayNum < 1) {
    return;
  }
  do {
    uVar19 = FVar20.Value;
    uVar6 = 0;
    if ((int)uVar19 < (this->Categories).ArrayNum) {
      uVar6 = ~uVar19 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar19 = local_4e0, bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->Categories).AllocatorInstance.Data;
    if ((*(FScriptContainerElement *)
          ((longlong)&((IPCGGraphExecutionSource *)((longlong)FVar9 + 0x170))->field_0x0 +
          (longlong)pFVar2) != (FScriptContainerElement)0x0) && (local_4e4 == 0xffffffff)) {
      local_4e4 = uVar19;
    }
    local_4dc = *(uint *)((longlong)
                          &((IPCGGraphExecutionSource *)((longlong)FVar9 + 0x180))->field_0x0 +
                         (longlong)pFVar2);
    uVar14 = (ulonglong)(int)local_4dc;
    lVar15 = *(longlong *)
              ((longlong)&((IPCGGraphExecutionSource *)((longlong)FVar9 + 0x178))->field_0x0 +
              (longlong)pFVar2);
    lVar21 = uVar14 * 0x180 + lVar15;
    FVar24 = FVar18;
    while( true ) {
      if (*(int *)((longlong)&((IPCGGraphExecutionSource *)((longlong)FVar9 + 0x180))->field_0x0 +
                  (longlong)pFVar2) != (int)uVar14) {
        local_4e7[0] = 0;
        `TCheckedPointerIterator<FPCGMatchAndSetWeightedEntry_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_4e7);
        uVar14 = (ulonglong)local_4dc;
      }
      if (lVar15 == lVar21) break;
      FVar24.Value = FVar24.Value + *(int *)(lVar15 + 0x170);
      FVar24._4_4_ = 0;
      lVar15 = lVar15 + 0x180;
    }
    if (0 < (int)FVar24.Value) {
      bVar4 = true;
      if ((*(int *)((longlong)&((IPCGGraphExecutionSource *)((longlong)FVar9 + 0x180))->field_0x0 +
                   (longlong)pFVar2) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Category.WeightedEntries.Num() > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MatchAndSet\\PCGMatchAndSetWeightedByCategory.cpp"
                             ,0x97,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(int *)((longlong)&((IPCGGraphExecutionSource *)((longlong)FVar9 + 0x180))->field_0x0 +
                   (longlong)pFVar2) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_4c0 = *(FPCGMetadataTypesConstantStruct **)
                   ((longlong)&((IPCGGraphExecutionSource *)((longlong)FVar9 + 0x178))->field_0x0 +
                   (longlong)pFVar2);
    }
    pFVar16 = local_4c0;
    FVar20.Value = local_4e0 + 1;
    FVar20._4_4_ = 0;
    FVar9 = (FPCGCrc)((longlong)FVar9 + 400);
    local_4e0 = FVar20.Value;
  } while ((int)FVar20.Value < (this->Categories).ArrayNum);
  if (!bVar4) {
    return;
  }
  local_478._0_8_ = &___7FPCGAttributePropertyInputSelector__6B_;
  local_478._8_4_ = 0;
  local_478._12_4_ = 0;
  local_478._20_8_ = PCGMetadataAttributeConstants::LastAttributeName;
  if (PCGMetadataAttributeConstants::LastAttributeName != this->CategoryAttribute) {
    local_478._20_8_ = this->CategoryAttribute;
  }
  local_478._16_4_ = 0;
  local_45c = 0;
  local_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_450.ArrayNum = 0;
  local_450.ArrayMax = 0;
  local_440 = 0;
  pFVar8 = FPCGAttributePropertyInputSelector::CopyAndFixLast
                     ((FPCGAttributePropertyInputSelector *)local_478,
                      (FPCGAttributePropertyInputSelector *)&local_388,(UPCGData *)param_3);
  local_478._8_4_ = *(undefined4 *)&pFVar8->field_0x8;
  local_478._12_4_ = (undefined4)*(undefined8 *)&pFVar8->field_0xc;
  local_478._16_4_ = (undefined4)((ulonglong)*(undefined8 *)&pFVar8->field_0xc >> 0x20);
  local_478._20_8_ = *(undefined8 *)&pFVar8->field_0x14;
  local_45c = *(undefined8 *)&pFVar8->field_0x1c;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&local_450,(TArray<FString,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x28);
  local_440 = pFVar8->field_0x38;
  DestructItems<FString,int>(pFStack_360,local_358);
  if (pFStack_360 != (FString *)0x0) {
    FMemory::Free(pFStack_360);
  }
  FPCGAttributePropertyOutputSelector::CopyAndFixSource
            (&param_2->SetTarget,(FPCGAttributePropertyOutputSelector *)&local_188,
             (FPCGAttributePropertyInputSelector *)local_478,(UPCGData *)param_4);
  bVar4 = UPCGMatchAndSetBase::CreateAttributeIfNeeded
                    ((UPCGMatchAndSetBase *)this,param_1,&local_188,pFVar16,param_4,param_2);
  if (!bVar4) goto LAB_149e79423;
  uVar6 = (this->Categories).ArrayNum;
  local_4b8._8_8_ =
       (TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> *)0x0
  ;
  local_4b8._16_8_ = 0;
  local_4d8.Data = (FScriptContainerElement *)0x0;
  local_4d0 = 0;
  local_4cc = 0;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (0 < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar6,(ForAnyElementType *)(local_4b8 + 8),0,(int *)(local_4b8 + 0x14));
  }
  uVar6 = (this->Categories).ArrayNum;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (local_4cc < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar6,&local_4d8,local_4d0,&local_4cc);
  }
  FVar9 = (FPCGCrc)::operator_new(0x18);
  local_488.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar18;
  if (FVar9 != (FPCGCrc)0x0) {
    *(undefined1 *)((longlong)FVar9 + 8) = 1;
    *(undefined ***)FVar9 = &___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
    *(IPCGGraphExecutionSource *)((longlong)FVar9 + 0x10) = (IPCGGraphExecutionSource)0x0;
    local_488.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar9;
  }
  local_4dc = (this->Categories).ArrayNum;
  uVar14 = (ulonglong)(int)local_4dc;
  pFVar16 = (FPCGMetadataTypesConstantStruct *)(this->Categories).AllocatorInstance.Data;
  pdVar17 = &pFVar16[1].DoubleValue;
  pFVar22 = (FPCGMetadataTypesConstantStruct *)((longlong)pFVar16 + uVar14 * 400);
  while( true ) {
    local_4c0 = pFVar16;
    if ((this->Categories).ArrayNum != (int)uVar14) {
      `TCheckedPointerIterator<FPCGMatchAndSetWeightedByCategoryEntryList_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_4c8);
    }
    if (pFVar16 == pFVar22) break;
    FPCGMetadataTypesConstantStruct::
    Dispatcher<_UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation_::__l2::<lambda_1>_>
              (pFVar16,(TArray<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,TSizedDefaultAllocator<32>_>
                        *)(local_4b8 + 8));
    if (local_4d0 == local_4cc) {
      local_4d0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_4d8,&local_4cc);
    }
    lVar15 = (longlong)local_4d0;
    local_4d0 = local_4d0 + 1;
    <Var25.ValuesAccessor =
         (TArray<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,TSizedDefaultAllocator<32>_>
          *)(local_4d8.Data + lVar15 * 0x10);
    ((<Var25.ValuesAccessor)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (<Var25.ValuesAccessor)->ArrayNum = 0;
    (<Var25.ValuesAccessor)->ArrayMax = 0;
    iVar1 = *(int *)pdVar17;
    pFVar16 = (FPCGMetadataTypesConstantStruct *)pdVar17[-1];
    pFVar23 = (FPCGMetadataTypesConstantStruct *)((longlong)iVar1 * 0x180 + (longlong)pFVar16);
    while( true ) {
      if (*(int *)pdVar17 != iVar1) {
        `TCheckedPointerIterator<FPCGMatchAndSetWeightedEntry_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_4c7);
      }
      if (pFVar16 == pFVar23) break;
      FPCGMetadataTypesConstantStruct::
      Dispatcher<_UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation_::__l52::<lambda_2>_>
                (pFVar16,<Var25);
      pFVar16 = (FPCGMetadataTypesConstantStruct *)&pFVar16[1].DoubleValue;
    }
    uVar14 = (ulonglong)local_4dc;
    pFVar16 = (FPCGMetadataTypesConstantStruct *)&local_4c0[1].Vector2Value;
    pdVar17 = pdVar17 + 0x32;
  }
  FVar9 = FVar18;
  if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
     (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar4)) {
    FVar9 = (FPCGCrc)(param_1->ExecutionSource).InterfaceInstance;
  }
  pTVar7 = &param_3->Points;
  PCGAttributeAccessorHelpers::CreateConstAccessor
            ((UPCGData *)local_4b8,(FPCGAttributePropertySelector *)param_3,SUB81(local_478,0));
  local_338 = &local_3e8;
  local_328 = 0;
  local_238 = (ulonglong)uStack_327 << 8;
  puStack_330 = local_478;
  local_3e8 = param_3;
  local_248 = local_338;
  puStack_240 = puStack_330;
  pFVar10 = FPCGModule::GetPCGModuleChecked();
  FPCGAttributeAccessorFactory::
  CallOnMethod<UPCGData_const_,_FPCGAttributeAccessorFactory::CreateSimpleConstKeys_::__l2::<lambda_1>_>
            (&pFVar10->AttributeAccessorFactory,(UPCGData *)(local_498 + 8),(<lambda_1> *)param_3);
  if (((undefined8 *)local_4b8._0_8_ == (undefined8 *)0x0) ||
     ((undefined8 *)local_498._8_8_ == (undefined8 *)0x0)) {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_278,L"PCGMatchAndSetWeightedByCategoryElement",
                           L"InputAccessorFailed",
                           L"Failed to create input accessor or iterator in MatchAndSet");
      FText::ToString(pFVar12);
      if (param_1 != (FPCGContext *)0x0) {
        FPCGContext::GetTaskName(param_1,&local_288);
        FVar18.Value = 3;
        FVar18.bValid = false;
        FVar18._5_3_ = 0;
        FPCGContext::GetExecutionSourceName(param_1,&local_298);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)FVar18 & 2) != 0) &&
         (FVar18.Value = FVar18.Value & 0xfffffffd, FVar18._4_4_ = 0,
         local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)FVar18 & 1) != 0) &&
         (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
      if (local_278.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    PCGAttributeAccessorHelpers::CreateAccessor
              ((UPCGData *)local_498,(FPCGAttributePropertySelector *)param_4,SUB81(&local_188,0));
    local_320 = &local_3e0;
    local_310 = 0;
    local_218 = (ulonglong)uStack_30f << 8;
    pFStack_318 = &local_188;
    local_3e0 = param_4;
    local_228 = local_320;
    pFStack_220 = pFStack_318;
    pFVar10 = FPCGModule::GetPCGModuleChecked();
    FPCGAttributeAccessorFactory::
    CallOnMethod<UPCGData,_FPCGAttributeAccessorFactory::CreateSimpleKeys_::__l2::<lambda_1>_>
              (&pFVar10->AttributeAccessorFactory,(UPCGData *)(local_4b8 + 0x18),
               (<lambda_1> *)param_4);
    if (((undefined8 *)local_498._0_8_ == (undefined8 *)0x0) ||
       ((undefined8 *)local_4b8._24_8_ == (undefined8 *)0x0)) {
      if ((byte)LogPCG._0_1_ < 3) goto LAB_149e7928d;
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_2a8,L"PCGMatchAndSetWeightedByCategoryElement",
                           L"FailedToCreateTargetAccessor",
                           L"Failed to create output accessor or iterator");
      FText::ToString(pFVar12);
      if (param_1 != (FPCGContext *)0x0) {
        FPCGContext::GetTaskName(param_1,&local_2b8);
        FVar18.Value = 0xc;
        FVar18.bValid = false;
        FVar18._5_3_ = 0;
        FPCGContext::GetExecutionSourceName(param_1,&local_2c8);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)FVar18 & 8) != 0) &&
         (FVar18.Value = FVar18.Value & 0xfffffff7, FVar18._4_4_ = 0,
         local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)FVar18 & 4) != 0) &&
         (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
LAB_149e79282:
      if (local_2a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
      }
    }
    else if (*(char *)(local_498._0_8_ + 8) == '\0') {
      local_438 = &local_308;
      puStack_430 = local_4b8;
      local_428 = local_498 + 8;
      puStack_420 = local_4b8 + 8;
      local_418 = &local_4d8;
      pFStack_410 = &local_488;
      local_358 = local_4e4;
      puStack_400 = local_498;
      local_3f8 = local_4b8 + 0x18;
      local_408 = CONCAT44(uStack_354,local_4e4);
      local_388 = local_438;
      puStack_380 = puStack_430;
      local_378 = local_428;
      puStack_370 = puStack_420;
      local_368 = local_418;
      pFStack_360 = pFStack_410;
      puStack_350 = puStack_400;
      local_348 = local_3f8;
      local_308 = this;
      local_300 = param_2;
      local_2f8 = FVar9;
      local_2f0 = pTVar7;
      switch(*(undefined2 *)(local_4b8._0_8_ + 10)) {
      case 0:
        bVar4 = `UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
                operator()<float>(&local_438,0.0);
        break;
      case 1:
        bVar4 = `UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
                operator()<double>(&local_438,0.0);
        break;
      case 2:
        bVar4 = `UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
                operator()<int>(&local_438,0);
        break;
      case 3:
        bVar4 = `UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
                operator()<__int64>(&local_438,0);
        break;
      case 4:
        local_148._s_0.X = 0.0;
        local_148._s_0.Y = 0.0;
        bVar4 = `UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
                operator()<UE::Math::TVector2<double>_>
                          (&local_438,(TVector2<double> *)&local_148._s_0);
        break;
      case 5:
        local_208._s_0.X = 0.0;
        local_208._s_0.Y = 0.0;
        local_d8 = 0;
        local_208._s_0.Z = 0.0;
        bVar4 = `UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
                operator()<UE::Math::TVector<double>_>
                          (&local_438,(TVector<double> *)&local_208._s_0);
        break;
      case 6:
        local_108._s_0.Z = ___xmm_3ff00000000000000000000000000000;
        local_108._s_0.W = _UNK_15061cbc8;
        local_108._s_0.X = 0.0;
        local_108._s_0.Y = 0.0;
        bVar4 = `UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
                operator()<UE::Math::TVector4<double>_>
                          (&local_438,(TVector4<double> *)&local_108._s_0);
        break;
      case 7:
        local_128.X = 0.0;
        local_128.Y = 0.0;
        local_128.Z = 0.0;
        local_128.W = 0.0;
        bVar4 = `UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
                operator()<UE::Math::TQuat<double>_>(&local_438,&local_128);
        break;
      case 8:
        local_b8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_b8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_b8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        local_b8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_b8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_b8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_b8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_b8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        bVar4 = `UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
                operator()<UE::Math::TTransform<double>_>(&local_438,&local_b8);
        break;
      case 9:
        local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3d8.Data.ArrayNum = 0;
        local_3d8.Data.ArrayMax = 0;
        bVar4 = `UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
                operator()<FString>(&local_438,&local_3d8);
        break;
      case 10:
        bVar4 = `UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
                operator()<bool>(&local_438,false);
        break;
      case 0xb:
        local_1e8.Pitch = 0.0;
        local_1e8.Yaw = 0.0;
        local_c0 = 0;
        local_1e8.Roll = 0.0;
        bVar4 = `UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
                operator()<UE::Math::TRotator<double>_>(&local_438,&local_1e8);
        break;
      case 0xc:
        bVar4 = `UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
                operator()<FName>(&local_438,(FName)0x0);
        break;
      case 0xd:
        local_3c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_3c8.AssetPath.PackageName.Number = 0;
        local_3c8.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_3c8.AssetPath.AssetName.Number = 0;
        local_3c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3c8.SubPathString.Data.ArrayNum = 0;
        local_3c8.SubPathString.Data.ArrayMax = 0;
        bVar4 = `UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
                operator()<FSoftObjectPath>(&local_438,&local_3c8);
        break;
      case 0xe:
        local_3a8._0_8_ = 0;
        local_3a8._8_8_ = 0;
        local_3a8._16_8_ = 0;
        local_3a8._24_8_ = 0;
        bVar4 = `UPCGMatchAndSetWeightedByCategory::MatchAndSet_Implementation'::__l2::<lambda_4>::
                operator()<FSoftClassPath>(&local_438,&local_3a8);
        break;
      default:
        goto switchD_149e78e9a_default;
      }
      if (bVar4 == false) {
switchD_149e78e9a_default:
        if (2 < (byte)LogPCG._0_1_) {
          pFVar12 = FText::AsLocalizable_Advanced_LocText
                              (&local_2d8,L"PCGMatchAndSetWeightedByCategoryElement",
                               L"ErrorGettingSettingValues",
                               L"Error while getting/setting values in the MatchAndSet");
          FText::ToString(pFVar12);
          if (param_1 != (FPCGContext *)0x0) {
            FPCGContext::GetTaskName(param_1,&local_2e8);
            FVar18.Value = 0xc0;
            FVar18.bValid = false;
            FVar18._5_3_ = 0;
            FPCGContext::GetExecutionSourceName(param_1,&local_138);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (((char)FVar18.Value < '\0') &&
             (FVar18.Value = FVar18.Value & 0xffffff7f, FVar18._4_4_ = 0,
             local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          local_2a8.TextData.Reference = local_2d8.TextData.Reference;
          if ((((ulonglong)FVar18 & 0x40) != 0) &&
             (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
            local_2a8.TextData.Reference = local_2d8.TextData.Reference;
          }
          goto LAB_149e79282;
        }
      }
    }
    else if (2 < (byte)LogPCG._0_1_) {
      pFVar11 = FPCGAttributePropertySelector::ToString(&local_188,&local_268,false);
      FText::FromString(&local_258,pFVar11);
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_198,L"PCGMatchAndSetWeightedByCategoryElement",
                           L"SetTargetAccessorIsReadOnly",
                           L"Attribute/Property \'{0}\' is read only.");
      pFVar13 = FTextFormat::FTextFormat(&local_58,pFVar12,Default);
      pFVar12 = FText::Format<FText>(&local_1a8,pFVar13,&local_258);
      FText::ToString(pFVar12);
      if (param_1 != (FPCGContext *)0x0) {
        FPCGContext::GetTaskName(param_1,&local_1b8);
        FVar18.Value = 0x30;
        FVar18.bValid = false;
        FVar18._5_3_ = 0;
        FPCGContext::GetExecutionSourceName(param_1,&local_1c8);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)FVar18 & 0x20) != 0) &&
         (FVar18.Value = FVar18.Value & 0xffffffdf, FVar18._4_4_ = 0,
         local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)FVar18 & 0x10) != 0) &&
         (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      local_2a8.TextData.Reference = local_198.TextData.Reference;
      if (local_1a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
        local_2a8.TextData.Reference = local_198.TextData.Reference;
      }
      goto LAB_149e79282;
    }
LAB_149e7928d:
    if ((undefined8 *)local_4b8._24_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_4b8._24_8_)(local_4b8._24_8_,1);
    }
    if ((undefined8 *)local_498._0_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_498._0_8_)(local_498._0_8_,1);
    }
  }
  if ((undefined8 *)local_498._8_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_498._8_8_)(local_498._8_8_,1);
  }
  if ((undefined8 *)local_4b8._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_4b8._0_8_)(local_4b8._0_8_,1);
  }
  if ((FPCGCrc)local_488.Data.AllocatorInstance.Data != (FPCGCrc)0x0) {
    (**(code **)*(IPCGGraphExecutionSource *)local_488.Data.AllocatorInstance.Data)
              (local_488.Data.AllocatorInstance.Data,1);
  }
  DestructItems<TArray<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,TSizedDefaultAllocator<32>_>
              *)local_4d8.Data,local_4d0);
  if ((TArray<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,TSizedDefaultAllocator<32>_>
       *)local_4d8.Data !=
      (TArray<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,TSizedDefaultAllocator<32>_>
       *)0x0) {
    FMemory::Free(local_4d8.Data);
  }
  DestructItems<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int>
            ((TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>
              *)local_4b8._8_8_,local_4b8._16_4_);
  if ((TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> *)
      local_4b8._8_8_ !=
      (TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> *)0x0)
  {
    FMemory::Free((void *)local_4b8._8_8_);
  }
LAB_149e79423:
  DestructItems<FString,int>
            ((FString *)local_188.ExtraNames.AllocatorInstance.Data,local_188.ExtraNames.ArrayNum);
  if (local_188.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.ExtraNames.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_450.AllocatorInstance.Data,local_450.ArrayNum);
  if (local_450.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_450.AllocatorInstance.Data);
  }
  return;
}

// SetCategoryType @ 149e8f370

void __thiscall
UPCGMatchAndSetWeightedByCategory::SetCategoryType
          (UPCGMatchAndSetWeightedByCategory *this,EPCGMetadataTypes param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Categories).ArrayNum;
  pFVar2 = (this->Categories).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 400;
  while( true ) {
    if ((this->Categories).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGMatchAndSetWeightedByCategoryEntryList,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    *pFVar2 = (FScriptContainerElement)param_1;
    pFVar2 = pFVar2 + 400;
  }
  return;
}

// SetType @ 149ec0c60

void __thiscall
UPCGMatchAndSetWeightedByCategory::SetType
          (UPCGMatchAndSetWeightedByCategory *this,EPCGMetadataTypes param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  EPCGMetadataTypes *pEVar4;
  EPCGMetadataTypes *pEVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->Categories).AllocatorInstance.Data;
  uVar1 = (this->Categories).ArrayNum;
  uVar3 = (ulonglong)(int)uVar1;
  pFVar6 = pFVar8 + 0x180;
  pFVar7 = pFVar8 + uVar3 * 400;
  while( true ) {
    if ((this->Categories).ArrayNum != (int)uVar3) {
      `TCheckedPointerIterator<FPCGMatchAndSetWeightedByCategoryEntryList,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    iVar2 = *(int *)pFVar6;
    pEVar4 = *(EPCGMetadataTypes **)(pFVar6 + -8);
    pEVar5 = pEVar4 + (longlong)iVar2 * 0x180;
    while( true ) {
      if (*(int *)pFVar6 != iVar2) {
        `TCheckedPointerIterator<FPCGMatchAndSetWeightedEntry,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pEVar4 == pEVar5) break;
      *pEVar4 = param_1;
      pEVar4 = pEVar4 + 0x180;
    }
    uVar3 = (ulonglong)uVar1;
    pFVar8 = pFVar8 + 400;
    pFVar6 = pFVar6 + 400;
  }
  UPCGMatchAndSetBase::SetType((UPCGMatchAndSetBase *)this,param_1);
  return;
}

// ShouldMutateSeed @ 149ec1d70

bool __thiscall
UPCGMatchAndSetWeightedByCategory::ShouldMutateSeed(UPCGMatchAndSetWeightedByCategory *this)

{
  return this->bShouldMutateSeed;
}

// StaticRegisterNativesUPCGMatchAndSetWeightedByCategory @ 149ec1dc0

void __cdecl
UPCGMatchAndSetWeightedByCategory::StaticRegisterNativesUPCGMatchAndSetWeightedByCategory(void)

{
  return;
}

// UsesRandomProcess @ 149ec4780

bool __thiscall
UPCGMatchAndSetWeightedByCategory::UsesRandomProcess(UPCGMatchAndSetWeightedByCategory *this)

{
  return true;
}

// ValidatePreconditions_Implementation @ 149ec4790

bool __thiscall
UPCGMatchAndSetWeightedByCategory::ValidatePreconditions_Implementation
          (UPCGMatchAndSetWeightedByCategory *this,UPCGPointData *param_1)

{
  code *pcVar1;
  FPCGMetadataDomainID FVar2;
  bool bVar3;
  undefined1 uVar4;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar5;
  FPCGMetadataAttributeBase *pFVar6;
  longlong *plVar7;
  FPCGMetadataDomain *this_00;
  FName local_res10;
  FPCGMetadataDomainID FStack_80;
  FPCGAttributeIdentifier local_68;
  FName local_48;
  FPCGMetadataDomainID FStack_40;
  FPCGAttributeIdentifier local_28;
  
  if ((param_1 != (UPCGPointData *)0x0) && (param_1->_padding_ != 0)) {
    local_48 = this->CategoryAttribute;
    if (this->CategoryAttribute == (FName)0x0) {
      pTVar5 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                       *)(param_1->_padding_ + 0x90),&PCGMetadataDomainID::Default);
      plVar7 = (longlong *)&pTVar5->field_0x10;
      if (pTVar5 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      this_00 = (FPCGMetadataDomain *)0x0;
      if (((plVar7 == (longlong *)0x0) ||
          (this_00 = (FPCGMetadataDomain *)*plVar7, this_00 == (FPCGMetadataDomain *)0x0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DefaultMetadataDomain",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
                             ,0x362,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      FPCGMetadataDomain::GetLatestAttributeNameOrNone(this_00);
      local_48 = local_res10;
    }
    FStack_80._0_8_ = PCGMetadataDomainID::Default._0_8_;
    local_68.MetadataDomain.Flag = FStack_80.Flag;
    local_68.MetadataDomain._1_3_ = FStack_80._1_3_;
    local_68.MetadataDomain.CustomFlag = FStack_80.CustomFlag;
    local_68.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
    local_68.Name = local_48;
    bVar3 = UPCGMetadata::HasAttribute((UPCGMetadata *)param_1->_padding_,&local_68);
    if (bVar3) {
      FStack_40 = PCGMetadataDomainID::Default;
      FVar2 = FStack_40;
      FStack_40._0_8_ = PCGMetadataDomainID::Default._0_8_;
      local_28.MetadataDomain.Flag = FStack_40.Flag;
      local_28.MetadataDomain._1_3_ = FStack_40._1_3_;
      local_28.MetadataDomain.CustomFlag = FStack_40.CustomFlag;
      local_28.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      FStack_40 = FVar2;
      local_28.Name = local_48;
      pFVar6 = UPCGMetadata::GetConstAttribute((UPCGMetadata *)param_1->_padding_,&local_28);
      if ((pFVar6 != (FPCGMetadataAttributeBase *)0x0) &&
         (pFVar6->TypeId == (ushort)this->CategoryType)) {
        return true;
      }
    }
  }
  return false;
}

