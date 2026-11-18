// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 147

// FindValue<int> @ 14d5816c0

int * __thiscall
UE::Cameras::FCameraVariableTable::FindValue<int>
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  int *piVar4;
  
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 != (FEntry *)0x0) {
    if (pFVar3->Type != Integer32) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
    }
    if ((pFVar3->Flags & Written) != None) {
      return (int *)(this->Memory + pFVar3->Offset);
    }
  }
  return (int *)0x0;
}

// FindValue<float> @ 14d581740

float * __thiscall
UE::Cameras::FCameraVariableTable::FindValue<float>
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  float *pfVar4;
  
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 != (FEntry *)0x0) {
    if (pFVar3->Type != Float) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pfVar4 = (float *)(*pcVar1)();
        return pfVar4;
      }
    }
    if ((pFVar3->Flags & Written) != None) {
      return (float *)(this->Memory + pFVar3->Offset);
    }
  }
  return (float *)0x0;
}

// FindValue<double> @ 14d5817c0

double * __thiscall
UE::Cameras::FCameraVariableTable::FindValue<double>
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  double *pdVar4;
  
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 != (FEntry *)0x0) {
    if (pFVar3->Type != Double) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pdVar4 = (double *)(*pcVar1)();
        return pdVar4;
      }
    }
    if ((pFVar3->Flags & Written) != None) {
      return (double *)(this->Memory + pFVar3->Offset);
    }
  }
  return (double *)0x0;
}

// FindValue<UE::Math::TRotator<float>_> @ 14d581840

TRotator<float> * __thiscall
UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TRotator<float>_>
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  TRotator<float> *pTVar4;
  
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 != (FEntry *)0x0) {
    if (pFVar3->Type != Rotator3f) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TRotator<float> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if ((pFVar3->Flags & Written) != None) {
      return (TRotator<float> *)(this->Memory + pFVar3->Offset);
    }
  }
  return (TRotator<float> *)0x0;
}

// FindValue<UE::Math::TRotator<double>_> @ 14d5818c0

TRotator<double> * __thiscall
UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TRotator<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  TRotator<double> *pTVar4;
  
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 != (FEntry *)0x0) {
    if (pFVar3->Type != Rotator3d) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TRotator<double> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if ((pFVar3->Flags & Written) != None) {
      return (TRotator<double> *)(this->Memory + pFVar3->Offset);
    }
  }
  return (TRotator<double> *)0x0;
}

// FindValue<UE::Math::TTransform<float>_> @ 14d581940

TTransform<float> * __thiscall
UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TTransform<float>_>
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  TTransform<float> *pTVar4;
  
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 != (FEntry *)0x0) {
    if (pFVar3->Type != Transform3f) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TTransform<float> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if ((pFVar3->Flags & Written) != None) {
      return (TTransform<float> *)(this->Memory + pFVar3->Offset);
    }
  }
  return (TTransform<float> *)0x0;
}

// FindValue<UE::Math::TTransform<double>_> @ 14d5819c0

TTransform<double> * __thiscall
UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TTransform<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  TTransform<double> *pTVar4;
  
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 != (FEntry *)0x0) {
    if (pFVar3->Type != Transform3d) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TTransform<double> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if ((pFVar3->Flags & Written) != None) {
      return (TTransform<double> *)(this->Memory + pFVar3->Offset);
    }
  }
  return (TTransform<double> *)0x0;
}

// FindValue<UE::Math::TVector2<float>_> @ 14d581a40

TVector2<float> * __thiscall
UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector2<float>_>
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  TVector2<float> *pTVar4;
  
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 != (FEntry *)0x0) {
    if (pFVar3->Type != Vector2f) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVector2<float> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if ((pFVar3->Flags & Written) != None) {
      return (TVector2<float> *)(this->Memory + pFVar3->Offset);
    }
  }
  return (TVector2<float> *)0x0;
}

// FindValue<UE::Math::TVector2<double>_> @ 14d581ac0

TVector2<double> * __thiscall
UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector2<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  TVector2<double> *pTVar4;
  
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 != (FEntry *)0x0) {
    if (pFVar3->Type != Vector2d) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVector2<double> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if ((pFVar3->Flags & Written) != None) {
      return (TVector2<double> *)(this->Memory + pFVar3->Offset);
    }
  }
  return (TVector2<double> *)0x0;
}

// FindValue<UE::Math::TVector4<float>_> @ 14d581b40

TVector4<float> * __thiscall
UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector4<float>_>
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  TVector4<float> *pTVar4;
  
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 != (FEntry *)0x0) {
    if (pFVar3->Type != Vector4f) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVector4<float> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if ((pFVar3->Flags & Written) != None) {
      return (TVector4<float> *)(this->Memory + pFVar3->Offset);
    }
  }
  return (TVector4<float> *)0x0;
}

// FindValue<UE::Math::TVector4<double>_> @ 14d581bc0

TVector4<double> * __thiscall
UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector4<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  TVector4<double> *pTVar4;
  
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 != (FEntry *)0x0) {
    if (pFVar3->Type != Vector4d) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVector4<double> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if ((pFVar3->Flags & Written) != None) {
      return (TVector4<double> *)(this->Memory + pFVar3->Offset);
    }
  }
  return (TVector4<double> *)0x0;
}

// FindValue<UE::Math::TVector<float>_> @ 14d581c40

TVector<float> * __thiscall
UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector<float>_>
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  TVector<float> *pTVar4;
  
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 != (FEntry *)0x0) {
    if (pFVar3->Type != Vector3f) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVector<float> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if ((pFVar3->Flags & Written) != None) {
      return (TVector<float> *)(this->Memory + pFVar3->Offset);
    }
  }
  return (TVector<float> *)0x0;
}

// FindValue<UE::Math::TVector<double>_> @ 14d581cc0

TVector<double> * __thiscall
UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  TVector<double> *pTVar4;
  
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 != (FEntry *)0x0) {
    if (pFVar3->Type != Vector3d) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVector<double> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if ((pFVar3->Flags & Written) != None) {
      return (TVector<double> *)(this->Memory + pFVar3->Offset);
    }
  }
  return (TVector<double> *)0x0;
}

// FindValue<bool> @ 14d581d40

bool * __thiscall
UE::Cameras::FCameraVariableTable::FindValue<bool>
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  bool *pbVar4;
  
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 != (FEntry *)0x0) {
    if (pFVar3->Type != Boolean) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pbVar4 = (bool *)(*pcVar1)();
        return pbVar4;
      }
    }
    if ((pFVar3->Flags & Written) != None) {
      return (bool *)(this->Memory + pFVar3->Offset);
    }
  }
  return (bool *)0x0;
}

// GetValue<int> @ 14d582e20

int __thiscall
UE::Cameras::FCameraVariableTable::GetValue<int>
          (FCameraVariableTable *this,FCameraVariableID param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = FindValue<int>(this,param_1);
  if (piVar1 != (int *)0x0) {
    return *piVar1;
  }
  return param_2;
}

// GetValue<float> @ 14d582e50

float __thiscall
UE::Cameras::FCameraVariableTable::GetValue<float>
          (FCameraVariableTable *this,FCameraVariableID param_1,float param_2)

{
  float *pfVar1;
  
  pfVar1 = FindValue<float>(this,param_1);
  if (pfVar1 != (float *)0x0) {
    return *pfVar1;
  }
  return param_2;
}

// GetValue<double> @ 14d582e90

double __thiscall
UE::Cameras::FCameraVariableTable::GetValue<double>
          (FCameraVariableTable *this,FCameraVariableID param_1,double param_2)

{
  double *pdVar1;
  
  pdVar1 = FindValue<double>(this,param_1);
  if (pdVar1 != (double *)0x0) {
    return *pdVar1;
  }
  return param_2;
}

// GetValue<UE::Math::TRotator<double>_> @ 14d582ed0

TRotator<double> * __thiscall
UE::Cameras::FCameraVariableTable::GetValue<UE::Math::TRotator<double>_>
          (FCameraVariableTable *this,TRotator<double> *__return_storage_ptr__,
          FCameraVariableID param_1,TRotator<double> *param_2)

{
  TRotator<double> *pTVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  
  pTVar1 = FindValue<UE::Math::TRotator<double>_>(this,param_1);
  if (pTVar1 == (TRotator<double> *)0x0) {
    uVar2 = *(undefined4 *)&param_2->Pitch;
    uVar3 = *(undefined4 *)((longlong)&param_2->Pitch + 4);
    uVar4 = *(undefined4 *)&param_2->Yaw;
    uVar5 = *(undefined4 *)((longlong)&param_2->Yaw + 4);
    dVar6 = param_2->Roll;
  }
  else {
    uVar2 = *(undefined4 *)&pTVar1->Pitch;
    uVar3 = *(undefined4 *)((longlong)&pTVar1->Pitch + 4);
    uVar4 = *(undefined4 *)&pTVar1->Yaw;
    uVar5 = *(undefined4 *)((longlong)&pTVar1->Yaw + 4);
    dVar6 = pTVar1->Roll;
  }
  *(undefined4 *)&__return_storage_ptr__->Pitch = uVar2;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Pitch + 4) = uVar3;
  *(undefined4 *)&__return_storage_ptr__->Yaw = uVar4;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Yaw + 4) = uVar5;
  __return_storage_ptr__->Roll = dVar6;
  return __return_storage_ptr__;
}

// GetValue<UE::Math::TTransform<double>_> @ 14d582f20

TTransform<double> * __thiscall
UE::Cameras::FCameraVariableTable::GetValue<UE::Math::TTransform<double>_>
          (FCameraVariableTable *this,TTransform<double> *__return_storage_ptr__,
          FCameraVariableID param_1,TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TTransform<double> *pTVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  pTVar5 = FindValue<UE::Math::TTransform<double>_>(this,param_1);
  if (pTVar5 == (TTransform<double> *)0x0) {
    dVar1 = (param_2->Rotation).XY.m128d_f64[1];
    dVar2 = (param_2->Rotation).ZW.m128d_f64[0];
    dVar3 = (param_2->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
    dVar1 = (param_2->Translation).XY.m128d_f64[0];
    dVar4 = (param_2->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
    dVar2 = (param_2->Translation).ZW.m128d_f64[0];
    dVar3 = (param_2->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
    uVar6 = *(undefined4 *)(param_2->Scale3D).XY.m128d_f64;
    uVar7 = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4);
    uVar8 = *(undefined4 *)((param_2->Scale3D).XY.m128d_f64 + 1);
    uVar9 = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
    uVar10 = *(undefined4 *)(param_2->Scale3D).ZW.m128d_f64;
    uVar11 = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4);
    uVar12 = *(undefined4 *)((param_2->Scale3D).ZW.m128d_f64 + 1);
    uVar13 = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc);
  }
  else {
    dVar1 = (pTVar5->Rotation).XY.m128d_f64[1];
    dVar2 = (pTVar5->Rotation).ZW.m128d_f64[0];
    dVar3 = (pTVar5->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar5->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
    dVar1 = (pTVar5->Translation).XY.m128d_f64[0];
    dVar4 = (pTVar5->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
    dVar2 = (pTVar5->Translation).ZW.m128d_f64[0];
    dVar3 = (pTVar5->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
    uVar6 = *(undefined4 *)(pTVar5->Scale3D).XY.m128d_f64;
    uVar7 = *(undefined4 *)((longlong)(pTVar5->Scale3D).XY.m128d_f64 + 4);
    uVar8 = *(undefined4 *)((pTVar5->Scale3D).XY.m128d_f64 + 1);
    uVar9 = *(undefined4 *)((longlong)(pTVar5->Scale3D).XY.m128d_f64 + 0xc);
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
    uVar10 = *(undefined4 *)(pTVar5->Scale3D).ZW.m128d_f64;
    uVar11 = *(undefined4 *)((longlong)(pTVar5->Scale3D).ZW.m128d_f64 + 4);
    uVar12 = *(undefined4 *)((pTVar5->Scale3D).ZW.m128d_f64 + 1);
    uVar13 = *(undefined4 *)((longlong)(pTVar5->Scale3D).ZW.m128d_f64 + 0xc);
  }
  *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 = uVar6;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) = uVar7;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).XY.m128d_f64 + 1) = uVar8;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 0xc) = uVar9;
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = uVar10;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) = uVar11;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = uVar12;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) = uVar13;
  return __return_storage_ptr__;
}

// GetValue<UE::Math::TVector2<double>_> @ 14d582fb0

TVector2<double> * __thiscall
UE::Cameras::FCameraVariableTable::GetValue<UE::Math::TVector2<double>_>
          (FCameraVariableTable *this,TVector2<double> *__return_storage_ptr__,
          FCameraVariableID param_1,TVector2<double> *param_2)

{
  double dVar1;
  TVector2<double> *pTVar2;
  
  pTVar2 = FindValue<UE::Math::TVector2<double>_>(this,param_1);
  if (pTVar2 != (TVector2<double> *)0x0) {
    dVar1 = (pTVar2->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    return __return_storage_ptr__;
  }
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetValue<UE::Math::TVector4<double>_> @ 14d583000

TVector4<double> * __thiscall
UE::Cameras::FCameraVariableTable::GetValue<UE::Math::TVector4<double>_>
          (FCameraVariableTable *this,TVector4<double> *__return_storage_ptr__,
          FCameraVariableID param_1,TVector4<double> *param_2)

{
  TVector4<double> *pTVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  pTVar1 = FindValue<UE::Math::TVector4<double>_>(this,param_1);
  if (pTVar1 == (TVector4<double> *)0x0) {
    uVar2 = *(undefined4 *)&param_2->field0_0x0;
    uVar3 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    uVar4 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    uVar5 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
    uVar6 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x10);
    uVar7 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x14);
    uVar8 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x18);
    uVar9 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x1c);
  }
  else {
    uVar2 = *(undefined4 *)&pTVar1->field0_0x0;
    uVar3 = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 4);
    uVar4 = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 8);
    uVar5 = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 0xc);
    uVar6 = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 0x10);
    uVar7 = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 0x14);
    uVar8 = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 0x18);
    uVar9 = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 0x1c);
  }
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar2;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar3;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar4;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar5;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = uVar6;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x14) = uVar7;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x18) = uVar8;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x1c) = uVar9;
  return __return_storage_ptr__;
}

// GetValue<UE::Math::TVector<double>_> @ 14d583050

TVector<double> * __thiscall
UE::Cameras::FCameraVariableTable::GetValue<UE::Math::TVector<double>_>
          (FCameraVariableTable *this,TVector<double> *__return_storage_ptr__,
          FCameraVariableID param_1,TVector<double> *param_2)

{
  TVector<double> *pTVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  
  pTVar1 = FindValue<UE::Math::TVector<double>_>(this,param_1);
  if (pTVar1 == (TVector<double> *)0x0) {
    uVar2 = *(undefined4 *)&param_2->field0_0x0;
    uVar3 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    uVar4 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    uVar5 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
    dVar6 = (param_2->field0_0x0)._s_0.Z;
  }
  else {
    uVar2 = *(undefined4 *)&pTVar1->field0_0x0;
    uVar3 = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 4);
    uVar4 = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 8);
    uVar5 = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 0xc);
    dVar6 = (pTVar1->field0_0x0)._s_0.Z;
  }
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar2;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar3;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar4;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6;
  return __return_storage_ptr__;
}

// GetValue<bool> @ 14d5830a0

bool __thiscall
UE::Cameras::FCameraVariableTable::GetValue<bool>
          (FCameraVariableTable *this,FCameraVariableID param_1,bool param_2)

{
  bool *pbVar1;
  
  pbVar1 = FindValue<bool>(this,param_1);
  if (pbVar1 != (bool *)0x0) {
    return *pbVar1;
  }
  return param_2;
}

// SetValue<int> @ 14d5892c0

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<int>
          (FCameraVariableTable *this,FCameraVariableID param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  uint local_res10 [2];
  uint *local_res20;
  
  local_res10[0] = param_1.Value;
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 == (FEntry *)0x0) {
    local_res20 = local_res10;
    bVar2 = `UE::Cameras::FCameraVariableTable::SetValue<int>'::__l3::<lambda_1>::operator()
                      (&local_res20);
    if (!bVar2) {
      return;
    }
  }
  if ((pFVar3->Type != Integer32) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(int *)(this->Memory + pFVar3->Offset) = param_2;
  pFVar3->Flags = pFVar3->Flags | (WrittenThisFrame|Written);
  return;
}

// SetValue<float> @ 14d589360

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<float>
          (FCameraVariableTable *this,FCameraVariableID param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  uint local_res10 [4];
  uint *local_res20;
  
  local_res10[0] = param_1.Value;
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 == (FEntry *)0x0) {
    local_res20 = local_res10;
    bVar2 = `UE::Cameras::FCameraVariableTable::SetValue<float>'::__l3::<lambda_1>::operator()
                      (&local_res20);
    if (!bVar2) {
      return;
    }
  }
  if ((pFVar3->Type != Float) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(float *)(this->Memory + pFVar3->Offset) = param_2;
  pFVar3->Flags = pFVar3->Flags | (WrittenThisFrame|Written);
  return;
}

