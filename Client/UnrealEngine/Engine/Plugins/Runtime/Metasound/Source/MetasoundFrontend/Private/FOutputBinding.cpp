// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 19

// Set<Metasound::TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_> @ 14ad90090

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
          (FOutputBinding *this,
          TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
  FAnyDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_> @ 14ad90130

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
          (FOutputBinding *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *param_1)

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
  FAnyDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::Frontend::FAnalyzerAddress>_> @ 14ad901d0

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::Frontend::FAnalyzerAddress>_>
          (FOutputBinding *this,TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *param_1)

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
  FAnyDataReference::FAnyDataReference<Metasound::Frontend::FAnalyzerAddress>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<int>_> @ 14af21ac0

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::Set<Metasound::TDataReadReference<int>_>
          (FOutputBinding *this,TDataReadReference<int> *param_1)

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
  FAnyDataReference::FAnyDataReference<int>(&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<float>_> @ 14af21b60

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::Set<Metasound::TDataReadReference<float>_>
          (FOutputBinding *this,TDataReadReference<float> *param_1)

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
  FAnyDataReference::FAnyDataReference<float>(&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>_> @ 14af21c00

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          (FOutputBinding *this,
          TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *param_1)

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
  FAnyDataReference::FAnyDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_> @ 14af21ca0

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          (FOutputBinding *this,
          TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *param_1)

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
  FAnyDataReference::FAnyDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_> @ 14af21d40

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
          (FOutputBinding *this,
          TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
  FAnyDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_> @ 14af21de0

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
          (FOutputBinding *this,
          TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *param_1)

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
  FAnyDataReference::FAnyDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_> @ 14af21e80

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          (FOutputBinding *this,
          TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *param_1)

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
  FAnyDataReference::FAnyDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_> @ 14af21f20

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
          (FOutputBinding *this,
          TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *param_1)

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
  FAnyDataReference::FAnyDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_> @ 14af21fc0

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          (FOutputBinding *this,
          TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *param_1)

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
  FAnyDataReference::FAnyDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::FAudioBuffer>_> @ 14af22060

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
          (FOutputBinding *this,TDataReadReference<Metasound::FAudioBuffer> *param_1)

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
  FAnyDataReference::FAnyDataReference<Metasound::FAudioBuffer>(&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<FMetasoundParameterStorageWrapper>_> @ 14af22100

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<FMetasoundParameterStorageWrapper>_>
          (FOutputBinding *this,TDataReadReference<FMetasoundParameterStorageWrapper> *param_1)

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
  FAnyDataReference::FAnyDataReference<FMetasoundParameterStorageWrapper>
            (&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::FSendAddress>_> @ 14af221a0

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::FSendAddress>_>
          (FOutputBinding *this,TDataReadReference<Metasound::FSendAddress> *param_1)

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
  FAnyDataReference::FAnyDataReference<Metasound::FSendAddress>(&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<FString>_> @ 14af22240

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::Set<Metasound::TDataReadReference<FString>_>
          (FOutputBinding *this,TDataReadReference<FString> *param_1)

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
  FAnyDataReference::FAnyDataReference<FString>(&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::FTime>_> @ 14af222e0

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::Set<Metasound::TDataReadReference<Metasound::FTime>_>
          (FOutputBinding *this,TDataReadReference<Metasound::FTime> *param_1)

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
  FAnyDataReference::FAnyDataReference<Metasound::FTime>(&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<Metasound::FTrigger>_> @ 14af22380

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::
Set<Metasound::TDataReadReference<Metasound::FTrigger>_>
          (FOutputBinding *this,TDataReadReference<Metasound::FTrigger> *param_1)

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
  FAnyDataReference::FAnyDataReference<Metasound::FTrigger>(&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// Set<Metasound::TDataReadReference<bool>_> @ 14af22420

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::Set<Metasound::TDataReadReference<bool>_>
          (FOutputBinding *this,TDataReadReference<bool> *param_1)

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
  FAnyDataReference::FAnyDataReference<bool>(&(this->Data).TypedValue,param_1);
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

