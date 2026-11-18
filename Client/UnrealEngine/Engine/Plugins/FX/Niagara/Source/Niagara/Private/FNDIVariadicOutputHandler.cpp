// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNDIVariadicOutputHandler<16> @ 148e53110

FNDIVariadicOutputHandler<16> * __thiscall
FNDIVariadicOutputHandler<16>::FNDIVariadicOutputHandler<16>
          (FNDIVariadicOutputHandler<16> *this,FVectorVMExternalFunctionContext *param_1,
          FNDIDataChannel_FunctionToDataSetBinding *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<VectorVM::FExternalFuncRegisterHandler<int>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  TArray<VectorVM::FExternalFuncRegisterHandler<FFloat16>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_> FVar5;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_> FVar6;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_> FVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FNDIVariadicOutputHandler<16> *pFVar12;
  float *pfVar13;
  ulonglong uVar14;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_> FVar15;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_> FVar16;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_> FVar17;
  int *piVar18;
  longlong *plVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res8 [8];
  FVectorVMExternalFunctionContext *local_res10;
  uint local_res18;
  FScriptContainerElement *local_res20;
  
  (this->FloatOutputs).AllocatorInstance.SecondaryData =
       (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)0x0;
  piVar18 = &(this->FloatOutputs).ArrayMax;
  *piVar18 = 0x10;
  piVar1 = &(this->IntOutputs).ArrayMax;
  (this->FloatOutputs).ArrayNum = 0;
  piVar2 = &(this->HalfOutputs).ArrayMax;
  (this->IntOutputs).AllocatorInstance.SecondaryData =
       (ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>)0x0;
  (this->IntOutputs).ArrayNum = 0;
  *piVar1 = 0x10;
  (this->HalfOutputs).AllocatorInstance.SecondaryData =
       (ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_>)0x0;
  (this->HalfOutputs).ArrayNum = 0;
  *piVar2 = 0x10;
  if (param_2 != (FNDIDataChannel_FunctionToDataSetBinding *)0x0) {
    uVar10 = param_2->NumFloatComponents;
    local_res10 = param_1;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if (0x10 < (int)uVar10) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>_>
                (0x10,8,uVar10,
                 (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_> *)this,0,piVar18);
    }
    uVar10 = param_2->NumInt32Components;
    pTVar3 = &this->IntOutputs;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if ((this->IntOutputs).ArrayMax < (int)uVar10) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>_>
                (0x10,8,uVar10,&pTVar3->AllocatorInstance,(this->IntOutputs).ArrayNum,piVar1);
    }
    uVar10 = param_2->NumHalfComponents;
    pTVar4 = &this->HalfOutputs;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if ((this->HalfOutputs).ArrayMax < (int)uVar10) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_>_>
                (0x10,8,uVar10,&pTVar4->AllocatorInstance,(this->HalfOutputs).ArrayNum,piVar2);
    }
    local_res18 = (param_2->VMRegisterBindings).ArrayNum;
    uVar14 = (ulonglong)(int)local_res18;
    pFVar21 = (param_2->VMRegisterBindings).AllocatorInstance.Data;
    pFVar20 = pFVar21 + uVar14 * 8;
    local_res20 = pFVar20;
    while( true ) {
      piVar18 = &(this->HalfOutputs).ArrayMax;
      if ((param_2->VMRegisterBindings).ArrayNum != (int)uVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FNDIDataChannelRegisterBinding_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar21 == pFVar20) break;
      uVar10 = *(uint *)(pFVar21 + 4) >> 0x1e;
      if (*(uint *)(pFVar21 + 4) >> 0x1e == 0) {
        iVar11 = (this->HalfOutputs).ArrayNum;
        if (iVar11 == *piVar18) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_>_>
                             (0x810,&pTVar4->AllocatorInstance,piVar18);
        }
        (this->HalfOutputs).ArrayNum = iVar11 + 1;
        FVar7 = (this->HalfOutputs).AllocatorInstance.SecondaryData;
        FVar17 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_>)pTVar4;
        if (FVar7 != (ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_>)0x0) {
          FVar17 = FVar7;
        }
        plVar19 = (longlong *)((longlong)iVar11 * 0x10 + (longlong)FVar17);
        *plVar19 = 0;
        *(undefined4 *)(plVar19 + 1) = 0;
        pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister
                            (local_res10,(int *)(plVar19 + 1));
        *plVar19 = (longlong)pfVar13;
        pfVar13 = (float *)((longlong)pfVar13 +
                           (longlong)(local_res10->PerInstanceFnInstanceIdx * (int)plVar19[1]) * 2);
