// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 24

// operator() @ 14ade3cd0

FMetasoundFrontendClassInput * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>
::operator()(TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>
             *this,FMetasoundFrontendClass *param_1)

{
  int iVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendClassInterface *pFVar5;
  FMetasoundFrontendClassInput *pFVar6;
  FName *pFVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  pFVar5 = FMetasoundFrontendClass::GetDefaultInterface(param_1);
  iVar1 = this->CachedIndex;
  if ((iVar1 != -1) && (iVar1 < (pFVar5->Inputs).ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMetasoundFrontendClassInput *)(*pcVar3)();
      return pFVar6;
    }
    if (*(FName *)((pFVar5->Inputs).AllocatorInstance.Data + (longlong)iVar1 * 0x48) ==
        (this->Test).Name) {
      uVar9 = this->CachedIndex;
      uVar10 = 0;
      if ((int)uVar9 < (pFVar5->Inputs).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FMetasoundFrontendClassInput *)(*pcVar3)();
        return pFVar6;
      }
      return (FMetasoundFrontendClassInput *)
             ((pFVar5->Inputs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x48);
    }
  }
  pFVar2 = (FName *)(pFVar5->Inputs).AllocatorInstance.Data;
  pFVar7 = pFVar2;
  while( true ) {
    if (pFVar7 == pFVar2 + (longlong)(pFVar5->Inputs).ArrayNum * 9) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendClassInput *)0x0;
    }
    if (*pFVar7 == (this->Test).Name) break;
    pFVar7 = pFVar7 + 9;
  }
  lVar8 = ((longlong)pFVar7 - (longlong)pFVar2) / 0x12 +
          ((longlong)pFVar7 - (longlong)pFVar2 >> 0x3f);
  uVar9 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  this->CachedIndex = uVar9;
  if (uVar9 == 0xffffffff) {
    return (FMetasoundFrontendClassInput *)0x0;
  }
  uVar10 = 0;
  if ((int)uVar9 < (pFVar5->Inputs).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FMetasoundFrontendClassInput *)(*pcVar3)();
    return pFVar6;
  }
  return (FMetasoundFrontendClassInput *)
         ((pFVar5->Inputs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x48);
}

// operator() @ 14ade3ea0

FMetasoundFrontendClassOutput * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>
::operator()(TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>
             *this,FMetasoundFrontendClass *param_1)

{
  int iVar1;
  uint uVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  FMetasoundFrontendClassInterface *pFVar6;
  FMetasoundFrontendClassOutput *pFVar7;
  FName *pFVar8;
  uint uVar9;
  
  pFVar6 = FMetasoundFrontendClass::GetDefaultInterface(param_1);
  iVar1 = this->CachedIndex;
  if ((iVar1 != -1) && (iVar1 < (pFVar6->Outputs).ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FMetasoundFrontendClassOutput *)(*pcVar4)();
      return pFVar7;
    }
    if (*(FName *)((pFVar6->Outputs).AllocatorInstance.Data + (longlong)iVar1 * 0x34) ==
        (this->Test).Name) {
      uVar2 = this->CachedIndex;
      uVar9 = 0;
      if ((int)uVar2 < (pFVar6->Outputs).ArrayNum) {
        uVar9 = ~uVar2 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FMetasoundFrontendClassOutput *)(*pcVar4)();
        return pFVar7;
      }
      return (FMetasoundFrontendClassOutput *)
             ((pFVar6->Outputs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x34);
    }
  }
  pFVar3 = (FName *)(pFVar6->Outputs).AllocatorInstance.Data;
  pFVar8 = pFVar3;
  while( true ) {
    if (pFVar8 == (FName *)((longlong)pFVar3 + (longlong)(pFVar6->Outputs).ArrayNum * 0x34)) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendClassOutput *)0x0;
    }
    if (*pFVar8 == (this->Test).Name) break;
    pFVar8 = (FName *)&pFVar8[6].Number;
  }
  uVar2 = (uint)(((longlong)pFVar8 - (longlong)pFVar3) / 0x34);
  this->CachedIndex = uVar2;
  if (uVar2 == 0xffffffff) {
    return (FMetasoundFrontendClassOutput *)0x0;
  }
  uVar9 = 0;
  if ((int)uVar2 < (pFVar6->Outputs).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FMetasoundFrontendClassOutput *)(*pcVar4)();
    return pFVar7;
  }
  return (FMetasoundFrontendClassOutput *)
         ((pFVar6->Outputs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x34);
}

// operator() @ 14ade4060

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
::operator()(TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
             *this,FMetasoundFrontendDocument *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  FMetasoundFrontendClass *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  iVar1 = this->CachedIndex;
  if ((iVar1 != -1) && (iVar1 < (param_1->Dependencies).ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FMetasoundFrontendClass *)(*pcVar3)();
      return pFVar9;
    }
    pFVar2 = (param_1->Dependencies).AllocatorInstance.Data;
    if (((*(uint *)(pFVar2 + (longlong)iVar1 * 0x90 + 0x14) == (this->Test).ClassID.D &&
         *(uint *)(pFVar2 + (longlong)iVar1 * 0x90 + 0x10) == (this->Test).ClassID.C) &&
        *(uint *)(pFVar2 + (longlong)iVar1 * 0x90 + 0xc) == (this->Test).ClassID.B) &&
        *(uint *)(pFVar2 + (longlong)iVar1 * 0x90 + 8) == (this->Test).ClassID.A) {
      uVar12 = this->CachedIndex;
      uVar13 = 0;
      if ((int)uVar12 < (param_1->Dependencies).ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FMetasoundFrontendClass *)(*pcVar3)();
        return pFVar9;
      }
      return (FMetasoundFrontendClass *)
             ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x90);
    }
  }
  pFVar2 = (param_1->Dependencies).AllocatorInstance.Data;
  uVar4 = (this->Test).ClassID.A;
  uVar5 = (this->Test).ClassID.B;
  uVar6 = (this->Test).ClassID.C;
  uVar7 = (this->Test).ClassID.D;
  pFVar10 = pFVar2;
  while( true ) {
    if (pFVar10 == pFVar2 + (longlong)(param_1->Dependencies).ArrayNum * 0x90) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendClass *)0x0;
    }
    if (((uVar7 == *(int *)(pFVar10 + 0x14) && uVar6 == *(int *)(pFVar10 + 0x10)) &&
        uVar5 == *(int *)(pFVar10 + 0xc)) && uVar4 == *(int *)(pFVar10 + 8)) break;
    pFVar10 = pFVar10 + 0x90;
  }
  lVar11 = ((longlong)pFVar10 - (longlong)pFVar2) / 0x12 +
           ((longlong)pFVar10 - (longlong)pFVar2 >> 0x3f);
  uVar12 = (int)(lVar11 >> 3) - (int)(lVar11 >> 0x3f);
  this->CachedIndex = uVar12;
  if (uVar12 == 0xffffffff) {
    return (FMetasoundFrontendClass *)0x0;
  }
  uVar13 = 0;
  if ((int)uVar12 < (param_1->Dependencies).ArrayNum) {
    uVar13 = ~uVar12 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FMetasoundFrontendClass *)(*pcVar3)();
    return pFVar9;
  }
  return (FMetasoundFrontendClass *)
         ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x90);
}

// operator() @ 14ade4290

FMetasoundFrontendGraphClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendGraphClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
::operator()(TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendGraphClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
             *this,FMetasoundFrontendDocument *param_1)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  FMetasoundFrontendGraphClass *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  iVar2 = this->CachedIndex;
  if ((iVar2 != -1) && (iVar2 < (param_1->Subgraphs).ArrayNum)) {
    if ((iVar2 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FMetasoundFrontendGraphClass *)(*pcVar4)();
      return pFVar10;
    }
    pFVar3 = (param_1->Subgraphs).AllocatorInstance.Data;
    if (((*(uint *)(pFVar3 + (longlong)iVar2 * 0xf8 + 0x14) == (this->Test).ClassID.D &&
         *(uint *)(pFVar3 + (longlong)iVar2 * 0xf8 + 0x10) == (this->Test).ClassID.C) &&
        *(uint *)(pFVar3 + (longlong)iVar2 * 0xf8 + 0xc) == (this->Test).ClassID.B) &&
        *(uint *)(pFVar3 + (longlong)iVar2 * 0xf8 + 8) == (this->Test).ClassID.A) {
      uVar11 = this->CachedIndex;
      uVar13 = 0;
      if ((int)uVar11 < (param_1->Subgraphs).ArrayNum) {
        uVar13 = ~uVar11 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FMetasoundFrontendGraphClass *)(*pcVar4)();
        return pFVar10;
      }
      return (FMetasoundFrontendGraphClass *)
             ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar11 * 0xf8);
    }
  }
  pFVar3 = (param_1->Subgraphs).AllocatorInstance.Data;
  uVar5 = (this->Test).ClassID.A;
  uVar6 = (this->Test).ClassID.B;
  uVar7 = (this->Test).ClassID.C;
  uVar8 = (this->Test).ClassID.D;
  pFVar12 = pFVar3;
  while( true ) {
    if (pFVar12 == pFVar3 + (longlong)(param_1->Subgraphs).ArrayNum * 0xf8) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendGraphClass *)0x0;
    }
    if (((uVar8 == *(int *)(pFVar12 + 0x14) && uVar7 == *(int *)(pFVar12 + 0x10)) &&
        uVar6 == *(int *)(pFVar12 + 0xc)) && uVar5 == *(int *)(pFVar12 + 8)) break;
    pFVar12 = pFVar12 + 0xf8;
  }
  lVar1 = ((longlong)pFVar12 - (longlong)pFVar3) +
          SUB168(SEXT816(-0x7bdef7bdef7bdef7) * SEXT816((longlong)pFVar12 - (longlong)pFVar3),8);
  uVar11 = (int)(lVar1 >> 7) - (int)(lVar1 >> 0x3f);
  this->CachedIndex = uVar11;
  if (uVar11 == 0xffffffff) {
    return (FMetasoundFrontendGraphClass *)0x0;
  }
  uVar13 = 0;
  if ((int)uVar11 < (param_1->Subgraphs).ArrayNum) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FMetasoundFrontendGraphClass *)(*pcVar4)();
    return pFVar10;
  }
  return (FMetasoundFrontendGraphClass *)
         ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar11 * 0xf8);
}

// operator() @ 14ade44d0

FMetasoundFrontendClassInput * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>
::operator()(TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>
             *this,FMetasoundFrontendGraphClass *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  FMetasoundFrontendClassInterface *pFVar9;
  FMetasoundFrontendClassInput *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  pFVar9 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)param_1);
  iVar1 = this->CachedIndex;
  lVar13 = (longlong)iVar1;
  if ((iVar1 != -1) && (iVar1 < (pFVar9->Inputs).ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FMetasoundFrontendClassInput *)(*pcVar3)();
      return pFVar10;
    }
    pFVar2 = (pFVar9->Inputs).AllocatorInstance.Data;
    if (((*(uint *)(pFVar2 + lVar13 * 0x48 + 0x2c) == (this->Test).NodeID.D &&
         *(uint *)(pFVar2 + lVar13 * 0x48 + 0x28) == (this->Test).NodeID.C) &&
        *(uint *)(pFVar2 + lVar13 * 0x48 + 0x24) == (this->Test).NodeID.B) &&
        *(uint *)(pFVar2 + lVar13 * 0x48 + 0x20) == (this->Test).NodeID.A) {
      uVar12 = this->CachedIndex;
      uVar14 = 0;
      if ((int)uVar12 < (pFVar9->Inputs).ArrayNum) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FMetasoundFrontendClassInput *)(*pcVar3)();
        return pFVar10;
      }
      return (FMetasoundFrontendClassInput *)
             ((pFVar9->Inputs).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x48);
    }
  }
  pFVar2 = (pFVar9->Inputs).AllocatorInstance.Data;
  uVar4 = (this->Test).NodeID.A;
  uVar5 = (this->Test).NodeID.B;
  uVar6 = (this->Test).NodeID.C;
  uVar7 = (this->Test).NodeID.D;
  pFVar11 = pFVar2;
  while( true ) {
    if (pFVar11 == pFVar2 + (longlong)(pFVar9->Inputs).ArrayNum * 0x48) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendClassInput *)0x0;
    }
    if (((uVar7 == *(int *)(pFVar11 + 0x2c) && uVar6 == *(int *)(pFVar11 + 0x28)) &&
        uVar5 == *(int *)(pFVar11 + 0x24)) && uVar4 == *(int *)(pFVar11 + 0x20)) break;
    pFVar11 = pFVar11 + 0x48;
  }
  lVar13 = ((longlong)pFVar11 - (longlong)pFVar2) / 0x12 +
           ((longlong)pFVar11 - (longlong)pFVar2 >> 0x3f);
  uVar12 = (int)(lVar13 >> 2) - (int)(lVar13 >> 0x3f);
  this->CachedIndex = uVar12;
  if (uVar12 == 0xffffffff) {
    return (FMetasoundFrontendClassInput *)0x0;
  }
  uVar14 = 0;
  if ((int)uVar12 < (pFVar9->Inputs).ArrayNum) {
    uVar14 = ~uVar12 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FMetasoundFrontendClassInput *)(*pcVar3)();
    return pFVar10;
  }
  return (FMetasoundFrontendClassInput *)
         ((pFVar9->Inputs).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x48);
}

// operator() @ 14ade46f0

FMetasoundFrontendClassOutput * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>
::operator()(TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>
             *this,FMetasoundFrontendGraphClass *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  FMetasoundFrontendClassInterface *pFVar10;
  FMetasoundFrontendClassOutput *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  pFVar10 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)param_1);
  iVar1 = this->CachedIndex;
  if ((iVar1 != -1) && (iVar1 < (pFVar10->Outputs).ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FMetasoundFrontendClassOutput *)(*pcVar4)();
      return pFVar11;
    }
    pFVar3 = (pFVar10->Outputs).AllocatorInstance.Data;
    if (((*(uint *)(pFVar3 + (longlong)iVar1 * 0x34 + 0x2c) == (this->Test).NodeID.D &&
         *(uint *)(pFVar3 + (longlong)iVar1 * 0x34 + 0x28) == (this->Test).NodeID.C) &&
        *(uint *)(pFVar3 + (longlong)iVar1 * 0x34 + 0x24) == (this->Test).NodeID.B) &&
        *(uint *)(pFVar3 + (longlong)iVar1 * 0x34 + 0x20) == (this->Test).NodeID.A) {
      uVar2 = this->CachedIndex;
      uVar13 = 0;
      if ((int)uVar2 < (pFVar10->Outputs).ArrayNum) {
        uVar13 = ~uVar2 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FMetasoundFrontendClassOutput *)(*pcVar4)();
        return pFVar11;
      }
      return (FMetasoundFrontendClassOutput *)
             ((pFVar10->Outputs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x34);
    }
  }
  pFVar3 = (pFVar10->Outputs).AllocatorInstance.Data;
  uVar5 = (this->Test).NodeID.A;
  uVar6 = (this->Test).NodeID.B;
  uVar7 = (this->Test).NodeID.C;
  uVar8 = (this->Test).NodeID.D;
  pFVar12 = pFVar3;
  while( true ) {
    if (pFVar12 == pFVar3 + (longlong)(pFVar10->Outputs).ArrayNum * 0x34) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendClassOutput *)0x0;
    }
    if (((uVar8 == *(int *)(pFVar12 + 0x2c) && uVar7 == *(int *)(pFVar12 + 0x28)) &&
        uVar6 == *(int *)(pFVar12 + 0x24)) && uVar5 == *(int *)(pFVar12 + 0x20)) break;
    pFVar12 = pFVar12 + 0x34;
  }
  uVar2 = (uint)(((longlong)pFVar12 - (longlong)pFVar3) / 0x34);
  this->CachedIndex = uVar2;
  if (uVar2 == 0xffffffff) {
    return (FMetasoundFrontendClassOutput *)0x0;
  }
  uVar13 = 0;
  if ((int)uVar2 < (pFVar10->Outputs).ArrayNum) {
    uVar13 = ~uVar2 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FMetasoundFrontendClassOutput *)(*pcVar4)();
    return pFVar11;
  }
  return (FMetasoundFrontendClassOutput *)
         ((pFVar10->Outputs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x34);
}

