// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Get @ 147396ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
FNavigationSystem::FCoordTransforms::Get(FCoordTransforms *this,Type param_1,Type param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_UE::Math::TTransform<double>&___ptr64___cdecl_FNavigationSystem::FCoordTransforms::Get(ENavigationCoordSystem::Type,ENavigationCoordSystem::Type)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_UE::Math::TTransform<double>&___ptr64___cdecl_FNavigationSystem::FCoordTransforms::Get(ENavigationCoordSystem::Type,ENavigationCoordSystem::Type)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_UE::Math::TTransform<double>&___ptr64___cdecl_FNavigationSystem::FCoordTransforms::Get(ENavigationCoordSystem::Type,ENavigationCoordSystem::Type)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_struct_UE::Math::TTransform<double>&___ptr64___cdecl_FNavigationSystem::FCoordTransforms::Get(ENavigationCoordSystem::Type,ENavigationCoordSystem::Type)___ptr64'
      ::__l2::CoordTypeTransforms =
           (TTransform<double> *)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      `public:_struct_UE::Math::TTransform<double>&___ptr64___cdecl_FNavigationSystem::FCoordTransforms::Get(ENavigationCoordSystem::Type,ENavigationCoordSystem::Type)___ptr64'
      ::__l2::CoordTypeTransforms_8 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      _DAT_1551e9250 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      DAT_1551e9250_8 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      _DAT_1551e9260 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      DAT_1551e9260_8 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      _DAT_1551e9270 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      DAT_1551e9270_8 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      _DAT_1551e9280 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      DAT_1551e9280_8 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      _DAT_1551e9290 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      DAT_1551e9290_8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      _DAT_1551e92a0 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      DAT_1551e92a0_8 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      _DAT_1551e92b0 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      DAT_1551e92b0_8 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      _DAT_1551e92c0 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      DAT_1551e92c0_8 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      _DAT_1551e92d0 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      DAT_1551e92d0_8 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      _DAT_1551e92e0 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      DAT_1551e92e0_8 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      _DAT_1551e92f0 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      DAT_1551e92f0_8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      _DAT_1551e9300 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      DAT_1551e9300_8 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      _DAT_1551e9310 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      DAT_1551e9310_8 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      _DAT_1551e9320 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      DAT_1551e9320_8 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      _DAT_1551e9330 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      DAT_1551e9330_8 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      _DAT_1551e9340 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      DAT_1551e9340_8 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      _DAT_1551e9350 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      DAT_1551e9350_8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      _DAT_1551e9360 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      DAT_1551e9360_8 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      _DAT_1551e9370 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      DAT_1551e9370_8 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      _DAT_1551e9380 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      DAT_1551e9380_8 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      _DAT_1551e9390 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      DAT_1551e9390_8 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      _DAT_1551e93a0 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      DAT_1551e93a0_8 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      _DAT_1551e93b0 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      DAT_1551e93b0_8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      _Init_thread_footer(&`public:_struct_UE::Math::TTransform<double>&___ptr64___cdecl_FNavigationSystem::FCoordTransforms::Get(ENavigationCoordSystem::Type,ENavigationCoordSystem::Type)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TTransform<double> *)
         (&`public:_struct_UE::Math::TTransform<double>&___ptr64___cdecl_FNavigationSystem::FCoordTransforms::Get(ENavigationCoordSystem::Type,ENavigationCoordSystem::Type)___ptr64'
           ::__l2::CoordTypeTransforms +
         ((ulonglong)(param_2 & 0xff) + (ulonglong)(param_1 & 0xff) * 2) * 0xc);
}

