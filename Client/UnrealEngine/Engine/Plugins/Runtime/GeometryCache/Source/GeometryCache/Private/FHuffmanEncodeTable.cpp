// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 5

// Encode @ 14ca14f70

void __thiscall
FHuffmanEncodeTable::Encode(FHuffmanEncodeTable *this,FHuffmanBitStreamWriter *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_2;
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Symbol >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanTable.cpp"
                       ,0x101,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->NumSymbols <= param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Symbol < NumSymbols",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanTable.cpp"
                       ,0x102,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->bIsPrepass != false) {
    uVar5 = 0;
    if (param_2 < (this->SymbolFrequencies).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
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
    pFVar1 = (this->SymbolFrequencies).AllocatorInstance.Data + lVar6 * 4;
    *(int *)pFVar1 = *(int *)pFVar1 + 1;
    return;
  }
  uVar5 = 0;
  if (param_2 < (this->CodeWords).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
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
  pFVar2 = (this->CodeWords).AllocatorInstance.Data;
  pFVar1 = pFVar2 + lVar6 * 8;
  if (*(int *)(pFVar2 + lVar6 * 8 + 4) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CodeWord.Length > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanTable.cpp"
                       ,0x10b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FHuffmanBitStreamWriter::Write(param_1,*(uint *)pFVar1,*(uint *)(pFVar1 + 4));
  return;
}

// Initialize @ 14ca22680

void __thiscall FHuffmanEncodeTable::Initialize(FHuffmanEncodeTable *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint local_res10 [2];
  undefined4 local_28;
  undefined8 local_24;
  
  this->NumSymbols = param_1;
  local_res10[0] = 0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Init
            (&this->SymbolFrequencies,local_res10,param_1);
  uVar2 = this->NumSymbols;
  uVar7 = (ulonglong)uVar2;
  local_28 = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar7);
  }
  piVar1 = &(this->CodewordSymbols).ArrayMax;
  (this->CodewordSymbols).ArrayNum = 0;
  if (*piVar1 != uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar2,&(this->CodewordSymbols).AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar2) {
    do {
      pFVar3 = (this->CodewordSymbols).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_28) &&
          ((FScriptContainerElement *)&local_28 < pFVar3 + (longlong)*piVar1 * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->CodewordSymbols).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->CodewordSymbols).AllocatorInstance,piVar1);
      }
      (this->CodewordSymbols).ArrayNum = iVar6 + 1;
      *(undefined4 *)((this->CodewordSymbols).AllocatorInstance.Data + (longlong)iVar6 * 4) =
           local_28;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar2 = this->NumSymbols;
  uVar7 = (ulonglong)uVar2;
  local_24 = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar7);
  }
  piVar1 = &(this->CodeWords).ArrayMax;
  (this->CodeWords).ArrayNum = 0;
  if (*piVar1 != uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar2,&(this->CodeWords).AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar2) {
    do {
      pFVar3 = (this->CodeWords).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_24) &&
          ((FScriptContainerElement *)&local_24 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->CodeWords).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->CodeWords).AllocatorInstance,piVar1);
      }
      (this->CodeWords).ArrayNum = iVar6 + 1;
      *(undefined8 *)((this->CodeWords).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_24;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  ResetFrequencies(this);
  this->bIsPrepass = true;
  return;
}

// ResetFrequencies @ 14ca29c10

void __thiscall FHuffmanEncodeTable::ResetFrequencies(FHuffmanEncodeTable *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->SymbolFrequencies).ArrayNum;
  uVar5 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = uVar5 + 1;
      *(undefined4 *)((this->SymbolFrequencies).AllocatorInstance.Data + lVar6) = 0;
      lVar6 = lVar6 + 4;
      iVar4 = (this->SymbolFrequencies).ArrayNum;
    } while ((int)uVar5 < iVar4);
  }
  return;
}

// Serialize @ 14ca2a020