LAB_148e534be:
        *plVar19 = (longlong)pfVar13;
        pFVar20 = local_res20;
      }
      else {
        if (uVar10 == 1) {
          iVar11 = (this->FloatOutputs).ArrayNum;
          if (iVar11 == (this->FloatOutputs).ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>_>
                               (0x810,(ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>
                                       *)this,&(this->FloatOutputs).ArrayMax);
          }
          (this->FloatOutputs).ArrayNum = iVar11 + 1;
          FVar6 = (this->FloatOutputs).AllocatorInstance.SecondaryData;
          FVar16 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)this;
          if (FVar6 != (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)0x0) {
            FVar16 = FVar6;
          }
          plVar19 = (longlong *)((longlong)iVar11 * 0x10 + (longlong)FVar16);
          *plVar19 = 0;
          *(undefined4 *)(plVar19 + 1) = 0;
          pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister
                              (local_res10,(int *)(plVar19 + 1));
          *plVar19 = (longlong)pfVar13;
          pfVar13 = pfVar13 + local_res10->PerInstanceFnInstanceIdx * (int)plVar19[1];
          goto LAB_148e534be;
        }
        if (uVar10 == 2) {
          iVar11 = (this->IntOutputs).ArrayNum;
          if (iVar11 == (this->IntOutputs).ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>_>
                               (0x810,&pTVar3->AllocatorInstance,&(this->IntOutputs).ArrayMax);
          }
          (this->IntOutputs).ArrayNum = iVar11 + 1;
          FVar5 = (this->IntOutputs).AllocatorInstance.SecondaryData;
          FVar15 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>)pTVar3;
          if (FVar5 != (ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>)0x0) {
            FVar15 = FVar5;
          }
          plVar19 = (longlong *)((longlong)iVar11 * 0x10 + (longlong)FVar15);
          *plVar19 = 0;
          *(undefined4 *)(plVar19 + 1) = 0;
          pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister
                              (local_res10,(int *)(plVar19 + 1));
          *plVar19 = (longlong)pfVar13;
          pfVar13 = pfVar13 + local_res10->PerInstanceFnInstanceIdx * (int)plVar19[1];
          goto LAB_148e534be;
        }
        if (uVar10 == 3) {
          iVar11 = (this->IntOutputs).ArrayNum;
          if (iVar11 == (this->IntOutputs).ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>_>
                               (0x810,&pTVar3->AllocatorInstance,&(this->IntOutputs).ArrayMax);
          }
          (this->IntOutputs).ArrayNum = iVar11 + 1;
          FVar5 = (this->IntOutputs).AllocatorInstance.SecondaryData;
          FVar15 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>)pTVar3;
          if (FVar5 != (ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>)0x0) {
            FVar15 = FVar5;
          }
          plVar19 = (longlong *)((longlong)iVar11 * 0x10 + (longlong)FVar15);
          *plVar19 = 0;
          *(undefined4 *)(plVar19 + 1) = 0;
          pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister
                              (local_res10,(int *)(plVar19 + 1));
          *plVar19 = (longlong)pfVar13;
          pfVar13 = pfVar13 + local_res10->PerInstanceFnInstanceIdx * (int)plVar19[1];
          goto LAB_148e534be;
        }
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\DataInterface\\NiagaraDataInterfaceDataChannelCommon.h"
                           ,0x165,L"");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FNDIVariadicOutputHandler<16> *)(*pcVar8)();
          return pFVar12;
        }
      }
      uVar14 = (ulonglong)local_res18;
      pFVar21 = pFVar21 + 8;
    }
  }
  return this;
}

// Fallback @ 148e64fd0

void __thiscall
FNDIVariadicOutputHandler<16>::Fallback(FNDIVariadicOutputHandler<16> *this,int param_1)

