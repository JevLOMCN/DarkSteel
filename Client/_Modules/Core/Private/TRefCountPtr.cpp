// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// ~TRefCountPtr<FBaseGraphTask> @ 141480560

void __thiscall
TRefCountPtr<FBaseGraphTask>::~TRefCountPtr<FBaseGraphTask>(TRefCountPtr<FBaseGraphTask> *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  
  pFVar3 = this->Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014148057f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      return;
    }
  }
  return;
}

// operator=<FTextHistory_AsDate> @ 141722620

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TRefCountPtr<ITextData> * __thiscall
TRefCountPtr<ITextData>::operator=<FTextHistory_AsDate>
          (TRefCountPtr<ITextData> *this,TRefCountPtr<FTextHistory_AsDate> *param_1)

{
  ITextData *pIVar1;
  
  pIVar1 = this->Reference;
  this->Reference = (ITextData *)param_1->Reference;
  param_1->Reference = (FTextHistory_AsDate *)0x0;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return this;
}

// operator=<FTextHistory_AsTime> @ 141722660

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TRefCountPtr<ITextData> * __thiscall
TRefCountPtr<ITextData>::operator=<FTextHistory_AsTime>
          (TRefCountPtr<ITextData> *this,TRefCountPtr<FTextHistory_AsTime> *param_1)

{
  ITextData *pIVar1;
  
  pIVar1 = this->Reference;
  this->Reference = (ITextData *)param_1->Reference;
  param_1->Reference = (FTextHistory_AsTime *)0x0;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return this;
}

// operator=<FTextHistory_Base> @ 1417226a0

TRefCountPtr<ITextData> * __thiscall
TRefCountPtr<ITextData>::operator=<FTextHistory_Base>
          (TRefCountPtr<ITextData> *this,TRefCountPtr<FTextHistory_Base> *param_1)

{
  ITextData *pIVar1;
  
  pIVar1 = this->Reference;
  this->Reference = (ITextData *)param_1->Reference;
  param_1->Reference = (FTextHistory_Base *)0x0;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return this;
}

// operator=<FTextHistory_StringTableEntry> @ 1417226e0

TRefCountPtr<ITextData> * __thiscall
TRefCountPtr<ITextData>::operator=<FTextHistory_StringTableEntry>
          (TRefCountPtr<ITextData> *this,TRefCountPtr<FTextHistory_StringTableEntry> *param_1)

{
  ITextData *pIVar1;
  
  pIVar1 = this->Reference;
  this->Reference = (ITextData *)param_1->Reference;
  param_1->Reference = (FTextHistory_StringTableEntry *)0x0;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return this;
}

// operator=<FTextHistory_Transform> @ 141722720

TRefCountPtr<ITextData> * __thiscall
TRefCountPtr<ITextData>::operator=<FTextHistory_Transform>
          (TRefCountPtr<ITextData> *this,TRefCountPtr<FTextHistory_Transform> *param_1)

{
  ITextData *pIVar1;
  
  pIVar1 = this->Reference;
  this->Reference = (ITextData *)param_1->Reference;
  param_1->Reference = (FTextHistory_Transform *)0x0;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return this;
}

// ~TRefCountPtr<FIoBuffer::BufCore_const_> @ 141738230

void __thiscall
TRefCountPtr<FIoBuffer::BufCore_const_>::~TRefCountPtr<FIoBuffer::BufCore_const_>
          (TRefCountPtr<FIoBuffer::BufCore_const_> *this)

{
  int *piVar1;
  int iVar2;
  BufCore *pBVar3;
  code *pcVar4;
  bool bVar5;
  
  pBVar3 = this->Reference;
  if (pBVar3 != (BufCore *)0x0) {
    if (pBVar3->NumRefs == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRefs != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoBuffer.cpp"
                         ,0x38,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    piVar1 = &pBVar3->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((pBVar3->Flags & 1) != 0) {
        FMemory::Free(pBVar3->DataPtr);
      }
      ~TRefCountPtr<FIoBuffer::BufCore_const_>(&pBVar3->OuterCore);
      ::operator_delete(pBVar3,0x20);
      return;
    }
  }
  return;
}

