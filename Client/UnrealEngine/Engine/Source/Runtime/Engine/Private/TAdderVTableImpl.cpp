// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// AddConstRef @ 147a0ce60

void __cdecl
UE::Core::Private::
TAdderVTableImpl<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
::AddConstRef(void *param_1,FRichCurveEditInfoTemplate<FRealCurve_const_*> *param_2)

{
  FName *pFVar1;
  FRichCurveEditInfoTemplate<FRealCurve_const_*> *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  FRichCurveEditInfoTemplate<FRealCurve_const_*> *pFVar7;
  
  pFVar2 = *(FRichCurveEditInfoTemplate<FRealCurve_const_*> **)((longlong)param_1 + 0x100);
  pFVar7 = param_1;
  if (pFVar2 != (FRichCurveEditInfoTemplate<FRealCurve_const_*> *)0x0) {
    pFVar7 = pFVar2;
  }
  if (pFVar7 <= param_2) {
    pFVar7 = param_1;
    if (pFVar2 != (FRichCurveEditInfoTemplate<FRealCurve_const_*> *)0x0) {
      pFVar7 = pFVar2;
    }
    if ((param_2 < pFVar7 + *(int *)((longlong)param_1 + 0x10c)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *(int *)((longlong)param_1 + 0x108);
  if (iVar6 == *(int *)((longlong)param_1 + 0x10c)) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FRichCurveEditInfoTemplate<FRealCurve_const_*>_>_>
                      (0x810,param_1,(int *)((longlong)param_1 + 0x10c));
  }
  *(int *)((longlong)param_1 + 0x108) = iVar6 + 1;
  FVar4 = (FName)param_2->CurveToEdit;
  if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
    param_1 = *(void **)((longlong)param_1 + 0x100);
  }
  pFVar1 = (FName *)((longlong)param_1 + (longlong)iVar6 * 0x10);
  *pFVar1 = param_2->CurveName;
  pFVar1[1] = FVar4;
  return;
}

// AddRValueRef @ 147a0cf50

void __cdecl
UE::Core::Private::
TAdderVTableImpl<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
::AddRValueRef(void *param_1,FRichCurveEditInfoTemplate<FRealCurve_const_*> *param_2)

{
  FName *pFVar1;
  FRichCurveEditInfoTemplate<FRealCurve_const_*> *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  FRichCurveEditInfoTemplate<FRealCurve_const_*> *pFVar7;
  
  pFVar2 = *(FRichCurveEditInfoTemplate<FRealCurve_const_*> **)((longlong)param_1 + 0x100);
  pFVar7 = param_1;
  if (pFVar2 != (FRichCurveEditInfoTemplate<FRealCurve_const_*> *)0x0) {
    pFVar7 = pFVar2;
  }
  if (pFVar7 <= param_2) {
    pFVar7 = param_1;
    if (pFVar2 != (FRichCurveEditInfoTemplate<FRealCurve_const_*> *)0x0) {
      pFVar7 = pFVar2;
    }
    if ((param_2 < pFVar7 + *(int *)((longlong)param_1 + 0x10c)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *(int *)((longlong)param_1 + 0x108);
  if (iVar6 == *(int *)((longlong)param_1 + 0x10c)) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FRichCurveEditInfoTemplate<FRealCurve_const_*>_>_>
                      (0x810,param_1,(int *)((longlong)param_1 + 0x10c));
  }
  *(int *)((longlong)param_1 + 0x108) = iVar6 + 1;
  FVar4 = (FName)param_2->CurveToEdit;
  if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
    param_1 = *(void **)((longlong)param_1 + 0x100);
  }
  pFVar1 = (FName *)((longlong)param_1 + (longlong)iVar6 * 0x10);
  *pFVar1 = param_2->CurveName;
  pFVar1[1] = FVar4;
  return;
}

