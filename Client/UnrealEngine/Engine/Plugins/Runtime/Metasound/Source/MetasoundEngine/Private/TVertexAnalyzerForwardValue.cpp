// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 10

// ~TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardBool,bool> @ 14b350630

void __thiscall
Metasound::Frontend::
TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardBool,bool>::
~TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardBool,bool>
          (TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardBool,bool> *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  return;
}

// ~TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardFloat,float> @ 14b350690

void __thiscall
Metasound::Frontend::
TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardFloat,float>::
~TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardFloat,float>
          (TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardFloat,float> *this
          )

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  return;
}

// ~TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardInt,int> @ 14b3506f0

void __thiscall
Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardInt,int>
::~TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardInt,int>
          (TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardInt,int> *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  return;
}

// ~TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardString,FString> @ 14b350750

void __thiscall
Metasound::Frontend::
TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardString,FString>::
~TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardString,FString>
          (TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardString,FString>
           *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  
  pFVar1 = (this->LastValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  puVar2 = (undefined8 *)this->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  return;
}

// ~TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardTime,Metasound::FTime> @ 14b3507d0

void __thiscall
Metasound::Frontend::
TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardTime,Metasound::FTime>::
~TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardTime,Metasound::FTime>
          (TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardTime,Metasound::FTime>
           *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  return;
}

// Execute @ 14b39ee20

void __thiscall
Metasound::Frontend::
TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardBool,bool>::Execute
          (TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardBool,bool> *this)

{
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  FAnyDataReference::GetAs<Metasound::TDataReadReference<bool>_>
            ((FAnyDataReference *)&this->_padding_,(TDataReadReference<bool> *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  if (this->HasExecuted == false) {
    this->HasExecuted = true;
    this->LastValue = *(bool *)local_28._8_8_;
    FVertexAnalyzerBase::MarkOutputDirty((FVertexAnalyzerBase *)this);
    return;
  }
  if (this->LastValue != *(bool *)local_28._8_8_) {
    this->LastValue = *(bool *)local_28._8_8_;
    FVertexAnalyzerBase::MarkOutputDirty((FVertexAnalyzerBase *)this);
    return;
  }
  return;
}

// Execute @ 14b39eea0

void __thiscall
Metasound::Frontend::
TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardFloat,float>::Execute
          (TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardFloat,float> *this
          )

{
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
            ((FAnyDataReference *)&this->_padding_,(TDataReadReference<float> *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  if (this->HasExecuted == false) {
    this->HasExecuted = true;
    this->LastValue = *(float *)local_28._8_8_;
    FVertexAnalyzerBase::MarkOutputDirty((FVertexAnalyzerBase *)this);
    return;
  }
  if (*(float *)local_28._8_8_ != this->LastValue) {
    this->LastValue = *(float *)local_28._8_8_;
    FVertexAnalyzerBase::MarkOutputDirty((FVertexAnalyzerBase *)this);
    return;
  }
  return;
}

// Execute @ 14b39ef20

void __thiscall
Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardInt,int>
::Execute(TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardInt,int> *this)

{
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  FAnyDataReference::GetAs<Metasound::TDataReadReference<int>_>
            ((FAnyDataReference *)&this->_padding_,(TDataReadReference<int> *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  if (this->HasExecuted == false) {
    this->HasExecuted = true;
    this->LastValue = *(int *)local_28._8_8_;
    FVertexAnalyzerBase::MarkOutputDirty((FVertexAnalyzerBase *)this);
    return;
  }
  if (this->LastValue != *(int *)local_28._8_8_) {
    this->LastValue = *(int *)local_28._8_8_;
    FVertexAnalyzerBase::MarkOutputDirty((FVertexAnalyzerBase *)this);
    return;
  }
  return;
}

// Execute @ 14b39efa0

void __thiscall
Metasound::Frontend::
TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardString,FString>::Execute
          (TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardString,FString>
           *this)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  TDataReadReference<FString> *pTVar4;
  bool bVar5;
  undefined1 local_28 [32];
  
  pTVar4 = FAnyDataReference::GetDataReadReference<FString>
                     ((FAnyDataReference *)&this->_padding_,(TDataReadReference<FString> *)local_28)
  ;
  pFVar2 = *(FString **)&pTVar4->field_0x8;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  if (this->HasExecuted == false) {
    this->HasExecuted = true;
  }
  else {
    iVar3 = (this->LastValue).Data.ArrayNum;
    iVar1 = (pFVar2->Data).ArrayNum;
    if (iVar3 == iVar1) {
      if (iVar3 < 2) {
        return;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->LastValue).Data.AllocatorInstance.Data,
                         (wchar_t *)(pFVar2->Data).AllocatorInstance.Data);
      bVar5 = iVar3 == 0;
    }
    else {
      bVar5 = iVar3 + iVar1 == 1;
    }
    if (bVar5) {
      return;
    }
  }
  ::FString::operator=(&this->LastValue,pFVar2);
  FVertexAnalyzerBase::MarkOutputDirty((FVertexAnalyzerBase *)this);
  return;
}

// Execute @ 14b39f050

void __thiscall
Metasound::Frontend::
TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardTime,Metasound::FTime>::
Execute(TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardTime,Metasound::FTime>
        *this)

{
  undefined1 local_28 [16];
  TReferenceControllerBase<0> *local_18;
  
  FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTime>_>
            ((FAnyDataReference *)&this->_padding_,(TDataReadReference<Metasound::FTime> *)local_28)
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  if (this->HasExecuted == false) {
    this->HasExecuted = true;
    (this->LastValue).Time = *(double *)local_28._8_8_;
    FVertexAnalyzerBase::MarkOutputDirty((FVertexAnalyzerBase *)this);
    return;
  }
  if (*(double *)local_28._8_8_ != (this->LastValue).Time) {
    (this->LastValue).Time = *(double *)local_28._8_8_;
    FVertexAnalyzerBase::MarkOutputDirty((FVertexAnalyzerBase *)this);
    return;
  }
  return;
}

