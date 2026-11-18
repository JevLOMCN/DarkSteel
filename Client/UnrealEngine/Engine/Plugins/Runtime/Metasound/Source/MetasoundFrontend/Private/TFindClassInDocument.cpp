// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 18

// operator()<FMetasoundFrontendDocument_const_> @ 14add5820

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
::operator()<FMetasoundFrontendDocument_const_>
          (TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
           *this,FMetasoundFrontendDocument *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMetasoundFrontendClass *pFVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  uint local_28;
  uint uStack_24;
  uint uStack_1c;
  FGuid local_18;
  
  pFVar5 = FindClassInCachedLocation<FMetasoundFrontendDocument_const_>(this,param_1);
  if (pFVar5 == (FMetasoundFrontendClass *)0x0) {
    local_18.A = (this->Test).ClassID.A;
    local_18.B = (this->Test).ClassID.B;
    local_18.C = (this->Test).ClassID.C;
    local_18.D = (this->Test).ClassID.D;
    pFVar1 = (param_1->Dependencies).AllocatorInstance.Data;
    for (pFVar7 = pFVar1; pFVar7 != pFVar1 + (longlong)(param_1->Dependencies).ArrayNum * 0x90;
        pFVar7 = pFVar7 + 0x90) {
      if (((local_18.D == *(uint *)(pFVar7 + 0x14) && local_18.C == *(uint *)(pFVar7 + 0x10)) &&
          local_18.B == *(uint *)(pFVar7 + 0xc)) && local_18.A == *(uint *)(pFVar7 + 8)) {
        lVar8 = ((longlong)pFVar7 - (longlong)pFVar1) / 0x12 +
                ((longlong)pFVar7 - (longlong)pFVar1 >> 0x3f);
        uVar4 = (int)(lVar8 >> 3) - (int)(lVar8 >> 0x3f);
        this->CachedIndex = uVar4;
        if (uVar4 != 0xffffffff) {
          this->CachedSource = Dependencies;
          uVar6 = 0;
          if ((int)uVar4 < (param_1->Dependencies).ArrayNum) {
            uVar6 = ~uVar4 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar2)();
            return pFVar5;
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x90);
        }
        goto LAB_14add58c5;
      }
    }
    this->CachedIndex = -1;
LAB_14add58c5:
    uVar4 = TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_>::
            IndexOfByPredicate<Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
                      (&param_1->Subgraphs,(FIsClassWithID *)&local_18);
    this->CachedIndex = uVar4;
    if (uVar4 == 0xffffffff) {
      this->CachedSource = None;
      pFVar5 = (FMetasoundFrontendClass *)0x0;
    }
    else {
      this->CachedSource = Subgraphs;
      uVar6 = 0;
      if ((int)uVar4 < (param_1->Subgraphs).ArrayNum) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMetasoundFrontendClass *)(*pcVar2)();
        return pFVar5;
      }
      pFVar5 = (FMetasoundFrontendClass *)
               ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0xf8);
    }
  }
  return pFVar5;
}

// operator()<FMetasoundFrontendDocument_const_> @ 14add5a00

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>
::operator()<FMetasoundFrontendDocument_const_>
          (TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>
           *this,FMetasoundFrontendDocument *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendClass *pFVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FMetasoundFrontendClassMetadata local_88;
  FMetasoundFrontendClassMetadata local_48;
  
  pFVar5 = FindClassInCachedLocation<FMetasoundFrontendDocument_const_>(this,param_1);
  if (pFVar5 == (FMetasoundFrontendClass *)0x0) {
    local_88.ChangeID.D = (this->Test).Metadata.ChangeID.D;
    local_88.ClassName.Namespace = (this->Test).Metadata.ClassName.Namespace;
    local_88.ClassName.Name = (this->Test).Metadata.ClassName.Name;
    local_88.ClassName.Variant = (this->Test).Metadata.ClassName.Variant;
    local_88.Version = (this->Test).Metadata.Version;
    iVar1 = (param_1->Dependencies).ArrayNum;
    pFVar2 = (param_1->Dependencies).AllocatorInstance.Data;
    local_88.Type = (this->Test).Metadata.Type;
    local_88._33_1_ = (this->Test).Metadata.field_0x21;
    local_88.AccessFlags = (this->Test).Metadata.AccessFlags;
    local_88.ChangeID.A = (this->Test).Metadata.ChangeID.A;
    local_88.ChangeID.B = (this->Test).Metadata.ChangeID.B;
    local_88.ChangeID.C = (this->Test).Metadata.ChangeID.C;
    for (pFVar8 = pFVar2; pFVar8 != pFVar2 + (longlong)iVar1 * 0x90; pFVar8 = pFVar8 + 0x90) {
      bVar4 = NodeClassRegistryKey::IsEqual
                        (&local_88,(FMetasoundFrontendClassMetadata *)(pFVar8 + 0x18));
      if (bVar4) {
        lVar7 = ((longlong)pFVar8 - (longlong)pFVar2) / 0x12 +
                ((longlong)pFVar8 - (longlong)pFVar2 >> 0x3f);
        uVar9 = (int)(lVar7 >> 3) - (int)(lVar7 >> 0x3f);
        this->CachedIndex = uVar9;
        if (uVar9 != 0xffffffff) {
          this->CachedSource = Dependencies;
          uVar6 = 0;
          if ((int)uVar9 < (param_1->Dependencies).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x90);
        }
        goto LAB_14add5aa8;
      }
    }
    this->CachedIndex = -1;
LAB_14add5aa8:
    pFVar2 = (param_1->Subgraphs).AllocatorInstance.Data;
    local_48.ChangeID.D = (this->Test).Metadata.ChangeID.D;
    local_48.ClassName.Namespace = (this->Test).Metadata.ClassName.Namespace;
    local_48.ClassName.Name = (this->Test).Metadata.ClassName.Name;
    iVar1 = (param_1->Subgraphs).ArrayNum;
    local_48.ClassName.Variant = (this->Test).Metadata.ClassName.Variant;
    local_48.Version = (this->Test).Metadata.Version;
    local_48.Type = (this->Test).Metadata.Type;
    local_48._33_1_ = (this->Test).Metadata.field_0x21;
    local_48.AccessFlags = (this->Test).Metadata.AccessFlags;
    local_48.ChangeID.A = (this->Test).Metadata.ChangeID.A;
    local_48.ChangeID.B = (this->Test).Metadata.ChangeID.B;
    local_48.ChangeID.C = (this->Test).Metadata.ChangeID.C;
    for (pFVar8 = pFVar2; pFVar8 != pFVar2 + (longlong)iVar1 * 0xf8; pFVar8 = pFVar8 + 0xf8) {
      bVar4 = NodeClassRegistryKey::IsEqual
                        (&local_48,(FMetasoundFrontendClassMetadata *)(pFVar8 + 0x18));
      if (bVar4) {
        lVar7 = ((longlong)pFVar8 - (longlong)pFVar2) +
                SUB168(SEXT816(-0x7bdef7bdef7bdef7) * SEXT816((longlong)pFVar8 - (longlong)pFVar2),8
                      );
        uVar9 = (int)(lVar7 >> 7) - (int)(lVar7 >> 0x3f);
        this->CachedIndex = uVar9;
        if (uVar9 != 0xffffffff) {
          this->CachedSource = Subgraphs;
          uVar6 = 0;
          if ((int)uVar9 < (param_1->Subgraphs).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0xf8);
        }
        goto LAB_14add5b28;
      }
    }
    this->CachedIndex = -1;
LAB_14add5b28:
    this->CachedSource = None;
    pFVar5 = (FMetasoundFrontendClass *)0x0;
  }
  return pFVar5;
}

