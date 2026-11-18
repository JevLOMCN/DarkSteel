// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// StaticStruct @ 14ad75d00

UScriptStruct * __cdecl FMetasoundFrontendNodeInterface::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendNodeInterface.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendNodeInterface.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendNodeInterface,(UObject *)pUVar1
                         ,L"MetasoundFrontendNodeInterface");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendNodeInterface.OuterSingleton;
}

// FMetasoundFrontendNodeInterface @ 14ad9b500

FMetasoundFrontendNodeInterface * __thiscall
FMetasoundFrontendNodeInterface::FMetasoundFrontendNodeInterface
          (FMetasoundFrontendNodeInterface *this,FMetasoundFrontendClassInterface *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FMetasoundFrontendNodeInterface *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  (this->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Outputs).ArrayNum = 0;
  (this->Outputs).ArrayMax = 0;
  (this->Environment).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Environment).ArrayNum = 0;
  (this->Environment).ArrayMax = 0;
  iVar1 = (param_1->Inputs).ArrayNum;
  pFVar10 = (param_1->Inputs).AllocatorInstance.Data;
  pFVar9 = pFVar10 + (longlong)iVar1 * 0x48;
  while( true ) {
    if ((param_1->Inputs).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar9) break;
    pFVar2 = (this->Inputs).AllocatorInstance.Data;
    if ((pFVar2 <= pFVar10) && (pFVar10 < pFVar2 + (longlong)(this->Inputs).ArrayMax * 0x20)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FMetasoundFrontendNodeInterface *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar7 = (this->Inputs).ArrayNum;
    if (iVar7 == (this->Inputs).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x420,(ForAnyElementType *)this,&(this->Inputs).ArrayMax);
    }
    (this->Inputs).ArrayNum = iVar7 + 1;
    uVar5 = *(undefined8 *)(pFVar10 + 8);
    pFVar3 = (this->Inputs).AllocatorInstance.Data;
    pFVar2 = pFVar3 + (longlong)iVar7 * 0x20;
    *(undefined8 *)pFVar2 = *(undefined8 *)pFVar10;
    *(undefined8 *)(pFVar2 + 8) = uVar5;
    pFVar2 = pFVar10 + 0x10;
    uVar5 = *(undefined8 *)(pFVar10 + 0x18);
    pFVar10 = pFVar10 + 0x48;
    pFVar3 = pFVar3 + (longlong)iVar7 * 0x20 + 0x10;
    *(undefined8 *)pFVar3 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar3 + 8) = uVar5;
  }
  iVar1 = (param_1->Outputs).ArrayNum;
  pFVar9 = (param_1->Outputs).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x34;
  while( true ) {
    if ((param_1->Outputs).ArrayNum != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendClassOutput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar9 == pFVar10) break;
    pFVar2 = (this->Outputs).AllocatorInstance.Data;
    if ((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + (longlong)(this->Outputs).ArrayMax * 0x20)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FMetasoundFrontendNodeInterface *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar7 = (this->Outputs).ArrayNum;
    if (iVar7 == (this->Outputs).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x420,&(this->Outputs).AllocatorInstance,&(this->Outputs).ArrayMax);
    }
    (this->Outputs).ArrayNum = iVar7 + 1;
    uVar5 = *(undefined8 *)(pFVar9 + 8);
    pFVar3 = (this->Outputs).AllocatorInstance.Data;
    pFVar2 = pFVar3 + (longlong)iVar7 * 0x20;
    *(undefined8 *)pFVar2 = *(undefined8 *)pFVar9;
    *(undefined8 *)(pFVar2 + 8) = uVar5;
    pFVar2 = pFVar9 + 0x10;
    uVar5 = *(undefined8 *)(pFVar9 + 0x18);
    pFVar9 = pFVar9 + 0x34;
    pFVar3 = pFVar3 + (longlong)iVar7 * 0x20 + 0x10;
    *(undefined8 *)pFVar3 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar3 + 8) = uVar5;
  }
  iVar1 = (param_1->Environment).ArrayNum;
  pFVar10 = (param_1->Environment).AllocatorInstance.Data;
  pFVar9 = pFVar10 + (longlong)iVar1 * 0x14;
  while( true ) {
    if ((param_1->Environment).ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendClassEnvironmentVariable_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar10 == pFVar9) break;
    pFVar2 = (this->Environment).AllocatorInstance.Data;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = *(undefined8 *)pFVar10;
    uStack_60 = *(undefined8 *)(pFVar10 + 8);
    if ((pFVar2 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        pFVar2 + (longlong)(this->Environment).ArrayMax * 0x20)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FMetasoundFrontendNodeInterface *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar7 = (this->Environment).ArrayNum;
    if (iVar7 == (this->Environment).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x420,&(this->Environment).AllocatorInstance,&(this->Environment).ArrayMax)
      ;
    }
    (this->Environment).ArrayNum = iVar7 + 1;
    pFVar3 = (this->Environment).AllocatorInstance.Data;
    pFVar10 = pFVar10 + 0x14;
    pFVar2 = pFVar3 + (longlong)iVar7 * 0x20;
    *(undefined8 *)pFVar2 = local_68;
    *(undefined8 *)(pFVar2 + 8) = uStack_60;
    pFVar3 = pFVar3 + (longlong)iVar7 * 0x20 + 0x10;
    *(undefined8 *)pFVar3 = local_58;
    *(undefined8 *)(pFVar3 + 8) = uStack_50;
  }
  return this;
}

