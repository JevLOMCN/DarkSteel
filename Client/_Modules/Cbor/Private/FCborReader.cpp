// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Cbor
// Functions: 11

// FCborReader @ 1431207b0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FCborReader * __thiscall
FCborReader::FCborReader(FCborReader *this,FArchive *param_1,ECborEndianness param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCborReader *pFVar5;
  longlong lVar6;
  
  this->Stream = param_1;
  (this->ContextStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextStack).ArrayNum = 0;
  (this->ContextStack).ArrayMax = 0;
  this->Endianness = param_2;
  if (param_1 == (FArchive *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InStream != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Private\\CborReader.cpp"
                       ,0xb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FCborReader *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->ContextStack).ArrayNum;
  if (iVar4 == (this->ContextStack).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->ContextStack).AllocatorInstance,&(this->ContextStack).ArrayMax)
    ;
  }
  (this->ContextStack).ArrayNum = iVar4 + 1;
  pFVar1 = (this->ContextStack).AllocatorInstance.Data;
  lVar6 = (longlong)iVar4 * 0x20;
  pFVar1[lVar6] = (FScriptContainerElement)0x1c;
  *(undefined8 *)(pFVar1 + lVar6 + 8) = 0;
  *(undefined8 *)(pFVar1 + lVar6 + 0x10) = 0;
  *(undefined8 *)(pFVar1 + lVar6 + 0x18) = 0;
  return this;
}

// ~FCborReader @ 143120920

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall FCborReader::~FCborReader(FCborReader *this)

{
  TArray<FCborContext,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  
  pTVar1 = &this->ContextStack;
  if (0 < (this->ContextStack).ArrayNum) {
    if (*(pTVar1->AllocatorInstance).Data == (FScriptContainerElement)0x1c) goto LAB_1431209ad;
    if ((this->ContextStack).ArrayNum < 1) {
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
    bVar5 = (byte)*(pTVar1->AllocatorInstance).Data & 0x1f;
    if ((bVar5 == 0x1d) || (bVar5 == 0x1e)) goto LAB_1431209ad;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("ContextStack.Num() > 0 && (ContextStack[0].IsDummy() || ContextStack[0].IsError())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Private\\CborReader.cpp"
                     ,0x11,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1431209ad:
  DestructItems<FCborContext,int>
            ((FCborContext *)(pTVar1->AllocatorInstance).Data,(this->ContextStack).ArrayNum);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// GetArchive @ 143120bf0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FArchive * __thiscall FCborReader::GetArchive(FCborReader *this)

{
  return this->Stream;
}

// GetContext @ 143120c10

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FCborContext * __thiscall FCborReader::GetContext(FCborReader *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FCborContext *pFVar5;
  uint uVar6;
  
  iVar1 = (this->ContextStack).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FCborContext *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FCborContext *)
         ((this->ContextStack).AllocatorInstance.Data +
         (longlong)((this->ContextStack).ArrayNum + -1) * 0x20);
}

// GetError @ 143120c90

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FCborHeader __thiscall FCborReader::GetError(FCborReader *this)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  FScriptContainerElement *in_RDX;
  
  if ((this->ContextStack).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FCborHeader)uVar3;
    }
  }
  *in_RDX = *(this->ContextStack).AllocatorInstance.Data;
  return (FCborHeader)(uchar)in_RDX;
}

// IsError @ 143120d30

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