// operator() @ 14ade4900

FMetasoundFrontendNode * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendNode_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>
::operator()(TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendNode_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>
             *this,FMetasoundFrontendGraphClass *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  FMetasoundFrontendGraph *pFVar9;
  FMetasoundFrontendNode *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  pFVar9 = BuilderPrivate::FindConstBuildGraphChecked(param_1);
  iVar1 = this->CachedIndex;
  if ((iVar1 != -1) && (iVar1 < (pFVar9->Nodes).ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FMetasoundFrontendNode *)(*pcVar3)();
      return pFVar10;
    }
    pFVar11 = (pFVar9->Nodes).AllocatorInstance.Data + (longlong)iVar1 * 0x88;
    if (((*(uint *)(pFVar11 + 0xc) == (this->Test).NodeID.D &&
         *(uint *)(pFVar11 + 8) == (this->Test).NodeID.C) &&
        *(uint *)(pFVar11 + 4) == (this->Test).NodeID.B) &&
        *(uint *)pFVar11 == (this->Test).NodeID.A) {
      uVar2 = this->CachedIndex;
      uVar13 = 0;
      if ((int)uVar2 < (pFVar9->Nodes).ArrayNum) {
        uVar13 = ~uVar2 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FMetasoundFrontendNode *)(*pcVar3)();
        return pFVar10;
      }
      return (FMetasoundFrontendNode *)
             ((pFVar9->Nodes).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x88);
    }
  }
  pFVar11 = (pFVar9->Nodes).AllocatorInstance.Data;
  uVar4 = (this->Test).NodeID.A;
  uVar5 = (this->Test).NodeID.B;
  uVar6 = (this->Test).NodeID.C;
  uVar7 = (this->Test).NodeID.D;
  pFVar12 = pFVar11 + (longlong)(pFVar9->Nodes).ArrayNum * 0x88;
  while( true ) {
    if (pFVar11 == pFVar12) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendNode *)0x0;
    }
    if (((uVar7 == *(int *)(pFVar11 + 0xc) && uVar6 == *(int *)(pFVar11 + 8)) &&
        uVar5 == *(int *)(pFVar11 + 4)) && uVar4 == *(int *)pFVar11) break;
    pFVar11 = pFVar11 + 0x88;
  }
  uVar2 = (uint)(((longlong)pFVar11 - (longlong)(pFVar9->Nodes).AllocatorInstance.Data) / 0x88);
  this->CachedIndex = uVar2;
  if (uVar2 == 0xffffffff) {
    return (FMetasoundFrontendNode *)0x0;
  }
  uVar13 = 0;
  if ((int)uVar2 < (pFVar9->Nodes).ArrayNum) {
    uVar13 = ~uVar2 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FMetasoundFrontendNode *)(*pcVar3)();
    return pFVar10;
  }
  return (FMetasoundFrontendNode *)
         ((pFVar9->Nodes).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x88);
}

// operator() @ 14ade4b10

FMetasoundFrontendVariable * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendVariable_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>
::operator()(TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendVariable_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>
             *this,FMetasoundFrontendGraphClass *param_1)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  FMetasoundFrontendGraph *pFVar10;
  FMetasoundFrontendVariable *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  pFVar10 = BuilderPrivate::FindConstBuildGraphChecked(param_1);
  iVar2 = this->CachedIndex;
  if ((iVar2 != -1) && (iVar2 < (pFVar10->Variables).ArrayNum)) {
    if ((iVar2 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FMetasoundFrontendVariable *)(*pcVar4)();
      return pFVar11;
    }
    pFVar3 = (pFVar10->Variables).AllocatorInstance.Data;
    if (((*(uint *)(pFVar3 + (longlong)iVar2 * 0xb8 + 0x74) == (this->Test).VariableID.D &&
         *(uint *)(pFVar3 + (longlong)iVar2 * 0xb8 + 0x70) == (this->Test).VariableID.C) &&
        *(uint *)(pFVar3 + (longlong)iVar2 * 0xb8 + 0x6c) == (this->Test).VariableID.B) &&
        *(uint *)(pFVar3 + (longlong)iVar2 * 0xb8 + 0x68) == (this->Test).VariableID.A) {
      uVar12 = this->CachedIndex;
      uVar14 = 0;
      if ((int)uVar12 < (pFVar10->Variables).ArrayNum) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FMetasoundFrontendVariable *)(*pcVar4)();
        return pFVar11;
      }
      return (FMetasoundFrontendVariable *)
             ((pFVar10->Variables).AllocatorInstance.Data + (longlong)(int)uVar12 * 0xb8);
    }
  }
  pFVar3 = (pFVar10->Variables).AllocatorInstance.Data;
  uVar5 = (this->Test).VariableID.A;
  uVar6 = (this->Test).VariableID.B;
  uVar7 = (this->Test).VariableID.C;
  uVar8 = (this->Test).VariableID.D;
  pFVar13 = pFVar3;
  while( true ) {
    if (pFVar13 == pFVar3 + (longlong)(pFVar10->Variables).ArrayNum * 0xb8) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendVariable *)0x0;
    }
    if (((uVar8 == *(int *)(pFVar13 + 0x74) && uVar7 == *(int *)(pFVar13 + 0x70)) &&
        uVar6 == *(int *)(pFVar13 + 0x6c)) && uVar5 == *(int *)(pFVar13 + 0x68)) break;
    pFVar13 = pFVar13 + 0xb8;
  }
  lVar1 = ((longlong)pFVar13 - (longlong)pFVar3) +
          SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pFVar13 - (longlong)pFVar3),8);
  uVar12 = (int)(lVar1 >> 7) - (int)(lVar1 >> 0x3f);
  this->CachedIndex = uVar12;
  if (uVar12 == 0xffffffff) {
    return (FMetasoundFrontendVariable *)0x0;
  }
  uVar14 = 0;
  if ((int)uVar12 < (pFVar10->Variables).ArrayNum) {
    uVar14 = ~uVar12 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FMetasoundFrontendVariable *)(*pcVar4)();
    return pFVar11;
  }
  return (FMetasoundFrontendVariable *)
         ((pFVar10->Variables).AllocatorInstance.Data + (longlong)(int)uVar12 * 0xb8);
}

// operator() @ 14ade4d30

