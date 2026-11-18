// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 19

// FNonExecutableInputPassThroughOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad80a00

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad80e30

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::Frontend::FAnalyzerAddress> @ 14ad80f60

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::Frontend::FAnalyzerAddress>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNonExecutableInputPassThroughOperator *pFVar3;
  FAnyDataReference local_28;
  
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = Read;
  (**(code **)(*(longlong *)param_2 + 0x18))(param_2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  FNonExecutableInputOperatorBase::FNonExecutableInputOperatorBase
            ((FNonExecutableInputOperatorBase *)this,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<int> @ 14aeeda10

/* WARNING: Removing unreachable block (ram,0x00014aeedadd) */
/* WARNING: Removing unreachable block (ram,0x00014aeedb02) */

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<int>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<int> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNonExecutableInputPassThroughOperator *pFVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 1;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<float> @ 14aeedbd0

/* WARNING: Removing unreachable block (ram,0x00014aeedc9d) */
/* WARNING: Removing unreachable block (ram,0x00014aeedcc2) */

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<float>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<float> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNonExecutableInputPassThroughOperator *pFVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 1;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14aeede60

/* WARNING: Removing unreachable block (ram,0x00014aeedf2d) */
/* WARNING: Removing unreachable block (ram,0x00014aeedf52) */

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNonExecutableInputPassThroughOperator *pFVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 1;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14aeee0f0

/* WARNING: Removing unreachable block (ram,0x00014aeee1bd) */
/* WARNING: Removing unreachable block (ram,0x00014aeee1e2) */

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNonExecutableInputPassThroughOperator *pFVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 1;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14aeee380

/* WARNING: Removing unreachable block (ram,0x00014aeee44d) */
/* WARNING: Removing unreachable block (ram,0x00014aeee472) */

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNonExecutableInputPassThroughOperator *pFVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 1;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14aeee610

/* WARNING: Removing unreachable block (ram,0x00014aeee6dd) */
/* WARNING: Removing unreachable block (ram,0x00014aeee702) */

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNonExecutableInputPassThroughOperator *pFVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 1;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14aeee8a0

/* WARNING: Removing unreachable block (ram,0x00014aeee96d) */
/* WARNING: Removing unreachable block (ram,0x00014aeee992) */

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNonExecutableInputPassThroughOperator *pFVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 1;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14aeeeb30

/* WARNING: Removing unreachable block (ram,0x00014aeeebfd) */
/* WARNING: Removing unreachable block (ram,0x00014aeeec22) */

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNonExecutableInputPassThroughOperator *pFVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 1;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14aeeedc0

/* WARNING: Removing unreachable block (ram,0x00014aeeee8d) */
/* WARNING: Removing unreachable block (ram,0x00014aeeeeb2) */

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNonExecutableInputPassThroughOperator *pFVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 1;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::FAudioBuffer> @ 14aeeff80

/* WARNING: Removing unreachable block (ram,0x00014aef004d) */
/* WARNING: Removing unreachable block (ram,0x00014aef0072) */

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::FAudioBuffer>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::FAudioBuffer> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNonExecutableInputPassThroughOperator *pFVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 1;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<FMetasoundParameterStorageWrapper> @ 14aef0140

/* WARNING: Removing unreachable block (ram,0x00014aef020d) */
/* WARNING: Removing unreachable block (ram,0x00014aef0232) */

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<FMetasoundParameterStorageWrapper>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<FMetasoundParameterStorageWrapper> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNonExecutableInputPassThroughOperator *pFVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 1;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::FSendAddress> @ 14aef0300

/* WARNING: Removing unreachable block (ram,0x00014aef03cd) */
/* WARNING: Removing unreachable block (ram,0x00014aef03f2) */

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::FSendAddress>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNonExecutableInputPassThroughOperator *pFVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 1;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<FString> @ 14aef0440

/* WARNING: Removing unreachable block (ram,0x00014aef050d) */
/* WARNING: Removing unreachable block (ram,0x00014aef0532) */

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<FString>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<FString> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNonExecutableInputPassThroughOperator *pFVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 1;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::FTime> @ 14aef0600

/* WARNING: Removing unreachable block (ram,0x00014aef06cd) */
/* WARNING: Removing unreachable block (ram,0x00014aef06f2) */

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::FTime>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::FTime> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNonExecutableInputPassThroughOperator *pFVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 1;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<Metasound::FTrigger> @ 14aef0840

/* WARNING: Removing unreachable block (ram,0x00014aef090d) */
/* WARNING: Removing unreachable block (ram,0x00014aef0932) */

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<Metasound::FTrigger>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNonExecutableInputPassThroughOperator *pFVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 1;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

// FNonExecutableInputPassThroughOperator<bool> @ 14aef0aa0

/* WARNING: Removing unreachable block (ram,0x00014aef0b6d) */
/* WARNING: Removing unreachable block (ram,0x00014aef0b92) */

FNonExecutableInputPassThroughOperator * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputPassThroughOperator::
FNonExecutableInputPassThroughOperator<bool>
          (FNonExecutableInputPassThroughOperator *this,FName *param_1,
          TDataReadReference<bool> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNonExecutableInputPassThroughOperator *pFVar4;
  undefined8 in_R9;
  longlong *local_18 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x18))
            (param_2,local_18,param_2,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if ((local_18[0] == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)this =
       &___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  this->field_0x18 = 1;
  (**(code **)(*local_18[0] + 0x18))(local_18[0],&this->field_0x20);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x30e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNonExecutableInputPassThroughOperator *)(*pcVar1)();
    return pFVar4;
  }
  *(undefined ***)&this->field_0x10 = &___7FAnyDataReference_Metasound__6B_;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
  }
  *(undefined ***)this =
       &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
  return this;
}

