// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 75

// FAnyDataReference<int> @ 14ad80830

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<int>
          (FAnyDataReference *this,TDataReadReference<int> *param_1)

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

// FAnyDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad80980

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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

// FAnyDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad80db0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *param_1)

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

// FAnyDataReference<Metasound::Frontend::FAnalyzerAddress> @ 14ad80ee0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<Metasound::Frontend::FAnalyzerAddress>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *param_1)

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

// FAnyDataReference<FString> @ 14ad81010

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<FString>
          (FAnyDataReference *this,TDataReadReference<FString> *param_1)

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

// GetAs<Metasound::TDataReadReference<int>_> @ 14ad86800

TDataReadReference<int> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataReadReference<int>_>
          (FAnyDataReference *this,TDataReadReference<int> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<int> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<int> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<int>();
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
      pTVar7 = (TDataReadReference<int> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<int> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_H_Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReadReference_H_Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_> @ 14ad86920

TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
      pTVar7 = (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
      pTVar7 = (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_> @ 14ad86a40

TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>()
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
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
      pTVar7 = (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::Frontend::FAnalyzerAddress>_> @ 14ad86b60

TDataReadReference<Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<Metasound::Frontend::FAnalyzerAddress>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
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
      pTVar7 = (TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::FSendAddress>_> @ 14ad86c80

TDataReadReference<Metasound::FSendAddress> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FSendAddress>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::FSendAddress> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::FSendAddress> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FSendAddress> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
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
      pTVar7 = (TDataReadReference<Metasound::FSendAddress> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<Metasound::FSendAddress> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<FString>_> @ 14ad86da0

TDataReadReference<FString> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataReadReference<FString>_>
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

// GetAs<Metasound::TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_> @ 14ad86ec0

TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
              *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                    (pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
      pTVar6 = (TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_> @ 14ad87030

TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                    (pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
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
      pTVar6 = (TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_> @ 14ad871a0

TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
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
    pTVar7 = (TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
              *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                     ();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
      pTVar7 = (TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
      pTVar7 = (TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_> @ 14ad87370

TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
             (*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>()
  ;
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>();
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
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
      pTVar7 = (TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::Frontend::FAnalyzerAddress>_> @ 14ad87540

TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<Metasound::Frontend::FAnalyzerAddress>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::Frontend::FAnalyzerAddress>();
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
      pTVar7 = (TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// FAnyDataReference<float> @ 14aeedb50

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<float>
          (FAnyDataReference *this,TDataReadReference<float> *param_1)

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

// FAnyDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14aeedde0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *param_1)

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

// FAnyDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14aeee070

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *param_1)

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

// FAnyDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14aeee300

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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

// FAnyDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14aeee590

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *param_1)

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

// FAnyDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14aeee820

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *param_1)

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

// FAnyDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14aeeeab0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::
FAnyDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *param_1)

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

// FAnyDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14aeeed40

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *param_1)

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

// FAnyDataReference<Metasound::FAudioBuffer> @ 14aeeff00

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<Metasound::FAudioBuffer>
          (FAnyDataReference *this,TDataReadReference<Metasound::FAudioBuffer> *param_1)

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

// FAnyDataReference<FMetasoundParameterStorageWrapper> @ 14aef00c0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<FMetasoundParameterStorageWrapper>
          (FAnyDataReference *this,TDataReadReference<FMetasoundParameterStorageWrapper> *param_1)

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

// FAnyDataReference<Metasound::FSendAddress> @ 14aef0280

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<Metasound::FSendAddress>
          (FAnyDataReference *this,TDataReadReference<Metasound::FSendAddress> *param_1)

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

// FAnyDataReference<Metasound::FTime> @ 14aef0580

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<Metasound::FTime>
          (FAnyDataReference *this,TDataReadReference<Metasound::FTime> *param_1)

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

// FAnyDataReference<Metasound::FTrigger> @ 14aef0740

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<Metasound::FTrigger>
          (FAnyDataReference *this,TDataReadReference<Metasound::FTrigger> *param_1)

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

// FAnyDataReference<Metasound::FTrigger> @ 14aef07c0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<Metasound::FTrigger>
          (FAnyDataReference *this,TDataWriteReference<Metasound::FTrigger> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  
  this->AccessType = Write;
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

// FAnyDataReference<bool> @ 14aef0a20

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<bool>
          (FAnyDataReference *this,TDataReadReference<bool> *param_1)

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

// GetAs<Metasound::TDataReadReference<float>_> @ 14aefe370

TDataReadReference<float> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
          (FAnyDataReference *this,TDataReadReference<float> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<float> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<float> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<float>();
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
      pTVar7 = (TDataReadReference<float> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<float> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_M_Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReadReference_M_Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>_> @ 14aefe490

TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
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
      pTVar7 = (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_> @ 14aefe5b0

TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
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
      pTVar7 = (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_> @ 14aefe6d0

TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar7
  ;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
      pTVar7 = (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
      pTVar7 = (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_> @ 14aefe7f0

TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>();
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
      pTVar7 = (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
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
      pTVar7 = (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_> @ 14aefe910

TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
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
      pTVar7 = (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_> @ 14aefea30

TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
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
      pTVar7 = (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
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
      pTVar7 = (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_> @ 14aefeb50

TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
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
      pTVar7 = (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<FMetasoundParameterStorageWrapper>_> @ 14aefec70

TDataReadReference<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataReadReference<FMetasoundParameterStorageWrapper>_>
          (FAnyDataReference *this,
          TDataReadReference<FMetasoundParameterStorageWrapper> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<FMetasoundParameterStorageWrapper> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<FMetasoundParameterStorageWrapper> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
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
      pTVar7 = (TDataReadReference<FMetasoundParameterStorageWrapper> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<FMetasoundParameterStorageWrapper> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::FTime>_> @ 14aefed90

TDataReadReference<Metasound::FTime> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTime>_>
          (FAnyDataReference *this,TDataReadReference<Metasound::FTime> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::FTime> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FTime> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::FTime>();
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
      pTVar7 = (TDataReadReference<Metasound::FTime> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<Metasound::FTime> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_> @ 14aefeeb0

TDataReadReference<Metasound::FTrigger> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
          (FAnyDataReference *this,TDataReadReference<Metasound::FTrigger> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::FTrigger> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FTrigger> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::FTrigger>();
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
      pTVar7 = (TDataReadReference<Metasound::FTrigger> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<Metasound::FTrigger> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataReadReference<bool>_> @ 14aefefd0

TDataReadReference<bool> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataReadReference<bool>_>
          (FAnyDataReference *this,TDataReadReference<bool> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<bool> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<bool> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<bool>();
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
      pTVar7 = (TDataReadReference<bool> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<bool> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference__N_Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReadReference__N_Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<int>_> @ 14aeff0f0

TDataValueReference<int> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataValueReference<int>_>
          (FAnyDataReference *this,TDataValueReference<int> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<int> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<int> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<int>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<int> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_H_Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataValueReference_H_Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<float>_> @ 14aeff260

TDataValueReference<float> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataValueReference<float>_>
          (FAnyDataReference *this,TDataValueReference<float> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<float> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<float> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<float>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<float> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<float> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_M_Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataValueReference_M_Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_>_> @ 14aeff3d0

TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<TArray<int,TSizedDefaultAllocator<32>_>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_>_> @ 14aeff540

TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<TArray<float,TSizedDefaultAllocator<32>_>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_> @ 14aeff6b0

TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                    (pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
      pTVar6 = (TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_> @ 14aeff820

TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                    (pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
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
      pTVar6 = (TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_> @ 14aeff990

TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<TArray<FString,TSizedDefaultAllocator<32>_>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_> @ 14aeffb00

TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
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
      pTVar6 = (TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_> @ 14aeffc70

TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<TArray<bool,TSizedDefaultAllocator<32>_>_>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<FMetasoundParameterStorageWrapper>_> @ 14aeffde0

TDataValueReference<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataValueReference<FMetasoundParameterStorageWrapper>_>
          (FAnyDataReference *this,
          TDataValueReference<FMetasoundParameterStorageWrapper> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<FMetasoundParameterStorageWrapper> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<FMetasoundParameterStorageWrapper> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<FMetasoundParameterStorageWrapper>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<FMetasoundParameterStorageWrapper> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<FMetasoundParameterStorageWrapper> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::FSendAddress>_> @ 14aefff50

TDataValueReference<Metasound::FSendAddress> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataValueReference<Metasound::FSendAddress>_>
          (FAnyDataReference *this,
          TDataValueReference<Metasound::FSendAddress> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::FSendAddress> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::FSendAddress> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::FSendAddress>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::FSendAddress> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<Metasound::FSendAddress> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_VFSendAddress_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<FString>_> @ 14af000c0

TDataValueReference<FString> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataValueReference<FString>_>
          (FAnyDataReference *this,TDataValueReference<FString> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<FString> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<FString> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<FString>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<FString> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<FString> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_VFString___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataValueReference_VFString___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<Metasound::FTime>_> @ 14af00230

TDataValueReference<Metasound::FTime> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataValueReference<Metasound::FTime>_>
          (FAnyDataReference *this,TDataValueReference<Metasound::FTime> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::FTime> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::FTime> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::FTime>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::FTime> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<Metasound::FTime> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_VFTime_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataValueReference<bool>_> @ 14af003a0

TDataValueReference<bool> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataValueReference<bool>_>
          (FAnyDataReference *this,TDataValueReference<bool> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<bool> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->DataRefPtr).Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<bool> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  bVar5 = IsDataReferenceOfType<bool>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<bool> *)(*pcVar4)();
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
      pTVar6 = (TDataValueReference<bool> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference__N_Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataValueReference__N_Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<int>_> @ 14af00510

TDataWriteReference<int> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataWriteReference<int>_>
          (FAnyDataReference *this,TDataWriteReference<int> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<int> *pTVar7;
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
    pTVar7 = (TDataWriteReference<int> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<int>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<int>();
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
      pTVar7 = (TDataWriteReference<int> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<int> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_H_Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataWriteReference_H_Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<float>_> @ 14af006e0

TDataWriteReference<float> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataWriteReference<float>_>
          (FAnyDataReference *this,TDataWriteReference<float> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<float> *pTVar7;
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
    pTVar7 = (TDataWriteReference<float> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<float>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<float>();
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
      pTVar7 = (TDataWriteReference<float> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<float> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_M_Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataWriteReference_M_Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_>_> @ 14af008b0

TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<TArray<int,TSizedDefaultAllocator<32>_>_>();
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
      pTVar7 = (TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_>_> @ 14af00a80

TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<TArray<float,TSizedDefaultAllocator<32>_>_>();
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
      pTVar7 = (TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_> @ 14af00c50

TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
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
    pTVar7 = (TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                     ();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
      pTVar7 = (TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
      pTVar7 = (TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_> @ 14af00e20

TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>();
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
      pTVar7 = (TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
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
      pTVar7 = (TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_> @ 14af00ff0

TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<TArray<FString,TSizedDefaultAllocator<32>_>_>();
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
      pTVar7 = (TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_> @ 14af011c0

TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
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
      pTVar7 = (TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
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
      pTVar7 = (TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_> @ 14af01390

TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          (FAnyDataReference *this,
          TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar7;
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
    pTVar7 = (TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<TArray<bool,TSizedDefaultAllocator<32>_>_>();
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
      pTVar7 = (TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_> @ 14af01560

TDataWriteReference<Metasound::FAudioBuffer> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::FAudioBuffer> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::FAudioBuffer> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::FAudioBuffer> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::FAudioBuffer>();
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
      pTVar7 = (TDataWriteReference<Metasound::FAudioBuffer> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<Metasound::FAudioBuffer> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<FMetasoundParameterStorageWrapper>_> @ 14af01730

TDataWriteReference<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::FAnyDataReference::
GetAs<Metasound::TDataWriteReference<FMetasoundParameterStorageWrapper>_>
          (FAnyDataReference *this,
          TDataWriteReference<FMetasoundParameterStorageWrapper> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<FMetasoundParameterStorageWrapper> *pTVar7;
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
    pTVar7 = (TDataWriteReference<FMetasoundParameterStorageWrapper> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<FMetasoundParameterStorageWrapper>();
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
      pTVar7 = (TDataWriteReference<FMetasoundParameterStorageWrapper> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<FMetasoundParameterStorageWrapper> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::FSendAddress>_> @ 14af01900

TDataWriteReference<Metasound::FSendAddress> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataWriteReference<Metasound::FSendAddress>_>
          (FAnyDataReference *this,
          TDataWriteReference<Metasound::FSendAddress> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::FSendAddress> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::FSendAddress> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::FSendAddress>();
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
      pTVar7 = (TDataWriteReference<Metasound::FSendAddress> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<Metasound::FSendAddress> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFSendAddress_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<FString>_> @ 14af01ad0

TDataWriteReference<FString> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataWriteReference<FString>_>
          (FAnyDataReference *this,TDataWriteReference<FString> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<FString> *pTVar7;
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
    pTVar7 = (TDataWriteReference<FString> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<FString>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<FString>();
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
      pTVar7 = (TDataWriteReference<FString> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<FString> *)(*pcVar5)();
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
  *(undefined ***)__return_storage_ptr__ = &___7__TDataWriteReference_VFString___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::FTime>_> @ 14af01ca0

TDataWriteReference<Metasound::FTime> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataWriteReference<Metasound::FTime>_>
          (FAnyDataReference *this,TDataWriteReference<Metasound::FTime> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::FTime> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::FTime> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::FTime>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::FTime>();
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
      pTVar7 = (TDataWriteReference<Metasound::FTime> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<Metasound::FTime> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFTime_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<Metasound::FTrigger>_> @ 14af01e70

TDataWriteReference<Metasound::FTrigger> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataWriteReference<Metasound::FTrigger>_>
          (FAnyDataReference *this,TDataWriteReference<Metasound::FTrigger> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<Metasound::FTrigger> *pTVar7;
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
    pTVar7 = (TDataWriteReference<Metasound::FTrigger> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::FTrigger>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<Metasound::FTrigger>();
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
      pTVar7 = (TDataWriteReference<Metasound::FTrigger> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<Metasound::FTrigger> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TDataWriteReference<bool>_> @ 14af02040

TDataWriteReference<bool> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataWriteReference<bool>_>
          (FAnyDataReference *this,TDataWriteReference<bool> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataWriteReference<bool> *pTVar7;
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
    pTVar7 = (TDataWriteReference<bool> *)(*pcVar5)();
    return pTVar7;
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<bool>();
  FVar3 = *pFVar8;
  pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar6 = IsCastable(*pFVar8,FVar3);
  if (!bVar6) {
    pFVar8 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    ::FName::ToString(pFVar8,&local_38);
    GetMetasoundDataTypeString<bool>();
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
      pTVar7 = (TDataWriteReference<bool> *)(*pcVar5)();
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
      pTVar7 = (TDataWriteReference<bool> *)(*pcVar5)();
      return pTVar7;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference__N_Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar4 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar4;
  if (IVar4 != (IDataReference)0x0) {
    *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataWriteReference__N_Metasound__6B_;
  return __return_storage_ptr__;
}

// GetAs<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14af02210

TEnum<Metasound::ESharedStateBehaviorType,1> __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
          (FAnyDataReference *this)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  ESharedStateBehaviorType EVar5;
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
      return (TEnum<Metasound::ESharedStateBehaviorType,1>)EVar5;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar9 < `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                         ();
      `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeName = *pFVar6;
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar9 < `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeId =
           TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
           GetTypeId();
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  pFVar6 = (FName *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  bVar4 = *pFVar6 !=
          `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(Metasound::IDataReference_const&___ptr64)'
          ::__l2::TypeName;
  pvVar7 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  if ((bVar4) ||
     (pvVar7 != `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::TypeId)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsDataReferenceOfType<DataType>(InRef)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2af,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return (TEnum<Metasound::ESharedStateBehaviorType,1>)EVar5;
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
      return (TEnum<Metasound::ESharedStateBehaviorType,1>)EVar5;
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
      return (TEnum<Metasound::ESharedStateBehaviorType,1>)EVar5;
    }
  }
  *in_RDX = *(undefined4 *)IVar8;
  return (TEnum<Metasound::ESharedStateBehaviorType,1>)(ESharedStateBehaviorType)in_RDX;
}

// GetWritableValue<Metasound::FTrigger> @ 14af09670

FTrigger * __thiscall
Metasound::FAnyDataReference::GetWritableValue<Metasound::FTrigger>(FAnyDataReference *this)

{
  IDataReference *pIVar1;
  code *pcVar2;
  FName *pFVar3;
  void *pvVar4;
  FTrigger *pFVar5;
  int *piVar6;
  bool bVar7;
  
  pIVar1 = (this->DataRefPtr).Ptr;
  if (pIVar1 == (IDataReference *)0x0) {
    return (FTrigger *)0x0;
  }
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar6 < `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTrigger>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTrigger>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTrigger>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetMetasoundDataTypeName<Metasound::FTrigger>();
      `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTrigger>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeName = *pFVar3;
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTrigger>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar6 < `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTrigger>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTrigger>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTrigger>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTrigger>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeId = &TDataReferenceTypeInfo<Metasound::FTrigger>::TypePtr;
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTrigger>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  pFVar3 = (FName *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1);
  bVar7 = *pFVar3 !=
          `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTrigger>(Metasound::IDataReference_const&___ptr64)'
          ::__l2::TypeName;
  pvVar4 = (void *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
  if ((bVar7) ||
     (pvVar4 != `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::FTrigger>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::TypeId)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsDataReferenceOfType<DataType>(*DataRefPtr)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x389,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTrigger *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (this->AccessType != Write) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Write == AccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x38a,
                       L"Writable values can only be obtained with data references which have writable access"
                      );
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTrigger *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FTrigger *)(this->DataRefPtr).Ptr[1];
}

