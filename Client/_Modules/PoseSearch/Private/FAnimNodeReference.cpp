// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 3

// GetAnimNodePtr<FAnimNode_MotionMatching> @ 14a8a4fa0

FAnimNode_MotionMatching * __thiscall
FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatching>(FAnimNodeReference *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  
  if ((this->AnimNode != (FAnimNode_Base *)0x0) &&
     (pUVar2 = this->AnimNodeStruct, pUVar2 != (UScriptStruct *)0x0)) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar4,
                           L"AnimNode_MotionMatching");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FAnimNode_MotionMatching *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton)->
                 _padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      return (FAnimNode_MotionMatching *)this->AnimNode;
    }
  }
  return (FAnimNode_MotionMatching *)0x0;
}

// GetAnimNodePtr<FAnimNode_MotionMatchingInteraction> @ 14a8a5040

FAnimNode_MotionMatchingInteraction * __thiscall
FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatchingInteraction>(FAnimNodeReference *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  
  if ((this->AnimNode != (FAnimNode_Base *)0x0) &&
     (pUVar2 = this->AnimNodeStruct, pUVar2 != (UScriptStruct *)0x0)) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatchingInteraction,
                           (UObject *)pUVar4,L"AnimNode_MotionMatchingInteraction");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FAnimNode_MotionMatchingInteraction *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.
                 OuterSingleton)->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.OuterSingleton)->
         _padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      return (FAnimNode_MotionMatchingInteraction *)this->AnimNode;
    }
  }
  return (FAnimNode_MotionMatchingInteraction *)0x0;
}

// GetAnimNodePtr<FAnimNode_PoseSearchHistoryCollector> @ 14a8d9080

FAnimNode_PoseSearchHistoryCollector * __thiscall
FAnimNodeReference::GetAnimNodePtr<FAnimNode_PoseSearchHistoryCollector>(FAnimNodeReference *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  
  if ((this->AnimNode != (FAnimNode_Base *)0x0) &&
     (pUVar2 = this->AnimNodeStruct, pUVar2 != (UScriptStruct *)0x0)) {
    pUVar4 = FAnimNode_PoseSearchHistoryCollector::StaticStruct();
    if (pUVar4 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return (FAnimNode_PoseSearchHistoryCollector *)this->AnimNode;
      }
    }
  }
  return (FAnimNode_PoseSearchHistoryCollector *)0x0;
}

