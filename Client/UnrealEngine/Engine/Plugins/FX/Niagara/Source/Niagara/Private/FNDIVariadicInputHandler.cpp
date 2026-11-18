// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNDIVariadicInputHandler<16> @ 148e52d30

FNDIVariadicInputHandler<16> * __thiscall
FNDIVariadicInputHandler<16>::FNDIVariadicInputHandler<16>
          (FNDIVariadicInputHandler<16> *this,FVectorVMExternalFunctionContext *param_1,
          FNDIDataChannel_FunctionToDataSetBinding *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<FNDIInputParam<int>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  TArray<FNDIInputParam<FFloat16>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4
  ;
  ForElementType<FNDIInputParam<FFloat16>_> FVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FNDIVariadicInputHandler<16> *pFVar10;
  float *pfVar11;
  ulonglong uVar12;
  ForElementType<FNDIInputParam<int>_> FVar13;
  ForElementType<FNDIInputParam<int>_> FVar14;
  ForElementType<FNDIInputParam<FFloat16>_> FVar15;
  int *piVar16;
  longlong *plVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res8 [8];
  FVectorVMExternalFunctionContext *local_res10;
  uint local_res18;
  FScriptContainerElement *local_res20;
  
  (this->FloatInputs).AllocatorInstance.SecondaryData = (ForElementType<FNDIInputParam<float>_>)0x0;
  piVar16 = &(this->FloatInputs).ArrayMax;
  *piVar16 = 0x10;
  piVar1 = &(this->IntInputs).ArrayMax;
  (this->FloatInputs).ArrayNum = 0;
  piVar2 = &(this->HalfInputs).ArrayMax;
  (this->IntInputs).AllocatorInstance.SecondaryData = (ForElementType<FNDIInputParam<int>_>)0x0;
  (this->IntInputs).ArrayNum = 0;
  *piVar1 = 0x10;
  (this->HalfInputs).AllocatorInstance.SecondaryData =
       (ForElementType<FNDIInputParam<FFloat16>_>)0x0;
  (this->HalfInputs).ArrayNum = 0;
  *piVar2 = 0x10;
  if (param_2 != (FNDIDataChannel_FunctionToDataSetBinding *)0x0) {
    uVar8 = param_2->NumFloatComponents;
    local_res10 = param_1;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (0x10 < (int)uVar8) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNDIInputParam<float>_>_>
                (0x18,8,uVar8,(ForElementType<FNDIInputParam<float>_> *)this,0,piVar16);
    }
    uVar8 = param_2->NumInt32Components;
    pTVar3 = &this->IntInputs;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((this->IntInputs).ArrayMax < (int)uVar8) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNDIInputParam<int>_>_>
                (0x18,8,uVar8,&pTVar3->AllocatorInstance,(this->IntInputs).ArrayNum,piVar1);
    }
    uVar8 = param_2->NumHalfComponents;
    pTVar4 = &this->HalfInputs;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((this->HalfInputs).ArrayMax < (int)uVar8) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNDIInputParam<FFloat16>_>_>
                (0x18,8,uVar8,&pTVar4->AllocatorInstance,(this->HalfInputs).ArrayNum,piVar2);
    }
    local_res18 = (param_2->VMRegisterBindings).ArrayNum;
    uVar12 = (ulonglong)(int)local_res18;
    pFVar19 = (param_2->VMRegisterBindings).AllocatorInstance.Data;
    pFVar18 = pFVar19 + uVar12 * 8;
    local_res20 = pFVar18;
    while( true ) {
      piVar16 = &(this->HalfInputs).ArrayMax;
      if ((param_2->VMRegisterBindings).ArrayNum != (int)uVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FNDIDataChannelRegisterBinding_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar19 == pFVar18) break;
      uVar8 = *(uint *)(pFVar19 + 4) >> 0x1e;
      if (*(uint *)(pFVar19 + 4) >> 0x1e == 0) {
        iVar9 = (this->HalfInputs).ArrayNum;
        if (iVar9 == *piVar16) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNDIInputParam<FFloat16>_>_>
                            (0x818,&pTVar4->AllocatorInstance,piVar16);
        }
        (this->HalfInputs).ArrayNum = iVar9 + 1;
        FVar5 = (this->HalfInputs).AllocatorInstance.SecondaryData;
        FVar15 = (ForElementType<FNDIInputParam<FFloat16>_>)pTVar4;
        if (FVar5 != (ForElementType<FNDIInputParam<FFloat16>_>)0x0) {
          FVar15 = FVar5;
        }
        plVar17 = (longlong *)((longlong)FVar15 + (longlong)iVar9 * 0x18);
        *plVar17 = 0;
        plVar17[1] = 0;
        *(undefined4 *)(plVar17 + 2) = 0;
        pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister
                            (local_res10,(int *)(plVar17 + 2));
        *plVar17 = (longlong)pfVar11;
        pfVar11 = (float *)((longlong)pfVar11 +
                           (longlong)(local_res10->PerInstanceFnInstanceIdx * (int)plVar17[2]) * 2);
LAB_148e530aa:
        *plVar17 = (longlong)pfVar11;
        plVar17[1] = (longlong)pfVar11;
        pFVar18 = local_res20;
      }
      else {
        if (uVar8 == 1) {
          iVar9 = (this->FloatInputs).ArrayNum;
          if (iVar9 == (this->FloatInputs).ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNDIInputParam<float>_>_>
                              (0x818,(ForElementType<FNDIInputParam<float>_> *)this,
                               &(this->FloatInputs).ArrayMax);
          }
          (this->FloatInputs).ArrayNum = iVar9 + 1;
          FVar13 = *(ForElementType<FNDIInputParam<int>_> *)
                    &(this->FloatInputs).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<FNDIInputParam<int>_>)this;
LAB_148e52f2d:
          if (FVar13 != (ForElementType<FNDIInputParam<int>_>)0x0) {
            FVar14 = FVar13;
          }
          plVar17 = (longlong *)((longlong)FVar14 + (longlong)iVar9 * 0x18);
          *plVar17 = 0;
          plVar17[1] = 0;
          *(undefined4 *)(plVar17 + 2) = 0;
          pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister
                              (local_res10,(int *)(plVar17 + 2));
          *plVar17 = (longlong)pfVar11;
          pfVar11 = pfVar11 + local_res10->PerInstanceFnInstanceIdx * (int)plVar17[2];
          goto LAB_148e530aa;
        }
        if (uVar8 == 2) {
          iVar9 = (this->IntInputs).ArrayNum;
          if (iVar9 == (this->IntInputs).ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNDIInputParam<int>_>_>
                              (0x818,&pTVar3->AllocatorInstance,&(this->IntInputs).ArrayMax);
          }
          (this->IntInputs).ArrayNum = iVar9 + 1;
          FVar13 = (this->IntInputs).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<FNDIInputParam<int>_>)pTVar3;
          if (FVar13 != (ForElementType<FNDIInputParam<int>_>)0x0) {
            FVar14 = FVar13;
          }
          plVar17 = (longlong *)((longlong)FVar14 + (longlong)iVar9 * 0x18);
          *plVar17 = 0;
          plVar17[1] = 0;
          *(undefined4 *)(plVar17 + 2) = 0;
          pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister
                              (local_res10,(int *)(plVar17 + 2));
          *plVar17 = (longlong)pfVar11;
          pfVar11 = pfVar11 + local_res10->PerInstanceFnInstanceIdx * (int)plVar17[2];
          goto LAB_148e530aa;
        }
        if (uVar8 == 3) {
          iVar9 = (this->IntInputs).ArrayNum;
          if (iVar9 == (this->IntInputs).ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNDIInputParam<int>_>_>
                              (0x818,&pTVar3->AllocatorInstance,&(this->IntInputs).ArrayMax);
          }
          (this->IntInputs).ArrayNum = iVar9 + 1;
          FVar13 = (this->IntInputs).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<FNDIInputParam<int>_>)pTVar3;
          goto LAB_148e52f2d;
        }
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\DataInterface\\NiagaraDataInterfaceDataChannelCommon.h"
                           ,0x120,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FNDIVariadicInputHandler<16> *)(*pcVar6)();
          return pFVar10;
        }
      }
      uVar12 = (ulonglong)local_res18;
      pFVar19 = pFVar19 + 8;
    }
  }
  return this;
}