// Update @ 14add33e0

bool __thiscall
FMetasoundFrontendNodeInterface::Update
          (FMetasoundFrontendNodeInterface *this,FMetasoundFrontendClassInterface *param_1)

{
  bool bVar1;
  undefined1 local_res18 [16];
  code *local_28;
  undefined1 *local_20;
  code *local_18;
  undefined1 *local_10;
  
  local_20 = local_res18;
  local_10 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMetasoundFrontendNodeInterface::Update'::__l2::<lambda_1>,void,FMetasoundFrontendVertex_const_&>
             ::Call;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMetasoundFrontendNodeInterface::Update'::__l2::<lambda_1>,void,FMetasoundFrontendVertex_const_&>
             ::Call;
  bVar1 = Update(this,param_1,
                 (TFunctionRef<void___cdecl(FMetasoundFrontendVertex_const_&)> *)&local_18,
                 (TFunctionRef<void___cdecl(FMetasoundFrontendVertex_const_&)> *)&local_28);
  return bVar1;
}

// Update @ 14add3420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMetasoundFrontendNodeInterface::Update
          (FMetasoundFrontendNodeInterface *this,FMetasoundFrontendClassInterface *param_1,
          TFunctionRef<void___cdecl(FMetasoundFrontendVertex_const_&)> *param_2,
          TFunctionRef<void___cdecl(FMetasoundFrontendVertex_const_&)> *param_3)

