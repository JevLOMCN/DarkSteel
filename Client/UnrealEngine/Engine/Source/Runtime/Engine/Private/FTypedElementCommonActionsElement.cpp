// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FTypedElementCommonActionsElement @ 147b39f60

FTypedElementCommonActionsElement * __thiscall
FTypedElementCommonActionsElement::FTypedElementCommonActionsElement
          (FTypedElementCommonActionsElement *this,
          TTypedElement<ITypedElementWorldInterface> *param_1,
          FTypedElementCommonActionsCustomization *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  LONG LVar8;
  FTypedElementCommonActionsElement *pFVar9;
  HANDLE *ppvVar10;
  undefined4 *puVar11;
  uint uVar12;
  
  *(undefined8 *)&this->ElementWorldHandle = *(undefined8 *)param_1;
  *(undefined4 *)&(this->ElementWorldHandle).field_0x8 = *(undefined4 *)&param_1->field_0x8;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)&param_1->field_0x8 = 0xffffffff;
  *(undefined8 *)&(this->ElementWorldHandle).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&param_1->field_0x10 = 0;
  this->CommonActionsCustomization = param_2;
  lVar3 = *(longlong *)param_1;
  if (lVar3 != 0) {
    iVar2 = *(int *)&param_1->field_0x8;
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + -1;
    UNLOCK();
    lpCriticalSection = *(LPCRITICAL_SECTION *)(lVar3 + 0x10);
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (iVar2 != -1)) {
      EnterCriticalSection(lpCriticalSection);
      p_Var4 = lpCriticalSection[1].DebugInfo;
      bVar6 = (byte)iVar2 & 0x1f;
      uVar12 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if (((iVar2 < 0) || (*(int *)&lpCriticalSection[2].DebugInfo <= iVar2)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FTypedElementCommonActionsElement *)(*pcVar5)();
        return pFVar9;
      }
      lVar3 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4;
      ppvVar10 = (HANDLE *)lpCriticalSection[1].SpinCount;
      if ((HANDLE *)lpCriticalSection[1].SpinCount == (HANDLE *)0x0) {
        ppvVar10 = &lpCriticalSection[1].OwningThread;
      }
      if (((*(uint *)((longlong)ppvVar10 + lVar3) & uVar12) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FTypedElementCommonActionsElement *)(*pcVar5)();
        return pFVar9;
      }
      if (lpCriticalSection[2].RecursionCount != 0) {
        *(int *)((longlong)lpCriticalSection[2].LockCount * 0x108 + (longlong)p_Var4) = iVar2;
      }
      puVar11 = (undefined4 *)((longlong)iVar2 * 0x108 + (longlong)p_Var4);
      *puVar11 = 0xffffffff;
      if (lpCriticalSection[2].RecursionCount < 1) {
        LVar8 = -1;
      }
      else {
        LVar8 = lpCriticalSection[2].LockCount;
      }
      puVar11[1] = LVar8;
      lpCriticalSection[2].RecursionCount = lpCriticalSection[2].RecursionCount + 1;
      lpCriticalSection[2].LockCount = iVar2;
      if (((iVar2 < 0) || (*(int *)&lpCriticalSection[2].DebugInfo <= iVar2)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FTypedElementCommonActionsElement *)(*pcVar5)();
        return pFVar9;
      }
      ppvVar10 = (HANDLE *)lpCriticalSection[1].SpinCount;
      if ((HANDLE *)lpCriticalSection[1].SpinCount == (HANDLE *)0x0) {
        ppvVar10 = &lpCriticalSection[1].OwningThread;
      }
      puVar1 = (uint *)((longlong)ppvVar10 + lVar3);
      *puVar1 = *puVar1 & ~uVar12;
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  *(undefined8 *)&param_1->field_0x10 = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)&param_1->field_0x8 = 0xffffffff;
  return this;
}