FMetasoundFrontendVertex * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>
::operator()(TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>
             *this,FMetasoundFrontendNode *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  FMetasoundFrontendVertex *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  iVar1 = this->CachedIndex;
  if ((iVar1 != -1) && (iVar1 < (param_1->Interface).Inputs.ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FMetasoundFrontendVertex *)(*pcVar3)();
      return pFVar9;
    }
    pFVar2 = (param_1->Interface).Inputs.AllocatorInstance.Data;
    if (((*(uint *)(pFVar2 + (longlong)iVar1 * 0x20 + 0x1c) == (this->Test).ID.D &&
         *(uint *)(pFVar2 + (longlong)iVar1 * 0x20 + 0x18) == (this->Test).ID.C) &&
        *(uint *)(pFVar2 + (longlong)iVar1 * 0x20 + 0x14) == (this->Test).ID.B) &&
        *(uint *)(pFVar2 + (longlong)iVar1 * 0x20 + 0x10) == (this->Test).ID.A) {
      uVar10 = this->CachedIndex;
      uVar12 = 0;
      if ((int)uVar10 < (param_1->Interface).Inputs.ArrayNum) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FMetasoundFrontendVertex *)(*pcVar3)();
        return pFVar9;
      }
      return (FMetasoundFrontendVertex *)
             ((param_1->Interface).Inputs.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
    }
  }
  pFVar2 = (param_1->Interface).Inputs.AllocatorInstance.Data;
  uVar4 = (this->Test).ID.A;
  uVar5 = (this->Test).ID.B;
  uVar6 = (this->Test).ID.C;
  uVar7 = (this->Test).ID.D;
  pFVar11 = pFVar2;
  while( true ) {
    if (pFVar11 == pFVar2 + (longlong)(param_1->Interface).Inputs.ArrayNum * 0x20) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendVertex *)0x0;
    }
    if (((uVar7 == *(int *)(pFVar11 + 0x1c) && uVar6 == *(int *)(pFVar11 + 0x18)) &&
        uVar5 == *(int *)(pFVar11 + 0x14)) && uVar4 == *(int *)(pFVar11 + 0x10)) break;
    pFVar11 = pFVar11 + 0x20;
  }
  uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar2 >> 5);
  this->CachedIndex = uVar10;
  if (uVar10 == 0xffffffff) {
    return (FMetasoundFrontendVertex *)0x0;
  }
  uVar12 = 0;
  if ((int)uVar10 < (param_1->Interface).Inputs.ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FMetasoundFrontendVertex *)(*pcVar3)();
    return pFVar9;
  }
  return (FMetasoundFrontendVertex *)
         ((param_1->Interface).Inputs.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
}

// operator() @ 14ade4f20

FMetasoundFrontendVertex * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>
::operator()(TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>
             *this,FMetasoundFrontendNode *param_1)

{
  int iVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendVertex *pFVar5;
  uint uVar6;
  FName *pFVar7;
  uint uVar8;
  
  iVar1 = this->CachedIndex;
  if ((iVar1 != -1) && (iVar1 < (param_1->Interface).Inputs.ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FMetasoundFrontendVertex *)(*pcVar3)();
      return pFVar5;
    }
    if (*(FName *)((param_1->Interface).Inputs.AllocatorInstance.Data + (longlong)iVar1 * 0x20) ==
        (this->Test).Name) {
      uVar6 = this->CachedIndex;
      uVar8 = 0;
      if ((int)uVar6 < (param_1->Interface).Inputs.ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FMetasoundFrontendVertex *)(*pcVar3)();
        return pFVar5;
      }
      return (FMetasoundFrontendVertex *)
             ((param_1->Interface).Inputs.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20);
    }
  }
  pFVar2 = (FName *)(param_1->Interface).Inputs.AllocatorInstance.Data;
  pFVar7 = pFVar2;
  while( true ) {
    if (pFVar7 == pFVar2 + (longlong)(param_1->Interface).Inputs.ArrayNum * 4) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendVertex *)0x0;
    }
    if (*pFVar7 == (this->Test).Name) break;
    pFVar7 = pFVar7 + 4;
  }
  uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar2 >> 5);
  this->CachedIndex = uVar6;
  if (uVar6 == 0xffffffff) {
    return (FMetasoundFrontendVertex *)0x0;
  }
  uVar8 = 0;
  if ((int)uVar6 < (param_1->Interface).Inputs.ArrayNum) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FMetasoundFrontendVertex *)(*pcVar3)();
    return pFVar5;
  }
  return (FMetasoundFrontendVertex *)
         ((param_1->Interface).Inputs.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20);
}

// operator() @ 14ade50d0

FMetasoundFrontendVertex * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>
::operator()(TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>
             *this,FMetasoundFrontendNode *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  FMetasoundFrontendVertex *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  iVar1 = this->CachedIndex;
  if ((iVar1 != -1) && (iVar1 < (param_1->Interface).Outputs.ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FMetasoundFrontendVertex *)(*pcVar3)();
      return pFVar9;
    }
    pFVar2 = (param_1->Interface).Outputs.AllocatorInstance.Data;
    if (((*(uint *)(pFVar2 + (longlong)iVar1 * 0x20 + 0x1c) == (this->Test).ID.D &&
         *(uint *)(pFVar2 + (longlong)iVar1 * 0x20 + 0x18) == (this->Test).ID.C) &&
        *(uint *)(pFVar2 + (longlong)iVar1 * 0x20 + 0x14) == (this->Test).ID.B) &&
        *(uint *)(pFVar2 + (longlong)iVar1 * 0x20 + 0x10) == (this->Test).ID.A) {
      uVar10 = this->CachedIndex;
      uVar12 = 0;
      if ((int)uVar10 < (param_1->Interface).Outputs.ArrayNum) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FMetasoundFrontendVertex *)(*pcVar3)();
        return pFVar9;
      }
      return (FMetasoundFrontendVertex *)
             ((param_1->Interface).Outputs.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
    }
  }
  pFVar2 = (param_1->Interface).Outputs.AllocatorInstance.Data;
  uVar4 = (this->Test).ID.A;
  uVar5 = (this->Test).ID.B;
  uVar6 = (this->Test).ID.C;
  uVar7 = (this->Test).ID.D;
  pFVar11 = pFVar2;
  while( true ) {
    if (pFVar11 == pFVar2 + (longlong)(param_1->Interface).Outputs.ArrayNum * 0x20) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendVertex *)0x0;
    }
    if (((uVar7 == *(int *)(pFVar11 + 0x1c) && uVar6 == *(int *)(pFVar11 + 0x18)) &&
        uVar5 == *(int *)(pFVar11 + 0x14)) && uVar4 == *(int *)(pFVar11 + 0x10)) break;
    pFVar11 = pFVar11 + 0x20;
  }
  uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar2 >> 5);
  this->CachedIndex = uVar10;
  if (uVar10 == 0xffffffff) {
    return (FMetasoundFrontendVertex *)0x0;
  }
  uVar12 = 0;
  if ((int)uVar10 < (param_1->Interface).Outputs.ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FMetasoundFrontendVertex *)(*pcVar3)();
    return pFVar9;
  }
  return (FMetasoundFrontendVertex *)
         ((param_1->Interface).Outputs.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
}

// operator() @ 14ade52c0

FMetasoundFrontendVertex * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>
::operator()(TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>
             *this,FMetasoundFrontendNode *param_1)

{
  int iVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendVertex *pFVar5;
  uint uVar6;
  FName *pFVar7;
  uint uVar8;
  
  iVar1 = this->CachedIndex;
  if ((iVar1 != -1) && (iVar1 < (param_1->Interface).Outputs.ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FMetasoundFrontendVertex *)(*pcVar3)();
      return pFVar5;
    }
    if (*(FName *)((param_1->Interface).Outputs.AllocatorInstance.Data + (longlong)iVar1 * 0x20) ==
        (this->Test).Name) {
      uVar6 = this->CachedIndex;
      uVar8 = 0;
      if ((int)uVar6 < (param_1->Interface).Outputs.ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FMetasoundFrontendVertex *)(*pcVar3)();
        return pFVar5;
      }
      return (FMetasoundFrontendVertex *)
             ((param_1->Interface).Outputs.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20);
    }
  }
  pFVar2 = (FName *)(param_1->Interface).Outputs.AllocatorInstance.Data;
  pFVar7 = pFVar2;
  while( true ) {
    if (pFVar7 == pFVar2 + (longlong)(param_1->Interface).Outputs.ArrayNum * 4) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendVertex *)0x0;
    }
    if (*pFVar7 == (this->Test).Name) break;
    pFVar7 = pFVar7 + 4;
  }
  uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar2 >> 5);
  this->CachedIndex = uVar6;
  if (uVar6 == 0xffffffff) {
    return (FMetasoundFrontendVertex *)0x0;
  }
  uVar8 = 0;
  if ((int)uVar6 < (param_1->Interface).Outputs.ArrayNum) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FMetasoundFrontendVertex *)(*pcVar3)();
    return pFVar5;
  }
  return (FMetasoundFrontendVertex *)
         ((param_1->Interface).Outputs.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20);
}

// operator() @ 14ade5470

