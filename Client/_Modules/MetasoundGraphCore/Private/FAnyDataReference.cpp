// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 8

// FAnyDataReference<Metasound::FAudioBuffer> @ 14ad28f90

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference<Metasound::FAudioBuffer>
          (FAnyDataReference *this,TDataWriteReference<Metasound::FAudioBuffer> *param_1)

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

// GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_> @ 14ad2fc30

TDataReadReference<Metasound::FAudioBuffer> * __thiscall
Metasound::FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
          (FAnyDataReference *this,
          TDataReadReference<Metasound::FAudioBuffer> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  FName FVar3;
  IDataReference IVar4;
  code *pcVar5;
  bool bVar6;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar7;
  FName *pFVar8;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TDataReadReference<Metasound::FAudioBuffer> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pIVar2 = (this->DataRefPtr).Ptr;
  EVar1 = this->AccessType;
  pFVar8 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
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
      pTVar7 = (TDataReadReference<Metasound::FAudioBuffer> *)(*pcVar5)();
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
      pTVar7 = (TDataReadReference<Metasound::FAudioBuffer> *)(*pcVar5)();
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
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// FAnyDataReference @ 14ad37330

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference
          (FAnyDataReference *this,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  code *pcVar1;
  bool bVar2;
  FAnyDataReference *pFVar3;
  
  this->AccessType = param_1;
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)((longlong)*param_2 + 0x18))(param_2,&this->DataRefPtr);
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
  if (param_1 == None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::None != InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnyDataReference *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// operator= @ 14ad3e7b0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::operator=(FAnyDataReference *this,FAnyDataReference *param_1)

{
  TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> *pTVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  FAnyDataReference *pFVar6;
  undefined8 *local_res8;
  
  this->AccessType = param_1->AccessType;
  pIVar2 = (param_1->DataRefPtr).Ptr;
  puVar5 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,&local_res8);
  pTVar1 = &this->DataRefPtr;
  if (pTVar1 != (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> *)
                puVar5) {
    pIVar2 = pTVar1->Ptr;
    pTVar1->Ptr = (IDataReference *)*puVar5;
    *puVar5 = 0;
    if (pIVar2 != (IDataReference *)0x0) {
      (**(code **)*pIVar2)(pIVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar1->Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x334,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FAnyDataReference *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (this->AccessType == None) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::None != AccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x335,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FAnyDataReference *)(*pcVar3)();
      return pFVar6;
    }
  }
  return this;
}

// Clone @ 14ad4a730

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::FAnyDataReference::Clone(FAnyDataReference *this)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> TVar3;
  IDataReference *in_RDX;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x351,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (IDataReference *)(*pcVar1)();
      return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)
             TVar3.Ptr;
    }
  }
  (**(code **)((longlong)*(this->DataRefPtr).Ptr + 0x18))();
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// GetDataTypeId @ 14ad54ff0

void * __thiscall Metasound::FAnyDataReference::GetDataTypeId(FAnyDataReference *this)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x34a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014ad55032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar3 = (void *)(**(code **)((longlong)*(this->DataRefPtr).Ptr + 0x10))();
  return pvVar3;
}

// GetDataTypeName @ 14ad55050

FName * __thiscall Metasound::FAnyDataReference::GetDataTypeName(FAnyDataReference *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x343,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FName *)(*pcVar1)();
      return pFVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014ad55092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FName *)(**(code **)((longlong)*(this->DataRefPtr).Ptr + 8))();
  return pFVar3;
}

// GetRaw @ 14ad56720

void * __thiscall Metasound::FAnyDataReference::GetRaw(FAnyDataReference *this)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x358,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014ad56762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar3 = (void *)(**(code **)((longlong)*(this->DataRefPtr).Ptr + 0x20))();
  return pvVar3;
}