// ~TRefCountPtr<FIoBuffer::BufCore> @ 1417382b0

void __thiscall
TRefCountPtr<FIoBuffer::BufCore>::~TRefCountPtr<FIoBuffer::BufCore>
          (TRefCountPtr<FIoBuffer::BufCore> *this)

{
  int *piVar1;
  int iVar2;
  BufCore *pBVar3;
  BufCore *this_00;
  code *pcVar4;
  bool bVar5;
  
  pBVar3 = this->Reference;
  if (pBVar3 != (BufCore *)0x0) {
    if (pBVar3->NumRefs == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRefs != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoBuffer.cpp"
                         ,0x38,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    piVar1 = &pBVar3->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((pBVar3->Flags & 1) != 0) {
        FMemory::Free(pBVar3->DataPtr);
      }
      this_00 = (pBVar3->OuterCore).Reference;
      if (this_00 != (BufCore *)0x0) {
        FIoBuffer::BufCore::Release(this_00);
      }
      ::operator_delete(pBVar3,0x20);
      return;
    }
  }
  return;
}

// ~TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> @ 141738340

void __thiscall
TRefCountPtr<UE::Text::Private::FRefCountedDisplayString>::
~TRefCountPtr<UE::Text::Private::FRefCountedDisplayString>
          (TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> *this)

{
  FRefCountedDisplayString *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  
  pFVar1 = this->Reference;
  if (pFVar1 != (FRefCountedDisplayString *)0x0) {
    LOCK();
    lVar3 = pFVar1->_padding_;
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      pFVar2 = (pFVar1->DisplayString).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar1,0x18);
      return;
    }
  }
  return;
}

// operator= @ 141739970

TRefCountPtr<FBaseGraphTask> * __thiscall
TRefCountPtr<FBaseGraphTask>::operator=
          (TRefCountPtr<FBaseGraphTask> *this,TRefCountPtr<FBaseGraphTask> *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  
  if (this != param_1) {
    pFVar3 = this->Reference;
    this->Reference = param_1->Reference;
    param_1->Reference = (FBaseGraphTask *)0x0;
    if (pFVar3 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &pFVar3->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      }
    }
  }
  return this;
}

// operator= @ 1417399c0

TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> * __thiscall
TRefCountPtr<UE::Text::Private::FRefCountedDisplayString>::operator=
          (TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> *this,
          TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> *param_1)

{
  FRefCountedDisplayString *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  
  if (this != param_1) {
    pFVar1 = this->Reference;
    this->Reference = param_1->Reference;
    param_1->Reference = (FRefCountedDisplayString *)0x0;
    if (pFVar1 != (FRefCountedDisplayString *)0x0) {
      LOCK();
      lVar3 = pFVar1->_padding_;
      *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        pFVar2 = (pFVar1->DisplayString).Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pFVar1,0x18);
      }
    }
    return this;
  }
  return this;
}

// operator= @ 141739a30

TRefCountPtr<ITextData> * __thiscall
TRefCountPtr<ITextData>::operator=(TRefCountPtr<ITextData> *this,TRefCountPtr<ITextData> *param_1)

{
  ITextData *pIVar1;
  
  if (this != param_1) {
    pIVar1 = this->Reference;
    this->Reference = param_1->Reference;
    param_1->Reference = (ITextData *)0x0;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
  }
  return this;
}

// TRefCountPtr<UE::Tasks::Private::FTaskBase> @ 141d69090

TRefCountPtr<UE::Tasks::Private::FTaskBase> * __thiscall
TRefCountPtr<UE::Tasks::Private::FTaskBase>::TRefCountPtr<UE::Tasks::Private::FTaskBase>
          (TRefCountPtr<UE::Tasks::Private::FTaskBase> *this,FTaskBase *param_1,bool param_2)

{
  this->Reference = param_1;
  if ((param_1 != (FTaskBase *)0x0) && (param_2)) {
    LOCK();
    param_1->RefCount = (atomic<unsigned_int>)((int)param_1->RefCount + 1);
    UNLOCK();
  }
  return this;
}