// SetValue<double> @ 14d589400

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<double>
          (FCameraVariableTable *this,FCameraVariableID param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  uint local_res10 [4];
  uint *local_res20;
  
  local_res10[0] = param_1.Value;
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 == (FEntry *)0x0) {
    local_res20 = local_res10;
    bVar2 = `UE::Cameras::FCameraVariableTable::SetValue<double>'::__l3::<lambda_1>::operator()
                      (&local_res20);
    if (!bVar2) {
      return;
    }
  }
  if ((pFVar3->Type != Double) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(double *)(this->Memory + pFVar3->Offset) = param_2;
  pFVar3->Flags = pFVar3->Flags | (WrittenThisFrame|Written);
  return;
}

// SetValue<UE::Math::TRotator<double>_> @ 14d5894a0

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TRotator<double> *param_2)

{
  double *pdVar1;
  uint uVar2;
  uchar *puVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  FEntry *pFVar7;
  uint local_res10 [2];
  uint *local_res20;
  
  local_res10[0] = param_1.Value;
  pFVar7 = FindEntry(this,param_1);
  if (pFVar7 == (FEntry *)0x0) {
    local_res20 = local_res10;
    bVar6 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<double>_>'::__l3::
            <lambda_1>::operator()(&local_res20);
    if (!bVar6) {
      return;
    }
  }
  if ((pFVar7->Type != Rotator3d) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = pFVar7->Offset;
  puVar3 = this->Memory;
  dVar5 = param_2->Yaw;
  pdVar1 = (double *)(puVar3 + uVar2);
  *pdVar1 = param_2->Pitch;
  pdVar1[1] = dVar5;
  *(double *)(puVar3 + (ulonglong)uVar2 + 0x10) = param_2->Roll;
  pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
  return;
}

// SetValue<UE::Math::TTransform<double>_> @ 14d589550

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TTransform<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TTransform<double> *param_2)

{
  uchar *puVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  FEntry *pFVar5;
  ulonglong uVar6;
  uint local_res10 [2];
  uint *local_res20;
  
  local_res10[0] = param_1.Value;
  pFVar5 = FindEntry(this,param_1);
  if (pFVar5 == (FEntry *)0x0) {
    local_res20 = local_res10;
    bVar4 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TTransform<double>_>'::__l3::
            <lambda_1>::operator()(&local_res20);
    if (!bVar4) {
      return;
    }
  }
  if ((pFVar5->Type != Transform3d) &&
     (bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  dVar3 = (param_2->Rotation).XY.m128d_f64[1];
  uVar6 = (ulonglong)pFVar5->Offset;
  puVar1 = this->Memory;
  *(double *)(puVar1 + uVar6) = (param_2->Rotation).XY.m128d_f64[0];
  *(double *)((longlong)(puVar1 + uVar6) + 8) = dVar3;
  dVar3 = (param_2->Rotation).ZW.m128d_f64[1];
  *(double *)(puVar1 + uVar6 + 0x10) = (param_2->Rotation).ZW.m128d_f64[0];
  *(double *)((longlong)(puVar1 + uVar6 + 0x10) + 8) = dVar3;
  dVar3 = (param_2->Translation).XY.m128d_f64[1];
  *(double *)(puVar1 + uVar6 + 0x20) = (param_2->Translation).XY.m128d_f64[0];
  *(double *)((longlong)(puVar1 + uVar6 + 0x20) + 8) = dVar3;
  dVar3 = (param_2->Translation).ZW.m128d_f64[1];
  *(double *)(puVar1 + uVar6 + 0x30) = (param_2->Translation).ZW.m128d_f64[0];
  *(double *)((longlong)(puVar1 + uVar6 + 0x30) + 8) = dVar3;
  dVar3 = (param_2->Scale3D).XY.m128d_f64[1];
  *(double *)(puVar1 + uVar6 + 0x40) = (param_2->Scale3D).XY.m128d_f64[0];
  *(double *)((longlong)(puVar1 + uVar6 + 0x40) + 8) = dVar3;
  dVar3 = (param_2->Scale3D).ZW.m128d_f64[1];
  *(double *)(puVar1 + uVar6 + 0x50) = (param_2->Scale3D).ZW.m128d_f64[0];
  *(double *)((longlong)(puVar1 + uVar6 + 0x50) + 8) = dVar3;
  pFVar5->Flags = pFVar5->Flags | (WrittenThisFrame|Written);
  return;
}

// SetValue<UE::Math::TVector2<double>_> @ 14d589620

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector2<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TVector2<double> *param_2)

{
  uint uVar1;
  uchar *puVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  FEntry *pFVar6;
  uint local_res10 [2];
  uint *local_res20;
  
  local_res10[0] = param_1.Value;
  pFVar6 = FindEntry(this,param_1);
  if (pFVar6 == (FEntry *)0x0) {
    local_res20 = local_res10;
    bVar5 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector2<double>_>'::__l3::
            <lambda_1>::operator()(&local_res20);
    if (!bVar5) {
      return;
    }
  }
  if ((pFVar6->Type != Vector2d) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = pFVar6->Offset;
  puVar2 = this->Memory;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  *(double *)(puVar2 + uVar1) = (param_2->field0_0x0)._s_0.X;
  *(double *)((longlong)(puVar2 + uVar1) + 8) = dVar4;
  pFVar6->Flags = pFVar6->Flags | (WrittenThisFrame|Written);
  return;
}

// SetValue<UE::Math::TVector4<double>_> @ 14d5896c0

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector4<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TVector4<double> *param_2)

{
  double *pdVar1;
  uint uVar2;
  uchar *puVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  FEntry *pFVar7;
  uint local_res10 [2];
  uint *local_res20;
  
  local_res10[0] = param_1.Value;
  pFVar7 = FindEntry(this,param_1);
  if (pFVar7 == (FEntry *)0x0) {
    local_res20 = local_res10;
    bVar6 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector4<double>_>'::__l3::
            <lambda_1>::operator()(&local_res20);
    if (!bVar6) {
      return;
    }
  }
  if ((pFVar7->Type != Vector4d) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = pFVar7->Offset;
  puVar3 = this->Memory;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  pdVar1 = (double *)(puVar3 + uVar2);
  *pdVar1 = (param_2->field0_0x0)._s_0.X;
  pdVar1[1] = dVar5;
  dVar5 = (param_2->field0_0x0)._s_0.W;
  pdVar1 = (double *)(puVar3 + (ulonglong)uVar2 + 0x10);
  *pdVar1 = (param_2->field0_0x0)._s_0.Z;
  pdVar1[1] = dVar5;
  pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
  return;
}

// SetValue<UE::Math::TVector<double>_> @ 14d589770

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TVector<double> *param_2)

{
  double *pdVar1;
  uint uVar2;
  uchar *puVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  FEntry *pFVar7;
  uint local_res10 [2];
  uint *local_res20;
  
  local_res10[0] = param_1.Value;
  pFVar7 = FindEntry(this,param_1);
  if (pFVar7 == (FEntry *)0x0) {
    local_res20 = local_res10;
    bVar6 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector<double>_>'::__l3::
            <lambda_1>::operator()(&local_res20);
    if (!bVar6) {
      return;
    }
  }
  if ((pFVar7->Type != Vector3d) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = pFVar7->Offset;
  puVar3 = this->Memory;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  pdVar1 = (double *)(puVar3 + uVar2);
  *pdVar1 = (param_2->field0_0x0)._s_0.X;
  pdVar1[1] = dVar5;
  *(double *)(puVar3 + (ulonglong)uVar2 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
  return;
}

// SetValue<UBooleanCameraVariable> @ 14d589820

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<UBooleanCameraVariable>
          (FCameraVariableTable *this,UBooleanCameraVariable *param_1,bool param_2,bool param_3)

{
  ECameraVariableType EVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  FEntry *pFVar5;
  UBooleanCameraVariable *local_res10;
  uint local_38 [2];
  UBooleanCameraVariable **local_30;
  uint *local_28;
  FCameraVariableDefinition local_20;
  
  local_res10 = param_1;
  if (param_1 == (UBooleanCameraVariable *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7269619262472323475>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0x193,"VariableAsset");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (((((int)param_1->_padding_ == 0 && *(int *)((longlong)&param_1->_padding_ + 4) == 0) &&
         (int)param_1->_padding_ == 0) && *(int *)((longlong)&param_1->_padding_ + 4) == 0) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = CityHash64((char *)((longlong)&param_1->_padding_ + 4),0x10);
    pFVar5 = FindEntry(this,(FCameraVariableID)(uint)uVar4);
    if (pFVar5 == (FEntry *)0x0) {
      if (!param_3) {
        local_30 = &local_res10;
        `UE::Cameras::FCameraVariableTable::SetValue<UBooleanCameraVariable>'::__l5::<lambda_1>::
        operator()(&local_30);
        return;
      }
      UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)local_res10,&local_20);
      AddVariable(this,&local_20);
      local_38[0] = local_20.VariableID.Value;
      pFVar5 = FindEntry(this,local_20.VariableID);
      if (pFVar5 == (FEntry *)0x0) {
        local_28 = local_38;
        bVar3 = `UE::Cameras::FCameraVariableTable::SetValue<bool>'::__l3::<lambda_1>::operator()
                          (&local_28);
        if (!bVar3) {
          return;
        }
      }
      EVar1 = pFVar5->Type;
    }
    else {
      EVar1 = pFVar5->Type;
    }
    if ((EVar1 != Boolean) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this->Memory[pFVar5->Offset] = param_2;
    pFVar5->Flags = pFVar5->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// SetValue<UDoubleCameraVariable> @ 14d5899b0

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<UDoubleCameraVariable>
          (FCameraVariableTable *this,UDoubleCameraVariable *param_1,double param_2,bool param_3)

{
  ECameraVariableType EVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  FEntry *pFVar5;
  UDoubleCameraVariable *local_res10;
  uint local_48 [2];
  UDoubleCameraVariable **local_40;
  uint *local_38;
  FCameraVariableDefinition local_30;
  
  local_res10 = param_1;
  if (param_1 == (UDoubleCameraVariable *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7269619262472323475>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0x193,"VariableAsset");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (((((int)param_1->_padding_ == 0 && *(int *)((longlong)&param_1->_padding_ + 4) == 0) &&
         (int)param_1->_padding_ == 0) && *(int *)((longlong)&param_1->_padding_ + 4) == 0) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = CityHash64((char *)((longlong)&param_1->_padding_ + 4),0x10);
    pFVar5 = FindEntry(this,(FCameraVariableID)(uint)uVar4);
    if (pFVar5 == (FEntry *)0x0) {
      if (!param_3) {
        local_40 = &local_res10;
        `UE::Cameras::FCameraVariableTable::SetValue<UDoubleCameraVariable>'::__l5::<lambda_1>::
        operator()(&local_40);
        return;
      }
      UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)local_res10,&local_30);
      AddVariable(this,&local_30);
      local_48[0] = local_30.VariableID.Value;
      pFVar5 = FindEntry(this,local_30.VariableID);
      if (pFVar5 == (FEntry *)0x0) {
        local_38 = local_48;
        bVar3 = `UE::Cameras::FCameraVariableTable::SetValue<double>'::__l3::<lambda_1>::operator()
                          (&local_38);
        if (!bVar3) {
          return;
        }
      }
      EVar1 = pFVar5->Type;
    }
    else {
      EVar1 = pFVar5->Type;
    }
    if ((EVar1 != Double) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(double *)(this->Memory + pFVar5->Offset) = param_2;
    pFVar5->Flags = pFVar5->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// SetValue<UFloatCameraVariable> @ 14d589b40

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<UFloatCameraVariable>
          (FCameraVariableTable *this,UFloatCameraVariable *param_1,float param_2,bool param_3)

{
  ECameraVariableType EVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  FEntry *pFVar5;
  UFloatCameraVariable *local_res10;
  uint local_48 [2];
  UFloatCameraVariable **local_40;
  uint *local_38;
  FCameraVariableDefinition local_30;
  
  local_res10 = param_1;
  if (param_1 == (UFloatCameraVariable *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7269619262472323475>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0x193,"VariableAsset");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (((((int)param_1->_padding_ == 0 && *(int *)((longlong)&param_1->_padding_ + 4) == 0) &&
         (int)param_1->_padding_ == 0) && *(int *)((longlong)&param_1->_padding_ + 4) == 0) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = CityHash64((char *)((longlong)&param_1->_padding_ + 4),0x10);
    pFVar5 = FindEntry(this,(FCameraVariableID)(uint)uVar4);
    if (pFVar5 == (FEntry *)0x0) {
      if (!param_3) {
        local_40 = &local_res10;
        `UE::Cameras::FCameraVariableTable::SetValue<UFloatCameraVariable>'::__l5::<lambda_1>::
        operator()(&local_40);
        return;
      }
      UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)local_res10,&local_30);
      AddVariable(this,&local_30);
      local_48[0] = local_30.VariableID.Value;
      pFVar5 = FindEntry(this,local_30.VariableID);
      if (pFVar5 == (FEntry *)0x0) {
        local_38 = local_48;
        bVar3 = `UE::Cameras::FCameraVariableTable::SetValue<float>'::__l3::<lambda_1>::operator()
                          (&local_38);
        if (!bVar3) {
          return;
        }
      }
      EVar1 = pFVar5->Type;
    }
    else {
      EVar1 = pFVar5->Type;
    }
    if ((EVar1 != Float) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(float *)(this->Memory + pFVar5->Offset) = param_2;
    pFVar5->Flags = pFVar5->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// SetValue<UInteger32CameraVariable> @ 14d589cd0

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<UInteger32CameraVariable>
          (FCameraVariableTable *this,UInteger32CameraVariable *param_1,int param_2,bool param_3)

{
  ECameraVariableType EVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  FEntry *pFVar5;
  UInteger32CameraVariable *local_res10;
  uint local_38 [2];
  UInteger32CameraVariable **local_30;
  uint *local_28;
  FCameraVariableDefinition local_20;
  
  local_res10 = param_1;
  if (param_1 == (UInteger32CameraVariable *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7269619262472323475>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0x193,"VariableAsset");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (((((int)param_1->_padding_ == 0 && *(int *)((longlong)&param_1->_padding_ + 4) == 0) &&
         (int)param_1->_padding_ == 0) && *(int *)((longlong)&param_1->_padding_ + 4) == 0) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = CityHash64((char *)((longlong)&param_1->_padding_ + 4),0x10);
    pFVar5 = FindEntry(this,(FCameraVariableID)(uint)uVar4);
    if (pFVar5 == (FEntry *)0x0) {
      if (!param_3) {
        local_30 = &local_res10;
        `UE::Cameras::FCameraVariableTable::SetValue<UInteger32CameraVariable>'::__l5::<lambda_1>::
        operator()(&local_30);
        return;
      }
      UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)local_res10,&local_20);
      AddVariable(this,&local_20);
      local_38[0] = local_20.VariableID.Value;
      pFVar5 = FindEntry(this,local_20.VariableID);
      if (pFVar5 == (FEntry *)0x0) {
        local_28 = local_38;
        bVar3 = `UE::Cameras::FCameraVariableTable::SetValue<int>'::__l3::<lambda_1>::operator()
                          (&local_28);
        if (!bVar3) {
          return;
        }
      }
      EVar1 = pFVar5->Type;
    }
    else {
      EVar1 = pFVar5->Type;
    }
    if ((EVar1 != Integer32) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(int *)(this->Memory + pFVar5->Offset) = param_2;
    pFVar5->Flags = pFVar5->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// SetValue<URotator3dCameraVariable> @ 14d589e60

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<URotator3dCameraVariable>
          (FCameraVariableTable *this,URotator3dCameraVariable *param_1,TRotator<double> *param_2,
          bool param_3)

{
  double *pdVar1;
  ECameraVariableType EVar2;
  uint uVar3;
  uchar *puVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  ulong64 uVar8;
  FEntry *pFVar9;
  URotator3dCameraVariable *local_res10;
  uint local_38 [2];
  URotator3dCameraVariable **local_30;
  uint *local_28;
  FCameraVariableDefinition local_20;
  
  local_res10 = param_1;
  if (param_1 == (URotator3dCameraVariable *)0x0) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7269619262472323475>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0x193,"VariableAsset");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (((((int)param_1->_padding_ == 0 && *(int *)((longlong)&param_1->_padding_ + 4) == 0) &&
         (int)param_1->_padding_ == 0) && *(int *)((longlong)&param_1->_padding_ + 4) == 0) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = CityHash64((char *)((longlong)&param_1->_padding_ + 4),0x10);
    pFVar9 = FindEntry(this,(FCameraVariableID)(uint)uVar8);
    if (pFVar9 == (FEntry *)0x0) {
      if (!param_3) {
        local_30 = &local_res10;
        `UE::Cameras::FCameraVariableTable::SetValue<URotator3dCameraVariable>'::__l5::<lambda_1>::
        operator()(&local_30);
        return;
      }
      UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)local_res10,&local_20);
      AddVariable(this,&local_20);
      local_38[0] = local_20.VariableID.Value;
      pFVar9 = FindEntry(this,local_20.VariableID);
      if (pFVar9 == (FEntry *)0x0) {
        local_28 = local_38;
        bVar7 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<double>_>'::__l3::
                <lambda_1>::operator()(&local_28);
        if (!bVar7) {
          return;
        }
      }
      EVar2 = pFVar9->Type;
    }
    else {
      EVar2 = pFVar9->Type;
    }
    if ((EVar2 != Rotator3d) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar4 = this->Memory;
    uVar3 = pFVar9->Offset;
    dVar6 = param_2->Yaw;
    pdVar1 = (double *)(puVar4 + uVar3);
    *pdVar1 = param_2->Pitch;
    pdVar1[1] = dVar6;
    *(double *)(puVar4 + (ulonglong)uVar3 + 0x10) = param_2->Roll;
    pFVar9->Flags = pFVar9->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// SetValue<UTransform3dCameraVariable> @ 14d58a000

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<UTransform3dCameraVariable>
          (FCameraVariableTable *this,UTransform3dCameraVariable *param_1,
          TTransform<double> *param_2,bool param_3)

{
  ECameraVariableType EVar1;
  uchar *puVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  ulong64 uVar6;
  FEntry *pFVar7;
  ulonglong uVar8;
  UTransform3dCameraVariable *local_res10;
  uint local_38 [2];
  UTransform3dCameraVariable **local_30;
  uint *local_28;
  FCameraVariableDefinition local_20;
  
  local_res10 = param_1;
  if (param_1 == (UTransform3dCameraVariable *)0x0) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7269619262472323475>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0x193,"VariableAsset");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if (((((int)param_1->_padding_ == 0 && *(int *)((longlong)&param_1->_padding_ + 4) == 0) &&
         (int)param_1->_padding_ == 0) && *(int *)((longlong)&param_1->_padding_ + 4) == 0) &&
       (bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()"), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar6 = CityHash64((char *)((longlong)&param_1->_padding_ + 4),0x10);
    pFVar7 = FindEntry(this,(FCameraVariableID)(uint)uVar6);
    if (pFVar7 == (FEntry *)0x0) {
      if (!param_3) {
        local_30 = &local_res10;
        `UE::Cameras::FCameraVariableTable::SetValue<UTransform3dCameraVariable>'::__l5::<lambda_1>
        ::operator()(&local_30);
        return;
      }
      UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)local_res10,&local_20);
      AddVariable(this,&local_20);
      local_38[0] = local_20.VariableID.Value;
      pFVar7 = FindEntry(this,local_20.VariableID);
      if (pFVar7 == (FEntry *)0x0) {
        local_28 = local_38;
        bVar5 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TTransform<double>_>'::__l3::
                <lambda_1>::operator()(&local_28);
        if (!bVar5) {
          return;
        }
      }
      EVar1 = pFVar7->Type;
    }
    else {
      EVar1 = pFVar7->Type;
    }
    if ((EVar1 != Transform3d) &&
       (bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    dVar4 = (param_2->Rotation).XY.m128d_f64[1];
    puVar2 = this->Memory;
    uVar8 = (ulonglong)pFVar7->Offset;
    *(double *)(puVar2 + uVar8) = (param_2->Rotation).XY.m128d_f64[0];
    *(double *)((longlong)(puVar2 + uVar8) + 8) = dVar4;
    dVar4 = (param_2->Rotation).ZW.m128d_f64[1];
    *(double *)(puVar2 + uVar8 + 0x10) = (param_2->Rotation).ZW.m128d_f64[0];
    *(double *)((longlong)(puVar2 + uVar8 + 0x10) + 8) = dVar4;
    dVar4 = (param_2->Translation).XY.m128d_f64[1];
    *(double *)(puVar2 + uVar8 + 0x20) = (param_2->Translation).XY.m128d_f64[0];
    *(double *)((longlong)(puVar2 + uVar8 + 0x20) + 8) = dVar4;
    dVar4 = (param_2->Translation).ZW.m128d_f64[1];
    *(double *)(puVar2 + uVar8 + 0x30) = (param_2->Translation).ZW.m128d_f64[0];
    *(double *)((longlong)(puVar2 + uVar8 + 0x30) + 8) = dVar4;
    dVar4 = (param_2->Scale3D).XY.m128d_f64[1];
    *(double *)(puVar2 + uVar8 + 0x40) = (param_2->Scale3D).XY.m128d_f64[0];
    *(double *)((longlong)(puVar2 + uVar8 + 0x40) + 8) = dVar4;
    dVar4 = (param_2->Scale3D).ZW.m128d_f64[1];
    *(double *)(puVar2 + uVar8 + 0x50) = (param_2->Scale3D).ZW.m128d_f64[0];
    *(double *)((longlong)(puVar2 + uVar8 + 0x50) + 8) = dVar4;
    pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// SetValue<UVector2dCameraVariable> @ 14d58a1c0

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<UVector2dCameraVariable>
          (FCameraVariableTable *this,UVector2dCameraVariable *param_1,TVector2<double> *param_2,
          bool param_3)

{
  ECameraVariableType EVar1;
  uint uVar2;
  uchar *puVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  ulong64 uVar7;
  FEntry *pFVar8;
  UVector2dCameraVariable *local_res10;
  uint local_38 [2];
  UVector2dCameraVariable **local_30;
  uint *local_28;
  FCameraVariableDefinition local_20;
  
  local_res10 = param_1;
  if (param_1 == (UVector2dCameraVariable *)0x0) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7269619262472323475>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0x193,"VariableAsset");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if (((((int)param_1->_padding_ == 0 && *(int *)((longlong)&param_1->_padding_ + 4) == 0) &&
         (int)param_1->_padding_ == 0) && *(int *)((longlong)&param_1->_padding_ + 4) == 0) &&
       (bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()"), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = CityHash64((char *)((longlong)&param_1->_padding_ + 4),0x10);
    pFVar8 = FindEntry(this,(FCameraVariableID)(uint)uVar7);
    if (pFVar8 == (FEntry *)0x0) {
      if (!param_3) {
        local_30 = &local_res10;
        `UE::Cameras::FCameraVariableTable::SetValue<UVector2dCameraVariable>'::__l5::<lambda_1>::
        operator()(&local_30);
        return;
      }
      UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)local_res10,&local_20);
      AddVariable(this,&local_20);
      local_38[0] = local_20.VariableID.Value;
      pFVar8 = FindEntry(this,local_20.VariableID);
      if (pFVar8 == (FEntry *)0x0) {
        local_28 = local_38;
        bVar6 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector2<double>_>'::__l3::
                <lambda_1>::operator()(&local_28);
        if (!bVar6) {
          return;
        }
      }
      EVar1 = pFVar8->Type;
    }
    else {
      EVar1 = pFVar8->Type;
    }
    if ((EVar1 != Vector2d) &&
       (bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar3 = this->Memory;
    uVar2 = pFVar8->Offset;
    dVar5 = (param_2->field0_0x0)._s_0.Y;
    *(double *)(puVar3 + uVar2) = (param_2->field0_0x0)._s_0.X;
    *(double *)((longlong)(puVar3 + uVar2) + 8) = dVar5;
    pFVar8->Flags = pFVar8->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// SetValue<UVector3dCameraVariable> @ 14d58a350

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<UVector3dCameraVariable>
          (FCameraVariableTable *this,UVector3dCameraVariable *param_1,TVector<double> *param_2,
          bool param_3)

{
  double *pdVar1;
  ECameraVariableType EVar2;
  uint uVar3;
  uchar *puVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  ulong64 uVar8;
  FEntry *pFVar9;
  UVector3dCameraVariable *local_res10;
  uint local_38 [2];
  UVector3dCameraVariable **local_30;
  uint *local_28;
  FCameraVariableDefinition local_20;
  
  local_res10 = param_1;
  if (param_1 == (UVector3dCameraVariable *)0x0) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7269619262472323475>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0x193,"VariableAsset");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (((((int)param_1->_padding_ == 0 && *(int *)((longlong)&param_1->_padding_ + 4) == 0) &&
         (int)param_1->_padding_ == 0) && *(int *)((longlong)&param_1->_padding_ + 4) == 0) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = CityHash64((char *)((longlong)&param_1->_padding_ + 4),0x10);
    pFVar9 = FindEntry(this,(FCameraVariableID)(uint)uVar8);
    if (pFVar9 == (FEntry *)0x0) {
      if (!param_3) {
        local_30 = &local_res10;
        `UE::Cameras::FCameraVariableTable::SetValue<UVector3dCameraVariable>'::__l5::<lambda_1>::
        operator()(&local_30);
        return;
      }
      UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)local_res10,&local_20);
      AddVariable(this,&local_20);
      local_38[0] = local_20.VariableID.Value;
      pFVar9 = FindEntry(this,local_20.VariableID);
      if (pFVar9 == (FEntry *)0x0) {
        local_28 = local_38;
        bVar7 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector<double>_>'::__l3::
                <lambda_1>::operator()(&local_28);
        if (!bVar7) {
          return;
        }
      }
      EVar2 = pFVar9->Type;
    }
    else {
      EVar2 = pFVar9->Type;
    }
    if ((EVar2 != Vector3d) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar4 = this->Memory;
    uVar3 = pFVar9->Offset;
    dVar6 = (param_2->field0_0x0)._s_0.Y;
    pdVar1 = (double *)(puVar4 + uVar3);
    *pdVar1 = (param_2->field0_0x0)._s_0.X;
    pdVar1[1] = dVar6;
    *(double *)(puVar4 + (ulonglong)uVar3 + 0x10) = (param_2->field0_0x0)._s_0.Z;
    pFVar9->Flags = pFVar9->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// SetValue<UVector4dCameraVariable> @ 14d58a4f0

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<UVector4dCameraVariable>
          (FCameraVariableTable *this,UVector4dCameraVariable *param_1,TVector4<double> *param_2,
          bool param_3)

{
  double *pdVar1;
  ECameraVariableType EVar2;
  uint uVar3;
  uchar *puVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  ulong64 uVar8;
  FEntry *pFVar9;
  UVector4dCameraVariable *local_res10;
  uint local_38 [2];
  UVector4dCameraVariable **local_30;
  uint *local_28;
  FCameraVariableDefinition local_20;
  
  local_res10 = param_1;
  if (param_1 == (UVector4dCameraVariable *)0x0) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7269619262472323475>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0x193,"VariableAsset");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (((((int)param_1->_padding_ == 0 && *(int *)((longlong)&param_1->_padding_ + 4) == 0) &&
         (int)param_1->_padding_ == 0) && *(int *)((longlong)&param_1->_padding_ + 4) == 0) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = CityHash64((char *)((longlong)&param_1->_padding_ + 4),0x10);
    pFVar9 = FindEntry(this,(FCameraVariableID)(uint)uVar8);
    if (pFVar9 == (FEntry *)0x0) {
      if (!param_3) {
        local_30 = &local_res10;
        `UE::Cameras::FCameraVariableTable::SetValue<UVector4dCameraVariable>'::__l5::<lambda_1>::
        operator()(&local_30);
        return;
      }
      UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)local_res10,&local_20);
      AddVariable(this,&local_20);
      local_38[0] = local_20.VariableID.Value;
      pFVar9 = FindEntry(this,local_20.VariableID);
      if (pFVar9 == (FEntry *)0x0) {
        local_28 = local_38;
        bVar7 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector4<double>_>'::__l3::
                <lambda_1>::operator()(&local_28);
        if (!bVar7) {
          return;
        }
      }
      EVar2 = pFVar9->Type;
    }
    else {
      EVar2 = pFVar9->Type;
    }
    if ((EVar2 != Vector4d) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar4 = this->Memory;
    uVar3 = pFVar9->Offset;
    dVar6 = (param_2->field0_0x0)._s_0.Y;
    pdVar1 = (double *)(puVar4 + uVar3);
    *pdVar1 = (param_2->field0_0x0)._s_0.X;
    pdVar1[1] = dVar6;
    dVar6 = (param_2->field0_0x0)._s_0.W;
    pdVar1 = (double *)(puVar4 + (ulonglong)uVar3 + 0x10);
    *pdVar1 = (param_2->field0_0x0)._s_0.Z;
    pdVar1[1] = dVar6;
    pFVar9->Flags = pFVar9->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// SetValue<bool> @ 14d58a690

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<bool>
          (FCameraVariableTable *this,FCameraVariableID param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  uint local_res10 [2];
  uint *local_res20;
  
  local_res10[0] = param_1.Value;
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 == (FEntry *)0x0) {
    local_res20 = local_res10;
    bVar2 = `UE::Cameras::FCameraVariableTable::SetValue<bool>'::__l3::<lambda_1>::operator()
                      (&local_res20);
    if (!bVar2) {
      return;
    }
  }
  if ((pFVar3->Type != Boolean) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Memory[pFVar3->Offset] = param_2;
  pFVar3->Flags = pFVar3->Flags | (WrittenThisFrame|Written);
  return;
}

// TrySetValue<int> @ 14d58b430

bool __thiscall
UE::Cameras::FCameraVariableTable::TrySetValue<int>
          (FCameraVariableTable *this,FCameraVariableID param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FEntry *pFVar4;
  
  pFVar4 = FindEntry(this,param_1);
  if (pFVar4 == (FEntry *)0x0) {
    return false;
  }
  if (pFVar4->Type != Integer32) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7269619262472323284>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  *(int *)(this->Memory + pFVar4->Offset) = param_2;
  pFVar4->Flags = pFVar4->Flags | (WrittenThisFrame|Written);
  return true;
}

// TrySetValue<float> @ 14d58b4c0

bool __thiscall
UE::Cameras::FCameraVariableTable::TrySetValue<float>
          (FCameraVariableTable *this,FCameraVariableID param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FEntry *pFVar4;
  
  pFVar4 = FindEntry(this,param_1);
  if (pFVar4 == (FEntry *)0x0) {
    return false;
  }
  if (pFVar4->Type != Float) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7269619262472323284>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  *(float *)(this->Memory + pFVar4->Offset) = param_2;
  pFVar4->Flags = pFVar4->Flags | (WrittenThisFrame|Written);
  return true;
}

// TrySetValue<double> @ 14d58b550

bool __thiscall
UE::Cameras::FCameraVariableTable::TrySetValue<double>
          (FCameraVariableTable *this,FCameraVariableID param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FEntry *pFVar4;
  
  pFVar4 = FindEntry(this,param_1);
  if (pFVar4 == (FEntry *)0x0) {
    return false;
  }
  if (pFVar4->Type != Double) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7269619262472323284>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  *(double *)(this->Memory + pFVar4->Offset) = param_2;
  pFVar4->Flags = pFVar4->Flags | (WrittenThisFrame|Written);
  return true;
}

// TrySetValue<UE::Math::TRotator<double>_> @ 14d58b5e0

bool __thiscall
UE::Cameras::FCameraVariableTable::TrySetValue<UE::Math::TRotator<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TRotator<double> *param_2)

{
  double *pdVar1;
  uint uVar2;
  uchar *puVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  FEntry *pFVar8;
  
  pFVar8 = FindEntry(this,param_1);
  if (pFVar8 == (FEntry *)0x0) {
    return false;
  }
  if (pFVar8->Type != Rotator3d) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7269619262472323284>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  puVar3 = this->Memory;
  uVar2 = pFVar8->Offset;
  dVar5 = param_2->Yaw;
  pdVar1 = (double *)(puVar3 + uVar2);
  *pdVar1 = param_2->Pitch;
  pdVar1[1] = dVar5;
  *(double *)(puVar3 + (ulonglong)uVar2 + 0x10) = param_2->Roll;
  pFVar8->Flags = pFVar8->Flags | (WrittenThisFrame|Written);
  return true;
}

// TrySetValue<UE::Math::TTransform<double>_> @ 14d58b680

bool __thiscall
UE::Cameras::FCameraVariableTable::TrySetValue<UE::Math::TTransform<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TTransform<double> *param_2)

{
  uchar *puVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  FEntry *pFVar6;
  ulonglong uVar7;
  
  pFVar6 = FindEntry(this,param_1);
  if (pFVar6 == (FEntry *)0x0) {
    return false;
  }
  if (pFVar6->Type != Transform3d) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7269619262472323284>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  puVar1 = this->Memory;
  dVar3 = (param_2->Rotation).XY.m128d_f64[1];
  uVar7 = (ulonglong)pFVar6->Offset;
  *(double *)(puVar1 + uVar7) = (param_2->Rotation).XY.m128d_f64[0];
  *(double *)((longlong)(puVar1 + uVar7) + 8) = dVar3;
  dVar3 = (param_2->Rotation).ZW.m128d_f64[1];
  *(double *)(puVar1 + uVar7 + 0x10) = (param_2->Rotation).ZW.m128d_f64[0];
  *(double *)((longlong)(puVar1 + uVar7 + 0x10) + 8) = dVar3;
  dVar3 = (param_2->Translation).XY.m128d_f64[1];
  *(double *)(puVar1 + uVar7 + 0x20) = (param_2->Translation).XY.m128d_f64[0];
  *(double *)((longlong)(puVar1 + uVar7 + 0x20) + 8) = dVar3;
  dVar3 = (param_2->Translation).ZW.m128d_f64[1];
  *(double *)(puVar1 + uVar7 + 0x30) = (param_2->Translation).ZW.m128d_f64[0];
  *(double *)((longlong)(puVar1 + uVar7 + 0x30) + 8) = dVar3;
  dVar3 = (param_2->Scale3D).XY.m128d_f64[1];
  *(double *)(puVar1 + uVar7 + 0x40) = (param_2->Scale3D).XY.m128d_f64[0];
  *(double *)((longlong)(puVar1 + uVar7 + 0x40) + 8) = dVar3;
  dVar3 = (param_2->Scale3D).ZW.m128d_f64[1];
  *(double *)(puVar1 + uVar7 + 0x50) = (param_2->Scale3D).ZW.m128d_f64[0];
  *(double *)((longlong)(puVar1 + uVar7 + 0x50) + 8) = dVar3;
  pFVar6->Flags = pFVar6->Flags | (WrittenThisFrame|Written);
  return true;
}

// TrySetValue<UE::Math::TVector2<double>_> @ 14d58b740

bool __thiscall
UE::Cameras::FCameraVariableTable::TrySetValue<UE::Math::TVector2<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TVector2<double> *param_2)

{
  uint uVar1;
  uchar *puVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  FEntry *pFVar7;
  
  pFVar7 = FindEntry(this,param_1);
  if (pFVar7 == (FEntry *)0x0) {
    return false;
  }
  if (pFVar7->Type != Vector2d) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7269619262472323284>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  puVar2 = this->Memory;
  uVar1 = pFVar7->Offset;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  *(double *)(puVar2 + uVar1) = (param_2->field0_0x0)._s_0.X;
  *(double *)((longlong)(puVar2 + uVar1) + 8) = dVar4;
  pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
  return true;
}

// TrySetValue<UE::Math::TVector4<double>_> @ 14d58b7d0

bool __thiscall
UE::Cameras::FCameraVariableTable::TrySetValue<UE::Math::TVector4<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TVector4<double> *param_2)

{
  double *pdVar1;
  uint uVar2;
  uchar *puVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  FEntry *pFVar8;
  
  pFVar8 = FindEntry(this,param_1);
  if (pFVar8 == (FEntry *)0x0) {
    return false;
  }
  if (pFVar8->Type != Vector4d) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7269619262472323284>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  puVar3 = this->Memory;
  uVar2 = pFVar8->Offset;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  pdVar1 = (double *)(puVar3 + uVar2);
  *pdVar1 = (param_2->field0_0x0)._s_0.X;
  pdVar1[1] = dVar5;
  dVar5 = (param_2->field0_0x0)._s_0.W;
  pdVar1 = (double *)(puVar3 + (ulonglong)uVar2 + 0x10);
  *pdVar1 = (param_2->field0_0x0)._s_0.Z;
  pdVar1[1] = dVar5;
  pFVar8->Flags = pFVar8->Flags | (WrittenThisFrame|Written);
  return true;
}

// TrySetValue<UE::Math::TVector<double>_> @ 14d58b870

bool __thiscall
UE::Cameras::FCameraVariableTable::TrySetValue<UE::Math::TVector<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TVector<double> *param_2)

{
  double *pdVar1;
  uint uVar2;
  uchar *puVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  FEntry *pFVar8;
  
  pFVar8 = FindEntry(this,param_1);
  if (pFVar8 == (FEntry *)0x0) {
    return false;
  }
  if (pFVar8->Type != Vector3d) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7269619262472323284>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  puVar3 = this->Memory;
  uVar2 = pFVar8->Offset;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  pdVar1 = (double *)(puVar3 + uVar2);
  *pdVar1 = (param_2->field0_0x0)._s_0.X;
  pdVar1[1] = dVar5;
  *(double *)(puVar3 + (ulonglong)uVar2 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  pFVar8->Flags = pFVar8->Flags | (WrittenThisFrame|Written);
  return true;
}

// TrySetValue<bool> @ 14d58b910

bool __thiscall
UE::Cameras::FCameraVariableTable::TrySetValue<bool>
          (FCameraVariableTable *this,FCameraVariableID param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FEntry *pFVar4;
  
  pFVar4 = FindEntry(this,param_1);
  if (pFVar4 == (FEntry *)0x0) {
    return false;
  }
  if (pFVar4->Type != Boolean) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7269619262472323284>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this->Memory[pFVar4->Offset] = param_2;
  pFVar4->Flags = pFVar4->Flags | (WrittenThisFrame|Written);
  return true;
}

// FCameraVariableTable @ 14d58e400

FCameraVariableTable * __thiscall
UE::Cameras::FCameraVariableTable::FCameraVariableTable
          (FCameraVariableTable *this,FCameraVariableTable *param_1)

{
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).AllocatorInstance.Data = (param_1->Entries).AllocatorInstance.Data;
  (param_1->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = (param_1->Entries).ArrayNum;
  (this->Entries).ArrayMax = (param_1->Entries).ArrayMax;
  (param_1->Entries).ArrayNum = 0;
  (param_1->Entries).ArrayMax = 0;
  *(undefined8 *)&(this->EntryLookup).field_0x0 = 0;
  *(undefined8 *)&(this->EntryLookup).field_0x8 = 0;
  *(undefined8 *)&(this->EntryLookup).field_0x20 = 0;
  *(undefined4 *)&(this->EntryLookup).field_0x28 = 0;
  *(undefined4 *)&(this->EntryLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntryLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntryLookup).field_0x34 = 0;
  *(undefined8 *)&(this->EntryLookup).field_0x40 = 0;
  *(undefined4 *)&(this->EntryLookup).field_0x48 = 0;
  TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
              *)&this->EntryLookup,
             (TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
              *)&param_1->EntryLookup);
  this->Memory = param_1->Memory;
  this->Capacity = param_1->Capacity;
  this->Used = param_1->Used;
  param_1->Memory = (uchar *)0x0;
  param_1->Capacity = 0;
  param_1->Used = 0;
  return this;
}

// FCameraVariableTable @ 14d58e4a0

FCameraVariableTable * __thiscall
UE::Cameras::FCameraVariableTable::FCameraVariableTable(FCameraVariableTable *this)

{
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  *(undefined8 *)&this->EntryLookup = 0;
  *(undefined8 *)&(this->EntryLookup).field_0x8 = 0;
  *(undefined8 *)&(this->EntryLookup).field_0x20 = 0;
  *(undefined4 *)&(this->EntryLookup).field_0x28 = 0;
  *(undefined4 *)&(this->EntryLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntryLookup).field_0x34 = 0;
  *(undefined4 *)&(this->EntryLookup).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EntryLookup).field_0x40 = 0;
  *(undefined4 *)&(this->EntryLookup).field_0x48 = 0;
  this->Memory = (uchar *)0x0;
  this->Capacity = 0;
  this->Used = 0;
  return this;
}

// ~FCameraVariableTable @ 14d591560

void __thiscall UE::Cameras::FCameraVariableTable::~FCameraVariableTable(FCameraVariableTable *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  if (this->Memory != (uchar *)0x0) {
    FMemory::Free(this->Memory);
    this->Memory = (uchar *)0x0;
    this->Capacity = 0;
    this->Used = 0;
  }
  *(undefined4 *)&(this->EntryLookup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EntryLookup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FCameraVariableID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FCameraVariableID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FCameraVariableID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EntryLookup);
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator= @ 14d592ea0

FCameraVariableTable * __thiscall
UE::Cameras::FCameraVariableTable::operator=
          (FCameraVariableTable *this,FCameraVariableTable *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->Entries).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->Entries).AllocatorInstance.Data = (param_1->Entries).AllocatorInstance.Data;
    (param_1->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Entries).ArrayNum = (param_1->Entries).ArrayNum;
    (this->Entries).ArrayMax = (param_1->Entries).ArrayMax;
    (param_1->Entries).ArrayNum = 0;
    (param_1->Entries).ArrayMax = 0;
  }
  if (&this->EntryLookup != &param_1->EntryLookup) {
    TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
                *)&this->EntryLookup,
               (TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
                *)&param_1->EntryLookup);
  }
  this->Memory = param_1->Memory;
  this->Capacity = param_1->Capacity;
  this->Used = param_1->Used;
  param_1->Memory = (uchar *)0x0;
  param_1->Capacity = 0;
  param_1->Used = 0;
  return this;
}

// AddVariable @ 14d598be0

void __thiscall
UE::Cameras::FCameraVariableTable::AddVariable
          (FCameraVariableTable *this,FCameraVariableDefinition *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uchar *_Dst;
  uint uVar7;
  uchar *_Src;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint local_res8 [2];
  uint local_res10 [2];
  int local_res18 [4];
  FCameraVariableDefinition *local_78;
  int *local_70;
  uint local_68;
  ECameraVariableType EStack_64;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_60;
  int local_58;
  undefined4 uStack_54;
  
  GetVariableTypeAllocationInfo
            (param_1->VariableType,(param_1->BlendableStructType).field0_0x0.DebugPtr,local_res10,
             local_res8);
  _Src = this->Memory;
  uVar8 = this->Capacity;
  uVar7 = (local_res8[0] - 1) + this->Used + (int)_Src & ~(local_res8[0] - 1);
  uVar9 = (uVar7 - (int)_Src) + local_res10[0];
  if (uVar8 < uVar9) {
    if (uVar8 == 0) {
      uVar8 = 0x40;
    }
    else {
      uVar8 = uVar8 * 2;
    }
    uVar7 = uVar8;
    if ((uVar9 != 0) && (uVar7 = uVar9, uVar9 < uVar8)) {
      uVar7 = uVar8;
    }
    _Dst = FMemory::Malloc((ulonglong)uVar7,0x20);
    if (_Src != (uchar *)0x0) {
      memmove(_Dst,_Src,(ulonglong)this->Capacity);
      FMemory::Free(_Src);
    }
    _Src = (uchar *)((ulonglong)_Dst & 0xffffffff);
    this->Memory = _Dst;
    this->Capacity = uVar7;
    uVar7 = (this->Used - 1) + (int)_Dst + local_res8[0] & ~(local_res8[0] - 1);
  }
  local_58 = uVar7 - (int)_Src;
  this->Used = uVar9;
  local_68 = (param_1->VariableID).Value;
  EStack_64 = param_1->VariableType;
  TStack_60 = (param_1->BlendableStructType).field0_0x0;
  bVar10 = param_1->bIsPrivate != false;
  if (param_1->bIsInput != false) {
    bVar10 = bVar10 | 2;
  }
  if (param_1->bAutoReset != false) {
    bVar10 = bVar10 | 4;
  }
  uStack_54 = CONCAT31(uStack_54._1_3_,bVar10);
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 < pFVar2 + (longlong)(this->Entries).ArrayMax * 0x18))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)this,piVar1);
  }
  (this->Entries).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Entries).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x18;
  *(ulonglong *)pFVar2 = CONCAT44(EStack_64,local_68);
  *(TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar2 + 8) = TStack_60;
  *(ulonglong *)(pFVar3 + (longlong)iVar6 * 0x18 + 0x10) = CONCAT44(uStack_54,local_58);
  local_res18[0] = (this->Entries).ArrayNum + -1;
  local_70 = local_res18;
  local_78 = param_1;
  TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FCameraVariableID_const_&,int_&&>_>
            ((TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
              *)&this->EntryLookup,
             (TPairInitializer<FCameraVariableID_const_&,int_&&> *)(local_res18 + 2),
             (bool *)&local_78);
  return;
}

// AutoResetValues @ 14d59a8d0

void __thiscall UE::Cameras::FCameraVariableTable::AutoResetValues(FCameraVariableTable *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Entries).ArrayNum;
  pFVar3 = (this->Entries).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->Entries).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FCameraVariableTable::FEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (((byte)pFVar3[0x14] & 4) != 0) {
      pFVar3[0x14] = (FScriptContainerElement)((byte)pFVar3[0x14] & 0xe7);
    }
    pFVar3 = pFVar3 + 0x18;
  }
  return;
}

// CacheBlendableStructs @ 14d59bbb0

void __cdecl UE::Cameras::FCameraVariableTable::CacheBlendableStructs(void)

{
  int iVar1;
  FBlendableStructInfo *pFVar2;
  IGameplayCamerasModule *pIVar3;
  undefined8 *puVar4;
  undefined1 local_18 [16];
  
  if (!bCachedBlendableStructs) {
    pIVar3 = IGameplayCamerasModule::Get();
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 0x48))(pIVar3,local_18);
    iVar1 = *(int *)(puVar4 + 1);
    pFVar2 = (FBlendableStructInfo *)*puVar4;
    CachedBlendableStructs.ArrayNum = iVar1;
    if ((iVar1 != 0) || (CachedBlendableStructs.ArrayMax != 0)) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,CachedBlendableStructs.ArrayMax,
                 &CachedBlendableStructs.AllocatorInstance,iVar1,&CachedBlendableStructs.ArrayMax);
      ConstructItems<UE::Cameras::FBlendableStructInfo,UE::Cameras::FBlendableStructInfo,int>
                (CachedBlendableStructs.AllocatorInstance.Data,pFVar2,iVar1);
    }
    bCachedBlendableStructs = true;
  }
  return;
}

// ClearAllWrittenThisFrameFlags @ 14d59be40

void __thiscall
UE::Cameras::FCameraVariableTable::ClearAllWrittenThisFrameFlags(FCameraVariableTable *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Entries).ArrayNum;
  pFVar3 = (this->Entries).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->Entries).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FCameraVariableTable::FEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3[0x14] = (FScriptContainerElement)((byte)pFVar3[0x14] & 0xef);
    pFVar3 = pFVar3 + 0x18;
  }
  return;
}

// ContainsValue @ 14d59c3d0

bool __thiscall
UE::Cameras::FCameraVariableTable::ContainsValue
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->EntryLookup).field_0x8 != *(int *)&(this->EntryLookup).field_0x34) {
    puVar2 = *(undefined1 **)&(this->EntryLookup).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->EntryLookup).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->EntryLookup).field_0x48 - 1U & param_1.Value) * 4);
    if (iVar1 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this->EntryLookup + (longlong)iVar1 * 0x10) == param_1.Value)
        goto LAB_14d59c41c;
        iVar1 = *(int *)(*(longlong *)&this->EntryLookup + 8 + (longlong)iVar1 * 0x10);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14d59c41c:
  return iVar1 != -1;
}

// FindEntry @ 14d5a41a0

FEntry * __thiscall
UE::Cameras::FCameraVariableTable::FindEntry(FCameraVariableTable *this,FCameraVariableID param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  FEntry *pFVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  
  if (*(int *)&(this->EntryLookup).field_0x8 != *(int *)&(this->EntryLookup).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EntryLookup).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EntryLookup).field_0x38;
    }
    uVar3 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(this->EntryLookup).field_0x48 - 1U & param_1.Value) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar3 * 0x10 + *(longlong *)&this->EntryLookup);
        if (*puVar6 == param_1.Value) {
          puVar4 = puVar6 + 1;
          if (puVar6 == (uint *)0x0) {
            puVar4 = (uint *)0x0;
          }
          if (puVar4 == (uint *)0x0) {
            return (FEntry *)0x0;
          }
          uVar3 = *puVar4;
          uVar8 = 0;
          if ((int)uVar3 < (this->Entries).ArrayNum) {
            uVar8 = ~uVar3 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            pFVar5 = (FEntry *)(*pcVar1)();
            return pFVar5;
          }
          return (FEntry *)((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x18);
        }
        uVar3 = puVar6[2];
      } while (uVar3 != 0xffffffff);
    }
  }
  return (FEntry *)0x0;
}

// FindEntry @ 14d5a4280

FEntry * __thiscall
UE::Cameras::FCameraVariableTable::FindEntry(FCameraVariableTable *this,FCameraVariableID param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  FEntry *pFVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  
  if (*(int *)&(this->EntryLookup).field_0x8 != *(int *)&(this->EntryLookup).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EntryLookup).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EntryLookup).field_0x38;
    }
    uVar3 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(this->EntryLookup).field_0x48 - 1U & param_1.Value) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar3 * 0x10 + *(longlong *)&this->EntryLookup);
        if (*puVar6 == param_1.Value) {
          puVar4 = puVar6 + 1;
          if (puVar6 == (uint *)0x0) {
            puVar4 = (uint *)0x0;
          }
          if (puVar4 == (uint *)0x0) {
            return (FEntry *)0x0;
          }
          uVar3 = *puVar4;
          uVar8 = 0;
          if ((int)uVar3 < (this->Entries).ArrayNum) {
            uVar8 = ~uVar3 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            pFVar5 = (FEntry *)(*pcVar1)();
            return pFVar5;
          }
          return (FEntry *)((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x18);
        }
        uVar3 = puVar6[2];
      } while (uVar3 != 0xffffffff);
    }
  }
  return (FEntry *)0x0;
}

// GetBlendableStructInterpolator @ 14d5a6910

_func___cdecl_void_uchar_ptr_uchar_ptr_float * __cdecl
UE::Cameras::FCameraVariableTable::GetBlendableStructInterpolator(UScriptStruct *param_1)

{
  int iVar1;
  FBlendableStructInfo *pFVar2;
  IGameplayCamerasModule *pIVar3;
  undefined8 *puVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res10 [8];
  undefined1 local_18 [16];
  
  if (!bCachedBlendableStructs) {
    pIVar3 = IGameplayCamerasModule::Get();
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 0x48))(pIVar3,local_18);
    iVar1 = *(int *)(puVar4 + 1);
    pFVar2 = (FBlendableStructInfo *)*puVar4;
    CachedBlendableStructs.ArrayNum = iVar1;
    if ((iVar1 != 0) || (CachedBlendableStructs.ArrayMax != 0)) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,CachedBlendableStructs.ArrayMax,
                 &CachedBlendableStructs.AllocatorInstance,iVar1,&CachedBlendableStructs.ArrayMax);
      ConstructItems<UE::Cameras::FBlendableStructInfo,UE::Cameras::FBlendableStructInfo,int>
                (CachedBlendableStructs.AllocatorInstance.Data,pFVar2,iVar1);
    }
    bCachedBlendableStructs = true;
  }
  iVar1 = CachedBlendableStructs.ArrayNum;
  pFVar6 = CachedBlendableStructs.AllocatorInstance.Data +
           (longlong)CachedBlendableStructs.ArrayNum * 0x10;
  FVar5.Data = CachedBlendableStructs.AllocatorInstance.Data;
  while( true ) {
    if (CachedBlendableStructs.ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Cameras::FBlendableStructInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar5.Data == pFVar6) {
      return (_func___cdecl_void_uchar_ptr_uchar_ptr_float *)0x0;
    }
    if (*(UScriptStruct **)FVar5.Data == (UScriptStruct *)0x0) {
      bVar7 = param_1 == (UScriptStruct *)0x0;
    }
    else {
      bVar7 = *(UScriptStruct **)FVar5.Data == param_1;
    }
    if (bVar7) break;
    FVar5.Data = FVar5.Data + 0x10;
  }
  return *(_func___cdecl_void_uchar_ptr_uchar_ptr_float **)(FVar5.Data + 8);
}

// GetValue @ 14d5abed0

uchar * __thiscall
UE::Cameras::FCameraVariableTable::GetValue
          (FCameraVariableTable *this,FCameraVariableID param_1,ECameraVariableType param_2,
          UScriptStruct *param_3,bool param_4)

{
  uchar *puVar1;
  uint local_res10 [6];
  uint *local_18 [2];
  
  local_res10[0] = param_1.Value;
  puVar1 = TryGetValue(this,param_1,param_2,param_3,param_4);
  if (puVar1 == (uchar *)0x0) {
    local_18[0] = local_res10;
    `UE::Cameras::FCameraVariableTable::GetValue'::__l2::<lambda_1>::operator()(local_18);
  }
  return puVar1;
}

// GetVariableTypeAllocationInfo @ 14d5ac950

bool __cdecl
UE::Cameras::FCameraVariableTable::GetVariableTypeAllocationInfo
          (ECameraVariableType param_1,UScriptStruct *param_2,uint *param_3,uint *param_4)

{
  ICppStructOps *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FString local_18;
  
  switch(param_1) {
  case Boolean:
    *param_3 = 1;
    *param_4 = 1;
    return true;
  case Integer32:
  case Float:
    *param_3 = 4;
    *param_4 = 4;
    return true;
  case Double:
    *param_3 = 8;
    *param_4 = 8;
    return true;
  case Vector2f:
    *param_3 = 8;
    *param_4 = 4;
    return true;
  case Vector2d:
    *param_3 = 0x10;
    *param_4 = 8;
    return true;
  case Vector3f:
  case Rotator3f:
    *param_3 = 0xc;
    *param_4 = 4;
    return true;
  case Vector3d:
  case Rotator3d:
    *param_3 = 0x18;
    *param_4 = 8;
    return true;
  case Vector4f:
    *param_3 = 0x10;
    *param_4 = 0x10;
    return true;
  case Vector4d:
    *param_3 = 0x20;
    *param_4 = 0x10;
    return true;
  case Transform3f:
    *param_3 = 0x30;
    *param_4 = 0x10;
    return true;
  case Transform3d:
    *param_3 = 0x60;
    *param_4 = 0x10;
    return true;
  case BlendableStruct:
    break;
  default:
    return false;
  }
  if ((param_2 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableTable.cpp"
                         ,0x10d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (param_2->bPrepareCppStructOpsCompleted == false) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_18,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bPrepareCppStructOpsCompleted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x8f6,
                       L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pIVar1 = param_2->CppStructOps;
  *param_3 = pIVar1->Size;
  *param_4 = pIVar1->Alignment;
  return true;
}

// Initialize @ 14d5aef50

void __thiscall
UE::Cameras::FCameraVariableTable::Initialize
          (FCameraVariableTable *this,FCameraVariableTableAllocationInfo *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  __m128 _Var17;
  __m128 _Var18;
  __m128 _Var19;
  bool bVar20;
  int iVar21;
  uchar *puVar22;
  uint uVar23;
  __m128 *p_Var24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  byte bVar27;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  uint local_d8;
  undefined4 uStack_d4;
  uint local_d0;
  int local_cc;
  TPairInitializer<FCameraVariableID_const_&,int_&&> local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 *local_a8;
  int *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  piVar1 = &(this->Entries).ArrayMax;
  (this->Entries).ArrayNum = 0;
  if ((this->Entries).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
           *)&this->EntryLookup);
  if (this->Memory != (uchar *)0x0) {
    FMemory::Free(this->Memory);
    this->Memory = (uchar *)0x0;
  }
  iVar3 = (param_1->VariableDefinitions).ArrayNum;
  local_res18 = 0;
  pFVar25 = (param_1->VariableDefinitions).AllocatorInstance.Data;
  pFVar2 = pFVar25 + (longlong)iVar3 * 0x18;
  uVar26 = 0;
  do {
    if ((param_1->VariableDefinitions).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FCameraVariableDefinition_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    uVar23 = local_res18;
    if (pFVar25 == pFVar2) {
      if (uVar26 < 0x20) {
        uVar26 = 0x20;
      }
      puVar22 = FMemory::Malloc((ulonglong)local_res18,uVar26);
      this->Memory = puVar22;
      this->Capacity = uVar23;
      this->Used = uVar23;
      iVar3 = (this->Entries).ArrayNum;
      pFVar25 = (this->Entries).AllocatorInstance.Data;
      pFVar2 = pFVar25 + (longlong)iVar3 * 0x18;
      while( true ) {
        if ((this->Entries).ArrayNum != iVar3) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<UE::Cameras::FCameraVariableTable::FEntry,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res10);
        }
        _Var18 = GlobalVectorConstants::Float1110;
        _Var17 = GlobalVectorConstants::FloatZero;
        if (pFVar25 == pFVar2) break;
        p_Var24 = (__m128 *)(this->Memory + *(uint *)(pFVar25 + 0x10));
        switch(*(undefined4 *)(pFVar25 + 4)) {
        case 0:
          p_Var24->m128_i8[0] = '\0';
          pFVar25 = pFVar25 + 0x18;
          break;
        case 1:
        case 2:
          p_Var24->m128_f32[0] = 0.0;
          pFVar25 = pFVar25 + 0x18;
          break;
        case 3:
        case 4:
          p_Var24->m128_u64[0] = 0;
          pFVar25 = pFVar25 + 0x18;
          break;
        case 5:
          pFVar25 = pFVar25 + 0x18;
          local_68 = 0;
          uStack_60 = 0;
          p_Var24->m128_u64[0] = 0;
          p_Var24->m128_u64[1] = 0;
          break;
        case 6:
          local_c8._4_8_ = 0;
          pFVar25 = pFVar25 + 0x18;
          p_Var24->m128_u64[0] = 0;
          p_Var24->m128_f32[2] = 0.0;
          local_c8.Value._4_4_ = 0;
          break;
        case 7:
          p_Var24->m128_u64[0] = 0;
          p_Var24->m128_u64[1] = 0;
          local_88 = 0;
          pFVar25 = pFVar25 + 0x18;
          local_98 = 0;
          uStack_90 = 0;
          p_Var24[1].m128_u64[0] = 0;
          break;
        case 8:
          p_Var24->m128_u64[0] = 0;
          pFVar25 = pFVar25 + 0x18;
          p_Var24->m128_f32[2] = 0.0;
          p_Var24->m128_i32[3] = 0x3f800000;
          break;
        case 9:
          p_Var24->m128_u64[0] = 0;
          pFVar25 = pFVar25 + 0x18;
          p_Var24->m128_u64[1] = 0;
          p_Var24[1].m128_u64[0] = 0;
          *(undefined8 *)((longlong)p_Var24 + 0x18) = 0x3ff0000000000000;
          break;
        case 10:
          local_b8 = 0;
          pFVar25 = pFVar25 + 0x18;
          p_Var24->m128_u64[0] = 0;
          p_Var24->m128_f32[2] = 0.0;
          local_b0 = 0;
          break;
        case 0xb:
          p_Var24->m128_u64[0] = 0;
          p_Var24->m128_u64[1] = 0;
          local_70 = 0;
          pFVar25 = pFVar25 + 0x18;
          local_80 = 0;
          uStack_78 = 0;
          p_Var24[1].m128_u64[0] = 0;
          break;
        case 0xc:
          pFVar25 = pFVar25 + 0x18;
          *p_Var24 = GlobalVectorConstants::Float0001;
          p_Var24[1] = _Var17;
          p_Var24[2] = _Var18;
          break;
        case 0xd:
          fVar11 = GlobalVectorConstants::Float0001.m128_f32[2];
          fVar14 = GlobalVectorConstants::Float0001.m128_f32[3];
          pFVar25 = pFVar25 + 0x18;
          fVar7 = GlobalVectorConstants::FloatZero.m128_f32[0];
          fVar9 = GlobalVectorConstants::FloatZero.m128_f32[1];
          fVar12 = GlobalVectorConstants::FloatZero.m128_f32[2];
          fVar15 = GlobalVectorConstants::FloatZero.m128_f32[3];
          fVar8 = GlobalVectorConstants::Float1110.m128_f32[0];
          fVar10 = GlobalVectorConstants::Float1110.m128_f32[1];
          fVar13 = GlobalVectorConstants::Float1110.m128_f32[2];
          fVar16 = GlobalVectorConstants::Float1110.m128_f32[3];
          _Var17.m128_i32[2] = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          _Var17.m128_u64[0] = (ulong64)(double)GlobalVectorConstants::Float0001.m128_f32[0];
          _Var17.m128_i32[3] =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          *p_Var24 = _Var17;
          *(double *)(p_Var24 + 1) = (double)fVar11;
          *(double *)((longlong)p_Var24 + 0x18) = (double)fVar14;
          *(double *)(p_Var24 + 2) = (double)fVar7;
          *(double *)((longlong)p_Var24 + 0x28) = (double)fVar9;
          *(double *)(p_Var24 + 3) = (double)fVar12;
          *(double *)((longlong)p_Var24 + 0x38) = (double)fVar15;
          _Var19.m128_i32[2] = SUB84((double)fVar10,0);
          _Var19.m128_u64[0] = (ulong64)(double)fVar8;
          _Var19.m128_i32[3] = (int)((ulonglong)(double)fVar10 >> 0x20);
          p_Var24[4] = _Var19;
          _Var18.m128_i32[2] = SUB84((double)fVar16,0);
          _Var18.m128_u64[0] = (ulong64)(double)fVar13;
          _Var18.m128_i32[3] = (int)((ulonglong)(double)fVar16 >> 0x20);
          p_Var24[5] = _Var18;
          break;
        case 0xe:
          if ((*(longlong *)(pFVar25 + 8) == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Entry.StructType",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableTable.cpp"
                                  ,0x8f,L""), bVar20)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (**(code **)(**(longlong **)(pFVar25 + 8) + 0x2f8))(*(longlong **)(pFVar25 + 8),p_Var24,1)
          ;
        default:
          pFVar25 = pFVar25 + 0x18;
        }
      }
      return;
    }
    GetVariableTypeAllocationInfo
              (*(ECameraVariableType *)(pFVar25 + 4),*(UScriptStruct **)(pFVar25 + 8),&local_d0,
               local_res20);
    local_d8 = (local_res18 - 1) + local_res20[0] & -local_res20[0];
    local_res18 = local_d0 + local_d8;
    local_e8 = *(undefined4 *)pFVar25;
    uVar23 = local_res20[0];
    if (local_res20[0] < uVar26) {
      uVar23 = uVar26;
    }
    uStack_e4 = *(undefined4 *)(pFVar25 + 4);
    uStack_e0 = *(undefined8 *)(pFVar25 + 8);
    bVar27 = pFVar25[0x10] != (FScriptContainerElement)0x0;
    if (pFVar25[0x11] != (FScriptContainerElement)0x0) {
      bVar27 = bVar27 | 2;
    }
    if (pFVar25[0x12] != (FScriptContainerElement)0x0) {
      bVar27 = bVar27 | 4;
    }
    uStack_d4 = CONCAT31(uStack_d4._1_3_,bVar27);
    pFVar4 = (this->Entries).AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_e8) &&
        ((FScriptContainerElement *)&local_e8 < pFVar4 + (longlong)*piVar1 * 0x18)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar20)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar21 = (this->Entries).ArrayNum;
    if (iVar21 == *piVar1) {
      iVar21 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)this,piVar1);
    }
    (this->Entries).ArrayNum = iVar21 + 1;
    pFVar5 = (this->Entries).AllocatorInstance.Data;
    pFVar4 = pFVar5 + (longlong)iVar21 * 0x18;
    *(ulonglong *)pFVar4 = CONCAT44(uStack_e4,local_e8);
    *(undefined8 *)(pFVar4 + 8) = uStack_e0;
    *(ulonglong *)(pFVar5 + (longlong)iVar21 * 0x18 + 0x10) = CONCAT44(uStack_d4,local_d8);
    local_cc = (this->Entries).ArrayNum + -1;
    local_a8 = &local_e8;
    local_a0 = &local_cc;
    TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FCameraVariableID_const_&,int_&&>_>
              ((TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
                *)&this->EntryLookup,&local_c8,(bool *)&local_a8);
    pFVar25 = pFVar25 + 0x18;
    uVar26 = uVar23;
  } while( true );
}