bool __thiscall FCborReader::IsError(FCborReader *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  
  if ((this->ContextStack).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar4 = (byte)*(this->ContextStack).AllocatorInstance.Data & 0x1f;
  if ((bVar4 != 0x1d) && (bVar4 != 0x1e)) {
    return false;
  }
  return true;
}

// ReadNext @ 143120f20

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

bool __thiscall FCborReader::ReadNext(FCborReader *this,FCborContext *param_1)

{
  TArray<char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  byte bVar3;
  FScriptContainerElement FVar4;
  FCborContext *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  ulong64 uVar11;
  FScriptContainerElement *pFVar12;
  byte bVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  longlong lVar17;
  size_t _Size;
  FArchive *pFVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res10 [8];
  FArchive *local_res18;
  FScriptContainerElement local_a8;
  FScriptContainerElement local_a7 [7];
  FCborContext local_a0;
  FCborContext local_80;
  ForAnyElementType local_50 [3];
  
  uVar11 = 0;
  (param_1->Header).Header = '\x1c';
  pTVar1 = &param_1->RawTextValue;
  (param_1->field1_0x8).IntValue = 0;
  if (pTVar1 != (TArray<char,TSizedDefaultAllocator<32>_> *)local_50) {
    pFVar15 = (pTVar1->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_1->RawTextValue).ArrayNum = 0;
    (param_1->RawTextValue).ArrayMax = 0;
  }
  bVar7 = IsError(this);
  if (bVar7) {
    if (((this->ContextStack).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    (param_1->Header).Header = (uchar)*(this->ContextStack).AllocatorInstance.Data;
    return false;
  }
  pFVar18 = this->Stream;
  local_res18 = pFVar18;
  if (pFVar18 == (FArchive *)0x0) {
    if (((this->ContextStack).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    *(this->ContextStack).AllocatorInstance.Data = (FScriptContainerElement)0x1e;
    (param_1->Header).Header = '\x1e';
    return false;
  }
  bVar3 = pFVar18->field_0x2a;
  if ((this->Endianness == Platform) || (this->Endianness != BigEndian)) {
    bVar13 = 0;
  }
  else {
    bVar13 = 1;
  }
  pFVar18->field_0x2a = bVar3 & 0xfe | bVar13;
  iVar10 = (this->ContextStack).ArrayNum;
  uVar16 = iVar10 - 1;
  uVar14 = 0;
  if ((int)uVar16 < iVar10) {
    uVar14 = ~uVar16 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  iVar10 = (this->ContextStack).ArrayNum;
  pFVar15 = (this->ContextStack).AllocatorInstance.Data;
  bVar13 = (byte)pFVar15[(longlong)iVar10 * 0x20 + -0x20] & 0xe0;
  if ((((bVar13 == 0x80) || (bVar13 == 0xa0)) &&
      (((byte)pFVar15[(longlong)iVar10 * 0x20 + -0x20] & 0x1f) != 0x1f)) &&
     (*(longlong *)(pFVar15 + (longlong)iVar10 * 0x20 + -0x18) == 0)) {
    (param_1->Header).Header = 0xff;
    param_1->field1_0x8 = *(FCborContext_u_8 *)(pFVar15 + (longlong)iVar10 * 0x20 + -0x18);
    pFVar12 = (pTVar1->AllocatorInstance).Data;
    local_a8 = (FScriptContainerElement)((byte)pFVar15[(longlong)iVar10 * 0x20 + -0x20] & 0xe0);
    if (((pFVar12 <= &local_a8) && (&local_a8 < pFVar12 + (param_1->RawTextValue).ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iVar10 = (param_1->RawTextValue).ArrayNum;
    piVar2 = &(param_1->RawTextValue).ArrayMax;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,&pTVar1->AllocatorInstance,piVar2);
    }
    (param_1->RawTextValue).ArrayNum = iVar10 + 1;
    (pTVar1->AllocatorInstance).Data[iVar10] = local_a8;
    if (((this->ContextStack).ArrayNum < 2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContextStack.Num() > 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Private\\CborReader.cpp"
                           ,0x4b,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    TArray<FCborContext,TSizedDefaultAllocator<32>_>::Pop(&this->ContextStack,&local_a0,Default);
LAB_1431213f3:
    if (local_a0.RawTextValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.RawTextValue.AllocatorInstance.Data);
    }
LAB_1431213fd:
    bVar7 = true;
    local_res18 = pFVar18;
  }
  else {
    cVar9 = (**(code **)(*(longlong *)this->Stream + 0x38))();
    if (cVar9 == '\0') {
      ::operator<<(this->Stream,&param_1->Header);
      if ((param_1->Header).Header == 0xff) {
        bVar7 = FCborContext::IsIndefiniteContainer
                          ((FCborContext *)(pFVar15 + (longlong)iVar10 * 0x20 + -0x20));
        if (bVar7) {
          if ((((byte)pFVar15[(longlong)iVar10 * 0x20 + -0x20] & 0xe0) != 0xa0) ||
             (((byte)pFVar15[(longlong)iVar10 * 0x20 + -0x18] & 1) == 0)) {
            param_1->field1_0x8 = *(FCborContext_u_8 *)(pFVar15 + (longlong)iVar10 * 0x20 + -0x18);
            pFVar12 = (param_1->RawTextValue).AllocatorInstance.Data;
            local_a7[0] = (FScriptContainerElement)
                          ((byte)pFVar15[(longlong)iVar10 * 0x20 + -0x20] & 0xe0);
            if ((pFVar12 <= local_a7) &&
               ((local_a7 < pFVar12 + (param_1->RawTextValue).ArrayMax &&
                (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)))) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            iVar10 = (param_1->RawTextValue).ArrayNum;
            piVar2 = &(param_1->RawTextValue).ArrayMax;
            if (iVar10 == *piVar2) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x101,&(param_1->RawTextValue).AllocatorInstance,piVar2);
            }
            (param_1->RawTextValue).ArrayNum = iVar10 + 1;
            (param_1->RawTextValue).AllocatorInstance.Data[iVar10] = local_a7[0];
            if (((this->ContextStack).ArrayNum < 2) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContextStack.Num() > 1",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Private\\CborReader.cpp"
                                   ,0x6f,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            TArray<FCborContext,TSizedDefaultAllocator<32>_>::Pop
                      (&this->ContextStack,&local_80,Default);
            local_a0.RawTextValue.AllocatorInstance.Data =
                 local_80.RawTextValue.AllocatorInstance.Data;
            goto LAB_1431213f3;
          }
          if (((this->ContextStack).ArrayNum < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          *(this->ContextStack).AllocatorInstance.Data = (FScriptContainerElement)0x3e;
          (param_1->Header).Header = '>';
          local_res18 = pFVar18;
        }
        else {
          if (((this->ContextStack).ArrayNum < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          *(this->ContextStack).AllocatorInstance.Data = (FScriptContainerElement)0x3d;
          (param_1->Header).Header = '=';
          local_res18 = pFVar18;
        }
      }
      else {
        FVar4 = pFVar15[(longlong)iVar10 * 0x20 + -0x20];
        bVar13 = (byte)FVar4 & 0xe0;
        bVar7 = FCborContext::IsIndefiniteContainer
                          ((FCborContext *)(pFVar15 + (longlong)iVar10 * 0x20 + -0x20));
        if (bVar7) {
          *(longlong *)(pFVar15 + (longlong)iVar10 * 0x20 + -0x18) =
               *(longlong *)(pFVar15 + (longlong)iVar10 * 0x20 + -0x18) + 1;
          if (((bVar13 - 0x40 & 0xdf) == 0) && (bVar13 != ((param_1->Header).Header & 0xe0))) {
            if (((this->ContextStack).ArrayNum < 1) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            *(this->ContextStack).AllocatorInstance.Data = (FScriptContainerElement)0x7d;
            (param_1->Header).Header = '}';
            local_res18 = pFVar18;
            goto LAB_143121a1e;
          }
        }
        else if (((bVar13 + 0x80 & 0xdf) == 0) && (((byte)FVar4 & 0x1f) != 0x1f)) {
          *(longlong *)(pFVar15 + (longlong)iVar10 * 0x20 + -0x18) =
               *(longlong *)(pFVar15 + (longlong)iVar10 * 0x20 + -0x18) + -1;
        }
        bVar13 = (param_1->Header).Header;
        switch(bVar13 & 0xe0) {
        default:
          uVar11 = ReadUIntValue(param_1,this->Stream);
          (param_1->field1_0x8).UIntValue = uVar11;
          break;
        case 0x20:
          uVar11 = ReadUIntValue(param_1,this->Stream);
          (param_1->field1_0x8).UIntValue = ~uVar11;
          break;
        case 0x40:
        case 0x60:
          bVar7 = FCborContext::IsIndefiniteContainer(param_1);
          if (bVar7) {
            (param_1->field1_0x8).IntValue = 0;
            pFVar5 = (FCborContext *)(this->ContextStack).AllocatorInstance.Data;
            if (((pFVar5 <= param_1) && (param_1 < pFVar5 + (this->ContextStack).ArrayMax)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            iVar10 = (this->ContextStack).ArrayNum;
            piVar2 = &(this->ContextStack).ArrayMax;
            if (iVar10 == *piVar2) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&(this->ContextStack).AllocatorInstance,piVar2);
            }
            (this->ContextStack).ArrayNum = iVar10 + 1;
            pFVar15 = (this->ContextStack).AllocatorInstance.Data;
            lVar17 = (longlong)iVar10 * 0x20;
            pFVar20 = pFVar15 + lVar17 + 0x10;
            pFVar15[lVar17] = (FScriptContainerElement)(param_1->Header).Header;
            *(FCborContext_u_8 *)(pFVar15 + lVar17 + 8) = param_1->field1_0x8;
            *(FCborContext_u_8 *)(pFVar15 + lVar17 + 8) = param_1->field1_0x8;
            pFVar15[lVar17 + 8] = (FScriptContainerElement)(param_1->field1_0x8).BoolValue;
            *(float *)(pFVar15 + lVar17 + 8) = (param_1->field1_0x8).FloatValue;
            *(FCborContext_u_8 *)(pFVar15 + lVar17 + 8) = param_1->field1_0x8;
            *(FCborContext_u_8 *)(pFVar15 + lVar17 + 8) = param_1->field1_0x8;
            pFVar12 = pFVar20 + 0xc;
            *(undefined8 *)&pFVar20->field_0x0 = 0;
            iVar10 = (param_1->RawTextValue).ArrayNum;
            _Size = (size_t)iVar10;
            pFVar15 = (param_1->RawTextValue).AllocatorInstance.Data;
            *(int *)&pFVar20[8].field_0x0 = iVar10;
            if (iVar10 != 0) goto LAB_1431218ae;
            *(undefined4 *)pFVar12 = 0;
          }
          else {
            uVar11 = ReadUIntValue(param_1,this->Stream);
            (param_1->field1_0x8).UIntValue = uVar11;
            if (0x7ffffffe < uVar11) {
              if (((this->ContextStack).ArrayNum < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              *(this->ContextStack).AllocatorInstance.Data = (FScriptContainerElement)0x7e;
              (param_1->Header).Header = '~';
              goto LAB_143121a1e;
            }
            iVar10 = (param_1->RawTextValue).ArrayNum;
            uVar14 = (uint)uVar11;
            uVar16 = uVar14 + 1;
            if (iVar10 < (int)uVar16) {
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,uVar16 - iVar10,&(param_1->RawTextValue).AllocatorInstance,
                         &(param_1->RawTextValue).ArrayNum,&(param_1->RawTextValue).ArrayMax);
            }
            else {
              if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
              }
              if ((int)uVar16 < iVar10) {
                uVar19 = iVar10 - uVar16;
                if (((int)(uVar19 | uVar16) < 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x458,
                                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  uVar8 = (*pcVar6)();
                  return (bool)uVar8;
                }
                if (uVar19 != 0) {
                  pFVar15 = (param_1->RawTextValue).AllocatorInstance.Data + (int)uVar16;
                  iVar10 = ((param_1->RawTextValue).ArrayNum - uVar19) - uVar16;
                  if (iVar10 != 0) {
                    memmove(pFVar15,pFVar15 + (int)uVar19,(longlong)iVar10);
                  }
                  iVar10 = (param_1->RawTextValue).ArrayNum - uVar19;
                  (param_1->RawTextValue).ArrayNum = iVar10;
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,&(param_1->RawTextValue).AllocatorInstance,iVar10,
                             &(param_1->RawTextValue).ArrayMax);
                }
              }
            }
            (**(code **)(*(longlong *)this->Stream + 0x188))
                      (this->Stream,(param_1->RawTextValue).AllocatorInstance.Data,
                       (param_1->field1_0x8).IntValue);
            uVar16 = 0;
            if ((int)uVar14 < (param_1->RawTextValue).ArrayNum) {
              uVar16 = ~uVar14 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            (param_1->RawTextValue).AllocatorInstance.Data[(int)uVar14] =
                 (FScriptContainerElement)0x0;
            pFVar18 = local_res18;
          }
          break;
        case 0x80:
          if ((bVar13 & 0x1f) != 0x1f) {
            uVar11 = ReadUIntValue(param_1,this->Stream);
          }
          (param_1->field1_0x8).UIntValue = uVar11;
          pFVar5 = (FCborContext *)(this->ContextStack).AllocatorInstance.Data;
          if (((pFVar5 <= param_1) && (param_1 < pFVar5 + (this->ContextStack).ArrayMax)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          iVar10 = (this->ContextStack).ArrayNum;
          piVar2 = &(this->ContextStack).ArrayMax;
          if (iVar10 == *piVar2) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&(this->ContextStack).AllocatorInstance,piVar2);
          }
          (this->ContextStack).ArrayNum = iVar10 + 1;
          pFVar15 = (this->ContextStack).AllocatorInstance.Data;
          lVar17 = (longlong)iVar10 * 0x20;
          pFVar20 = pFVar15 + lVar17 + 0x10;
          pFVar15[lVar17] = (FScriptContainerElement)(param_1->Header).Header;
          *(FCborContext_u_8 *)(pFVar15 + lVar17 + 8) = param_1->field1_0x8;
          *(FCborContext_u_8 *)(pFVar15 + lVar17 + 8) = param_1->field1_0x8;
          pFVar15[lVar17 + 8] = (FScriptContainerElement)(param_1->field1_0x8).BoolValue;
          *(float *)(pFVar15 + lVar17 + 8) = (param_1->field1_0x8).FloatValue;
          *(FCborContext_u_8 *)(pFVar15 + lVar17 + 8) = param_1->field1_0x8;
          *(FCborContext_u_8 *)(pFVar15 + lVar17 + 8) = param_1->field1_0x8;
          pFVar12 = pFVar20 + 0xc;
          *(undefined8 *)&pFVar20->field_0x0 = 0;
          iVar10 = (param_1->RawTextValue).ArrayNum;
          _Size = (size_t)iVar10;
          pFVar15 = (param_1->RawTextValue).AllocatorInstance.Data;
          *(int *)&pFVar20[8].field_0x0 = iVar10;
          if (iVar10 == 0) {
            *(undefined4 *)pFVar12 = 0;
          }
          else {
LAB_1431218ae:
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,(int)_Size,0,(ForAnyElementType *)pFVar20,(int)_Size,(int *)pFVar12);
            memcpy(*(void **)&pFVar20->field_0x0,pFVar15,_Size);
          }
          break;
        case 0xa0:
          if ((bVar13 & 0x1f) != 0x1f) {
            uVar11 = ReadUIntValue(param_1,this->Stream);
            uVar11 = uVar11 * 2;
          }
          (param_1->field1_0x8).IntValue = uVar11;
          pFVar5 = (FCborContext *)(this->ContextStack).AllocatorInstance.Data;
          if (((pFVar5 <= param_1) && (param_1 < pFVar5 + (this->ContextStack).ArrayMax)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          iVar10 = (this->ContextStack).ArrayNum;
          piVar2 = &(this->ContextStack).ArrayMax;
          if (iVar10 == *piVar2) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&(this->ContextStack).AllocatorInstance,piVar2);
          }
          (this->ContextStack).ArrayNum = iVar10 + 1;
          pFVar15 = (this->ContextStack).AllocatorInstance.Data;
          lVar17 = (longlong)iVar10 * 0x20;
          pFVar20 = pFVar15 + lVar17 + 0x10;
          pFVar15[lVar17] = (FScriptContainerElement)(param_1->Header).Header;
          *(FCborContext_u_8 *)(pFVar15 + lVar17 + 8) = param_1->field1_0x8;
          *(FCborContext_u_8 *)(pFVar15 + lVar17 + 8) = param_1->field1_0x8;
          pFVar15[lVar17 + 8] = (FScriptContainerElement)(param_1->field1_0x8).BoolValue;
          *(float *)(pFVar15 + lVar17 + 8) = (param_1->field1_0x8).FloatValue;
          *(FCborContext_u_8 *)(pFVar15 + lVar17 + 8) = param_1->field1_0x8;
          *(FCborContext_u_8 *)(pFVar15 + lVar17 + 8) = param_1->field1_0x8;
          pFVar12 = pFVar20 + 0xc;
          *(undefined8 *)&pFVar20->field_0x0 = 0;
          iVar10 = (param_1->RawTextValue).ArrayNum;
          _Size = (size_t)iVar10;
          pFVar15 = (param_1->RawTextValue).AllocatorInstance.Data;
          *(int *)&pFVar20[8].field_0x0 = iVar10;
          if (iVar10 != 0) goto LAB_1431218ae;
          *(undefined4 *)pFVar12 = 0;
          break;
        case 0xe0:
          ReadPrimValue(param_1,this->Stream);
        }
        bVar13 = (param_1->Header).Header & 0x1f;
        if ((bVar13 != 0x1d) && (bVar13 != 0x1e)) goto LAB_1431213fd;
        SetError(this,(ECborCode)local_res10);
        local_res18 = pFVar18;
      }
    }
    else if (pFVar15[(longlong)iVar10 * 0x20 + -0x20] == (FScriptContainerElement)0x1c) {
      (param_1->Header).Header = '<';
      local_res18 = pFVar18;
    }
    else {
      if (((this->ContextStack).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      *(this->ContextStack).AllocatorInstance.Data = (FScriptContainerElement)0x5e;
      (param_1->Header).Header = '^';
      local_res18 = pFVar18;
    }
LAB_143121a1e:
    bVar7 = false;
  }
  local_res18->field_0x2a = local_res18->field_0x2a ^ (bVar3 ^ local_res18->field_0x2a) & 1;
  return bVar7;
}

// ReadPrimValue @ 143121b70

void __cdecl FCborReader::ReadPrimValue(FCborContext *param_1,FArchive *param_2)

{
  longlong *plVar1;
  FCborContext_u_8 FVar2;
  ulonglong uVar3;
  float fVar4;
  FCborContext_u_8 local_res8 [4];
  
  switch((param_1->Header).Header & 0x1f) {
  case 0x14:
    (param_1->field1_0x8).BoolValue = false;
    return;
  case 0x15:
    (param_1->field1_0x8).BoolValue = true;
    return;
  case 0x16:
  case 0x17:
    return;
  case 0x18:
    plVar1 = *(longlong **)&param_2->field_0x8;
    if (*plVar1 + 1U <= (ulonglong)plVar1[1]) {
      *plVar1 = *plVar1 + 1;
      return;
    }
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res8,1);
    return;
  case 0x19:
    break;
  case 0x1a:
    plVar1 = *(longlong **)&param_2->field_0x8;
    if ((float *)*plVar1 + 1 <= (float *)plVar1[1]) {
      fVar4 = *(float *)*plVar1;
      *plVar1 = *plVar1 + 4;
      (param_1->field1_0x8).FloatValue = fVar4;
      return;
    }
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res8,4);
      (param_1->field1_0x8).FloatValue = (float)local_res8[0]._0_4_;
      return;
    }
    FArchive::SerializeByteOrderSwapped(param_2,(uint *)&local_res8[0].UIntValue);
    (param_1->field1_0x8).FloatValue = (float)local_res8[0]._0_4_;
    return;
  case 0x1b:
    plVar1 = *(longlong **)&param_2->field_0x8;
    if ((FCborContext_u_8 *)*plVar1 + 1 <= (FCborContext_u_8 *)plVar1[1]) {
      FVar2 = *(FCborContext_u_8 *)*plVar1;
      *plVar1 = *plVar1 + 8;
      param_1->field1_0x8 = FVar2;
      return;
    }
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res8,8);
      param_1->field1_0x8 = local_res8[0];
      return;
    }
    FArchive::SerializeByteOrderSwapped(param_2,&local_res8[0].UIntValue);
    param_1->field1_0x8 = local_res8[0];
    return;
  default:
    (param_1->Header).Header = '\x1d';
    return;
  }
  plVar1 = *(longlong **)&param_2->field_0x8;
  uVar3 = (ulonglong)local_res8[0] >> 0x10;
  local_res8[0].UIntValue = local_res8[0].UIntValue & 0xffffffffffff0000;
  if ((undefined2 *)*plVar1 + 1 <= (undefined2 *)plVar1[1]) {
    local_res8[0].IntValue._2_6_ = (int6)uVar3;
    local_res8[0].IntValue._0_2_ = *(undefined2 *)*plVar1;
    *plVar1 = *plVar1 + 2;
    fVar4 = FGenericPlatformMath::LoadHalf((ushort *)&local_res8[0].UIntValue);
    (param_1->field1_0x8).FloatValue = fVar4;
    return;
  }
  if ((param_2->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res8,2);
    fVar4 = FGenericPlatformMath::LoadHalf((ushort *)&local_res8[0].UIntValue);
    (param_1->field1_0x8).FloatValue = fVar4;
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_2,(ushort *)&local_res8[0].UIntValue);
  fVar4 = FGenericPlatformMath::LoadHalf((ushort *)&local_res8[0].UIntValue);
  (param_1->field1_0x8).FloatValue = fVar4;
  return;
}

// ReadUIntValue @ 143121da0

ulong64 __cdecl FCborReader::ReadUIntValue(FCborContext *param_1,FArchive *param_2)

{
  byte bVar1;
  ushort uVar2;
  longlong *plVar3;
  ulong64 uVar4;
  uint uVar5;
  ulonglong local_res8 [4];
  
  uVar5 = (uint)(param_1->Header).Header;
  switch(uVar5 & 0x1f) {
  case 0x18:
    plVar3 = *(longlong **)&param_2->field_0x8;
    if ((byte *)plVar3[1] < (byte *)*plVar3 + 1) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res8,1);
      return local_res8[0] & 0xff;
    }
    bVar1 = *(byte *)*plVar3;
    *plVar3 = *plVar3 + 1;
    return (ulonglong)bVar1;
  case 0x19:
    break;
  case 0x1a:
    plVar3 = *(longlong **)&param_2->field_0x8;
    if ((uint *)*plVar3 + 1 <= (uint *)plVar3[1]) {
      uVar5 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
      return (ulonglong)uVar5;
    }
    if ((param_2->field_0x2a & 1) != 0) {
      FArchive::SerializeByteOrderSwapped(param_2,(uint *)local_res8);
      return local_res8[0] & 0xffffffff;
    }
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res8,4);
    return local_res8[0] & 0xffffffff;
  case 0x1b:
    plVar3 = *(longlong **)&param_2->field_0x8;
    if ((ulong64 *)*plVar3 + 1 <= (ulong64 *)plVar3[1]) {
      uVar4 = *(ulong64 *)*plVar3;
      *plVar3 = *plVar3 + 8;
      return uVar4;
    }
    if ((param_2->field_0x2a & 1) != 0) {
      FArchive::SerializeByteOrderSwapped(param_2,local_res8);
      return local_res8[0];
    }
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res8,8);
    return local_res8[0];
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    (param_1->Header).Header = '\x1d';
  default:
    return (ulonglong)(uVar5 & 0x1f);
  }
  plVar3 = *(longlong **)&param_2->field_0x8;
  if ((ushort *)*plVar3 + 1 <= (ushort *)plVar3[1]) {
    uVar2 = *(ushort *)*plVar3;
    *plVar3 = *plVar3 + 2;
    return (ulonglong)uVar2;
  }
  if ((param_2->field_0x2a & 1) != 0) {
    FArchive::SerializeByteOrderSwapped(param_2,(ushort *)local_res8);
    return local_res8[0] & 0xffff;
  }
  (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res8,2);
  return local_res8[0] & 0xffff;
}

// SetError @ 143121f90

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

FCborHeader __thiscall FCborReader::SetError(FCborReader *this,ECborCode param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uchar uVar4;
  undefined7 in_register_00000011;
  FScriptContainerElement in_R8B;
  
  if ((this->ContextStack).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (FCborHeader)uVar4;
    }
  }
  pFVar1 = (this->ContextStack).AllocatorInstance.Data;
  *(FScriptContainerElement *)CONCAT71(in_register_00000011,param_1) = in_R8B;
  *pFVar1 = in_R8B;
  return (FCborHeader)param_1;
}

// SkipContainer @ 143122010

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

bool __thiscall FCborReader::SkipContainer(FCborReader *this,ECborCode param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FCborContext local_28;
  
  if (this->Stream != (FArchive *)0x0) {
    iVar8 = (this->ContextStack).ArrayNum;
    iVar6 = 0;
    uVar7 = iVar8 - 1;
    uVar5 = 0;
    if ((int)uVar7 < iVar8) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (((byte)(this->ContextStack).AllocatorInstance.Data
               [(longlong)(this->ContextStack).ArrayNum * 0x20 + -0x20] & Prim) == param_1) {
      local_28.Header.Header = 0x1c;
      local_28.RawTextValue.ArrayNum = 0;
      local_28.RawTextValue.ArrayMax = 0;
      local_28.field1_0x8.IntValue = 0;
      local_28.RawTextValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar2 = ReadNext(this,&local_28);
      if (bVar2) {
        do {
          iVar8 = iVar6;
          if ((local_28.Header.Header == 0xff) && (iVar8 = iVar6 + -1, iVar6 == 0)) break;
          bVar4 = local_28.Header.Header & 0xe0;
          if ((bVar4 == 0x80) || (((bVar4 - 0x40 & 0x9f) == 0 && (bVar4 != 0x80)))) {
            if ((local_28.Header.Header & 0x1f) != 0x1f) {
              if (bVar4 != 0x80) goto LAB_1431220f6;
              goto LAB_1431220fa;
            }
LAB_143122106:
            bVar2 = true;
          }
          else {
LAB_1431220f6:
            if (bVar4 == 0xa0) {
LAB_1431220fa:
              if ((local_28.Header.Header & 0x1f) != 0x1f) goto LAB_143122106;
            }
            bVar2 = false;
          }
          iVar6 = iVar8 + 1;
          if (!bVar2) {
            iVar6 = iVar8;
          }
          bVar2 = ReadNext(this,&local_28);
        } while (bVar2);
      }
      bVar2 = IsError(this);
      if (local_28.RawTextValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.RawTextValue.AllocatorInstance.Data);
      }
      return !bVar2;
    }
  }
  return false;
}