// Advance @ 148e5b2d0

void __thiscall
FNDIVariadicInputHandler<16>::Advance(FNDIVariadicInputHandler<16> *this,int param_1)

{
  ForElementType<FNDIInputParam<int>_> FVar1;
  ForElementType<FNDIInputParam<FFloat16>_> FVar2;
  int iVar3;
  ForElementType<FNDIInputParam<float>_> FVar4;
  ForElementType<FNDIInputParam<float>_> FVar5;
  ForElementType<FNDIInputParam<int>_> FVar6;
  ForElementType<FNDIInputParam<FFloat16>_> FVar7;
  undefined1 local_res8 [8];
  
  iVar3 = (this->FloatInputs).ArrayNum;
  FVar4 = (this->FloatInputs).AllocatorInstance.SecondaryData;
  FVar5 = (ForElementType<FNDIInputParam<float>_>)this;
  if (FVar4 != (ForElementType<FNDIInputParam<float>_>)0x0) {
    FVar5 = FVar4;
  }
  FVar4 = (ForElementType<FNDIInputParam<float>_>)((longlong)FVar5 + (longlong)iVar3 * 0x18);
  while( true ) {
    if ((this->FloatInputs).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FNDIInputParam<float>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar5 == FVar4) break;
    *(longlong *)FVar5 =
         *(longlong *)FVar5 + (longlong)(param_1 * *(int *)((longlong)FVar5 + 0x10)) * 4;
    FVar5 = (ForElementType<FNDIInputParam<float>_>)((longlong)FVar5 + 0x18);
  }
  iVar3 = (this->IntInputs).ArrayNum;
  FVar6 = (this->IntInputs).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FNDIInputParam<int>_>)0x0) {
    FVar6 = (ForElementType<FNDIInputParam<int>_>)&this->IntInputs;
  }
  FVar1 = (ForElementType<FNDIInputParam<int>_>)((longlong)FVar6 + (longlong)iVar3 * 0x18);
  while( true ) {
    if ((this->IntInputs).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FNDIInputParam<int>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar6 == FVar1) break;
    *(longlong *)FVar6 =
         *(longlong *)FVar6 + (longlong)(param_1 * *(int *)((longlong)FVar6 + 0x10)) * 4;
    FVar6 = (ForElementType<FNDIInputParam<int>_>)((longlong)FVar6 + 0x18);
  }
  iVar3 = (this->HalfInputs).ArrayNum;
  FVar7 = (this->HalfInputs).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<FNDIInputParam<FFloat16>_>)0x0) {
    FVar7 = (ForElementType<FNDIInputParam<FFloat16>_>)&this->HalfInputs;
  }
  FVar2 = (ForElementType<FNDIInputParam<FFloat16>_>)((longlong)FVar7 + (longlong)iVar3 * 0x18);
  while( true ) {
    if ((this->HalfInputs).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FNDIInputParam<FFloat16>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar7 == FVar2) break;
    *(longlong *)FVar7 =
         *(longlong *)FVar7 + (longlong)(param_1 * *(int *)((longlong)FVar7 + 0x10)) * 2;
    FVar7 = (ForElementType<FNDIInputParam<FFloat16>_>)((longlong)FVar7 + 0x18);
  }
  return;
}