// InternalLerp @ 14d5b0c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Cameras::FCameraVariableTable::InternalLerp
          (FCameraVariableTable *this,FCameraVariableTable *param_1,
          ECameraVariableTableFilter param_2,float param_3,FCameraVariableTableFlags *param_4,
          bool param_5,FCameraVariableTableFlags *param_6)

{
  FScriptContainerElement FVar1;
  EEntryFlags EVar2;
  FCameraVariableID FVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  UScriptStruct *pUVar6;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  float fVar14;
  float fVar15;
  undefined2 uVar16;
  IGameplayCamerasModule *pIVar17;
  undefined8 *puVar18;
  int iVar19;
  ForElementType<FSetElementId> FVar20;
  undefined2 uVar21;
  ECameraVariableTableFilter EVar22;
  ForAnyElementType FVar23;
  FScriptContainerElement *pFVar24;
  undefined1 (*pauVar25) [16];
  ulonglong uVar26;
  TTransform<double> *pTVar27;
  FScriptContainerElement *pFVar28;
  bool bVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  float fVar34;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar40;
  float fVar41;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar42 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar57;
  undefined1 auVar56 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auStackY_238 [32];
  undefined1 local_1f7;
  undefined1 local_1f6 [6];
  FEntry *local_1f0;
  uint local_1e8 [2];
  undefined8 local_1e0;
  ECameraVariableTableFilter local_1d8;
  ECameraVariableTableFilter local_1d4;
  ECameraVariableTableFilter local_1d0;
  undefined8 local_1c8;
  uint local_1c0;
  uint local_1bc;
  FCameraVariableTable *local_1b8;
  float local_1b0;
  float fStack_1ac;
  FCameraVariableDefinition local_1a8;
  FCameraVariableID local_190 [2];
  FCameraVariableTable *local_188;
  FScriptContainerElement *local_180;
  FEntry **local_178;
  FString *local_170;
  FEntry **local_168;
  FString *local_160;
  FScriptContainerElement *local_158;
  TTransform<double> local_148;
  ulonglong local_d8;
  
  fVar15 = __real_3f7fff58;
  fVar14 = __real_3f800000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1d0 = param_2 & InputOnly;
  local_1bc = (param_1->Entries).ArrayNum;
  uVar26 = (ulonglong)(int)local_1bc;
  EVar22 = param_2 & KnownOnly;
  pFVar24 = (param_1->Entries).AllocatorInstance.Data;
  local_1d4 = param_2 & ChangedOnly;
  pFVar28 = pFVar24 + uVar26 * 0x18;
  fVar41 = __real_3727c5ac;
  local_1d8 = EVar22;
  local_1b8 = param_1;
  local_188 = this;
  local_180 = pFVar28;
  do {
    if ((param_1->Entries).ArrayNum != (int)uVar26) {
      local_1f7 = 0;
      `TCheckedPointerIterator<UE::Cameras::FCameraVariableTable::FEntry_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_1f7);
    }
    if (pFVar24 == pFVar28) {
      return;
    }
    FVar1 = pFVar24[0x14];
    if ((((((byte)FVar1 & Written) != None) &&
         (((param_2 & PublicOnly) == None || (((byte)FVar1 & Private) == None)))) &&
        ((local_1d0 == None || (((byte)FVar1 & Input) != None)))) &&
       ((local_1d4 == None || (((byte)FVar1 & WrittenThisFrame) != None)))) {
      FVar3.Value = *(uint *)pFVar24;
      if (param_4 != (FCameraVariableTableFlags *)0x0) {
        if (*(int *)&(param_4->VariableIDs).Elements.field_0x8 !=
            *(int *)&(param_4->VariableIDs).Elements.field_0x34) {
          FVar4 = (param_4->VariableIDs).Hash.SecondaryData;
          FVar20 = (ForElementType<FSetElementId>)&(param_4->VariableIDs).Hash;
          if (FVar4 != (ForElementType<FSetElementId>)0x0) {
            FVar20 = FVar4;
          }
          iVar19 = *(int *)((longlong)FVar20 +
                           (ulonglong)((param_4->VariableIDs).HashSize - 1U & FVar3.Value) * 4);
          if (iVar19 != -1) {
            lVar5 = *(longlong *)&(param_4->VariableIDs).Elements;
            do {
              if (*(uint *)(lVar5 + (longlong)iVar19 * 0xc) == FVar3.Value) goto LAB_14d5b0dfc;
              iVar19 = *(int *)(lVar5 + 4 + (longlong)iVar19 * 0xc);
            } while (iVar19 != -1);
          }
        }
        iVar19 = -1;
LAB_14d5b0dfc:
        bVar29 = iVar19 != -1;
        if (param_5) {
          bVar29 = iVar19 == -1;
        }
        if (!bVar29) goto LAB_14d5b16af;
      }
      local_1f0 = FindEntry(this,FVar3);
      if (local_1f0 == (FEntry *)0x0) {
        if (EVar22 != None) goto LAB_14d5b16af;
        local_1a8.VariableID.Value = *(uint *)pFVar24;
        local_1a8.VariableType = *(ECameraVariableType *)(pFVar24 + 4);
        uVar21._0_1_ = false;
        uVar21._1_1_ = false;
        local_1a8.bIsPrivate = false;
        local_1a8.bIsInput = false;
        local_1a8.bAutoReset = false;
        TVar7 = (TObjectPtr<UScriptStruct_const_>_u_0)
                ((TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar24 + 8))->DebugPtr;
        local_1a8.BlendableStructType.field0_0x0.DebugPtr =
             (TObjectPtr<UScriptStruct_const_>_u_0)0x0;
        uVar16 = uVar21;
        bVar29 = false;
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (uVar16 = local_1a8._16_2_, bVar29 = local_1a8.bAutoReset,
           TVar7.DebugPtr != (UScriptStruct *)0x0)) {
          local_1a8._16_2_ = uVar21;
          local_1a8.bAutoReset = false;
          GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
          uVar16 = local_1a8._16_2_;
          bVar29 = local_1a8.bAutoReset;
        }
        local_1a8.bAutoReset = bVar29;
        local_1a8._16_2_ = uVar16;
        local_1a8._16_2_ = CONCAT11((byte)pFVar24[0x14] >> 1,local_1a8.bIsPrivate) & 0x1ff;
        local_1a8.BlendableStructType.field0_0x0 = TVar7;
        AddVariable(this,&local_1a8);
        local_1f0 = FindEntry(this,(FCameraVariableID)*(uint *)pFVar24);
        if ((local_1f0 == (FEntry *)0x0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("FromEntry",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableTable.cpp"
                                ,0x2cc,L""), bVar29)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_1e8[0] = 0;
        local_1c0 = 0;
        GetVariableTypeAllocationInfo(local_1f0->Type,local_1f0->StructType,local_1e8,&local_1c0);
        uVar30 = local_1e8[0];
        if ((local_1e8[0] == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("ValueSize != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableTable.cpp"
                                ,0x2d0,L""), bVar29)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        memcpy(this->Memory + local_1f0->Offset,param_1->Memory + *(uint *)(pFVar24 + 0x10),
               (ulonglong)uVar30);
        local_1f0->Flags = local_1f0->Flags | (byte)FVar1 & WrittenThisFrame | Written;
      }
      else {
        if (local_1f0->Type != *(ECameraVariableType *)(pFVar24 + 4)) {
          local_168 = &local_1f0;
          local_160 = &Cameras::Private::GUnavailableVariableDebugName;
          local_158 = pFVar24;
          bVar29 = `UE::Cameras::FCameraVariableTable::InternalLerp'::__l13::<lambda_1>::operator()
                             (&local_168);
          if (!bVar29) goto LAB_14d5b16af;
        }
        EVar2 = local_1f0->Flags;
        if ((EVar2 & Written) == None) {
          local_178 = &local_1f0;
          local_170 = &Cameras::Private::GUnavailableVariableDebugName;
          `UE::Cameras::FCameraVariableTable::InternalLerp'::__l12::<lambda_2>::operator()
                    (&local_178);
        }
        pTVar27 = (TTransform<double> *)(param_1->Memory + *(uint *)(pFVar24 + 0x10));
        pauVar25 = (undefined1 (*) [16])(this->Memory + local_1f0->Offset);
        switch(local_1f0->Type) {
        case Boolean:
          if ((fVar14 - param_3) * (float)(byte)(*pauVar25)[0] +
              (float)*(byte *)(pTVar27->Rotation).XY.m128d_f64 * param_3 == 0.0) {
            (*pauVar25)[0] = 0;
          }
          else {
            (*pauVar25)[0] = 1;
          }
          break;
        case Integer32:
          *(int *)*pauVar25 =
               (int)((fVar14 - param_3) * (float)*(int *)*pauVar25 +
                    (float)*(int *)(pTVar27->Rotation).XY.m128d_f64 * param_3);
          break;
        case Float:
          *(float *)*pauVar25 =
               (fVar14 - param_3) * *(float *)*pauVar25 +
               param_3 * *(float *)(pTVar27->Rotation).XY.m128d_f64;
          break;
        case Double:
          *(double *)*pauVar25 =
               (double)(fVar14 - param_3) * *(double *)*pauVar25 +
               (double)param_3 * (pTVar27->Rotation).XY.m128d_f64[0];
          break;
        case Vector2f:
          dVar10 = (pTVar27->Rotation).XY.m128d_f64[0];
          pFVar28 = *(FScriptContainerElement **)*pauVar25;
          local_1c8._0_4_ = SUB84(dVar10,0);
          local_1c8._4_4_ = (float)((ulonglong)dVar10 >> 0x20);
          local_1e0._0_4_ = SUB84(pFVar28,0);
          local_1b0 = (float)local_1c8 * param_3 + (float)local_1e0 * (fVar14 - param_3);
          local_1e0._4_4_ = (float)((ulonglong)pFVar28 >> 0x20);
          fStack_1ac = local_1c8._4_4_ * param_3 + local_1e0._4_4_ * (fVar14 - param_3);
          *(ulonglong *)*pauVar25 = CONCAT44(fStack_1ac,local_1b0);
          local_1e0 = (FBlendableStructInfo *)pFVar28;
          local_1c8 = dVar10;
          break;
        case Vector2d:
          dVar10 = (pTVar27->Rotation).XY.m128d_f64[0];
          dVar13 = *(double *)*pauVar25;
          *(double *)(*pauVar25 + 8) =
               (double)(fVar14 - param_3) * *(double *)(*pauVar25 + 8) +
               (double)param_3 * (pTVar27->Rotation).XY.m128d_f64[1];
          *(double *)*pauVar25 = (double)param_3 * dVar10 + (double)(fVar14 - param_3) * dVar13;
          break;
        case Vector3f:
        case Rotator3f:
          fVar44 = fVar14 - param_3;
          fVar41 = *(float *)((longlong)(pTVar27->Rotation).XY.m128d_f64 + 4);
          fVar43 = *(float *)((pTVar27->Rotation).XY.m128d_f64 + 1);
          *(float *)*pauVar25 =
               fVar44 * *(float *)*pauVar25 + param_3 * *(float *)(pTVar27->Rotation).XY.m128d_f64;
          *(float *)(*pauVar25 + 4) = fVar44 * *(float *)(*pauVar25 + 4) + param_3 * fVar41;
          *(float *)(*pauVar25 + 8) = fVar44 * *(float *)(*pauVar25 + 8) + param_3 * fVar43;
          break;
        case Vector3d:
          auVar36 = *(undefined1 (*) [16])((pTVar27->Rotation).XY.m128d_f64 + 1);
          dVar46 = (double)param_3;
          dVar48 = (double)(fVar14 - param_3);
          dVar13 = *(double *)(*pauVar25 + 8);
          *(double *)*pauVar25 =
               dVar48 * *(double *)*pauVar25 + dVar46 * (pTVar27->Rotation).XY.m128d_f64[0];
          dVar10 = dVar46 * auVar36._8_8_ + dVar48 * *(double *)pauVar25[1];
          auVar12._8_4_ = SUB84(dVar10,0);
          auVar12._0_8_ = dVar46 * auVar36._0_8_ + dVar48 * dVar13;
          auVar12._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          *(undefined1 (*) [16])(*pauVar25 + 8) = auVar12;
          break;
        case Vector4f:
          fVar60 = fVar14 - param_3;
          fVar41 = *(float *)((longlong)(pTVar27->Rotation).XY.m128d_f64 + 4);
          fVar43 = *(float *)((pTVar27->Rotation).XY.m128d_f64 + 1);
          fVar44 = *(float *)(*pauVar25 + 4);
          fVar45 = *(float *)(*pauVar25 + 8);
          fVar58 = *(float *)(*pauVar25 + 0xc);
          fVar59 = *(float *)((longlong)(pTVar27->Rotation).XY.m128d_f64 + 0xc);
          *(float *)*pauVar25 =
               fVar60 * *(float *)*pauVar25 + param_3 * *(float *)(pTVar27->Rotation).XY.m128d_f64;
          *(float *)(*pauVar25 + 4) = fVar60 * fVar44 + param_3 * fVar41;
          *(float *)(*pauVar25 + 8) = fVar60 * fVar45 + param_3 * fVar43;
          *(float *)(*pauVar25 + 0xc) = fVar60 * fVar58 + param_3 * fVar59;
          break;
        case Vector4d:
          auVar36 = *(undefined1 (*) [16])((pTVar27->Rotation).XY.m128d_f64 + 1);
          dVar47 = (double)param_3;
          dVar10 = (pTVar27->Rotation).ZW.m128d_f64[1];
          dVar46 = (double)(fVar14 - param_3);
          dVar48 = *(double *)(*pauVar25 + 8);
          *(double *)*pauVar25 =
               dVar46 * *(double *)*pauVar25 + dVar47 * (pTVar27->Rotation).XY.m128d_f64[0];
          dVar13 = dVar47 * auVar36._8_8_ + dVar46 * *(double *)pauVar25[1];
          *(double *)(pauVar25[1] + 8) = dVar46 * *(double *)(pauVar25[1] + 8) + dVar47 * dVar10;
          auVar11._8_4_ = SUB84(dVar13,0);
          auVar11._0_8_ = dVar47 * auVar36._0_8_ + dVar46 * dVar48;
          auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
          *(undefined1 (*) [16])(*pauVar25 + 8) = auVar11;
          break;
        case Rotator3d:
          auVar36 = *(undefined1 (*) [16])((pTVar27->Rotation).XY.m128d_f64 + 1);
          dVar13 = (double)param_3;
          dVar48 = (double)(fVar14 - param_3);
          dVar46 = *(double *)(*pauVar25 + 8);
          *(double *)*pauVar25 =
               dVar48 * *(double *)*pauVar25 + dVar13 * (pTVar27->Rotation).XY.m128d_f64[0];
          dVar10 = dVar48 * *(double *)pauVar25[1] + dVar13 * auVar36._8_8_;
          auVar9._8_4_ = SUB84(dVar10,0);
          auVar9._0_8_ = dVar48 * dVar46 + dVar13 * auVar36._0_8_;
          auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          *(undefined1 (*) [16])(*pauVar25 + 8) = auVar9;
          break;
        case Transform3f:
          auVar56 = *pauVar25;
          fVar43 = auVar56._0_4_;
          fVar44 = auVar56._4_4_;
          fVar45 = auVar56._12_4_;
          fVar58 = *(float *)pauVar25[1];
          fVar59 = *(float *)(pauVar25[1] + 4);
          fVar60 = *(float *)(pauVar25[1] + 8);
          fVar61 = *(float *)(pauVar25[1] + 0xc);
          fVar62 = *(float *)pauVar25[2];
          fVar63 = *(float *)(pauVar25[2] + 4);
          fVar64 = *(float *)(pauVar25[2] + 8);
          fVar65 = *(float *)(pauVar25[2] + 0xc);
          if (fVar41 < param_3) {
            if (fVar15 <= param_3) {
              dVar10 = (pTVar27->Rotation).ZW.m128d_f64[0];
              dVar13 = (pTVar27->Rotation).ZW.m128d_f64[1];
              dVar46 = (pTVar27->Translation).XY.m128d_f64[0];
              dVar48 = (pTVar27->Translation).XY.m128d_f64[1];
              *pauVar25 = *(undefined1 (*) [16])(pTVar27->Rotation).XY.m128d_f64;
              *(double *)pauVar25[1] = dVar10;
              *(double *)(pauVar25[1] + 8) = dVar13;
              *(double *)pauVar25[2] = dVar46;
              *(double *)(pauVar25[2] + 8) = dVar48;
              break;
            }
            fVar41 = *(float *)(pTVar27->Rotation).XY.m128d_f64;
            fVar49 = *(float *)((longlong)(pTVar27->Rotation).XY.m128d_f64 + 4);
            fVar50 = *(float *)((pTVar27->Rotation).XY.m128d_f64 + 1);
            fVar51 = *(float *)((longlong)(pTVar27->Rotation).XY.m128d_f64 + 0xc);
            fVar57 = auVar56._8_4_;
            fVar52 = GlobalVectorConstants::FloatOne.m128_f32[0] - param_3;
            fVar53 = GlobalVectorConstants::FloatOne.m128_f32[1] - param_3;
            fVar54 = GlobalVectorConstants::FloatOne.m128_f32[2] - param_3;
            fVar55 = GlobalVectorConstants::FloatOne.m128_f32[3] - param_3;
            fVar58 = *(float *)(pTVar27->Rotation).ZW.m128d_f64 * param_3 + fVar58 * fVar52;
            fVar59 = *(float *)((longlong)(pTVar27->Rotation).ZW.m128d_f64 + 4) * param_3 +
                     fVar59 * fVar53;
            fVar60 = *(float *)((pTVar27->Rotation).ZW.m128d_f64 + 1) * param_3 + fVar60 * fVar54;
            fVar61 = *(float *)((longlong)(pTVar27->Rotation).ZW.m128d_f64 + 0xc) * param_3 +
                     fVar61 * fVar55;
            fVar62 = *(float *)(pTVar27->Translation).XY.m128d_f64 * param_3 + fVar62 * fVar52;
            fVar63 = *(float *)((longlong)(pTVar27->Translation).XY.m128d_f64 + 4) * param_3 +
                     fVar63 * fVar53;
            fVar64 = *(float *)((pTVar27->Translation).XY.m128d_f64 + 1) * param_3 + fVar64 * fVar54
            ;
            fVar65 = *(float *)((longlong)(pTVar27->Translation).XY.m128d_f64 + 0xc) * param_3 +
                     fVar65 * fVar55;
            fVar34 = fVar43 * fVar41;
            fVar37 = fVar44 * fVar49;
            fVar38 = fVar57 * fVar50;
            fVar39 = fVar45 * fVar51;
            fVar40 = fVar37 + fVar34;
            fVar34 = fVar34 + fVar37;
            fVar37 = fVar39 + fVar38;
            fVar38 = fVar38 + fVar39;
            uVar30 = -(uint)(0.0 <= fVar37 + fVar40);
            uVar31 = -(uint)(0.0 <= fVar38 + fVar34);
            uVar32 = -(uint)(0.0 <= fVar40 + fVar37);
            uVar33 = -(uint)(0.0 <= fVar34 + fVar38);
            fVar34 = (float)(~uVar30 & (uint)(0.0 - fVar43) | (uint)fVar43 & uVar30) * fVar52 +
                     fVar41 * param_3;
            fVar49 = (float)(~uVar31 & (uint)(0.0 - fVar44) | (uint)fVar44 & uVar31) * fVar53 +
                     fVar49 * param_3;
            fVar50 = (float)(~uVar32 & (uint)(0.0 - fVar57) | (uint)fVar57 & uVar32) * fVar54 +
                     fVar50 * param_3;
            fVar51 = (float)(~uVar33 & (uint)(0.0 - fVar45) | (uint)fVar45 & uVar33) * fVar55 +
                     fVar51 * param_3;
            fVar41 = fVar49 * fVar49 + fVar34 * fVar34;
            fVar43 = fVar34 * fVar34 + fVar49 * fVar49;
            fVar44 = fVar51 * fVar51 + fVar50 * fVar50;
            fVar45 = fVar50 * fVar50 + fVar51 * fVar51;
            auVar35._0_4_ = fVar44 + fVar41;
            auVar35._4_4_ = fVar45 + fVar43;
            auVar35._8_4_ = fVar41 + fVar44;
            auVar35._12_4_ = fVar43 + fVar45;
            uVar30 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <=
                            auVar35._0_4_);
            uVar31 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <=
                            auVar35._4_4_);
            uVar32 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <=
                            auVar35._8_4_);
            uVar33 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <=
                            auVar35._12_4_);
            auVar36 = sqrtps(auVar35,auVar35);
            auVar36 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar36);
            auVar56._0_4_ = (uint)(auVar36._0_4_ * fVar34) & uVar30;
            auVar56._4_4_ = (uint)(auVar36._4_4_ * fVar49) & uVar31;
            auVar56._8_4_ = (uint)(auVar36._8_4_ * fVar50) & uVar32;
            auVar56._12_4_ = (uint)(auVar36._12_4_ * fVar51) & uVar33;
            auVar42._0_4_ = ~uVar30 & GlobalVectorConstants::Float0001.m128_u32[0];
            auVar42._4_4_ = ~uVar31 & GlobalVectorConstants::Float0001.m128_u32[1];
            auVar42._8_4_ = ~uVar32 & GlobalVectorConstants::Float0001.m128_u32[2];
            auVar42._12_4_ = ~uVar33 & GlobalVectorConstants::Float0001.m128_u32[3];
            auVar56 = auVar56 | auVar42;
          }
          *pauVar25 = auVar56;
          *(float *)pauVar25[1] = fVar58;
          *(float *)(pauVar25[1] + 4) = fVar59;
          *(float *)(pauVar25[1] + 8) = fVar60;
          *(float *)(pauVar25[1] + 0xc) = fVar61;
          *(float *)pauVar25[2] = fVar62;
          *(float *)(pauVar25[2] + 4) = fVar63;
          *(float *)(pauVar25[2] + 8) = fVar64;
          *(float *)(pauVar25[2] + 0xc) = fVar65;
          break;
        case Transform3d:
          local_148.Rotation.XY.m128d_f64[0] = *(double *)*pauVar25;
          local_148.Rotation.XY.m128d_f64[1] = *(double *)(*pauVar25 + 8);
          local_148.Rotation.ZW.m128d_f64[0] = *(double *)pauVar25[1];
          local_148.Rotation.ZW.m128d_f64[1] = *(double *)(pauVar25[1] + 8);
          local_148.Translation.XY.m128d_f64[0] = *(double *)pauVar25[2];
          local_148.Translation.XY.m128d_f64[1] = *(double *)(pauVar25[2] + 8);
          local_148.Translation.ZW.m128d_f64[0] = *(double *)pauVar25[3];
          local_148.Translation.ZW.m128d_f64[1] = *(double *)(pauVar25[3] + 8);
          local_148.Scale3D.XY.m128d_f64[0] = *(double *)pauVar25[4];
          local_148.Scale3D.XY.m128d_f64[1] = *(double *)(pauVar25[4] + 8);
          local_148.Scale3D.ZW.m128d_f64[0] = *(double *)pauVar25[5];
          local_148.Scale3D.ZW.m128d_f64[1] = *(double *)(pauVar25[5] + 8);
          UE::Math::TTransform<double>::BlendWith(&local_148,pTVar27,param_3);
          *(double *)*pauVar25 = local_148.Rotation.XY.m128d_f64[0];
          *(double *)(*pauVar25 + 8) = local_148.Rotation.XY.m128d_f64[1];
          *(double *)pauVar25[1] = local_148.Rotation.ZW.m128d_f64[0];
          *(double *)(pauVar25[1] + 8) = local_148.Rotation.ZW.m128d_f64[1];
          *(double *)pauVar25[2] = local_148.Translation.XY.m128d_f64[0];
          *(double *)(pauVar25[2] + 8) = local_148.Translation.XY.m128d_f64[1];
          *(double *)pauVar25[3] = local_148.Translation.ZW.m128d_f64[0];
          *(double *)(pauVar25[3] + 8) = local_148.Translation.ZW.m128d_f64[1];
          auVar36._8_8_ = local_148.Scale3D.ZW.m128d_f64[1];
          auVar36._0_8_ = local_148.Scale3D.ZW.m128d_f64[0];
          *(double *)pauVar25[4] = local_148.Scale3D.XY.m128d_f64[0];
          *(double *)(pauVar25[4] + 8) = local_148.Scale3D.XY.m128d_f64[1];
          pauVar25[5] = auVar36;
          break;
        case BlendableStruct:
          if ((local_1f0->StructType == (UScriptStruct *)0x0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("FromEntry->StructType",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableTable.cpp"
                                  ,0x2b0,L""), bVar29)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pUVar6 = local_1f0->StructType;
          if (bCachedBlendableStructs == false) {
            pIVar17 = IGameplayCamerasModule::Get();
            puVar18 = (undefined8 *)(**(code **)((longlong)*pIVar17 + 0x48))(pIVar17);
            iVar19 = *(int *)(puVar18 + 1);
            local_1e0 = (FBlendableStructInfo *)*puVar18;
            CachedBlendableStructs.ArrayNum = iVar19;
            if ((iVar19 != 0) || (CachedBlendableStructs.ArrayMax != 0)) {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar19,CachedBlendableStructs.ArrayMax,
                         &CachedBlendableStructs.AllocatorInstance,iVar19,
                         &CachedBlendableStructs.ArrayMax);
              ConstructItems<UE::Cameras::FBlendableStructInfo,UE::Cameras::FBlendableStructInfo,int>
                        (CachedBlendableStructs.AllocatorInstance.Data,local_1e0,iVar19);
            }
            bCachedBlendableStructs = true;
          }
          uVar26 = (ulonglong)CachedBlendableStructs.ArrayNum;
          local_1e0 = (FBlendableStructInfo *)
                      (CachedBlendableStructs.AllocatorInstance.Data + uVar26 * 0x10);
          local_1c8 = (double)CONCAT44(local_1c8._4_4_,CachedBlendableStructs.ArrayNum);
          FVar23.Data = CachedBlendableStructs.AllocatorInstance.Data;
          while( true ) {
            if (CachedBlendableStructs.ArrayNum != (int)uVar26) {
              local_1f6[0] = 0;
              `TCheckedPointerIterator<UE::Cameras::FBlendableStructInfo,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_1f6);
              uVar26 = (ulonglong)local_1c8 & 0xffffffff;
            }
            if ((FBlendableStructInfo *)FVar23.Data == local_1e0) goto LAB_14d5b151e;
            if (*(UScriptStruct **)FVar23.Data == (UScriptStruct *)0x0) {
              bVar29 = pUVar6 == (UScriptStruct *)0x0;
            }
            else {
              bVar29 = *(UScriptStruct **)FVar23.Data == pUVar6;
            }
            if (bVar29) break;
            FVar23.Data = FVar23.Data + 0x10;
          }
          if (*(code **)(FVar23.Data + 8) == (code *)0x0) {
LAB_14d5b151e:
            bVar29 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<3535351043497919154>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableTable.cpp"
                                ,0x2b2,"Interpolator");
            param_1 = local_1b8;
            if (bVar29) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          else {
            (**(code **)(FVar23.Data + 8))(pauVar25,pTVar27);
            param_1 = local_1b8;
          }
        }
        fVar41 = __real_3727c5ac;
        local_1f0->Flags = local_1f0->Flags | (EVar2 | (byte)FVar1) & WrittenThisFrame | Written;
        this = local_188;
        pFVar28 = local_180;
      }
      EVar22 = local_1d8;
      if (param_6 != (FCameraVariableTableFlags *)0x0) {
        TSet<FCameraVariableID,DefaultKeyFuncs<FCameraVariableID,0>,FDefaultSetAllocator>::
        Emplace<FCameraVariableID_const_&>(&param_6->VariableIDs,local_190,(bool *)local_1f0);
        EVar22 = local_1d8;
      }
    }