FMetasoundFrontendClassInput * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>
::operator()(TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>
             *this,FMetasoundFrontendClass *param_1)

{
  int iVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendClassInterface *pFVar5;
  FMetasoundFrontendClassInput *pFVar6;
  FName *pFVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  pFVar5 = FMetasoundFrontendClass::GetDefaultInterface(param_1);
  iVar1 = this->CachedIndex;
  if ((iVar1 != -1) && (iVar1 < (pFVar5->Inputs).ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMetasoundFrontendClassInput *)(*pcVar3)();
      return pFVar6;
    }
    if (*(FName *)((pFVar5->Inputs).AllocatorInstance.Data + (longlong)iVar1 * 0x48) ==
        (this->Test).Name) {
      uVar9 = this->CachedIndex;
      uVar10 = 0;
      if ((int)uVar9 < (pFVar5->Inputs).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FMetasoundFrontendClassInput *)(*pcVar3)();
        return pFVar6;
      }
      return (FMetasoundFrontendClassInput *)
             ((pFVar5->Inputs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x48);
    }
  }
  pFVar2 = (FName *)(pFVar5->Inputs).AllocatorInstance.Data;
  pFVar7 = pFVar2;
  while( true ) {
    if (pFVar7 == pFVar2 + (longlong)(pFVar5->Inputs).ArrayNum * 9) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendClassInput *)0x0;
    }
    if (*pFVar7 == (this->Test).Name) break;
    pFVar7 = pFVar7 + 9;
  }
  lVar8 = ((longlong)pFVar7 - (longlong)pFVar2) / 0x12 +
          ((longlong)pFVar7 - (longlong)pFVar2 >> 0x3f);
  uVar9 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  this->CachedIndex = uVar9;
  if (uVar9 == 0xffffffff) {
    return (FMetasoundFrontendClassInput *)0x0;
  }
  uVar10 = 0;
  if ((int)uVar9 < (pFVar5->Inputs).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FMetasoundFrontendClassInput *)(*pcVar3)();
    return pFVar6;
  }
  return (FMetasoundFrontendClassInput *)
         ((pFVar5->Inputs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x48);
}

// operator() @ 14ade5640

FMetasoundFrontendClassOutput * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>
::operator()(TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>
             *this,FMetasoundFrontendClass *param_1)

{
  int iVar1;
  uint uVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  FMetasoundFrontendClassInterface *pFVar6;
  FMetasoundFrontendClassOutput *pFVar7;
  FName *pFVar8;
  uint uVar9;
  
  pFVar6 = FMetasoundFrontendClass::GetDefaultInterface(param_1);
  iVar1 = this->CachedIndex;
  if ((iVar1 != -1) && (iVar1 < (pFVar6->Outputs).ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FMetasoundFrontendClassOutput *)(*pcVar4)();
      return pFVar7;
    }
    if (*(FName *)((pFVar6->Outputs).AllocatorInstance.Data + (longlong)iVar1 * 0x34) ==
        (this->Test).Name) {
      uVar2 = this->CachedIndex;
      uVar9 = 0;
      if ((int)uVar2 < (pFVar6->Outputs).ArrayNum) {
        uVar9 = ~uVar2 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FMetasoundFrontendClassOutput *)(*pcVar4)();
        return pFVar7;
      }
      return (FMetasoundFrontendClassOutput *)
             ((pFVar6->Outputs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x34);
    }
  }
  pFVar3 = (FName *)(pFVar6->Outputs).AllocatorInstance.Data;
  pFVar8 = pFVar3;
  while( true ) {
    if (pFVar8 == (FName *)((longlong)pFVar3 + (longlong)(pFVar6->Outputs).ArrayNum * 0x34)) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendClassOutput *)0x0;
    }
    if (*pFVar8 == (this->Test).Name) break;
    pFVar8 = (FName *)&pFVar8[6].Number;
  }
  uVar2 = (uint)(((longlong)pFVar8 - (longlong)pFVar3) / 0x34);
  this->CachedIndex = uVar2;
  if (uVar2 == 0xffffffff) {
    return (FMetasoundFrontendClassOutput *)0x0;
  }
  uVar9 = 0;
  if ((int)uVar2 < (pFVar6->Outputs).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FMetasoundFrontendClassOutput *)(*pcVar4)();
    return pFVar7;
  }
  return (FMetasoundFrontendClassOutput *)
         ((pFVar6->Outputs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x34);
}

// operator() @ 14ade5800

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
::operator()(TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
             *this,FMetasoundFrontendDocument *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  FMetasoundFrontendClass *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  iVar1 = this->CachedIndex;
  if ((iVar1 != -1) && (iVar1 < (param_1->Dependencies).ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FMetasoundFrontendClass *)(*pcVar3)();
      return pFVar9;
    }
    pFVar2 = (param_1->Dependencies).AllocatorInstance.Data;
    if (((*(uint *)(pFVar2 + (longlong)iVar1 * 0x90 + 0x14) == (this->Test).ClassID.D &&
         *(uint *)(pFVar2 + (longlong)iVar1 * 0x90 + 0x10) == (this->Test).ClassID.C) &&
        *(uint *)(pFVar2 + (longlong)iVar1 * 0x90 + 0xc) == (this->Test).ClassID.B) &&
        *(uint *)(pFVar2 + (longlong)iVar1 * 0x90 + 8) == (this->Test).ClassID.A) {
      uVar12 = this->CachedIndex;
      uVar13 = 0;
      if ((int)uVar12 < (param_1->Dependencies).ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FMetasoundFrontendClass *)(*pcVar3)();
        return pFVar9;
      }
      return (FMetasoundFrontendClass *)
             ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x90);
    }
  }
  pFVar2 = (param_1->Dependencies).AllocatorInstance.Data;
  uVar4 = (this->Test).ClassID.A;
  uVar5 = (this->Test).ClassID.B;
  uVar6 = (this->Test).ClassID.C;
  uVar7 = (this->Test).ClassID.D;
  pFVar10 = pFVar2;
  while( true ) {
    if (pFVar10 == pFVar2 + (longlong)(param_1->Dependencies).ArrayNum * 0x90) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendClass *)0x0;
    }
    if (((uVar7 == *(int *)(pFVar10 + 0x14) && uVar6 == *(int *)(pFVar10 + 0x10)) &&
        uVar5 == *(int *)(pFVar10 + 0xc)) && uVar4 == *(int *)(pFVar10 + 8)) break;
    pFVar10 = pFVar10 + 0x90;
  }
  lVar11 = ((longlong)pFVar10 - (longlong)pFVar2) / 0x12 +
           ((longlong)pFVar10 - (longlong)pFVar2 >> 0x3f);
  uVar12 = (int)(lVar11 >> 3) - (int)(lVar11 >> 0x3f);
  this->CachedIndex = uVar12;
  if (uVar12 == 0xffffffff) {
    return (FMetasoundFrontendClass *)0x0;
  }
  uVar13 = 0;
  if ((int)uVar12 < (param_1->Dependencies).ArrayNum) {
    uVar13 = ~uVar12 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FMetasoundFrontendClass *)(*pcVar3)();
    return pFVar9;
  }
  return (FMetasoundFrontendClass *)
         ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x90);
}

// operator() @ 14ade5a30

FMetasoundFrontendGraphClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendGraphClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
::operator()(TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendGraphClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
             *this,FMetasoundFrontendDocument *param_1)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  FMetasoundFrontendGraphClass *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  iVar2 = this->CachedIndex;
  if ((iVar2 != -1) && (iVar2 < (param_1->Subgraphs).ArrayNum)) {
    if ((iVar2 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FMetasoundFrontendGraphClass *)(*pcVar4)();
      return pFVar10;
    }
    pFVar3 = (param_1->Subgraphs).AllocatorInstance.Data;
    if (((*(uint *)(pFVar3 + (longlong)iVar2 * 0xf8 + 0x14) == (this->Test).ClassID.D &&
         *(uint *)(pFVar3 + (longlong)iVar2 * 0xf8 + 0x10) == (this->Test).ClassID.C) &&
        *(uint *)(pFVar3 + (longlong)iVar2 * 0xf8 + 0xc) == (this->Test).ClassID.B) &&
        *(uint *)(pFVar3 + (longlong)iVar2 * 0xf8 + 8) == (this->Test).ClassID.A) {
      uVar11 = this->CachedIndex;
      uVar13 = 0;
      if ((int)uVar11 < (param_1->Subgraphs).ArrayNum) {
        uVar13 = ~uVar11 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FMetasoundFrontendGraphClass *)(*pcVar4)();
        return pFVar10;
      }
      return (FMetasoundFrontendGraphClass *)
             ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar11 * 0xf8);
    }
  }
  pFVar3 = (param_1->Subgraphs).AllocatorInstance.Data;
  uVar5 = (this->Test).ClassID.A;
  uVar6 = (this->Test).ClassID.B;
  uVar7 = (this->Test).ClassID.C;
  uVar8 = (this->Test).ClassID.D;
  pFVar12 = pFVar3;
  while( true ) {
    if (pFVar12 == pFVar3 + (longlong)(param_1->Subgraphs).ArrayNum * 0xf8) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendGraphClass *)0x0;
    }
    if (((uVar8 == *(int *)(pFVar12 + 0x14) && uVar7 == *(int *)(pFVar12 + 0x10)) &&
        uVar6 == *(int *)(pFVar12 + 0xc)) && uVar5 == *(int *)(pFVar12 + 8)) break;
    pFVar12 = pFVar12 + 0xf8;
  }
  lVar1 = ((longlong)pFVar12 - (longlong)pFVar3) +
          SUB168(SEXT816(-0x7bdef7bdef7bdef7) * SEXT816((longlong)pFVar12 - (longlong)pFVar3),8);
  uVar11 = (int)(lVar1 >> 7) - (int)(lVar1 >> 0x3f);
  this->CachedIndex = uVar11;
  if (uVar11 == 0xffffffff) {
    return (FMetasoundFrontendGraphClass *)0x0;
  }
  uVar13 = 0;
  if ((int)uVar11 < (param_1->Subgraphs).ArrayNum) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FMetasoundFrontendGraphClass *)(*pcVar4)();
    return pFVar10;
  }
  return (FMetasoundFrontendGraphClass *)
         ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar11 * 0xf8);
}

// operator() @ 14ade5c70

FMetasoundFrontendClassInput * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>
::operator()(TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>
             *this,FMetasoundFrontendGraphClass *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  FMetasoundFrontendClassInterface *pFVar9;
  FMetasoundFrontendClassInput *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  pFVar9 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)param_1);
  iVar1 = this->CachedIndex;
  lVar13 = (longlong)iVar1;
  if ((iVar1 != -1) && (iVar1 < (pFVar9->Inputs).ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FMetasoundFrontendClassInput *)(*pcVar3)();
      return pFVar10;
    }
    pFVar2 = (pFVar9->Inputs).AllocatorInstance.Data;
    if (((*(uint *)(pFVar2 + lVar13 * 0x48 + 0x2c) == (this->Test).NodeID.D &&
         *(uint *)(pFVar2 + lVar13 * 0x48 + 0x28) == (this->Test).NodeID.C) &&
        *(uint *)(pFVar2 + lVar13 * 0x48 + 0x24) == (this->Test).NodeID.B) &&
        *(uint *)(pFVar2 + lVar13 * 0x48 + 0x20) == (this->Test).NodeID.A) {
      uVar12 = this->CachedIndex;
      uVar14 = 0;
      if ((int)uVar12 < (pFVar9->Inputs).ArrayNum) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FMetasoundFrontendClassInput *)(*pcVar3)();
        return pFVar10;
      }
      return (FMetasoundFrontendClassInput *)
             ((pFVar9->Inputs).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x48);
    }
  }
  pFVar2 = (pFVar9->Inputs).AllocatorInstance.Data;
  uVar4 = (this->Test).NodeID.A;
  uVar5 = (this->Test).NodeID.B;
  uVar6 = (this->Test).NodeID.C;
  uVar7 = (this->Test).NodeID.D;
  pFVar11 = pFVar2;
  while( true ) {
    if (pFVar11 == pFVar2 + (longlong)(pFVar9->Inputs).ArrayNum * 0x48) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendClassInput *)0x0;
    }
    if (((uVar7 == *(int *)(pFVar11 + 0x2c) && uVar6 == *(int *)(pFVar11 + 0x28)) &&
        uVar5 == *(int *)(pFVar11 + 0x24)) && uVar4 == *(int *)(pFVar11 + 0x20)) break;
    pFVar11 = pFVar11 + 0x48;
  }
  lVar13 = ((longlong)pFVar11 - (longlong)pFVar2) / 0x12 +
           ((longlong)pFVar11 - (longlong)pFVar2 >> 0x3f);
  uVar12 = (int)(lVar13 >> 2) - (int)(lVar13 >> 0x3f);
  this->CachedIndex = uVar12;
  if (uVar12 == 0xffffffff) {
    return (FMetasoundFrontendClassInput *)0x0;
  }
  uVar14 = 0;
  if ((int)uVar12 < (pFVar9->Inputs).ArrayNum) {
    uVar14 = ~uVar12 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FMetasoundFrontendClassInput *)(*pcVar3)();
    return pFVar10;
  }
  return (FMetasoundFrontendClassInput *)
         ((pFVar9->Inputs).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x48);
}

// operator() @ 14ade5e90

FMetasoundFrontendClassOutput * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>
::operator()(TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>
             *this,FMetasoundFrontendGraphClass *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  FMetasoundFrontendClassInterface *pFVar10;
  FMetasoundFrontendClassOutput *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  pFVar10 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)param_1);
  iVar1 = this->CachedIndex;
  if ((iVar1 != -1) && (iVar1 < (pFVar10->Outputs).ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FMetasoundFrontendClassOutput *)(*pcVar4)();
      return pFVar11;
    }
    pFVar3 = (pFVar10->Outputs).AllocatorInstance.Data;
    if (((*(uint *)(pFVar3 + (longlong)iVar1 * 0x34 + 0x2c) == (this->Test).NodeID.D &&
         *(uint *)(pFVar3 + (longlong)iVar1 * 0x34 + 0x28) == (this->Test).NodeID.C) &&
        *(uint *)(pFVar3 + (longlong)iVar1 * 0x34 + 0x24) == (this->Test).NodeID.B) &&
        *(uint *)(pFVar3 + (longlong)iVar1 * 0x34 + 0x20) == (this->Test).NodeID.A) {
      uVar2 = this->CachedIndex;
      uVar13 = 0;
      if ((int)uVar2 < (pFVar10->Outputs).ArrayNum) {
        uVar13 = ~uVar2 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FMetasoundFrontendClassOutput *)(*pcVar4)();
        return pFVar11;
      }
      return (FMetasoundFrontendClassOutput *)
             ((pFVar10->Outputs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x34);
    }
  }
  pFVar3 = (pFVar10->Outputs).AllocatorInstance.Data;
  uVar5 = (this->Test).NodeID.A;
  uVar6 = (this->Test).NodeID.B;
  uVar7 = (this->Test).NodeID.C;
  uVar8 = (this->Test).NodeID.D;
  pFVar12 = pFVar3;
  while( true ) {
    if (pFVar12 == pFVar3 + (longlong)(pFVar10->Outputs).ArrayNum * 0x34) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendClassOutput *)0x0;
    }
    if (((uVar8 == *(int *)(pFVar12 + 0x2c) && uVar7 == *(int *)(pFVar12 + 0x28)) &&
        uVar6 == *(int *)(pFVar12 + 0x24)) && uVar5 == *(int *)(pFVar12 + 0x20)) break;
    pFVar12 = pFVar12 + 0x34;
  }
  uVar2 = (uint)(((longlong)pFVar12 - (longlong)pFVar3) / 0x34);
  this->CachedIndex = uVar2;
  if (uVar2 == 0xffffffff) {
    return (FMetasoundFrontendClassOutput *)0x0;
  }
  uVar13 = 0;
  if ((int)uVar2 < (pFVar10->Outputs).ArrayNum) {
    uVar13 = ~uVar2 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FMetasoundFrontendClassOutput *)(*pcVar4)();
    return pFVar11;
  }
  return (FMetasoundFrontendClassOutput *)
         ((pFVar10->Outputs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x34);
}