// operator()<FMetasoundFrontendDocument> @ 14add5c90

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
::operator()<FMetasoundFrontendDocument>
          (TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
           *this,FMetasoundFrontendDocument *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMetasoundFrontendClass *pFVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  uint local_28;
  uint uStack_24;
  uint uStack_1c;
  FGuid local_18;
  
  pFVar5 = FindClassInCachedLocation<FMetasoundFrontendDocument>(this,param_1);
  if (pFVar5 == (FMetasoundFrontendClass *)0x0) {
    local_18.A = (this->Test).ClassID.A;
    local_18.B = (this->Test).ClassID.B;
    local_18.C = (this->Test).ClassID.C;
    local_18.D = (this->Test).ClassID.D;
    pFVar1 = (param_1->Dependencies).AllocatorInstance.Data;
    for (pFVar7 = pFVar1; pFVar7 != pFVar1 + (longlong)(param_1->Dependencies).ArrayNum * 0x90;
        pFVar7 = pFVar7 + 0x90) {
      if (((local_18.D == *(uint *)(pFVar7 + 0x14) && local_18.C == *(uint *)(pFVar7 + 0x10)) &&
          local_18.B == *(uint *)(pFVar7 + 0xc)) && local_18.A == *(uint *)(pFVar7 + 8)) {
        lVar8 = ((longlong)pFVar7 - (longlong)pFVar1) / 0x12 +
                ((longlong)pFVar7 - (longlong)pFVar1 >> 0x3f);
        uVar4 = (int)(lVar8 >> 3) - (int)(lVar8 >> 0x3f);
        this->CachedIndex = uVar4;
        if (uVar4 != 0xffffffff) {
          this->CachedSource = Dependencies;
          uVar6 = 0;
          if ((int)uVar4 < (param_1->Dependencies).ArrayNum) {
            uVar6 = ~uVar4 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar2)();
            return pFVar5;
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x90);
        }
        goto LAB_14add5d35;
      }
    }
    this->CachedIndex = -1;
LAB_14add5d35:
    uVar4 = TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_>::
            IndexOfByPredicate<Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
                      (&param_1->Subgraphs,(FIsClassWithID *)&local_18);
    this->CachedIndex = uVar4;
    if (uVar4 == 0xffffffff) {
      this->CachedSource = None;
      pFVar5 = (FMetasoundFrontendClass *)0x0;
    }
    else {
      this->CachedSource = Subgraphs;
      uVar6 = 0;
      if ((int)uVar4 < (param_1->Subgraphs).ArrayNum) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMetasoundFrontendClass *)(*pcVar2)();
        return pFVar5;
      }
      pFVar5 = (FMetasoundFrontendClass *)
               ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0xf8);
    }
  }
  return pFVar5;
}