void __thiscall
FHuffmanEncodeTable::Serialize(FHuffmanEncodeTable *this,FHuffmanBitStreamWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement local_18 [16];
  
  FHuffmanBitStreamWriter::Write(param_1,this->NumSymbols,9);
  uVar7 = 0;
  if (0 < this->NumSymbols) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->CodeWords).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = *(uint *)((this->CodeWords).AllocatorInstance.Data + lVar8 + 4);
      if ((param_1->bFlushed != false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("bFlushed == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanBitStream.h"
                             ,0x2a,L"You cannot write to a stream that has already been closed"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((0xf < uVar4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Bits < (1u << InNumBits)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanBitStream.h"
                             ,0x2b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      param_1->NumBits = param_1->NumBits + 4;
      uVar6 = (ulonglong)uVar4 << ((byte)param_1->BitBufferBits & 0x3f) | param_1->BitBuffer;
      uVar4 = param_1->BitBufferBits + 4;
      param_1->BitBuffer = uVar6;
      param_1->BitBufferBits = uVar4;
      while (7 < uVar4) {
        pFVar1 = (param_1->Bytes).AllocatorInstance.Data;
        local_18[0] = SUB81(uVar6,0);
        if (((pFVar1 <= local_18) && (local_18 < pFVar1 + (param_1->Bytes).ArrayMax)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = (param_1->Bytes).ArrayNum;
        if (iVar5 == (param_1->Bytes).ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x101,(ForAnyElementType *)param_1,&(param_1->Bytes).ArrayMax);
        }
        (param_1->Bytes).ArrayNum = iVar5 + 1;
        (param_1->Bytes).AllocatorInstance.Data[iVar5] = local_18[0];
        param_1->BitBuffer = param_1->BitBuffer >> 8;
        param_1->BitBufferBits = param_1->BitBufferBits - 8;
        uVar6 = (ulonglong)(byte)param_1->BitBuffer;
        uVar4 = param_1->BitBufferBits;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < this->NumSymbols);
  }
  return;
}

// SetPrepass @ 14ca2b350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FHuffmanEncodeTable::SetPrepass(FHuffmanEncodeTable *this,bool param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  byte bVar3;
  ushort uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  uint uVar11;
  ulonglong uVar12;
  ushort *puVar13;
  undefined1 auStackY_388 [32];
  uint local_340 [2];
  byte local_338 [256];
  ushort local_238 [256];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_388;
  uVar9 = 0;
  if ((this->bIsPrepass == false) && (param_1)) {
    local_340[0] = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Init
              (&this->SymbolFrequencies,local_340,this->NumSymbols);
    ResetFrequencies(this);
  }
  if ((this->bIsPrepass == true) && (!param_1)) {
    GenerateLengthLimitedHuffmanLengths
              (local_338,(uint *)(this->SymbolFrequencies).AllocatorInstance.Data,this->NumSymbols,
               0xb);
    GenerateHuffmanCodes(local_238,local_338,this->NumSymbols,0xb);
    piVar1 = &(this->CodeWords).ArrayMax;
    (this->CodeWords).ArrayNum = 0;
    piVar2 = &(this->CodeWords).ArrayNum;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->CodeWords).AllocatorInstance,0,piVar1);
    }
    uVar8 = this->NumSymbols;
    iVar7 = *piVar2;
    if (iVar7 < (int)uVar8) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar8 - iVar7,&(this->CodeWords).AllocatorInstance,piVar2,piVar1);
    }
    else {
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if ((int)uVar8 < iVar7) {
        uVar11 = iVar7 - uVar8;
        if (((int)(uVar11 | uVar8) < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar11 != 0) {
          _Dst = (this->CodeWords).AllocatorInstance.Data + (longlong)(int)uVar8 * 8;
          iVar7 = (*piVar2 - uVar8) - uVar11;
          if (iVar7 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar11 * 8,(longlong)iVar7 << 3);
          }
          *piVar2 = *piVar2 - uVar11;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&(this->CodeWords).AllocatorInstance,*piVar2,piVar1);
        }
      }
    }
    if (0 < this->NumSymbols) {
      pbVar10 = local_338;
      puVar13 = local_238;
      uVar12 = uVar9;
      do {
        uVar4 = *puVar13;
        uVar11 = (uint)uVar9;
        uVar8 = 0;
        if ((int)uVar11 < *piVar2) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)((this->CodeWords).AllocatorInstance.Data + uVar12) = (uint)uVar4;
        bVar3 = *pbVar10;
        uVar8 = 0;
        if ((int)uVar11 < *piVar2) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar9 = (ulonglong)(uVar11 + 1);
        puVar13 = puVar13 + 1;
        pbVar10 = pbVar10 + 1;
        *(uint *)((this->CodeWords).AllocatorInstance.Data + uVar12 + 4) = (uint)bVar3;
        uVar12 = uVar12 + 8;
      } while ((int)(uVar11 + 1) < this->NumSymbols);
    }
    (this->SymbolFrequencies).ArrayNum = 0;
    if ((this->SymbolFrequencies).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)this,0,&(this->SymbolFrequencies).ArrayMax);
    }
  }
  this->bIsPrepass = param_1;
  return;
}

