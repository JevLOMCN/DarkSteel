// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 25

// TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> @ 14e5cf810

TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> * __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::
TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>
          (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,FArchive *param_1,
          FGLTFJsonExtensions *param_2)

{
  TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *pTVar1;
  TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *pTVar2;
  TRawPtrProxy<TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>_> local_res8;
  
  pTVar2 = (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *)0x0;
  this->_padding_ = (longlong)param_2;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TGLTFJsonWriterImpl__QUTGLTFCondensedJsonPrintPolicyUTF8____6B_
  ;
  (this->CurrentIdentifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentIdentifier).Data.ArrayNum = 0;
  (this->CurrentIdentifier).Data.ArrayMax = 0;
  pTVar1 = ::operator_new(0x28);
  if (pTVar1 != (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *)0x0) {
    pTVar1->Stream = param_1;
    pTVar1->_padding_ = (longlong)&___7__TJsonWriter__QUTGLTFCondensedJsonPrintPolicyUTF8____6B_;
    (pTVar1->Stack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Stack).ArrayNum = 0;
    (pTVar1->Stack).ArrayMax = 0;
    pTVar1->PreviousTokenWritten = None;
    pTVar1->IndentLevel = 0;
    pTVar2 = pTVar1;
  }
  local_res8.Object = pTVar2;
  TSharedRef<TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>,1>::
  TSharedRef<TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>,1><TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>_>
            (&this->JsonWriter,&local_res8);
  return this;
}

// Close @ 14e5e39a0

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::Close
          (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5e39a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->JsonWriter).Object)->_padding_ + 8))();
  return;
}

// Close @ 14e5e39c0

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::Close
          (TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e5e39c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->JsonWriter).Object)->_padding_ + 8))();
  return;
}

// EndArray @ 14e5f0ec0

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::EndArray
          (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this)

{
  TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteArrayEnd((this->JsonWriter).Object);
  return;
}

// EndArray @ 14e5f0ed0

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::EndArray
          (TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this)

{
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteArrayEnd((this->JsonWriter).Object);
  return;
}

// EndObject @ 14e5f0ee0

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::EndObject
          (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this)

{
  TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteObjectEnd((this->JsonWriter).Object);
  return;
}

// EndObject @ 14e5f0ef0

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::EndObject
          (TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this)

{
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteObjectEnd((this->JsonWriter).Object);
  return;
}

// SetIdentifier @ 14e6139e0

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::SetIdentifier
          (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,FString *param_1)

{
  ::FString::operator=(&this->CurrentIdentifier,param_1);
  return;
}

// SetIdentifier @ 14e6139f0

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::SetIdentifier
          (TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,FString *param_1)

{
  ::FString::operator=(&this->CurrentIdentifier,param_1);
  return;
}

// StartArray @ 14e6142d0

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::StartArray
          (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this)

{
  int *piVar1;
  EJsonToken EVar2;
  TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined4 local_28;
  undefined4 local_24 [3];
  
  this_00 = (this->JsonWriter).Object;
  if (1 < (this->CurrentIdentifier).Data.ArrayNum) {
    iVar6 = (this_00->Stack).ArrayNum;
    uVar8 = iVar6 - 1;
    uVar7 = 0;
    if ((int)uVar8 < iVar6) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(int *)((this_00->Stack).AllocatorInstance.Data +
                (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xad,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteIdentifier
              (this_00,&this->CurrentIdentifier);
    local_res18[0] = 0x5b;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res18,1);
    this_00->IndentLevel = this_00->IndentLevel + 1;
    pFVar3 = (this_00->Stack).AllocatorInstance.Data;
    local_24[0] = 5;
    if ((pFVar3 <= (FScriptContainerElement *)local_24) &&
       ((FScriptContainerElement *)local_24 < pFVar3 + (longlong)(this_00->Stack).ArrayMax * 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this_00->Stack).ArrayNum;
    piVar1 = &(this_00->Stack).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this_00->Stack).AllocatorInstance,piVar1);
    }
    (this_00->Stack).ArrayNum = iVar6 + 1;
    *(undefined4 *)((this_00->Stack).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_24[0];
    this_00->PreviousTokenWritten = SquareOpen;
    ::FString::Empty(&this->CurrentIdentifier);
    return;
  }
  bVar5 = TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::CanWriteValueWithoutIdentifier
                    (this_00);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x9b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar2 = this_00->PreviousTokenWritten;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
    this_00->PreviousTokenWritten = Comma;
  }
  local_res10[0] = 0x5b;
  (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res10,1);
  this_00->IndentLevel = this_00->IndentLevel + 1;
  pFVar3 = (this_00->Stack).AllocatorInstance.Data;
  local_28 = 5;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar3 + (longlong)(this_00->Stack).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this_00->Stack).ArrayNum;
  piVar1 = &(this_00->Stack).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this_00->Stack).AllocatorInstance,piVar1);
  }
  (this_00->Stack).ArrayNum = iVar6 + 1;
  *(undefined4 *)((this_00->Stack).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_28;
  this_00->PreviousTokenWritten = SquareOpen;
  return;
}