// operator()<FMetasoundFrontendDocument> @ 14add5e70

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>
::operator()<FMetasoundFrontendDocument>
          (TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>
           *this,FMetasoundFrontendDocument *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendClass *pFVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FMetasoundFrontendClassMetadata local_88;
  FMetasoundFrontendClassMetadata local_48;
  
  pFVar5 = FindClassInCachedLocation<FMetasoundFrontendDocument>(this,param_1);
  if (pFVar5 == (FMetasoundFrontendClass *)0x0) {
    local_88.ChangeID.D = (this->Test).Metadata.ChangeID.D;
    local_88.ClassName.Namespace = (this->Test).Metadata.ClassName.Namespace;
    local_88.ClassName.Name = (this->Test).Metadata.ClassName.Name;
    local_88.ClassName.Variant = (this->Test).Metadata.ClassName.Variant;
    local_88.Version = (this->Test).Metadata.Version;
    iVar1 = (param_1->Dependencies).ArrayNum;
    pFVar2 = (param_1->Dependencies).AllocatorInstance.Data;
    local_88.Type = (this->Test).Metadata.Type;
    local_88._33_1_ = (this->Test).Metadata.field_0x21;
    local_88.AccessFlags = (this->Test).Metadata.AccessFlags;
    local_88.ChangeID.A = (this->Test).Metadata.ChangeID.A;
    local_88.ChangeID.B = (this->Test).Metadata.ChangeID.B;
    local_88.ChangeID.C = (this->Test).Metadata.ChangeID.C;
    for (pFVar8 = pFVar2; pFVar8 != pFVar2 + (longlong)iVar1 * 0x90; pFVar8 = pFVar8 + 0x90) {
      bVar4 = NodeClassRegistryKey::IsEqual
                        (&local_88,(FMetasoundFrontendClassMetadata *)(pFVar8 + 0x18));
      if (bVar4) {
        lVar7 = ((longlong)pFVar8 - (longlong)pFVar2) / 0x12 +
                ((longlong)pFVar8 - (longlong)pFVar2 >> 0x3f);
        uVar9 = (int)(lVar7 >> 3) - (int)(lVar7 >> 0x3f);
        this->CachedIndex = uVar9;
        if (uVar9 != 0xffffffff) {
          this->CachedSource = Dependencies;
          uVar6 = 0;
          if ((int)uVar9 < (param_1->Dependencies).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x90);
        }
        goto LAB_14add5f18;
      }
    }
    this->CachedIndex = -1;
LAB_14add5f18:
    pFVar2 = (param_1->Subgraphs).AllocatorInstance.Data;
    local_48.ChangeID.D = (this->Test).Metadata.ChangeID.D;
    local_48.ClassName.Namespace = (this->Test).Metadata.ClassName.Namespace;
    local_48.ClassName.Name = (this->Test).Metadata.ClassName.Name;
    iVar1 = (param_1->Subgraphs).ArrayNum;
    local_48.ClassName.Variant = (this->Test).Metadata.ClassName.Variant;
    local_48.Version = (this->Test).Metadata.Version;
    local_48.Type = (this->Test).Metadata.Type;
    local_48._33_1_ = (this->Test).Metadata.field_0x21;
    local_48.AccessFlags = (this->Test).Metadata.AccessFlags;
    local_48.ChangeID.A = (this->Test).Metadata.ChangeID.A;
    local_48.ChangeID.B = (this->Test).Metadata.ChangeID.B;
    local_48.ChangeID.C = (this->Test).Metadata.ChangeID.C;
    for (pFVar8 = pFVar2; pFVar8 != pFVar2 + (longlong)iVar1 * 0xf8; pFVar8 = pFVar8 + 0xf8) {
      bVar4 = NodeClassRegistryKey::IsEqual
                        (&local_48,(FMetasoundFrontendClassMetadata *)(pFVar8 + 0x18));
      if (bVar4) {
        lVar7 = ((longlong)pFVar8 - (longlong)pFVar2) +
                SUB168(SEXT816(-0x7bdef7bdef7bdef7) * SEXT816((longlong)pFVar8 - (longlong)pFVar2),8
                      );
        uVar9 = (int)(lVar7 >> 7) - (int)(lVar7 >> 0x3f);
        this->CachedIndex = uVar9;
        if (uVar9 != 0xffffffff) {
          this->CachedSource = Subgraphs;
          uVar6 = 0;
          if ((int)uVar9 < (param_1->Subgraphs).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0xf8);
        }
        goto LAB_14add5f98;
      }
    }
    this->CachedIndex = -1;
LAB_14add5f98:
    this->CachedSource = None;
    pFVar5 = (FMetasoundFrontendClass *)0x0;
  }
  return pFVar5;
}

// operator()<FMetasoundFrontendDocument> @ 14add6100

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
::operator()<FMetasoundFrontendDocument>
          (TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
           *this,FMetasoundFrontendDocument *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMetasoundFrontendClass *pFVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  uint local_28;
  uint uStack_24;
  uint uStack_1c;
  FGuid local_18;
  
  pFVar5 = FindClassInCachedLocation<FMetasoundFrontendDocument>(this,param_1);
  if (pFVar5 == (FMetasoundFrontendClass *)0x0) {
    local_18.A = (this->Test).ClassID.A;
    local_18.B = (this->Test).ClassID.B;
    local_18.C = (this->Test).ClassID.C;
    local_18.D = (this->Test).ClassID.D;
    pFVar1 = (param_1->Dependencies).AllocatorInstance.Data;
    for (pFVar7 = pFVar1; pFVar7 != pFVar1 + (longlong)(param_1->Dependencies).ArrayNum * 0x90;
        pFVar7 = pFVar7 + 0x90) {
      if (((local_18.D == *(uint *)(pFVar7 + 0x14) && local_18.C == *(uint *)(pFVar7 + 0x10)) &&
          local_18.B == *(uint *)(pFVar7 + 0xc)) && local_18.A == *(uint *)(pFVar7 + 8)) {
        lVar8 = ((longlong)pFVar7 - (longlong)pFVar1) / 0x12 +
                ((longlong)pFVar7 - (longlong)pFVar1 >> 0x3f);
        uVar4 = (int)(lVar8 >> 3) - (int)(lVar8 >> 0x3f);
        this->CachedIndex = uVar4;
        if (uVar4 != 0xffffffff) {
          this->CachedSource = Dependencies;
          uVar6 = 0;
          if ((int)uVar4 < (param_1->Dependencies).ArrayNum) {
            uVar6 = ~uVar4 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar2)();
            return pFVar5;
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x90);
        }
        goto LAB_14add61a5;
      }
    }
    this->CachedIndex = -1;
LAB_14add61a5:
    uVar4 = TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_>::
            IndexOfByPredicate<Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
                      (&param_1->Subgraphs,(FIsClassWithID *)&local_18);
    this->CachedIndex = uVar4;
    if (uVar4 == 0xffffffff) {
      this->CachedSource = None;
      pFVar5 = (FMetasoundFrontendClass *)0x0;
    }
    else {
      this->CachedSource = Subgraphs;
      uVar6 = 0;
      if ((int)uVar4 < (param_1->Subgraphs).ArrayNum) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMetasoundFrontendClass *)(*pcVar2)();
        return pFVar5;
      }
      pFVar5 = (FMetasoundFrontendClass *)
               ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0xf8);
    }
  }
  return pFVar5;
}