{
  int *piVar1;
  ForElementType<FMetasoundFrontendVertex_const_*> FVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  longlong lVar8;
  FMetasoundFrontendClassInterface *pFVar9;
  TFunctionRef<void___cdecl(FMetasoundFrontendVertex_const_&)> *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ForElementType<FMetasoundFrontendVertex_const_*> FVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  ForElementType<FMetasoundFrontendVertex_const_*> FVar19;
  FScriptContainerElement *pFVar20;
  ForElementType<FMetasoundFrontendVertex_const_*> FVar21;
  undefined1 auStackY_1d8 [32];
  bool local_188;
  undefined1 local_187;
  undefined1 local_186;
  undefined1 local_185;
  undefined1 local_184;
  undefined1 local_183;
  undefined1 local_182 [2];
  FScriptContainerElement *local_180;
  FScriptContainerElement *local_178;
  FMetasoundFrontendClassInterface *local_170;
  TFunctionRef<void___cdecl(FMetasoundFrontendVertex_const_&)> *local_168;
  TFunctionRef<void___cdecl(FMetasoundFrontendVertex_const_&)> *local_160;
  ForElementType<FMetasoundFrontendVertex_const_*> local_158;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  iVar15 = (this->Inputs).ArrayNum;
  local_188 = false;
  pFVar18 = (this->Inputs).AllocatorInstance.Data;
  pFVar20 = pFVar18 + (longlong)iVar15 * 0x20;
  local_158.SecondaryData = (ForElementType<FMetasoundFrontendVertex_const_*>)0x0;
  local_50 = 0;
  local_4c = 0x20;
  local_170 = param_1;
  local_168 = param_2;
  local_160 = param_3;
  while( true ) {
    if ((this->Inputs).ArrayNum != iVar15) {
      local_187 = 0;
      `TCheckedPointerIterator<FMetasoundFrontendVertex_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_187);
    }
    pFVar9 = local_170;
    if (pFVar18 == pFVar20) break;
    FVar16 = (ForElementType<FMetasoundFrontendVertex_const_*>)&local_158;
    if (local_158.SecondaryData != (ForElementType<FMetasoundFrontendVertex_const_*>)0x0) {
      FVar16 = local_158.SecondaryData;
    }
    local_180 = pFVar18;
    if ((ulonglong)FVar16 <= &local_180) {
      FVar16 = (ForElementType<FMetasoundFrontendVertex_const_*>)&local_158;
      if (local_158.SecondaryData != (ForElementType<FMetasoundFrontendVertex_const_*>)0x0) {
        FVar16 = local_158.SecondaryData;
      }
      if ((&local_180 < (FScriptContainerElement **)((longlong)FVar16 + (longlong)local_4c * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
    }
    iVar13 = local_50;
    if (local_50 == local_4c) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FMetasoundFrontendVertex_const_*>_>
                         (0x808,&local_158,&local_4c);
    }
    local_50 = iVar13 + 1;
    FVar16 = (ForElementType<FMetasoundFrontendVertex_const_*>)&local_158;
    if (local_158.SecondaryData != (ForElementType<FMetasoundFrontendVertex_const_*>)0x0) {
      FVar16 = local_158.SecondaryData;
    }
    pFVar18 = pFVar18 + 0x20;
    *(FScriptContainerElement **)((longlong)FVar16 + (longlong)iVar13 * 8) = local_180;
  }
  iVar15 = (local_170->Inputs).ArrayNum;
  pFVar20 = (local_170->Inputs).AllocatorInstance.Data;
  pFVar18 = pFVar20 + (longlong)iVar15 * 0x48;
  FVar16 = local_158.SecondaryData;
LAB_14add35d7:
  do {
    if ((pFVar9->Inputs).ArrayNum != iVar15) {
      local_186 = 0;
      `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_186);
      FVar16 = local_158.SecondaryData;
    }
    iVar13 = local_50;
    pTVar10 = local_168;
    if (pFVar20 == pFVar18) {
      FVar21 = (ForElementType<FMetasoundFrontendVertex_const_*>)&local_158;
      if (FVar16 != (ForElementType<FMetasoundFrontendVertex_const_*>)0x0) {
        FVar21 = FVar16;
      }
      FVar16 = (ForElementType<FMetasoundFrontendVertex_const_*>)
               ((longlong)FVar21 + (longlong)local_50 * 8);
      break;
    }
    FVar21 = (ForElementType<FMetasoundFrontendVertex_const_*>)&local_158;
    if (FVar16 != (ForElementType<FMetasoundFrontendVertex_const_*>)0x0) {
      FVar21 = FVar16;
    }
    FVar2 = (ForElementType<FMetasoundFrontendVertex_const_*>)
            ((longlong)FVar21 + (longlong)local_50 * 8);
    if (FVar21 != FVar2) {
      FVar19 = FVar21;
      do {
        if ((*(longlong *)pFVar20 == **(longlong **)FVar19) &&
           (*(longlong *)(pFVar20 + 8) == (*(longlong **)FVar19)[1])) {
          uVar17 = (uint)((longlong)FVar19 - (longlong)FVar21 >> 3);
          if (uVar17 != 0xffffffff) {
            uVar14 = 0;
            if ((int)(uVar17 + 1) <= local_50) {
              uVar14 = ~uVar17 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), FVar16 = local_158.SecondaryData, bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
            FVar21 = (ForElementType<FMetasoundFrontendVertex_const_*>)&local_158;
            if (FVar16 != (ForElementType<FMetasoundFrontendVertex_const_*>)0x0) {
              FVar21 = FVar16;
            }
            iVar13 = (local_50 - uVar17) + -1;
            if (1 < iVar13) {
              iVar13 = 1;
            }
            if (iVar13 != 0) {
              memmove((longlong *)((longlong)FVar21 + (longlong)(int)uVar17 * 8),
                      (longlong *)((longlong)FVar21 + (longlong)(local_50 - iVar13) * 8),
                      (longlong)iVar13 << 3);
              FVar16 = local_158.SecondaryData;
            }
            local_50 = local_50 + -1;
            pFVar20 = pFVar20 + 0x48;
            goto LAB_14add35d7;
          }
          break;
        }
        FVar19 = (ForElementType<FMetasoundFrontendVertex_const_*>)((longlong)FVar19 + 8);
      } while (FVar19 != FVar2);
    }
    pFVar4 = (this->Inputs).AllocatorInstance.Data;
    if (((pFVar4 <= pFVar20) && (pFVar20 < pFVar4 + (longlong)(this->Inputs).ArrayMax * 0x20)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      uVar12 = (*pcVar7)();
      return (bool)uVar12;
    }
    iVar13 = (this->Inputs).ArrayNum;
    piVar1 = &(this->Inputs).ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x420,(ForAnyElementType *)this,piVar1);
    }
    local_188 = true;
    (this->Inputs).ArrayNum = iVar13 + 1;
    lVar8 = *(longlong *)(pFVar20 + 8);
    pFVar5 = (this->Inputs).AllocatorInstance.Data;
    pFVar4 = pFVar5 + (longlong)iVar13 * 0x20;
    *(longlong *)pFVar4 = *(longlong *)pFVar20;
    *(longlong *)(pFVar4 + 8) = lVar8;
    pFVar4 = pFVar20 + 0x10;
    lVar8 = *(longlong *)(pFVar20 + 0x18);
    pFVar20 = pFVar20 + 0x48;
    pFVar5 = pFVar5 + (longlong)iVar13 * 0x20 + 0x10;
    *(longlong *)pFVar5 = *(longlong *)pFVar4;
    *(longlong *)(pFVar5 + 8) = lVar8;
    FVar16 = local_158.SecondaryData;
  } while( true );