// StartArray @ 14e6145b0

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::StartArray
          (TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this)

{
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this_00;
  
  this_00 = (this->JsonWriter).Object;
  if ((this->CurrentIdentifier).Data.ArrayNum < 2) {
    TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteArrayStart(this_00);
    return;
  }
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteArrayStart<FString_&>
            (this_00,&this->CurrentIdentifier);
  ::FString::Empty(&this->CurrentIdentifier);
  return;
}

// StartObject @ 14e614640

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::StartObject
          (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this)

{
  int *piVar1;
  TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined4 local_18 [4];
  
  this_00 = (this->JsonWriter).Object;
  if ((this->CurrentIdentifier).Data.ArrayNum < 2) {
    TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteObjectStart(this_00);
    return;
  }
  iVar6 = (this_00->Stack).ArrayNum;
  uVar7 = iVar6 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar6) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this_00->Stack).AllocatorInstance.Data +
              (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x81,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteIdentifier
            (this_00,&this->CurrentIdentifier);
  local_res8[0] = 0x7b;
  (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
  this_00->IndentLevel = this_00->IndentLevel + 1;
  pFVar2 = (this_00->Stack).AllocatorInstance.Data;
  local_18[0] = 6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this_00->Stack).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this_00->Stack).ArrayNum;
  piVar1 = &(this_00->Stack).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this_00->Stack).AllocatorInstance,piVar1);
  }
  (this_00->Stack).ArrayNum = iVar6 + 1;
  *(undefined4 *)((this_00->Stack).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_18[0];
  this_00->PreviousTokenWritten = CurlyOpen;
  ::FString::Empty(&this->CurrentIdentifier);
  return;
}

// StartObject @ 14e6147f0

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::StartObject
          (TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this)

{
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this_00;
  
  this_00 = (this->JsonWriter).Object;
  if ((this->CurrentIdentifier).Data.ArrayNum < 2) {
    TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteObjectStart(this_00);
    return;
  }
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteObjectStart<FString_&>
            (this_00,&this->CurrentIdentifier);
  ::FString::Empty(&this->CurrentIdentifier);
  return;
}

// Write @ 14e616320

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::Write
          (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,void *param_1)

{
  EJsonToken EVar1;
  int iVar2;
  TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  this_00 = (this->JsonWriter).Object;
  if (1 < (this->CurrentIdentifier).Data.ArrayNum) {
    iVar2 = (this_00->Stack).ArrayNum;
    uVar6 = iVar2 - 1;
    uVar5 = 0;
    if ((int)uVar6 < iVar2) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)((this_00->Stack).AllocatorInstance.Data +
                (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteIdentifier
              (this_00,&this->CurrentIdentifier);
    local_28.DataPtr = L"null";
    local_28.Size = 4;
    local_18.DataPtr = L"null";
    local_18.Size = 4;
    local_18._12_4_ = local_28._12_4_;
    TGLTFJsonPrintPolicyUTF8::WriteString(this_00->Stream,&local_18);
    this_00->PreviousTokenWritten = Null;
    ::FString::Empty(&this->CurrentIdentifier);
    return;
  }
  bVar4 = TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::CanWriteValueWithoutIdentifier
                    (this_00);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xde,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar1 = this_00->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
    this_00->PreviousTokenWritten = Comma;
  }
  local_28.Size = 4;
  local_28.DataPtr = L"null";
  TGLTFJsonPrintPolicyUTF8::WriteString(this_00->Stream,&local_28);
  this_00->PreviousTokenWritten = Null;
  return;
}

