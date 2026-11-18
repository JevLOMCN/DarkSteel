// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 9

// DoCustomNavigableGeometryExport @ 146dedda0

bool __thiscall
INavRelevantInterface::DoCustomNavigableGeometryExport
          (INavRelevantInterface *this,FNavigableGeometryExport *param_1)

{
  return true;
}

// GetNavigableGeometryBodySetup @ 146e09f70

UBodySetup * __thiscall
INavRelevantInterface::GetNavigableGeometryBodySetup(INavRelevantInterface *this)

{
  return (UBodySetup *)0x0;
}

// GetNavigableGeometryTransform @ 146e09f80

TTransform<double> * __thiscall
INavRelevantInterface::GetNavigableGeometryTransform
          (INavRelevantInterface *this,TTransform<double> *__return_storage_ptr__)

{
  __m128d _Var1;
  __m128d _Var2;
  
  _Var1.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var1.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var2.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var1.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var2.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var1.m128d_f64;
  return __return_storage_ptr__;
}

// HasCustomNavigableGeometry @ 146e146a0

Type __thiscall INavRelevantInterface::HasCustomNavigableGeometry(INavRelevantInterface *this)

{
  return No;
}

// ~INavRelevantInterface @ 146e37ab0

void __thiscall INavRelevantInterface::~INavRelevantInterface(INavRelevantInterface *this)

{
  *this = (INavRelevantInterface)&___7INavRelevantInterface__6B_;
  return;
}

// GetNavigationBounds @ 146e5be90

TBox<double> * __thiscall
INavRelevantInterface::GetNavigationBounds
          (INavRelevantInterface *this,TBox<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  return __return_storage_ptr__;
}

// GetNavigationData @ 146e5c2c0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
INavRelevantInterface::GetNavigationData
          (INavRelevantInterface *this,FNavigationRelevantData *param_1)

{
  return;
}

// IsNavigationRelevant @ 146e5fdb0

bool __thiscall INavRelevantInterface::IsNavigationRelevant(INavRelevantInterface *this)

{
  return true;
}

// _getUObject @ 146e761d0

UObject * __thiscall INavRelevantInterface::_getUObject(INavRelevantInterface *this)

{
  return (UObject *)0x0;
}