LAB_14add37f0:
  if (local_50 != iVar13) {
    local_185 = 0;
    `TCheckedPointerIterator<FMetasoundFrontendVertex_const_*,int,0>::operator!='::__l2::<lambda_1>
    ::operator()(&local_185);
  }
  if (FVar21 == FVar16) {
    local_50 = 0;
    if ((local_4c < 0) && (local_4c != 0)) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FMetasoundFrontendVertex_const_*>_>
                (8,8,0,&local_158,0,&local_4c);
    }
    iVar15 = (this->Outputs).ArrayNum;
    pFVar18 = (this->Outputs).AllocatorInstance.Data;
    pFVar20 = pFVar18 + (longlong)iVar15 * 0x20;
    while( true ) {
      if ((this->Outputs).ArrayNum != iVar15) {
        local_184 = 0;
        `TCheckedPointerIterator<FMetasoundFrontendVertex_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_184);
      }
      if (pFVar18 == pFVar20) break;
      FVar16 = (ForElementType<FMetasoundFrontendVertex_const_*>)&local_158;
      if (local_158.SecondaryData != (ForElementType<FMetasoundFrontendVertex_const_*>)0x0) {
        FVar16 = local_158.SecondaryData;
      }
      local_178 = pFVar18;
      if ((ulonglong)FVar16 <= &local_178) {
        FVar16 = (ForElementType<FMetasoundFrontendVertex_const_*>)&local_158;
        if (local_158.SecondaryData != (ForElementType<FMetasoundFrontendVertex_const_*>)0x0) {
          FVar16 = local_158.SecondaryData;
        }
        if ((&local_178 < (FScriptContainerElement **)((longlong)FVar16 + (longlong)local_4c * 8))
           && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
      }
      iVar13 = local_50;
      if (local_50 == local_4c) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FMetasoundFrontendVertex_const_*>_>
                           (0x808,&local_158,&local_4c);
      }
      local_50 = iVar13 + 1;
      FVar16 = (ForElementType<FMetasoundFrontendVertex_const_*>)&local_158;
      if (local_158.SecondaryData != (ForElementType<FMetasoundFrontendVertex_const_*>)0x0) {
        FVar16 = local_158.SecondaryData;
      }
      pFVar18 = pFVar18 + 0x20;
      *(FScriptContainerElement **)((longlong)FVar16 + (longlong)iVar13 * 8) = local_178;
    }
    iVar15 = (local_170->Outputs).ArrayNum;
    pFVar18 = (local_170->Outputs).AllocatorInstance.Data;
    pFVar20 = pFVar18 + (longlong)iVar15 * 0x34;
    FVar16 = local_158.SecondaryData;
