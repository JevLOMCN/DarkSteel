// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 6

// AddDataReadReferenceFrom @ 14ad44840

bool __thiscall
Metasound::FDataReferenceCollection::AddDataReadReferenceFrom
          (FDataReferenceCollection *this,FName *param_1,FDataReferenceCollection *param_2,
          FName *param_3,FName *param_4)

{
  FName *pFVar1;
  TPairInitializer<FName_const_&,Metasound::FAnyDataReference_const_&> local_res18;
  FName *local_18;
  FAnyDataReference *local_10;
  
  local_10 = TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
             ::Find((TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
                     *)param_2,*param_3);
  if (local_10 != (FAnyDataReference *)0x0) {
    pFVar1 = (FName *)(**(code **)(local_10->_padding_ + 8))(local_10);
    if (*pFVar1 == *param_4) {
      local_18 = param_1;
      TSet<TTuple<FName,Metasound::FAnyDataReference>,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,Metasound::FAnyDataReference_const_&>_>
                ((TSet<TTuple<FName,Metasound::FAnyDataReference>,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>,FDefaultSetAllocator>
                  *)this,&local_res18,(bool *)&local_18);
      return true;
    }
  }
  return false;
}

// AddDataReference @ 14ad448d0

void __thiscall
Metasound::FDataReferenceCollection::AddDataReference
          (FDataReferenceCollection *this,FName *param_1,FAnyDataReference *param_2)

{
  TPairInitializer<FName_const_&,Metasound::FAnyDataReference_const_&> local_res8 [2];
  FName *local_18;
  FAnyDataReference *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FName,Metasound::FAnyDataReference>,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,Metasound::FAnyDataReference_const_&>_>
            ((TSet<TTuple<FName,Metasound::FAnyDataReference>,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>,FDefaultSetAllocator>
              *)this,local_res8,(bool *)&local_18);
  return;
}

// AddDataWriteReferenceFrom @ 14ad44900

bool __thiscall
Metasound::FDataReferenceCollection::AddDataWriteReferenceFrom
          (FDataReferenceCollection *this,FName *param_1,FDataReferenceCollection *param_2,
          FName *param_3,FName *param_4)

{
  FName *pFVar1;
  TPairInitializer<FName_const_&,Metasound::FAnyDataReference_const_&> local_res18;
  FName *local_18;
  FAnyDataReference *local_10;
  
  local_10 = TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
             ::Find((TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
                     *)param_2,*param_3);
  if (local_10 != (FAnyDataReference *)0x0) {
    pFVar1 = (FName *)(**(code **)(local_10->_padding_ + 8))(local_10);
    if ((*pFVar1 == *param_4) && (local_10->AccessType == Write)) {
      local_18 = param_1;
      TSet<TTuple<FName,Metasound::FAnyDataReference>,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,Metasound::FAnyDataReference_const_&>_>
                ((TSet<TTuple<FName,Metasound::FAnyDataReference>,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>,FDefaultSetAllocator>
                  *)this,&local_res18,(bool *)&local_18);
      return true;
    }
  }
  return false;
}

// ContainsDataReadReference @ 14ad4b6b0

bool __thiscall
Metasound::FDataReferenceCollection::ContainsDataReadReference
          (FDataReferenceCollection *this,FName *param_1,FName *param_2)

{
  FAnyDataReference *pFVar1;
  FName *pFVar2;
  
  pFVar1 = TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
           ::Find((TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
                   *)this,*param_1);
  if (pFVar1 != (FAnyDataReference *)0x0) {
    pFVar2 = (FName *)(**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    if ((*param_2 == *pFVar2) && ((pFVar1->AccessType == Read || (pFVar1->AccessType == Write)))) {
      return true;
    }
  }
  return false;
}

// ContainsDataWriteReference @ 14ad4b710

bool __thiscall
Metasound::FDataReferenceCollection::ContainsDataWriteReference
          (FDataReferenceCollection *this,FName *param_1,FName *param_2)

{
  FAnyDataReference *pFVar1;
  FName *pFVar2;
  
  pFVar1 = TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
           ::Find((TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
                   *)this,*param_1);
  if (pFVar1 != (FAnyDataReference *)0x0) {
    pFVar2 = (FName *)(**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    if (*param_2 == *pFVar2) {
      return pFVar1->AccessType == Write;
    }
  }
  return false;
}

// FindDataReference @ 14ad50f70

FAnyDataReference * __thiscall
Metasound::FDataReferenceCollection::FindDataReference
          (FDataReferenceCollection *this,FName *param_1)

{
  FAnyDataReference *pFVar1;
  
  pFVar1 = TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
           ::Find((TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
                   *)this,*param_1);
  return pFVar1;
}