// operator()<FMetasoundFrontendDocument> @ 14add62e0

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>
::operator()<FMetasoundFrontendDocument>
          (TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>
           *this,FMetasoundFrontendDocument *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendClass *pFVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FMetasoundFrontendClassMetadata local_88;
  FMetasoundFrontendClassMetadata local_48;
  
  pFVar5 = FindClassInCachedLocation<FMetasoundFrontendDocument>(this,param_1);
  if (pFVar5 == (FMetasoundFrontendClass *)0x0) {
    local_88.ChangeID.D = (this->Test).Metadata.ChangeID.D;
    local_88.ClassName.Namespace = (this->Test).Metadata.ClassName.Namespace;
    local_88.ClassName.Name = (this->Test).Metadata.ClassName.Name;
    local_88.ClassName.Variant = (this->Test).Metadata.ClassName.Variant;
    local_88.Version = (this->Test).Metadata.Version;
    iVar1 = (param_1->Dependencies).ArrayNum;
    pFVar2 = (param_1->Dependencies).AllocatorInstance.Data;
    local_88.Type = (this->Test).Metadata.Type;
    local_88._33_1_ = (this->Test).Metadata.field_0x21;
    local_88.AccessFlags = (this->Test).Metadata.AccessFlags;
    local_88.ChangeID.A = (this->Test).Metadata.ChangeID.A;
    local_88.ChangeID.B = (this->Test).Metadata.ChangeID.B;
    local_88.ChangeID.C = (this->Test).Metadata.ChangeID.C;
    for (pFVar8 = pFVar2; pFVar8 != pFVar2 + (longlong)iVar1 * 0x90; pFVar8 = pFVar8 + 0x90) {
      bVar4 = NodeClassRegistryKey::IsEqual
                        (&local_88,(FMetasoundFrontendClassMetadata *)(pFVar8 + 0x18));
      if (bVar4) {
        lVar7 = ((longlong)pFVar8 - (longlong)pFVar2) / 0x12 +
                ((longlong)pFVar8 - (longlong)pFVar2 >> 0x3f);
        uVar9 = (int)(lVar7 >> 3) - (int)(lVar7 >> 0x3f);
        this->CachedIndex = uVar9;
        if (uVar9 != 0xffffffff) {
          this->CachedSource = Dependencies;
          uVar6 = 0;
          if ((int)uVar9 < (param_1->Dependencies).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x90);
        }
        goto LAB_14add6388;
      }
    }
    this->CachedIndex = -1;
LAB_14add6388:
    pFVar2 = (param_1->Subgraphs).AllocatorInstance.Data;
    local_48.ChangeID.D = (this->Test).Metadata.ChangeID.D;
    local_48.ClassName.Namespace = (this->Test).Metadata.ClassName.Namespace;
    local_48.ClassName.Name = (this->Test).Metadata.ClassName.Name;
    iVar1 = (param_1->Subgraphs).ArrayNum;
    local_48.ClassName.Variant = (this->Test).Metadata.ClassName.Variant;
    local_48.Version = (this->Test).Metadata.Version;
    local_48.Type = (this->Test).Metadata.Type;
    local_48._33_1_ = (this->Test).Metadata.field_0x21;
    local_48.AccessFlags = (this->Test).Metadata.AccessFlags;
    local_48.ChangeID.A = (this->Test).Metadata.ChangeID.A;
    local_48.ChangeID.B = (this->Test).Metadata.ChangeID.B;
    local_48.ChangeID.C = (this->Test).Metadata.ChangeID.C;
    for (pFVar8 = pFVar2; pFVar8 != pFVar2 + (longlong)iVar1 * 0xf8; pFVar8 = pFVar8 + 0xf8) {
      bVar4 = NodeClassRegistryKey::IsEqual
                        (&local_48,(FMetasoundFrontendClassMetadata *)(pFVar8 + 0x18));
      if (bVar4) {
        lVar7 = ((longlong)pFVar8 - (longlong)pFVar2) +
                SUB168(SEXT816(-0x7bdef7bdef7bdef7) * SEXT816((longlong)pFVar8 - (longlong)pFVar2),8
                      );
        uVar9 = (int)(lVar7 >> 7) - (int)(lVar7 >> 0x3f);
        this->CachedIndex = uVar9;
        if (uVar9 != 0xffffffff) {
          this->CachedSource = Subgraphs;
          uVar6 = 0;
          if ((int)uVar9 < (param_1->Subgraphs).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0xf8);
        }
        goto LAB_14add6408;
      }
    }
    this->CachedIndex = -1;
LAB_14add6408:
    this->CachedSource = None;
    pFVar5 = (FMetasoundFrontendClass *)0x0;
  }
  return pFVar5;
}

// FindClassInCachedLocation<FMetasoundFrontendDocument_const_> @ 14add7340

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
::FindClassInCachedLocation<FMetasoundFrontendDocument_const_>
          (TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
           *this,FMetasoundFrontendDocument *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FMetasoundFrontendClass *pFVar6;
  longlong lVar7;
  uint uVar8;
  
  iVar1 = this->CachedIndex;
  lVar7 = (longlong)iVar1;
  if (iVar1 != -1) {
    if (this->CachedSource == Dependencies) {
      if (iVar1 < (param_1->Dependencies).ArrayNum) {
        if (iVar1 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pFVar6 = (FMetasoundFrontendClass *)(*pcVar4)();
            return pFVar6;
          }
        }
        pFVar3 = (param_1->Dependencies).AllocatorInstance.Data;
        if (((*(uint *)(pFVar3 + lVar7 * 0x90 + 0x14) == (this->Test).ClassID.D &&
             *(uint *)(pFVar3 + lVar7 * 0x90 + 0x10) == (this->Test).ClassID.C) &&
            *(uint *)(pFVar3 + lVar7 * 0x90 + 0xc) == (this->Test).ClassID.B) &&
            (this->Test).ClassID.A == *(uint *)(pFVar3 + lVar7 * 0x90 + 8)) {
          uVar2 = this->CachedIndex;
          uVar8 = 0;
          if ((int)uVar2 < (param_1->Dependencies).ArrayNum) {
            uVar8 = ~uVar2 >> 0x1f;
          }
          if (uVar8 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pFVar6 = (FMetasoundFrontendClass *)(*pcVar4)();
              return pFVar6;
            }
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x90);
        }
      }
    }
    else if ((this->CachedSource == Subgraphs) && (iVar1 < (param_1->Subgraphs).ArrayNum)) {
      if (iVar1 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar6 = (FMetasoundFrontendClass *)(*pcVar4)();
          return pFVar6;
        }
      }
      pFVar3 = (param_1->Subgraphs).AllocatorInstance.Data;
      if (((*(uint *)(pFVar3 + lVar7 * 0xf8 + 0x14) == (this->Test).ClassID.D &&
           *(uint *)(pFVar3 + lVar7 * 0xf8 + 0x10) == (this->Test).ClassID.C) &&
          *(uint *)(pFVar3 + lVar7 * 0xf8 + 0xc) == (this->Test).ClassID.B) &&
          (this->Test).ClassID.A == *(uint *)(pFVar3 + lVar7 * 0xf8 + 8)) {
        uVar2 = this->CachedIndex;
        uVar8 = 0;
        if ((int)uVar2 < (param_1->Subgraphs).ArrayNum) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pFVar6 = (FMetasoundFrontendClass *)(*pcVar4)();
            return pFVar6;
          }
        }
        return (FMetasoundFrontendClass *)
               ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0xf8);
      }
    }
  }
  return (FMetasoundFrontendClass *)0x0;
}

