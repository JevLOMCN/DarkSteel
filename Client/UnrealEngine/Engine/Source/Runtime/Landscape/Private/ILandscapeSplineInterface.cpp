// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 8

// ~ILandscapeSplineInterface @ 145f041a0

void __thiscall
ILandscapeSplineInterface::~ILandscapeSplineInterface(ILandscapeSplineInterface *this)

{
  *this = (ILandscapeSplineInterface)&___7ILandscapeSplineInterface__6B_;
  return;
}

// GetLandscapeGuid @ 145f10050

FGuid * __thiscall
ILandscapeSplineInterface::GetLandscapeGuid
          (ILandscapeSplineInterface *this,FGuid *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\ILandscapeSplineInterface.h"
             ,0x17,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// GetLandscapeInfo @ 145f101c0

ULandscapeInfo * __thiscall
ILandscapeSplineInterface::GetLandscapeInfo(ILandscapeSplineInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\ILandscapeSplineInterface.h"
             ,0x18,L"Pure virtual not implemented (%s)");
  return (ULandscapeInfo *)0x0;
}

// GetSplinesComponent @ 145f13760

ULandscapeSplinesComponent * __thiscall
ILandscapeSplineInterface::GetSplinesComponent(ILandscapeSplineInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\ILandscapeSplineInterface.h"
             ,0x1a,L"Pure virtual not implemented (%s)");
  return (ULandscapeSplinesComponent *)0x0;
}

// IsSplineOwnerValid @ 145f15c70

bool __thiscall ILandscapeSplineInterface::IsSplineOwnerValid(ILandscapeSplineInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\ILandscapeSplineInterface.h"
             ,0x1c,L"Pure virtual not implemented (%s)");
  return true;
}

// LandscapeActorToWorld @ 145f15f30

TTransform<double> * __thiscall
ILandscapeSplineInterface::LandscapeActorToWorld
          (ILandscapeSplineInterface *this,TTransform<double> *__return_storage_ptr__)

{
  __m128d _Var1;
  __m128d _Var2;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\ILandscapeSplineInterface.h"
             ,0x19,L"Pure virtual not implemented (%s)");
  _Var1 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
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

// UpdateSharedProperties @ 145f20420

void __thiscall
ILandscapeSplineInterface::UpdateSharedProperties
          (ILandscapeSplineInterface *this,ULandscapeInfo *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\ILandscapeSplineInterface.h"
             ,0x1b,L"Pure virtual not implemented (%s)");
  return;
}

// _getUObject @ 145f20ea0

UObject * __thiscall ILandscapeSplineInterface::_getUObject(ILandscapeSplineInterface *this)

{
  return (UObject *)0x0;
}