{
  TArray<VectorVM::FExternalFuncRegisterHandler<int>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  TArray<VectorVM::FExternalFuncRegisterHandler<FFloat16>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_> FVar3;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_> FVar4;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_> FVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_> FVar10;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_> FVar11;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_> FVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  
  if (0 < param_1) {
    iVar9 = (this->FloatOutputs).ArrayNum;
    uVar13 = 0;
    lVar16 = (longlong)param_1;
    if (0 < iVar9) {
      lVar15 = 0;
      do {
        uVar14 = ~uVar13 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar13 < iVar9) {
          uVar8 = uVar14;
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
        FVar3 = (this->FloatOutputs).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)this;
        if (FVar3 != (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)0x0) {
          FVar10 = FVar3;
        }
        if (0 < *(int *)(lVar15 + 8 + (longlong)FVar10)) {
          uVar8 = 0;
          if ((int)uVar13 < (this->FloatOutputs).ArrayNum) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
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
          FVar3 = (this->FloatOutputs).AllocatorInstance.SecondaryData;
          FVar10 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)this;
          if (FVar3 != (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)0x0) {
            FVar10 = FVar3;
          }
          memset(*(void **)(lVar15 + (longlong)FVar10),0,lVar16 << 2);
          uVar8 = 0;
          if ((int)uVar13 < (this->FloatOutputs).ArrayNum) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
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
          FVar3 = (this->FloatOutputs).AllocatorInstance.SecondaryData;
          FVar10 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)this;
          if (FVar3 != (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)0x0) {
            FVar10 = FVar3;
          }
          *(longlong *)((longlong)FVar10 + lVar15) =
               *(longlong *)((longlong)FVar10 + lVar15) +
               (longlong)(param_1 * *(int *)((uchar *)((longlong)FVar10 + 8) + lVar15)) * 4;
        }
        iVar9 = (this->FloatOutputs).ArrayNum;
        uVar13 = uVar13 + 1;
        lVar15 = lVar15 + 0x10;
      } while ((int)uVar13 < iVar9);
    }
    uVar13 = 0;
    if (0 < (this->IntOutputs).ArrayNum) {
      pTVar1 = &this->IntOutputs;
      lVar15 = 0;
      do {
        uVar14 = ~uVar13 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar13 < (this->IntOutputs).ArrayNum) {
          uVar8 = uVar14;
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
        FVar4 = (this->IntOutputs).AllocatorInstance.SecondaryData;
        FVar11 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>)pTVar1;
        if (FVar4 != (ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>)0x0) {
          FVar11 = FVar4;
        }
        if (0 < *(int *)(lVar15 + 8 + (longlong)FVar11)) {
          uVar8 = 0;
          if ((int)uVar13 < (this->IntOutputs).ArrayNum) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
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
          FVar4 = (this->IntOutputs).AllocatorInstance.SecondaryData;
          FVar11 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>)pTVar1;
          if (FVar4 != (ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>)0x0) {
            FVar11 = FVar4;
          }
          memset(*(void **)(lVar15 + (longlong)FVar11),0,lVar16 << 2);
          uVar8 = 0;
          if ((int)uVar13 < (this->IntOutputs).ArrayNum) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
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
          FVar4 = (this->IntOutputs).AllocatorInstance.SecondaryData;
          FVar11 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>)pTVar1;
          if (FVar4 != (ForElementType<VectorVM::FExternalFuncRegisterHandler<int>_>)0x0) {
            FVar11 = FVar4;
          }
          *(longlong *)((longlong)FVar11 + lVar15) =
               *(longlong *)((longlong)FVar11 + lVar15) +
               (longlong)(param_1 * *(int *)((uchar *)((longlong)FVar11 + 8) + lVar15)) * 4;
        }
        uVar13 = uVar13 + 1;
        lVar15 = lVar15 + 0x10;
      } while ((int)uVar13 < (this->IntOutputs).ArrayNum);
    }
    uVar13 = 0;
    if (0 < (this->HalfOutputs).ArrayNum) {
      pTVar2 = &this->HalfOutputs;
      lVar15 = 0;
      do {
        uVar14 = ~uVar13 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar13 < (this->HalfOutputs).ArrayNum) {
          uVar8 = uVar14;
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
        FVar5 = (this->HalfOutputs).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_>)pTVar2;
        if (FVar5 != (ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_>)0x0) {
          FVar12 = FVar5;
        }
        if (0 < *(int *)(lVar15 + 8 + (longlong)FVar12)) {
          uVar8 = 0;
          if ((int)uVar13 < (this->HalfOutputs).ArrayNum) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
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
          FVar5 = (this->HalfOutputs).AllocatorInstance.SecondaryData;
          FVar12 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_>)pTVar2;
          if (FVar5 != (ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_>)0x0) {
            FVar12 = FVar5;
          }
          memset(*(void **)(lVar15 + (longlong)FVar12),0,lVar16 * 2);
          uVar8 = 0;
          if ((int)uVar13 < (this->HalfOutputs).ArrayNum) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
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
          FVar5 = (this->HalfOutputs).AllocatorInstance.SecondaryData;
          FVar12 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_>)pTVar2;
          if (FVar5 != (ForElementType<VectorVM::FExternalFuncRegisterHandler<FFloat16>_>)0x0) {
            FVar12 = FVar5;
          }
          *(longlong *)((longlong)FVar12 + lVar15) =
               *(longlong *)((longlong)FVar12 + lVar15) +
               (longlong)(param_1 * *(int *)((uchar *)((longlong)FVar12 + 8) + lVar15)) * 2;
        }
        uVar13 = uVar13 + 1;
        lVar15 = lVar15 + 0x10;
      } while ((int)uVar13 < (this->HalfOutputs).ArrayNum);
    }
  }
  return;
}