// FindClassInCachedLocation<FMetasoundFrontendDocument_const_> @ 14add7560

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>
::FindClassInCachedLocation<FMetasoundFrontendDocument_const_>
          (TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>
           *this,FMetasoundFrontendDocument *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendClass *pFVar5;
  uint uVar6;
  
  iVar1 = this->CachedIndex;
  if (iVar1 != -1) {
    if (this->CachedSource == Dependencies) {
      if (iVar1 < (param_1->Dependencies).ArrayNum) {
        if (iVar1 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
        }
        bVar4 = NodeClassRegistryKey::IsEqual
                          (&(this->Test).Metadata,
                           (FMetasoundFrontendClassMetadata *)
                           ((param_1->Dependencies).AllocatorInstance.Data +
                           (longlong)iVar1 * 0x90 + 0x18));
        if (bVar4) {
          uVar2 = this->CachedIndex;
          uVar6 = 0;
          if ((int)uVar2 < (param_1->Dependencies).ArrayNum) {
            uVar6 = ~uVar2 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
              return pFVar5;
            }
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x90);
        }
      }
    }
    else if ((this->CachedSource == Subgraphs) && (iVar1 < (param_1->Subgraphs).ArrayNum)) {
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
          return pFVar5;
        }
      }
      bVar4 = NodeClassRegistryKey::IsEqual
                        (&(this->Test).Metadata,
                         (FMetasoundFrontendClassMetadata *)
                         ((param_1->Subgraphs).AllocatorInstance.Data +
                         (longlong)iVar1 * 0xf8 + 0x18));
      if (bVar4) {
        uVar2 = this->CachedIndex;
        uVar6 = 0;
        if ((int)uVar2 < (param_1->Subgraphs).ArrayNum) {
          uVar6 = ~uVar2 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
        }
        return (FMetasoundFrontendClass *)
               ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0xf8);
      }
    }
  }
  return (FMetasoundFrontendClass *)0x0;
}

// FindClassInCachedLocation<FMetasoundFrontendDocument_const_> @ 14add7770

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>
::FindClassInCachedLocation<FMetasoundFrontendDocument_const_>
          (TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>
           *this,FMetasoundFrontendDocument *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendClass *pFVar5;
  uint uVar6;
  
  iVar1 = this->CachedIndex;
  if (iVar1 != -1) {
    if (this->CachedSource == Dependencies) {
      if (iVar1 < (param_1->Dependencies).ArrayNum) {
        if (iVar1 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
        }
        bVar4 = NodeClassRegistryKey::IsEqual
                          (&(this->Test).NodeInfo,
                           (FMetasoundFrontendClassMetadata *)
                           ((param_1->Dependencies).AllocatorInstance.Data +
                           (longlong)iVar1 * 0x90 + 0x18));
        if (bVar4) {
          uVar2 = this->CachedIndex;
          uVar6 = 0;
          if ((int)uVar2 < (param_1->Dependencies).ArrayNum) {
            uVar6 = ~uVar2 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
              return pFVar5;
            }
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x90);
        }
      }
    }
    else if ((this->CachedSource == Subgraphs) && (iVar1 < (param_1->Subgraphs).ArrayNum)) {
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
          return pFVar5;
        }
      }
      bVar4 = NodeClassRegistryKey::IsEqual
                        (&(this->Test).NodeInfo,
                         (FMetasoundFrontendClassMetadata *)
                         ((param_1->Subgraphs).AllocatorInstance.Data +
                         (longlong)iVar1 * 0xf8 + 0x18));
      if (bVar4) {
        uVar2 = this->CachedIndex;
        uVar6 = 0;
        if ((int)uVar2 < (param_1->Subgraphs).ArrayNum) {
          uVar6 = ~uVar2 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
        }
        return (FMetasoundFrontendClass *)
               ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0xf8);
      }
    }
  }
  return (FMetasoundFrontendClass *)0x0;
}

// FindClassInCachedLocation<FMetasoundFrontendDocument_const_> @ 14add7980

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>
::FindClassInCachedLocation<FMetasoundFrontendDocument_const_>
          (TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>
           *this,FMetasoundFrontendDocument *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendClass *pFVar5;
  uint uVar6;
  
  iVar1 = this->CachedIndex;
  if (iVar1 != -1) {
    if (this->CachedSource == Dependencies) {
      if (iVar1 < (param_1->Dependencies).ArrayNum) {
        if (iVar1 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
        }
        bVar4 = FIsClassWithNodeRegistryKey::operator()
                          (&this->Test,
                           (FMetasoundFrontendClass *)
                           ((param_1->Dependencies).AllocatorInstance.Data + (longlong)iVar1 * 0x90)
                          );
        if (bVar4) {
          uVar2 = this->CachedIndex;
          uVar6 = 0;
          if ((int)uVar2 < (param_1->Dependencies).ArrayNum) {
            uVar6 = ~uVar2 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
              return pFVar5;
            }
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x90);
        }
      }
    }
    else if ((this->CachedSource == Subgraphs) && (iVar1 < (param_1->Subgraphs).ArrayNum)) {
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
          return pFVar5;
        }
      }
      bVar4 = FIsClassWithNodeRegistryKey::operator()
                        (&this->Test,
                         (FMetasoundFrontendGraphClass *)
                         ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)iVar1 * 0xf8));
      if (bVar4) {
        uVar2 = this->CachedIndex;
        uVar6 = 0;
        if ((int)uVar2 < (param_1->Subgraphs).ArrayNum) {
          uVar6 = ~uVar2 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
        }
        return (FMetasoundFrontendClass *)
               ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0xf8);
      }
    }
  }
  return (FMetasoundFrontendClass *)0x0;
}

