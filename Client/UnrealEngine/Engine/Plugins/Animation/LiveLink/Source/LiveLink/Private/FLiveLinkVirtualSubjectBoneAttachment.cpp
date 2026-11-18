// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 2

// StaticStruct @ 14cff5c10

UScriptStruct * __cdecl FLiveLinkVirtualSubjectBoneAttachment::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLink();
    Z_Registration_Info_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment,
                         (UObject *)pUVar1,L"LiveLinkVirtualSubjectBoneAttachment");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment.OuterSingleton;
}

// IsValid @ 14d060980

bool __thiscall
FLiveLinkVirtualSubjectBoneAttachment::IsValid
          (FLiveLinkVirtualSubjectBoneAttachment *this,
          TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  FName FVar2;
  FName FVar3;
  FText *pFVar4;
  FName *pFVar5;
  FName *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FText local_18;
  
  FVar2 = (this->ParentSubject).Name;
  if ((FVar2 == (FName)0x0) || (FVar3 = (this->ChildSubject).Name, FVar3 == (FName)0x0)) {
    pwVar8 = L"One or more subject name is not specified.";
    pwVar7 = L"InvalidSubjectError";
  }
  else if ((this->ParentBone == (FName)0x0) || (this->ChildBone == (FName)0x0)) {
    pwVar8 = L"One or more bone name is not specified.";
    pwVar7 = L"InvalidBoneError";
  }
  else {
    pFVar5 = (FName *)(param_1->AllocatorInstance).Data;
    pFVar1 = pFVar5 + param_1->ArrayNum;
    for (pFVar6 = pFVar5; pFVar6 != pFVar1; pFVar6 = pFVar6 + 1) {
      if (*pFVar6 == FVar2) goto LAB_14d0609e4;
    }
    pwVar8 = L"One or more subject is not enabled.";
    pwVar7 = L"DisabledSubject";
  }
LAB_14d060a39:
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"VirtualSubjectBoneAttachment",pwVar7,pwVar8);
  FText::operator=(&this->LastError,pFVar4);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return false;
LAB_14d0609e4:
  do {
    if (*pFVar5 == FVar3) {
      pFVar4 = FText::GetEmpty();
      FText::operator=(&this->LastError,pFVar4);
      return true;
    }
    pFVar5 = pFVar5 + 1;
  } while (pFVar5 != pFVar1);
  pwVar8 = L"One or more subject is not enabled.";
  pwVar7 = L"DisabledSubject";
  goto LAB_14d060a39;
}

