// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ComputeHash @ 144efd510

void __thiscall
FRHIUniformBufferLayoutInitializer::ComputeHash(FRHIUniformBufferLayoutInitializer *this)

{
  ERHIUniformBufferFlags EVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  wchar_t wVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_> *pTVar17;
  longlong lVar18;
  
  EVar1 = this->Flags;
  uVar13 = (this->Resources).ArrayNum;
  pTVar17 = &this->Resources;
  uVar14 = 0;
  uVar16 = ((this->ConstantBufferSize << 8 | (uint)this->BindingFlags) << 7 | EVar1 & 2) * 2 |
           (uint)(this->StaticSlot != 0xff) | (EVar1 & 1) * 2 | EVar1 & 8;
  if (0 < (int)uVar13) {
    lVar18 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar14 < (this->Resources).ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar9 = pTVar17->AllocatorInstance;
      if (((ulonglong)FVar9 & 1) != 0) {
        FVar9 = (ForAnyElementType)
                ((longlong)&(pTVar17->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
      }
      uVar14 = uVar14 + 1;
      uVar13 = (this->Resources).ArrayNum;
      uVar16 = uVar16 ^ *(ushort *)((longlong)FVar9 + lVar18);
      lVar18 = lVar18 + 4;
    } while ((int)uVar14 < (int)uVar13);
  }
  uVar15 = 0xffffffff;
  uVar14 = 0xffffffff;
  while( true ) {
    if (uVar13 < 4) {
      pTVar17 = &this->Resources;
      while( true ) {
        if (uVar13 < 2) {
          while( true ) {
            if (uVar13 == 0) {
              if ((this->Name).Data.ArrayNum == 0) {
                pwVar10 = L"";
              }
              else {
                pwVar10 = *(wchar_t **)&(this->Name).Data.AllocatorInstance;
                if (((ulonglong)pwVar10 & 1) != 0) {
                  pwVar10 = (wchar_t *)
                            ((longlong)&(this->Name).Data.AllocatorInstance.field_0x0 +
                            ((longlong)pwVar10 >> 0x18));
                }
              }
              wVar5 = *pwVar10;
              while (wVar5 != L'\0') {
                pwVar10 = (wchar_t *)((longlong)pwVar10 + 2);
                uVar14 = FCrc::CRCTablesSB8[1][uVar15 >> 0x10 & 0xff] ^
                         FCrc::CRCTablesSB8[2][((ushort)wVar5 ^ uVar15) >> 8 & 0xff] ^
                         FCrc::CRCTablesSB8[0][uVar15 >> 0x18] ^
                         FCrc::CRCTablesSB8[3][((ushort)wVar5 ^ uVar15) & 0xff];
                uVar15 = (ulonglong)uVar14;
                wVar5 = *pwVar10;
              }
              this->Hash = ~uVar14 ^ uVar16;
              return;
            }
            uVar11 = uVar13 - 1;
            uVar8 = 0;
            if ((int)uVar11 < (this->Resources).ArrayNum) {
              uVar8 = -uVar13 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) break;
            FVar9 = (this->Resources).AllocatorInstance;
            if (((ulonglong)FVar9 & 1) != 0) {
              FVar9 = (ForAnyElementType)
                      ((longlong)&(this->Resources).AllocatorInstance.field_0x0 +
                      ((longlong)FVar9 >> 0x18));
            }
            uVar16 = uVar16 ^ *(byte *)((longlong)FVar9 + 2U + (longlong)(int)uVar11 * 4);
            uVar13 = uVar11;
          }
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar11 = uVar13 - 1;
        uVar8 = 0;
        if ((int)uVar11 < (this->Resources).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) break;
        FVar9 = pTVar17->AllocatorInstance;
        if (((ulonglong)FVar9 & 1) != 0) {
          FVar9 = (ForAnyElementType)
                  ((longlong)&(pTVar17->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
        }
        uVar13 = uVar13 - 2;
        bVar2 = *(byte *)((longlong)FVar9 + 2U + (longlong)(int)uVar11 * 4);
        uVar8 = 0;
        if ((int)uVar13 < (this->Resources).ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar9 = pTVar17->AllocatorInstance;
        if (((ulonglong)FVar9 & 1) != 0) {
          FVar9 = (ForAnyElementType)
                  ((longlong)&(pTVar17->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
        }
        uVar16 = uVar16 ^ bVar2 ^
                 (uint)*(byte *)((longlong)FVar9 + 2U + (longlong)(int)uVar13 * 4) << 0x10;
      }
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar11 = uVar13 - 1;
    uVar8 = 0;
    if ((int)uVar11 < (this->Resources).ArrayNum) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar9 = pTVar17->AllocatorInstance;
    if (((ulonglong)FVar9 & 1) != 0) {
      FVar9 = (ForAnyElementType)
              ((longlong)&(pTVar17->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
    }
    uVar12 = uVar13 - 2;
    bVar2 = *(byte *)((longlong)FVar9 + 2U + (longlong)(int)uVar11 * 4);
    uVar8 = 0;
    if ((int)uVar12 < (this->Resources).ArrayNum) {
      uVar8 = ~uVar12 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar9 = pTVar17->AllocatorInstance;
    if (((ulonglong)FVar9 & 1) != 0) {
      FVar9 = (ForAnyElementType)
              ((longlong)&(pTVar17->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
    }
    uVar11 = uVar13 - 3;
    bVar3 = *(byte *)((longlong)FVar9 + 2U + (longlong)(int)uVar12 * 4);
    uVar8 = 0;
    if ((int)uVar11 < (this->Resources).ArrayNum) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    FVar9 = pTVar17->AllocatorInstance;
    if (((ulonglong)FVar9 & 1) != 0) {
      FVar9 = (ForAnyElementType)
              ((longlong)&(pTVar17->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
    }
    uVar13 = uVar13 - 4;
    bVar4 = *(byte *)((longlong)FVar9 + 2U + (longlong)(int)uVar11 * 4);
    uVar8 = 0;
    if ((int)uVar13 < (this->Resources).ArrayNum) {
      uVar8 = ~uVar13 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar9 = pTVar17->AllocatorInstance;
    if (((ulonglong)FVar9 & 1) != 0) {
      FVar9 = (ForAnyElementType)
              ((longlong)&(pTVar17->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
    }
    uVar16 = uVar16 ^ bVar2 ^ (uint)bVar3 << 8 ^ (uint)bVar4 << 0x10 ^
             (uint)*(byte *)((longlong)FVar9 + 2U + (longlong)(int)uVar13 * 4) << 0x18;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