// FindClassInCachedLocation<FMetasoundFrontendDocument> @ 14add7b80

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
::FindClassInCachedLocation<FMetasoundFrontendDocument>
          (TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
           *this,FMetasoundFrontendDocument *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FMetasoundFrontendClass *pFVar6;
  longlong lVar7;
  uint uVar8;
  
  iVar1 = this->CachedIndex;
  lVar7 = (longlong)iVar1;
  if (iVar1 != -1) {
    if (this->CachedSource == Dependencies) {
      if (iVar1 < (param_1->Dependencies).ArrayNum) {
        if (iVar1 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pFVar6 = (FMetasoundFrontendClass *)(*pcVar4)();
            return pFVar6;
          }
        }
        pFVar3 = (param_1->Dependencies).AllocatorInstance.Data;
        if (((*(uint *)(pFVar3 + lVar7 * 0x90 + 0x14) == (this->Test).ClassID.D &&
             *(uint *)(pFVar3 + lVar7 * 0x90 + 0x10) == (this->Test).ClassID.C) &&
            *(uint *)(pFVar3 + lVar7 * 0x90 + 0xc) == (this->Test).ClassID.B) &&
            (this->Test).ClassID.A == *(uint *)(pFVar3 + lVar7 * 0x90 + 8)) {
          uVar2 = this->CachedIndex;
          uVar8 = 0;
          if ((int)uVar2 < (param_1->Dependencies).ArrayNum) {
            uVar8 = ~uVar2 >> 0x1f;
          }
          if (uVar8 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pFVar6 = (FMetasoundFrontendClass *)(*pcVar4)();
              return pFVar6;
            }
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x90);
        }
      }
    }
    else if ((this->CachedSource == Subgraphs) && (iVar1 < (param_1->Subgraphs).ArrayNum)) {
      if (iVar1 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar6 = (FMetasoundFrontendClass *)(*pcVar4)();
          return pFVar6;
        }
      }
      pFVar3 = (param_1->Subgraphs).AllocatorInstance.Data;
      if (((*(uint *)(pFVar3 + lVar7 * 0xf8 + 0x14) == (this->Test).ClassID.D &&
           *(uint *)(pFVar3 + lVar7 * 0xf8 + 0x10) == (this->Test).ClassID.C) &&
          *(uint *)(pFVar3 + lVar7 * 0xf8 + 0xc) == (this->Test).ClassID.B) &&
          (this->Test).ClassID.A == *(uint *)(pFVar3 + lVar7 * 0xf8 + 8)) {
        uVar2 = this->CachedIndex;
        uVar8 = 0;
        if ((int)uVar2 < (param_1->Subgraphs).ArrayNum) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pFVar6 = (FMetasoundFrontendClass *)(*pcVar4)();
            return pFVar6;
          }
        }
        return (FMetasoundFrontendClass *)
               ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0xf8);
      }
    }
  }
  return (FMetasoundFrontendClass *)0x0;
}

// FindClassInCachedLocation<FMetasoundFrontendDocument> @ 14add7da0

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>
::FindClassInCachedLocation<FMetasoundFrontendDocument>
          (TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>
           *this,FMetasoundFrontendDocument *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendClass *pFVar5;
  uint uVar6;
  
  iVar1 = this->CachedIndex;
  if (iVar1 != -1) {
    if (this->CachedSource == Dependencies) {
      if (iVar1 < (param_1->Dependencies).ArrayNum) {
        if (iVar1 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
        }
        bVar4 = NodeClassRegistryKey::IsEqual
                          (&(this->Test).Metadata,
                           (FMetasoundFrontendClassMetadata *)
                           ((param_1->Dependencies).AllocatorInstance.Data +
                           (longlong)iVar1 * 0x90 + 0x18));
        if (bVar4) {
          uVar2 = this->CachedIndex;
          uVar6 = 0;
          if ((int)uVar2 < (param_1->Dependencies).ArrayNum) {
            uVar6 = ~uVar2 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
              return pFVar5;
            }
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x90);
        }
      }
    }
    else if ((this->CachedSource == Subgraphs) && (iVar1 < (param_1->Subgraphs).ArrayNum)) {
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
          return pFVar5;
        }
      }
      bVar4 = NodeClassRegistryKey::IsEqual
                        (&(this->Test).Metadata,
                         (FMetasoundFrontendClassMetadata *)
                         ((param_1->Subgraphs).AllocatorInstance.Data +
                         (longlong)iVar1 * 0xf8 + 0x18));
      if (bVar4) {
        uVar2 = this->CachedIndex;
        uVar6 = 0;
        if ((int)uVar2 < (param_1->Subgraphs).ArrayNum) {
          uVar6 = ~uVar2 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
        }
        return (FMetasoundFrontendClass *)
               ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0xf8);
      }
    }
  }
  return (FMetasoundFrontendClass *)0x0;
}

