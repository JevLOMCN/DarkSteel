// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticStruct @ 149c96630

UScriptStruct * __cdecl FPCGStackContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGStackContext.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGStackContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGStackContext,(UObject *)pUVar1,
                         L"PCGStackContext");
  }
  return Z_Registration_Info_UScriptStruct_FPCGStackContext.OuterSingleton;
}

// FPCGStackContext @ 149ca3e10

FPCGStackContext * __thiscall
FPCGStackContext::FPCGStackContext(FPCGStackContext *this,FPCGStackContext *param_1)

{
  TArray<FPCGStack,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FPCGStack *pFVar4;
  
  pTVar1 = &this->Stacks;
  this->GraphExecutionTaskId = param_1->GraphExecutionTaskId;
  piVar2 = &(this->Stacks).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Stacks).ArrayNum;
  pFVar4 = (FPCGStack *)(param_1->Stacks).AllocatorInstance.Data;
  (this->Stacks).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FPCGStack,FPCGStack,int>((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  this->CurrentStackIndex = param_1->CurrentStackIndex;
  return this;
}

// FPCGStackContext @ 149ca3eb0

FPCGStackContext * __thiscall
FPCGStackContext::FPCGStackContext
          (FPCGStackContext *this,FPCGStackContext *param_1,FPCGStack *param_2)

{
  TArray<FPCGStack,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FPCGStackContext *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  
  this->GraphExecutionTaskId = 0xffffffffffffffff;
  pTVar1 = &this->Stacks;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Stacks).ArrayNum = 0;
  (this->Stacks).ArrayMax = 0;
  this->CurrentStackIndex = -1;
  uVar12 = (param_1->Stacks).ArrayNum;
  iVar2 = (param_2->StackFrames).ArrayNum;
  if ((int)uVar12 < 1) {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
  }
  else {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,uVar12,&pTVar1->AllocatorInstance,&(this->Stacks).ArrayNum,
                       &(this->Stacks).ArrayMax);
    DefaultConstructItems<FPCGStack,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x18,uVar12);
  }
  uVar12 = 0;
  if (0 < (this->Stacks).ArrayNum) {
    lVar13 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->Stacks).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FPCGStackContext *)(*pcVar3)();
        return pFVar7;
      }
      pFVar11 = (this->Stacks).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar12 < (param_1->Stacks).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FPCGStackContext *)(*pcVar3)();
        return pFVar7;
      }
      pFVar10 = (param_1->Stacks).AllocatorInstance.Data;
      pFVar9 = pFVar11 + lVar13 + 8;
      uVar8 = iVar2 + *(int *)(pFVar10 + lVar13 + 0x10);
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if (*(int *)(pFVar9 + 0xc) < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,uVar8,(ForAnyElementType *)pFVar9,*(int *)&pFVar9[8].field_0x0,
                   (int *)(pFVar9 + 0xc));
      }
      if (((TArray<FPCGStackFrame,TSizedDefaultAllocator<32>_> *)pFVar9 == &param_2->StackFrames) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FPCGStackContext *)(*pcVar3)();
        return pFVar7;
      }
      iVar5 = (param_2->StackFrames).ArrayNum;
      if (iVar5 != 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x30,8,iVar5,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 8),
                           (int *)(pFVar9 + 0xc));
        ConstructItems<FPCGStackFrame,FPCGStackFrame,int>
                  ((void *)(*(longlong *)&pFVar9->field_0x0 + (longlong)iVar6 * 0x30),
                   (FPCGStackFrame *)(param_2->StackFrames).AllocatorInstance.Data,iVar5);
      }
      pFVar11 = pFVar11 + lVar13 + 8;
      pFVar10 = pFVar10 + lVar13 + 8;
      if ((pFVar11 == pFVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FPCGStackContext *)(*pcVar3)();
        return pFVar7;
      }
      iVar5 = *(int *)&pFVar10[8].field_0x0;
      if (iVar5 != 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x30,8,iVar5,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 8),
                           (int *)(pFVar11 + 0xc));
        ConstructItems<FPCGStackFrame,FPCGStackFrame,int>
                  ((void *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar6 * 0x30),
                   *(FPCGStackFrame **)&pFVar10->field_0x0,iVar5);
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x18;
    } while ((int)uVar12 < (this->Stacks).ArrayNum);
  }
  return this;
}

