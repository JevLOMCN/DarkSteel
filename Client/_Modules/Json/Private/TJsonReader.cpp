// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 33

// ~TJsonReader<char> @ 141dc5940

void __thiscall TJsonReader<char>::~TJsonReader<char>(TJsonReader<char> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__TJsonReader_D__6B_;
  pFVar1 = (this->StringValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ErrorMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Identifier).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParseState).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TJsonReader<char8_t> @ 141dc59a0

void __thiscall TJsonReader<char8_t>::~TJsonReader<char8_t>(TJsonReader<char8_t> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__TJsonReader__Q__6B_;
  pFVar1 = (this->StringValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ErrorMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Identifier).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParseState).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TJsonReader<wchar_t> @ 141dc5a00

void __thiscall TJsonReader<wchar_t>::~TJsonReader<wchar_t>(TJsonReader<wchar_t> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__TJsonReader__W__6B_;
  pFVar1 = (this->StringValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ErrorMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Identifier).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParseState).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetIdentifier @ 141dd64a0

FString * __thiscall TJsonReader<char>::GetIdentifier(TJsonReader<char> *this)

{
  return &this->Identifier;
}

// GetIdentifier @ 141dd64b0

FString * __thiscall TJsonReader<char8_t>::GetIdentifier(TJsonReader<char8_t> *this)

{
  return &this->Identifier;
}

// GetIdentifier @ 141dd64c0

FString * __thiscall TJsonReader<wchar_t>::GetIdentifier(TJsonReader<wchar_t> *this)

{
  return &this->Identifier;
}

// GetInternalValueAsString @ 141dd6680

FUtf8String * __thiscall TJsonReader<char>::GetInternalValueAsString(TJsonReader<char> *this)

{
  code *pcVar1;
  bool bVar2;
  FUtf8String *pFVar3;
  
  if (this->CurrentToken == String) {
    return &this->StringValue;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("CurrentToken == EJsonToken::String",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                     ,0xb6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FUtf8String *)(*pcVar1)();
    return pFVar3;
  }
  return &this->StringValue;
}

// GetInternalValueAsString @ 141dd66d0

FUtf8String * __thiscall TJsonReader<char8_t>::GetInternalValueAsString(TJsonReader<char8_t> *this)

{
  code *pcVar1;
  bool bVar2;
  FUtf8String *pFVar3;
  
  if (this->CurrentToken == String) {
    return &this->StringValue;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("CurrentToken == EJsonToken::String",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                     ,0xb6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FUtf8String *)(*pcVar1)();
    return pFVar3;
  }
  return &this->StringValue;
}

// GetInternalValueAsString @ 141dd6720

