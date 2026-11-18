// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 1

// TryReplaceExisting @ 146050000

bool __thiscall
TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  ForElementType<FSetElementId> FVar15;
  uint uVar16;
  void *_Dst;
  FOperatorFunctionID *pFVar17;
  uint uVar18;
  
  iVar3 = *(int *)&(this->Elements).field_0x8;
  bVar8 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar3 - iVar4 != 1) && (iVar3 != iVar4)) {
    FVar15 = (this->Hash).SecondaryData;
    if (FVar15 == (ForElementType<FSetElementId>)0x0) {
      FVar15 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar16 = *(uint *)((longlong)FVar15 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar16 != 0xffffffff) {
      lVar5 = *(longlong *)&this->Elements;
      do {
        pFVar17 = (FOperatorFunctionID *)((longlong)(int)uVar16 * 0x70 + lVar5);
        bVar8 = ::operator==(pFVar17,(FOperatorFunctionID *)param_2);
        if (bVar8) {
          bVar8 = uVar16 != 0xffffffff;
          if (bVar8) {
            _Dst = (void *)((longlong)(int)uVar16 * 0x70 + *(longlong *)&this->Elements);
            if (*(longlong *)((longlong)_Dst + 0x30) != 0) {
              plVar13 = (longlong *)((longlong)_Dst + 0x40);
              if (*(longlong **)((longlong)_Dst + 0x58) != (longlong *)0x0) {
                plVar13 = *(longlong **)((longlong)_Dst + 0x58);
              }
              (**(code **)(*plVar13 + 0x10))();
            }
            memmove(_Dst,param_2,0x60);
            iVar3 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar5 = *(longlong *)&this->Elements;
            bVar7 = (byte)iVar3 & 0x1f;
            uVar18 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            if (((*(uint *)(puVar12 + lVar2) & uVar18) == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x70 + lVar5) = iVar3;
            }
            uVar11 = 0xffffffff;
            puVar14 = (undefined4 *)((longlong)iVar3 * 0x70 + lVar5);
            *puVar14 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar11 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar14[1] = uVar11;
            puVar12 = &(this->Elements).field_0x34;
            *(int *)puVar12 = *(int *)puVar12 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar3;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar18;
            *param_3 = uVar16;
          }
          goto LAB_14605009e;
        }
        uVar16 = pFVar17[2].OperatorType.A;
      } while (uVar16 != 0xffffffff);
    }
    bVar8 = false;
  }
LAB_14605009e:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar8;
  }
  return bVar8;
}