LAB_14d5b16af:
    pFVar24 = pFVar24 + 0x18;
    uVar26 = (ulonglong)local_1bc;
  } while( true );
}

// InternalOverride @ 14d5b2a30

void __thiscall
UE::Cameras::FCameraVariableTable::InternalOverride
          (FCameraVariableTable *this,FCameraVariableTable *param_1,
          ECameraVariableTableFilter param_2,FCameraVariableTableFlags *param_3,bool param_4,
          FCameraVariableTableFlags *param_5)

{
  FScriptContainerElement FVar1;
  FCameraVariableID FVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar5;
  code *pcVar6;
  uint uVar7;
  ECameraVariableTableFilter EVar8;
  FScriptContainerElement *pFVar9;
  undefined2 uVar10;
  int iVar11;
  ulonglong uVar12;
  ForElementType<FSetElementId> FVar13;
  FScriptContainerElement *pFVar14;
  undefined2 uVar15;
  bool bVar16;
  undefined1 local_98 [4];
  uint local_94;
  FEntry *local_90;
  ECameraVariableTableFilter local_88;
  uint local_84;
  ECameraVariableTableFilter local_80;
  uint local_7c;
  FCameraVariableDefinition local_78;
  FCameraVariableID local_60 [2];
  FScriptContainerElement *local_58;
  FEntry **local_50;
  FString *local_48;
  FScriptContainerElement *local_40;
  
  pFVar14 = (param_1->Entries).AllocatorInstance.Data;
  local_88 = param_2 & InputOnly;
  local_80 = param_2 & KnownOnly;
  local_7c = (param_1->Entries).ArrayNum;
  uVar12 = (ulonglong)(int)local_7c;
  local_58 = pFVar14 + uVar12 * 0x18;
  do {
    pFVar9 = local_58;
    EVar8 = local_80;
    if ((param_1->Entries).ArrayNum != (int)uVar12) {
      local_98[0] = 0;
      `TCheckedPointerIterator<UE::Cameras::FCameraVariableTable::FEntry_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_98);
    }
    if (pFVar14 == pFVar9) {
      return;
    }
    FVar1 = pFVar14[0x14];
    if ((((((byte)FVar1 & Written) != None) &&
         (((param_2 & PublicOnly) == None || (((byte)FVar1 & Private) == None)))) &&
        ((local_88 == None || (((byte)FVar1 & Input) != None)))) &&
       (((param_2 & ChangedOnly) == None || (((byte)FVar1 & WrittenThisFrame) != None)))) {
      FVar2.Value = *(uint *)pFVar14;
      if (param_3 != (FCameraVariableTableFlags *)0x0) {
        if (*(int *)&(param_3->VariableIDs).Elements.field_0x8 !=
            *(int *)&(param_3->VariableIDs).Elements.field_0x34) {
          FVar3 = (param_3->VariableIDs).Hash.SecondaryData;
          FVar13 = (ForElementType<FSetElementId>)&(param_3->VariableIDs).Hash;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FVar13 = FVar3;
          }
          iVar11 = *(int *)((longlong)FVar13 +
                           (ulonglong)((param_3->VariableIDs).HashSize - 1U & FVar2.Value) * 4);
          if (iVar11 != -1) {
            lVar4 = *(longlong *)&(param_3->VariableIDs).Elements;
            do {
              if (*(uint *)(lVar4 + (longlong)iVar11 * 0xc) == FVar2.Value) goto LAB_14d5b2b4d;
              iVar11 = *(int *)(lVar4 + 4 + (longlong)iVar11 * 0xc);
            } while (iVar11 != -1);
          }
        }
        iVar11 = -1;
LAB_14d5b2b4d:
        bVar16 = iVar11 != -1;
        if (param_4) {
          bVar16 = iVar11 == -1;
        }
        if (!bVar16) goto LAB_14d5b2cf5;
      }
      local_90 = FindEntry(this,FVar2);
      if (local_90 == (FEntry *)0x0) {
        if (EVar8 != None) goto LAB_14d5b2cf5;
        local_78.VariableID.Value = *(uint *)pFVar14;
        local_78.VariableType = *(ECameraVariableType *)(pFVar14 + 4);
        uVar15._0_1_ = false;
        uVar15._1_1_ = false;
        local_78.bIsPrivate = false;
        local_78.bIsInput = false;
        local_78.bAutoReset = false;
        TVar5 = (TObjectPtr<UScriptStruct_const_>_u_0)
                ((TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar14 + 8))->DebugPtr;
        local_78.BlendableStructType.field0_0x0.DebugPtr = (TObjectPtr<UScriptStruct_const_>_u_0)0x0
        ;
        uVar10 = uVar15;
        bVar16 = false;
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (uVar10 = local_78._16_2_, bVar16 = local_78.bAutoReset,
           TVar5.DebugPtr != (UScriptStruct *)0x0)) {
          local_78._16_2_ = uVar15;
          local_78.bAutoReset = false;
          GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
          uVar10 = local_78._16_2_;
          bVar16 = local_78.bAutoReset;
        }
        local_78.bAutoReset = bVar16;
        local_78._16_2_ = uVar10;
        local_78._16_2_ = CONCAT11((byte)pFVar14[0x14] >> 1,local_78.bIsPrivate) & 0x1ff;
        local_78.BlendableStructType.field0_0x0 = TVar5;
        AddVariable(this,&local_78);
        local_90 = FindEntry(this,(FCameraVariableID)*(uint *)pFVar14);
      }
      else if ((local_90->Type != *(ECameraVariableType *)(pFVar14 + 4)) ||
              (local_90->StructType != *(UScriptStruct **)(pFVar14 + 8))) {
        local_50 = &local_90;
        local_48 = &Cameras::Private::GUnavailableVariableDebugName;
        local_40 = pFVar14;
        bVar16 = `UE::Cameras::FCameraVariableTable::InternalOverride'::__l13::<lambda_1>::
                 operator()(&local_50);
        if (!bVar16) goto LAB_14d5b2cf5;
      }
      if (local_90 == (FEntry *)0x0) {
        bVar16 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3535351043497919048>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableTable.cpp"
                            ,0x248,"ThisEntry");
        if (bVar16) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        local_94 = 0;
        local_84 = 0;
        GetVariableTypeAllocationInfo(local_90->Type,local_90->StructType,&local_94,&local_84);
        uVar7 = local_94;
        if ((local_94 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("ValueSize != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableTable.cpp"
                                ,0x24c,L""), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        memcpy(this->Memory + local_90->Offset,param_1->Memory + *(uint *)(pFVar14 + 0x10),
               (ulonglong)uVar7);
        local_90->Flags = local_90->Flags | (byte)FVar1 & WrittenThisFrame | Written;
        if (param_5 != (FCameraVariableTableFlags *)0x0) {
          TSet<FCameraVariableID,DefaultKeyFuncs<FCameraVariableID,0>,FDefaultSetAllocator>::
          Emplace<FCameraVariableID_const_&>(&param_5->VariableIDs,local_60,(bool *)local_90);
        }
      }
    }
LAB_14d5b2cf5:
    pFVar14 = pFVar14 + 0x18;
    uVar12 = (ulonglong)local_7c;
  } while( true );
}

