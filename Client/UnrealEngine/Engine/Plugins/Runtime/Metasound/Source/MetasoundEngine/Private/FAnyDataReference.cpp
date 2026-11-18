// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 38

// FAnyDataReference<WaveTable::FWaveTable> @ 14b303d60

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<WaveTable::FWaveTable>
          (FAnyDataReference *this,TDataReadReference<WaveTable::FWaveTable> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  
  this->AccessType = Read;
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&this->DataRefPtr);
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnyDataReference *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  return this;
}

// FAnyDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b303f60

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  
  this->AccessType = Read;
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&this->DataRefPtr);
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnyDataReference *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  return this;
}

// FAnyDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b304160

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  
  this->AccessType = Read;
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&this->DataRefPtr);
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnyDataReference *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  return this;
}

// FAnyDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b304360

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  
  this->AccessType = Read;
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&this->DataRefPtr);
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnyDataReference *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  return this;
}

// FAnyDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b304d90

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  
  this->AccessType = Read;
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&this->DataRefPtr);
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnyDataReference *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  return this;
}

// FAnyDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b304ec0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  
  this->AccessType = Read;
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&this->DataRefPtr);
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnyDataReference *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  return this;
}

// FAnyDataReference<Metasound::FAudioBusAsset> @ 14b305270

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<Metasound::FAudioBusAsset>
          (FAnyDataReference *this,TDataReadReference<Metasound::FAudioBusAsset> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  
  this->AccessType = Read;
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&this->DataRefPtr);
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnyDataReference *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  return this;
}

// FAnyDataReference<Metasound::FWaveAsset> @ 14b3053a0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<Metasound::FWaveAsset>
          (FAnyDataReference *this,TDataReadReference<Metasound::FWaveAsset> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  
  this->AccessType = Read;
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&this->DataRefPtr);
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnyDataReference *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  return this;
}

// FAnyDataReference<Metasound::FWaveTableBankAsset> @ 14b3054d0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<Metasound::FWaveTableBankAsset>
          (FAnyDataReference *this,TDataReadReference<Metasound::FWaveTableBankAsset> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  
  this->AccessType = Read;
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,&this->DataRefPtr);
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnyDataReference *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  return this;
}

// GetAs<Metasound::TDataReadReference<WaveTable::FWaveTable>_> @ 14b312860

