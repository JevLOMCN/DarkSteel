// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 84

// FAnyDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14afe0d10

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *param_1)

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

// FAnyDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14afe0e40

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *param_1)

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

// FAnyDataReference<Metasound::FMonoAudioFormat> @ 14afe1320

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<Metasound::FMonoAudioFormat>
          (FAnyDataReference *this,TDataReadReference<Metasound::FMonoAudioFormat> *param_1)

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

// FAnyDataReference<Metasound::FStereoAudioFormat> @ 14afe13a0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<Metasound::FStereoAudioFormat>
          (FAnyDataReference *this,TDataReadReference<Metasound::FStereoAudioFormat> *param_1)

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

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_> @ 14afe41d0

TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>()
  ;
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_> @ 14afe42f0

TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::FMonoAudioFormat>_> @ 14afe4410

TDataReadReference<Metasound::FMonoAudioFormat> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FMonoAudioFormat>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::FMonoAudioFormat> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::FMonoAudioFormat> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FMonoAudioFormat> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
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
      pTVar7 = (TDataReadReference<Metasound::FMonoAudioFormat> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<Metasound::FMonoAudioFormat> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::FStereoAudioFormat>_> @ 14afe4530

TDataReadReference<Metasound::FStereoAudioFormat> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FStereoAudioFormat>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::FStereoAudioFormat> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::FStereoAudioFormat> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FStereoAudioFormat> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
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
      pTVar7 = (TDataReadReference<Metasound::FStereoAudioFormat> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<Metasound::FStereoAudioFormat> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_> @ 14afe4650

TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                    (pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_> @ 14afe47c0

TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_> @ 14afe4930

TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
             (*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>()
  ;
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_> @ 14afe4b00

TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// FAnyDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b045540

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *param_1)

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

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_> @ 14b0464b0

TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *__return_storage_ptr__
          )

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_> @ 14b0465d0

TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_> @ 14b0466f0

TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_> @ 14b046860

TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::FTime> @ 14b046a30

FTime __thiscall Metasound::FAnyDataReference::GetAs<Metasound::FTime>(FAnyDataReference *this)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FTime FVar6;
  FName *pFVar7;
  void *pvVar8;
  IDataReference IVar9;
  undefined8 *in_RDX;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      FVar6.Time = (double)(*pcVar4)();
      return (FTime)FVar6.Time;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar3 + 0x9d4c) <
      `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTime>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTime>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTime>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar7 = GetMetasoundDataTypeName<Metasound::FTime>();
      `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTime>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeName = *pFVar7;
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTime>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*(int *)(lVar3 + 0x9d4c) <
      `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTime>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTime>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTime>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTime>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeId = TDataReferenceTypeInfo<Metasound::FTime>::GetTypeId();
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTime>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  pFVar7 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar5 = *pFVar7 !=
          `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTime>(Metasound::IDataReference_const&___ptr64)'
          ::__l2::TypeName;
  pvVar8 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  if ((bVar5) ||
     (pvVar8 != `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTime>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::TypeId)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsDataReferenceOfType<DataType>(InRef)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2af,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      FVar6.Time = (double)(*pcVar4)();
      return (FTime)FVar6.Time;
    }
  }
  if (((EVar1 == Read) || (EVar1 == Write)) || (EVar1 == Value)) {
    IVar9 = pIVar2[1];
  }
  else {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2c5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      FVar6.Time = (double)(*pcVar4)();
      return (FTime)FVar6.Time;
    }
    IVar9 = (IDataReference)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
  }
  if (IVar9 == (IDataReference)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InData != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2a4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      FVar6.Time = (double)(*pcVar4)();
      return (FTime)FVar6.Time;
    }
  }
  *in_RDX = *(undefined8 *)IVar9;
  return (FTime)(double)in_RDX;
}

// FAnyDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b09b9b0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *param_1)

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

// FAnyDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b09bae0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *param_1)

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

// FAnyDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b09bc10

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *param_1)

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

// FAnyDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b09bd40

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *param_1)

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

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_> @ 14b09f510

TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_> @ 14b09f630

TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_> @ 14b09f750

TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_> @ 14b09f870

TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_> @ 14b09f9e0

TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar4)()
      ;
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_> @ 14b09fb50

TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_> @ 14b09fcc0

TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                    (pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_> @ 14b09fe30

TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_> @ 14b0a0000

TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar5)()
      ;
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar5)()
      ;
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_> @ 14b0a01d0

TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_> @ 14b0a03a0

TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
             (*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                     ();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// FAnyDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b117b90

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *param_1)

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

// FAnyDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b117cc0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *param_1)

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

// FAnyDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b117df0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *param_1)

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

// FAnyDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b117f20

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *param_1)

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

// FAnyDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b118050

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *param_1)

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

// FAnyDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b118180

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *param_1)

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

// FAnyDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b1182b0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *param_1)

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

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_> @ 14b11d490

TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_> @ 14b11d5b0

TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_> @ 14b11d6d0

TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar5)()
      ;
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar5)()
      ;
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar5)()
      ;
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_> @ 14b11d7f0

TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_> @ 14b11d910

TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_> @ 14b11da30

TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_> @ 14b11db50

TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_> @ 14b11dc70

TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar4)()
      ;
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_> @ 14b11dde0

TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_> @ 14b11df50

TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
               (*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_> @ 14b11e0c0

TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)(*pcVar4)()
    ;
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)(*pcVar4)()
    ;
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_> @ 14b11e230

TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_> @ 14b11e3a0

TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                    (pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_> @ 14b11e510

TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_> @ 14b11e680

TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar5)()
      ;
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar5)()
      ;
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_> @ 14b11e850

TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_> @ 14b11ea20

TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_> @ 14b11ebf0

TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)(*pcVar5)()
    ;
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_> @ 14b11edc0

TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
             (*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_> @ 14b11ef90

TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
             (*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_> @ 14b11f160

TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// FAnyDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1bcbe0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *param_1)

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

// FAnyDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1bcd10

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *param_1)

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

// GetAs<int> @ 14b1c2a60

int __thiscall Metasound::FAnyDataReference::GetAs<int>(FAnyDataReference *this)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
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
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar9 < `bool___cdecl_Metasound::IsDataReferenceOfType<int>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<int>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<int>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar6 = GetMetasoundDataTypeName<int>();
      `bool___cdecl_Metasound::IsDataReferenceOfType<int>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeName = *pFVar6;
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<int>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar9 < `bool___cdecl_Metasound::IsDataReferenceOfType<int>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<int>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<int>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `bool___cdecl_Metasound::IsDataReferenceOfType<int>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeId = TDataReferenceTypeInfo<int>::GetTypeId();
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<int>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  pFVar6 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar4 = *pFVar6 !=
          `bool___cdecl_Metasound::IsDataReferenceOfType<int>(Metasound::IDataReference_const&___ptr64)'
          ::__l2::TypeName;
  pvVar7 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  if ((bVar4) ||
     (pvVar7 != `bool___cdecl_Metasound::IsDataReferenceOfType<int>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::TypeId)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsDataReferenceOfType<DataType>(InRef)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2af,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
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
      iVar5 = (*pcVar3)();
      return iVar5;
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
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  return *(int *)IVar8;
}

// GetAs<float> @ 14b1c2c30

float __thiscall Metasound::FAnyDataReference::GetAs<float>(FAnyDataReference *this)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  void *pvVar7;
  IDataReference IVar8;
  float fVar9;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar9 = (float)(*pcVar4)();
      return fVar9;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar3 + 0x9d4c) <
      `bool___cdecl_Metasound::IsDataReferenceOfType<float>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<float>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<float>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar6 = GetMetasoundDataTypeName<float>();
      `bool___cdecl_Metasound::IsDataReferenceOfType<float>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeName = *pFVar6;
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<float>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*(int *)(lVar3 + 0x9d4c) <
      `bool___cdecl_Metasound::IsDataReferenceOfType<float>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<float>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<float>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `bool___cdecl_Metasound::IsDataReferenceOfType<float>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeId = TDataReferenceTypeInfo<float>::GetTypeId();
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<float>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  pFVar6 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar5 = *pFVar6 !=
          `bool___cdecl_Metasound::IsDataReferenceOfType<float>(Metasound::IDataReference_const&___ptr64)'
          ::__l2::TypeName;
  pvVar7 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  if ((bVar5) ||
     (pvVar7 != `bool___cdecl_Metasound::IsDataReferenceOfType<float>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::TypeId)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsDataReferenceOfType<DataType>(InRef)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2af,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar9 = (float)(*pcVar4)();
      return fVar9;
    }
  }
  if (((EVar1 == Read) || (EVar1 == Write)) || (EVar1 == Value)) {
    IVar8 = pIVar2[1];
  }
  else {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2c5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar9 = (float)(*pcVar4)();
      return fVar9;
    }
    IVar8 = (IDataReference)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
  }
  if (IVar8 == (IDataReference)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InData != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2a4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar9 = (float)(*pcVar4)();
      return fVar9;
    }
  }
  return *(float *)IVar8;
}

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_> @ 14b1c2e10

TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_> @ 14b1c2f30

TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_> @ 14b1c3050

TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_> @ 14b1c31c0

TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_> @ 14b1c3330

TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_> @ 14b1c3500

TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b1c36d0

TEnum<Metasound::ELfoWaveshapeType,0> __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
          (FAnyDataReference *this)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  ELfoWaveshapeType EVar5;
  FName *pFVar6;
  void *pvVar7;
  IDataReference IVar8;
  undefined4 *in_RDX;
  int *piVar9;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return (TEnum<Metasound::ELfoWaveshapeType,0>)EVar5;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar9 < `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
      `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeName = *pFVar6;
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar9 < `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeId =
           TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::GetTypeId
                     ();
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  pFVar6 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar4 = *pFVar6 !=
          `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(Metasound::IDataReference_const&___ptr64)'
          ::__l2::TypeName;
  pvVar7 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  if ((bVar4) ||
     (pvVar7 != `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::TypeId)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsDataReferenceOfType<DataType>(InRef)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2af,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return (TEnum<Metasound::ELfoWaveshapeType,0>)EVar5;
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
      EVar5 = (*pcVar3)();
      return (TEnum<Metasound::ELfoWaveshapeType,0>)EVar5;
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
      EVar5 = (*pcVar3)();
      return (TEnum<Metasound::ELfoWaveshapeType,0>)EVar5;
    }
  }
  *in_RDX = *(undefined4 *)IVar8;
  return (TEnum<Metasound::ELfoWaveshapeType,0>)(ELfoWaveshapeType)in_RDX;
}

// FAnyDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b2182a0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *param_1)

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

// FAnyDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b2183d0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *param_1)

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

// FAnyDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b218500

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *param_1)

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

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_> @ 14b21bfd0

TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar5)()
      ;
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar5)()
      ;
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar5)()
      ;
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_> @ 14b21c0f0

TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_> @ 14b21c210

TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_> @ 14b21c330

TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
               (*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_> @ 14b21c4a0

TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>(pIVar2)
  ;
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_> @ 14b21c610

TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_> @ 14b21c780

TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_> @ 14b21c950

TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
             (*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_> @ 14b21cb20

TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

