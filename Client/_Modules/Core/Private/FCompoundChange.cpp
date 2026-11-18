// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// Execute @ 141822b60

/* WARNING: Removing unreachable block (ram,0x000141822d8d) */

TUniquePtr<FChange,TDefaultDelete<FChange>_> __thiscall
FCompoundChange::Execute(FCompoundChange *this,UObject *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TUniquePtr<FChange,TDefaultDelete<FChange>_> TVar6;
  FScriptContainerElement *pFVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong *local_res8;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  uVar9 = (this->Input).Subchanges.ArrayNum;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (0 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,&local_50,0,(int *)((longlong)&local_48 + 4));
  }
  uVar9 = (this->Input).Subchanges.ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 * 8;
    do {
      uVar4 = 0;
      if ((int)uVar9 < (this->Input).Subchanges.ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        TVar6.Ptr = (FChange *)(*pcVar2)();
        return (TUniquePtr<FChange,TDefaultDelete<FChange>_>)TVar6.Ptr;
      }
      plVar1 = *(longlong **)((this->Input).Subchanges.AllocatorInstance.Data + lVar10);
      if (plVar1 != (longlong *)0x0) {
        pFVar7 = (FScriptContainerElement *)(**(code **)(*plVar1 + 8))(plVar1,&local_res8);
        if (((local_50.Data <= pFVar7) && (pFVar7 < local_50.Data + (longlong)local_48._4_4_ * 8))
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
          pcVar2 = (code *)swi(3);
          TVar6.Ptr = (FChange *)(*pcVar2)();
          return (TUniquePtr<FChange,TDefaultDelete<FChange>_>)TVar6.Ptr;
        }
        iVar5 = (int)local_48;
        if ((int)local_48 == local_48._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_50,(int *)((longlong)&local_48 + 4));
        }
        local_48 = CONCAT44(local_48._4_4_,iVar5 + 1);
        *(FChange **)(local_50.Data + (longlong)iVar5 * 8) = *(FChange **)pFVar7;
        *(FChange **)pFVar7 = (FChange *)0x0;
        if (local_res8 != (longlong *)0x0) {
          (**(code **)(*local_res8 + 0x48))(local_res8,1);
        }
      }
      lVar10 = lVar10 + -8;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  if ((int)local_48 < 1) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    puVar8 = ::operator_new(0x18);
    if (puVar8 == (undefined8 *)0x0) {
      *(undefined8 *)param_1 = 0;
    }
    else {
      *(undefined8 **)param_1 = puVar8;
      *puVar8 = &___7FCompoundChange__6B_;
      puVar8[1] = local_50.Data;
      local_50.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar8 + 2) = (int)local_48;
      *(int *)((longlong)puVar8 + 0x14) = local_48._4_4_;
      local_48 = 0;
    }
  }
  DestructItems<TUniquePtr<FChange,TDefaultDelete<FChange>_>,int>
            ((TUniquePtr<FChange,TDefaultDelete<FChange>_> *)local_50.Data,(int)local_48);
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return (TUniquePtr<FChange,TDefaultDelete<FChange>_>)(FChange *)param_1;
}

// PrintToLog @ 14182d980

void __thiscall
FCompoundChange::PrintToLog(FCompoundChange *this,FFeedbackContext *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (this->Input).Subchanges.ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 8;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Input).Subchanges.ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      plVar1 = *(longlong **)((this->Input).Subchanges.AllocatorInstance.Data + lVar6);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,param_1,param_2);
      }
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return;
}

// ToString @ 141838260

FString * __thiscall
FCompoundChange::ToString(FCompoundChange *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FString *pFVar7;
  undefined8 *puVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  FString local_48;
  void *local_38 [2];
  
  ::FString::FString(__return_storage_ptr__,L"Compound Change");
  iVar1 = (this->Input).Subchanges.ArrayNum;
  if (iVar1 < 1) {
    ::FString::AppendChars(__return_storage_ptr__,L" (empty)",8);
    return __return_storage_ptr__;
  }
  pFVar10 = (this->Input).Subchanges.AllocatorInstance.Data;
  pFVar2 = pFVar10 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Input).Subchanges.ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FChange,TDefaultDelete<FChange>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar2) break;
    pFVar10 = pFVar10 + 8;
  }
  ::FString::PrintfImpl(&local_48,L" (%i sub-change%s):");
  uVar11 = 0;
  uVar9 = local_48.Data.ArrayNum - 1;
  if (local_48.Data.ArrayNum == 0) {
    uVar9 = uVar11;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,uVar9);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  uVar9 = (this->Input).Subchanges.ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar12 = (longlong)(int)uVar9 * 8;
    do {
      uVar6 = uVar11;
      if ((int)uVar9 < (this->Input).Subchanges.ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar4)();
        return pFVar7;
      }
      pFVar2 = (this->Input).Subchanges.AllocatorInstance.Data;
      if (*(longlong *)(pFVar2 + lVar12) != 0) {
        ::FString::AppendChars(__return_storage_ptr__,L"\n\t",2);
        plVar3 = *(longlong **)(pFVar2 + lVar12);
        puVar8 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,local_38);
        uVar6 = *(int *)(puVar8 + 1) - 1;
        if (*(int *)(puVar8 + 1) == 0) {
          uVar6 = uVar11;
        }
        ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)*puVar8,uVar6);
        if (local_38[0] != (void *)0x0) {
          FMemory::Free(local_38[0]);
        }
      }
      lVar12 = lVar12 + -8;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return __return_storage_ptr__;
}