// operator() @ 14ade60a0

FMetasoundFrontendNode * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendNode,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>
::operator()(TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendNode,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>
             *this,FMetasoundFrontendGraphClass *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  FMetasoundFrontendGraph *pFVar9;
  FMetasoundFrontendNode *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  pFVar9 = BuilderPrivate::FindBuildGraphChecked(param_1);
  iVar1 = this->CachedIndex;
  if ((iVar1 != -1) && (iVar1 < (pFVar9->Nodes).ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FMetasoundFrontendNode *)(*pcVar3)();
      return pFVar10;
    }
    pFVar11 = (pFVar9->Nodes).AllocatorInstance.Data + (longlong)iVar1 * 0x88;
    if (((*(uint *)(pFVar11 + 0xc) == (this->Test).NodeID.D &&
         *(uint *)(pFVar11 + 8) == (this->Test).NodeID.C) &&
        *(uint *)(pFVar11 + 4) == (this->Test).NodeID.B) &&
        *(uint *)pFVar11 == (this->Test).NodeID.A) {
      uVar2 = this->CachedIndex;
      uVar13 = 0;
      if ((int)uVar2 < (pFVar9->Nodes).ArrayNum) {
        uVar13 = ~uVar2 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FMetasoundFrontendNode *)(*pcVar3)();
        return pFVar10;
      }
      return (FMetasoundFrontendNode *)
             ((pFVar9->Nodes).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x88);
    }
  }
  pFVar11 = (pFVar9->Nodes).AllocatorInstance.Data;
  uVar4 = (this->Test).NodeID.A;
  uVar5 = (this->Test).NodeID.B;
  uVar6 = (this->Test).NodeID.C;
  uVar7 = (this->Test).NodeID.D;
  pFVar12 = pFVar11 + (longlong)(pFVar9->Nodes).ArrayNum * 0x88;
  while( true ) {
    if (pFVar11 == pFVar12) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendNode *)0x0;
    }
    if (((uVar7 == *(int *)(pFVar11 + 0xc) && uVar6 == *(int *)(pFVar11 + 8)) &&
        uVar5 == *(int *)(pFVar11 + 4)) && uVar4 == *(int *)pFVar11) break;
    pFVar11 = pFVar11 + 0x88;
  }
  uVar2 = (uint)(((longlong)pFVar11 - (longlong)(pFVar9->Nodes).AllocatorInstance.Data) / 0x88);
  this->CachedIndex = uVar2;
  if (uVar2 == 0xffffffff) {
    return (FMetasoundFrontendNode *)0x0;
  }
  uVar13 = 0;
  if ((int)uVar2 < (pFVar9->Nodes).ArrayNum) {
    uVar13 = ~uVar2 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FMetasoundFrontendNode *)(*pcVar3)();
    return pFVar10;
  }
  return (FMetasoundFrontendNode *)
         ((pFVar9->Nodes).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x88);
}

// operator() @ 14ade62b0

FMetasoundFrontendVariable * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendVariable,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>
::operator()(TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendVariable,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>
             *this,FMetasoundFrontendGraphClass *param_1)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  FMetasoundFrontendGraph *pFVar10;
  FMetasoundFrontendVariable *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  pFVar10 = BuilderPrivate::FindBuildGraphChecked(param_1);
  iVar2 = this->CachedIndex;
  if ((iVar2 != -1) && (iVar2 < (pFVar10->Variables).ArrayNum)) {
    if ((iVar2 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FMetasoundFrontendVariable *)(*pcVar4)();
      return pFVar11;
    }
    pFVar3 = (pFVar10->Variables).AllocatorInstance.Data;
    if (((*(uint *)(pFVar3 + (longlong)iVar2 * 0xb8 + 0x74) == (this->Test).VariableID.D &&
         *(uint *)(pFVar3 + (longlong)iVar2 * 0xb8 + 0x70) == (this->Test).VariableID.C) &&
        *(uint *)(pFVar3 + (longlong)iVar2 * 0xb8 + 0x6c) == (this->Test).VariableID.B) &&
        *(uint *)(pFVar3 + (longlong)iVar2 * 0xb8 + 0x68) == (this->Test).VariableID.A) {
      uVar12 = this->CachedIndex;
      uVar14 = 0;
      if ((int)uVar12 < (pFVar10->Variables).ArrayNum) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FMetasoundFrontendVariable *)(*pcVar4)();
        return pFVar11;
      }
      return (FMetasoundFrontendVariable *)
             ((pFVar10->Variables).AllocatorInstance.Data + (longlong)(int)uVar12 * 0xb8);
    }
  }
  pFVar3 = (pFVar10->Variables).AllocatorInstance.Data;
  uVar5 = (this->Test).VariableID.A;
  uVar6 = (this->Test).VariableID.B;
  uVar7 = (this->Test).VariableID.C;
  uVar8 = (this->Test).VariableID.D;
  pFVar13 = pFVar3;
  while( true ) {
    if (pFVar13 == pFVar3 + (longlong)(pFVar10->Variables).ArrayNum * 0xb8) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendVariable *)0x0;
    }
    if (((uVar8 == *(int *)(pFVar13 + 0x74) && uVar7 == *(int *)(pFVar13 + 0x70)) &&
        uVar6 == *(int *)(pFVar13 + 0x6c)) && uVar5 == *(int *)(pFVar13 + 0x68)) break;
    pFVar13 = pFVar13 + 0xb8;
  }
  lVar1 = ((longlong)pFVar13 - (longlong)pFVar3) +
          SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pFVar13 - (longlong)pFVar3),8);
  uVar12 = (int)(lVar1 >> 7) - (int)(lVar1 >> 0x3f);
  this->CachedIndex = uVar12;
  if (uVar12 == 0xffffffff) {
    return (FMetasoundFrontendVariable *)0x0;
  }
  uVar14 = 0;
  if ((int)uVar12 < (pFVar10->Variables).ArrayNum) {
    uVar14 = ~uVar12 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FMetasoundFrontendVariable *)(*pcVar4)();
    return pFVar11;
  }
  return (FMetasoundFrontendVariable *)
         ((pFVar10->Variables).AllocatorInstance.Data + (longlong)(int)uVar12 * 0xb8);
}

// operator() @ 14ade64d0

