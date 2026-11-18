// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// Get @ 14d617c80

float * __thiscall
UE::Cameras::TCameraParameterReader<float>::Get
          (TCameraParameterReader<float> *this,FCameraVariableTable *param_1)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  
  if ((this->DefaultValuePtr == (float *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pfVar3 = (float *)(*pcVar1)();
    return pfVar3;
  }
  if (((this->VariableID).Value != 0xffffffff) &&
     (pfVar3 = FCameraVariableTable::FindValue<float>
                         (param_1,(FCameraVariableID)(this->VariableID).Value),
     pfVar3 != (float *)0x0)) {
    return pfVar3;
  }
  return this->DefaultValuePtr;
}

// Get @ 14d617cf0

double * __thiscall
UE::Cameras::TCameraParameterReader<double>::Get
          (TCameraParameterReader<double> *this,FCameraVariableTable *param_1)

{
  code *pcVar1;
  bool bVar2;
  double *pdVar3;
  
  if ((this->DefaultValuePtr == (double *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pdVar3 = (double *)(*pcVar1)();
    return pdVar3;
  }
  if (((this->VariableID).Value != 0xffffffff) &&
     (pdVar3 = FCameraVariableTable::FindValue<double>
                         (param_1,(FCameraVariableID)(this->VariableID).Value),
     pdVar3 != (double *)0x0)) {
    return pdVar3;
  }
  return this->DefaultValuePtr;
}

// Get @ 14d617d60

TVector<double> * __thiscall
UE::Cameras::TCameraParameterReader<UE::Math::TVector<double>_>::Get
          (TCameraParameterReader<UE::Math::TVector<double>_> *this,FCameraVariableTable *param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  
  if ((this->DefaultValuePtr == (TVector<double> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TVector<double> *)(*pcVar1)();
    return pTVar3;
  }
  if (((this->VariableID).Value != 0xffffffff) &&
     (pTVar3 = FCameraVariableTable::FindValue<UE::Math::TVector<double>_>
                         (param_1,(FCameraVariableID)(this->VariableID).Value),
     pTVar3 != (TVector<double> *)0x0)) {
    return pTVar3;
  }
  return this->DefaultValuePtr;
}

// Get @ 14d617dd0

FCameraFramingZone * __thiscall
UE::Cameras::TCameraParameterReader<FCameraFramingZone>::Get
          (TCameraParameterReader<FCameraFramingZone> *this,FCameraVariableTable *param_1)

{
  FCameraVariableID FVar1;
  code *pcVar2;
  bool bVar3;
  FCameraFramingZone *pFVar4;
  FEntry *pFVar5;
  
  if ((this->DefaultValuePtr == (FCameraFramingZone *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FCameraFramingZone *)(*pcVar2)();
    return pFVar4;
  }
  FVar1.Value = (this->VariableID).Value;
  if (FVar1.Value == 0xffffffff) {
    return this->DefaultValuePtr;
  }
  pFVar5 = FCameraVariableTable::FindEntry(param_1,FVar1);
  if (pFVar5 != (FEntry *)0x0) {
    if ((pFVar5->Type != BlendableStruct) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FCameraFramingZone *)(*pcVar2)();
      return pFVar4;
    }
    if (((pFVar5->Flags & Written) != None) &&
       ((FCameraFramingZone *)(param_1->Memory + pFVar5->Offset) != (FCameraFramingZone *)0x0)) {
      return (FCameraFramingZone *)(param_1->Memory + pFVar5->Offset);
    }
  }
  return this->DefaultValuePtr;
}

// Get @ 14d617ea0

bool * __thiscall
UE::Cameras::TCameraParameterReader<bool>::Get
          (TCameraParameterReader<bool> *this,FCameraVariableTable *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  
  if ((this->DefaultValuePtr == (bool *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pbVar3 = (bool *)(*pcVar1)();
    return pbVar3;
  }
  if (((this->VariableID).Value != 0xffffffff) &&
     (pbVar3 = FCameraVariableTable::FindValue<bool>
                         (param_1,(FCameraVariableID)(this->VariableID).Value),
     pbVar3 != (bool *)0x0)) {
    return pbVar3;
  }
  return this->DefaultValuePtr;
}

// Get @ 14d65f8a0

int * __thiscall
UE::Cameras::TCameraParameterReader<int>::Get
          (TCameraParameterReader<int> *this,FCameraVariableTable *param_1)

{
  FCameraVariableID FVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  FEntry *pFVar5;
  
  if ((this->DefaultValuePtr == (int *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar3)) {
    pcVar2 = (code *)swi(3);
    piVar4 = (int *)(*pcVar2)();
    return piVar4;
  }
  FVar1.Value = (this->VariableID).Value;
  if (FVar1.Value == 0xffffffff) {
    return this->DefaultValuePtr;
  }
  pFVar5 = FCameraVariableTable::FindEntry(param_1,FVar1);
  if (pFVar5 != (FEntry *)0x0) {
    if ((pFVar5->Type != Integer32) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar3)) {
      pcVar2 = (code *)swi(3);
      piVar4 = (int *)(*pcVar2)();
      return piVar4;
    }
    if (((pFVar5->Flags & Written) != None) &&
       ((int *)(param_1->Memory + pFVar5->Offset) != (int *)0x0)) {
      return (int *)(param_1->Memory + pFVar5->Offset);
    }
  }
  return this->DefaultValuePtr;
}

// Get @ 14d65f970

TVector2<double> * __thiscall
UE::Cameras::TCameraParameterReader<UE::Math::TVector2<double>_>::Get
          (TCameraParameterReader<UE::Math::TVector2<double>_> *this,FCameraVariableTable *param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector2<double> *pTVar3;
  
  if ((this->DefaultValuePtr == (TVector2<double> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TVector2<double> *)(*pcVar1)();
    return pTVar3;
  }
  if (((this->VariableID).Value != 0xffffffff) &&
     (pTVar3 = FCameraVariableTable::FindValue<UE::Math::TVector2<double>_>
                         (param_1,(FCameraVariableID)(this->VariableID).Value),
     pTVar3 != (TVector2<double> *)0x0)) {
    return pTVar3;
  }
  return this->DefaultValuePtr;
}

