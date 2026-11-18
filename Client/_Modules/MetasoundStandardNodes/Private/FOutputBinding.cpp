// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 21

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_> @ 14afecb90

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::
  FAnyDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_> @ 14afecc30

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::FMonoAudioFormat>_> @ 14afeccd0

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::FMonoAudioFormat>_>
          (FOutputBinding *this,TDataReadReference<Metasound::FMonoAudioFormat> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference<Metasound::FMonoAudioFormat>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::FStereoAudioFormat>_> @ 14afecd70

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::FStereoAudioFormat>_>
          (FOutputBinding *this,TDataReadReference<Metasound::FStereoAudioFormat> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference<Metasound::FStereoAudioFormat>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_> @ 14b04c790

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_> @ 14b0a9fc0

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_> @ 14b0aa060

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_> @ 14b0aa100

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_> @ 14b0aa1a0

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::
  FAnyDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_> @ 14b12bf20

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_> @ 14b12bfc0

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_> @ 14b12c060

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_> @ 14b12c100

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_> @ 14b12c1a0

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_> @ 14b12c240

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_> @ 14b12c2e0

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_> @ 14b1c84b0

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_> @ 14b1c8550

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_> @ 14b228720

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_> @ 14b2287c0

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_> @ 14b228860

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

