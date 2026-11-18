// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FSelfRegisteringExec @ 1418559f0

FSelfRegisteringExec * __thiscall
FSelfRegisteringExec::FSelfRegisteringExec(FSelfRegisteringExec *this)

{
  ForElementType<FSelfRegisteringExec_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  FSelfRegisteringExec *pFVar5;
  ForElementType<FSelfRegisteringExec_*> FVar6;
  ForElementType<FSelfRegisteringExec_*> FVar7;
  FSelfRegisteringExec *local_18 [2];
  
  *this = (FSelfRegisteringExec)&___7FSelfRegisteringExec__6B_;
  lpCriticalSection = (LPCRITICAL_SECTION)GetExecRegistryLock();
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FSelfRegisteringExec *)(*pcVar2)();
    return pFVar5;
  }
  EnterCriticalSection(lpCriticalSection);
  FVar6 = (ForElementType<FSelfRegisteringExec_*>)GetExecRegistry();
  FVar1 = *(ForElementType<FSelfRegisteringExec_*> *)((longlong)FVar6 + 0x40);
  FVar7 = FVar6;
  if (FVar1 != (ForElementType<FSelfRegisteringExec_*>)0x0) {
    FVar7 = FVar1;
  }
  local_18[0] = this;
  if ((ulonglong)FVar7 <= local_18) {
    FVar7 = FVar6;
    if (FVar1 != (ForElementType<FSelfRegisteringExec_*>)0x0) {
      FVar7 = FVar1;
    }
    if ((local_18 <
         (FSelfRegisteringExec **)((longlong)FVar7 + (longlong)*(int *)((longlong)FVar6 + 0x4c) * 8)
        ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSelfRegisteringExec *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = *(int *)((longlong)FVar6 + 0x48);
  if (iVar4 == *(int *)((longlong)FVar6 + 0x4c)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSelfRegisteringExec_*>_>
                      (0x808,(ForElementType<FSelfRegisteringExec_*> *)FVar6,
                       (int *)((longlong)FVar6 + 0x4c));
  }
  *(int *)((longlong)FVar6 + 0x48) = iVar4 + 1;
  if (*(ForElementType<FSelfRegisteringExec_*> *)((longlong)FVar6 + 0x40) !=
      (ForElementType<FSelfRegisteringExec_*>)0x0) {
    FVar6 = *(ForElementType<FSelfRegisteringExec_*> *)((longlong)FVar6 + 0x40);
  }
  *(FSelfRegisteringExec **)((longlong)FVar6 + (longlong)iVar4 * 8) = local_18[0];
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return this;
}

// ~FSelfRegisteringExec @ 1418579f0

void __thiscall FSelfRegisteringExec::~FSelfRegisteringExec(FSelfRegisteringExec *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  ForElementType<FSelfRegisteringExec_*> FVar4;
  ForElementType<FSelfRegisteringExec_*> FVar5;
  FSelfRegisteringExec *pFVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  ForElementType<FSelfRegisteringExec_*> FVar11;
  FSelfRegisteringExec *local_48 [2];
  
  *this = (FSelfRegisteringExec)&___7FSelfRegisteringExec__6B_;
  lpCriticalSection = (LPCRITICAL_SECTION)GetExecRegistryLock();
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection(lpCriticalSection);
  FVar4 = (ForElementType<FSelfRegisteringExec_*>)GetExecRegistry();
  FVar11 = *(ForElementType<FSelfRegisteringExec_*> *)((longlong)FVar4 + 0x40);
  FVar5 = FVar4;
  if (FVar11 != (ForElementType<FSelfRegisteringExec_*>)0x0) {
    FVar5 = FVar11;
  }
  local_48[0] = this;
  if ((ulonglong)FVar5 <= local_48) {
    FVar5 = FVar4;
    if (FVar11 != (ForElementType<FSelfRegisteringExec_*>)0x0) {
      FVar5 = FVar11;
    }
    if ((local_48 <
         (FSelfRegisteringExec **)((longlong)FVar5 + (longlong)*(int *)((longlong)FVar4 + 0x4c) * 8)
        ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)((longlong)FVar4 + 0x48);
  if (iVar1 != 0) {
    FVar11 = FVar4;
    if (*(ForElementType<FSelfRegisteringExec_*> *)((longlong)FVar4 + 0x40) !=
        (ForElementType<FSelfRegisteringExec_*>)0x0) {
      FVar11 = *(ForElementType<FSelfRegisteringExec_*> *)((longlong)FVar4 + 0x40);
    }
    iVar10 = 0;
    bVar3 = *(FSelfRegisteringExec **)FVar11 != local_48[0];
    lVar9 = 0;
    pFVar6 = local_48[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar9 = lVar9 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar9) break;
      } while (bVar3 == (*(FSelfRegisteringExec **)((longlong)FVar11 + lVar9 * 8) != pFVar6));
      if (bVar3 != false) {
        if (iVar10 != iVar7) {
          memmove((longlong *)((longlong)FVar11 + (longlong)iVar10 * 8),
                  (longlong *)((longlong)FVar11 + (longlong)iVar7 * 8),
                  (longlong)(iVar8 - iVar7) << 3);
          pFVar6 = local_48[0];
        }
        iVar10 = iVar10 + (iVar8 - iVar7);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar7 = iVar8;
    } while (lVar9 < iVar1);
    *(int *)((longlong)FVar4 + 0x48) = iVar10;
    if (iVar1 - iVar10 == 1) goto LAB_141857c0f;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("GetExecRegistry().Remove( this ) == 1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\CoreMisc.cpp"
                     ,0x48,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_141857c0f:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  FExec::~FExec((FExec *)this);
  return;
}

// StaticExec @ 141892d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FSelfRegisteringExec::StaticExec(UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  int *piVar1;
  ForElementType<FSelfRegisteringExec_*> FVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  ForElementType<FSelfRegisteringExec_*> FVar8;
  undefined1 local_res20 [8];
  
  lpCriticalSection = (LPCRITICAL_SECTION)GetExecRegistryLock();
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  EnterCriticalSection(lpCriticalSection);
  FVar8 = (ForElementType<FSelfRegisteringExec_*>)GetExecRegistry();
  iVar3 = *(int *)((longlong)FVar8 + 0x48);
  piVar1 = (int *)((longlong)FVar8 + 0x48);
  if (*(ForElementType<FSelfRegisteringExec_*> *)((longlong)FVar8 + 0x40) !=
      (ForElementType<FSelfRegisteringExec_*>)0x0) {
    FVar8 = *(ForElementType<FSelfRegisteringExec_*> *)((longlong)FVar8 + 0x40);
  }
  FVar2 = (ForElementType<FSelfRegisteringExec_*>)((longlong)FVar8 + (longlong)iVar3 * 8);
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<FSelfRegisteringExec_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (FVar8 == FVar2) break;
    cVar7 = (**(code **)(**(longlong **)FVar8 + 8))(*(longlong **)FVar8,param_1,param_2,param_3);
    if (cVar7 != '\0') {
      bVar5 = true;
LAB_141892dc8:
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return bVar5;
    }
    FVar8 = (ForElementType<FSelfRegisteringExec_*>)((longlong)FVar8 + 8);
  }
  bVar5 = false;
  goto LAB_141892dc8;
}