// IsValueWritten @ 14d5b4b90

bool __thiscall
UE::Cameras::FCameraVariableTable::IsValueWritten
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  FEntry *pFVar1;
  
  pFVar1 = FindEntry(this,param_1);
  if (pFVar1 != (FEntry *)0x0) {
    return (bool)(pFVar1->Flags >> 3 & 1);
  }
  return false;
}

// IsValueWrittenThisFrame @ 14d5b4bc0

bool __thiscall
UE::Cameras::FCameraVariableTable::IsValueWrittenThisFrame
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  FEntry *pFVar1;
  
  pFVar1 = FindEntry(this,param_1);
  if (pFVar1 != (FEntry *)0x0) {
    return (bool)(pFVar1->Flags >> 4 & 1);
  }
  return false;
}

// Lerp @ 14d5b4c80

void __thiscall
UE::Cameras::FCameraVariableTable::Lerp
          (FCameraVariableTable *this,FCameraVariableTable *param_1,
          ECameraVariableTableFilter param_2,float param_3)

{
  InternalLerp(this,param_1,param_2,param_3,(FCameraVariableTableFlags *)0x0,false,
               (FCameraVariableTableFlags *)0x0);
  return;
}

// Lerp @ 14d5b4cb0

void __thiscall
UE::Cameras::FCameraVariableTable::Lerp
          (FCameraVariableTable *this,FCameraVariableTable *param_1,
          ECameraVariableTableFilter param_2,float param_3,FCameraVariableTableFlags *param_4,
          bool param_5,FCameraVariableTableFlags *param_6)

