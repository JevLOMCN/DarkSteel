// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// operator<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>_TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface> @ 14ae4a7d0

TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface> * __thiscall
TPairInitializer<Metasound::FFrontendQueryKey_const_&,FMetasoundFrontendInterface_&&>::
operator<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>_TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>
          (TPairInitializer<Metasound::FFrontendQueryKey_const_&,FMetasoundFrontendInterface_&&>
           *this,TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>
                 *__return_storage_ptr__)

{
  FMetasoundFrontendInterface *pFVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  pFVar1 = this->Value;
  Metasound::FFrontendQueryKey::FFrontendQueryKey
            ((FFrontendQueryKey *)__return_storage_ptr__,this->Key);
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(longlong *)&__return_storage_ptr__->field_0x20 = pFVar1->_padding_;
  pFVar1->_padding_ = 0;
  *(int *)&__return_storage_ptr__->field_0x28 = (int)pFVar1->_padding_;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c =
       *(undefined4 *)((longlong)&pFVar1->_padding_ + 4);
  pFVar1->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(longlong *)&__return_storage_ptr__->field_0x30 = pFVar1->_padding_;
  pFVar1->_padding_ = 0;
  *(int *)&__return_storage_ptr__->field_0x38 = (int)pFVar1->_padding_;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c =
       *(undefined4 *)((longlong)&pFVar1->_padding_ + 4);
  pFVar1->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(longlong *)&__return_storage_ptr__->field_0x40 = pFVar1->_padding_;
  pFVar1->_padding_ = 0;
  *(int *)&__return_storage_ptr__->field_0x48 = (int)pFVar1->_padding_;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c =
       *(undefined4 *)((longlong)&pFVar1->_padding_ + 4);
  pFVar1->_padding_ = 0;
  lVar2 = pFVar1->_padding_;
  *(longlong *)&__return_storage_ptr__->field_0x50 = pFVar1->_padding_;
  *(longlong *)&__return_storage_ptr__->field_0x58 = lVar2;
  uVar3 = (pFVar1->Metadata).Version.Name.Number;
  iVar4 = (pFVar1->Metadata).Version.Number.Major;
  iVar5 = (pFVar1->Metadata).Version.Number.Minor;
  *(uint *)&__return_storage_ptr__->field_0x60 =
       (pFVar1->Metadata).Version.Name.ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x64 = uVar3;
  *(int *)&__return_storage_ptr__->field_0x68 = iVar4;
  *(int *)&__return_storage_ptr__->field_0x6c = iVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x70 =
       (pFVar1->Metadata).UClassOptions.AllocatorInstance.Data;
  (pFVar1->Metadata).UClassOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x78 = (pFVar1->Metadata).UClassOptions.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x7c = (pFVar1->Metadata).UClassOptions.ArrayMax;
  (pFVar1->Metadata).UClassOptions.ArrayNum = 0;
  (pFVar1->Metadata).UClassOptions.ArrayMax = 0;
  return __return_storage_ptr__;
}