// operator= @ 149ca6cc0

FPCGStackContext * __thiscall
FPCGStackContext::operator=(FPCGStackContext *this,FPCGStackContext *param_1)

{
  TArray<FPCGStack,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FPCGStack *pFVar4;
  
  pTVar1 = &this->Stacks;
  this->GraphExecutionTaskId = param_1->GraphExecutionTaskId;
  if (pTVar1 != &param_1->Stacks) {
    DestructItems<FPCGStack,int>
              ((FPCGStack *)(pTVar1->AllocatorInstance).Data,(this->Stacks).ArrayNum);
    iVar3 = (param_1->Stacks).ArrayNum;
    piVar2 = &(this->Stacks).ArrayMax;
    pFVar4 = (FPCGStack *)(param_1->Stacks).AllocatorInstance.Data;
    (this->Stacks).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FPCGStack,FPCGStack,int>((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  this->CurrentStackIndex = param_1->CurrentStackIndex;
  return this;
}

// operator== @ 149ca6f40

bool __thiscall FPCGStackContext::operator==(FPCGStackContext *this,FPCGStackContext *param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((this->CurrentStackIndex == param_1->CurrentStackIndex) &&
     (iVar1 = (this->Stacks).ArrayNum, iVar1 == (param_1->Stacks).ArrayNum)) {
    bVar2 = CompareItems<FPCGStack,int>
                      ((FPCGStack *)(this->Stacks).AllocatorInstance.Data,
                       (FPCGStack *)(param_1->Stacks).AllocatorInstance.Data,iVar1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// operator() @ 149ca7900

bool __thiscall
`FPCGStackContext::PopFrame'::__l2::<lambda_1>::operator()(void *this,FPCGStack *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  iVar9 = *(int *)(*(longlong *)this + 0x10) + -1;
  if ((param_1->StackFrames).ArrayNum == iVar9) {
    uVar7 = 0;
    if (0 < iVar9) {
      lVar8 = 0;
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar7 < (param_1->StackFrames).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        lVar1 = *(longlong *)this;
        pFVar2 = (param_1->StackFrames).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar7 < *(int *)(lVar1 + 0x10)) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        lVar1 = *(longlong *)(lVar1 + 8);
        bVar4 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)(pFVar2 + lVar10 + 8),
                           (FSoftObjectPath *)(lVar1 + 8 + lVar10));
        if ((!bVar4) || (*(int *)(pFVar2 + lVar10 + 0x28) != *(int *)(lVar1 + 0x28 + lVar10)))
        goto LAB_149ca7a24;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 1;
        lVar10 = lVar10 + 0x30;
      } while (lVar8 < iVar9);
    }
    bVar4 = true;
  }
  else {
LAB_149ca7a24:
    bVar4 = false;
  }
  return bVar4;
}

// AppendStacks @ 149cac320

void __thiscall FPCGStackContext::AppendStacks(FPCGStackContext *this,FPCGStackContext *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  FPCGStackContext *local_res10;
  uint local_res18;
  FScriptContainerElement *local_res20;
  
  local_res10 = param_1;
  if ((this->CurrentStackIndex < 0) || ((this->Stacks).ArrayNum <= this->CurrentStackIndex)) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6828661919449088396>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGStackContext.cpp"
                       ,0x18c,"Stacks.IsValidIndex(CurrentStackIndex)");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    local_res18 = (param_1->Stacks).ArrayNum;
    uVar12 = (ulonglong)(int)local_res18;
    pFVar14 = (param_1->Stacks).AllocatorInstance.Data;
    local_res20 = pFVar14 + uVar12 * 0x18;
    pFVar13 = pFVar14 + 8;
    while( true ) {
      pFVar2 = local_res20;
      if ((local_res10->Stacks).ArrayNum != (int)uVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FPCGStack_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar14 == pFVar2) break;
      iVar8 = (this->Stacks).ArrayNum;
      piVar1 = &(this->Stacks).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(this->Stacks).AllocatorInstance,piVar1);
      }
      (this->Stacks).ArrayNum = iVar8 + 1;
      pFVar5 = (this->Stacks).AllocatorInstance.Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar8 * 0x18) = 0xffffffffffffffff;
      pFVar5 = pFVar5 + (longlong)iVar8 * 0x18;
      *(undefined8 *)(pFVar5 + 8) = 0;
      pFVar2 = pFVar5 + 8;
      *(undefined4 *)(pFVar5 + 0x10) = 0;
      *(undefined4 *)(pFVar5 + 0x14) = 0;
      pFVar3 = pFVar5 + 0x14;
      *(ulong64 *)pFVar5 = this->GraphExecutionTaskId;
      uVar11 = this->CurrentStackIndex;
      uVar9 = 0;
      if ((int)uVar11 < (this->Stacks).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
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
      uVar11 = *(int *)((this->Stacks).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x18 + 0x10)
               + *(int *)&pFVar13[8].field_0x0;
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      if (*(int *)(pFVar5 + 0x14) < (int)uVar11) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,uVar11,(ForAnyElementType *)pFVar2,*(int *)(pFVar5 + 0x10),(int *)pFVar3);
      }
      uVar11 = this->CurrentStackIndex;
      uVar9 = 0;
      if ((int)uVar11 < (this->Stacks).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
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
      pFVar4 = (this->Stacks).AllocatorInstance.Data + ((longlong)(int)uVar11 * 3 + 1) * 8;
      if ((pFVar2 == pFVar4) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = *(int *)&pFVar4[8].field_0x0;
      if (iVar8 != 0) {
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x30,8,iVar8,(ForAnyElementType *)pFVar2,(int *)(pFVar5 + 0x10),
                            (int *)pFVar3);
        ConstructItems<FPCGStackFrame,FPCGStackFrame,int>
                  (*(FScriptContainerElement **)&pFVar2->field_0x0 + (longlong)iVar10 * 0x30,
                   *(FPCGStackFrame **)&pFVar4->field_0x0,iVar8);
      }
      if ((pFVar2 == pFVar13) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = *(int *)&pFVar13[8].field_0x0;
      if (iVar8 != 0) {
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x30,8,iVar8,(ForAnyElementType *)pFVar2,(int *)(pFVar5 + 0x10),
                            (int *)pFVar3);
        ConstructItems<FPCGStackFrame,FPCGStackFrame,int>
                  (*(FScriptContainerElement **)&pFVar2->field_0x0 + (longlong)iVar10 * 0x30,
                   *(FPCGStackFrame **)&pFVar13->field_0x0,iVar8);
      }
      pFVar14 = pFVar14 + 0x18;
      uVar12 = (ulonglong)local_res18;
      pFVar13 = pFVar13 + 0x18;
    }
  }
  return;
}

// GetStack @ 149ccc410

FPCGStack * __thiscall FPCGStackContext::GetStack(FPCGStackContext *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPCGStack *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Stacks).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->Stacks).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPCGStack *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FPCGStack *)((this->Stacks).AllocatorInstance.Data + (longlong)param_1 * 0x18);
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6828661919449088040>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGStackContext.cpp"
                     ,0x28,"Stacks.IsValidIndex(InStackIndex)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FPCGStack *)(*pcVar1)();
    return pFVar4;
  }
  return (FPCGStack *)0x0;
}

// PopFrame @ 149cce670

int __thiscall FPCGStackContext::PopFrame(FPCGStackContext *this)

{
  uint uVar1;
  FPCGStack *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FPCGStack *pFVar7;
  FPCGStack *local_res8;
  
  uVar1 = this->CurrentStackIndex;
  if (((int)uVar1 < 0) || ((this->Stacks).ArrayNum <= (int)uVar1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6828661919449088365>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGStackContext.cpp"
                       ,0x16d,"Stacks.IsValidIndex(CurrentStackIndex)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    return -1;
  }
  uVar5 = 0;
  if ((int)uVar1 < (this->Stacks).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  pFVar2 = (FPCGStack *)(this->Stacks).AllocatorInstance.Data;
  local_res8 = pFVar2 + (int)uVar1;
  iVar6 = (this->Stacks).ArrayNum;
  pFVar7 = pFVar2;
  do {
    if (pFVar7 == pFVar2 + iVar6) {
      this->CurrentStackIndex = -1;
LAB_149cce731:
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6828661919449088389>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGStackContext.cpp"
                         ,0x185,"CurrentStackIndex != INDEX_NONE");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
LAB_149cce75e:
      return this->CurrentStackIndex;
    }
    bVar4 = `FPCGStackContext::PopFrame'::__l2::<lambda_1>::operator()(&local_res8,pFVar7);
    if (bVar4) {
      iVar6 = (int)(((longlong)pFVar7 - (longlong)pFVar2) / 0x18);
      this->CurrentStackIndex = iVar6;
      if (iVar6 != -1) goto LAB_149cce75e;
      goto LAB_149cce731;
    }
    pFVar7 = pFVar7 + 1;
  } while( true );
}

// PrependParentStack @ 149cd0670

void __thiscall FPCGStackContext::PrependParentStack(FPCGStackContext *this,FPCGStack *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  if ((param_1 != (FPCGStack *)0x0) && ((param_1->StackFrames).ArrayNum != 0)) {
    iVar2 = (this->Stacks).ArrayNum;
    pFVar8 = (this->Stacks).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)iVar2 * 0x18;
    pFVar7 = pFVar8 + 8;
    while( true ) {
      if ((this->Stacks).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FPCGStack,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar8 == pFVar1) break;
      if (((TArray<FPCGStackFrame,TSizedDefaultAllocator<32>_> *)pFVar7 == &param_1->StackFrames) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(const void*)this != (const void*)&Items",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x767,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar3 = (param_1->StackFrames).ArrayNum;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,iVar3,(ForAnyElementType *)pFVar7,(int *)(pFVar7 + 8),
                         (int *)(pFVar7 + 0xc));
      memmove((void *)((longlong)*(void **)&pFVar7->field_0x0 + (longlong)iVar3 * 0x30),
              *(void **)&pFVar7->field_0x0,(longlong)iVar6 * 0x30);
      ConstructItems<FPCGStackFrame,FPCGStackFrame,int>
                (*(void **)&pFVar7->field_0x0,
                 (FPCGStackFrame *)(param_1->StackFrames).AllocatorInstance.Data,iVar3);
      pFVar8 = pFVar8 + 0x18;
      pFVar7 = pFVar7 + 0x18;
    }
  }
  return;
}

// PushFrame @ 149cd1aa0

int __thiscall FPCGStackContext::PushFrame(FPCGStackContext *this,UObject *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FPCGStackFrame *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FPCGStack local_68;
  undefined1 local_50 [56];
  
  uVar2 = this->CurrentStackIndex;
  lVar9 = (longlong)(int)uVar2;
  if (uVar2 == 0xffffffff) {
    iVar5 = (this->Stacks).ArrayNum;
    piVar1 = &(this->Stacks).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->Stacks).AllocatorInstance,piVar1);
    }
    (this->Stacks).ArrayNum = iVar5 + 1;
    lVar9 = (longlong)iVar5;
    pFVar10 = (this->Stacks).AllocatorInstance.Data;
    *(undefined8 *)(pFVar10 + lVar9 * 0x18 + 8) = 0;
    iVar5 = 0;
    *(undefined4 *)(pFVar10 + lVar9 * 0x18 + 0x10) = 0;
    *(undefined8 *)(pFVar10 + lVar9 * 0x18) = 0xffffffffffffffff;
    *(int *)(pFVar10 + lVar9 * 0x18 + 0x14) = 0;
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)(pFVar10 + lVar9 * 0x18 + 8),
                       (int *)(pFVar10 + lVar9 * 0x18 + 0x14));
    *(int *)(pFVar10 + lVar9 * 0x18 + 0x10) = iVar6 + 1;
    FPCGStackFrame::FPCGStackFrame
              ((FPCGStackFrame *)
               ((longlong)iVar6 * 0x30 + *(longlong *)(pFVar10 + lVar9 * 0x18 + 8)),param_1);
    this->CurrentStackIndex = 0;
  }
  else if (((int)uVar2 < 0) || ((this->Stacks).ArrayNum <= (int)uVar2)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6828661919449088347>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGStackContext.cpp"
                       ,0x15b,"Stacks.IsValidIndex(CurrentStackIndex)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    iVar5 = -1;
  }
  else {
    uVar7 = 0;
    if ((int)uVar2 < (this->Stacks).ArrayNum) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    pFVar10 = (this->Stacks).AllocatorInstance.Data;
    local_68.GraphExecutionTaskId = *(ulong64 *)(pFVar10 + lVar9 * 0x18);
    local_68.StackFrames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar5 = *(int *)(pFVar10 + lVar9 * 0x18 + 0x10);
    pFVar8 = *(FPCGStackFrame **)(pFVar10 + lVar9 * 0x18 + 8);
    local_68.StackFrames.ArrayNum = iVar5;
    if (iVar5 == 0) {
      local_68.StackFrames.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar5,0,&local_68.StackFrames.AllocatorInstance,iVar5,
                 &local_68.StackFrames.ArrayMax);
      ConstructItems<FPCGStackFrame,FPCGStackFrame,int>
                (local_68.StackFrames.AllocatorInstance.Data,pFVar8,iVar5);
    }
    pFVar8 = FPCGStackFrame::FPCGStackFrame((FPCGStackFrame *)local_50,param_1);
    if ((local_68.StackFrames.AllocatorInstance.Data <= pFVar8) &&
       (pFVar8 < (FPCGStackFrame *)
                 (local_68.StackFrames.AllocatorInstance.Data +
                 (longlong)local_68.StackFrames.ArrayMax * 0x30))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    if (local_68.StackFrames.ArrayNum == local_68.StackFrames.ArrayMax) {
      local_68.StackFrames.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x830,&local_68.StackFrames.AllocatorInstance,&local_68.StackFrames.ArrayMax);
    }
    pFVar10 = local_68.StackFrames.AllocatorInstance.Data +
              (longlong)local_68.StackFrames.ArrayNum * 0x30;
    *(undefined8 *)&pFVar10->field_0x0 = *(undefined8 *)&(pFVar8->Object).SoftObjectPtr;
    local_68.StackFrames.ArrayNum = local_68.StackFrames.ArrayNum + 1;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(pFVar10 + 8),
               (FSoftObjectPath *)&(pFVar8->Object).SoftObjectPtr.field_0x8);
    *(int *)(pFVar10 + 0x28) = pFVar8->LoopIndex;
    *(uint *)(pFVar10 + 0x2c) = pFVar8->Hash;
    if ((void *)local_50._24_8_ != (void *)0x0) {
      FMemory::Free((void *)local_50._24_8_);
    }
    iVar5 = TArray<FPCGStack,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPCGStack>
                      (&this->Stacks,&local_68);
    this->CurrentStackIndex = iVar5;
    DestructItems<FPCGStackFrame,int>
              ((FPCGStackFrame *)local_68.StackFrames.AllocatorInstance.Data,
               local_68.StackFrames.ArrayNum);
    if ((FPCGStackFrame *)local_68.StackFrames.AllocatorInstance.Data != (FPCGStackFrame *)0x0) {
      FMemory::Free(local_68.StackFrames.AllocatorInstance.Data);
    }
    iVar5 = this->CurrentStackIndex;
  }
  return iVar5;
}

// SetGraphExecutionTaskId @ 149cdc8a0

void __thiscall FPCGStackContext::SetGraphExecutionTaskId(FPCGStackContext *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  if (this->GraphExecutionTaskId != 0xffffffffffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphExecutionTaskId == InvalidPCGTaskId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGStackContext.cpp"
                       ,0x1b0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->GraphExecutionTaskId = param_1;
  iVar2 = (this->Stacks).ArrayNum;
  pFVar5 = (this->Stacks).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->Stacks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPCGStack,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar1) break;
    *(ulong64 *)pFVar5 = this->GraphExecutionTaskId;
    pFVar5 = pFVar5 + 0x18;
  }
  return;
}