{
  InternalLerp(this,param_1,param_2,param_3,param_4,false,param_6);
  return;
}

// LerpAll @ 14d5b5620

void __thiscall
UE::Cameras::FCameraVariableTable::LerpAll
          (FCameraVariableTable *this,FCameraVariableTable *param_1,float param_2,bool param_3)

{
  InternalLerp(this,param_1,param_3 ^ PublicOnly,param_2,(FCameraVariableTableFlags *)0x0,false,
               (FCameraVariableTableFlags *)0x0);
  return;
}

// Override @ 14d5c3b00

void __thiscall
UE::Cameras::FCameraVariableTable::Override
          (FCameraVariableTable *this,FCameraVariableTable *param_1,
          ECameraVariableTableFilter param_2)

{
  InternalOverride(this,param_1,param_2,(FCameraVariableTableFlags *)0x0,false,
                   (FCameraVariableTableFlags *)0x0);
  return;
}

// Override @ 14d5c3b30

void __thiscall
UE::Cameras::FCameraVariableTable::Override
          (FCameraVariableTable *this,FCameraVariableTable *param_1,
          ECameraVariableTableFilter param_2,FCameraVariableTableFlags *param_3,bool param_4,
          FCameraVariableTableFlags *param_5)

{
  InternalOverride(this,param_1,param_2,param_3,param_4,param_5);
  return;
}

// OverrideAll @ 14d5c3f10

void __thiscall
UE::Cameras::FCameraVariableTable::OverrideAll
          (FCameraVariableTable *this,FCameraVariableTable *param_1,bool param_2)

{
  InternalOverride(this,param_1,param_2 ^ PublicOnly,(FCameraVariableTableFlags *)0x0,false,
                   (FCameraVariableTableFlags *)0x0);
  return;
}

// ReallocateBuffer @ 14d5c9640

void __thiscall
UE::Cameras::FCameraVariableTable::ReallocateBuffer(FCameraVariableTable *this,uint param_1)

{
  uchar *_Src;
  uchar *_Dst;
  uint uVar1;
  uint uVar2;
  
  if (this->Capacity == 0) {
    uVar1 = 0x40;
  }
  else {
    uVar1 = this->Capacity * 2;
  }
  uVar2 = uVar1;
  if ((param_1 != 0) && (uVar2 = param_1, param_1 < uVar1)) {
    uVar2 = uVar1;
  }
  _Src = this->Memory;
  _Dst = FMemory::Malloc((ulonglong)uVar2,0x20);
  if (_Src != (uchar *)0x0) {
    memmove(_Dst,_Src,(ulonglong)this->Capacity);
    FMemory::Free(_Src);
  }
  this->Capacity = uVar2;
  this->Memory = _Dst;
  return;
}

// Serialize @ 14d5cce90

void __thiscall
UE::Cameras::FCameraVariableTable::Serialize(FCameraVariableTable *this,FArchive *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  uint *puVar2;
  uint *puVar3;
  longlong *plVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  TPairInitializer<FCameraVariableID_const_&,int_&&> local_58;
  int *local_48;
  
  if ((param_1->field_0x28 & 4) != 0) {
    puVar3 = &this->Capacity;
    puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar3);
      }
    }
    else {
      *puVar3 = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Used,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&this->Used);
      }
    }
    else {
      this->Used = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this->Memory,this->Used);
    plVar4 = *(longlong **)&param_1->field_0x8;
    local_60 = (this->Entries).ArrayNum;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_60,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_60);
      }
    }
    else {
      local_60 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))
              (param_1,(this->Entries).AllocatorInstance.Data,
               (longlong)(this->Entries).ArrayNum * 0x18);
  }
  if ((param_1->field_0x28 & 1) != 0) {
    plVar4 = *(longlong **)&param_1->field_0x8;
    iVar9 = 0;
    local_64 = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_64,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_64);
      }
    }
    else {
      local_64 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    local_68 = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_68,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_68);
      }
    }
    else {
      local_68 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if (this->Capacity < local_64) {
      local_res10[0] = 0;
      `UE::Cameras::FCameraVariableTable::Serialize'::__l8::<lambda_1>::operator()(local_res10);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this->Memory,local_68);
    this->Used = local_68;
    plVar4 = *(longlong **)&param_1->field_0x8;
    local_res20[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    piVar1 = &(this->Entries).ArrayNum;
    if ((this->Entries).ArrayNum < (int)local_res20[0]) {
      local_res18[0] = 0;
      `UE::Cameras::FCameraVariableTable::Serialize'::__l8::<lambda_2>::operator()(local_res18);
    }
    uVar6 = local_res20[0];
    lVar11 = (longlong)(int)local_res20[0];
    iVar10 = *piVar1;
    if (iVar10 < (int)local_res20[0]) {
      iVar10 = local_res20[0] - iVar10;
      iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,iVar10,(ForAnyElementType *)this,piVar1,&(this->Entries).ArrayMax);
      DefaultConstructItems<UE::Cameras::FCameraVariableTable::FEntry,int>
                ((this->Entries).AllocatorInstance.Data + (longlong)iVar8 * 0x18,iVar10);
    }
    else {
      if ((int)local_res20[0] < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)local_res20[0]);
      }
      if ((int)local_res20[0] < iVar10) {
        uVar12 = iVar10 - local_res20[0];
        if ((int)(local_res20[0] | uVar12) < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (uVar12 != 0) {
          _Dst = (this->Entries).AllocatorInstance.Data + lVar11 * 0x18;
          iVar10 = ((this->Entries).ArrayNum - uVar12) - uVar6;
          if (iVar10 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar12 * 0x18,(longlong)iVar10 * 0x18);
          }
          piVar1 = &(this->Entries).ArrayNum;
          *piVar1 = *piVar1 - uVar12;
        }
      }
    }
    (**(code **)(*(longlong *)param_1 + 0x188))
              (param_1,(this->Entries).AllocatorInstance.Data,(longlong)(int)local_res20[0] * 0x18);
    TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
             *)&this->EntryLookup);
    for (; (-1 < iVar9 && (iVar9 < (this->Entries).ArrayNum)); iVar9 = iVar9 + 1) {
      local_5c = iVar9;
      if (iVar9 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_58.Value = (int *)((this->Entries).AllocatorInstance.Data + (longlong)iVar9 * 0x18);
      local_48 = &local_5c;
      TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FCameraVariableID_const_&,int_&&>_>
                ((TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
                  *)&this->EntryLookup,&local_58,(bool *)&local_58.Value);
    }
  }
  return;
}

// SetValue @ 14d5cf560

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue
          (FCameraVariableTable *this,FCameraVariableID param_1,ECameraVariableType param_2,
          UScriptStruct *param_3,uchar *param_4,bool param_5)