FMetasoundFrontendVertex * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>
::operator()(TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>
             *this,FMetasoundFrontendNode *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  FMetasoundFrontendVertex *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  iVar1 = this->CachedIndex;
  if ((iVar1 != -1) && (iVar1 < (param_1->Interface).Inputs.ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FMetasoundFrontendVertex *)(*pcVar3)();
      return pFVar9;
    }
    pFVar2 = (param_1->Interface).Inputs.AllocatorInstance.Data;
    if (((*(uint *)(pFVar2 + (longlong)iVar1 * 0x20 + 0x1c) == (this->Test).ID.D &&
         *(uint *)(pFVar2 + (longlong)iVar1 * 0x20 + 0x18) == (this->Test).ID.C) &&
        *(uint *)(pFVar2 + (longlong)iVar1 * 0x20 + 0x14) == (this->Test).ID.B) &&
        *(uint *)(pFVar2 + (longlong)iVar1 * 0x20 + 0x10) == (this->Test).ID.A) {
      uVar10 = this->CachedIndex;
      uVar12 = 0;
      if ((int)uVar10 < (param_1->Interface).Inputs.ArrayNum) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FMetasoundFrontendVertex *)(*pcVar3)();
        return pFVar9;
      }
      return (FMetasoundFrontendVertex *)
             ((param_1->Interface).Inputs.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
    }
  }
  pFVar2 = (param_1->Interface).Inputs.AllocatorInstance.Data;
  uVar4 = (this->Test).ID.A;
  uVar5 = (this->Test).ID.B;
  uVar6 = (this->Test).ID.C;
  uVar7 = (this->Test).ID.D;
  pFVar11 = pFVar2;
  while( true ) {
    if (pFVar11 == pFVar2 + (longlong)(param_1->Interface).Inputs.ArrayNum * 0x20) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendVertex *)0x0;
    }
    if (((uVar7 == *(int *)(pFVar11 + 0x1c) && uVar6 == *(int *)(pFVar11 + 0x18)) &&
        uVar5 == *(int *)(pFVar11 + 0x14)) && uVar4 == *(int *)(pFVar11 + 0x10)) break;
    pFVar11 = pFVar11 + 0x20;
  }
  uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar2 >> 5);
  this->CachedIndex = uVar10;
  if (uVar10 == 0xffffffff) {
    return (FMetasoundFrontendVertex *)0x0;
  }
  uVar12 = 0;
  if ((int)uVar10 < (param_1->Interface).Inputs.ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FMetasoundFrontendVertex *)(*pcVar3)();
    return pFVar9;
  }
  return (FMetasoundFrontendVertex *)
         ((param_1->Interface).Inputs.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
}

// operator() @ 14ade66c0

FMetasoundFrontendVertex * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>
::operator()(TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>
             *this,FMetasoundFrontendNode *param_1)

{
  int iVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendVertex *pFVar5;
  uint uVar6;
  FName *pFVar7;
  uint uVar8;
  
  iVar1 = this->CachedIndex;
  if ((iVar1 != -1) && (iVar1 < (param_1->Interface).Inputs.ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FMetasoundFrontendVertex *)(*pcVar3)();
      return pFVar5;
    }
    if (*(FName *)((param_1->Interface).Inputs.AllocatorInstance.Data + (longlong)iVar1 * 0x20) ==
        (this->Test).Name) {
      uVar6 = this->CachedIndex;
      uVar8 = 0;
      if ((int)uVar6 < (param_1->Interface).Inputs.ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FMetasoundFrontendVertex *)(*pcVar3)();
        return pFVar5;
      }
      return (FMetasoundFrontendVertex *)
             ((param_1->Interface).Inputs.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20);
    }
  }
  pFVar2 = (FName *)(param_1->Interface).Inputs.AllocatorInstance.Data;
  pFVar7 = pFVar2;
  while( true ) {
    if (pFVar7 == pFVar2 + (longlong)(param_1->Interface).Inputs.ArrayNum * 4) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendVertex *)0x0;
    }
    if (*pFVar7 == (this->Test).Name) break;
    pFVar7 = pFVar7 + 4;
  }
  uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar2 >> 5);
  this->CachedIndex = uVar6;
  if (uVar6 == 0xffffffff) {
    return (FMetasoundFrontendVertex *)0x0;
  }
  uVar8 = 0;
  if ((int)uVar6 < (param_1->Interface).Inputs.ArrayNum) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FMetasoundFrontendVertex *)(*pcVar3)();
    return pFVar5;
  }
  return (FMetasoundFrontendVertex *)
         ((param_1->Interface).Inputs.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20);
}

// operator() @ 14ade6870

FMetasoundFrontendVertex * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>
::operator()(TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>
             *this,FMetasoundFrontendNode *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  FMetasoundFrontendVertex *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  iVar1 = this->CachedIndex;
  if ((iVar1 != -1) && (iVar1 < (param_1->Interface).Outputs.ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FMetasoundFrontendVertex *)(*pcVar3)();
      return pFVar9;
    }
    pFVar2 = (param_1->Interface).Outputs.AllocatorInstance.Data;
    if (((*(uint *)(pFVar2 + (longlong)iVar1 * 0x20 + 0x1c) == (this->Test).ID.D &&
         *(uint *)(pFVar2 + (longlong)iVar1 * 0x20 + 0x18) == (this->Test).ID.C) &&
        *(uint *)(pFVar2 + (longlong)iVar1 * 0x20 + 0x14) == (this->Test).ID.B) &&
        *(uint *)(pFVar2 + (longlong)iVar1 * 0x20 + 0x10) == (this->Test).ID.A) {
      uVar10 = this->CachedIndex;
      uVar12 = 0;
      if ((int)uVar10 < (param_1->Interface).Outputs.ArrayNum) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FMetasoundFrontendVertex *)(*pcVar3)();
        return pFVar9;
      }
      return (FMetasoundFrontendVertex *)
             ((param_1->Interface).Outputs.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
    }
  }
  pFVar2 = (param_1->Interface).Outputs.AllocatorInstance.Data;
  uVar4 = (this->Test).ID.A;
  uVar5 = (this->Test).ID.B;
  uVar6 = (this->Test).ID.C;
  uVar7 = (this->Test).ID.D;
  pFVar11 = pFVar2;
  while( true ) {
    if (pFVar11 == pFVar2 + (longlong)(param_1->Interface).Outputs.ArrayNum * 0x20) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendVertex *)0x0;
    }
    if (((uVar7 == *(int *)(pFVar11 + 0x1c) && uVar6 == *(int *)(pFVar11 + 0x18)) &&
        uVar5 == *(int *)(pFVar11 + 0x14)) && uVar4 == *(int *)(pFVar11 + 0x10)) break;
    pFVar11 = pFVar11 + 0x20;
  }
  uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar2 >> 5);
  this->CachedIndex = uVar10;
  if (uVar10 == 0xffffffff) {
    return (FMetasoundFrontendVertex *)0x0;
  }
  uVar12 = 0;
  if ((int)uVar10 < (param_1->Interface).Outputs.ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FMetasoundFrontendVertex *)(*pcVar3)();
    return pFVar9;
  }
  return (FMetasoundFrontendVertex *)
         ((param_1->Interface).Outputs.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
}

// operator() @ 14ade6a60

FMetasoundFrontendVertex * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>
::operator()(TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>
             *this,FMetasoundFrontendNode *param_1)

{
  int iVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendVertex *pFVar5;
  uint uVar6;
  FName *pFVar7;
  uint uVar8;
  
  iVar1 = this->CachedIndex;
  if ((iVar1 != -1) && (iVar1 < (param_1->Interface).Outputs.ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FMetasoundFrontendVertex *)(*pcVar3)();
      return pFVar5;
    }
    if (*(FName *)((param_1->Interface).Outputs.AllocatorInstance.Data + (longlong)iVar1 * 0x20) ==
        (this->Test).Name) {
      uVar6 = this->CachedIndex;
      uVar8 = 0;
      if ((int)uVar6 < (param_1->Interface).Outputs.ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FMetasoundFrontendVertex *)(*pcVar3)();
        return pFVar5;
      }
      return (FMetasoundFrontendVertex *)
             ((param_1->Interface).Outputs.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20);
    }
  }
  pFVar2 = (FName *)(param_1->Interface).Outputs.AllocatorInstance.Data;
  pFVar7 = pFVar2;
  while( true ) {
    if (pFVar7 == pFVar2 + (longlong)(param_1->Interface).Outputs.ArrayNum * 4) {
      this->CachedIndex = -1;
      return (FMetasoundFrontendVertex *)0x0;
    }
    if (*pFVar7 == (this->Test).Name) break;
    pFVar7 = pFVar7 + 4;
  }
  uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar2 >> 5);
  this->CachedIndex = uVar6;
  if (uVar6 == 0xffffffff) {
    return (FMetasoundFrontendVertex *)0x0;
  }
  uVar8 = 0;
  if ((int)uVar6 < (param_1->Interface).Outputs.ArrayNum) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FMetasoundFrontendVertex *)(*pcVar3)();
    return pFVar5;
  }
  return (FMetasoundFrontendVertex *)
         ((param_1->Interface).Outputs.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20);
}

