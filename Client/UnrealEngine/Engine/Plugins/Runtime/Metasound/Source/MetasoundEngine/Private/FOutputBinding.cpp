// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 9

// Set<Metasound::TDataReadReference<WaveTable::FWaveTable>_> @ 14b334400

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<WaveTable::FWaveTable>_>
          (FOutputBinding *this,TDataReadReference<WaveTable::FWaveTable> *param_1)

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
  FAnyDataReference::FAnyDataReference<WaveTable::FWaveTable>(&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b3344a0

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
          (FOutputBinding *this,
          TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          *param_1)

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
  FAnyDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b334540

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
          (FOutputBinding *this,
          TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *param_1)

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
  FAnyDataReference::FAnyDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b3345e0

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
          (FOutputBinding *this,
          TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          *param_1)

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
  FAnyDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_> @ 14b334680

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          *param_1)

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
  FAnyDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_> @ 14b334720

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          *param_1)

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
  FAnyDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_> @ 14b3347c0

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>
          (FOutputBinding *this,TDataReadReference<Metasound::FAudioBusAsset> *param_1)

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
  FAnyDataReference::FAnyDataReference<Metasound::FAudioBusAsset>(&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::FWaveAsset>_> @ 14b334860

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::FWaveAsset>_>
          (FOutputBinding *this,TDataReadReference<Metasound::FWaveAsset> *param_1)

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
  FAnyDataReference::FAnyDataReference<Metasound::FWaveAsset>(&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_> @ 14b334900

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>
          (FOutputBinding *this,TDataReadReference<Metasound::FWaveTableBankAsset> *param_1)

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
  FAnyDataReference::FAnyDataReference<Metasound::FWaveTableBankAsset>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

