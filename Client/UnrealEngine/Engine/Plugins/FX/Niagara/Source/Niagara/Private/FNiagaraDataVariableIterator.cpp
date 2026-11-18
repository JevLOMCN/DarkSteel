// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// Get @ 149233710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDataVariableIterator::Get(FNiagaraDataVariableIterator *this)

{
  uint uVar1;
  FNiagaraDataSetCompiledData *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FNiagaraTypeDefinition *pFVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  
  uVar14 = 0;
  pFVar2 = (this->Data->Owner->CompiledData).StructPtr;
  uVar17 = uVar14;
  if (0 < (this->Variables).ArrayNum) {
    do {
      uVar16 = (uint)uVar17;
      uVar9 = 0;
      if ((int)uVar16 < (this->Variables).ArrayNum) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (this->Variables).AllocatorInstance.Data;
      uVar9 = 0;
      if ((int)uVar16 < (pFVar2->VariableLayouts).ArrayNum) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (pFVar2->VariableLayouts).AllocatorInstance.Data;
      pFVar12 = FNiagaraTypeDefinitionHandle::Resolve
                          ((FNiagaraTypeDefinitionHandle *)(pFVar3 + uVar14 + 8));
      iVar8 = FNiagaraTypeDefinition::GetSize(pFVar12);
      if (*(int *)(pFVar3 + uVar14 + 0x18) != iVar8) {
        pFVar12 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)(pFVar3 + uVar14 + 8));
        uVar9 = FNiagaraTypeDefinition::GetSize(pFVar12);
        iVar8 = *(int *)(pFVar3 + uVar14 + 0x18);
        if (iVar8 < (int)uVar9) {
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (1,1,uVar9 - iVar8,(ForAnyElementType *)(pFVar3 + uVar14 + 0x10),
                              (int *)(pFVar3 + uVar14 + 0x18),(int *)(pFVar3 + uVar14 + 0x1c));
          memset((void *)((longlong)iVar10 + *(longlong *)(pFVar3 + uVar14 + 0x10)),0,
                 (longlong)(int)(uVar9 - iVar8));
        }
        else {
          if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
          }
          if ((int)uVar9 < iVar8) {
            uVar18 = iVar8 - uVar9;
            if (((int)(uVar18 | uVar9) < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (uVar18 != 0) {
              iVar8 = (*(int *)(pFVar3 + uVar14 + 0x18) - uVar9) - uVar18;
              if (iVar8 != 0) {
                memmove((void *)((longlong)(int)uVar9 + *(longlong *)(pFVar3 + uVar14 + 0x10)),
                        (void *)((longlong)(int)uVar18 +
                                (longlong)(int)uVar9 + *(longlong *)(pFVar3 + uVar14 + 0x10)),
                        (longlong)iVar8);
              }
              *(uint *)(pFVar3 + uVar14 + 0x18) = *(int *)(pFVar3 + uVar14 + 0x18) - uVar18;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,(ForAnyElementType *)(pFVar3 + uVar14 + 0x10),
                         *(int *)(pFVar3 + uVar14 + 0x18),(int *)(pFVar3 + uVar14 + 0x1c));
            }
          }
        }
      }
      lVar5 = *(longlong *)(pFVar3 + uVar14 + 0x10);
      uVar9 = 0;
      if (*(short *)(pFVar4 + uVar14 + 8) != 0) {
        do {
          uVar18 = this->CurrIdx;
          iVar8 = *(ushort *)(pFVar4 + uVar14) + uVar9;
          uVar1 = this->Data->FloatStride;
          pFVar3 = (this->Data->FloatData).AllocatorInstance.Data;
          uVar11 = 0;
          if ((int)uVar9 < *(int *)(pFVar4 + uVar14 + 0x18)) {
            uVar11 = ~uVar9 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar13 = (longlong)(int)uVar9;
          uVar9 = uVar9 + 1;
          *(undefined4 *)
           ((ulonglong)*(uint *)(*(longlong *)(pFVar4 + uVar14 + 0x10) + lVar13 * 4) + lVar5) =
               *(undefined4 *)(pFVar3 + (ulonglong)(iVar8 * uVar1) + (ulonglong)uVar18 * 4);
        } while (uVar9 < *(ushort *)(pFVar4 + uVar14 + 8));
      }
      uVar9 = 0;
      if (*(short *)(pFVar4 + uVar14 + 10) != 0) {
        do {
          uVar18 = this->CurrIdx;
          iVar8 = *(ushort *)(pFVar4 + uVar14 + 2) + uVar9;
          uVar1 = this->Data->Int32Stride;
          pFVar3 = (this->Data->Int32Data).AllocatorInstance.Data;
          uVar15 = uVar9 + (uint)*(ushort *)(pFVar4 + uVar14 + 8) * 2;
          uVar11 = 0;
          if ((int)uVar15 < *(int *)(pFVar4 + uVar14 + 0x18)) {
            uVar11 = ~uVar15 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar9 = uVar9 + 1;
          *(undefined4 *)
           ((ulonglong)*(uint *)(*(longlong *)(pFVar4 + uVar14 + 0x10) + (longlong)(int)uVar15 * 4)
           + lVar5) = *(undefined4 *)(pFVar3 + (ulonglong)(iVar8 * uVar1) + (ulonglong)uVar18 * 4);
        } while (uVar9 < *(ushort *)(pFVar4 + uVar14 + 10));
      }
      uVar9 = 0;
      if (*(short *)(pFVar4 + uVar14 + 0xc) != 0) {
        do {
          uVar18 = this->CurrIdx;
          iVar8 = *(ushort *)(pFVar4 + uVar14 + 4) + uVar9;
          uVar1 = this->Data->HalfStride;
          pFVar3 = (this->Data->HalfData).AllocatorInstance.Data;
          uVar15 = uVar9 + ((uint)*(ushort *)(pFVar4 + uVar14 + 10) +
                           (uint)*(ushort *)(pFVar4 + uVar14 + 8)) * 2;
          uVar11 = 0;
          if ((int)uVar15 < *(int *)(pFVar4 + uVar14 + 0x18)) {
            uVar11 = ~uVar15 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar9 = uVar9 + 1;
          *(undefined2 *)
           ((ulonglong)*(uint *)(*(longlong *)(pFVar4 + uVar14 + 0x10) + (longlong)(int)uVar15 * 4)
           + lVar5) = *(undefined2 *)(pFVar3 + (ulonglong)(iVar8 * uVar1) + (ulonglong)uVar18 * 2);
        } while (uVar9 < *(ushort *)(pFVar4 + uVar14 + 0xc));
      }
      uVar17 = (ulonglong)(uVar16 + 1);
      uVar14 = uVar14 + 0x20;
    } while ((int)(uVar16 + 1) < (this->Variables).ArrayNum);
  }
  return;
}