// FindClassInCachedLocation<FMetasoundFrontendDocument> @ 14add7fb0

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>
::FindClassInCachedLocation<FMetasoundFrontendDocument>
          (TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>
           *this,FMetasoundFrontendDocument *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendClass *pFVar5;
  uint uVar6;
  
  iVar1 = this->CachedIndex;
  if (iVar1 != -1) {
    if (this->CachedSource == Dependencies) {
      if (iVar1 < (param_1->Dependencies).ArrayNum) {
        if (iVar1 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
        }
        bVar4 = NodeClassRegistryKey::IsEqual
                          (&(this->Test).NodeInfo,
                           (FMetasoundFrontendClassMetadata *)
                           ((param_1->Dependencies).AllocatorInstance.Data +
                           (longlong)iVar1 * 0x90 + 0x18));
        if (bVar4) {
          uVar2 = this->CachedIndex;
          uVar6 = 0;
          if ((int)uVar2 < (param_1->Dependencies).ArrayNum) {
            uVar6 = ~uVar2 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
              return pFVar5;
            }
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x90);
        }
      }
    }
    else if ((this->CachedSource == Subgraphs) && (iVar1 < (param_1->Subgraphs).ArrayNum)) {
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
          return pFVar5;
        }
      }
      bVar4 = NodeClassRegistryKey::IsEqual
                        (&(this->Test).NodeInfo,
                         (FMetasoundFrontendClassMetadata *)
                         ((param_1->Subgraphs).AllocatorInstance.Data +
                         (longlong)iVar1 * 0xf8 + 0x18));
      if (bVar4) {
        uVar2 = this->CachedIndex;
        uVar6 = 0;
        if ((int)uVar2 < (param_1->Subgraphs).ArrayNum) {
          uVar6 = ~uVar2 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
        }
        return (FMetasoundFrontendClass *)
               ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0xf8);
      }
    }
  }
  return (FMetasoundFrontendClass *)0x0;
}

// FindClassInCachedLocation<FMetasoundFrontendDocument> @ 14add81c0

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>
::FindClassInCachedLocation<FMetasoundFrontendDocument>
          (TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>
           *this,FMetasoundFrontendDocument *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendClass *pFVar5;
  uint uVar6;
  
  iVar1 = this->CachedIndex;
  if (iVar1 != -1) {
    if (this->CachedSource == Dependencies) {
      if (iVar1 < (param_1->Dependencies).ArrayNum) {
        if (iVar1 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
        }
        bVar4 = FIsClassWithNodeRegistryKey::operator()
                          (&this->Test,
                           (FMetasoundFrontendClass *)
                           ((param_1->Dependencies).AllocatorInstance.Data + (longlong)iVar1 * 0x90)
                          );
        if (bVar4) {
          uVar2 = this->CachedIndex;
          uVar6 = 0;
          if ((int)uVar2 < (param_1->Dependencies).ArrayNum) {
            uVar6 = ~uVar2 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
              return pFVar5;
            }
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x90);
        }
      }
    }
    else if ((this->CachedSource == Subgraphs) && (iVar1 < (param_1->Subgraphs).ArrayNum)) {
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
          return pFVar5;
        }
      }
      bVar4 = FIsClassWithNodeRegistryKey::operator()
                        (&this->Test,
                         (FMetasoundFrontendGraphClass *)
                         ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)iVar1 * 0xf8));
      if (bVar4) {
        uVar2 = this->CachedIndex;
        uVar6 = 0;
        if ((int)uVar2 < (param_1->Subgraphs).ArrayNum) {
          uVar6 = ~uVar2 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
        }
        return (FMetasoundFrontendClass *)
               ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0xf8);
      }
    }
  }
  return (FMetasoundFrontendClass *)0x0;
}

// FindClassInCachedLocation<FMetasoundFrontendDocument> @ 14add83c0

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
::FindClassInCachedLocation<FMetasoundFrontendDocument>
          (TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
           *this,FMetasoundFrontendDocument *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FMetasoundFrontendClass *pFVar6;
  longlong lVar7;
  uint uVar8;
  
  iVar1 = this->CachedIndex;
  lVar7 = (longlong)iVar1;
  if (iVar1 != -1) {
    if (this->CachedSource == Dependencies) {
      if (iVar1 < (param_1->Dependencies).ArrayNum) {
        if (iVar1 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pFVar6 = (FMetasoundFrontendClass *)(*pcVar4)();
            return pFVar6;
          }
        }
        pFVar3 = (param_1->Dependencies).AllocatorInstance.Data;
        if (((*(uint *)(pFVar3 + lVar7 * 0x90 + 0x14) == (this->Test).ClassID.D &&
             *(uint *)(pFVar3 + lVar7 * 0x90 + 0x10) == (this->Test).ClassID.C) &&
            *(uint *)(pFVar3 + lVar7 * 0x90 + 0xc) == (this->Test).ClassID.B) &&
            (this->Test).ClassID.A == *(uint *)(pFVar3 + lVar7 * 0x90 + 8)) {
          uVar2 = this->CachedIndex;
          uVar8 = 0;
          if ((int)uVar2 < (param_1->Dependencies).ArrayNum) {
            uVar8 = ~uVar2 >> 0x1f;
          }
          if (uVar8 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pFVar6 = (FMetasoundFrontendClass *)(*pcVar4)();
              return pFVar6;
            }
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x90);
        }
      }
    }
    else if ((this->CachedSource == Subgraphs) && (iVar1 < (param_1->Subgraphs).ArrayNum)) {
      if (iVar1 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar6 = (FMetasoundFrontendClass *)(*pcVar4)();
          return pFVar6;
        }
      }
      pFVar3 = (param_1->Subgraphs).AllocatorInstance.Data;
      if (((*(uint *)(pFVar3 + lVar7 * 0xf8 + 0x14) == (this->Test).ClassID.D &&
           *(uint *)(pFVar3 + lVar7 * 0xf8 + 0x10) == (this->Test).ClassID.C) &&
          *(uint *)(pFVar3 + lVar7 * 0xf8 + 0xc) == (this->Test).ClassID.B) &&
          (this->Test).ClassID.A == *(uint *)(pFVar3 + lVar7 * 0xf8 + 8)) {
        uVar2 = this->CachedIndex;
        uVar8 = 0;
        if ((int)uVar2 < (param_1->Subgraphs).ArrayNum) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pFVar6 = (FMetasoundFrontendClass *)(*pcVar4)();
            return pFVar6;
          }
        }
        return (FMetasoundFrontendClass *)
               ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0xf8);
      }
    }
  }
  return (FMetasoundFrontendClass *)0x0;
}