LAB_14add3b00:
    do {
      if ((local_170->Outputs).ArrayNum != iVar15) {
        local_183 = 0;
        `TCheckedPointerIterator<FMetasoundFrontendClassOutput_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_183);
        FVar16 = local_158.SecondaryData;
      }
      iVar13 = local_50;
      if (pFVar18 == pFVar20) {
        FVar21 = (ForElementType<FMetasoundFrontendVertex_const_*>)&local_158;
        if (FVar16 != (ForElementType<FMetasoundFrontendVertex_const_*>)0x0) {
          FVar21 = FVar16;
        }
        FVar16 = (ForElementType<FMetasoundFrontendVertex_const_*>)
                 ((longlong)FVar21 + (longlong)local_50 * 8);
        do {
          if (local_50 != iVar13) {
            local_182[0] = 0;
            `TCheckedPointerIterator<FMetasoundFrontendVertex_const_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_182);
          }
          if (FVar21 == FVar16) {
            if (local_158.SecondaryData != (ForElementType<FMetasoundFrontendVertex_const_*>)0x0) {
              FMemory::Free((void *)local_158.SecondaryData);
            }
            return local_188;
          }
          plVar6 = *(longlong **)FVar21;
          (**(code **)local_160)(*(undefined8 *)&local_160->field_0x8,plVar6);
          pFVar18 = (this->Outputs).AllocatorInstance.Data;
          iVar15 = (this->Outputs).ArrayNum;
          if (pFVar18 != pFVar18 + (longlong)iVar15 * 0x20) {
            pFVar20 = pFVar18;
            do {
              if (((*(longlong *)pFVar20 == *plVar6) && (*(longlong *)(pFVar20 + 8) == plVar6[1]))
                 && (((*(int *)(pFVar20 + 0x1c) == *(int *)((longlong)plVar6 + 0x1c) &&
                      *(int *)(pFVar20 + 0x14) == *(int *)((longlong)plVar6 + 0x14)) &&
                     *(int *)(pFVar20 + 0x18) == (int)plVar6[3]) &&
                     *(int *)(pFVar20 + 0x10) == (int)plVar6[2])) {
                uVar17 = (uint)((longlong)pFVar20 - (longlong)pFVar18 >> 5);
                if (uVar17 != 0xffffffff) {
                  uVar14 = 0;
                  if ((int)(uVar17 + 1) <= iVar15) {
                    uVar14 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x458,
                                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar7 = (code *)swi(3);
                    uVar12 = (*pcVar7)();
                    return (bool)uVar12;
                  }
                  iVar3 = (this->Outputs).ArrayNum;
                  pFVar18 = (this->Outputs).AllocatorInstance.Data;
                  iVar15 = ~uVar17 + iVar3;
                  if (1 < iVar15) {
                    iVar15 = 1;
                  }
                  if (iVar15 != 0) {
                    memmove(pFVar18 + (longlong)(int)uVar17 * 0x20,
                            pFVar18 + (longlong)(iVar3 - iVar15) * 0x20,(longlong)iVar15 << 5);
                  }
                  piVar1 = &(this->Outputs).ArrayNum;
                  *piVar1 = *piVar1 + -1;
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,4,&(this->Outputs).AllocatorInstance,(this->Outputs).ArrayNum,
                             &(this->Outputs).ArrayMax);
                }
                break;
              }
              pFVar20 = pFVar20 + 0x20;
            } while (pFVar20 != pFVar18 + (longlong)iVar15 * 0x20);
          }
          local_188 = true;
          FVar21 = (ForElementType<FMetasoundFrontendVertex_const_*>)((longlong)FVar21 + 8);
        } while( true );
      }
      FVar21 = (ForElementType<FMetasoundFrontendVertex_const_*>)&local_158;
      if (FVar16 != (ForElementType<FMetasoundFrontendVertex_const_*>)0x0) {
        FVar21 = FVar16;
      }
      FVar2 = (ForElementType<FMetasoundFrontendVertex_const_*>)
              ((longlong)FVar21 + (longlong)local_50 * 8);
      if (FVar21 != FVar2) {
        FVar19 = FVar21;
        do {
          if ((*(longlong *)pFVar18 == **(longlong **)FVar19) &&
             (*(longlong *)(pFVar18 + 8) == (*(longlong **)FVar19)[1])) {
            uVar17 = (uint)((longlong)FVar19 - (longlong)FVar21 >> 3);
            if (uVar17 != 0xffffffff) {
              uVar14 = 0;
              if ((int)(uVar17 + 1) <= local_50) {
                uVar14 = ~uVar17 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x458,
                                      L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                     ), FVar16 = local_158.SecondaryData, bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              FVar21 = (ForElementType<FMetasoundFrontendVertex_const_*>)&local_158;
              if (FVar16 != (ForElementType<FMetasoundFrontendVertex_const_*>)0x0) {
                FVar21 = FVar16;
              }
              iVar13 = (local_50 - uVar17) + -1;
              if (1 < iVar13) {
                iVar13 = 1;
              }
              if (iVar13 != 0) {
                memmove((longlong *)((longlong)FVar21 + (longlong)(int)uVar17 * 8),
                        (longlong *)((longlong)FVar21 + (longlong)(local_50 - iVar13) * 8),
                        (longlong)iVar13 << 3);
                FVar16 = local_158.SecondaryData;
              }
              local_50 = local_50 + -1;
              pFVar18 = pFVar18 + 0x34;
              goto LAB_14add3b00;
            }
            break;
          }
          FVar19 = (ForElementType<FMetasoundFrontendVertex_const_*>)((longlong)FVar19 + 8);
        } while (FVar19 != FVar2);
      }
      pFVar4 = (this->Outputs).AllocatorInstance.Data;
      if (((pFVar4 <= pFVar18) && (pFVar18 < pFVar4 + (longlong)(this->Outputs).ArrayMax * 0x20)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      iVar13 = (this->Outputs).ArrayNum;
      piVar1 = &(this->Outputs).ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x420,&(this->Outputs).AllocatorInstance,piVar1);
      }
      local_188 = true;
      (this->Outputs).ArrayNum = iVar13 + 1;
      lVar8 = *(longlong *)(pFVar18 + 8);
      pFVar5 = (this->Outputs).AllocatorInstance.Data;
      pFVar4 = pFVar5 + (longlong)iVar13 * 0x20;
      *(longlong *)pFVar4 = *(longlong *)pFVar18;
      *(longlong *)(pFVar4 + 8) = lVar8;
      pFVar4 = pFVar18 + 0x10;
      lVar8 = *(longlong *)(pFVar18 + 0x18);
      pFVar18 = pFVar18 + 0x34;
      pFVar5 = pFVar5 + (longlong)iVar13 * 0x20 + 0x10;
      *(longlong *)pFVar5 = *(longlong *)pFVar4;
      *(longlong *)(pFVar5 + 8) = lVar8;
      FVar16 = local_158.SecondaryData;
    } while( true );
  }
  plVar6 = *(longlong **)FVar21;
  (**(code **)pTVar10)(*(undefined8 *)&pTVar10->field_0x8,plVar6);
  pFVar18 = (this->Inputs).AllocatorInstance.Data;
  iVar15 = (this->Inputs).ArrayNum;
  if (pFVar18 == pFVar18 + (longlong)iVar15 * 0x20) {
LAB_14add394e:
    local_188 = true;
    FVar21 = (ForElementType<FMetasoundFrontendVertex_const_*>)((longlong)FVar21 + 8);
    goto LAB_14add37f0;
  }
  pFVar20 = pFVar18;
  do {
    if (((*(longlong *)pFVar20 == *plVar6) && (*(longlong *)(pFVar20 + 8) == plVar6[1])) &&
       (((*(int *)(pFVar20 + 0x18) == (int)plVar6[3] && *(int *)(pFVar20 + 0x10) == (int)plVar6[2])
        && *(int *)(pFVar20 + 0x1c) == *(int *)((longlong)plVar6 + 0x1c)) &&
        *(int *)(pFVar20 + 0x14) == *(int *)((longlong)plVar6 + 0x14))) {
      uVar17 = (uint)((longlong)pFVar20 - (longlong)pFVar18 >> 5);
      if (uVar17 != 0xffffffff) {
        uVar14 = 0;
        if ((int)(uVar17 + 1) <= iVar15) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        iVar3 = (this->Inputs).ArrayNum;
        pFVar18 = (this->Inputs).AllocatorInstance.Data;
        iVar15 = iVar3 + ~uVar17;
        if (1 < iVar15) {
          iVar15 = 1;
        }
        if (iVar15 != 0) {
          memmove(pFVar18 + (longlong)(int)uVar17 * 0x20,pFVar18 + (longlong)(iVar3 - iVar15) * 0x20
                  ,(longlong)iVar15 << 5);
        }
        piVar1 = &(this->Inputs).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,4,(ForAnyElementType *)this,(this->Inputs).ArrayNum,&(this->Inputs).ArrayMax
                  );
      }
      goto LAB_14add394e;
    }
    pFVar20 = pFVar20 + 0x20;
  } while (pFVar20 != pFVar18 + (longlong)iVar15 * 0x20);
  local_188 = true;
  FVar21 = (ForElementType<FMetasoundFrontendVertex_const_*>)((longlong)FVar21 + 8);
  goto LAB_14add37f0;
}