{
  EEntryFlags EVar1;
  code *pcVar2;
  bool bVar3;
  FEntry *pFVar4;
  uint local_res10 [2];
  uint local_18;
  uint local_14;
  uint *local_10;
  
  local_res10[0] = param_1.Value;
  pFVar4 = FindEntry(this,param_1);
  if (pFVar4 == (FEntry *)0x0) {
    local_10 = local_res10;
    bVar3 = `UE::Cameras::FCameraVariableTable::SetValue'::__l3::<lambda_1>::operator()(&local_10);
    if (!bVar3) {
      return;
    }
  }
  if (((param_2 != pFVar4->Type) || (param_3 != pFVar4->StructType)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExpectedVariableType == Entry->Type && ExpectedBlendableStructType == Entry->StructType"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableTable.cpp"
                         ,0x157,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  GetVariableTypeAllocationInfo(pFVar4->Type,pFVar4->StructType,&local_18,&local_14);
  memcpy(this->Memory + pFVar4->Offset,param_4,(ulonglong)local_18);
  EVar1 = pFVar4->Flags;
  pFVar4->Flags = EVar1 | Written;
  if (param_5) {
    pFVar4->Flags = EVar1 | (WrittenThisFrame|Written);
  }
  return;
}

// TryGetMutableValue @ 14d5d1400

uchar * __thiscall
UE::Cameras::FCameraVariableTable::TryGetMutableValue
          (FCameraVariableTable *this,FCameraVariableID param_1,ECameraVariableType param_2,
          UScriptStruct *param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  uchar *puVar4;
  
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 != (FEntry *)0x0) {
    if (((pFVar3->Type != param_2) || (pFVar3->StructType != param_3)) &&
       (bVar2 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3535351043497918787>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableTable.cpp"
                           ,0x143,
                           "Entry->Type == ExpectedVariableType && Entry->StructType == ExpectedBlendableStructType"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
    if ((!param_4) || ((pFVar3->Flags & Written) != None)) {
      return this->Memory + pFVar3->Offset;
    }
  }
  return (uchar *)0x0;
}

// TryGetValue @ 14d5d14a0

uchar * __thiscall
UE::Cameras::FCameraVariableTable::TryGetValue
          (FCameraVariableTable *this,FCameraVariableID param_1,ECameraVariableType param_2,
          UScriptStruct *param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  uchar *puVar4;
  
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 != (FEntry *)0x0) {
    if (((pFVar3->Type != param_2) || (pFVar3->StructType != param_3)) &&
       (bVar2 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3535351043497918768>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableTable.cpp"
                           ,0x130,
                           "Entry->Type == ExpectedVariableType && Entry->StructType == ExpectedBlendableStructType"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
    if ((!param_4) || ((pFVar3->Flags & Written) != None)) {
      return this->Memory + pFVar3->Offset;
    }
  }
  return (uchar *)0x0;
}

// TryGetVariableDefinition @ 14d5d1540

bool __thiscall
UE::Cameras::FCameraVariableTable::TryGetVariableDefinition
          (FCameraVariableTable *this,FCameraVariableID param_1,FCameraVariableDefinition *param_2)

{
  UScriptStruct *pUVar1;
  FEntry *pFVar2;
  
  pFVar2 = FindEntry(this,param_1);
  if (pFVar2 != (FEntry *)0x0) {
    (param_2->VariableID).Value = (pFVar2->ID).Value;
    param_2->VariableType = pFVar2->Type;
    pUVar1 = pFVar2->StructType;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UScriptStruct *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar1);
    }
    (param_2->BlendableStructType).field0_0x0.DebugPtr = pUVar1;
    param_2->bIsPrivate = (bool)(pFVar2->Flags & Private);
    param_2->bIsInput = (bool)(pFVar2->Flags >> 1 & 1);
    return true;
  }
  return false;
}

// TrySetValue @ 14d5d22a0

bool __thiscall
UE::Cameras::FCameraVariableTable::TrySetValue
          (FCameraVariableTable *this,FCameraVariableID param_1,ECameraVariableType param_2,
          UScriptStruct *param_3,uchar *param_4,bool param_5)

{
  EEntryFlags EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FEntry *pFVar5;
  uint local_18;
  uint local_14 [3];
  
  pFVar5 = FindEntry(this,param_1);
  bVar3 = false;
  if (pFVar5 != (FEntry *)0x0) {
    if ((param_2 != pFVar5->Type) || (param_3 != pFVar5->StructType)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExpectedVariableType == Entry->Type && ExpectedBlendableStructType == Entry->StructType"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableTable.cpp"
                         ,0x16d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    GetVariableTypeAllocationInfo(pFVar5->Type,pFVar5->StructType,&local_18,local_14);
    memcpy(this->Memory + pFVar5->Offset,param_4,(ulonglong)local_18);
    EVar1 = pFVar5->Flags;
    pFVar5->Flags = EVar1 | Written;
    if (param_5) {
      pFVar5->Flags = EVar1 | (WrittenThisFrame|Written);
    }
    bVar3 = true;
  }
  return bVar3;
}

// UnsetAllValues @ 14d5d2b00

void __thiscall UE::Cameras::FCameraVariableTable::UnsetAllValues(FCameraVariableTable *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Entries).ArrayNum;
  pFVar3 = (this->Entries).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->Entries).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FCameraVariableTable::FEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3[0x14] = (FScriptContainerElement)((byte)pFVar3[0x14] & 0xe7);
    pFVar3 = pFVar3 + 0x18;
  }
  return;
}

// UnsetValue @ 14d5d2b60

void __thiscall
UE::Cameras::FCameraVariableTable::UnsetValue(FCameraVariableTable *this,FCameraVariableID param_1)

{
  FEntry *pFVar1;
  
  pFVar1 = FindEntry(this,param_1);
  if (pFVar1 != (FEntry *)0x0) {
    pFVar1->Flags = pFVar1->Flags & ~(WrittenThisFrame|Written);
  }
  return;
}

// FindValue<FCameraFramingZone> @ 14d5efae0

FCameraFramingZone * __thiscall
UE::Cameras::FCameraVariableTable::FindValue<FCameraFramingZone>
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  FCameraFramingZone *pFVar4;
  
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 != (FEntry *)0x0) {
    if (pFVar3->Type != BlendableStruct) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FCameraFramingZone *)(*pcVar1)();
        return pFVar4;
      }
    }
    if ((pFVar3->Flags & Written) != None) {
      return (FCameraFramingZone *)(this->Memory + pFVar3->Offset);
    }
  }
  return (FCameraFramingZone *)0x0;
}

// GetValue<UE::Math::TRotator<float>_> @ 14d5f2470

TRotator<float> * __thiscall
UE::Cameras::FCameraVariableTable::GetValue<UE::Math::TRotator<float>_>
          (FCameraVariableTable *this,TRotator<float> *__return_storage_ptr__,
          FCameraVariableID param_1,TRotator<float> *param_2)

{
  float fVar1;
  TRotator<float> *pTVar2;
  undefined8 uVar3;
  
  pTVar2 = FindValue<UE::Math::TRotator<float>_>(this,param_1);
  if (pTVar2 == (TRotator<float> *)0x0) {
    uVar3._0_4_ = param_2->Pitch;
    uVar3._4_4_ = param_2->Yaw;
    fVar1 = param_2->Roll;
  }
  else {
    uVar3._0_4_ = pTVar2->Pitch;
    uVar3._4_4_ = pTVar2->Yaw;
    fVar1 = pTVar2->Roll;
  }
  __return_storage_ptr__->Pitch = (float)(int)uVar3;
  __return_storage_ptr__->Yaw = (float)(int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->Roll = fVar1;
  return __return_storage_ptr__;
}

// GetValue<UE::Math::TTransform<float>_> @ 14d5f24c0

TTransform<float> * __thiscall
UE::Cameras::FCameraVariableTable::GetValue<UE::Math::TTransform<float>_>
          (FCameraVariableTable *this,TTransform<float> *__return_storage_ptr__,
          FCameraVariableID param_1,TTransform<float> *param_2)

{
  ulong64 uVar1;
  TTransform<float> *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pTVar2 = FindValue<UE::Math::TTransform<float>_>(this,param_1);
  if (pTVar2 == (TTransform<float> *)0x0) {
    uVar1 = (param_2->Rotation).m128_u64[1];
    fVar7 = (param_2->Translation).m128_f32[0];
    fVar8 = (param_2->Translation).m128_f32[1];
    fVar9 = (param_2->Translation).m128_f32[2];
    fVar10 = (param_2->Translation).m128_f32[3];
    (__return_storage_ptr__->Rotation).m128_u64[0] = (param_2->Rotation).m128_u64[0];
    (__return_storage_ptr__->Rotation).m128_u64[1] = uVar1;
    fVar3 = (param_2->Scale3D).m128_f32[0];
    fVar4 = (param_2->Scale3D).m128_f32[1];
    fVar5 = (param_2->Scale3D).m128_f32[2];
    fVar6 = (param_2->Scale3D).m128_f32[3];
  }
  else {
    uVar1 = (pTVar2->Rotation).m128_u64[1];
    fVar7 = (pTVar2->Translation).m128_f32[0];
    fVar8 = (pTVar2->Translation).m128_f32[1];
    fVar9 = (pTVar2->Translation).m128_f32[2];
    fVar10 = (pTVar2->Translation).m128_f32[3];
    (__return_storage_ptr__->Rotation).m128_u64[0] = (pTVar2->Rotation).m128_u64[0];
    (__return_storage_ptr__->Rotation).m128_u64[1] = uVar1;
    fVar3 = (pTVar2->Scale3D).m128_f32[0];
    fVar4 = (pTVar2->Scale3D).m128_f32[1];
    fVar5 = (pTVar2->Scale3D).m128_f32[2];
    fVar6 = (pTVar2->Scale3D).m128_f32[3];
  }
  (__return_storage_ptr__->Translation).m128_f32[0] = fVar7;
  (__return_storage_ptr__->Translation).m128_f32[1] = fVar8;
  (__return_storage_ptr__->Translation).m128_f32[2] = fVar9;
  (__return_storage_ptr__->Translation).m128_f32[3] = fVar10;
  (__return_storage_ptr__->Scale3D).m128_f32[0] = fVar3;
  (__return_storage_ptr__->Scale3D).m128_f32[1] = fVar4;
  (__return_storage_ptr__->Scale3D).m128_f32[2] = fVar5;
  (__return_storage_ptr__->Scale3D).m128_f32[3] = fVar6;
  return __return_storage_ptr__;
}

// GetValue<UE::Math::TVector2<float>_> @ 14d5f2520

TVector2<float> __thiscall
UE::Cameras::FCameraVariableTable::GetValue<UE::Math::TVector2<float>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TVector2<float> param_2)

{
  TVector2<float>_u_0_s_0 *pTVar1;
  undefined4 in_register_00000014;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0 in_R9;
  
  TVar2._s_0.Y = (float)in_register_00000014;
  TVar2._s_0.X = (float)param_1.Value;
  pTVar1 = (TVector2<float>_u_0_s_0 *)
           FindValue<UE::Math::TVector2<float>_>(this,(FCameraVariableID)param_2.field0_0x0._0_4_);
  if (pTVar1 != (TVector2<float>_u_0_s_0 *)0x0) {
    *(TVector2<float>_u_0_s_0 *)TVar2 = *pTVar1;
    return (TVector2<float>)TVar2;
  }
  *(TVector2<float>_u_0 *)TVar2 = in_R9;
  return (TVector2<float>)TVar2;
}

// GetValue<UE::Math::TVector4<float>_> @ 14d5f2570

TVector4<float> * __thiscall
UE::Cameras::FCameraVariableTable::GetValue<UE::Math::TVector4<float>_>
          (FCameraVariableTable *this,TVector4<float> *__return_storage_ptr__,
          FCameraVariableID param_1,TVector4<float> *param_2)

{
  undefined8 uVar1;
  TVector4<float> *pTVar2;
  
  pTVar2 = FindValue<UE::Math::TVector4<float>_>(this,param_1);
  if (pTVar2 != (TVector4<float> *)0x0) {
    uVar1 = *(undefined8 *)((longlong)&pTVar2->field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pTVar2->field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
    return __return_storage_ptr__;
  }
  uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetValue<UE::Math::TVector<float>_> @ 14d5f25c0

TVector<float> * __thiscall
UE::Cameras::FCameraVariableTable::GetValue<UE::Math::TVector<float>_>
          (FCameraVariableTable *this,TVector<float> *__return_storage_ptr__,
          FCameraVariableID param_1,TVector<float> *param_2)

{
  float fVar1;
  TVector<float> *pTVar2;
  undefined8 uVar3;
  
  pTVar2 = FindValue<UE::Math::TVector<float>_>(this,param_1);
  if (pTVar2 == (TVector<float> *)0x0) {
    uVar3 = *(undefined8 *)&param_2->field0_0x0;
    fVar1 = (param_2->field0_0x0)._s_0.Z;
  }
  else {
    uVar3 = *(undefined8 *)&pTVar2->field0_0x0;
    fVar1 = (pTVar2->field0_0x0)._s_0.Z;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = uVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// SetValue<UE::Math::TRotator<float>_> @ 14d5f9db0

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<float>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TRotator<float> *param_2)

{
  uint uVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  FEntry *pFVar5;
  uint local_res10 [2];
  uint *local_res20;
  
  local_res10[0] = param_1.Value;
  pFVar5 = FindEntry(this,param_1);
  if (pFVar5 == (FEntry *)0x0) {
    local_res20 = local_res10;
    bVar4 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<float>_>'::__l3::
            <lambda_1>::operator()(&local_res20);
    if (!bVar4) {
      return;
    }
  }
  if ((pFVar5->Type != Rotator3f) &&
     (bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = pFVar5->Offset;
  puVar2 = this->Memory;
  *(undefined8 *)(puVar2 + uVar1) = *(undefined8 *)param_2;
  *(float *)(puVar2 + uVar1 + 8) = param_2->Roll;
  pFVar5->Flags = pFVar5->Flags | (WrittenThisFrame|Written);
  return;
}

// SetValue<UE::Math::TTransform<float>_> @ 14d5f9e50

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TTransform<float>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TTransform<float> *param_2)

{
  uchar *puVar1;
  code *pcVar2;
  ulong64 uVar3;
  bool bVar4;
  FEntry *pFVar5;
  ulonglong uVar6;
  uint local_res10 [2];
  uint *local_res20;
  
  local_res10[0] = param_1.Value;
  pFVar5 = FindEntry(this,param_1);
  if (pFVar5 == (FEntry *)0x0) {
    local_res20 = local_res10;
    bVar4 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TTransform<float>_>'::__l3::
            <lambda_1>::operator()(&local_res20);
    if (!bVar4) {
      return;
    }
  }
  if ((pFVar5->Type != Transform3f) &&
     (bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = (param_2->Rotation).m128_u64[1];
  uVar6 = (ulonglong)pFVar5->Offset;
  puVar1 = this->Memory;
  *(ulong64 *)(puVar1 + uVar6) = (param_2->Rotation).m128_u64[0];
  *(ulong64 *)((longlong)(puVar1 + uVar6) + 8) = uVar3;
  uVar3 = (param_2->Translation).m128_u64[1];
  *(ulong64 *)(puVar1 + uVar6 + 0x10) = (param_2->Translation).m128_u64[0];
  *(ulong64 *)((longlong)(puVar1 + uVar6 + 0x10) + 8) = uVar3;
  uVar3 = (param_2->Scale3D).m128_u64[1];
  *(ulong64 *)(puVar1 + uVar6 + 0x20) = (param_2->Scale3D).m128_u64[0];
  *(ulong64 *)((longlong)(puVar1 + uVar6 + 0x20) + 8) = uVar3;
  pFVar5->Flags = pFVar5->Flags | (WrittenThisFrame|Written);
  return;
}

// SetValue<UE::Math::TVector2<float>_> @ 14d5f9f00

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector2<float>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TVector2<float> param_2)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  uint local_res10 [2];
  uint *local_res20;
  
  local_res10[0] = param_1.Value;
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 == (FEntry *)0x0) {
    local_res20 = local_res10;
    bVar2 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector2<float>_>'::__l3::
            <lambda_1>::operator()(&local_res20);
    if (!bVar2) {
      return;
    }
  }
  if ((pFVar3->Type != Vector2f) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ((TVector2<float>_u_0 *)(this->Memory + pFVar3->Offset))->_s_0 =
       (TVector2<float>_u_0_s_0)param_2.field0_0x0;
  pFVar3->Flags = pFVar3->Flags | (WrittenThisFrame|Written);
  return;
}

// SetValue<UE::Math::TVector4<float>_> @ 14d5f9fa0

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector4<float>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TVector4<float> *param_2)

{
  uint uVar1;
  uchar *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  FEntry *pFVar6;
  uint local_res10 [2];
  uint *local_res20;
  
  local_res10[0] = param_1.Value;
  pFVar6 = FindEntry(this,param_1);
  if (pFVar6 == (FEntry *)0x0) {
    local_res20 = local_res10;
    bVar5 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector4<float>_>'::__l3::
            <lambda_1>::operator()(&local_res20);
    if (!bVar5) {
      return;
    }
  }
  if ((pFVar6->Type != Vector4f) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = pFVar6->Offset;
  puVar2 = this->Memory;
  uVar4 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  *(undefined8 *)(puVar2 + uVar1) = *(undefined8 *)&param_2->field0_0x0;
  *(undefined8 *)(puVar2 + uVar1 + 8) = uVar4;
  pFVar6->Flags = pFVar6->Flags | (WrittenThisFrame|Written);
  return;
}

// SetValue<UE::Math::TVector<float>_> @ 14d5fa040

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector<float>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TVector<float> *param_2)

{
  uint uVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  FEntry *pFVar5;
  uint local_res10 [2];
  uint *local_res20;
  
  local_res10[0] = param_1.Value;
  pFVar5 = FindEntry(this,param_1);
  if (pFVar5 == (FEntry *)0x0) {
    local_res20 = local_res10;
    bVar4 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector<float>_>'::__l3::
            <lambda_1>::operator()(&local_res20);
    if (!bVar4) {
      return;
    }
  }
  if ((pFVar5->Type != Vector3f) &&
     (bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = pFVar5->Offset;
  puVar2 = this->Memory;
  *(undefined8 *)(puVar2 + uVar1) = *(undefined8 *)&param_2->field0_0x0;
  *(float *)(puVar2 + uVar1 + 8) = (param_2->field0_0x0)._s_0.Z;
  pFVar5->Flags = pFVar5->Flags | (WrittenThisFrame|Written);
  return;
}

// TryGetValue<int> @ 14d5fa360

bool __thiscall
UE::Cameras::FCameraVariableTable::TryGetValue<int>
          (FCameraVariableTable *this,FCameraVariableID param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = FindValue<int>(this,param_1);
  if (piVar1 != (int *)0x0) {
    *param_2 = *piVar1;
    return true;
  }
  return false;
}

// TryGetValue<float> @ 14d5fa390

bool __thiscall
UE::Cameras::FCameraVariableTable::TryGetValue<float>
          (FCameraVariableTable *this,FCameraVariableID param_1,float *param_2)

{
  float *pfVar1;
  
  pfVar1 = FindValue<float>(this,param_1);
  if (pfVar1 != (float *)0x0) {
    *param_2 = *pfVar1;
    return true;
  }
  return false;
}

// TryGetValue<double> @ 14d5fa3c0

bool __thiscall
UE::Cameras::FCameraVariableTable::TryGetValue<double>
          (FCameraVariableTable *this,FCameraVariableID param_1,double *param_2)

{
  double *pdVar1;
  
  pdVar1 = FindValue<double>(this,param_1);
  if (pdVar1 != (double *)0x0) {
    *param_2 = *pdVar1;
    return true;
  }
  return false;
}

// TryGetValue<UE::Math::TRotator<float>_> @ 14d5fa3f0

bool __thiscall
UE::Cameras::FCameraVariableTable::TryGetValue<UE::Math::TRotator<float>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TRotator<float> *param_2)

{
  float fVar1;
  TRotator<float> *pTVar2;
  
  pTVar2 = FindValue<UE::Math::TRotator<float>_>(this,param_1);
  if (pTVar2 != (TRotator<float> *)0x0) {
    fVar1 = pTVar2->Yaw;
    param_2->Pitch = pTVar2->Pitch;
    param_2->Yaw = fVar1;
    param_2->Roll = pTVar2->Roll;
    return true;
  }
  return false;
}

// TryGetValue<UE::Math::TRotator<double>_> @ 14d5fa430

bool __thiscall
UE::Cameras::FCameraVariableTable::TryGetValue<UE::Math::TRotator<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TRotator<double> *param_2)

{
  double dVar1;
  TRotator<double> *pTVar2;
  
  pTVar2 = FindValue<UE::Math::TRotator<double>_>(this,param_1);
  if (pTVar2 != (TRotator<double> *)0x0) {
    dVar1 = pTVar2->Yaw;
    param_2->Pitch = pTVar2->Pitch;
    param_2->Yaw = dVar1;
    param_2->Roll = pTVar2->Roll;
    return true;
  }
  return false;
}

// TryGetValue<UE::Math::TTransform<float>_> @ 14d5fa470

bool __thiscall
UE::Cameras::FCameraVariableTable::TryGetValue<UE::Math::TTransform<float>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TTransform<float> *param_2)

{
  ulong64 uVar1;
  TTransform<float> *pTVar2;
  
  pTVar2 = FindValue<UE::Math::TTransform<float>_>(this,param_1);
  if (pTVar2 != (TTransform<float> *)0x0) {
    uVar1 = (pTVar2->Rotation).m128_u64[1];
    (param_2->Rotation).m128_u64[0] = (pTVar2->Rotation).m128_u64[0];
    (param_2->Rotation).m128_u64[1] = uVar1;
    uVar1 = (pTVar2->Translation).m128_u64[1];
    (param_2->Translation).m128_u64[0] = (pTVar2->Translation).m128_u64[0];
    (param_2->Translation).m128_u64[1] = uVar1;
    uVar1 = (pTVar2->Scale3D).m128_u64[1];
    (param_2->Scale3D).m128_u64[0] = (pTVar2->Scale3D).m128_u64[0];
    (param_2->Scale3D).m128_u64[1] = uVar1;
    return true;
  }
  return false;
}

// TryGetValue<UE::Math::TTransform<double>_> @ 14d5fa4b0

bool __thiscall
UE::Cameras::FCameraVariableTable::TryGetValue<UE::Math::TTransform<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TTransform<double> *param_2)

{
  double dVar1;
  TTransform<double> *pTVar2;
  
  pTVar2 = FindValue<UE::Math::TTransform<double>_>(this,param_1);
  if (pTVar2 != (TTransform<double> *)0x0) {
    dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
    (param_2->Rotation).XY.m128d_f64[0] = (pTVar2->Rotation).XY.m128d_f64[0];
    (param_2->Rotation).XY.m128d_f64[1] = dVar1;
    dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
    (param_2->Rotation).ZW.m128d_f64[0] = (pTVar2->Rotation).ZW.m128d_f64[0];
    (param_2->Rotation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
    (param_2->Translation).XY.m128d_f64[0] = (pTVar2->Translation).XY.m128d_f64[0];
    (param_2->Translation).XY.m128d_f64[1] = dVar1;
    dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
    (param_2->Translation).ZW.m128d_f64[0] = (pTVar2->Translation).ZW.m128d_f64[0];
    (param_2->Translation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
    (param_2->Scale3D).XY.m128d_f64[0] = (pTVar2->Scale3D).XY.m128d_f64[0];
    (param_2->Scale3D).XY.m128d_f64[1] = dVar1;
    dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
    (param_2->Scale3D).ZW.m128d_f64[0] = (pTVar2->Scale3D).ZW.m128d_f64[0];
    (param_2->Scale3D).ZW.m128d_f64[1] = dVar1;
    return true;
  }
  return false;
}

// TryGetValue<UE::Math::TVector2<float>_> @ 14d5fa510

bool __thiscall
UE::Cameras::FCameraVariableTable::TryGetValue<UE::Math::TVector2<float>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TVector2<float> *param_2)

{
  TVector2<float>_u_0 *pTVar1;
  
  pTVar1 = &FindValue<UE::Math::TVector2<float>_>(this,param_1)->field0_0x0;
  if (pTVar1 != (TVector2<float>_u_0 *)0x0) {
    (param_2->field0_0x0)._s_0 = *(TVector2<float>_u_0_s_0 *)pTVar1;
    return true;
  }
  return false;
}

// TryGetValue<UE::Math::TVector2<double>_> @ 14d5fa540

bool __thiscall
UE::Cameras::FCameraVariableTable::TryGetValue<UE::Math::TVector2<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TVector2<double> *param_2)

{
  double dVar1;
  TVector2<double> *pTVar2;
  
  pTVar2 = FindValue<UE::Math::TVector2<double>_>(this,param_1);
  if (pTVar2 != (TVector2<double> *)0x0) {
    dVar1 = (pTVar2->field0_0x0)._s_0.Y;
    (param_2->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar1;
    return true;
  }
  return false;
}

// TryGetValue<UE::Math::TVector4<float>_> @ 14d5fa570

bool __thiscall
UE::Cameras::FCameraVariableTable::TryGetValue<UE::Math::TVector4<float>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TVector4<float> *param_2)

{
  undefined8 uVar1;
  TVector4<float> *pTVar2;
  
  pTVar2 = FindValue<UE::Math::TVector4<float>_>(this,param_1);
  if (pTVar2 != (TVector4<float> *)0x0) {
    uVar1 = *(undefined8 *)((longlong)&pTVar2->field0_0x0 + 8);
    *(undefined8 *)&param_2->field0_0x0 = *(undefined8 *)&pTVar2->field0_0x0;
    *(undefined8 *)((longlong)&param_2->field0_0x0 + 8) = uVar1;
    return true;
  }
  return false;
}

// TryGetValue<UE::Math::TVector4<double>_> @ 14d5fa5a0

bool __thiscall
UE::Cameras::FCameraVariableTable::TryGetValue<UE::Math::TVector4<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TVector4<double> *param_2)

{
  double dVar1;
  TVector4<double> *pTVar2;
  
  pTVar2 = FindValue<UE::Math::TVector4<double>_>(this,param_1);
  if (pTVar2 != (TVector4<double> *)0x0) {
    dVar1 = (pTVar2->field0_0x0)._s_0.Y;
    (param_2->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar1;
    dVar1 = (pTVar2->field0_0x0)._s_0.W;
    (param_2->field0_0x0)._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
    (param_2->field0_0x0)._s_0.W = dVar1;
    return true;
  }
  return false;
}

// TryGetValue<UE::Math::TVector<float>_> @ 14d5fa5e0

bool __thiscall
UE::Cameras::FCameraVariableTable::TryGetValue<UE::Math::TVector<float>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TVector<float> *param_2)

{
  TVector<float> *pTVar1;
  
  pTVar1 = FindValue<UE::Math::TVector<float>_>(this,param_1);
  if (pTVar1 != (TVector<float> *)0x0) {
    *(undefined8 *)&param_2->field0_0x0 = *(undefined8 *)&pTVar1->field0_0x0;
    (param_2->field0_0x0)._s_0.Z = (pTVar1->field0_0x0)._s_0.Z;
    return true;
  }
  return false;
}

// TryGetValue<UE::Math::TVector<double>_> @ 14d5fa620

bool __thiscall
UE::Cameras::FCameraVariableTable::TryGetValue<UE::Math::TVector<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1,TVector<double> *param_2)

{
  double dVar1;
  TVector<double> *pTVar2;
  
  pTVar2 = FindValue<UE::Math::TVector<double>_>(this,param_1);
  if (pTVar2 != (TVector<double> *)0x0) {
    dVar1 = (pTVar2->field0_0x0)._s_0.Y;
    (param_2->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar1;
    (param_2->field0_0x0)._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
    return true;
  }
  return false;
}

// TryGetValue<bool> @ 14d5fa660

bool __thiscall
UE::Cameras::FCameraVariableTable::TryGetValue<bool>
          (FCameraVariableTable *this,FCameraVariableID param_1,bool *param_2)

{
  bool *pbVar1;
  
  pbVar1 = FindValue<bool>(this,param_1);
  if (pbVar1 != (bool *)0x0) {
    *param_2 = *pbVar1;
    return true;
  }
  return false;
}

// GetValue<double> @ 14d650570

double * __thiscall
UE::Cameras::FCameraVariableTable::GetValue<double>
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  double *pdVar4;
  uint local_res10 [2];
  uint *local_res18;
  FString local_18;
  
  local_res10[0] = param_1.Value;
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 == (FEntry *)0x0) {
    local_res18 = local_res10;
    bVar2 = `UE::Cameras::FCameraVariableTable::GetValue<double>'::__l3::<lambda_1>::operator()
                      (&local_res18);
    if (!bVar2) {
      return &`public:_double_const&___ptr64___cdecl_UE::Cameras::FCameraVariableTable::GetValue<double>(FCameraVariableID)const___ptr64'
              ::__l2::DefaultValue;
    }
  }
  if ((pFVar3->Type != Double) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pdVar4 = (double *)(*pcVar1)();
    return pdVar4;
  }
  if ((pFVar3->Flags & Written) == None) {
    ::FString::PrintfImpl(&local_18,L"%u");
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(Entry->Flags, EEntryFlags::Written)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0x12a,
                       L"Variable \'%s\' has never been written to. GetValue() will return uninitialized memory!"
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar4 = (double *)(*pcVar1)();
      return pdVar4;
    }
  }
  return (double *)(this->Memory + pFVar3->Offset);
}

// GetValue<UE::Math::TVector2<double>_> @ 14d650680

TVector2<double> * __thiscall
UE::Cameras::FCameraVariableTable::GetValue<UE::Math::TVector2<double>_>
          (FCameraVariableTable *this,FCameraVariableID param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntry *pFVar3;
  TVector2<double> *pTVar4;
  uint local_res10 [2];
  uint *local_res18;
  FString local_18;
  
  local_res10[0] = param_1.Value;
  pFVar3 = FindEntry(this,param_1);
  if (pFVar3 == (FEntry *)0x0) {
    local_res18 = local_res10;
    bVar2 = `UE::Cameras::FCameraVariableTable::GetValue<UE::Math::TVector2<double>_>'::__l3::
            <lambda_1>::operator()(&local_res18);
    if (!bVar2) {
      return &`public:_struct_UE::Math::TVector2<double>_const&___ptr64___cdecl_UE::Cameras::FCameraVariableTable::GetValue<UE::Math::TVector2<double>_>(FCameraVariableID)const___ptr64'
              ::__l2::DefaultValue;
    }
  }
  if ((pFVar3->Type != Vector2d) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector2<double> *)(*pcVar1)();
    return pTVar4;
  }
  if ((pFVar3->Flags & Written) == None) {
    ::FString::PrintfImpl(&local_18,L"%u");
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(Entry->Flags, EEntryFlags::Written)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                       ,0x12a,
                       L"Variable \'%s\' has never been written to. GetValue() will return uninitialized memory!"
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector2<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector2<double> *)(this->Memory + pFVar3->Offset);
}

// SetValue<UE::Math::TRotator<double>_> @ 14d6543b0

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<double>_>
          (FCameraVariableTable *this,FCameraVariableDefinition *param_1,TRotator<double> *param_2,
          bool param_3)

{
  double *pdVar1;
  ECameraVariableType EVar2;
  uint uVar3;
  uchar *puVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  FEntry *pFVar8;
  uint local_res10 [2];
  FCameraVariableDefinition *local_28;
  uint *local_20;
  
  pFVar8 = FindEntry(this,(FCameraVariableID)(param_1->VariableID).Value);
  if (pFVar8 == (FEntry *)0x0) {
    if (!param_3) {
      local_28 = param_1;
      `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<double>_>'::__l2::<lambda_1>::
      operator()(&local_28);
      return;
    }
    AddVariable(this,param_1);
    local_res10[0] = (param_1->VariableID).Value;
    pFVar8 = FindEntry(this,(FCameraVariableID)local_res10[0]);
    if (pFVar8 == (FEntry *)0x0) {
      local_20 = local_res10;
      bVar7 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<double>_>'::__l3::
              <lambda_1>::operator()(&local_20);
      if (!bVar7) {
        return;
      }
    }
    EVar2 = pFVar8->Type;
  }
  else {
    EVar2 = pFVar8->Type;
  }
  if ((EVar2 != Rotator3d) &&
     (bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar4 = this->Memory;
  uVar3 = pFVar8->Offset;
  dVar6 = param_2->Yaw;
  pdVar1 = (double *)(puVar4 + uVar3);
  *pdVar1 = param_2->Pitch;
  pdVar1[1] = dVar6;
  *(double *)(puVar4 + (ulonglong)uVar3 + 0x10) = param_2->Roll;
  pFVar8->Flags = pFVar8->Flags | (WrittenThisFrame|Written);
  return;
}

// SetValue<bool> @ 14d6544a0

void __thiscall
UE::Cameras::FCameraVariableTable::SetValue<bool>
          (FCameraVariableTable *this,FCameraVariableDefinition *param_1,bool param_2,bool param_3)

{
  ECameraVariableType EVar1;
  code *pcVar2;
  bool bVar3;
  FEntry *pFVar4;
  uint local_res10 [2];
  FCameraVariableDefinition *local_28;
  uint *local_20;
  
  pFVar4 = FindEntry(this,(FCameraVariableID)(param_1->VariableID).Value);
  if (pFVar4 == (FEntry *)0x0) {
    if (!param_3) {
      local_28 = param_1;
      `UE::Cameras::FCameraVariableTable::SetValue<bool>'::__l2::<lambda_1>::operator()(&local_28);
      return;
    }
    AddVariable(this,param_1);
    local_res10[0] = (param_1->VariableID).Value;
    pFVar4 = FindEntry(this,(FCameraVariableID)local_res10[0]);
    if (pFVar4 == (FEntry *)0x0) {
      local_20 = local_res10;
      bVar3 = `UE::Cameras::FCameraVariableTable::SetValue<bool>'::__l3::<lambda_1>::operator()
                        (&local_20);
      if (!bVar3) {
        return;
      }
    }
    EVar1 = pFVar4->Type;
  }
  else {
    EVar1 = pFVar4->Type;
  }
  if ((EVar1 != Boolean) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->Memory[pFVar4->Offset] = param_2;
  pFVar4->Flags = pFVar4->Flags | (WrittenThisFrame|Written);
  return;
}

// operator() @ 150581ff0

bool __thiscall
`UE::Cameras::FCameraVariableTable::GetValue'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3535351043497918755>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3535351043497918755>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505820e0

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<int>'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323416>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323416>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<int>(FCameraVariableID,int)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150582130

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<float>'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323416>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323416>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<float>(FCameraVariableID,float)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150582180

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<double>'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323416>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323416>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<double>(FCameraVariableID,double)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505821d0

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<double>_>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323416>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323416>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<double>_>(FCameraVariableID,UE::Math::TRotator<double>_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150582220

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TTransform<double>_>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323416>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323416>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TTransform<double>_>(FCameraVariableID,UE::Math::TTransform<double>_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150582270

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector2<double>_>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323416>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323416>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector2<double>_>(FCameraVariableID,UE::Math::TVector2<double>_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505822c0

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector4<double>_>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323416>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323416>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector4<double>_>(FCameraVariableID,UE::Math::TVector4<double>_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150582310

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector<double>_>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323416>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323416>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector<double>_>(FCameraVariableID,UE::Math::TVector<double>_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150582360

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<bool>'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323416>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323416>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<bool>(FCameraVariableID,bool)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150582570

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3535351043497918805>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3535351043497918805>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150582600

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<UBooleanCameraVariable>'::__l5::<lambda_1>::operator()
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FName local_res10;
  FString local_18;
  
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323481>);
  if (bVar3) {
    lVar1 = **(longlong **)this;
    if ((((*(int *)(lVar1 + 0x38) == 0 && *(int *)(lVar1 + 0x34) == 0) &&
         *(int *)(lVar1 + 0x30) == 0) && *(int *)(lVar1 + 0x2c) == 0) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    CityHash64((char *)(lVar1 + 0x2c),0x10);
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res10,&local_18);
    }
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323481>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<UBooleanCameraVariable>(UBooleanCameraVariable_const*___ptr64,bool,bool)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1505826f8;
    }
  }
  bVar3 = false;
LAB_1505826f8:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 150582730

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<UDoubleCameraVariable>'::__l5::<lambda_1>::operator()
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FName local_res10;
  FString local_18;
  
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323481>);
  if (bVar3) {
    lVar1 = **(longlong **)this;
    if ((((*(int *)(lVar1 + 0x38) == 0 && *(int *)(lVar1 + 0x34) == 0) &&
         *(int *)(lVar1 + 0x30) == 0) && *(int *)(lVar1 + 0x2c) == 0) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    CityHash64((char *)(lVar1 + 0x2c),0x10);
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res10,&local_18);
    }
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323481>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<UDoubleCameraVariable>(UDoubleCameraVariable_const*___ptr64,double,bool)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_150582828;
    }
  }
  bVar3 = false;
LAB_150582828:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 150582860

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<UFloatCameraVariable>'::__l5::<lambda_1>::operator()
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FName local_res10;
  FString local_18;
  
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323481>);
  if (bVar3) {
    lVar1 = **(longlong **)this;
    if ((((*(int *)(lVar1 + 0x38) == 0 && *(int *)(lVar1 + 0x34) == 0) &&
         *(int *)(lVar1 + 0x30) == 0) && *(int *)(lVar1 + 0x2c) == 0) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    CityHash64((char *)(lVar1 + 0x2c),0x10);
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res10,&local_18);
    }
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323481>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<UFloatCameraVariable>(UFloatCameraVariable_const*___ptr64,float,bool)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_150582958;
    }
  }
  bVar3 = false;
LAB_150582958:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 150582990

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<UInteger32CameraVariable>'::__l5::<lambda_1>::
operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FName local_res10;
  FString local_18;
  
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323481>);
  if (bVar3) {
    lVar1 = **(longlong **)this;
    if ((((*(int *)(lVar1 + 0x38) == 0 && *(int *)(lVar1 + 0x34) == 0) &&
         *(int *)(lVar1 + 0x30) == 0) && *(int *)(lVar1 + 0x2c) == 0) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    CityHash64((char *)(lVar1 + 0x2c),0x10);
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res10,&local_18);
    }
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323481>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<UInteger32CameraVariable>(UInteger32CameraVariable_const*___ptr64,int,bool)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_150582a88;
    }
  }
  bVar3 = false;
LAB_150582a88:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 150582ac0

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<URotator3dCameraVariable>'::__l5::<lambda_1>::
operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FName local_res10;
  FString local_18;
  
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323481>);
  if (bVar3) {
    lVar1 = **(longlong **)this;
    if ((((*(int *)(lVar1 + 0x38) == 0 && *(int *)(lVar1 + 0x34) == 0) &&
         *(int *)(lVar1 + 0x30) == 0) && *(int *)(lVar1 + 0x2c) == 0) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    CityHash64((char *)(lVar1 + 0x2c),0x10);
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res10,&local_18);
    }
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323481>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<URotator3dCameraVariable>(URotator3dCameraVariable_const*___ptr64,UE::Math::TRotator<double>_const&___ptr64,bool)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_150582bb8;
    }
  }
  bVar3 = false;
LAB_150582bb8:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 150582bf0

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<UTransform3dCameraVariable>'::__l5::<lambda_1>::
operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FName local_res10;
  FString local_18;
  
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323481>);
  if (bVar3) {
    lVar1 = **(longlong **)this;
    if ((((*(int *)(lVar1 + 0x38) == 0 && *(int *)(lVar1 + 0x34) == 0) &&
         *(int *)(lVar1 + 0x30) == 0) && *(int *)(lVar1 + 0x2c) == 0) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    CityHash64((char *)(lVar1 + 0x2c),0x10);
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res10,&local_18);
    }
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323481>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<UTransform3dCameraVariable>(UTransform3dCameraVariable_const*___ptr64,UE::Math::TTransform<double>_const&___ptr64,bool)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_150582ce8;
    }
  }
  bVar3 = false;
LAB_150582ce8:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 150582d20

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<UVector2dCameraVariable>'::__l5::<lambda_1>::operator()
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FName local_res10;
  FString local_18;
  
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323481>);
  if (bVar3) {
    lVar1 = **(longlong **)this;
    if ((((*(int *)(lVar1 + 0x38) == 0 && *(int *)(lVar1 + 0x34) == 0) &&
         *(int *)(lVar1 + 0x30) == 0) && *(int *)(lVar1 + 0x2c) == 0) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    CityHash64((char *)(lVar1 + 0x2c),0x10);
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res10,&local_18);
    }
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323481>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<UVector2dCameraVariable>(UVector2dCameraVariable_const*___ptr64,UE::Math::TVector2<double>_const&___ptr64,bool)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_150582e18;
    }
  }
  bVar3 = false;
LAB_150582e18:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 150582e50

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<UVector3dCameraVariable>'::__l5::<lambda_1>::operator()
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FName local_res10;
  FString local_18;
  
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323481>);
  if (bVar3) {
    lVar1 = **(longlong **)this;
    if ((((*(int *)(lVar1 + 0x38) == 0 && *(int *)(lVar1 + 0x34) == 0) &&
         *(int *)(lVar1 + 0x30) == 0) && *(int *)(lVar1 + 0x2c) == 0) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    CityHash64((char *)(lVar1 + 0x2c),0x10);
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res10,&local_18);
    }
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323481>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<UVector3dCameraVariable>(UVector3dCameraVariable_const*___ptr64,UE::Math::TVector<double>_const&___ptr64,bool)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_150582f48;
    }
  }
  bVar3 = false;
LAB_150582f48:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 150582f80

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<UVector4dCameraVariable>'::__l5::<lambda_1>::operator()
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FName local_res10;
  FString local_18;
  
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323481>);
  if (bVar3) {
    lVar1 = **(longlong **)this;
    if ((((*(int *)(lVar1 + 0x38) == 0 && *(int *)(lVar1 + 0x34) == 0) &&
         *(int *)(lVar1 + 0x30) == 0) && *(int *)(lVar1 + 0x2c) == 0) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_841517864337801202>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableAssets.cpp"
                           ,0xe,"Guid.IsValid()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    CityHash64((char *)(lVar1 + 0x2c),0x10);
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res10,&local_18);
    }
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323481>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<UVector4dCameraVariable>(UVector4dCameraVariable_const*___ptr64,UE::Math::TVector4<double>_const&___ptr64,bool)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_150583078;
    }
  }
  bVar3 = false;
LAB_150583078:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 1505831d0

bool __thiscall
`UE::Cameras::FCameraVariableTable::Serialize'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3535351043497918940>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3535351043497918940>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505832b0

bool __thiscall
`UE::Cameras::FCameraVariableTable::InternalLerp'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UEnum *pUVar6;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar2 = false;
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3535351043497919124>);
  if (bVar3) {
    pUVar6 = StaticEnum<enum_ECameraVariableType>();
    if ((pUVar6 == (UEnum *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    UEnum::GetNameByValue(pUVar6,(long64)&local_res10);
    ::FName::ToString(&local_res10,&local_28);
    pUVar6 = StaticEnum<enum_ECameraVariableType>();
    if ((pUVar6 == (UEnum *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    UEnum::GetNameByValue(pUVar6,(long64)&local_res18);
    ::FName::ToString(&local_res18,&local_38);
    bVar2 = true;
    bVar4 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3535351043497919124>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15058341a;
    }
  }
  bVar3 = false;
LAB_15058341a:
  if ((bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150583470

bool __thiscall
`UE::Cameras::FCameraVariableTable::InternalOverride'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UEnum *pUVar6;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar2 = false;
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3535351043497919020>);
  if (bVar3) {
    pUVar6 = StaticEnum<enum_ECameraVariableType>();
    if ((pUVar6 == (UEnum *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    UEnum::GetNameByValue(pUVar6,(long64)&local_res10);
    ::FName::ToString(&local_res10,&local_28);
    pUVar6 = StaticEnum<enum_ECameraVariableType>();
    if ((pUVar6 == (UEnum *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    UEnum::GetNameByValue(pUVar6,(long64)&local_res18);
    ::FName::ToString(&local_res18,&local_38);
    bVar2 = true;
    bVar4 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3535351043497919020>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1505835da;
    }
  }
  bVar3 = false;
LAB_1505835da:
  if ((bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150583870

bool __thiscall
`UE::Cameras::FCameraVariableTable::Serialize'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3535351043497918951>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3535351043497918951>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150583a10

bool __thiscall
`UE::Cameras::FCameraVariableTable::InternalLerp'::__l12::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3535351043497919133>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<3535351043497919133>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150584e40

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<float>_>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323416>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323416>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<float>_>(FCameraVariableID,UE::Math::TRotator<float>_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150584e90

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TTransform<float>_>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323416>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323416>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TTransform<float>_>(FCameraVariableID,UE::Math::TTransform<float>_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150584ee0

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector2<float>_>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323416>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323416>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector2<float>_>(FCameraVariableID,UE::Math::TVector2<float>)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150584f30

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector4<float>_>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323416>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323416>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector4<float>_>(FCameraVariableID,UE::Math::TVector4<float>_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150584f80

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector<float>_>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323416>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323416>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector<float>_>(FCameraVariableID,UE::Math::TVector<float>_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150585660

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<double>_>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323455>);
  if (bVar2) {
    ::FString::PrintfImpl(&local_18,L"%u");
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323455>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<double>_>(FCameraVariableDefinition_const&___ptr64,UE::Math::TRotator<double>_const&___ptr64,bool)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505856d6;
    }
  }
  bVar2 = false;
LAB_1505856d6:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150585710

bool __thiscall
`UE::Cameras::FCameraVariableTable::SetValue<bool>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323455>);
  if (bVar2) {
    ::FString::PrintfImpl(&local_18,L"%u");
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323455>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Cameras::FCameraVariableTable::SetValue<bool>(FCameraVariableDefinition_const&___ptr64,bool,bool)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150585786;
    }
  }
  bVar2 = false;
LAB_150585786:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150585b80

bool __thiscall
`UE::Cameras::FCameraVariableTable::GetValue<double>'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323358>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323358>,
                       &`public:___cdecl_`public:_double_const&___ptr64___cdecl_UE::Cameras::FCameraVariableTable::GetValue<double>(FCameraVariableID)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150585bd0

bool __thiscall
`UE::Cameras::FCameraVariableTable::GetValue<UE::Math::TVector2<double>_>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7269619262472323358>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7269619262472323358>,
                       &`public:___cdecl_`public:_struct_UE::Math::TVector2<double>_const&___ptr64___cdecl_UE::Cameras::FCameraVariableTable::GetValue<UE::Math::TVector2<double>_>(FCameraVariableID)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