// FindClassInCachedLocation<FMetasoundFrontendDocument> @ 14add85e0

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>
::FindClassInCachedLocation<FMetasoundFrontendDocument>
          (TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>
           *this,FMetasoundFrontendDocument *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendClass *pFVar5;
  uint uVar6;
  
  iVar1 = this->CachedIndex;
  if (iVar1 != -1) {
    if (this->CachedSource == Dependencies) {
      if (iVar1 < (param_1->Dependencies).ArrayNum) {
        if (iVar1 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
        }
        bVar4 = NodeClassRegistryKey::IsEqual
                          (&(this->Test).Metadata,
                           (FMetasoundFrontendClassMetadata *)
                           ((param_1->Dependencies).AllocatorInstance.Data +
                           (longlong)iVar1 * 0x90 + 0x18));
        if (bVar4) {
          uVar2 = this->CachedIndex;
          uVar6 = 0;
          if ((int)uVar2 < (param_1->Dependencies).ArrayNum) {
            uVar6 = ~uVar2 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
              return pFVar5;
            }
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x90);
        }
      }
    }
    else if ((this->CachedSource == Subgraphs) && (iVar1 < (param_1->Subgraphs).ArrayNum)) {
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
          return pFVar5;
        }
      }
      bVar4 = NodeClassRegistryKey::IsEqual
                        (&(this->Test).Metadata,
                         (FMetasoundFrontendClassMetadata *)
                         ((param_1->Subgraphs).AllocatorInstance.Data +
                         (longlong)iVar1 * 0xf8 + 0x18));
      if (bVar4) {
        uVar2 = this->CachedIndex;
        uVar6 = 0;
        if ((int)uVar2 < (param_1->Subgraphs).ArrayNum) {
          uVar6 = ~uVar2 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
        }
        return (FMetasoundFrontendClass *)
               ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0xf8);
      }
    }
  }
  return (FMetasoundFrontendClass *)0x0;
}

// FindClassInCachedLocation<FMetasoundFrontendDocument> @ 14add87f0

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>
::FindClassInCachedLocation<FMetasoundFrontendDocument>
          (TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>
           *this,FMetasoundFrontendDocument *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendClass *pFVar5;
  uint uVar6;
  
  iVar1 = this->CachedIndex;
  if (iVar1 != -1) {
    if (this->CachedSource == Dependencies) {
      if (iVar1 < (param_1->Dependencies).ArrayNum) {
        if (iVar1 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
        }
        bVar4 = NodeClassRegistryKey::IsEqual
                          (&(this->Test).NodeInfo,
                           (FMetasoundFrontendClassMetadata *)
                           ((param_1->Dependencies).AllocatorInstance.Data +
                           (longlong)iVar1 * 0x90 + 0x18));
        if (bVar4) {
          uVar2 = this->CachedIndex;
          uVar6 = 0;
          if ((int)uVar2 < (param_1->Dependencies).ArrayNum) {
            uVar6 = ~uVar2 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
              return pFVar5;
            }
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x90);
        }
      }
    }
    else if ((this->CachedSource == Subgraphs) && (iVar1 < (param_1->Subgraphs).ArrayNum)) {
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
          return pFVar5;
        }
      }
      bVar4 = NodeClassRegistryKey::IsEqual
                        (&(this->Test).NodeInfo,
                         (FMetasoundFrontendClassMetadata *)
                         ((param_1->Subgraphs).AllocatorInstance.Data +
                         (longlong)iVar1 * 0xf8 + 0x18));
      if (bVar4) {
        uVar2 = this->CachedIndex;
        uVar6 = 0;
        if ((int)uVar2 < (param_1->Subgraphs).ArrayNum) {
          uVar6 = ~uVar2 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
        }
        return (FMetasoundFrontendClass *)
               ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0xf8);
      }
    }
  }
  return (FMetasoundFrontendClass *)0x0;
}

// FindClassInCachedLocation<FMetasoundFrontendDocument> @ 14add8a00

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::
TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>
::FindClassInCachedLocation<FMetasoundFrontendDocument>
          (TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>
           *this,FMetasoundFrontendDocument *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FMetasoundFrontendClass *pFVar5;
  uint uVar6;
  
  iVar1 = this->CachedIndex;
  if (iVar1 != -1) {
    if (this->CachedSource == Dependencies) {
      if (iVar1 < (param_1->Dependencies).ArrayNum) {
        if (iVar1 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
        }
        bVar4 = FIsClassWithNodeRegistryKey::operator()
                          (&this->Test,
                           (FMetasoundFrontendClass *)
                           ((param_1->Dependencies).AllocatorInstance.Data + (longlong)iVar1 * 0x90)
                          );
        if (bVar4) {
          uVar2 = this->CachedIndex;
          uVar6 = 0;
          if ((int)uVar2 < (param_1->Dependencies).ArrayNum) {
            uVar6 = ~uVar2 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
              return pFVar5;
            }
          }
          return (FMetasoundFrontendClass *)
                 ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x90);
        }
      }
    }
    else if ((this->CachedSource == Subgraphs) && (iVar1 < (param_1->Subgraphs).ArrayNum)) {
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
          return pFVar5;
        }
      }
      bVar4 = FIsClassWithNodeRegistryKey::operator()
                        (&this->Test,
                         (FMetasoundFrontendGraphClass *)
                         ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)iVar1 * 0xf8));
      if (bVar4) {
        uVar2 = this->CachedIndex;
        uVar6 = 0;
        if ((int)uVar2 < (param_1->Subgraphs).ArrayNum) {
          uVar6 = ~uVar2 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMetasoundFrontendClass *)(*pcVar3)();
            return pFVar5;
          }
        }
        return (FMetasoundFrontendClass *)
               ((param_1->Subgraphs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0xf8);
      }
    }
  }
  return (FMetasoundFrontendClass *)0x0;
}