FString * __thiscall TJsonReader<wchar_t>::GetInternalValueAsString(TJsonReader<wchar_t> *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (this->CurrentToken == String) {
    return &this->StringValue;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("CurrentToken == EJsonToken::String",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                     ,0xb6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  return &this->StringValue;
}

// GetValueAsString @ 141dd7700

FString * __thiscall
TJsonReader<char>::GetValueAsString(TJsonReader<char> *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  int iVar6;
  FString local_18;
  
  if (this->CurrentToken != String) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentToken == EJsonToken::String",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                       ,0xa8,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = (this->StringValue).Data.ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  pFVar5 = ::FString::ConstructFromPtrSize
                     (&local_18,(uchar *)(this->StringValue).Data.AllocatorInstance.Data,iVar6);
  if (__return_storage_ptr__ != pFVar5) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString @ 141dd77c0

FString * __thiscall
TJsonReader<char8_t>::GetValueAsString(TJsonReader<char8_t> *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  int iVar6;
  FString local_18;
  
  if (this->CurrentToken != String) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentToken == EJsonToken::String",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                       ,0xa8,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = (this->StringValue).Data.ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  pFVar5 = ::FString::ConstructFromPtrSize
                     (&local_18,(uchar *)(this->StringValue).Data.AllocatorInstance.Data,iVar6);
  if (__return_storage_ptr__ != pFVar5) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString @ 141dd7880

FString * __thiscall TJsonReader<wchar_t>::GetValueAsString(TJsonReader<wchar_t> *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (this->CurrentToken == String) {
    return &this->StringValue;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("CurrentToken == EJsonToken::String",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                     ,0xa8,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  return &this->StringValue;
}

// NextToken @ 141dd85a0

bool __thiscall TJsonReader<char>::NextToken(TJsonReader<char> *this,EJsonToken *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 local_res8 [2];
  FString local_60;
  FString local_50;
  FString local_40;
  
  local_res8[0] = 0;
  cVar1 = (**(code **)(*(longlong *)this->Stream + 0x38))();
  while (cVar1 == '\0') {
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    if ((this->Stream->field_0x29 & 2) != 0) {
      ::FString::FString(&local_50,L"Stream I/O Error");
      SetErrorMessage(this,&local_50);
      local_40.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
      goto LAB_141dd864f;
    }
    this->CharacterNumber = this->CharacterNumber + 1;
    if ((byte)local_res8[0] == 0) break;
    if ((byte)local_res8[0] == 10) {
      this->LineNumber = this->LineNumber + 1;
      this->CharacterNumber = 0;
    }
    if ((0x20 < (byte)local_res8[0]) ||
       ((0x100002600U >> ((longlong)(char)(byte)local_res8[0] & 0x3fU) & 1) == 0)) {
      if (((byte)((int)(char)(byte)local_res8[0] - 0x2bU) < 0x3b) &&
         ((0x400000004007fedU >> ((ulonglong)((int)(char)(byte)local_res8[0] - 0x2bU) & 0x3f) & 1)
          != 0)) {
        bVar2 = ParseNumberToken(this,(byte)local_res8[0]);
        if (bVar2) {
          *param_1 = Number;
          return true;
        }
        if ((byte)local_res8[0] != 0x2d) {
          return false;
        }
      }
      if ((int)(char)(byte)local_res8[0] - 0x22U < 0x5c) {
                    /* WARNING: Could not recover jumptable at 0x000141dd86ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(switchD_1501dbc7b::caseD_1.e_magic +
                          *(uint *)(&DAT_141dd8c00 +
                                   (ulonglong)
                                   (byte)(&DAT_141dd8c24)
                                         [(int)((int)(char)(byte)local_res8[0] - 0x22U)] * 4)))
                          (switchD_1501dbc7b::caseD_1.e_magic +
                           *(uint *)(&DAT_141dd8c00 +
                                    (ulonglong)
                                    (byte)(&DAT_141dd8c24)
                                          [(int)((int)(char)(byte)local_res8[0] - 0x22U)] * 4));
        return (bool)uVar3;
      }
      ::FString::FString(&local_60,L"Invalid Json Token.");
      SetErrorMessage(this,&local_60);
      local_40.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
      goto LAB_141dd864f;
    }
    cVar1 = (**(code **)(*(longlong *)this->Stream + 0x38))();
  }
  ::FString::FString(&local_40,L"Invalid Json Token.");
  SetErrorMessage(this,&local_40);
LAB_141dd864f:
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return false;
}

// NextToken @ 141dd8c90

bool __thiscall TJsonReader<char8_t>::NextToken(TJsonReader<char8_t> *this,EJsonToken *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint local_res8 [2];
  FString local_60;
  FString local_50;
  FString local_40;
  
  local_res8[0] = 0;
  cVar1 = (**(code **)(*(longlong *)this->Stream + 0x38))();
  while (cVar1 == '\0') {
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    if ((this->Stream->field_0x29 & 2) != 0) {
      ::FString::FString(&local_50,L"Stream I/O Error");
      SetErrorMessage(this,&local_50);
      local_40.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
      goto LAB_141dd8d3e;
    }
    this->CharacterNumber = this->CharacterNumber + 1;
    uVar5 = local_res8[0] & 0xff;
    if ((byte)local_res8[0] == 0) break;
    if ((byte)local_res8[0] == 10) {
      this->LineNumber = this->LineNumber + 1;
      this->CharacterNumber = 0;
    }
    if ((0x20 < (byte)local_res8[0]) ||
       ((0x100002600U >> ((ulonglong)(byte)local_res8[0] & 0x3f) & 1) == 0)) {
      uVar4 = (local_res8[0] & 0xff) - 0x2b;
      if (((byte)uVar4 < 0x3b) && ((0x400000004007fedU >> ((ulonglong)uVar4 & 0x3f) & 1) != 0)) {
        bVar2 = ParseNumberToken(this,(byte)local_res8[0]);
        if (bVar2) {
          *param_1 = Number;
          return true;
        }
        uVar5 = local_res8[0] & 0xff;
        if ((byte)local_res8[0] != '-') {
          return false;
        }
      }
      if (uVar5 - 0x22 < 0x5c) {
                    /* WARNING: Could not recover jumptable at 0x000141dd8db9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(switchD_1501dbc7b::caseD_1.e_magic +
                          *(uint *)(&DAT_141dd92f0 +
                                   (ulonglong)(byte)(&DAT_141dd9314)[(int)(uVar5 - 0x22)] * 4)))
                          (switchD_1501dbc7b::caseD_1.e_magic +
                           *(uint *)(&DAT_141dd92f0 +
                                    (ulonglong)(byte)(&DAT_141dd9314)[(int)(uVar5 - 0x22)] * 4));
        return (bool)uVar3;
      }
      ::FString::FString(&local_60,L"Invalid Json Token.");
      SetErrorMessage(this,&local_60);
      local_40.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
      goto LAB_141dd8d3e;
    }
    cVar1 = (**(code **)(*(longlong *)this->Stream + 0x38))();
  }
  ::FString::FString(&local_40,L"Invalid Json Token.");
  SetErrorMessage(this,&local_40);
LAB_141dd8d3e:
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return false;
}

// NextToken @ 141dd9380

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall TJsonReader<wchar_t>::NextToken(TJsonReader<wchar_t> *this,EJsonToken *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FArchive *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  ForAnyElementType FVar14;
  wchar_t local_res18 [4];
  undefined4 local_d8;
  undefined4 local_d4;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  bVar9 = false;
  cVar7 = (**(code **)(*(longlong *)this->Stream + 0x38))();
  while (cVar7 == '\0') {
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
    if ((this->Stream->field_0x29 & 2) != 0) {
      ::FString::FString(&local_40,L"Stream I/O Error");
      SetErrorMessage(this,&local_40);
      local_30.Data.AllocatorInstance.Data = local_40.Data.AllocatorInstance.Data;
      goto LAB_141dd9431;
    }
    this->CharacterNumber = this->CharacterNumber + 1;
    if (local_res18[0] == L'\0') break;
    if (local_res18[0] == L'\n') {
      this->LineNumber = this->LineNumber + 1;
      this->CharacterNumber = 0;
    }
    if ((0x20 < (ushort)local_res18[0]) ||
       ((0x100002600U >> ((ulonglong)(ushort)local_res18[0] & 0x3f) & 1) == 0)) {
      if (((ushort)((ushort)local_res18[0] - 0x2b) < 0x3b) &&
         ((0x400000004007fedU >> ((ulonglong)((ushort)local_res18[0] - 0x2b) & 0x3f) & 1) != 0)) {
        bVar8 = ParseNumberToken(this,local_res18[0]);
        if (bVar8) {
          *param_1 = Number;
          return true;
        }
        if (local_res18[0] != L'-') {
          return false;
        }
      }
      switch(local_res18[0]) {
      case L'\"':
        bVar9 = ParseStringToken(this);
        if (!bVar9) {
          return false;
        }
        *param_1 = String;
        return true;
      default:
        ::FString::FString(&local_50,L"Invalid Json Token.");
        SetErrorMessage(this,&local_50);
        local_30.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
        goto LAB_141dd9431;
      case L',':
        *param_1 = Comma;
        return true;
      case L'-':
      case L'F':
      case L'N':
      case L'T':
      case L'f':
      case L'n':
      case L't':
        local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d0.Data.ArrayNum = 0;
        local_d0.Data.ArrayMax = 0;
        ::FString::AppendChar(&local_d0,local_res18[0]);
        cVar7 = (**(code **)(*(longlong *)this->Stream + 0x38))();
        goto joined_r0x000141dd96eb;
      case L':':
        *param_1 = Colon;
        return true;
      case L'[':
        *param_1 = SquareOpen;
        pFVar2 = (this->ParseState).AllocatorInstance.Data;
        local_d4 = 5;
        if (((pFVar2 <= (FScriptContainerElement *)&local_d4) &&
            ((FScriptContainerElement *)&local_d4 <
             pFVar2 + (longlong)(this->ParseState).ArrayMax * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        iVar11 = (this->ParseState).ArrayNum;
        piVar1 = &(this->ParseState).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->ParseState).AllocatorInstance,piVar1);
        }
        (this->ParseState).ArrayNum = iVar11 + 1;
        *(undefined4 *)((this->ParseState).AllocatorInstance.Data + (longlong)iVar11 * 4) = local_d4
        ;
        return true;
      case L']':
        *param_1 = SquareClose;
        if ((this->ParseState).ArrayNum == 0) {
          ::FString::FString(&local_80,L"Unknown state reached while parsing Json token.");
          SetErrorMessage(this,&local_80);
          local_30.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
          goto LAB_141dd9431;
        }
        break;
      case L'{':
        *param_1 = CurlyOpen;
        pFVar2 = (this->ParseState).AllocatorInstance.Data;
        local_d8 = 6;
        if (((pFVar2 <= (FScriptContainerElement *)&local_d8) &&
            ((FScriptContainerElement *)&local_d8 <
             pFVar2 + (longlong)(this->ParseState).ArrayMax * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        iVar11 = (this->ParseState).ArrayNum;
        piVar1 = &(this->ParseState).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->ParseState).AllocatorInstance,piVar1);
        }
        (this->ParseState).ArrayNum = iVar11 + 1;
        *(undefined4 *)((this->ParseState).AllocatorInstance.Data + (longlong)iVar11 * 4) = local_d8
        ;
        return true;
      case L'}':
        *param_1 = CurlyClose;
        if ((this->ParseState).ArrayNum == 0) {
          ::FString::FString(&local_90,L"Unknown state reached while parsing Json token.");
          SetErrorMessage(this,&local_90);
          local_30.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
          goto LAB_141dd9431;
        }
      }
      TArray<enum_EJson,TSizedDefaultAllocator<32>_>::Pop(&this->ParseState,Default);
      return true;
    }
    cVar7 = (**(code **)(*(longlong *)this->Stream + 0x38))();
  }
  ::FString::FString(&local_30,L"Invalid Json Token.");
  SetErrorMessage(this,&local_30);
LAB_141dd9431:
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return false;
joined_r0x000141dd96eb:
  if (cVar7 != '\0') goto LAB_141dd9750;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res18,2);
  pFVar3 = this->Stream;
  if ((pFVar3->field_0x29 & 2) != 0) {
    ::FString::FString(&local_70,L"Stream I/O Error");
    SetErrorMessage(this,&local_70);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    goto LAB_141dd9971;
  }
  if (((0x19 < (ushort)(local_res18[0] + L'ﾟ')) && (0x19 < (ushort)(local_res18[0] + L'﾿'))) &&
     (1 < (ushort)(local_res18[0] + L'￘'))) {
    lVar4 = *(longlong *)pFVar3;
    lVar12 = (**(code **)(lVar4 + 0x28))(pFVar3);
    (**(code **)(lVar4 + 0x1b8))(pFVar3,lVar12 + -2);
    goto LAB_141dd9750;
  }
  this->CharacterNumber = this->CharacterNumber + 1;
  ::FString::AppendChar(&local_d0,local_res18[0]);
  cVar7 = (**(code **)(*(longlong *)this->Stream + 0x38))();
  goto joined_r0x000141dd96eb;
LAB_141dd9750:
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_d0.Data.ArrayNum != 0) {
    FVar13.Data = local_d0.Data.AllocatorInstance.Data;
  }
  iVar11 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"False");
  if (iVar11 == 0) {
    this->BoolValue = false;
    bVar9 = true;
    *param_1 = False;
    goto LAB_141dd9971;
  }
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_d0.Data.ArrayNum != 0) {
    FVar13.Data = local_d0.Data.AllocatorInstance.Data;
  }
  iVar11 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"True");
  if (iVar11 == 0) {
    this->BoolValue = true;
    bVar9 = true;
    *param_1 = True;
    goto LAB_141dd9971;
  }
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_d0.Data.ArrayNum != 0) {
    FVar13.Data = local_d0.Data.AllocatorInstance.Data;
  }
  iVar11 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"Null");
  if (iVar11 == 0) {
    *param_1 = Null;
    bVar9 = true;
    goto LAB_141dd9971;
  }
  ::FString::FString(&local_c0,L"NaN");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_c0.Data.ArrayNum != 0) {
    FVar13.Data = local_c0.Data.AllocatorInstance.Data;
  }
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_d0.Data.ArrayNum != 0) {
    FVar14.Data = local_d0.Data.AllocatorInstance.Data;
  }
  iVar11 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar14.Data,(wchar_t *)FVar13.Data);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if (iVar11 == 0) {
    bVar9 = true;
    this->NumberValue = NAN;
    *param_1 = Number;
    goto LAB_141dd9971;
  }
  ::FString::FString(&local_a0,L"-NaN");
  bVar9 = false;
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar13.Data = local_a0.Data.AllocatorInstance.Data;
  }
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_d0.Data.ArrayNum != 0) {
    FVar14.Data = local_d0.Data.AllocatorInstance.Data;
  }
  iVar11 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar14.Data,(wchar_t *)FVar13.Data);
  if (iVar11 == 0) {
LAB_141dd9903:
    bVar8 = true;
    bVar6 = true;
    if (bVar9) goto LAB_141dd990b;
  }
  else {
    ::FString::FString(&local_b0,L"-NaN(ind)");
    bVar9 = true;
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar13.Data = local_b0.Data.AllocatorInstance.Data;
    }
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_d0.Data.ArrayNum != 0) {
      FVar14.Data = local_d0.Data.AllocatorInstance.Data;
    }
    iVar11 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar14.Data,(wchar_t *)FVar13.Data);
    if (iVar11 == 0) goto LAB_141dd9903;
    bVar6 = false;
LAB_141dd990b:
    bVar8 = bVar6;
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    bVar9 = true;
    this->NumberValue = -NAN;
    *param_1 = Number;
  }
  else {
    ::FString::FString(&local_60,
                       L"Invalid Json Token. Check that your member names have quotes around them!")
    ;
    SetErrorMessage(this,&local_60);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    bVar9 = false;
  }
LAB_141dd9971:
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  return bVar9;
}

// ParseNumberToken @ 141dd9f70

/* WARNING: Removing unreachable block (ram,0x000141dda189) */
/* WARNING: Removing unreachable block (ram,0x000141dda19a) */
/* WARNING: Removing unreachable block (ram,0x000141dda19e) */
/* WARNING: Removing unreachable block (ram,0x000141dda1ae) */
/* WARNING: Removing unreachable block (ram,0x000141dda1b3) */
/* WARNING: Removing unreachable block (ram,0x000141dd9fdf) */
/* WARNING: Removing unreachable block (ram,0x000141dda1dc) */
/* WARNING: Removing unreachable block (ram,0x000141dda004) */
/* WARNING: Removing unreachable block (ram,0x000141dda153) */
/* WARNING: Removing unreachable block (ram,0x000141dda144) */

bool __thiscall TJsonReader<char>::ParseNumberToken(TJsonReader<char> *this,char param_1)

{
  FArchive *pFVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  FString local_38;
  
  cVar3 = (**(code **)(*(longlong *)this->Stream + 0x38))();
  if (cVar3 == '\0') {
    if (((byte)((byte)param_1 - 0x2b) < 0x3b) &&
       ((0x400000004007fedU >> ((ulonglong)((byte)param_1 - 0x2b) & 0x3f) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000141dda037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)(switchD_1501dbc7b::caseD_1.e_magic +
                        switchD_141dda037::switchdataD_141dda1e8))
                        (switchD_1501dbc7b::caseD_1.e_magic +
                         switchD_141dda037::switchdataD_141dda1e8);
      return (bool)uVar4;
    }
    pFVar1 = this->Stream;
    lVar2 = *(longlong *)pFVar1;
    lVar5 = (**(code **)(lVar2 + 0x28))(pFVar1);
    (**(code **)(lVar2 + 0x1b8))(pFVar1,lVar5 + -1);
    this->CharacterNumber = this->CharacterNumber - 1;
    if (param_1 == '-') {
      return false;
    }
    pwVar6 = L"Poorly formed Json Number Token.";
  }
  else {
    pwVar6 = L"Number Token Abruptly Ended.";
  }
  ::FString::FString(&local_38,pwVar6);
  SetErrorMessage(this,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return false;
}

// ParseNumberToken @ 141dda220

/* WARNING: Removing unreachable block (ram,0x000141dda439) */
/* WARNING: Removing unreachable block (ram,0x000141dda44a) */
/* WARNING: Removing unreachable block (ram,0x000141dda44e) */
/* WARNING: Removing unreachable block (ram,0x000141dda45e) */
/* WARNING: Removing unreachable block (ram,0x000141dda463) */
/* WARNING: Removing unreachable block (ram,0x000141dda28f) */
/* WARNING: Removing unreachable block (ram,0x000141dda48c) */
/* WARNING: Removing unreachable block (ram,0x000141dda2b4) */
/* WARNING: Removing unreachable block (ram,0x000141dda403) */
/* WARNING: Removing unreachable block (ram,0x000141dda3f4) */

bool __thiscall TJsonReader<char8_t>::ParseNumberToken(TJsonReader<char8_t> *this,uchar param_1)

{
  FArchive *pFVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  FString local_38;
  
  cVar3 = (**(code **)(*(longlong *)this->Stream + 0x38))();
  if (cVar3 == '\0') {
    if (((byte)(param_1 - 0x2b) < 0x3b) &&
       ((0x400000004007fedU >> ((ulonglong)(param_1 - 0x2b) & 0x3f) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000141dda2e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)(switchD_1501dbc7b::caseD_1.e_magic +
                        switchD_141dda2e7::switchdataD_141dda498))
                        (switchD_1501dbc7b::caseD_1.e_magic +
                         switchD_141dda2e7::switchdataD_141dda498);
      return (bool)uVar4;
    }
    pFVar1 = this->Stream;
    lVar2 = *(longlong *)pFVar1;
    lVar5 = (**(code **)(lVar2 + 0x28))(pFVar1);
    (**(code **)(lVar2 + 0x1b8))(pFVar1,lVar5 + -1);
    this->CharacterNumber = this->CharacterNumber - 1;
    if (param_1 == '-') {
      return false;
    }
    pwVar6 = L"Poorly formed Json Number Token.";
  }
  else {
    pwVar6 = L"Number Token Abruptly Ended.";
  }
  ::FString::FString(&local_38,pwVar6);
  SetErrorMessage(this,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return false;
}

// ParseNumberToken @ 141dda4d0

/* WARNING: Removing unreachable block (ram,0x000141dda716) */
/* WARNING: Removing unreachable block (ram,0x000141dda727) */
/* WARNING: Removing unreachable block (ram,0x000141dda72b) */
/* WARNING: Removing unreachable block (ram,0x000141dda73b) */
/* WARNING: Removing unreachable block (ram,0x000141dda740) */
/* WARNING: Removing unreachable block (ram,0x000141dda54a) */
/* WARNING: Removing unreachable block (ram,0x000141dda76c) */
/* WARNING: Removing unreachable block (ram,0x000141dda56f) */
/* WARNING: Removing unreachable block (ram,0x000141dda6e0) */

bool __thiscall TJsonReader<wchar_t>::ParseNumberToken(TJsonReader<wchar_t> *this,wchar_t param_1)

{
  FArchive *pFVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  void *pvVar7;
  undefined8 uVar8;
  FString local_38;
  
  pvVar7 = (void *)0x0;
  uVar8 = 0;
  cVar3 = (**(code **)(*(longlong *)this->Stream + 0x38))();
  if (cVar3 == '\0') {
    if (((ushort)((ushort)param_1 - 0x2b) < 0x3b) &&
       ((0x400000004007fedU >> ((ulonglong)((ushort)param_1 - 0x2b) & 0x3f) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000141dda5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)(switchD_1501dbc7b::caseD_1.e_magic +
                        switchD_141dda5b0::switchdataD_141dda778))
                        (switchD_1501dbc7b::caseD_1.e_magic +
                         switchD_141dda5b0::switchdataD_141dda778);
      return (bool)uVar4;
    }
    pFVar1 = this->Stream;
    lVar2 = *(longlong *)pFVar1;
    lVar5 = (**(code **)(lVar2 + 0x28))(pFVar1,param_1,0xffdf,0xfffd,pvVar7,uVar8);
    (**(code **)(lVar2 + 0x1b8))(pFVar1,lVar5 + -2);
    this->CharacterNumber = this->CharacterNumber - 1;
    if (param_1 == L'-') goto LAB_141dda6a2;
    pwVar6 = L"Poorly formed Json Number Token.";
  }
  else {
    pwVar6 = L"Number Token Abruptly Ended.";
  }
  ::FString::FString(&local_38,pwVar6);
  SetErrorMessage(this,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_141dda6a2:
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  return false;
}

// ParseStringToken @ 141ddabd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall TJsonReader<char>::ParseStringToken(TJsonReader<char> *this)

{
  FArchive *pFVar1;
  FScriptContainerElement *pFVar2;
  uchar uVar3;
  char cVar4;
  undefined1 uVar5;
  FUtf8String *pFVar6;
  wchar_t *pwVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FString *pFVar11;
  int iVar12;
  undefined1 auStack_6f8 [32];
  uchar local_6d8 [8];
  FString local_6d0;
  FString local_6c0;
  FString local_6b0;
  FUtf8String local_6a0;
  TStringBuilderBase<char8_t> local_688;
  uchar local_668 [512];
  TStringBuilderWithBuffer<wchar_t,512> local_468;
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_6f8;
  local_688.Base = local_668;
  local_688.bIsDynamic = false;
  local_688.bIsExternal = false;
  local_688.CurPos = local_668;
  local_688.End = (uchar *)&local_468;
  local_468._padding_ = (longlong)local_468.StringBuffer;
  local_468._padding_ = (longlong)local_468.StringBuffer;
  local_468._padding_ = (longlong)local_48;
  local_468._padding_._0_2_ = 0;
  cVar4 = (**(code **)(*(longlong *)this->Stream + 0x38))();
  pFVar9 = (FScriptContainerElement *)0x0;
  iVar12 = 0;
  do {
    if (cVar4 != '\0') {
      ::FString::FString(&local_6b0,L"String Token Abruptly Ended.");
      ::FString::PrintfImpl(&local_6d0,L" Line: %u Ch: %u");
      ::FString::ConcatFF(&local_6c0,&local_6b0,&local_6d0);
      pFVar11 = &this->ErrorMessage;
      if (pFVar11 != &local_6c0) {
        pFVar9 = (pFVar11->Data).AllocatorInstance.Data;
        if (pFVar9 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar9);
        }
        (pFVar11->Data).AllocatorInstance.Data = local_6c0.Data.AllocatorInstance.Data;
        (this->ErrorMessage).Data.ArrayNum = local_6c0.Data.ArrayNum;
        (this->ErrorMessage).Data.ArrayMax = local_6c0.Data.ArrayMax;
        local_6c0.Data.ArrayNum = 0;
        local_6c0.Data.ArrayMax = 0;
        local_6c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_6c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6c0.Data.AllocatorInstance.Data);
      }
      if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
      }
LAB_141ddb132:
      if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
      }
      bVar8 = false;
LAB_141ddb13e:
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                ((TStringBuilderBase<wchar_t> *)&local_468);
      TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_688);
      return bVar8;
    }
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_6d8,1);
    pFVar1 = this->Stream;
    if ((pFVar1->field_0x29 & 2) != 0) {
LAB_141ddb038:
      pwVar7 = L"Stream I/O Error";
LAB_141ddb017:
      ::FString::FString(&local_6d0,pwVar7);
      SetErrorMessage(this,&local_6d0);
      local_6b0.Data.AllocatorInstance.Data = local_6d0.Data.AllocatorInstance.Data;
      goto LAB_141ddb132;
    }
    this->CharacterNumber = this->CharacterNumber + 1;
    if (local_6d8[0] == '\"') {
      if (0 < (int)(local_468._padding_ - local_468._padding_ >> 1)) {
        TStringBuilderBase<char8_t>::Append<TStringBuilderWithBuffer<wchar_t,512>_&>
                  (&local_688,&local_468);
        local_468._padding_ = local_468._padding_;
      }
      pFVar6 = FUtf8String::ConstructFromPtrSize
                         ((FUtf8String *)&local_6b0,local_688.Base,
                          (int)local_688.CurPos - (int)local_688.Base);
      iVar10 = iVar12;
      if (&local_6a0 != pFVar6) {
        pFVar9 = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar12 = (pFVar6->Data).ArrayNum;
        iVar10 = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
      }
      pFVar6 = &this->StringValue;
      if (pFVar6 == &local_6a0) {
        if (pFVar9 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar9);
        }
        bVar8 = true;
      }
      else {
        pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar6->Data).AllocatorInstance.Data = pFVar9;
        bVar8 = true;
        (this->StringValue).Data.ArrayNum = iVar12;
        (this->StringValue).Data.ArrayMax = iVar10;
      }
      goto LAB_141ddb13e;
    }
    if (local_6d8[0] == '\\') {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_6d8,1);
      if ((this->Stream->field_0x29 & 2) != 0) goto LAB_141ddb038;
      this->CharacterNumber = this->CharacterNumber + 1;
      if ((local_6d8[0] != 'u') && (0 < (int)(local_468._padding_ - local_468._padding_ >> 1))) {
        TStringBuilderBase<char8_t>::Append<TStringBuilderWithBuffer<wchar_t,512>_&>
                  (&local_688,&local_468);
        local_468._padding_ = local_468._padding_;
      }
      if ((int)(char)local_6d8[0] - 0x22U < 0x54) {
                    /* WARNING: Could not recover jumptable at 0x000141ddad5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)(switchD_1501dbc7b::caseD_1.e_magic +
                          *(uint *)(&DAT_141ddb188 +
                                   (ulonglong)
                                   (byte)(&DAT_141ddb1a8)[(int)((int)(char)local_6d8[0] - 0x22U)] *
                                   4)))
                          (switchD_1501dbc7b::caseD_1.e_magic +
                           *(uint *)(&DAT_141ddb188 +
                                    (ulonglong)
                                    (byte)(&DAT_141ddb1a8)[(int)((int)(char)local_6d8[0] - 0x22U)] *
                                    4));
        return (bool)uVar5;
      }
      pwVar7 = L"Bad Json escaped char.";
      goto LAB_141ddb017;
    }
    if (0 < (int)(local_468._padding_ - local_468._padding_ >> 1)) {
      TStringBuilderBase<char8_t>::Append<TStringBuilderWithBuffer<wchar_t,512>_&>
                (&local_688,&local_468);
      local_468._padding_ = local_468._padding_;
    }
    uVar3 = local_6d8[0];
    if (local_688.End < (TStringBuilderWithBuffer<wchar_t,512> *)(local_688.CurPos + 1)) {
      TStringBuilderBase<char8_t>::Extend(&local_688,1);
    }
    *local_688.CurPos = uVar3;
    local_688.CurPos = local_688.CurPos + 1;
    cVar4 = (**(code **)(*(longlong *)this->Stream + 0x38))();
  } while( true );
}

// ParseStringToken @ 141ddb210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall TJsonReader<char8_t>::ParseStringToken(TJsonReader<char8_t> *this)

{
  FArchive *pFVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  FUtf8String *pFVar6;
  wchar_t *pwVar7;
  bool bVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FString *pFVar12;
  int iVar13;
  undefined1 auStack_6f8 [32];
  byte local_6d8 [8];
  FString local_6d0;
  FString local_6c0;
  FString local_6b0;
  FUtf8String local_6a0;
  TStringBuilderBase<char8_t> local_688;
  byte local_668 [512];
  TStringBuilderWithBuffer<wchar_t,512> local_468;
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_6f8;
  local_688.Base = local_668;
  local_688.bIsDynamic = false;
  local_688.bIsExternal = false;
  local_688.CurPos = local_668;
  local_688.End = (uchar *)&local_468;
  local_468._padding_ = (longlong)local_468.StringBuffer;
  local_468._padding_ = (longlong)local_468.StringBuffer;
  local_468._padding_ = (longlong)local_48;
  local_468._padding_._0_2_ = 0;
  cVar4 = (**(code **)(*(longlong *)this->Stream + 0x38))();
  pFVar10 = (FScriptContainerElement *)0x0;
  iVar13 = 0;
  do {
    if (cVar4 != '\0') {
      ::FString::FString(&local_6b0,L"String Token Abruptly Ended.");
      ::FString::PrintfImpl(&local_6d0,L" Line: %u Ch: %u");
      ::FString::ConcatFF(&local_6c0,&local_6b0,&local_6d0);
      pFVar12 = &this->ErrorMessage;
      if (pFVar12 != &local_6c0) {
        pFVar10 = (pFVar12->Data).AllocatorInstance.Data;
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar10);
        }
        (pFVar12->Data).AllocatorInstance.Data = local_6c0.Data.AllocatorInstance.Data;
        (this->ErrorMessage).Data.ArrayNum = local_6c0.Data.ArrayNum;
        (this->ErrorMessage).Data.ArrayMax = local_6c0.Data.ArrayMax;
        local_6c0.Data.ArrayNum = 0;
        local_6c0.Data.ArrayMax = 0;
        local_6c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_6c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6c0.Data.AllocatorInstance.Data);
      }
      if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
      }
LAB_141ddb76f:
      if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
      }
      bVar8 = false;
LAB_141ddb77b:
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                ((TStringBuilderBase<wchar_t> *)&local_468);
      TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_688);
      return bVar8;
    }
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_6d8,1);
    pFVar1 = this->Stream;
    if ((pFVar1->field_0x29 & 2) != 0) {
LAB_141ddb675:
      pwVar7 = L"Stream I/O Error";
LAB_141ddb654:
      ::FString::FString(&local_6d0,pwVar7);
      SetErrorMessage(this,&local_6d0);
      local_6b0.Data.AllocatorInstance.Data = local_6d0.Data.AllocatorInstance.Data;
      goto LAB_141ddb76f;
    }
    this->CharacterNumber = this->CharacterNumber + 1;
    if (local_6d8[0] == 0x22) {
      if (0 < (int)(local_468._padding_ - local_468._padding_ >> 1)) {
        TStringBuilderBase<char8_t>::Append<TStringBuilderWithBuffer<wchar_t,512>_&>
                  (&local_688,&local_468);
        local_468._padding_ = local_468._padding_;
      }
      pFVar6 = FUtf8String::ConstructFromPtrSize
                         ((FUtf8String *)&local_6b0,local_688.Base,
                          (int)local_688.CurPos - (int)local_688.Base);
      iVar11 = iVar13;
      if (&local_6a0 != pFVar6) {
        pFVar10 = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar13 = (pFVar6->Data).ArrayNum;
        iVar11 = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
      }
      pFVar6 = &this->StringValue;
      if (pFVar6 == &local_6a0) {
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar10);
        }
        bVar8 = true;
      }
      else {
        pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar6->Data).AllocatorInstance.Data = pFVar10;
        bVar8 = true;
        (this->StringValue).Data.ArrayNum = iVar13;
        (this->StringValue).Data.ArrayMax = iVar11;
      }
      goto LAB_141ddb77b;
    }
    if (local_6d8[0] == 0x5c) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_6d8,1);
      if ((this->Stream->field_0x29 & 2) != 0) goto LAB_141ddb675;
      this->CharacterNumber = this->CharacterNumber + 1;
      uVar9 = (uint)local_6d8[0];
      if ((local_6d8[0] != 0x75) && (0 < (int)(local_468._padding_ - local_468._padding_ >> 1))) {
        TStringBuilderBase<char8_t>::Append<TStringBuilderWithBuffer<wchar_t,512>_&>
                  (&local_688,&local_468);
        uVar9 = (uint)local_6d8[0];
        local_468._padding_ = local_468._padding_;
      }
      if (uVar9 - 0x22 < 0x54) {
                    /* WARNING: Could not recover jumptable at 0x000141ddb39d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)(switchD_1501dbc7b::caseD_1.e_magic +
                          *(uint *)(&DAT_141ddb7c4 +
                                   (ulonglong)(byte)(&DAT_141ddb7e4)[(int)(uVar9 - 0x22)] * 4)))
                          (switchD_1501dbc7b::caseD_1.e_magic +
                           *(uint *)(&DAT_141ddb7c4 +
                                    (ulonglong)(byte)(&DAT_141ddb7e4)[(int)(uVar9 - 0x22)] * 4));
        return (bool)uVar5;
      }
      pwVar7 = L"Bad Json escaped char.";
      goto LAB_141ddb654;
    }
    if (0 < (int)(local_468._padding_ - local_468._padding_ >> 1)) {
      TStringBuilderBase<char8_t>::Append<TStringBuilderWithBuffer<wchar_t,512>_&>
                (&local_688,&local_468);
      local_468._padding_ = local_468._padding_;
    }
    bVar3 = local_6d8[0];
    if (local_688.End < (TStringBuilderWithBuffer<wchar_t,512> *)(local_688.CurPos + 1)) {
      TStringBuilderBase<char8_t>::Extend(&local_688,1);
    }
    *local_688.CurPos = bVar3;
    local_688.CurPos = local_688.CurPos + 1;
    cVar4 = (**(code **)(*(longlong *)this->Stream + 0x38))();
  } while( true );
}

// ParseStringToken @ 141ddb840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall TJsonReader<wchar_t>::ParseStringToken(TJsonReader<wchar_t> *this)

{
  FArchive *pFVar1;
  FScriptContainerElement *pFVar2;
  wchar_t wVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  FString *pFVar9;
  ulong64 uVar10;
  wchar_t *pwVar11;
  bool bVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStack_8f8 [32];
  wchar_t local_8d8 [4];
  FString local_8d0;
  FString local_8c0;
  FString local_8b0;
  FString local_8a0;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [512];
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [512];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_8f8;
  local_888.Base = local_868;
  local_888.bIsDynamic = false;
  local_888.bIsExternal = false;
  local_888.CurPos = local_868;
  local_888.End = (wchar_t *)&local_468;
  local_468.Base = local_448;
  local_468.CurPos = local_448;
  local_468.End = (wchar_t *)local_48;
  local_468.bIsDynamic = false;
  local_468.bIsExternal = false;
  cVar4 = (**(code **)(*(longlong *)this->Stream + 0x38))();
  pFVar13 = (FScriptContainerElement *)0x0;
  iVar6 = 0;
  do {
    if (cVar4 != '\0') {
      ::FString::FString(&local_8b0,L"String Token Abruptly Ended.");
      ::FString::PrintfImpl(&local_8d0,L" Line: %u Ch: %u");
      ::FString::ConcatFF(&local_8c0,&local_8b0,&local_8d0);
      pFVar9 = &this->ErrorMessage;
      if (pFVar9 != &local_8c0) {
        pFVar13 = (pFVar9->Data).AllocatorInstance.Data;
        if (pFVar13 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar13);
        }
        (pFVar9->Data).AllocatorInstance.Data = local_8c0.Data.AllocatorInstance.Data;
        (this->ErrorMessage).Data.ArrayNum = local_8c0.Data.ArrayNum;
        (this->ErrorMessage).Data.ArrayMax = local_8c0.Data.ArrayMax;
        local_8c0.Data.ArrayNum = 0;
        local_8c0.Data.ArrayMax = 0;
        local_8c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_8c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8c0.Data.AllocatorInstance.Data);
      }
      if (local_8d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8d0.Data.AllocatorInstance.Data);
      }
LAB_141ddbe5e:
      if (local_8b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
      }
      bVar12 = false;
LAB_141ddbe6a:
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
      return bVar12;
    }
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_8d8,2);
    pwVar11 = local_468.Base;
    pFVar1 = this->Stream;
    if ((pFVar1->field_0x29 & 2) != 0) {
LAB_141ddbd26:
      pwVar11 = L"Stream I/O Error";
LAB_141ddbd05:
      ::FString::FString(&local_8d0,pwVar11);
      SetErrorMessage(this,&local_8d0);
      local_8b0.Data.AllocatorInstance.Data = local_8d0.Data.AllocatorInstance.Data;
      goto LAB_141ddbe5e;
    }
    this->CharacterNumber = this->CharacterNumber + 1;
    if (local_8d8[0] == L'\"') {
      iVar7 = (int)((longlong)local_468.CurPos - (longlong)local_468.Base >> 1);
      if (0 < iVar7) {
        uVar10 = (ulong64)iVar7;
        if (local_888.End < (TStringBuilderBase<wchar_t> *)(local_888.CurPos + uVar10)) {
          TStringBuilderBase<wchar_t>::Extend(&local_888,uVar10);
        }
        pvVar8 = FGenericPlatformString::Memcpy(local_888.CurPos,pwVar11,uVar10 * 2);
        local_888.CurPos = (wchar_t *)((longlong)pvVar8 + uVar10 * 2);
        local_468.CurPos = local_468.Base;
      }
      pFVar9 = ::FString::ConstructFromPtrSize
                         (&local_8b0,local_888.Base,
                          (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1));
      iVar7 = iVar6;
      if (&local_8a0 != pFVar9) {
        pFVar13 = (pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar6 = (pFVar9->Data).ArrayNum;
        iVar7 = (pFVar9->Data).ArrayMax;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
      }
      if (local_8b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
      }
      pFVar9 = &this->StringValue;
      if (pFVar9 == &local_8a0) {
        if (pFVar13 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar13);
        }
        StringConv::InlineCombineSurrogates(pFVar9);
        bVar12 = true;
      }
      else {
        pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar9->Data).AllocatorInstance.Data = pFVar13;
        (this->StringValue).Data.ArrayNum = iVar6;
        (this->StringValue).Data.ArrayMax = iVar7;
        StringConv::InlineCombineSurrogates(pFVar9);
        bVar12 = true;
      }
      goto LAB_141ddbe6a;
    }
    if (local_8d8[0] == L'\\') {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_8d8,2);
      pwVar11 = local_468.Base;
      if ((this->Stream->field_0x29 & 2) != 0) goto LAB_141ddbd26;
      this->CharacterNumber = this->CharacterNumber + 1;
      if ((local_8d8[0] != L'u') &&
         (iVar6 = (int)((longlong)local_468.CurPos - (longlong)local_468.Base >> 1), 0 < iVar6)) {
        uVar10 = (ulong64)iVar6;
        if (local_888.End < (TStringBuilderBase<wchar_t> *)(local_888.CurPos + uVar10)) {
          TStringBuilderBase<wchar_t>::Extend(&local_888,uVar10);
        }
        pvVar8 = FGenericPlatformString::Memcpy(local_888.CurPos,pwVar11,uVar10 * 2);
        local_888.CurPos = (wchar_t *)((longlong)pvVar8 + uVar10 * 2);
        local_468.CurPos = local_468.Base;
      }
      if ((ushort)local_8d8[0] - 0x22 < 0x54) {
                    /* WARNING: Could not recover jumptable at 0x000141ddba02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)(switchD_1501dbc7b::caseD_1.e_magic +
                          *(uint *)(&DAT_141ddbeb8 +
                                   (ulonglong)
                                   (byte)(&DAT_141ddbed8)[(int)((ushort)local_8d8[0] - 0x22)] * 4)))
                          (switchD_1501dbc7b::caseD_1.e_magic +
                           *(uint *)(&DAT_141ddbeb8 +
                                    (ulonglong)
                                    (byte)(&DAT_141ddbed8)[(int)((ushort)local_8d8[0] - 0x22)] * 4),
                           local_888.CurPos);
        return (bool)uVar5;
      }
      pwVar11 = L"Bad Json escaped char.";
      goto LAB_141ddbd05;
    }
    iVar7 = (int)((longlong)local_468.CurPos - (longlong)local_468.Base >> 1);
    if (0 < iVar7) {
      uVar10 = (ulong64)iVar7;
      if (local_888.End < (TStringBuilderBase<wchar_t> *)(local_888.CurPos + uVar10)) {
        TStringBuilderBase<wchar_t>::Extend(&local_888,uVar10);
      }
      pvVar8 = FGenericPlatformString::Memcpy(local_888.CurPos,pwVar11,uVar10 * 2);
      local_888.CurPos = (wchar_t *)((longlong)pvVar8 + uVar10 * 2);
      local_468.CurPos = local_468.Base;
    }
    wVar3 = local_8d8[0];
    if (local_888.End < (TStringBuilderBase<wchar_t> *)(local_888.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_888,1);
    }
    *local_888.CurPos = wVar3;
    local_888.CurPos = local_888.CurPos + 1;
    cVar4 = (**(code **)(*(longlong *)this->Stream + 0x38))();
  } while( true );
}

// ParseWhiteSpace @ 141ddbf40

bool __thiscall TJsonReader<char>::ParseWhiteSpace(TJsonReader<char> *this)

{
  FArchive *pFVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  byte local_res8 [8];
  FString local_18;
  
  cVar3 = (**(code **)(*(longlong *)this->Stream + 0x38))();
  while( true ) {
    if (cVar3 != '\0') {
      return true;
    }
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    pFVar1 = this->Stream;
    if ((pFVar1->field_0x29 & 2) != 0) break;
    this->CharacterNumber = this->CharacterNumber + 1;
    if (local_res8[0] == 10) {
      this->LineNumber = this->LineNumber + 1;
      this->CharacterNumber = 0;
    }
    if ((0x20 < local_res8[0]) ||
       ((0x100002600U >> ((longlong)(char)local_res8[0] & 0x3fU) & 1) == 0)) {
      lVar2 = *(longlong *)pFVar1;
      lVar4 = (**(code **)(lVar2 + 0x28))(pFVar1);
      (**(code **)(lVar2 + 0x1b8))(pFVar1,lVar4 + -1);
      this->CharacterNumber = this->CharacterNumber - 1;
      return true;
    }
    cVar3 = (**(code **)(*(longlong *)pFVar1 + 0x38))(pFVar1);
  }
  ::FString::FString(&local_18,L"Stream I/O Error");
  SetErrorMessage(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// ParseWhiteSpace @ 141ddc030

bool __thiscall TJsonReader<char8_t>::ParseWhiteSpace(TJsonReader<char8_t> *this)

{
  FArchive *pFVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  byte local_res8 [8];
  FString local_18;
  
  cVar3 = (**(code **)(*(longlong *)this->Stream + 0x38))();
  while( true ) {
    if (cVar3 != '\0') {
      return true;
    }
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,1);
    pFVar1 = this->Stream;
    if ((pFVar1->field_0x29 & 2) != 0) break;
    this->CharacterNumber = this->CharacterNumber + 1;
    if (local_res8[0] == 10) {
      this->LineNumber = this->LineNumber + 1;
      this->CharacterNumber = 0;
    }
    if ((0x20 < local_res8[0]) || ((0x100002600U >> ((ulonglong)local_res8[0] & 0x3f) & 1) == 0)) {
      lVar2 = *(longlong *)pFVar1;
      lVar4 = (**(code **)(lVar2 + 0x28))(pFVar1);
      (**(code **)(lVar2 + 0x1b8))(pFVar1,lVar4 + -1);
      this->CharacterNumber = this->CharacterNumber - 1;
      return true;
    }
    cVar3 = (**(code **)(*(longlong *)pFVar1 + 0x38))(pFVar1);
  }
  ::FString::FString(&local_18,L"Stream I/O Error");
  SetErrorMessage(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// ParseWhiteSpace @ 141ddc120

bool __thiscall TJsonReader<wchar_t>::ParseWhiteSpace(TJsonReader<wchar_t> *this)

{
  FArchive *pFVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ushort local_res8 [4];
  FString local_18;
  
  cVar3 = (**(code **)(*(longlong *)this->Stream + 0x38))();
  while( true ) {
    if (cVar3 != '\0') {
      return true;
    }
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_res8,2);
    pFVar1 = this->Stream;
    if ((pFVar1->field_0x29 & 2) != 0) break;
    this->CharacterNumber = this->CharacterNumber + 1;
    if (local_res8[0] == 10) {
      this->LineNumber = this->LineNumber + 1;
      this->CharacterNumber = 0;
    }
    if ((0x20 < local_res8[0]) || ((0x100002600U >> ((ulonglong)local_res8[0] & 0x3f) & 1) == 0)) {
      lVar2 = *(longlong *)pFVar1;
      lVar4 = (**(code **)(lVar2 + 0x28))(pFVar1);
      (**(code **)(lVar2 + 0x1b8))(pFVar1,lVar4 + -2);
      this->CharacterNumber = this->CharacterNumber - 1;
      return true;
    }
    cVar3 = (**(code **)(*(longlong *)pFVar1 + 0x38))(pFVar1);
  }
  ::FString::FString(&local_18,L"Stream I/O Error");
  SetErrorMessage(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// ReadNext @ 141ddd7b0

bool __thiscall TJsonReader<char>::ReadNext(TJsonReader<char> *this,EJsonNotation *param_1)

{
  EJsonToken EVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  EJsonToken *pEVar9;
  int iVar10;
  uint uVar11;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (1 < (this->ErrorMessage).Data.ArrayNum) {
    *param_1 = Error;
    return false;
  }
  if (this->Stream == (FArchive *)0x0) {
    *param_1 = Error;
    ::FString::FString(&local_c8,L"Null Stream");
    SetErrorMessage(this,&local_c8);
  }
  else {
    cVar4 = (**(code **)(*(longlong *)this->Stream + 0x38))();
    if (cVar4 == '\0') {
      if (this->FinishedReadingRootObject == false) {
        ::FString::Empty(&this->Identifier);
        do {
          iVar10 = (this->ParseState).ArrayNum;
          uVar11 = 0;
          if (iVar10 < 1) {
LAB_141ddd93e:
            pEVar9 = &this->CurrentToken;
            switch(uVar11) {
            default:
              goto switchD_141ddd94e_caseD_0;
            case 5:
              EVar1 = *pEVar9;
              *pEVar9 = None;
              bVar5 = NextToken(this,pEVar9);
              if (bVar5) {
                if ((*pEVar9 != SquareClose) && (EVar1 != SquareOpen)) {
                  if (*pEVar9 != Comma) {
                    ::FString::FString(&local_98,L"Comma token expected, but not found.");
                    SetErrorMessage(this,&local_98);
                    FVar8.Data = local_98.Data.AllocatorInstance.Data;
                    goto LAB_141dddbf4;
                  }
                  *pEVar9 = None;
                  bVar5 = NextToken(this,pEVar9);
                  if (!bVar5) goto LAB_141dddbfe;
                }
LAB_141ddd9b5:
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              break;
            case 6:
              EVar1 = *pEVar9;
              *pEVar9 = None;
              bVar5 = NextToken(this,pEVar9);
              if (bVar5) {
                if (*pEVar9 == CurlyClose) goto LAB_141ddd9b5;
                if (EVar1 != CurlyOpen) {
                  if (*pEVar9 != Comma) {
                    ::FString::FString(&local_88,L"Comma token expected, but not found.");
                    SetErrorMessage(this,&local_88);
                    FVar8.Data = local_88.Data.AllocatorInstance.Data;
                    goto LAB_141dddbf4;
                  }
                  *pEVar9 = None;
                  bVar5 = NextToken(this,pEVar9);
                  if (!bVar5) goto LAB_141dddbfe;
                }
                if (*pEVar9 == String) {
                  iVar2 = (this->StringValue).Data.ArrayNum;
                  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_d8.Data.ArrayNum = 0;
                  local_d8.Data.ArrayMax = 0;
                  iVar10 = iVar2 + -1;
                  if (iVar2 == 0) {
                    iVar10 = 0;
                  }
                  pFVar7 = ::FString::ConstructFromPtrSize
                                     (&local_38,
                                      (uchar *)(this->StringValue).Data.AllocatorInstance.Data,
                                      iVar10);
                  if (&local_d8 != pFVar7) {
                    local_d8.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
                    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_d8.Data.ArrayNum = (pFVar7->Data).ArrayNum;
                    local_d8.Data.ArrayMax = (pFVar7->Data).ArrayMax;
                    (pFVar7->Data).ArrayNum = 0;
                    (pFVar7->Data).ArrayMax = 0;
                  }
                  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_38.Data.AllocatorInstance.Data);
                  }
                  ::FString::operator=(&this->Identifier,&local_d8);
                  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
                  }
                  *pEVar9 = None;
                  bVar5 = NextToken(this,pEVar9);
                  if (!bVar5) goto LAB_141dddbfe;
                  if (*pEVar9 == Colon) {
                    *pEVar9 = None;
                    bVar5 = NextToken(this,pEVar9);
                    break;
                  }
                  ::FString::FString(&local_68,L"Colon token expected, but not found.");
                  SetErrorMessage(this,&local_68);
                  FVar8.Data = local_68.Data.AllocatorInstance.Data;
                }
                else {
                  ::FString::FString(&local_78,L"String token expected, but not found.");
                  SetErrorMessage(this,&local_78);
                  FVar8.Data = local_78.Data.AllocatorInstance.Data;
                }
                goto LAB_141dddbf4;
              }
LAB_141dddbfe:
              bVar5 = false;
            }
          }
          else {
            if ((int)(iVar10 - 1U) < iVar10) {
              uVar11 = ~(iVar10 - 1U) >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            uVar11 = *(uint *)((this->ParseState).AllocatorInstance.Data +
                              (longlong)(this->ParseState).ArrayNum * 4 + -4);
            if (uVar11 < 7) goto LAB_141ddd93e;
switchD_141ddd94e_caseD_0:
            pEVar9 = &this->CurrentToken;
            bVar5 = ParseWhiteSpace(this);
            if (bVar5) {
              *pEVar9 = None;
              bVar5 = NextToken(this,pEVar9);
              if (bVar5) {
                if ((*pEVar9 == CurlyOpen) || (*pEVar9 == SquareOpen)) goto LAB_141ddd9b5;
                ::FString::FString(&local_58,
                                   L"Open Curly or Square Brace token expected, but not found.");
                SetErrorMessage(this,&local_58);
                FVar8.Data = local_58.Data.AllocatorInstance.Data;
LAB_141dddbf4:
                if (FVar8.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar8.Data);
                }
                goto LAB_141dddbfe;
              }
              bVar5 = false;
            }
            else {
              bVar5 = false;
            }
          }
        } while ((bVar5 != false) && (this->CurrentToken == None));
        *param_1 = ::TokenToNotationTable[(int)this->CurrentToken];
        iVar10 = (this->ParseState).ArrayNum;
        this->FinishedReadingRootObject = iVar10 == 0;
        if ((bVar5 != false) && (*param_1 != Error)) {
          if (iVar10 != 0) {
            return bVar5;
          }
          cVar4 = (**(code **)(*(longlong *)this->Stream + 0x38))();
          if (cVar4 == '\0') {
            bVar5 = ParseWhiteSpace(this);
            return bVar5;
          }
          return bVar5;
        }
        *param_1 = Error;
        if (1 < (this->ErrorMessage).Data.ArrayNum) {
          return true;
        }
        ::FString::FString(&local_48,L"Unknown Error Occurred");
        SetErrorMessage(this,&local_48);
        local_c8.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        goto LAB_141dddc33;
      }
    }
    else if (this->FinishedReadingRootObject == false) {
      *param_1 = Error;
      ::FString::FString(&local_b8,L"Improperly formatted.");
      SetErrorMessage(this,&local_b8);
      local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      goto LAB_141dddc33;
    }
    if (cVar4 != '\0') {
      return false;
    }
    *param_1 = Error;
    ::FString::FString(&local_a8,L"Unexpected additional input found.");
    SetErrorMessage(this,&local_a8);
    local_c8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
  }
LAB_141dddc33:
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return true;
}

// ReadNext @ 141dddc80

bool __thiscall TJsonReader<char8_t>::ReadNext(TJsonReader<char8_t> *this,EJsonNotation *param_1)

{
  EJsonToken EVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  EJsonToken *pEVar9;
  int iVar10;
  uint uVar11;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (1 < (this->ErrorMessage).Data.ArrayNum) {
    *param_1 = Error;
    return false;
  }
  if (this->Stream == (FArchive *)0x0) {
    *param_1 = Error;
    ::FString::FString(&local_c8,L"Null Stream");
    SetErrorMessage(this,&local_c8);
  }
  else {
    cVar4 = (**(code **)(*(longlong *)this->Stream + 0x38))();
    if (cVar4 == '\0') {
      if (this->FinishedReadingRootObject == false) {
        ::FString::Empty(&this->Identifier);
        do {
          iVar10 = (this->ParseState).ArrayNum;
          uVar11 = 0;
          if (iVar10 < 1) {
LAB_141ddde0e:
            pEVar9 = &this->CurrentToken;
            switch(uVar11) {
            default:
              goto switchD_141ddde1e_caseD_0;
            case 5:
              EVar1 = *pEVar9;
              *pEVar9 = None;
              bVar5 = NextToken(this,pEVar9);
              if (bVar5) {
                if ((*pEVar9 != SquareClose) && (EVar1 != SquareOpen)) {
                  if (*pEVar9 != Comma) {
                    ::FString::FString(&local_98,L"Comma token expected, but not found.");
                    SetErrorMessage(this,&local_98);
                    FVar8.Data = local_98.Data.AllocatorInstance.Data;
                    goto LAB_141dde0c4;
                  }
                  *pEVar9 = None;
                  bVar5 = NextToken(this,pEVar9);
                  if (!bVar5) goto LAB_141dde0ce;
                }
LAB_141ddde85:
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              break;
            case 6:
              EVar1 = *pEVar9;
              *pEVar9 = None;
              bVar5 = NextToken(this,pEVar9);
              if (bVar5) {
                if (*pEVar9 == CurlyClose) goto LAB_141ddde85;
                if (EVar1 != CurlyOpen) {
                  if (*pEVar9 != Comma) {
                    ::FString::FString(&local_88,L"Comma token expected, but not found.");
                    SetErrorMessage(this,&local_88);
                    FVar8.Data = local_88.Data.AllocatorInstance.Data;
                    goto LAB_141dde0c4;
                  }
                  *pEVar9 = None;
                  bVar5 = NextToken(this,pEVar9);
                  if (!bVar5) goto LAB_141dde0ce;
                }
                if (*pEVar9 == String) {
                  iVar2 = (this->StringValue).Data.ArrayNum;
                  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_d8.Data.ArrayNum = 0;
                  local_d8.Data.ArrayMax = 0;
                  iVar10 = iVar2 + -1;
                  if (iVar2 == 0) {
                    iVar10 = 0;
                  }
                  pFVar7 = ::FString::ConstructFromPtrSize
                                     (&local_38,
                                      (uchar *)(this->StringValue).Data.AllocatorInstance.Data,
                                      iVar10);
                  if (&local_d8 != pFVar7) {
                    local_d8.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
                    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_d8.Data.ArrayNum = (pFVar7->Data).ArrayNum;
                    local_d8.Data.ArrayMax = (pFVar7->Data).ArrayMax;
                    (pFVar7->Data).ArrayNum = 0;
                    (pFVar7->Data).ArrayMax = 0;
                  }
                  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_38.Data.AllocatorInstance.Data);
                  }
                  ::FString::operator=(&this->Identifier,&local_d8);
                  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
                  }
                  *pEVar9 = None;
                  bVar5 = NextToken(this,pEVar9);
                  if (!bVar5) goto LAB_141dde0ce;
                  if (*pEVar9 == Colon) {
                    *pEVar9 = None;
                    bVar5 = NextToken(this,pEVar9);
                    break;
                  }
                  ::FString::FString(&local_68,L"Colon token expected, but not found.");
                  SetErrorMessage(this,&local_68);
                  FVar8.Data = local_68.Data.AllocatorInstance.Data;
                }
                else {
                  ::FString::FString(&local_78,L"String token expected, but not found.");
                  SetErrorMessage(this,&local_78);
                  FVar8.Data = local_78.Data.AllocatorInstance.Data;
                }
                goto LAB_141dde0c4;
              }
LAB_141dde0ce:
              bVar5 = false;
            }
          }
          else {
            if ((int)(iVar10 - 1U) < iVar10) {
              uVar11 = ~(iVar10 - 1U) >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            uVar11 = *(uint *)((this->ParseState).AllocatorInstance.Data +
                              (longlong)(this->ParseState).ArrayNum * 4 + -4);
            if (uVar11 < 7) goto LAB_141ddde0e;
switchD_141ddde1e_caseD_0:
            pEVar9 = &this->CurrentToken;
            bVar5 = ParseWhiteSpace(this);
            if (bVar5) {
              *pEVar9 = None;
              bVar5 = NextToken(this,pEVar9);
              if (bVar5) {
                if ((*pEVar9 == CurlyOpen) || (*pEVar9 == SquareOpen)) goto LAB_141ddde85;
                ::FString::FString(&local_58,
                                   L"Open Curly or Square Brace token expected, but not found.");
                SetErrorMessage(this,&local_58);
                FVar8.Data = local_58.Data.AllocatorInstance.Data;
LAB_141dde0c4:
                if (FVar8.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar8.Data);
                }
                goto LAB_141dde0ce;
              }
              bVar5 = false;
            }
            else {
              bVar5 = false;
            }
          }
        } while ((bVar5 != false) && (this->CurrentToken == None));
        *param_1 = ::TokenToNotationTable[(int)this->CurrentToken];
        iVar10 = (this->ParseState).ArrayNum;
        this->FinishedReadingRootObject = iVar10 == 0;
        if ((bVar5 != false) && (*param_1 != Error)) {
          if (iVar10 != 0) {
            return bVar5;
          }
          cVar4 = (**(code **)(*(longlong *)this->Stream + 0x38))();
          if (cVar4 == '\0') {
            bVar5 = ParseWhiteSpace(this);
            return bVar5;
          }
          return bVar5;
        }
        *param_1 = Error;
        if (1 < (this->ErrorMessage).Data.ArrayNum) {
          return true;
        }
        ::FString::FString(&local_48,L"Unknown Error Occurred");
        SetErrorMessage(this,&local_48);
        local_c8.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        goto LAB_141dde103;
      }
    }
    else if (this->FinishedReadingRootObject == false) {
      *param_1 = Error;
      ::FString::FString(&local_b8,L"Improperly formatted.");
      SetErrorMessage(this,&local_b8);
      local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      goto LAB_141dde103;
    }
    if (cVar4 != '\0') {
      return false;
    }
    *param_1 = Error;
    ::FString::FString(&local_a8,L"Unexpected additional input found.");
    SetErrorMessage(this,&local_a8);
    local_c8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
  }
LAB_141dde103:
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return true;
}

// ReadNext @ 141dde150

bool __thiscall TJsonReader<wchar_t>::ReadNext(TJsonReader<wchar_t> *this,EJsonNotation *param_1)

{
  int iVar1;
  EJsonToken EVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  ForAnyElementType FVar7;
  EJsonToken *pEVar8;
  uint uVar9;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (1 < (this->ErrorMessage).Data.ArrayNum) {
    *param_1 = Error;
    return false;
  }
  if (this->Stream == (FArchive *)0x0) {
    *param_1 = Error;
    ::FString::FString(&local_b8,L"Null Stream");
    SetErrorMessage(this,&local_b8);
  }
  else {
    cVar4 = (**(code **)(*(longlong *)this->Stream + 0x38))();
    if (cVar4 == '\0') {
      if (this->FinishedReadingRootObject == false) {
        ::FString::Empty(&this->Identifier);
        do {
          iVar1 = (this->ParseState).ArrayNum;
          uVar9 = 0;
          if (iVar1 < 1) {
LAB_141dde2de:
            pEVar8 = &this->CurrentToken;
            switch(uVar9) {
            default:
              goto switchD_141dde2ee_caseD_0;
            case 5:
              EVar2 = *pEVar8;
              *pEVar8 = None;
              bVar5 = NextToken(this,pEVar8);
              if (bVar5) {
                if ((*pEVar8 != SquareClose) && (EVar2 != SquareOpen)) {
                  if (*pEVar8 != Comma) {
                    ::FString::FString(&local_88,L"Comma token expected, but not found.");
                    SetErrorMessage(this,&local_88);
                    FVar7.Data = local_88.Data.AllocatorInstance.Data;
                    goto LAB_141dde55d;
                  }
                  *pEVar8 = None;
                  bVar5 = NextToken(this,pEVar8);
                  if (!bVar5) goto LAB_141dde567;
                }
LAB_141dde355:
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              break;
            case 6:
              EVar2 = *pEVar8;
              *pEVar8 = None;
              bVar5 = NextToken(this,pEVar8);
              if (bVar5) {
                if (*pEVar8 == CurlyClose) goto LAB_141dde355;
                if (EVar2 != CurlyOpen) {
                  if (*pEVar8 != Comma) {
                    ::FString::FString(&local_78,L"Comma token expected, but not found.");
                    SetErrorMessage(this,&local_78);
                    FVar7.Data = local_78.Data.AllocatorInstance.Data;
                    goto LAB_141dde55d;
                  }
                  *pEVar8 = None;
                  bVar5 = NextToken(this,pEVar8);
                  if (!bVar5) goto LAB_141dde567;
                }
                if (*pEVar8 == String) {
                  local_c8.Data.AllocatorInstance.Data =
                       (this->StringValue).Data.AllocatorInstance.Data;
                  (this->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_c8.Data.ArrayNum = (this->StringValue).Data.ArrayNum;
                  local_c8.Data.ArrayMax = (this->StringValue).Data.ArrayMax;
                  (this->StringValue).Data.ArrayNum = 0;
                  (this->StringValue).Data.ArrayMax = 0;
                  ::FString::operator=(&this->Identifier,&local_c8);
                  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
                  }
                  *pEVar8 = None;
                  bVar5 = NextToken(this,pEVar8);
                  if (!bVar5) goto LAB_141dde567;
                  if (*pEVar8 == Colon) {
                    *pEVar8 = None;
                    bVar5 = NextToken(this,pEVar8);
                    break;
                  }
                  ::FString::FString(&local_58,L"Colon token expected, but not found.");
                  SetErrorMessage(this,&local_58);
                  FVar7.Data = local_58.Data.AllocatorInstance.Data;
                }
                else {
                  ::FString::FString(&local_68,L"String token expected, but not found.");
                  SetErrorMessage(this,&local_68);
                  FVar7.Data = local_68.Data.AllocatorInstance.Data;
                }
                goto LAB_141dde55d;
              }
LAB_141dde567:
              bVar5 = false;
            }
          }
          else {
            uVar9 = 0;
            if ((int)(iVar1 - 1U) < iVar1) {
              uVar9 = ~(iVar1 - 1U) >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            uVar9 = *(uint *)((this->ParseState).AllocatorInstance.Data +
                             (longlong)(this->ParseState).ArrayNum * 4 + -4);
            if (uVar9 < 7) goto LAB_141dde2de;
switchD_141dde2ee_caseD_0:
            pEVar8 = &this->CurrentToken;
            bVar5 = ParseWhiteSpace(this);
            if (bVar5) {
              *pEVar8 = None;
              bVar5 = NextToken(this,pEVar8);
              if (bVar5) {
                if ((*pEVar8 == CurlyOpen) || (*pEVar8 == SquareOpen)) goto LAB_141dde355;
                ::FString::FString(&local_48,
                                   L"Open Curly or Square Brace token expected, but not found.");
                SetErrorMessage(this,&local_48);
                FVar7.Data = local_48.Data.AllocatorInstance.Data;
LAB_141dde55d:
                if (FVar7.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar7.Data);
                }
                goto LAB_141dde567;
              }
              bVar5 = false;
            }
            else {
              bVar5 = false;
            }
          }
        } while ((bVar5 != false) && (this->CurrentToken == None));
        *param_1 = ::TokenToNotationTable[(int)this->CurrentToken];
        iVar1 = (this->ParseState).ArrayNum;
        this->FinishedReadingRootObject = iVar1 == 0;
        if ((bVar5 != false) && (*param_1 != Error)) {
          if (iVar1 != 0) {
            return bVar5;
          }
          cVar4 = (**(code **)(*(longlong *)this->Stream + 0x38))();
          if (cVar4 == '\0') {
            bVar5 = ParseWhiteSpace(this);
            return bVar5;
          }
          return bVar5;
        }
        *param_1 = Error;
        if (1 < (this->ErrorMessage).Data.ArrayNum) {
          return true;
        }
        ::FString::FString(&local_38,L"Unknown Error Occurred");
        SetErrorMessage(this,&local_38);
        local_b8.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
        goto LAB_141dde59c;
      }
    }
    else if (this->FinishedReadingRootObject == false) {
      *param_1 = Error;
      ::FString::FString(&local_a8,L"Improperly formatted.");
      SetErrorMessage(this,&local_a8);
      local_b8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      goto LAB_141dde59c;
    }
    if (cVar4 != '\0') {
      return false;
    }
    *param_1 = Error;
    ::FString::FString(&local_98,L"Unexpected additional input found.");
    SetErrorMessage(this,&local_98);
    local_b8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
  }
LAB_141dde59c:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return true;
}

// SetErrorMessage @ 141deaa60

void __thiscall TJsonReader<char>::SetErrorMessage(TJsonReader<char> *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L" Line: %u Ch: %u");
  ::FString::ConcatFF(&local_28,param_1,&local_18);
  pFVar2 = &this->ErrorMessage;
  if (pFVar2 != &local_28) {
    pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (this->ErrorMessage).Data.ArrayNum = local_28.Data.ArrayNum;
    (this->ErrorMessage).Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetErrorMessage @ 141deab10

void __thiscall TJsonReader<char8_t>::SetErrorMessage(TJsonReader<char8_t> *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L" Line: %u Ch: %u");
  ::FString::ConcatFF(&local_28,param_1,&local_18);
  pFVar2 = &this->ErrorMessage;
  if (pFVar2 != &local_28) {
    pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (this->ErrorMessage).Data.ArrayNum = local_28.Data.ArrayNum;
    (this->ErrorMessage).Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetErrorMessage @ 141deabc0

void __thiscall TJsonReader<wchar_t>::SetErrorMessage(TJsonReader<wchar_t> *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L" Line: %u Ch: %u");
  ::FString::ConcatFF(&local_28,param_1,&local_18);
  pFVar2 = &this->ErrorMessage;
  if (pFVar2 != &local_28) {
    pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (this->ErrorMessage).Data.ArrayNum = local_28.Data.ArrayNum;
    (this->ErrorMessage).Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// StealInternalValueAsString @ 141debff0

FUtf8String * __thiscall
TJsonReader<char>::StealInternalValueAsString
          (TJsonReader<char> *this,FUtf8String *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FUtf8String *pFVar3;
  
  if (this->CurrentToken != String) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentToken == EJsonToken::String",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                       ,0xbc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUtf8String *)(*pcVar1)();
      return pFVar3;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data =
       (this->StringValue).Data.AllocatorInstance.Data;
  (this->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (this->StringValue).Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (this->StringValue).Data.ArrayMax;
  (this->StringValue).Data.ArrayNum = 0;
  (this->StringValue).Data.ArrayMax = 0;
  return __return_storage_ptr__;
}

// StealInternalValueAsString @ 141dec060

FUtf8String * __thiscall
TJsonReader<char8_t>::StealInternalValueAsString
          (TJsonReader<char8_t> *this,FUtf8String *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FUtf8String *pFVar3;
  
  if (this->CurrentToken != String) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentToken == EJsonToken::String",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                       ,0xbc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUtf8String *)(*pcVar1)();
      return pFVar3;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data =
       (this->StringValue).Data.AllocatorInstance.Data;
  (this->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (this->StringValue).Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (this->StringValue).Data.ArrayMax;
  (this->StringValue).Data.ArrayNum = 0;
  (this->StringValue).Data.ArrayMax = 0;
  return __return_storage_ptr__;
}

// StealInternalValueAsString @ 141dec0d0

FString * __thiscall
TJsonReader<wchar_t>::StealInternalValueAsString
          (TJsonReader<wchar_t> *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (this->CurrentToken != String) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentToken == EJsonToken::String",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                       ,0xbc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data =
       (this->StringValue).Data.AllocatorInstance.Data;
  (this->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (this->StringValue).Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (this->StringValue).Data.ArrayMax;
  (this->StringValue).Data.ArrayNum = 0;
  (this->StringValue).Data.ArrayMax = 0;
  return __return_storage_ptr__;
}