// Write @ 14e6164d0

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::Write
          (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,FString *param_1)

{
  EJsonToken EVar1;
  int iVar2;
  TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  
  this_00 = (this->JsonWriter).Object;
  if ((this->CurrentIdentifier).Data.ArrayNum < 2) {
    bVar5 = TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::CanWriteValueWithoutIdentifier
                      (this_00);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xfa,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    EVar1 = this_00->PreviousTokenWritten;
    if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
      this_00->PreviousTokenWritten = Comma;
    }
    pFVar3 = (param_1->Data).AllocatorInstance.Data;
    iVar2 = (param_1->Data).ArrayNum;
    iStack_20 = iVar2 + -1;
    if (iVar2 == 0) {
      iStack_20 = 0;
    }
    local_48 = SUB84(pFVar3,0);
    uStack_44 = (undefined4)((ulonglong)pFVar3 >> 0x20);
    local_28 = local_48;
    uStack_24 = uStack_44;
    (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_28);
    this_00->PreviousTokenWritten = String;
  }
  else {
    iVar2 = (this_00->Stack).ArrayNum;
    uVar7 = iVar2 - 1;
    uVar6 = 0;
    if ((int)uVar7 < iVar2) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(int *)((this_00->Stack).AllocatorInstance.Data +
                (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteIdentifier
              (this_00,&this->CurrentIdentifier);
    pFVar3 = (param_1->Data).AllocatorInstance.Data;
    iVar2 = (param_1->Data).ArrayNum;
    iStack_10 = iVar2 + -1;
    if (iVar2 == 0) {
      iStack_10 = 0;
    }
    local_38 = SUB84(pFVar3,0);
    uStack_34 = (undefined4)((ulonglong)pFVar3 >> 0x20);
    local_18 = local_38;
    uStack_14 = uStack_34;
    (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_18);
    this_00->PreviousTokenWritten = String;
    ::FString::Empty(&this->CurrentIdentifier);
  }
  return;
}

// Write @ 14e6166a0

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::Write
          (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,int param_1)

{
  int iVar1;
  TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this_00;
  code *pcVar2;
  bool bVar3;
  EJsonToken EVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  this_00 = (this->JsonWriter).Object;
  if (1 < (this->CurrentIdentifier).Data.ArrayNum) {
    iVar1 = (this_00->Stack).ArrayNum;
    uVar6 = iVar1 - 1;
    uVar5 = 0;
    if ((int)uVar6 < iVar1) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(int *)((this_00->Stack).AllocatorInstance.Data +
                (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteIdentifier
              (this_00,&this->CurrentIdentifier);
    EVar4 = TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteValueOnly
                      (this_00,(longlong)param_1);
    this_00->PreviousTokenWritten = EVar4;
    ::FString::Empty(&this->CurrentIdentifier);
    return;
  }
  bVar3 = TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::CanWriteValueWithoutIdentifier
                    (this_00);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xde,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar4 = this_00->PreviousTokenWritten;
  if ((EVar4 != CurlyOpen) && ((Identifier < EVar4 || ((0x1013U >> (EVar4 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
    this_00->PreviousTokenWritten = Comma;
  }
  EVar4 = TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteValueOnly
                    (this_00,(longlong)param_1);
  this_00->PreviousTokenWritten = EVar4;
  return;
}

// Write @ 14e616810

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::Write
          (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,float param_1)

{
  EJsonToken EVar1;
  int iVar2;
  TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  this_00 = (this->JsonWriter).Object;
  if (1 < (this->CurrentIdentifier).Data.ArrayNum) {
    iVar2 = (this_00->Stack).ArrayNum;
    uVar6 = iVar2 - 1;
    uVar5 = 0;
    if ((int)uVar6 < iVar2) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)((this_00->Stack).AllocatorInstance.Data +
                (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteIdentifier
              (this_00,&this->CurrentIdentifier);
    TGLTFJsonPrintPolicyUTF8::WriteFloat(this_00->Stream,param_1);
    this_00->PreviousTokenWritten = Number;
    ::FString::Empty(&this->CurrentIdentifier);
    return;
  }
  bVar4 = TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::CanWriteValueWithoutIdentifier
                    (this_00);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xde,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar1 = this_00->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
    this_00->PreviousTokenWritten = Comma;
  }
  TGLTFJsonPrintPolicyUTF8::WriteFloat(this_00->Stream,param_1);
  this_00->PreviousTokenWritten = Number;
  return;
}

// Write @ 14e616990

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::Write
          (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,long64 param_1)

{
  int iVar1;
  TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this_00;
  code *pcVar2;
  bool bVar3;
  EJsonToken EVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  this_00 = (this->JsonWriter).Object;
  if (1 < (this->CurrentIdentifier).Data.ArrayNum) {
    iVar1 = (this_00->Stack).ArrayNum;
    uVar6 = iVar1 - 1;
    uVar5 = 0;
    if ((int)uVar6 < iVar1) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(int *)((this_00->Stack).AllocatorInstance.Data +
                (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteIdentifier
              (this_00,&this->CurrentIdentifier);
    EVar4 = TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteValueOnly(this_00,param_1);
    this_00->PreviousTokenWritten = EVar4;
    ::FString::Empty(&this->CurrentIdentifier);
    return;
  }
  bVar3 = TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::CanWriteValueWithoutIdentifier
                    (this_00);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xde,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar4 = this_00->PreviousTokenWritten;
  if ((EVar4 != CurlyOpen) && ((Identifier < EVar4 || ((0x1013U >> (EVar4 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
    this_00->PreviousTokenWritten = Comma;
  }
  EVar4 = TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteValueOnly(this_00,param_1);
  this_00->PreviousTokenWritten = EVar4;
  return;
}

// Write @ 14e616b00

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::Write
          (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this,bool param_1)

{
  EJsonToken EVar1;
  int iVar2;
  TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_1c;
  undefined4 local_c;
  
  this_00 = (this->JsonWriter).Object;
  if ((this->CurrentIdentifier).Data.ArrayNum < 2) {
    bVar4 = TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::CanWriteValueWithoutIdentifier
                      (this_00);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    EVar1 = this_00->PreviousTokenWritten;
    if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
      this_00->PreviousTokenWritten = Comma;
    }
    if (param_1) {
      local_68.Size = 4;
      local_68.DataPtr = L"true";
    }
    else {
      local_68.Size = 5;
      local_68.DataPtr = L"false";
      local_3c = local_2c;
    }
    local_68._12_4_ = local_3c;
    TGLTFJsonPrintPolicyUTF8::WriteString(this_00->Stream,&local_68);
    this_00->PreviousTokenWritten = (param_1 ^ 1) + True;
  }
  else {
    iVar2 = (this_00->Stack).ArrayNum;
    uVar6 = iVar2 - 1;
    uVar5 = 0;
    if ((int)uVar6 < iVar2) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)((this_00->Stack).AllocatorInstance.Data +
                (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::WriteIdentifier
              (this_00,&this->CurrentIdentifier);
    if (param_1) {
      local_68.Size = 4;
      local_68.DataPtr = L"true";
    }
    else {
      local_68.Size = 5;
      local_68.DataPtr = L"false";
      local_1c = local_c;
    }
    local_68._12_4_ = local_1c;
    local_58.DataPtr = local_68.DataPtr;
    local_58.Size = local_68.Size;
    local_58._12_4_ = local_1c;
    TGLTFJsonPrintPolicyUTF8::WriteString(this_00->Stream,&local_58);
    this_00->PreviousTokenWritten = (param_1 ^ 1) + True;
    ::FString::Empty(&this->CurrentIdentifier);
  }
  return;
}

// Write @ 14e616d20

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::Write
          (TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,void *param_1)

{
  EJsonToken EVar1;
  int iVar2;
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this_00;
  FArchive *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_48 [16];
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  this_00 = (this->JsonWriter).Object;
  if (1 < (this->CurrentIdentifier).Data.ArrayNum) {
    iVar2 = (this_00->Stack).ArrayNum;
    uVar7 = iVar2 - 1;
    uVar6 = 0;
    if ((int)uVar7 < iVar2) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(int *)((this_00->Stack).AllocatorInstance.Data +
                (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteIdentifier
              (this_00,&this->CurrentIdentifier);
    local_48[0] = 0x20;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_48,1);
    local_38.DataPtr = L"null";
    local_38.Size = 4;
    local_28.DataPtr = L"null";
    local_28.Size = 4;
    local_28._12_4_ = local_38._12_4_;
    TGLTFJsonPrintPolicyUTF8::WriteString(this_00->Stream,&local_28);
    this_00->PreviousTokenWritten = Null;
    ::FString::Empty(&this->CurrentIdentifier);
    return;
  }
  bVar5 = TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::CanWriteValueWithoutIdentifier
                    (this_00);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xde,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar1 = this_00->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
    this_00->PreviousTokenWritten = Comma;
  }
  local_res18[0] = 10;
  (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res18,1);
  pFVar3 = this_00->Stream;
  if (0 < this_00->IndentLevel) {
    uVar8 = (ulonglong)(uint)this_00->IndentLevel;
    do {
      local_res20[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res20,1);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  local_38.Size = 4;
  local_38.DataPtr = L"null";
  TGLTFJsonPrintPolicyUTF8::WriteString(this_00->Stream,&local_38);
  this_00->PreviousTokenWritten = Null;
  return;
}

// Write @ 14e616f60

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::Write
          (TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,FString *param_1)

{
  EJsonToken EVar1;
  int iVar2;
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this_00;
  FArchive *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_68 [16];
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  this_00 = (this->JsonWriter).Object;
  if ((this->CurrentIdentifier).Data.ArrayNum < 2) {
    bVar6 = TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::CanWriteValueWithoutIdentifier
                      (this_00);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xfa,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    EVar1 = this_00->PreviousTokenWritten;
    if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
      this_00->PreviousTokenWritten = Comma;
    }
    local_res18[0] = 10;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res18,1);
    pFVar3 = this_00->Stream;
    if (0 < this_00->IndentLevel) {
      uVar9 = (ulonglong)(uint)this_00->IndentLevel;
      do {
        local_res20[0] = 9;
        (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res20,1);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    pFVar4 = (param_1->Data).AllocatorInstance.Data;
    iVar2 = (param_1->Data).ArrayNum;
    iStack_50 = iVar2 + -1;
    if (iVar2 == 0) {
      iStack_50 = 0;
    }
    local_58._0_4_ = SUB84(pFVar4,0);
    local_58._4_4_ = (undefined4)((ulonglong)pFVar4 >> 0x20);
    local_38 = (undefined4)local_58;
    uStack_34 = local_58._4_4_;
    uStack_2c = uStack_4c;
    local_58 = pFVar4;
    iStack_30 = iStack_50;
    (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_38);
    this_00->PreviousTokenWritten = String;
  }
  else {
    iVar2 = (this_00->Stack).ArrayNum;
    uVar8 = iVar2 - 1;
    uVar7 = 0;
    if ((int)uVar8 < iVar2) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
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
    if (*(int *)((this_00->Stack).AllocatorInstance.Data +
                (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
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
    TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteIdentifier
              (this_00,&this->CurrentIdentifier);
    local_68[0] = 0x20;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_68,1);
    pFVar4 = (param_1->Data).AllocatorInstance.Data;
    iVar2 = (param_1->Data).ArrayNum;
    iStack_40 = iVar2 + -1;
    if (iVar2 == 0) {
      iStack_40 = 0;
    }
    local_48._0_4_ = SUB84(pFVar4,0);
    local_48._4_4_ = (undefined4)((ulonglong)pFVar4 >> 0x20);
    local_28 = (undefined4)local_48;
    uStack_24 = local_48._4_4_;
    uStack_1c = uStack_3c;
    local_48 = pFVar4;
    iStack_20 = iStack_40;
    (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_28);
    this_00->PreviousTokenWritten = String;
    ::FString::Empty(&this->CurrentIdentifier);
  }
  return;
}

// Write @ 14e6171a0

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::Write
          (TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,int param_1)

{
  int iVar1;
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this_00;
  FArchive *pFVar2;
  code *pcVar3;
  bool bVar4;
  EJsonToken EVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_28 [16];
  
  this_00 = (this->JsonWriter).Object;
  if (1 < (this->CurrentIdentifier).Data.ArrayNum) {
    iVar1 = (this_00->Stack).ArrayNum;
    uVar7 = iVar1 - 1;
    uVar6 = 0;
    if ((int)uVar7 < iVar1) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)((this_00->Stack).AllocatorInstance.Data +
                (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteIdentifier
              (this_00,&this->CurrentIdentifier);
    local_28[0] = 0x20;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_28,1);
    EVar5 = TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteValueOnly
                      (this_00,(longlong)param_1);
    this_00->PreviousTokenWritten = EVar5;
    ::FString::Empty(&this->CurrentIdentifier);
    return;
  }
  bVar4 = TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::CanWriteValueWithoutIdentifier
                    (this_00);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xde,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar5 = this_00->PreviousTokenWritten;
  if ((EVar5 != CurlyOpen) && ((Identifier < EVar5 || ((0x1013U >> (EVar5 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
    this_00->PreviousTokenWritten = Comma;
  }
  local_res18[0] = 10;
  (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res18,1);
  pFVar2 = this_00->Stream;
  if (0 < this_00->IndentLevel) {
    uVar8 = (ulonglong)(uint)this_00->IndentLevel;
    do {
      local_res20[0] = 9;
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res20,1);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  EVar5 = TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteValueOnly
                    (this_00,(longlong)param_1);
  this_00->PreviousTokenWritten = EVar5;
  return;
}

// Write @ 14e617370

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::Write
          (TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,float param_1)

{
  EJsonToken EVar1;
  int iVar2;
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this_00;
  FArchive *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_38 [32];
  
  this_00 = (this->JsonWriter).Object;
  if (1 < (this->CurrentIdentifier).Data.ArrayNum) {
    iVar2 = (this_00->Stack).ArrayNum;
    uVar7 = iVar2 - 1;
    uVar6 = 0;
    if ((int)uVar7 < iVar2) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(int *)((this_00->Stack).AllocatorInstance.Data +
                (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteIdentifier
              (this_00,&this->CurrentIdentifier);
    local_38[0] = 0x20;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_38,1);
    TGLTFJsonPrintPolicyUTF8::WriteFloat(this_00->Stream,param_1);
    this_00->PreviousTokenWritten = Number;
    ::FString::Empty(&this->CurrentIdentifier);
    return;
  }
  bVar5 = TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::CanWriteValueWithoutIdentifier
                    (this_00);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xde,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar1 = this_00->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
    this_00->PreviousTokenWritten = Comma;
  }
  local_res18[0] = 10;
  (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res18,1);
  pFVar3 = this_00->Stream;
  if (0 < this_00->IndentLevel) {
    uVar8 = (ulonglong)(uint)this_00->IndentLevel;
    do {
      local_res20[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res20,1);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  TGLTFJsonPrintPolicyUTF8::WriteFloat(this_00->Stream,param_1);
  this_00->PreviousTokenWritten = Number;
  return;
}

// Write @ 14e617570

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::Write
          (TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,long64 param_1)

{
  int iVar1;
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this_00;
  FArchive *pFVar2;
  code *pcVar3;
  bool bVar4;
  EJsonToken EVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_28 [16];
  
  this_00 = (this->JsonWriter).Object;
  if (1 < (this->CurrentIdentifier).Data.ArrayNum) {
    iVar1 = (this_00->Stack).ArrayNum;
    uVar7 = iVar1 - 1;
    uVar6 = 0;
    if ((int)uVar7 < iVar1) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)((this_00->Stack).AllocatorInstance.Data +
                (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteIdentifier
              (this_00,&this->CurrentIdentifier);
    local_28[0] = 0x20;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_28,1);
    EVar5 = TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteValueOnly(this_00,param_1);
    this_00->PreviousTokenWritten = EVar5;
    ::FString::Empty(&this->CurrentIdentifier);
    return;
  }
  bVar4 = TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::CanWriteValueWithoutIdentifier
                    (this_00);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xde,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar5 = this_00->PreviousTokenWritten;
  if ((EVar5 != CurlyOpen) && ((Identifier < EVar5 || ((0x1013U >> (EVar5 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
    this_00->PreviousTokenWritten = Comma;
  }
  local_res18[0] = 10;
  (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res18,1);
  pFVar2 = this_00->Stream;
  if (0 < this_00->IndentLevel) {
    uVar8 = (ulonglong)(uint)this_00->IndentLevel;
    do {
      local_res20[0] = 9;
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res20,1);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  EVar5 = TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteValueOnly(this_00,param_1);
  this_00->PreviousTokenWritten = EVar5;
  return;
}

// Write @ 14e617740

void __thiscall
TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::Write
          (TGLTFJsonWriterImpl<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this,bool param_1)

{
  EJsonToken EVar1;
  int iVar2;
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *this_00;
  FArchive *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_98 [16];
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_2c;
  
  this_00 = (this->JsonWriter).Object;
  if (1 < (this->CurrentIdentifier).Data.ArrayNum) {
    iVar2 = (this_00->Stack).ArrayNum;
    uVar7 = iVar2 - 1;
    uVar6 = 0;
    if ((int)uVar7 < iVar2) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(int *)((this_00->Stack).AllocatorInstance.Data +
                (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::WriteIdentifier
              (this_00,&this->CurrentIdentifier);
    local_98[0] = 0x20;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_98,1);
    if (param_1) {
      local_88.Size = 4;
      local_88.DataPtr = L"true";
    }
    else {
      local_88.Size = 5;
      local_88.DataPtr = L"false";
      local_3c = local_2c;
    }
    local_88._12_4_ = local_3c;
    local_78.DataPtr = local_88.DataPtr;
    local_78.Size = local_88.Size;
    local_78._12_4_ = local_3c;
    TGLTFJsonPrintPolicyUTF8::WriteString(this_00->Stream,&local_78);
    this_00->PreviousTokenWritten = (param_1 ^ 1) + True;
    ::FString::Empty(&this->CurrentIdentifier);
    return;
  }
  bVar5 = TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>::CanWriteValueWithoutIdentifier
                    (this_00);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xde,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar1 = this_00->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
    this_00->PreviousTokenWritten = Comma;
  }
  local_res18[0] = 10;
  (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res18,1);
  pFVar3 = this_00->Stream;
  if (0 < this_00->IndentLevel) {
    uVar8 = (ulonglong)(uint)this_00->IndentLevel;
    do {
      local_res20[0] = 9;
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res20,1);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (param_1) {
    local_88.Size = 4;
    local_88.DataPtr = L"true";
  }
  else {
    local_88.Size = 5;
    local_88.DataPtr = L"false";
    local_5c = local_4c;
  }
  local_88._12_4_ = local_5c;
  TGLTFJsonPrintPolicyUTF8::WriteString(this_00->Stream,&local_88);
  this_00->PreviousTokenWritten = (param_1 ^ 1) + True;
  return;
}