TDataReadReference<WaveTable::FWaveTable> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataReadReference<WaveTable::FWaveTable>_>
          (FAnyDataReference *this,TDataReadReference<WaveTable::FWaveTable> *__return_storage_ptr__
          )

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<WaveTable::FWaveTable> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<WaveTable::FWaveTable> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2d5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<WaveTable::FWaveTable> *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (((EVar1 != Read) && (EVar1 != Write)) && (EVar1 != Value)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2e7,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<WaveTable::FWaveTable> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_UFWaveTable_WaveTable___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b312980

TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *
               )(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2d5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *
               )(*pcVar5)();
      return pTVar7;
    }
  }
  if (((EVar1 != Read) && (EVar1 != Write)) && (EVar1 != Value)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2e7,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *
               )(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b312aa0

TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2d5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  if (((EVar1 != Read) && (EVar1 != Write)) && (EVar1 != Value)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2e7,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b312bc0

TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2d5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (((EVar1 != Read) && (EVar1 != Write)) && (EVar1 != Value)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2e7,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_> @ 14b312ce0

TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *
__thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2d5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (((EVar1 != Read) && (EVar1 != Write)) && (EVar1 != Value)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2e7,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_> @ 14b312e00

TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *
__thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2d5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (((EVar1 != Read) && (EVar1 != Write)) && (EVar1 != Value)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2e7,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_> @ 14b312f20

TDataReadReference<Metasound::FAudioBusAsset> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::FAudioBusAsset> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::FAudioBusAsset> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FAudioBusAsset> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2d5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FAudioBusAsset> *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (((EVar1 != Read) && (EVar1 != Write)) && (EVar1 != Value)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2e7,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FAudioBusAsset> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::FWaveAsset>_> @ 14b313040

TDataReadReference<Metasound::FWaveAsset> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FWaveAsset>_>
          (FAnyDataReference *this,TDataReadReference<Metasound::FWaveAsset> *__return_storage_ptr__
          )

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::FWaveAsset> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FWaveAsset> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2d5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FWaveAsset> *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (((EVar1 != Read) && (EVar1 != Write)) && (EVar1 != Value)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2e7,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FWaveAsset> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_> @ 14b313160

TDataReadReference<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::FWaveTableBankAsset> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::FWaveTableBankAsset> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FWaveTableBankAsset> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2d5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FWaveTableBankAsset> *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (((EVar1 != Read) && (EVar1 != Write)) && (EVar1 != Value)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2e7,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FWaveTableBankAsset> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<WaveTable::FWaveTable>_> @ 14b313280

TDataValueReference<WaveTable::FWaveTable> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataValueReference<WaveTable::FWaveTable>_>
          (FAnyDataReference *this,
          TDataValueReference<WaveTable::FWaveTable> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<WaveTable::FWaveTable> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<WaveTable::FWaveTable> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<WaveTable::FWaveTable>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<WaveTable::FWaveTable> *)(*pcVar4)();
    return pTVar6;
  }
  if (EVar1 != Value) {
    ::LexToString(&local_18,Value);
    ::LexToString(&local_28,EVar1);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Value== InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2f5,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TDataValueReference<WaveTable::FWaveTable> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_UFWaveTable_WaveTable___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_UFWaveTable_WaveTable___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b3133f0

TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                    (pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  if (EVar1 != Value) {
    ::LexToString(&local_18,Value);
    ::LexToString(&local_28,EVar1);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Value== InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2f5,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b313560

TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  if (EVar1 != Value) {
    ::LexToString(&local_18,Value);
    ::LexToString(&local_28,EVar1);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Value== InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2f5,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b3136d0

TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                    (pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              *)(*pcVar4)();
    return pTVar6;
  }
  if (EVar1 != Value) {
    ::LexToString(&local_18,Value);
    ::LexToString(&local_28,EVar1);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Value== InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2f5,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_> @ 14b313840

TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *
__thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar6
  ;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
              *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                    (pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
              *)(*pcVar4)();
    return pTVar6;
  }
  if (EVar1 != Value) {
    ::LexToString(&local_18,Value);
    ::LexToString(&local_28,EVar1);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Value== InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2f5,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_> @ 14b3139b0

TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *
__thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
              *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                    (pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
              *)(*pcVar4)();
    return pTVar6;
  }
  if (EVar1 != Value) {
    ::LexToString(&local_18,Value);
    ::LexToString(&local_28,EVar1);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Value== InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2f5,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::FAudioBusAsset>_> @ 14b313b20

TDataValueReference<Metasound::FAudioBusAsset> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataValueReference<Metasound::FAudioBusAsset>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::FAudioBusAsset> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::FAudioBusAsset> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::FAudioBusAsset> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::FAudioBusAsset>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::FAudioBusAsset> *)(*pcVar4)();
    return pTVar6;
  }
  if (EVar1 != Value) {
    ::LexToString(&local_18,Value);
    ::LexToString(&local_28,EVar1);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Value== InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2f5,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TDataValueReference<Metasound::FAudioBusAsset> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::FWaveAsset>_> @ 14b313c90

TDataValueReference<Metasound::FWaveAsset> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataValueReference<Metasound::FWaveAsset>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::FWaveAsset> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::FWaveAsset> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::FWaveAsset> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::FWaveAsset>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::FWaveAsset> *)(*pcVar4)();
    return pTVar6;
  }
  if (EVar1 != Value) {
    ::LexToString(&local_18,Value);
    ::LexToString(&local_28,EVar1);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Value== InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2f5,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TDataValueReference<Metasound::FWaveAsset> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_VFWaveAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::FWaveTableBankAsset>_> @ 14b313e00

TDataValueReference<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataValueReference<Metasound::FWaveTableBankAsset>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::FWaveTableBankAsset> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::FWaveTableBankAsset> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::FWaveTableBankAsset> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::FWaveTableBankAsset>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::FWaveTableBankAsset> *)(*pcVar4)();
    return pTVar6;
  }
  if (EVar1 != Value) {
    ::LexToString(&local_18,Value);
    ::LexToString(&local_28,EVar1);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Value== InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2f5,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TDataValueReference<Metasound::FWaveTableBankAsset> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<WaveTable::FWaveTable>_> @ 14b313f70

TDataWriteReference<WaveTable::FWaveTable> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataWriteReference<WaveTable::FWaveTable>_>
          (FAnyDataReference *this,
          TDataWriteReference<WaveTable::FWaveTable> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<WaveTable::FWaveTable> *pTVar7;
  FName *pFVar8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar7 = (TDataWriteReference<WaveTable::FWaveTable> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<WaveTable::FWaveTable>();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x301,
                       L"Attempt to get data reference with underlying type \"%s\" when actual underlying type is \"%s\"."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataWriteReference<WaveTable::FWaveTable> *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (EVar1 != Write) {
    ::LexToString(&local_18,Write);
    ::LexToString(&local_28,EVar1);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Write == InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x303,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataWriteReference<WaveTable::FWaveTable> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_UFWaveTable_WaveTable___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_UFWaveTable_WaveTable___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b314140

TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FName *pFVar8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar7 = (TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x301,
                       L"Attempt to get data reference with underlying type \"%s\" when actual underlying type is \"%s\"."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (EVar1 != Write) {
    ::LexToString(&local_18,Write);
    ::LexToString(&local_28,EVar1);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Write == InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x303,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b314310

TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FName *pFVar8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar7 = (TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x301,
                       L"Attempt to get data reference with underlying type \"%s\" when actual underlying type is \"%s\"."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  if (EVar1 != Write) {
    ::LexToString(&local_18,Write);
    ::LexToString(&local_28,EVar1);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Write == InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x303,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b3144e0

TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FName *pFVar8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar7 = (TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              ();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x301,
                       L"Attempt to get data reference with underlying type \"%s\" when actual underlying type is \"%s\"."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (EVar1 != Write) {
    ::LexToString(&local_18,Write);
    ::LexToString(&local_28,EVar1);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Write == InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x303,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_> @ 14b3146b0

TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *
__thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar7
  ;
  FName *pFVar8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar7 = (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
              *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
              ();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x301,
                       L"Attempt to get data reference with underlying type \"%s\" when actual underlying type is \"%s\"."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (EVar1 != Write) {
    ::LexToString(&local_18,Write);
    ::LexToString(&local_28,EVar1);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Write == InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x303,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_> @ 14b314880

TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *
__thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar7;
  FName *pFVar8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar7 = (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
              *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
              ();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x301,
                       L"Attempt to get data reference with underlying type \"%s\" when actual underlying type is \"%s\"."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (EVar1 != Write) {
    ::LexToString(&local_18,Write);
    ::LexToString(&local_28,EVar1);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Write == InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x303,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::FAudioBusAsset>_> @ 14b314a50

TDataWriteReference<Metasound::FAudioBusAsset> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataWriteReference<Metasound::FAudioBusAsset>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::FAudioBusAsset> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::FAudioBusAsset> *pTVar7;
  FName *pFVar8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar7 = (TDataWriteReference<Metasound::FAudioBusAsset> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::FAudioBusAsset>();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x301,
                       L"Attempt to get data reference with underlying type \"%s\" when actual underlying type is \"%s\"."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataWriteReference<Metasound::FAudioBusAsset> *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (EVar1 != Write) {
    ::LexToString(&local_18,Write);
    ::LexToString(&local_28,EVar1);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Write == InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x303,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataWriteReference<Metasound::FAudioBusAsset> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::FWaveAsset>_> @ 14b314c20

TDataWriteReference<Metasound::FWaveAsset> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataWriteReference<Metasound::FWaveAsset>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::FWaveAsset> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::FWaveAsset> *pTVar7;
  FName *pFVar8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar7 = (TDataWriteReference<Metasound::FWaveAsset> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::FWaveAsset>();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x301,
                       L"Attempt to get data reference with underlying type \"%s\" when actual underlying type is \"%s\"."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataWriteReference<Metasound::FWaveAsset> *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (EVar1 != Write) {
    ::LexToString(&local_18,Write);
    ::LexToString(&local_28,EVar1);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Write == InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x303,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataWriteReference<Metasound::FWaveAsset> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFWaveAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::FWaveTableBankAsset>_> @ 14b314df0

TDataWriteReference<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataWriteReference<Metasound::FWaveTableBankAsset>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::FWaveTableBankAsset> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::FWaveTableBankAsset> *pTVar7;
  FName *pFVar8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar7 = (TDataWriteReference<Metasound::FWaveTableBankAsset> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::FWaveTableBankAsset>();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x301,
                       L"Attempt to get data reference with underlying type \"%s\" when actual underlying type is \"%s\"."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataWriteReference<Metasound::FWaveTableBankAsset> *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (EVar1 != Write) {
    ::LexToString(&local_18,Write);
    ::LexToString(&local_28,EVar1);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Write == InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x303,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataWriteReference<Metasound::FWaveTableBankAsset> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<bool> @ 14b314fc0

bool __thiscall Metasound::FAnyDataReference::GetAs<bool>(FAnyDataReference *this)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FName *pFVar6;
  void *pvVar7;
  IDataReference IVar8;
  int *piVar9;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar9 < `bool___cdecl_Metasound::IsDataReferenceOfType<bool>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<bool>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<bool>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar6 = GetMetasoundDataTypeName<bool>();
      `bool___cdecl_Metasound::IsDataReferenceOfType<bool>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeName = *pFVar6;
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<bool>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar9 < `bool___cdecl_Metasound::IsDataReferenceOfType<bool>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<bool>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<bool>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `bool___cdecl_Metasound::IsDataReferenceOfType<bool>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeId = TDataReferenceTypeInfo<bool>::GetTypeId();
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<bool>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  pFVar6 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar4 = *pFVar6 !=
          `bool___cdecl_Metasound::IsDataReferenceOfType<bool>(Metasound::IDataReference_const&___ptr64)'
          ::__l2::TypeName;
  pvVar7 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  if ((bVar4) ||
     (pvVar7 != `bool___cdecl_Metasound::IsDataReferenceOfType<bool>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::TypeId)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsDataReferenceOfType<DataType>(InRef)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2af,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (((EVar1 == Read) || (EVar1 == Write)) || (EVar1 == Value)) {
    IVar8 = pIVar2[1];
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2c5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    IVar8 = (IDataReference)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
  }
  if (IVar8 == (IDataReference)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InData != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2a4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return (bool)*(undefined1 *)IVar8;
}

// GetDataReadReference<FString> @ 14b315730

TDataReadReference<FString> * __thiscall
Metasound::FAnyDataReference::GetDataReadReference<FString>
          (FAnyDataReference *this,TDataReadReference<FString> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<FString> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<FString> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<FString>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2d5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<FString> *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (((EVar1 != Read) && (EVar1 != Write)) && (EVar1 != Value)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2e7,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<FString> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_VFString___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReadReference_VFString___Metasound__6B_;
  return __return_storage_ptr__;
}

