// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 16

// GetPropertyAddress<unsigned_char> @ 14d09b3f0

uchar * __thiscall
FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<unsigned_char>
          (FPropertyWrapper *this,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FFieldClass *pFVar4;
  FField *pFVar5;
  uchar *puVar6;
  longlong lVar7;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 == (UObject *)0x0) {
    *(undefined8 *)&(this->Property).Field = 0;
  }
  else {
    pFVar4 = FProperty::StaticClass();
    pFVar5 = FFieldPath::GetTyped((FFieldPath *)&(this->Property).Field,pFVar4,(UStruct *)0x0);
    if ((pFVar5 != (FField *)0x0) &&
       ((pFVar5->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      lVar7 = this->DeltaAddress + (longlong)param_1;
      if (((param_2 < 0) || ((int)pFVar5[1]._padding_ <= param_2)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        puVar6 = (uchar *)(*pcVar1)();
        return puVar6;
      }
      if ((lVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        puVar6 = (uchar *)(*pcVar1)();
        return puVar6;
      }
      return (uchar *)((longlong)*(int *)((longlong)&pFVar5[1].Owner.Container + 4) +
                      (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4) * (longlong)param_2 +
                      lVar7);
    }
  }
  return (uchar *)0x0;
}

// GetPropertyAddress<unsigned_char> @ 14d09b4f0

uchar * __thiscall
FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<unsigned_char>
          (FPropertyWrapper *this,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FFieldClass *pFVar4;
  FField *pFVar5;
  uchar *puVar6;
  longlong lVar7;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 == (UObject *)0x0) {
    *(undefined8 *)&(this->Property).Field = 0;
  }
  else {
    pFVar4 = FProperty::StaticClass();
    pFVar5 = FFieldPath::GetTyped((FFieldPath *)&(this->Property).Field,pFVar4,(UStruct *)0x0);
    if ((pFVar5 != (FField *)0x0) &&
       ((pFVar5->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      lVar7 = this->DeltaAddress + (longlong)param_1;
      if (((param_2 < 0) || ((int)pFVar5[1]._padding_ <= param_2)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        puVar6 = (uchar *)(*pcVar1)();
        return puVar6;
      }
      if ((lVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        puVar6 = (uchar *)(*pcVar1)();
        return puVar6;
      }
      return (uchar *)((longlong)*(int *)((longlong)&pFVar5[1].Owner.Container + 4) +
                      (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4) * (longlong)param_2 +
                      lVar7);
    }
  }
  return (uchar *)0x0;
}

// GetPropertyAddress<int> @ 14d09b5f0

int * __thiscall
FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<int>
          (FPropertyWrapper *this,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FFieldClass *pFVar4;
  FField *pFVar5;
  int *piVar6;
  longlong lVar7;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 == (UObject *)0x0) {
    *(undefined8 *)&(this->Property).Field = 0;
  }
  else {
    pFVar4 = FProperty::StaticClass();
    pFVar5 = FFieldPath::GetTyped((FFieldPath *)&(this->Property).Field,pFVar4,(UStruct *)0x0);
    if ((pFVar5 != (FField *)0x0) &&
       ((pFVar5->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      lVar7 = this->DeltaAddress + (longlong)param_1;
      if (((param_2 < 0) || ((int)pFVar5[1]._padding_ <= param_2)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        piVar6 = (int *)(*pcVar1)();
        return piVar6;
      }
      if ((lVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        piVar6 = (int *)(*pcVar1)();
        return piVar6;
      }
      return (int *)((longlong)*(int *)((longlong)&pFVar5[1].Owner.Container + 4) +
                    (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4) * (longlong)param_2 +
                    lVar7);
    }
  }
  return (int *)0x0;
}

// GetPropertyAddress<int> @ 14d09b6f0

int * __thiscall
FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<int>
          (FPropertyWrapper *this,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FFieldClass *pFVar4;
  FField *pFVar5;
  int *piVar6;
  longlong lVar7;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 == (UObject *)0x0) {
    *(undefined8 *)&(this->Property).Field = 0;
  }
  else {
    pFVar4 = FProperty::StaticClass();
    pFVar5 = FFieldPath::GetTyped((FFieldPath *)&(this->Property).Field,pFVar4,(UStruct *)0x0);
    if ((pFVar5 != (FField *)0x0) &&
       ((pFVar5->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      lVar7 = this->DeltaAddress + (longlong)param_1;
      if (((param_2 < 0) || ((int)pFVar5[1]._padding_ <= param_2)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        piVar6 = (int *)(*pcVar1)();
        return piVar6;
      }
      if ((lVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        piVar6 = (int *)(*pcVar1)();
        return piVar6;
      }
      return (int *)((longlong)*(int *)((longlong)&pFVar5[1].Owner.Container + 4) +
                    (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4) * (longlong)param_2 +
                    lVar7);
    }
  }
  return (int *)0x0;
}

// GetPropertyAddress<float> @ 14d09b7f0

float * __thiscall
FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<float>
          (FPropertyWrapper *this,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FFieldClass *pFVar4;
  FField *pFVar5;
  float *pfVar6;
  longlong lVar7;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 == (UObject *)0x0) {
    *(undefined8 *)&(this->Property).Field = 0;
  }
  else {
    pFVar4 = FProperty::StaticClass();
    pFVar5 = FFieldPath::GetTyped((FFieldPath *)&(this->Property).Field,pFVar4,(UStruct *)0x0);
    if ((pFVar5 != (FField *)0x0) &&
       ((pFVar5->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      lVar7 = this->DeltaAddress + (longlong)param_1;
      if (((param_2 < 0) || ((int)pFVar5[1]._padding_ <= param_2)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pfVar6 = (float *)(*pcVar1)();
        return pfVar6;
      }
      if ((lVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pfVar6 = (float *)(*pcVar1)();
        return pfVar6;
      }
      return (float *)((longlong)*(int *)((longlong)&pFVar5[1].Owner.Container + 4) +
                      (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4) * (longlong)param_2 +
                      lVar7);
    }
  }
  return (float *)0x0;
}

// GetPropertyAddress<float> @ 14d09b8f0

float * __thiscall
FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<float>
          (FPropertyWrapper *this,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FFieldClass *pFVar4;
  FField *pFVar5;
  float *pfVar6;
  longlong lVar7;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 == (UObject *)0x0) {
    *(undefined8 *)&(this->Property).Field = 0;
  }
  else {
    pFVar4 = FProperty::StaticClass();
    pFVar5 = FFieldPath::GetTyped((FFieldPath *)&(this->Property).Field,pFVar4,(UStruct *)0x0);
    if ((pFVar5 != (FField *)0x0) &&
       ((pFVar5->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      lVar7 = this->DeltaAddress + (longlong)param_1;
      if (((param_2 < 0) || ((int)pFVar5[1]._padding_ <= param_2)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pfVar6 = (float *)(*pcVar1)();
        return pfVar6;
      }
      if ((lVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pfVar6 = (float *)(*pcVar1)();
        return pfVar6;
      }
      return (float *)((longlong)*(int *)((longlong)&pFVar5[1].Owner.Container + 4) +
                      (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4) * (longlong)param_2 +
                      lVar7);
    }
  }
  return (float *)0x0;
}

// GetPropertyAddress<UE::Math::TTransform<double>_> @ 14d09b9f0

TTransform<double> * __thiscall
FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<UE::Math::TTransform<double>_>
          (FPropertyWrapper *this,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FFieldClass *pFVar4;
  FField *pFVar5;
  TTransform<double> *pTVar6;
  longlong lVar7;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 == (UObject *)0x0) {
    *(undefined8 *)&(this->Property).Field = 0;
  }
  else {
    pFVar4 = FProperty::StaticClass();
    pFVar5 = FFieldPath::GetTyped((FFieldPath *)&(this->Property).Field,pFVar4,(UStruct *)0x0);
    if ((pFVar5 != (FField *)0x0) &&
       ((pFVar5->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      lVar7 = this->DeltaAddress + (longlong)param_1;
      if (((param_2 < 0) || ((int)pFVar5[1]._padding_ <= param_2)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TTransform<double> *)(*pcVar1)();
        return pTVar6;
      }
      if ((lVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TTransform<double> *)(*pcVar1)();
        return pTVar6;
      }
      return (TTransform<double> *)
             ((longlong)*(int *)((longlong)&pFVar5[1].Owner.Container + 4) +
             (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4) * (longlong)param_2 + lVar7);
    }
  }
  return (TTransform<double> *)0x0;
}

// GetPropertyAddress<UE::Math::TTransform<double>_> @ 14d09baf0

TTransform<double> * __thiscall
FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<UE::Math::TTransform<double>_>
          (FPropertyWrapper *this,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FFieldClass *pFVar4;
  FField *pFVar5;
  TTransform<double> *pTVar6;
  longlong lVar7;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 == (UObject *)0x0) {
    *(undefined8 *)&(this->Property).Field = 0;
  }
  else {
    pFVar4 = FProperty::StaticClass();
    pFVar5 = FFieldPath::GetTyped((FFieldPath *)&(this->Property).Field,pFVar4,(UStruct *)0x0);
    if ((pFVar5 != (FField *)0x0) &&
       ((pFVar5->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      lVar7 = this->DeltaAddress + (longlong)param_1;
      if (((param_2 < 0) || ((int)pFVar5[1]._padding_ <= param_2)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TTransform<double> *)(*pcVar1)();
        return pTVar6;
      }
      if ((lVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TTransform<double> *)(*pcVar1)();
        return pTVar6;
      }
      return (TTransform<double> *)
             ((longlong)*(int *)((longlong)&pFVar5[1].Owner.Container + 4) +
             (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4) * (longlong)param_2 + lVar7);
    }
  }
  return (TTransform<double> *)0x0;
}

// GetPropertyAddress<UE::Math::TVector<double>_> @ 14d09bbf0

TVector<double> * __thiscall
FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<UE::Math::TVector<double>_>
          (FPropertyWrapper *this,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FFieldClass *pFVar4;
  FField *pFVar5;
  TVector<double> *pTVar6;
  longlong lVar7;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 == (UObject *)0x0) {
    *(undefined8 *)&(this->Property).Field = 0;
  }
  else {
    pFVar4 = FProperty::StaticClass();
    pFVar5 = FFieldPath::GetTyped((FFieldPath *)&(this->Property).Field,pFVar4,(UStruct *)0x0);
    if ((pFVar5 != (FField *)0x0) &&
       ((pFVar5->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      lVar7 = this->DeltaAddress + (longlong)param_1;
      if (((param_2 < 0) || ((int)pFVar5[1]._padding_ <= param_2)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TVector<double> *)(*pcVar1)();
        return pTVar6;
      }
      if ((lVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TVector<double> *)(*pcVar1)();
        return pTVar6;
      }
      return (TVector<double> *)
             ((longlong)*(int *)((longlong)&pFVar5[1].Owner.Container + 4) +
             (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4) * (longlong)param_2 + lVar7);
    }
  }
  return (TVector<double> *)0x0;
}

// GetPropertyAddress<UE::Math::TVector<double>_> @ 14d09bcf0

TVector<double> * __thiscall
FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<UE::Math::TVector<double>_>
          (FPropertyWrapper *this,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FFieldClass *pFVar4;
  FField *pFVar5;
  TVector<double> *pTVar6;
  longlong lVar7;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 == (UObject *)0x0) {
    *(undefined8 *)&(this->Property).Field = 0;
  }
  else {
    pFVar4 = FProperty::StaticClass();
    pFVar5 = FFieldPath::GetTyped((FFieldPath *)&(this->Property).Field,pFVar4,(UStruct *)0x0);
    if ((pFVar5 != (FField *)0x0) &&
       ((pFVar5->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      lVar7 = this->DeltaAddress + (longlong)param_1;
      if (((param_2 < 0) || ((int)pFVar5[1]._padding_ <= param_2)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TVector<double> *)(*pcVar1)();
        return pTVar6;
      }
      if ((lVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TVector<double> *)(*pcVar1)();
        return pTVar6;
      }
      return (TVector<double> *)
             ((longlong)*(int *)((longlong)&pFVar5[1].Owner.Container + 4) +
             (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4) * (longlong)param_2 + lVar7);
    }
  }
  return (TVector<double> *)0x0;
}

// GetPropertyAddress<FColor> @ 14d09bdf0

FColor * __thiscall
FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<FColor>
          (FPropertyWrapper *this,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FFieldClass *pFVar4;
  FField *pFVar5;
  FColor *pFVar6;
  longlong lVar7;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 == (UObject *)0x0) {
    *(undefined8 *)&(this->Property).Field = 0;
  }
  else {
    pFVar4 = FProperty::StaticClass();
    pFVar5 = FFieldPath::GetTyped((FFieldPath *)&(this->Property).Field,pFVar4,(UStruct *)0x0);
    if ((pFVar5 != (FField *)0x0) &&
       ((pFVar5->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      lVar7 = this->DeltaAddress + (longlong)param_1;
      if (((param_2 < 0) || ((int)pFVar5[1]._padding_ <= param_2)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FColor *)(*pcVar1)();
        return pFVar6;
      }
      if ((lVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FColor *)(*pcVar1)();
        return pFVar6;
      }
      return (FColor *)
             ((longlong)*(int *)((longlong)&pFVar5[1].Owner.Container + 4) +
             (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4) * (longlong)param_2 + lVar7);
    }
  }
  return (FColor *)0x0;
}

// GetPropertyAddress<FColor> @ 14d09bef0

FColor * __thiscall
FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<FColor>
          (FPropertyWrapper *this,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FFieldClass *pFVar4;
  FField *pFVar5;
  FColor *pFVar6;
  longlong lVar7;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 == (UObject *)0x0) {
    *(undefined8 *)&(this->Property).Field = 0;
  }
  else {
    pFVar4 = FProperty::StaticClass();
    pFVar5 = FFieldPath::GetTyped((FFieldPath *)&(this->Property).Field,pFVar4,(UStruct *)0x0);
    if ((pFVar5 != (FField *)0x0) &&
       ((pFVar5->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      lVar7 = this->DeltaAddress + (longlong)param_1;
      if (((param_2 < 0) || ((int)pFVar5[1]._padding_ <= param_2)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FColor *)(*pcVar1)();
        return pFVar6;
      }
      if ((lVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FColor *)(*pcVar1)();
        return pFVar6;
      }
      return (FColor *)
             ((longlong)*(int *)((longlong)&pFVar5[1].Owner.Container + 4) +
             (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4) * (longlong)param_2 + lVar7);
    }
  }
  return (FColor *)0x0;
}

// GetPropertyAddress<FString> @ 14d09bff0

FString * __thiscall
FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<FString>
          (FPropertyWrapper *this,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FFieldClass *pFVar4;
  FField *pFVar5;
  FString *pFVar6;
  longlong lVar7;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 == (UObject *)0x0) {
    *(undefined8 *)&(this->Property).Field = 0;
  }
  else {
    pFVar4 = FProperty::StaticClass();
    pFVar5 = FFieldPath::GetTyped((FFieldPath *)&(this->Property).Field,pFVar4,(UStruct *)0x0);
    if ((pFVar5 != (FField *)0x0) &&
       ((pFVar5->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      lVar7 = this->DeltaAddress + (longlong)param_1;
      if (((param_2 < 0) || ((int)pFVar5[1]._padding_ <= param_2)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar1)();
        return pFVar6;
      }
      if ((lVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar1)();
        return pFVar6;
      }
      return (FString *)
             ((longlong)*(int *)((longlong)&pFVar5[1].Owner.Container + 4) +
             (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4) * (longlong)param_2 + lVar7);
    }
  }
  return (FString *)0x0;
}

// GetPropertyAddress<FString> @ 14d09c0f0

FString * __thiscall
FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<FString>
          (FPropertyWrapper *this,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FFieldClass *pFVar4;
  FField *pFVar5;
  FString *pFVar6;
  longlong lVar7;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 == (UObject *)0x0) {
    *(undefined8 *)&(this->Property).Field = 0;
  }
  else {
    pFVar4 = FProperty::StaticClass();
    pFVar5 = FFieldPath::GetTyped((FFieldPath *)&(this->Property).Field,pFVar4,(UStruct *)0x0);
    if ((pFVar5 != (FField *)0x0) &&
       ((pFVar5->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      lVar7 = this->DeltaAddress + (longlong)param_1;
      if (((param_2 < 0) || ((int)pFVar5[1]._padding_ <= param_2)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar1)();
        return pFVar6;
      }
      if ((lVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar1)();
        return pFVar6;
      }
      return (FString *)
             ((longlong)*(int *)((longlong)&pFVar5[1].Owner.Container + 4) +
             (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4) * (longlong)param_2 + lVar7);
    }
  }
  return (FString *)0x0;
}

// GetPropertyAddress<void> @ 14d09c1f0

void * __thiscall
FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<void>
          (FPropertyWrapper *this,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FFieldClass *pFVar4;
  FField *pFVar5;
  void *pvVar6;
  longlong lVar7;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 == (UObject *)0x0) {
    *(undefined8 *)&(this->Property).Field = 0;
  }
  else {
    pFVar4 = FProperty::StaticClass();
    pFVar5 = FFieldPath::GetTyped((FFieldPath *)&(this->Property).Field,pFVar4,(UStruct *)0x0);
    if ((pFVar5 != (FField *)0x0) &&
       ((pFVar5->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      lVar7 = this->DeltaAddress + (longlong)param_1;
      if (((param_2 < 0) || ((int)pFVar5[1]._padding_ <= param_2)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pvVar6 = (void *)(*pcVar1)();
        return pvVar6;
      }
      if ((lVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pvVar6 = (void *)(*pcVar1)();
        return pvVar6;
      }
      return (void *)((longlong)*(int *)((longlong)&pFVar5[1].Owner.Container + 4) +
                     (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4) * (longlong)param_2 +
                     lVar7);
    }
  }
  return (void *)0x0;
}

// GetPropertyAddress<void> @ 14d09c2f0

void * __thiscall
FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<void>
          (FPropertyWrapper *this,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FFieldClass *pFVar4;
  FField *pFVar5;
  void *pvVar6;
  longlong lVar7;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 == (UObject *)0x0) {
    *(undefined8 *)&(this->Property).Field = 0;
  }
  else {
    pFVar4 = FProperty::StaticClass();
    pFVar5 = FFieldPath::GetTyped((FFieldPath *)&(this->Property).Field,pFVar4,(UStruct *)0x0);
    if ((pFVar5 != (FField *)0x0) &&
       ((pFVar5->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
      lVar7 = this->DeltaAddress + (longlong)param_1;
      if (((param_2 < 0) || ((int)pFVar5[1]._padding_ <= param_2)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pvVar6 = (void *)(*pcVar1)();
        return pvVar6;
      }
      if ((lVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pvVar6 = (void *)(*pcVar1)();
        return pvVar6;
      }
      return (void *)((longlong)*(int *)((longlong)&pFVar5[1].Owner.Container + 4) +
                     (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4) * (longlong)param_2 +
                     lVar7);
    }
  }
  return (void *)0x0;
}

