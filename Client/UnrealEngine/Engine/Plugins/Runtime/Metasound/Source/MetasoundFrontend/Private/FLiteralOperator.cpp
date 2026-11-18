// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 37

// BindInputs @ 14ad6fe70

void __thiscall
Metasound::
TLiteralOperatorLiteralFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::FLiteralOperator::BindInputs(FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14ad70f20

void __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
FLiteralOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14ad71600

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::Frontend::FAnalyzerAddress>::FLiteralOperator::
BindInputs(FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// FLiteralOperator @ 14ad99670

FLiteralOperator * __thiscall
Metasound::
TLiteralOperatorLiteralFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::FLiteralOperator::FLiteralOperator
          (FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                       *)local_30,param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14ad99740

FLiteralOperator * __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
FLiteralOperator::FLiteralOperator
          (void *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
                       *)local_30,param_2,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            (this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14ad99810

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::Frontend::FAnalyzerAddress>::FLiteralOperator::
FLiteralOperator(FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDataValueReference<Metasound::Frontend::FAnalyzerAddress> *pTVar3;
  FLiteralOperator *pFVar4;
  FAnyDataReference local_48;
  undefined1 local_30 [40];
  
  pTVar3 = TDataLiteralFactory<Metasound::Frontend::FAnalyzerAddress,Metasound::TDataValueReference<Metasound::Frontend::FAnalyzerAddress>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::Frontend::FAnalyzerAddress> *)local_30,param_2
                      ,param_3);
  local_48.AccessType = Value;
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)pTVar3 + 0x18))(pTVar3,&local_48.DataRefPtr);
  if (local_48.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLiteralOperator *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_48);
  if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_
  ;
  return this;
}

