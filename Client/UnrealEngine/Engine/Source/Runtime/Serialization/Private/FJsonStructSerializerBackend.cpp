// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 20

// WritePropertyValue<signed_char> @ 148b983c0

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FJsonStructSerializerBackend::WritePropertyValue<signed_char>
          (FJsonStructSerializerBackend *this,FStructSerializerState *param_1,schar *param_2)

{
  int iVar1;
  FProperty *pFVar2;
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *pTVar3;
  FArchive *pFVar4;
  code *pcVar5;
  bool bVar6;
  EJsonToken EVar7;
  FFieldClass *pFVar8;
  FMapProperty *pFVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined2 local_res10 [4];
  undefined2 local_res20 [4];
  undefined2 local_48 [4];
  undefined2 local_40 [4];
  FString local_38;
  FString local_28;
  
  pFVar2 = param_1->ValueProperty;
  if (pFVar2 == (FProperty *)0x0) {
LAB_148b98684:
    pTVar3 = (this->JsonWriter).Object;
    bVar6 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::
            CanWriteValueWithoutIdentifier(pTVar3);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    EVar7 = pTVar3->PreviousTokenWritten;
    if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0)))) {
      local_48[0] = 0x2c;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_48,2);
      pTVar3->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,L"\r\n",4);
    pFVar4 = pTVar3->Stream;
    if (0 < pTVar3->IndentLevel) {
      uVar12 = (ulonglong)(uint)pTVar3->IndentLevel;
      do {
        local_40[0] = 9;
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_40,2);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                      (pTVar3,(longlong)*param_2);
    pTVar3->PreviousTokenWritten = EVar7;
  }
  else {
    if (pFVar2->ArrayDim < 2) {
      pFVar8 = FArrayProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b98441;
      pFVar2 = param_1->ValueProperty;
      pFVar8 = FSetProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b98441;
      pFVar9 = FField::GetOwner<FMapProperty>((FField *)param_1->ValueProperty);
      if ((pFVar9 != (FMapProperty *)0x0) && (param_1->KeyProperty == (FProperty *)0x0))
      goto LAB_148b98441;
    }
    else {
LAB_148b98441:
      if ((param_1->StateFlags & WritingContainerElement) == None) goto LAB_148b98684;
    }
    pFVar2 = param_1->KeyProperty;
    if (pFVar2 == (FProperty *)0x0) {
      pFVar2 = param_1->ValueProperty;
      pTVar3 = (this->JsonWriter).Object;
      bVar6 = IsThisNotNull(pFVar2,"FField::GetName");
      if (bVar6) {
        ::FName::ToString((FName *)&pFVar2->_padding_,&local_28);
      }
      else {
        ::FString::FString(&local_28,L"None");
      }
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_28);
      local_res20[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res20,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,(longlong)*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      (**(code **)(pFVar2->_padding_ + 0xe0))(pFVar2,&local_38,param_1->KeyData,0,0,0,0,0);
      pTVar3 = (this->JsonWriter).Object;
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_38);
      local_res10[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res10,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,(longlong)*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// WritePropertyValue<unsigned_char> @ 148b98780

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FJsonStructSerializerBackend::WritePropertyValue<unsigned_char>
          (FJsonStructSerializerBackend *this,FStructSerializerState *param_1,uchar *param_2)

{
  byte bVar1;
  int iVar2;
  FProperty *pFVar3;
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *pTVar4;
  FArchive *pFVar5;
  code *pcVar6;
  bool bVar7;
  EJsonToken EVar8;
  FFieldClass *pFVar9;
  FMapProperty *pFVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined2 local_res10 [4];
  undefined2 local_res20 [4];
  undefined2 local_48 [4];
  undefined2 local_40 [4];
  FString local_38;
  FString local_28;
  
  pFVar3 = param_1->ValueProperty;
  if (pFVar3 == (FProperty *)0x0) {
LAB_148b98a4a:
    pTVar4 = (this->JsonWriter).Object;
    bVar1 = *param_2;
    bVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::
            CanWriteValueWithoutIdentifier(pTVar4);
    if (!bVar7) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xcb,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    EVar8 = pTVar4->PreviousTokenWritten;
    if ((EVar8 != CurlyOpen) && ((Identifier < EVar8 || ((0x1013U >> (EVar8 & 0x1f) & 1) == 0)))) {
      local_48[0] = 0x2c;
      (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_48,2);
      pTVar4->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,L"\r\n",4);
    pFVar5 = pTVar4->Stream;
    if (0 < pTVar4->IndentLevel) {
      uVar13 = (ulonglong)(uint)pTVar4->IndentLevel;
      do {
        local_40[0] = 9;
        (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_40,2);
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    EVar8 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                      (pTVar4,(ulonglong)bVar1);
    pTVar4->PreviousTokenWritten = EVar8;
  }
  else {
    if (pFVar3->ArrayDim < 2) {
      pFVar9 = FArrayProperty::StaticClass();
      bVar7 = FFieldVariant::IsA((FFieldVariant *)&pFVar3->_padding_,pFVar9);
      if ((bVar7) && (pFVar3->_padding_ != 0)) goto LAB_148b98801;
      pFVar3 = param_1->ValueProperty;
      pFVar9 = FSetProperty::StaticClass();
      bVar7 = FFieldVariant::IsA((FFieldVariant *)&pFVar3->_padding_,pFVar9);
      if ((bVar7) && (pFVar3->_padding_ != 0)) goto LAB_148b98801;
      pFVar10 = FField::GetOwner<FMapProperty>((FField *)param_1->ValueProperty);
      if ((pFVar10 != (FMapProperty *)0x0) && (param_1->KeyProperty == (FProperty *)0x0))
      goto LAB_148b98801;
    }
    else {
LAB_148b98801:
      if ((param_1->StateFlags & WritingContainerElement) == None) goto LAB_148b98a4a;
    }
    pFVar3 = param_1->KeyProperty;
    if (pFVar3 == (FProperty *)0x0) {
      pFVar3 = param_1->ValueProperty;
      pTVar4 = (this->JsonWriter).Object;
      bVar1 = *param_2;
      bVar7 = IsThisNotNull(pFVar3,"FField::GetName");
      if (bVar7) {
        ::FName::ToString((FName *)&pFVar3->_padding_,&local_28);
      }
      else {
        ::FString::FString(&local_28,L"None");
      }
      iVar2 = (pTVar4->Stack).ArrayNum;
      uVar11 = iVar2 - 1;
      uVar12 = 0;
      if ((int)uVar11 < iVar2) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (*(int *)((pTVar4->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar4->Stack).ArrayNum * 4 + -4) != 6) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x106,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar4,&local_28);
      local_res20[0] = 0x20;
      (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_res20,2);
      EVar8 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar4,(ulonglong)bVar1);
      pTVar4->PreviousTokenWritten = EVar8;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      (**(code **)(pFVar3->_padding_ + 0xe0))(pFVar3,&local_38,param_1->KeyData,0,0,0,0,0);
      pTVar4 = (this->JsonWriter).Object;
      bVar1 = *param_2;
      iVar2 = (pTVar4->Stack).ArrayNum;
      uVar11 = iVar2 - 1;
      uVar12 = 0;
      if ((int)uVar11 < iVar2) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (*(int *)((pTVar4->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar4->Stack).ArrayNum * 4 + -4) != 6) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x106,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar4,&local_38);
      local_res10[0] = 0x20;
      (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_res10,2);
      EVar8 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar4,(ulonglong)bVar1);
      pTVar4->PreviousTokenWritten = EVar8;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// WritePropertyValue<short> @ 148b98b40

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FJsonStructSerializerBackend::WritePropertyValue<short>
          (FJsonStructSerializerBackend *this,FStructSerializerState *param_1,short *param_2)

{
  int iVar1;
  FProperty *pFVar2;
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *pTVar3;
  FArchive *pFVar4;
  code *pcVar5;
  bool bVar6;
  EJsonToken EVar7;
  FFieldClass *pFVar8;
  FMapProperty *pFVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined2 local_res10 [4];
  undefined2 local_res20 [4];
  undefined2 local_48 [4];
  undefined2 local_40 [4];
  FString local_38;
  FString local_28;
  
  pFVar2 = param_1->ValueProperty;
  if (pFVar2 == (FProperty *)0x0) {
LAB_148b98e04:
    pTVar3 = (this->JsonWriter).Object;
    bVar6 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::
            CanWriteValueWithoutIdentifier(pTVar3);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    EVar7 = pTVar3->PreviousTokenWritten;
    if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0)))) {
      local_48[0] = 0x2c;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_48,2);
      pTVar3->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,L"\r\n",4);
    pFVar4 = pTVar3->Stream;
    if (0 < pTVar3->IndentLevel) {
      uVar12 = (ulonglong)(uint)pTVar3->IndentLevel;
      do {
        local_40[0] = 9;
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_40,2);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                      (pTVar3,(longlong)*param_2);
    pTVar3->PreviousTokenWritten = EVar7;
  }
  else {
    if (pFVar2->ArrayDim < 2) {
      pFVar8 = FArrayProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b98bc1;
      pFVar2 = param_1->ValueProperty;
      pFVar8 = FSetProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b98bc1;
      pFVar9 = FField::GetOwner<FMapProperty>((FField *)param_1->ValueProperty);
      if ((pFVar9 != (FMapProperty *)0x0) && (param_1->KeyProperty == (FProperty *)0x0))
      goto LAB_148b98bc1;
    }
    else {
LAB_148b98bc1:
      if ((param_1->StateFlags & WritingContainerElement) == None) goto LAB_148b98e04;
    }
    pFVar2 = param_1->KeyProperty;
    if (pFVar2 == (FProperty *)0x0) {
      pFVar2 = param_1->ValueProperty;
      pTVar3 = (this->JsonWriter).Object;
      bVar6 = IsThisNotNull(pFVar2,"FField::GetName");
      if (bVar6) {
        ::FName::ToString((FName *)&pFVar2->_padding_,&local_28);
      }
      else {
        ::FString::FString(&local_28,L"None");
      }
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_28);
      local_res20[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res20,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,(longlong)*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      (**(code **)(pFVar2->_padding_ + 0xe0))(pFVar2,&local_38,param_1->KeyData,0,0,0,0,0);
      pTVar3 = (this->JsonWriter).Object;
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_38);
      local_res10[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res10,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,(longlong)*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// WritePropertyValue<unsigned_short> @ 148b98f00

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FJsonStructSerializerBackend::WritePropertyValue<unsigned_short>
          (FJsonStructSerializerBackend *this,FStructSerializerState *param_1,ushort *param_2)

{
  int iVar1;
  FProperty *pFVar2;
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *pTVar3;
  FArchive *pFVar4;
  code *pcVar5;
  bool bVar6;
  EJsonToken EVar7;
  FFieldClass *pFVar8;
  FMapProperty *pFVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined2 local_res10 [4];
  undefined2 local_res20 [4];
  undefined2 local_48 [4];
  undefined2 local_40 [4];
  FString local_38;
  FString local_28;
  
  pFVar2 = param_1->ValueProperty;
  if (pFVar2 == (FProperty *)0x0) {
LAB_148b991c4:
    pTVar3 = (this->JsonWriter).Object;
    bVar6 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::
            CanWriteValueWithoutIdentifier(pTVar3);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    EVar7 = pTVar3->PreviousTokenWritten;
    if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0)))) {
      local_48[0] = 0x2c;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_48,2);
      pTVar3->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,L"\r\n",4);
    pFVar4 = pTVar3->Stream;
    if (0 < pTVar3->IndentLevel) {
      uVar12 = (ulonglong)(uint)pTVar3->IndentLevel;
      do {
        local_40[0] = 9;
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_40,2);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                      (pTVar3,(ulonglong)*param_2);
    pTVar3->PreviousTokenWritten = EVar7;
  }
  else {
    if (pFVar2->ArrayDim < 2) {
      pFVar8 = FArrayProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b98f81;
      pFVar2 = param_1->ValueProperty;
      pFVar8 = FSetProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b98f81;
      pFVar9 = FField::GetOwner<FMapProperty>((FField *)param_1->ValueProperty);
      if ((pFVar9 != (FMapProperty *)0x0) && (param_1->KeyProperty == (FProperty *)0x0))
      goto LAB_148b98f81;
    }
    else {
LAB_148b98f81:
      if ((param_1->StateFlags & WritingContainerElement) == None) goto LAB_148b991c4;
    }
    pFVar2 = param_1->KeyProperty;
    if (pFVar2 == (FProperty *)0x0) {
      pFVar2 = param_1->ValueProperty;
      pTVar3 = (this->JsonWriter).Object;
      bVar6 = IsThisNotNull(pFVar2,"FField::GetName");
      if (bVar6) {
        ::FName::ToString((FName *)&pFVar2->_padding_,&local_28);
      }
      else {
        ::FString::FString(&local_28,L"None");
      }
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_28);
      local_res20[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res20,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,(ulonglong)*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      (**(code **)(pFVar2->_padding_ + 0xe0))(pFVar2,&local_38,param_1->KeyData,0,0,0,0,0);
      pTVar3 = (this->JsonWriter).Object;
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_38);
      local_res10[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res10,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,(ulonglong)*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// WritePropertyValue<int> @ 148b992c0

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FJsonStructSerializerBackend::WritePropertyValue<int>
          (FJsonStructSerializerBackend *this,FStructSerializerState *param_1,int *param_2)

{
  int iVar1;
  FProperty *pFVar2;
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *pTVar3;
  FArchive *pFVar4;
  code *pcVar5;
  bool bVar6;
  EJsonToken EVar7;
  FFieldClass *pFVar8;
  FMapProperty *pFVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined2 local_res10 [4];
  undefined2 local_res20 [4];
  undefined2 local_48 [4];
  undefined2 local_40 [4];
  FString local_38;
  FString local_28;
  
  pFVar2 = param_1->ValueProperty;
  if (pFVar2 == (FProperty *)0x0) {
LAB_148b99582:
    pTVar3 = (this->JsonWriter).Object;
    bVar6 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::
            CanWriteValueWithoutIdentifier(pTVar3);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    EVar7 = pTVar3->PreviousTokenWritten;
    if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0)))) {
      local_48[0] = 0x2c;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_48,2);
      pTVar3->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,L"\r\n",4);
    pFVar4 = pTVar3->Stream;
    if (0 < pTVar3->IndentLevel) {
      uVar12 = (ulonglong)(uint)pTVar3->IndentLevel;
      do {
        local_40[0] = 9;
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_40,2);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                      (pTVar3,(longlong)*param_2);
    pTVar3->PreviousTokenWritten = EVar7;
  }
  else {
    if (pFVar2->ArrayDim < 2) {
      pFVar8 = FArrayProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b99341;
      pFVar2 = param_1->ValueProperty;
      pFVar8 = FSetProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b99341;
      pFVar9 = FField::GetOwner<FMapProperty>((FField *)param_1->ValueProperty);
      if ((pFVar9 != (FMapProperty *)0x0) && (param_1->KeyProperty == (FProperty *)0x0))
      goto LAB_148b99341;
    }
    else {
LAB_148b99341:
      if ((param_1->StateFlags & WritingContainerElement) == None) goto LAB_148b99582;
    }
    pFVar2 = param_1->KeyProperty;
    if (pFVar2 == (FProperty *)0x0) {
      pFVar2 = param_1->ValueProperty;
      pTVar3 = (this->JsonWriter).Object;
      bVar6 = IsThisNotNull(pFVar2,"FField::GetName");
      if (bVar6) {
        ::FName::ToString((FName *)&pFVar2->_padding_,&local_28);
      }
      else {
        ::FString::FString(&local_28,L"None");
      }
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_28);
      local_res20[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res20,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,(longlong)*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      (**(code **)(pFVar2->_padding_ + 0xe0))(pFVar2,&local_38,param_1->KeyData,0,0,0,0,0);
      pTVar3 = (this->JsonWriter).Object;
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_38);
      local_res10[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res10,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,(longlong)*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// WritePropertyValue<unsigned_int> @ 148b99680

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FJsonStructSerializerBackend::WritePropertyValue<unsigned_int>
          (FJsonStructSerializerBackend *this,FStructSerializerState *param_1,uint *param_2)

{
  int iVar1;
  FProperty *pFVar2;
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *pTVar3;
  FArchive *pFVar4;
  code *pcVar5;
  bool bVar6;
  EJsonToken EVar7;
  FFieldClass *pFVar8;
  FMapProperty *pFVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined2 local_res10 [4];
  undefined2 local_res20 [4];
  undefined2 local_48 [4];
  undefined2 local_40 [4];
  FString local_38;
  FString local_28;
  
  pFVar2 = param_1->ValueProperty;
  if (pFVar2 == (FProperty *)0x0) {
LAB_148b99942:
    pTVar3 = (this->JsonWriter).Object;
    bVar6 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::
            CanWriteValueWithoutIdentifier(pTVar3);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    EVar7 = pTVar3->PreviousTokenWritten;
    if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0)))) {
      local_48[0] = 0x2c;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_48,2);
      pTVar3->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,L"\r\n",4);
    pFVar4 = pTVar3->Stream;
    if (0 < pTVar3->IndentLevel) {
      uVar12 = (ulonglong)(uint)pTVar3->IndentLevel;
      do {
        local_40[0] = 9;
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_40,2);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                      (pTVar3,(ulonglong)*param_2);
    pTVar3->PreviousTokenWritten = EVar7;
  }
  else {
    if (pFVar2->ArrayDim < 2) {
      pFVar8 = FArrayProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b99701;
      pFVar2 = param_1->ValueProperty;
      pFVar8 = FSetProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b99701;
      pFVar9 = FField::GetOwner<FMapProperty>((FField *)param_1->ValueProperty);
      if ((pFVar9 != (FMapProperty *)0x0) && (param_1->KeyProperty == (FProperty *)0x0))
      goto LAB_148b99701;
    }
    else {
LAB_148b99701:
      if ((param_1->StateFlags & WritingContainerElement) == None) goto LAB_148b99942;
    }
    pFVar2 = param_1->KeyProperty;
    if (pFVar2 == (FProperty *)0x0) {
      pFVar2 = param_1->ValueProperty;
      pTVar3 = (this->JsonWriter).Object;
      bVar6 = IsThisNotNull(pFVar2,"FField::GetName");
      if (bVar6) {
        ::FName::ToString((FName *)&pFVar2->_padding_,&local_28);
      }
      else {
        ::FString::FString(&local_28,L"None");
      }
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_28);
      local_res20[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res20,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,(ulonglong)*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      (**(code **)(pFVar2->_padding_ + 0xe0))(pFVar2,&local_38,param_1->KeyData,0,0,0,0,0);
      pTVar3 = (this->JsonWriter).Object;
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_38);
      local_res10[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res10,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,(ulonglong)*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// WritePropertyValue<float> @ 148b99bb0

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FJsonStructSerializerBackend::WritePropertyValue<float>
          (FJsonStructSerializerBackend *this,FStructSerializerState *param_1,float *param_2)

{
  int iVar1;
  FProperty *pFVar2;
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *pTVar3;
  FArchive *pFVar4;
  code *pcVar5;
  bool bVar6;
  EJsonToken EVar7;
  FFieldClass *pFVar8;
  FMapProperty *pFVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined2 local_res10 [4];
  undefined2 local_res20 [4];
  undefined2 local_48 [4];
  undefined2 local_40 [4];
  FString local_38;
  FString local_28;
  
  pFVar2 = param_1->ValueProperty;
  if (pFVar2 == (FProperty *)0x0) {
LAB_148b99e76:
    pTVar3 = (this->JsonWriter).Object;
    bVar6 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::
            CanWriteValueWithoutIdentifier(pTVar3);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    EVar7 = pTVar3->PreviousTokenWritten;
    if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0)))) {
      local_48[0] = 0x2c;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_48,2);
      pTVar3->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,L"\r\n",4);
    pFVar4 = pTVar3->Stream;
    if (0 < pTVar3->IndentLevel) {
      uVar12 = (ulonglong)(uint)pTVar3->IndentLevel;
      do {
        local_40[0] = 9;
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_40,2);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                      (pTVar3,*param_2);
    pTVar3->PreviousTokenWritten = EVar7;
  }
  else {
    if (pFVar2->ArrayDim < 2) {
      pFVar8 = FArrayProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b99c31;
      pFVar2 = param_1->ValueProperty;
      pFVar8 = FSetProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b99c31;
      pFVar9 = FField::GetOwner<FMapProperty>((FField *)param_1->ValueProperty);
      if ((pFVar9 != (FMapProperty *)0x0) && (param_1->KeyProperty == (FProperty *)0x0))
      goto LAB_148b99c31;
    }
    else {
LAB_148b99c31:
      if ((param_1->StateFlags & WritingContainerElement) == None) goto LAB_148b99e76;
    }
    pFVar2 = param_1->KeyProperty;
    if (pFVar2 == (FProperty *)0x0) {
      pFVar2 = param_1->ValueProperty;
      pTVar3 = (this->JsonWriter).Object;
      bVar6 = IsThisNotNull(pFVar2,"FField::GetName");
      if (bVar6) {
        ::FName::ToString((FName *)&pFVar2->_padding_,&local_28);
      }
      else {
        ::FString::FString(&local_28,L"None");
      }
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_28);
      local_res20[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res20,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      (**(code **)(pFVar2->_padding_ + 0xe0))(pFVar2,&local_38,param_1->KeyData,0,0,0,0,0);
      pTVar3 = (this->JsonWriter).Object;
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_38);
      local_res10[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res10,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// WritePropertyValue<double> @ 148b9a0e0

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FJsonStructSerializerBackend::WritePropertyValue<double>
          (FJsonStructSerializerBackend *this,FStructSerializerState *param_1,double *param_2)

{
  int iVar1;
  FProperty *pFVar2;
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *pTVar3;
  FArchive *pFVar4;
  code *pcVar5;
  bool bVar6;
  EJsonToken EVar7;
  FFieldClass *pFVar8;
  FMapProperty *pFVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined2 local_res10 [4];
  undefined2 local_res20 [4];
  undefined2 local_48 [4];
  undefined2 local_40 [4];
  FString local_38;
  FString local_28;
  
  pFVar2 = param_1->ValueProperty;
  if (pFVar2 == (FProperty *)0x0) {
LAB_148b9a3a6:
    pTVar3 = (this->JsonWriter).Object;
    bVar6 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::
            CanWriteValueWithoutIdentifier(pTVar3);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    EVar7 = pTVar3->PreviousTokenWritten;
    if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0)))) {
      local_48[0] = 0x2c;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_48,2);
      pTVar3->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,L"\r\n",4);
    pFVar4 = pTVar3->Stream;
    if (0 < pTVar3->IndentLevel) {
      uVar12 = (ulonglong)(uint)pTVar3->IndentLevel;
      do {
        local_40[0] = 9;
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_40,2);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                      (pTVar3,*param_2);
    pTVar3->PreviousTokenWritten = EVar7;
  }
  else {
    if (pFVar2->ArrayDim < 2) {
      pFVar8 = FArrayProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b9a161;
      pFVar2 = param_1->ValueProperty;
      pFVar8 = FSetProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b9a161;
      pFVar9 = FField::GetOwner<FMapProperty>((FField *)param_1->ValueProperty);
      if ((pFVar9 != (FMapProperty *)0x0) && (param_1->KeyProperty == (FProperty *)0x0))
      goto LAB_148b9a161;
    }
    else {
LAB_148b9a161:
      if ((param_1->StateFlags & WritingContainerElement) == None) goto LAB_148b9a3a6;
    }
    pFVar2 = param_1->KeyProperty;
    if (pFVar2 == (FProperty *)0x0) {
      pFVar2 = param_1->ValueProperty;
      pTVar3 = (this->JsonWriter).Object;
      bVar6 = IsThisNotNull(pFVar2,"FField::GetName");
      if (bVar6) {
        ::FName::ToString((FName *)&pFVar2->_padding_,&local_28);
      }
      else {
        ::FString::FString(&local_28,L"None");
      }
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_28);
      local_res20[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res20,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      (**(code **)(pFVar2->_padding_ + 0xe0))(pFVar2,&local_38,param_1->KeyData,0,0,0,0,0);
      pTVar3 = (this->JsonWriter).Object;
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_38);
      local_res10[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res10,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// WritePropertyValue<FString> @ 148b9a780

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FJsonStructSerializerBackend::WritePropertyValue<FString>
          (FJsonStructSerializerBackend *this,FStructSerializerState *param_1,FString *param_2)

{
  int iVar1;
  EJsonToken EVar2;
  FProperty *pFVar3;
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  FArchive *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FFieldClass *pFVar10;
  FMapProperty *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined2 local_res10 [8];
  undefined2 local_res20 [4];
  undefined2 local_b8 [4];
  undefined2 local_b0 [4];
  FString local_a8;
  FString local_98;
  undefined8 local_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  pFVar3 = param_1->ValueProperty;
  if (pFVar3 == (FProperty *)0x0) {
LAB_148b9aa81:
    pTVar4 = (this->JsonWriter).Object;
    bVar8 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::
            CanWriteValueWithoutIdentifier(pTVar4);
    if (!bVar8) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xfa,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    EVar2 = pTVar4->PreviousTokenWritten;
    if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
      local_b8[0] = 0x2c;
      (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_b8,2);
      pTVar4->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,L"\r\n",4);
    pFVar6 = pTVar4->Stream;
    if (0 < pTVar4->IndentLevel) {
      uVar13 = (ulonglong)(uint)pTVar4->IndentLevel;
      do {
        local_b0[0] = 9;
        (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_b0,2);
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    pFVar5 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_68._0_4_ = SUB84(pFVar5,0);
    local_68._4_4_ = (undefined4)((ulonglong)pFVar5 >> 0x20);
    local_38 = (undefined4)local_68;
    uStack_34 = local_68._4_4_;
    uStack_2c = uStack_5c;
    local_68 = pFVar5;
    iStack_30 = iStack_60;
    (**(code **)(pTVar4->_padding_ + 0x28))(pTVar4,&local_38);
    pTVar4->PreviousTokenWritten = String;
  }
  else {
    if (pFVar3->ArrayDim < 2) {
      pFVar10 = FArrayProperty::StaticClass();
      bVar8 = FFieldVariant::IsA((FFieldVariant *)&pFVar3->_padding_,pFVar10);
      if ((bVar8) && (pFVar3->_padding_ != 0)) goto LAB_148b9a807;
      pFVar3 = param_1->ValueProperty;
      pFVar10 = FSetProperty::StaticClass();
      bVar8 = FFieldVariant::IsA((FFieldVariant *)&pFVar3->_padding_,pFVar10);
      if ((bVar8) && (pFVar3->_padding_ != 0)) goto LAB_148b9a807;
      pFVar11 = FField::GetOwner<FMapProperty>((FField *)param_1->ValueProperty);
      if ((pFVar11 != (FMapProperty *)0x0) && (param_1->KeyProperty == (FProperty *)0x0))
      goto LAB_148b9a807;
    }
    else {
LAB_148b9a807:
      if ((param_1->StateFlags & WritingContainerElement) == None) goto LAB_148b9aa81;
    }
    pFVar3 = param_1->KeyProperty;
    if (pFVar3 == (FProperty *)0x0) {
      pFVar3 = param_1->ValueProperty;
      pTVar4 = (this->JsonWriter).Object;
      bVar8 = IsThisNotNull(pFVar3,"FField::GetName");
      if (bVar8) {
        ::FName::ToString((FName *)&pFVar3->_padding_,&local_98);
      }
      else {
        ::FString::FString(&local_98,L"None");
      }
      iVar1 = (pTVar4->Stack).ArrayNum;
      uVar12 = iVar1 - 1;
      uVar9 = 0;
      if ((int)uVar12 < iVar1) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (*(int *)((pTVar4->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar4->Stack).ArrayNum * 4 + -4) != 6) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar4,&local_98);
      local_res20[0] = 0x20;
      (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_res20,2);
      pFVar5 = (param_2->Data).AllocatorInstance.Data;
      iVar1 = (param_2->Data).ArrayNum;
      iStack_70 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_70 = 0;
      }
      local_78._0_4_ = SUB84(pFVar5,0);
      local_78._4_4_ = (undefined4)((ulonglong)pFVar5 >> 0x20);
      local_48 = (undefined4)local_78;
      uStack_44 = local_78._4_4_;
      uStack_3c = uStack_6c;
      local_78 = pFVar5;
      iStack_40 = iStack_70;
      (**(code **)(pTVar4->_padding_ + 0x28))(pTVar4,&local_48);
      pTVar4->PreviousTokenWritten = String;
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      (**(code **)(pFVar3->_padding_ + 0xe0))(pFVar3,&local_a8,param_1->KeyData,0,0,0,0,0);
      pTVar4 = (this->JsonWriter).Object;
      iVar1 = (pTVar4->Stack).ArrayNum;
      uVar12 = iVar1 - 1;
      uVar9 = 0;
      if ((int)uVar12 < iVar1) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (*(int *)((pTVar4->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar4->Stack).ArrayNum * 4 + -4) != 6) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar4,&local_a8);
      local_res10[0] = 0x20;
      (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_res10,2);
      pFVar5 = (param_2->Data).AllocatorInstance.Data;
      iVar1 = (param_2->Data).ArrayNum;
      iStack_80 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_80 = 0;
      }
      local_88._0_4_ = SUB84(pFVar5,0);
      local_88._4_4_ = (undefined4)((ulonglong)pFVar5 >> 0x20);
      local_58 = (undefined4)local_88;
      uStack_54 = local_88._4_4_;
      uStack_4c = uStack_7c;
      local_88 = pFVar5;
      iStack_50 = iStack_80;
      (**(code **)(pTVar4->_padding_ + 0x28))(pTVar4,&local_58);
      pTVar4->PreviousTokenWritten = String;
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// WritePropertyValue<__int64> @ 148b9ae80

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FJsonStructSerializerBackend::WritePropertyValue<__int64>
          (FJsonStructSerializerBackend *this,FStructSerializerState *param_1,long64 *param_2)

{
  int iVar1;
  FProperty *pFVar2;
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *pTVar3;
  FArchive *pFVar4;
  code *pcVar5;
  bool bVar6;
  EJsonToken EVar7;
  FFieldClass *pFVar8;
  FMapProperty *pFVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined2 local_res10 [4];
  undefined2 local_res20 [4];
  undefined2 local_48 [4];
  undefined2 local_40 [4];
  FString local_38;
  FString local_28;
  
  pFVar2 = param_1->ValueProperty;
  if (pFVar2 == (FProperty *)0x0) {
LAB_148b9b142:
    pTVar3 = (this->JsonWriter).Object;
    bVar6 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::
            CanWriteValueWithoutIdentifier(pTVar3);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    EVar7 = pTVar3->PreviousTokenWritten;
    if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0)))) {
      local_48[0] = 0x2c;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_48,2);
      pTVar3->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,L"\r\n",4);
    pFVar4 = pTVar3->Stream;
    if (0 < pTVar3->IndentLevel) {
      uVar12 = (ulonglong)(uint)pTVar3->IndentLevel;
      do {
        local_40[0] = 9;
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_40,2);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                      (pTVar3,*param_2);
    pTVar3->PreviousTokenWritten = EVar7;
  }
  else {
    if (pFVar2->ArrayDim < 2) {
      pFVar8 = FArrayProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b9af01;
      pFVar2 = param_1->ValueProperty;
      pFVar8 = FSetProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b9af01;
      pFVar9 = FField::GetOwner<FMapProperty>((FField *)param_1->ValueProperty);
      if ((pFVar9 != (FMapProperty *)0x0) && (param_1->KeyProperty == (FProperty *)0x0))
      goto LAB_148b9af01;
    }
    else {
LAB_148b9af01:
      if ((param_1->StateFlags & WritingContainerElement) == None) goto LAB_148b9b142;
    }
    pFVar2 = param_1->KeyProperty;
    if (pFVar2 == (FProperty *)0x0) {
      pFVar2 = param_1->ValueProperty;
      pTVar3 = (this->JsonWriter).Object;
      bVar6 = IsThisNotNull(pFVar2,"FField::GetName");
      if (bVar6) {
        ::FName::ToString((FName *)&pFVar2->_padding_,&local_28);
      }
      else {
        ::FString::FString(&local_28,L"None");
      }
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_28);
      local_res20[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res20,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      (**(code **)(pFVar2->_padding_ + 0xe0))(pFVar2,&local_38,param_1->KeyData,0,0,0,0,0);
      pTVar3 = (this->JsonWriter).Object;
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_38);
      local_res10[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res10,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// WritePropertyValue<unsigned___int64> @ 148b9b240

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FJsonStructSerializerBackend::WritePropertyValue<unsigned___int64>
          (FJsonStructSerializerBackend *this,FStructSerializerState *param_1,ulong64 *param_2)

{
  int iVar1;
  FProperty *pFVar2;
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *pTVar3;
  FArchive *pFVar4;
  code *pcVar5;
  bool bVar6;
  EJsonToken EVar7;
  FFieldClass *pFVar8;
  FMapProperty *pFVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined2 local_res10 [4];
  undefined2 local_res20 [4];
  undefined2 local_48 [4];
  undefined2 local_40 [4];
  FString local_38;
  FString local_28;
  
  pFVar2 = param_1->ValueProperty;
  if (pFVar2 == (FProperty *)0x0) {
LAB_148b9b502:
    pTVar3 = (this->JsonWriter).Object;
    bVar6 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::
            CanWriteValueWithoutIdentifier(pTVar3);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    EVar7 = pTVar3->PreviousTokenWritten;
    if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0)))) {
      local_48[0] = 0x2c;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_48,2);
      pTVar3->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,L"\r\n",4);
    pFVar4 = pTVar3->Stream;
    if (0 < pTVar3->IndentLevel) {
      uVar12 = (ulonglong)(uint)pTVar3->IndentLevel;
      do {
        local_40[0] = 9;
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_40,2);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                      (pTVar3,*param_2);
    pTVar3->PreviousTokenWritten = EVar7;
  }
  else {
    if (pFVar2->ArrayDim < 2) {
      pFVar8 = FArrayProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b9b2c1;
      pFVar2 = param_1->ValueProperty;
      pFVar8 = FSetProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b9b2c1;
      pFVar9 = FField::GetOwner<FMapProperty>((FField *)param_1->ValueProperty);
      if ((pFVar9 != (FMapProperty *)0x0) && (param_1->KeyProperty == (FProperty *)0x0))
      goto LAB_148b9b2c1;
    }
    else {
LAB_148b9b2c1:
      if ((param_1->StateFlags & WritingContainerElement) == None) goto LAB_148b9b502;
    }
    pFVar2 = param_1->KeyProperty;
    if (pFVar2 == (FProperty *)0x0) {
      pFVar2 = param_1->ValueProperty;
      pTVar3 = (this->JsonWriter).Object;
      bVar6 = IsThisNotNull(pFVar2,"FField::GetName");
      if (bVar6) {
        ::FName::ToString((FName *)&pFVar2->_padding_,&local_28);
      }
      else {
        ::FString::FString(&local_28,L"None");
      }
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_28);
      local_res20[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res20,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      (**(code **)(pFVar2->_padding_ + 0xe0))(pFVar2,&local_38,param_1->KeyData,0,0,0,0,0);
      pTVar3 = (this->JsonWriter).Object;
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_38);
      local_res10[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res10,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// WritePropertyValue<bool> @ 148b9b770

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FJsonStructSerializerBackend::WritePropertyValue<bool>
          (FJsonStructSerializerBackend *this,FStructSerializerState *param_1,bool *param_2)

{
  int iVar1;
  FProperty *pFVar2;
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *pTVar3;
  FArchive *pFVar4;
  code *pcVar5;
  bool bVar6;
  EJsonToken EVar7;
  FFieldClass *pFVar8;
  FMapProperty *pFVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined2 local_res10 [4];
  undefined2 local_res20 [4];
  undefined2 local_48 [4];
  undefined2 local_40 [4];
  FString local_38;
  FString local_28;
  
  pFVar2 = param_1->ValueProperty;
  if (pFVar2 == (FProperty *)0x0) {
LAB_148b9ba34:
    pTVar3 = (this->JsonWriter).Object;
    bVar6 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::
            CanWriteValueWithoutIdentifier(pTVar3);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    EVar7 = pTVar3->PreviousTokenWritten;
    if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0)))) {
      local_48[0] = 0x2c;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_48,2);
      pTVar3->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,L"\r\n",4);
    pFVar4 = pTVar3->Stream;
    if (0 < pTVar3->IndentLevel) {
      uVar12 = (ulonglong)(uint)pTVar3->IndentLevel;
      do {
        local_40[0] = 9;
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_40,2);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                      (pTVar3,*param_2);
    pTVar3->PreviousTokenWritten = EVar7;
  }
  else {
    if (pFVar2->ArrayDim < 2) {
      pFVar8 = FArrayProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b9b7f1;
      pFVar2 = param_1->ValueProperty;
      pFVar8 = FSetProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((bVar6) && (pFVar2->_padding_ != 0)) goto LAB_148b9b7f1;
      pFVar9 = FField::GetOwner<FMapProperty>((FField *)param_1->ValueProperty);
      if ((pFVar9 != (FMapProperty *)0x0) && (param_1->KeyProperty == (FProperty *)0x0))
      goto LAB_148b9b7f1;
    }
    else {
LAB_148b9b7f1:
      if ((param_1->StateFlags & WritingContainerElement) == None) goto LAB_148b9ba34;
    }
    pFVar2 = param_1->KeyProperty;
    if (pFVar2 == (FProperty *)0x0) {
      pFVar2 = param_1->ValueProperty;
      pTVar3 = (this->JsonWriter).Object;
      bVar6 = IsThisNotNull(pFVar2,"FField::GetName");
      if (bVar6) {
        ::FName::ToString((FName *)&pFVar2->_padding_,&local_28);
      }
      else {
        ::FString::FString(&local_28,L"None");
      }
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_28);
      local_res20[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res20,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      (**(code **)(pFVar2->_padding_ + 0xe0))(pFVar2,&local_38,param_1->KeyData,0,0,0,0,0);
      pTVar3 = (this->JsonWriter).Object;
      iVar1 = (pTVar3->Stack).ArrayNum;
      uVar10 = iVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                  (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteIdentifier
                (pTVar3,&local_38);
      local_res10[0] = 0x20;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res10,2);
      EVar7 = TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteValueOnly
                        (pTVar3,*param_2);
      pTVar3->PreviousTokenWritten = EVar7;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// FJsonStructSerializerBackend @ 148b9bcd0

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

FJsonStructSerializerBackend * __thiscall
FJsonStructSerializerBackend::FJsonStructSerializerBackend
          (FJsonStructSerializerBackend *this,FArchive *param_1,
          EStructSerializerBackendFlags param_2)

{
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *pTVar1;
  TRawPtrProxy<TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>_> local_res8;
  
  this->_padding_ = (longlong)&___7FJsonStructSerializerBackend__6B_;
  pTVar1 = ::operator_new(0x28);
  local_res8.Object = (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *)0x0;
  if (pTVar1 != (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *)0x0) {
    pTVar1->Stream = param_1;
    pTVar1->_padding_ = (longlong)&___7__TJsonWriter_GU__TPrettyJsonPrintPolicy_G____6B_;
    (pTVar1->Stack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Stack).ArrayNum = 0;
    (pTVar1->Stack).ArrayMax = 0;
    pTVar1->PreviousTokenWritten = None;
    pTVar1->IndentLevel = 0;
    local_res8.Object = pTVar1;
  }
  TSharedRef<TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>,1>::
  TSharedRef<TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>,1><TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>_>
            (&this->JsonWriter,&local_res8);
  this->Flags = param_2;
  return this;
}

// BeginArray @ 148ba25b0

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FJsonStructSerializerBackend::BeginArray
          (FJsonStructSerializerBackend *this,FStructSerializerState *param_1)

{
  FProperty *pFVar1;
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this_00;
  bool bVar2;
  FFieldClass *pFVar3;
  FString local_18;
  
  pFVar1 = param_1->ValueProperty;
  pFVar3 = FArrayProperty::StaticClass();
  bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
  if ((bVar2) && (pFVar1->_padding_ != 0)) {
    TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteArrayStart
              ((this->JsonWriter).Object);
    return;
  }
  pFVar1 = param_1->KeyProperty;
  if (pFVar1 == (FProperty *)0x0) {
    pFVar1 = param_1->ValueProperty;
    this_00 = (this->JsonWriter).Object;
    bVar2 = IsThisNotNull(pFVar1,"FField::GetName");
    if (bVar2) {
      ::FName::ToString((FName *)&pFVar1->_padding_,&local_18);
    }
    else {
      ::FString::FString(&local_18,L"None");
    }
    TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteArrayStart<FString>
              (this_00,&local_18);
  }
  else {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    (**(code **)(pFVar1->_padding_ + 0xe0))(pFVar1,&local_18,param_1->KeyData,0,0,0,0,0);
    TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteArrayStart<FString_&>
              ((this->JsonWriter).Object,&local_18);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// BeginStructure @ 148ba2880

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FJsonStructSerializerBackend::BeginStructure
          (FJsonStructSerializerBackend *this,FStructSerializerState *param_1)

{
  FProperty *pFVar1;
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this_00;
  bool bVar2;
  FFieldClass *pFVar3;
  FMapProperty *pFVar4;
  FString local_18;
  
  pFVar1 = param_1->ValueProperty;
  if (pFVar1 == (FProperty *)0x0) {
    TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteObjectStart
              ((this->JsonWriter).Object);
    return;
  }
  if (pFVar1->ArrayDim < 2) {
    pFVar3 = FArrayProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if ((!bVar2) || (pFVar1->_padding_ == 0)) {
      pFVar1 = param_1->ValueProperty;
      pFVar3 = FSetProperty::StaticClass();
      bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
      if (((!bVar2) || (pFVar1->_padding_ == 0)) &&
         ((pFVar4 = FField::GetOwner<FMapProperty>((FField *)param_1->ValueProperty),
          pFVar4 == (FMapProperty *)0x0 || (param_1->KeyProperty != (FProperty *)0x0))))
      goto LAB_148ba291a;
    }
  }
  if ((param_1->StateFlags & WritingContainerElement) == None) {
    TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteObjectStart
              ((this->JsonWriter).Object);
    return;
  }
LAB_148ba291a:
  pFVar1 = param_1->KeyProperty;
  if (pFVar1 == (FProperty *)0x0) {
    pFVar1 = param_1->ValueProperty;
    this_00 = (this->JsonWriter).Object;
    bVar2 = IsThisNotNull(pFVar1,"FField::GetName");
    if (bVar2) {
      ::FName::ToString((FName *)&pFVar1->_padding_,&local_18);
    }
    else {
      ::FString::FString(&local_18,L"None");
    }
    TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteObjectStart<FString>
              (this_00,&local_18);
  }
  else {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    (**(code **)(pFVar1->_padding_ + 0xe0))(pFVar1,&local_18,param_1->KeyData,0,0,0,0,0);
    TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteObjectStart<FString_&>
              ((this->JsonWriter).Object,&local_18);
  }
  if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_18.Data.AllocatorInstance.Data);
  return;
}

// EndArray @ 148ba7d60

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FJsonStructSerializerBackend::EndArray
          (FJsonStructSerializerBackend *this,FStructSerializerState *param_1)

{
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteArrayEnd
            ((this->JsonWriter).Object);
  return;
}

// EndStructure @ 148ba7dc0

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FJsonStructSerializerBackend::EndStructure
          (FJsonStructSerializerBackend *this,FStructSerializerState *param_1)

{
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::WriteObjectEnd
            ((this->JsonWriter).Object);
  return;
}

// WriteComment @ 148bb64d0

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void __thiscall
FJsonStructSerializerBackend::WriteComment(FJsonStructSerializerBackend *this,FString *param_1)

{
  return;
}

// WritePODArray @ 148bb6d50

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

bool __thiscall
FJsonStructSerializerBackend::WritePODArray
          (FJsonStructSerializerBackend *this,FStructSerializerState *param_1)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  void *pvVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong *puVar11;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  longlong lStack_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (((((param_1->ElementIndex == -1) &&
        (pFVar2 = param_1->ValueProperty, pFVar2 != (FProperty *)0x0)) &&
       ((*(uint *)(pFVar2->_padding_ + 0x18) >> 0x15 & 1) != 0)) &&
      (lVar3 = pFVar2[1]._padding_, lVar3 != 0)) &&
     (((*(byte *)(*(longlong *)(lVar3 + 8) + 0x18) & 0x40) != 0 ||
      ((lVar3 != 0 && ((*(byte *)(*(longlong *)(lVar3 + 8) + 0x18) & 2) != 0)))))) {
    pvVar4 = param_1->ValueData;
    if (pFVar2->ArrayDim < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
    if (pvVar4 == (void *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
    iVar1 = pFVar2->Offset_Internal;
    lVar6 = pFVar2[1]._padding_;
    (**(code **)(*(longlong *)pFVar2[1]._padding_ + 0x168))();
    lVar3 = pFVar2[1]._padding_;
    puVar11 = (ulonglong *)((longlong)iVar1 + (longlong)pvVar4);
    iVar1 = *(int *)(lVar3 + 0x34);
    if (iVar1 < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
    if (lVar3 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
    local_48 = pFVar2[1]._padding_;
    local_68[0] = 0;
    local_60 = 0;
    local_58 = 0;
    lStack_50 = 0;
    local_40 = 0;
    local_38 = *(undefined8 *)(local_48 + 8);
    local_30 = 0xffffffff;
    local_2c = 0;
    for (iVar10 = 0; iVar10 < (int)puVar11[1]; iVar10 = iVar10 + 1) {
      if (-1 < iVar10) {
        if ((int)puVar11[1] == 0) {
          lStack_50 = 0;
        }
        else {
          uVar9 = *puVar11;
          if (((lVar6 & 1) != 0) && ((uVar9 & 1) != 0)) {
            uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar11;
          }
          lStack_50 = (longlong)iVar1 * (longlong)iVar10 + uVar9;
        }
        (**(code **)(this->_padding_ + 0x28))(this,local_68,0);
      }
    }
    (**(code **)(this->_padding_ + 0x10))(this,param_1);
    return true;
  }
  return false;
}

// WriteProperty @ 148bb86e0

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FJsonStructSerializerBackend::WriteProperty
          (FJsonStructSerializerBackend *this,FStructSerializerState *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  UEnum *this_00;
  code *pcVar4;
  bool bVar5;
  FFieldClass *pFVar6;
  long64 lVar7;
  FString *pFVar8;
  longlong lVar9;
  FSoftClassProperty *this_01;
  TPersistentObjectPtr<FSoftObjectPath> *this_02;
  UObject *pUVar10;
  FWeakObjectProperty *this_03;
  FWeakObjectPtr *this_04;
  FSoftObjectProperty *this_05;
  void *pvVar11;
  UObjectBaseUtility *this_06;
  FName this_07;
  FText *this_08;
  FProperty *pFVar12;
  FProperty *pFVar13;
  longlong lVar14;
  bool local_res10 [16];
  code *local_res20;
  FString local_128;
  UEnum *local_118;
  FName local_110;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  lVar14 = (longlong)param_2;
  pFVar12 = (FProperty *)0x0;
  pFVar6 = FBoolProperty::StaticClass();
  if (param_1->FieldType == pFVar6) {
    pFVar13 = param_1->ValueProperty;
    if (((pFVar13 == (FProperty *)0x0) || ((*(uint *)(pFVar13->_padding_ + 0x18) >> 0x11 & 1) == 0))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("CastResult",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                              ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar13 = pFVar12,
          bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pvVar11 = param_1->ValueData;
    if (((param_2 < 0) || (pFVar13->ArrayDim <= param_2)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5)
       ) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pvVar11 == (void *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = pFVar13->ElementSize;
    iVar2 = pFVar13->Offset_Internal;
    if (((char)pFVar13[1]._padding_ == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldSize != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0xa4b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_res10[0] =
         (*(byte *)((longlong)&pFVar13[1]._padding_ + 3) &
         *(byte *)((longlong)pvVar11 +
                  (ulonglong)*(byte *)((longlong)&pFVar13[1]._padding_ + 1) +
                  (longlong)iVar2 + lVar14 * iVar1)) != 0;
    WritePropertyValue<bool>(this,param_1,local_res10);
    return;
  }
  pFVar6 = FEnumProperty::StaticClass();
  if (param_1->FieldType == pFVar6) {
    pFVar13 = param_1->ValueProperty;
    if (((pFVar13 == (FProperty *)0x0) ||
        ((*(ulonglong *)(pFVar13->_padding_ + 0x18) & 0x1000000000000) == 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar13 = pFVar12,
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_118 = (UEnum *)pFVar13[1]._padding_;
    plVar3 = (longlong *)pFVar13[1]._padding_;
    pvVar11 = param_1->ValueData;
    local_res20 = *(code **)(*plVar3 + 0x210);
    if (((param_2 < 0) || (pFVar13->ArrayDim <= param_2)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5)
       ) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pvVar11 == (void *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar7 = (*local_res20)(plVar3,(longlong)pvVar11 +
                                  (longlong)pFVar13->Offset_Internal + lVar14 * pFVar13->ElementSize
                          );
    pFVar8 = UEnum::GetNameStringByValue(local_118,&local_c0,lVar7);
    WritePropertyValue<FString>(this,param_1,pFVar8);
  }
  else {
    pFVar6 = FByteProperty::StaticClass();
    if (param_1->FieldType == pFVar6) {
      pFVar13 = param_1->ValueProperty;
      if (((pFVar13 == (FProperty *)0x0) || ((*(byte *)(pFVar13->_padding_ + 0x18) & 0x40) == 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CastResult",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar13 = pFVar12,
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar9 = (**(code **)(pFVar13->_padding_ + 0x1e0))(pFVar13);
      pvVar11 = param_1->ValueData;
      if (lVar9 == 0) {
        if (((param_2 < 0) || (pFVar13->ArrayDim <= param_2)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pvVar11 == (void *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        WritePropertyValue<unsigned_char>
                  (this,param_1,
                   (uchar *)((longlong)pvVar11 +
                            (longlong)pFVar13->Offset_Internal + lVar14 * pFVar13->ElementSize));
        return;
      }
      this_00 = (UEnum *)pFVar13[1]._padding_;
      if (((param_2 < 0) || (pFVar13->ArrayDim <= param_2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((pvVar11 == (void *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = UEnum::GetNameStringByValue
                         (this_00,&local_b0,
                          (ulonglong)
                          *(byte *)((longlong)pvVar11 +
                                   (longlong)pFVar13->Offset_Internal +
                                   lVar14 * pFVar13->ElementSize));
      WritePropertyValue<FString>(this,param_1,pFVar8);
      local_c0.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
    }
    else {
      pFVar6 = FDoubleProperty::StaticClass();
      if (param_1->FieldType == pFVar6) {
        pFVar13 = param_1->ValueProperty;
        if (((pFVar13 == (FProperty *)0x0) ||
            ((*(ulonglong *)(pFVar13->_padding_ + 0x18) & 0x100000000) == 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar13 = pFVar12,
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar11 = param_1->ValueData;
        if (((param_2 < 0) || (pFVar13->ArrayDim <= param_2)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pvVar11 == (void *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        WritePropertyValue<double>
                  (this,param_1,
                   (double *)
                   ((longlong)pvVar11 +
                   (longlong)pFVar13->Offset_Internal + lVar14 * pFVar13->ElementSize));
        return;
      }
      pFVar6 = FFloatProperty::StaticClass();
      if (param_1->FieldType == pFVar6) {
        pFVar13 = param_1->ValueProperty;
        if (((pFVar13 == (FProperty *)0x0) || ((*(uint *)(pFVar13->_padding_ + 0x18) >> 8 & 1) == 0)
            ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CastResult",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                     ,0x472,L"CastFieldChecked failed with 0x%016llx"),
                 pFVar13 = pFVar12, bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar11 = param_1->ValueData;
        if (((param_2 < 0) || (pFVar13->ArrayDim <= param_2)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pvVar11 == (void *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        WritePropertyValue<float>
                  (this,param_1,
                   (float *)((longlong)pvVar11 +
                            (longlong)pFVar13->Offset_Internal + lVar14 * pFVar13->ElementSize));
        return;
      }
      pFVar6 = FIntProperty::StaticClass();
      if (param_1->FieldType == pFVar6) {
        pFVar13 = param_1->ValueProperty;
        if (((pFVar13 == (FProperty *)0x0) || ((*(byte *)(pFVar13->_padding_ + 0x18) & 0x80) == 0))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CastResult",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                  ,0x472,L"CastFieldChecked failed with 0x%016llx"),
              pFVar13 = pFVar12, bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar11 = param_1->ValueData;
        if (((param_2 < 0) || (pFVar13->ArrayDim <= param_2)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pvVar11 == (void *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        WritePropertyValue<int>
                  (this,param_1,
                   (int *)((longlong)pvVar11 +
                          (longlong)pFVar13->Offset_Internal + lVar14 * pFVar13->ElementSize));
        return;
      }
      pFVar6 = FInt8Property::StaticClass();
      if (param_1->FieldType == pFVar6) {
        pFVar13 = param_1->ValueProperty;
        if (((pFVar13 == (FProperty *)0x0) || ((*(byte *)(pFVar13->_padding_ + 0x18) & 2) == 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar13 = pFVar12,
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar11 = param_1->ValueData;
        if (((param_2 < 0) || (pFVar13->ArrayDim <= param_2)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pvVar11 == (void *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        WritePropertyValue<signed_char>
                  (this,param_1,
                   (schar *)((longlong)pvVar11 +
                            (longlong)pFVar13->Offset_Internal + lVar14 * pFVar13->ElementSize));
        return;
      }
      pFVar6 = FInt16Property::StaticClass();
      if (param_1->FieldType == pFVar6) {
        pFVar13 = param_1->ValueProperty;
        if (((pFVar13 == (FProperty *)0x0) || (-1 < *(int *)(pFVar13->_padding_ + 0x18))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar13 = pFVar12,
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar11 = param_1->ValueData;
        if (((param_2 < 0) || (pFVar13->ArrayDim <= param_2)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pvVar11 == (void *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        WritePropertyValue<short>
                  (this,param_1,
                   (short *)((longlong)pvVar11 +
                            (longlong)pFVar13->Offset_Internal + lVar14 * pFVar13->ElementSize));
        return;
      }
      pFVar6 = FInt64Property::StaticClass();
      if (param_1->FieldType == pFVar6) {
        pFVar13 = param_1->ValueProperty;
        if (((pFVar13 == (FProperty *)0x0) ||
            ((*(uint *)(pFVar13->_padding_ + 0x18) >> 0x16 & 1) == 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar13 = pFVar12,
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar11 = param_1->ValueData;
        if (((param_2 < 0) || (pFVar13->ArrayDim <= param_2)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pvVar11 == (void *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        WritePropertyValue<__int64>
                  (this,param_1,
                   (long64 *)
                   ((longlong)pvVar11 +
                   (longlong)pFVar13->Offset_Internal + lVar14 * pFVar13->ElementSize));
        return;
      }
      pFVar6 = FUInt16Property::StaticClass();
      if (param_1->FieldType == pFVar6) {
        pFVar13 = param_1->ValueProperty;
        if (((pFVar13 == (FProperty *)0x0) ||
            ((*(uint *)(pFVar13->_padding_ + 0x18) >> 0x12 & 1) == 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar13 = pFVar12,
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar11 = param_1->ValueData;
        if (((param_2 < 0) || (pFVar13->ArrayDim <= param_2)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pvVar11 == (void *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        WritePropertyValue<unsigned_short>
                  (this,param_1,
                   (ushort *)
                   ((longlong)pvVar11 +
                   (longlong)pFVar13->Offset_Internal + lVar14 * pFVar13->ElementSize));
        return;
      }
      pFVar6 = FUInt32Property::StaticClass();
      if (param_1->FieldType == pFVar6) {
        pFVar13 = param_1->ValueProperty;
        if (((pFVar13 == (FProperty *)0x0) ||
            ((*(uint *)(pFVar13->_padding_ + 0x18) >> 0xb & 1) == 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar13 = pFVar12,
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar11 = param_1->ValueData;
        if (((param_2 < 0) || (pFVar13->ArrayDim <= param_2)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pvVar11 == (void *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        WritePropertyValue<unsigned_int>
                  (this,param_1,
                   (uint *)((longlong)pvVar11 +
                           (longlong)pFVar13->Offset_Internal + lVar14 * pFVar13->ElementSize));
        return;
      }
      pFVar6 = FUInt64Property::StaticClass();
      if (param_1->FieldType == pFVar6) {
        pFVar13 = param_1->ValueProperty;
        if (((pFVar13 == (FProperty *)0x0) || ((*(uint *)(pFVar13->_padding_ + 0x18) >> 9 & 1) == 0)
            ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CastResult",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                     ,0x472,L"CastFieldChecked failed with 0x%016llx"),
                 pFVar13 = pFVar12, bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar11 = param_1->ValueData;
        if (((param_2 < 0) || (pFVar13->ArrayDim <= param_2)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pvVar11 == (void *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        WritePropertyValue<unsigned___int64>
                  (this,param_1,
                   (ulong64 *)
                   ((longlong)pvVar11 +
                   (longlong)pFVar13->Offset_Internal + lVar14 * pFVar13->ElementSize));
        return;
      }
      pFVar6 = FNameProperty::StaticClass();
      if (param_1->FieldType == pFVar6) {
        pFVar13 = param_1->ValueProperty;
        if (((pFVar13 == (FProperty *)0x0) ||
            ((*(uint *)(pFVar13->_padding_ + 0x18) >> 0xd & 1) == 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar13 = pFVar12,
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar11 = param_1->ValueData;
        if (((param_2 < 0) || (pFVar13->ArrayDim <= param_2)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pvVar11 == (void *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar8 = ::FName::ToString((FName *)((longlong)pvVar11 +
                                            (longlong)pFVar13->Offset_Internal +
                                            lVar14 * pFVar13->ElementSize),&local_a0);
        WritePropertyValue<FString>(this,param_1,pFVar8);
        local_c0.Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
      }
      else {
        pFVar6 = FStrProperty::StaticClass();
        if (param_1->FieldType == pFVar6) {
          pFVar13 = param_1->ValueProperty;
          if (((pFVar13 == (FProperty *)0x0) ||
              ((*(uint *)(pFVar13->_padding_ + 0x18) >> 0xe & 1) == 0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x472,L"CastFieldChecked failed with 0x%016llx"),
             pFVar13 = pFVar12, bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pvVar11 = param_1->ValueData;
          if (((param_2 < 0) || (pFVar13->ArrayDim <= param_2)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((pvVar11 == (void *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          WritePropertyValue<FString>
                    (this,param_1,
                     (FString *)
                     ((longlong)pvVar11 +
                     (longlong)pFVar13->Offset_Internal + lVar14 * pFVar13->ElementSize));
          return;
        }
        pFVar6 = FTextProperty::StaticClass();
        if (param_1->FieldType == pFVar6) {
          pFVar13 = param_1->ValueProperty;
          if (((pFVar13 == (FProperty *)0x0) ||
              ((*(uint *)(pFVar13->_padding_ + 0x18) >> 0x1e & 1) == 0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x472,L"CastFieldChecked failed with 0x%016llx"),
             pFVar13 = pFVar12, bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pvVar11 = param_1->ValueData;
          if (((param_2 < 0) || (pFVar13->ArrayDim <= param_2)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((pvVar11 == (void *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this_08 = (FText *)((longlong)pvVar11 +
                             (longlong)pFVar13->Offset_Internal + lVar14 * pFVar13->ElementSize);
          if ((this->Flags & WriteTextAsComplexString) == Legacy) {
            pFVar8 = FText::ToString(this_08);
            WritePropertyValue<FString>(this,param_1,pFVar8);
            return;
          }
          local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128.Data.ArrayNum = 0;
          local_128.Data.ArrayMax = 0;
          FTextStringHelper::WriteToBuffer(&local_128,this_08,false,false);
          WritePropertyValue<FString>(this,param_1,&local_128);
          local_c0.Data.AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
        }
        else {
          pFVar6 = FSoftClassProperty::StaticClass();
          if (param_1->FieldType == pFVar6) {
            this_01 = CastFieldChecked<FSoftClassProperty>((FField *)param_1->ValueProperty);
            this_02 = FProperty::ContainerVoidPtrToValuePtrInternal
                                ((FProperty *)this_01,param_1->ValueData,param_2);
            pUVar10 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_02);
            if (pUVar10 == (UObject *)0x0) {
              local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_108.Data.ArrayNum = 0;
              local_108.Data.ArrayMax = 0;
              WritePropertyValue<FString>(this,param_1,&local_108);
              return;
            }
            pUVar10 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_02);
            pFVar8 = UObjectBaseUtility::GetPathName
                               ((UObjectBaseUtility *)pUVar10,&local_90,(UObject *)0x0);
            WritePropertyValue<FString>(this,param_1,pFVar8);
            local_c0.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
          }
          else {
            pFVar6 = FWeakObjectProperty::StaticClass();
            if (param_1->FieldType == pFVar6) {
              this_03 = CastFieldChecked<FWeakObjectProperty>((FField *)param_1->ValueProperty);
              this_04 = FProperty::ContainerVoidPtrToValuePtrInternal
                                  ((FProperty *)this_03,param_1->ValueData,param_2);
              bVar5 = FWeakObjectPtr::IsValid(this_04);
              if (!bVar5) {
                local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_f8.Data.ArrayNum = 0;
                local_f8.Data.ArrayMax = 0;
                WritePropertyValue<FString>(this,param_1,&local_f8);
                return;
              }
              pUVar10 = FWeakObjectPtr::Get(this_04);
              pFVar8 = UObjectBaseUtility::GetPathName
                                 ((UObjectBaseUtility *)pUVar10,&local_80,(UObject *)0x0);
              WritePropertyValue<FString>(this,param_1,pFVar8);
              local_c0.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
            }
            else {
              pFVar6 = FSoftObjectProperty::StaticClass();
              pFVar12 = param_1->ValueProperty;
              if (param_1->FieldType == pFVar6) {
                this_05 = CastFieldChecked<FSoftObjectProperty>((FField *)pFVar12);
                pvVar11 = FProperty::ContainerVoidPtrToValuePtrInternal
                                    ((FProperty *)this_05,param_1->ValueData,param_2);
                FSoftObjectPath::ToString((FSoftObjectPath *)((longlong)pvVar11 + 8),&local_d8);
                WritePropertyValue<FString>(this,param_1,&local_d8);
                local_c0.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
              }
              else if ((pFVar12 == (FProperty *)0x0) ||
                      (((uint)(int)((FFieldClass *)pFVar12->_padding_)->CastFlags >> 0x10 & 1) == 0)
                      ) {
                if ((byte)LogSerialization._0_1_ < 6) {
                  return;
                }
                local_110 = (FName)param_1->ValueType->_padding_;
                ::FName::ToString(&local_110,&local_50);
                this_07 = FField::GetFName((FField *)param_1->ValueProperty);
                ::FName::ToString((FName *)this_07,&local_60);
                UE::Logging::Private::BasicLog<6>
                          (&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
                local_c0.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
                if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_60.Data.AllocatorInstance.Data);
                  local_c0.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
                }
              }
              else {
                this_06 = (UObjectBaseUtility *)
                          (**(code **)(pFVar12->_padding_ + 0x208))(pFVar12,param_1->ValueData);
                if (this_06 == (UObjectBaseUtility *)0x0) {
                  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_e8.Data.ArrayNum = 0;
                  local_e8.Data.ArrayMax = 0;
                  WritePropertyValue<FString>(this,param_1,&local_e8);
                  return;
                }
                pFVar8 = UObjectBaseUtility::GetPathName(this_06,&local_70,(UObject *)0x0);
                WritePropertyValue<FString>(this,param_1,pFVar8);
                local_c0.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
              }
            }
          }
        }
      }
    }
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  return;
}

