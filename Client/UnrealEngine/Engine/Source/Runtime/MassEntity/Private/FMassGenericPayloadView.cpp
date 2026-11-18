// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// SwapElementsToEnd @ 1472512f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMassGenericPayloadView::SwapElementsToEnd(FMassGenericPayloadView *this,int param_1,int param_2)

{
  FStructArrayView *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_char> FVar6;
  FStructArrayView *pFVar7;
  uint uVar8;
  void *_Src;
  uint uVar9;
  ulonglong _Size;
  undefined1 auStackY_98 [32];
  ForElementType<unsigned_char> local_60;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if (((param_1 < 0) || (param_2 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && NumToMove >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityTypes.cpp"
                         ,0x185,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((0 < param_2) && (-1 < param_1)) {
    pFVar7 = (this->Content).DataPtr;
    local_60.SecondaryData = (ForElementType<unsigned_char>)0x0;
    local_48 = 0;
    local_44 = 0x10;
    pFVar1 = pFVar7 + (this->Content).ArrayNum;
    for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 1) {
      if ((pFVar7->ArrayNum < param_2 + param_1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(StartIndex + NumToMove) <= StructArrayView.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityTypes.cpp"
                             ,400,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (param_2 + param_1 < pFVar7->ArrayNum + -1) {
        uVar9 = pFVar7->ElementSize;
        pvVar2 = pFVar7->DataPtr;
        _Size = (ulonglong)(((pFVar7->ArrayNum - param_2) - param_1) * uVar9);
        uVar8 = uVar9 * param_1;
        uVar9 = uVar9 * param_2;
        local_48 = 0;
        if (local_44 < 0) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                    (1,1,0,&local_60,0,&local_44);
        }
        _Src = (void *)((ulonglong)uVar8 + (longlong)pvVar2);
        if (((_Src == (void *)0x0) && (uVar9 != 0)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = UE::Core::Private::
                ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                          (1,1,uVar9,&local_60,&local_48,&local_44);
        FVar6 = (ForElementType<unsigned_char>)&local_60;
        if (local_60.SecondaryData != (ForElementType<unsigned_char>)0x0) {
          FVar6 = local_60.SecondaryData;
        }
        if (uVar9 != 0) {
          memcpy((void *)((longlong)iVar5 + (longlong)FVar6),_Src,(longlong)(int)uVar9);
        }
        memmove(_Src,(void *)((ulonglong)uVar9 + (ulonglong)uVar8 + (longlong)pvVar2),_Size);
        FVar6 = (ForElementType<unsigned_char>)&local_60;
        if (local_60.SecondaryData != (ForElementType<unsigned_char>)0x0) {
          FVar6 = local_60.SecondaryData;
        }
        memcpy((void *)(_Size + uVar8 + (longlong)pvVar2),(void *)FVar6,(ulonglong)uVar9);
      }
    }
    if (local_60.SecondaryData != (ForElementType<unsigned_char>)0x0) {
      FMemory::Free((void *)local_60.SecondaryData);
    }
  }
  return;
}