// BindInputs @ 14ae93440

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FSendAddress>::FLiteralOperator::BindInputs
          (FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14ae95fa0

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FTime>::FLiteralOperator::BindInputs
          (FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14ae99130

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FTrigger>::FLiteralOperator::BindInputs
          (FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14ae9b700

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<FString>::FLiteralOperator::BindInputs
          (FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14ae9dfe0

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<float>::FLiteralOperator::BindInputs
          (FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aea0a90

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<int>::FLiteralOperator::BindInputs
          (FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aea2ee0

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<bool>::FLiteralOperator::BindInputs
          (FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aea4d00

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<FMetasoundParameterStorageWrapper>::FLiteralOperator::
BindInputs(FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aed57f0

void __thiscall
Metasound::
TLiteralOperatorLiteralFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
FLiteralOperator::BindInputs(FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aed9650

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
FLiteralOperator::BindInputs(FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aedc0c0

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<TArray<FString,TSizedDefaultAllocator<32>_>_>::
FLiteralOperator::BindInputs(FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aedece0

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>_>::
FLiteralOperator::BindInputs(FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aee0530

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<TArray<int,TSizedDefaultAllocator<32>_>_>::
FLiteralOperator::BindInputs(FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aee1ba0

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<TArray<bool,TSizedDefaultAllocator<32>_>_>::
FLiteralOperator::BindInputs(FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aee5530

void __thiscall
Metasound::
TLiteralOperatorLiteralFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
::FLiteralOperator::BindInputs(FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14aee7c40

void __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FAudioBuffer>::FLiteralOperator::BindInputs
          (FLiteralOperator *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// FLiteralOperator @ 14af3ba10

/* WARNING: Removing unreachable block (ram,0x00014af3baf1) */
/* WARNING: Removing unreachable block (ram,0x00014af3bb16) */

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<int>::FLiteralOperator::FLiteralOperator
          (FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TDataValueReference<int> *pTVar4;
  FLiteralOperator *pFVar5;
  longlong *local_38;
  undefined1 local_30 [40];
  
  pTVar4 = TDataLiteralFactory<int,Metasound::TDataValueReference<int>_>::CreateExplicitArgs
                     ((TDataValueReference<int> *)local_30,param_2,param_3);
  (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_38);
  if ((local_38 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_38 + 0x18))(local_38,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_38 != (longlong *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this = &___7FLiteralOperator___TLiteralOperatorLiteralFactory_H_Metasound__6B_;
  return this;
}

// FLiteralOperator @ 14af3bb70

/* WARNING: Removing unreachable block (ram,0x00014af3bc51) */
/* WARNING: Removing unreachable block (ram,0x00014af3bc76) */

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<float>::FLiteralOperator::FLiteralOperator
          (FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TDataValueReference<float> *pTVar4;
  FLiteralOperator *pFVar5;
  longlong *local_38;
  undefined1 local_30 [40];
  
  pTVar4 = TDataLiteralFactory<float,Metasound::TDataValueReference<float>_>::CreateExplicitArgs
                     ((TDataValueReference<float> *)local_30,param_2,param_3);
  (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_38);
  if ((local_38 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_38 + 0x18))(local_38,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_38 != (longlong *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this = &___7FLiteralOperator___TLiteralOperatorLiteralFactory_M_Metasound__6B_;
  return this;
}

// FLiteralOperator @ 14af3bcd0

/* WARNING: Removing unreachable block (ram,0x00014af3bdb1) */
/* WARNING: Removing unreachable block (ram,0x00014af3bdd6) */

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<TArray<int,TSizedDefaultAllocator<32>_>_>::
FLiteralOperator::FLiteralOperator
          (FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FLiteralOperator *pFVar5;
  longlong *local_38;
  undefined1 local_30 [40];
  
  pTVar4 = TDataLiteralFactory<TArray<int,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_30,
                      param_2,param_3);
  (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_38);
  if ((local_38 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_38 + 0x18))(local_38,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_38 != (longlong *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14af3be30

/* WARNING: Removing unreachable block (ram,0x00014af3bf11) */
/* WARNING: Removing unreachable block (ram,0x00014af3bf36) */

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>_>::
FLiteralOperator::FLiteralOperator
          (FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FLiteralOperator *pFVar5;
  longlong *local_38;
  undefined1 local_30 [40];
  
  pTVar4 = TDataLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_30,
                      param_2,param_3);
  (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_38);
  if ((local_38 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_38 + 0x18))(local_38,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_38 != (longlong *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14af3bf90

/* WARNING: Removing unreachable block (ram,0x00014af3c071) */
/* WARNING: Removing unreachable block (ram,0x00014af3c096) */

FLiteralOperator * __thiscall
Metasound::
TLiteralOperatorLiteralFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
::FLiteralOperator::FLiteralOperator
          (FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  FLiteralOperator *pFVar5;
  longlong *local_38;
  undefined1 local_30 [40];
  
  pTVar4 = TDataLiteralFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                       *)local_30,param_2,param_3);
  (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_38);
  if ((local_38 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_38 + 0x18))(local_38,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_38 != (longlong *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14af3c0f0

/* WARNING: Removing unreachable block (ram,0x00014af3c1d1) */
/* WARNING: Removing unreachable block (ram,0x00014af3c1f6) */

FLiteralOperator * __thiscall
Metasound::
TLiteralOperatorLiteralFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
FLiteralOperator::FLiteralOperator
          (FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FLiteralOperator *pFVar5;
  longlong *local_38;
  undefined1 local_30 [40];
  
  pTVar4 = TDataLiteralFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                       *)local_30,param_2,param_3);
  (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_38);
  if ((local_38 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_38 + 0x18))(local_38,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_38 != (longlong *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14af3c250

/* WARNING: Removing unreachable block (ram,0x00014af3c331) */
/* WARNING: Removing unreachable block (ram,0x00014af3c356) */

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<TArray<FString,TSizedDefaultAllocator<32>_>_>::
FLiteralOperator::FLiteralOperator
          (FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FLiteralOperator *pFVar5;
  longlong *local_38;
  undefined1 local_30 [40];
  
  pTVar4 = TDataLiteralFactory<TArray<FString,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_30,
                      param_2,param_3);
  (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_38);
  if ((local_38 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_38 + 0x18))(local_38,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_38 != (longlong *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14af3c3b0

/* WARNING: Removing unreachable block (ram,0x00014af3c491) */
/* WARNING: Removing unreachable block (ram,0x00014af3c4b6) */

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
FLiteralOperator::FLiteralOperator
          (FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FLiteralOperator *pFVar5;
  longlong *local_38;
  undefined1 local_30 [40];
  
  pTVar4 = TDataLiteralFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
                      local_30,param_2,param_3);
  (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_38);
  if ((local_38 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_38 + 0x18))(local_38,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_38 != (longlong *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14af3c510

/* WARNING: Removing unreachable block (ram,0x00014af3c5f1) */
/* WARNING: Removing unreachable block (ram,0x00014af3c616) */

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<TArray<bool,TSizedDefaultAllocator<32>_>_>::
FLiteralOperator::FLiteralOperator
          (FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FLiteralOperator *pFVar5;
  longlong *local_38;
  undefined1 local_30 [40];
  
  pTVar4 = TDataLiteralFactory<TArray<bool,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_30,
                      param_2,param_3);
  (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_38);
  if ((local_38 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_38 + 0x18))(local_38,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_38 != (longlong *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14af3c670

/* WARNING: Removing unreachable block (ram,0x00014af3c751) */
/* WARNING: Removing unreachable block (ram,0x00014af3c776) */

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FAudioBuffer>::FLiteralOperator::
FLiteralOperator(FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TDataValueReference<Metasound::FAudioBuffer> *pTVar4;
  FLiteralOperator *pFVar5;
  longlong *local_38;
  undefined1 local_30 [40];
  
  pTVar4 = TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataValueReference<Metasound::FAudioBuffer>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::FAudioBuffer> *)local_30,param_2,param_3);
  (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_38);
  if ((local_38 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_38 + 0x18))(local_38,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_38 != (longlong *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14af3c7d0

/* WARNING: Removing unreachable block (ram,0x00014af3c8b1) */
/* WARNING: Removing unreachable block (ram,0x00014af3c8d6) */

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<FMetasoundParameterStorageWrapper>::FLiteralOperator::
FLiteralOperator(FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TDataValueReference<FMetasoundParameterStorageWrapper> *pTVar4;
  FLiteralOperator *pFVar5;
  longlong *local_38;
  undefined1 local_30 [40];
  
  pTVar4 = TDataLiteralFactory<FMetasoundParameterStorageWrapper,Metasound::TDataValueReference<FMetasoundParameterStorageWrapper>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<FMetasoundParameterStorageWrapper> *)local_30,param_2,
                      param_3);
  (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_38);
  if ((local_38 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_38 + 0x18))(local_38,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_38 != (longlong *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_VFMetasoundParameterStorageWrapper___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14af3c930

/* WARNING: Removing unreachable block (ram,0x00014af3ca11) */
/* WARNING: Removing unreachable block (ram,0x00014af3ca36) */

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FSendAddress>::FLiteralOperator::
FLiteralOperator(FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TDataValueReference<Metasound::FSendAddress> *pTVar4;
  FLiteralOperator *pFVar5;
  longlong *local_38;
  undefined1 local_30 [40];
  
  pTVar4 = TDataLiteralFactory<Metasound::FSendAddress,Metasound::TDataValueReference<Metasound::FSendAddress>_>
           ::CreateExplicitArgs
                     ((TDataValueReference<Metasound::FSendAddress> *)local_30,param_2,param_3);
  (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_38);
  if ((local_38 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_38 + 0x18))(local_38,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_38 != (longlong *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &
       ___7FLiteralOperator___TLiteralOperatorLiteralFactory_VFSendAddress_Metasound___Metasound__6B_
  ;
  return this;
}

// FLiteralOperator @ 14af3ca90

/* WARNING: Removing unreachable block (ram,0x00014af3cb71) */
/* WARNING: Removing unreachable block (ram,0x00014af3cb96) */

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<FString>::FLiteralOperator::FLiteralOperator
          (FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TDataValueReference<FString> *pTVar4;
  FLiteralOperator *pFVar5;
  longlong *local_38;
  undefined1 local_30 [40];
  
  pTVar4 = TDataLiteralFactory<FString,Metasound::TDataValueReference<FString>_>::CreateExplicitArgs
                     ((TDataValueReference<FString> *)local_30,param_2,param_3);
  (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_38);
  if ((local_38 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_38 + 0x18))(local_38,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_38 != (longlong *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &___7FLiteralOperator___TLiteralOperatorLiteralFactory_VFString___Metasound__6B_;
  return this;
}

// FLiteralOperator @ 14af3cbf0

/* WARNING: Removing unreachable block (ram,0x00014af3ccd1) */
/* WARNING: Removing unreachable block (ram,0x00014af3ccf6) */

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FTime>::FLiteralOperator::FLiteralOperator
          (FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TDataValueReference<Metasound::FTime> *pTVar4;
  FLiteralOperator *pFVar5;
  longlong *local_38;
  undefined1 local_30 [40];
  
  pTVar4 = TDataLiteralFactory<Metasound::FTime,Metasound::TDataValueReference<Metasound::FTime>_>::
           CreateExplicitArgs((TDataValueReference<Metasound::FTime> *)local_30,param_2,param_3);
  (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_38);
  if ((local_38 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_38 + 0x18))(local_38,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_38 != (longlong *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this =
       &___7FLiteralOperator___TLiteralOperatorLiteralFactory_VFTime_Metasound___Metasound__6B_;
  return this;
}

// FLiteralOperator @ 14af3cd50

/* WARNING: Removing unreachable block (ram,0x00014af3ce31) */
/* WARNING: Removing unreachable block (ram,0x00014af3ce56) */

FLiteralOperator * __thiscall
Metasound::TLiteralOperatorLiteralFactory<bool>::FLiteralOperator::FLiteralOperator
          (FLiteralOperator *this,FName *param_1,FOperatorSettings *param_2,FLiteral *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TDataValueReference<bool> *pTVar4;
  FLiteralOperator *pFVar5;
  longlong *local_38;
  undefined1 local_30 [40];
  
  pTVar4 = TDataLiteralFactory<bool,Metasound::TDataValueReference<bool>_>::CreateExplicitArgs
                     ((TDataValueReference<bool> *)local_30,param_2,param_3);
  (**(code **)(*(longlong *)pTVar4 + 0x18))(pTVar4,&local_38);
  if ((local_38 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 4;
  (**(code **)(*local_38 + 0x18))(local_38,&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLiteralOperator *)(*pcVar1)();
    return pFVar5;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_38 != (longlong *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_30._16_8_);
  *(undefined ***)this = &___7FLiteralOperator___TLiteralOperatorLiteralFactory__N_Metasound__6B_;
  return this;
}

