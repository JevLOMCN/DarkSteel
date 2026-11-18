// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// operator[] @ 141f264d0

FUObjectItem * __thiscall
FChunkedFixedUObjectArray::operator[](FChunkedFixedUObjectArray *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  
  if ((this->NumElements <= param_1) || (param_1 < 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x362,L"IsValidIndex(%d)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUObjectItem *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((uint)this->NumChunks <= (uint)param_1 >> 0x10) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChunkIndex < (uint32)NumChunks",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUObjectItem *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->MaxElements <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < MaxElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x364,L"Index (%d) < MaxElements (%d)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUObjectItem *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = this->Objects[(uint)param_1 >> 0x10];
  if (pFVar3 == (FUObjectItem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Chunk",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x366,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUObjectItem *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = pFVar3 + (ushort)param_1;
  if (pFVar3 == (FUObjectItem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x381,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUObjectItem *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// GetObjectPtr @ 1420555d0

FUObjectItem * __thiscall
FChunkedFixedUObjectArray::GetObjectPtr(FChunkedFixedUObjectArray *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  
  if ((this->NumElements <= param_1) || (param_1 < 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x362,L"IsValidIndex(%d)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUObjectItem *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((uint)this->NumChunks <= (uint)param_1 >> 0x10) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChunkIndex < (uint32)NumChunks",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUObjectItem *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->MaxElements <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < MaxElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x364,L"Index (%d) < MaxElements (%d)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUObjectItem *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = this->Objects[(uint)param_1 >> 0x10];
  if (pFVar3 == (FUObjectItem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Chunk",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x366,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUObjectItem *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3 + (ushort)param_1;
}

// operator[] @ 14225a4e0

FUObjectItem * __thiscall
FChunkedFixedUObjectArray::operator[](FChunkedFixedUObjectArray *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  
  if ((this->NumElements <= param_1) || (param_1 < 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x357,L"IsValidIndex(%d)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUObjectItem *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((uint)this->NumChunks <= (uint)param_1 >> 0x10) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChunkIndex < (uint32)NumChunks",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x358,L"ChunkIndex (%d) < NumChunks (%d)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUObjectItem *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->MaxElements <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < MaxElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x359,L"Index (%d) < MaxElements (%d)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUObjectItem *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = this->Objects[(uint)param_1 >> 0x10];
  if (pFVar3 == (FUObjectItem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Chunk",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x35b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUObjectItem *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = pFVar3 + (ushort)param_1;
  if (pFVar3 == (FUObjectItem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x37b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUObjectItem *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// AddRange @ 14225f040

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FChunkedFixedUObjectArray::AddRange(FChunkedFixedUObjectArray *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = this->NumElements;
  iVar1 = iVar2 + param_1;
  if (this->MaxElements < iVar1) {
    if (GVarDumpObjectCountsToLogWhenMaxObjectLimitExceeded != 0) {
      FUObjectArray::DumpUObjectCountsToLog(&GUObjectArray);
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
  }
  ExpandChunksToIndex(this,iVar1 + -1);
  this->NumElements = this->NumElements + param_1;
  return iVar2;
}

// ExpandChunksToIndex @ 14226bdd0

void __thiscall
FChunkedFixedUObjectArray::ExpandChunksToIndex(FChunkedFixedUObjectArray *this,int param_1)

{
  FUObjectItem **ppFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FUObjectItem *pFVar6;
  int iVar7;
  longlong lVar8;
  FUObjectItem *pFVar9;
  
  if (((param_1 < 0) || (this->MaxElements <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < MaxElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x2e7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar7 = this->NumChunks;
  iVar4 = (int)(param_1 + (param_1 >> 0x1f & 0xffffU)) >> 0x10;
  if (iVar7 <= iVar4) {
    do {
      ppFVar1 = this->Objects + iVar7;
      puVar5 = operator_new__(0x200008);
      pFVar9 = (FUObjectItem *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        pFVar9 = (FUObjectItem *)(puVar5 + 1);
        *puVar5 = 0x10000;
        lVar8 = 0x10000;
        pFVar6 = pFVar9;
        do {
          (pFVar6->field0_0x0).FlagsAndRefCount = 0;
          (pFVar6->field1_0x8).Object = (UObjectBase *)0x0;
          pFVar6->SerialNumber = 0;
          pFVar6->ClusterRootIndex = 0;
          (pFVar6->StatID).StatIdPtr = &TStatId::TStatId_NAME_None;
          pFVar6 = pFVar6 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (((ulonglong)ppFVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchangePointer requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      pFVar6 = *ppFVar1;
      if (pFVar6 == (FUObjectItem *)0x0) {
        *ppFVar1 = pFVar9;
      }
      UNLOCK();
      if (pFVar6 == (FUObjectItem *)0x0) {
        this->NumChunks = this->NumChunks + 1;
        if ((this->MaxChunks < this->NumChunks) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumChunks <= MaxChunks",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x2f6,L""), bVar3)) goto code_r0x00014226bf14;
      }
      else {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x2f1,L"");
        if (bVar3) {
code_r0x00014226bf14:
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar7 = this->NumChunks;
    } while (iVar7 <= iVar4);
  }
  if ((this->Objects[iVar4] == (FUObjectItem *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < NumChunks && Objects[ChunkIndex]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x2f9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// PreAllocate @ 14227b5b0

void __thiscall
FChunkedFixedUObjectArray::PreAllocate(FChunkedFixedUObjectArray *this,int param_1,bool param_2)

{
  FUObjectItem *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  uint uVar6;
  ulong64 uVar7;
  FUObjectItem **_Dst;
  ulonglong uVar8;
  ulonglong *puVar9;
  int iVar10;
  FUObjectItem *pFVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  
  if ((this->Objects != (FUObjectItem **)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Objects",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,799,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar10 = ((int)((param_1 >> 0x1f & 0xffffU) + param_1) >> 0x10) + 1;
  this->MaxChunks = iVar10;
  this->MaxElements = iVar10 * 0x10000;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)iVar10;
  uVar7 = SUB168(ZEXT816(8) * auVar3,0);
  if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  _Dst = operator_new__(uVar7);
  this->Objects = _Dst;
  memset(_Dst,0,(longlong)this->MaxChunks << 3);
  if (param_2) {
    uVar13 = (ulonglong)this->MaxElements;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar13;
    uVar8 = SUB168(ZEXT816(0x20) * auVar4,0);
    if (SUB168(ZEXT816(0x20) * auVar4,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    uVar7 = uVar8 + 8;
    if (0xfffffffffffffff7 < uVar8) {
      uVar7 = 0xffffffffffffffff;
    }
    puVar9 = operator_new__(uVar7);
    if (puVar9 == (ulonglong *)0x0) {
      pFVar11 = (FUObjectItem *)0x0;
    }
    else {
      pFVar11 = (FUObjectItem *)(puVar9 + 1);
      *puVar9 = uVar13;
      pFVar1 = pFVar11;
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        (pFVar1->field0_0x0).FlagsAndRefCount = 0;
        (pFVar1->field1_0x8).Object = (UObjectBase *)0x0;
        pFVar1->SerialNumber = 0;
        pFVar1->ClusterRootIndex = 0;
        (pFVar1->StatID).StatIdPtr = &TStatId::TStatId_NAME_None;
        pFVar1 = pFVar1 + 1;
      }
    }
    uVar13 = 0;
    iVar10 = this->MaxChunks;
    this->PreAllocatedObjects = pFVar11;
    if (0 < iVar10) {
      iVar14 = 0;
      uVar8 = uVar13;
      do {
        lVar12 = (longlong)iVar14;
        uVar6 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar6;
        iVar14 = iVar14 + 0x10000;
        *(FUObjectItem **)(uVar8 + (longlong)this->Objects) = this->PreAllocatedObjects + lVar12;
        iVar10 = this->MaxChunks;
        uVar8 = uVar8 + 8;
      } while ((int)uVar6 < iVar10);
    }
    this->NumChunks = iVar10;
  }
  return;
}

