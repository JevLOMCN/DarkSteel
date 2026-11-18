// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// CalculateEditorElements @ 14754bb70

void __thiscall FLineElementGenerator::CalculateEditorElements(FLineElementGenerator *this)

{
  TArray<FEditorElement,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  int *piVar19;
  float fVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int *local_res18;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  undefined2 uStack_76;
  float fStack_74;
  
  iVar11 = (this->SamplePointList).ArrayNum;
  uVar14 = 0;
  uVar18 = iVar11 - 1;
  if (iVar11 < 2) {
    uVar18 = 0;
  }
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  piVar19 = &(this->LineElements).ArrayMax;
  (this->LineElements).ArrayNum = 0;
  if (*piVar19 != uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,uVar18,&(this->LineElements).AllocatorInstance,0,piVar19);
  }
  iVar11 = (this->SamplePointList).ArrayNum;
  if (1 < iVar11) {
    uVar17 = uVar14;
    if (0 < iVar11 + -1) {
      do {
        uVar18 = (uint)uVar14;
        uVar16 = uVar18 + 1;
        uVar13 = 0;
        if ((int)uVar16 < iVar11) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (this->SamplePointList).AllocatorInstance.Data;
        uVar13 = 0;
        if ((int)uVar18 < (this->SamplePointList).ArrayNum) {
          uVar13 = ~uVar18 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar15 = (this->LineElements).AllocatorInstance.Data;
        local_88 = *(undefined8 *)((this->SamplePointList).AllocatorInstance.Data + uVar17);
        uStack_80 = *(undefined8 *)(pFVar6 + uVar17 + 8);
        local_78 = 0;
        fStack_74 = (float)uStack_80 - (float)local_88;
        if (((pFVar15 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar15 + (longlong)*piVar19 * 0x18)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar11 = (this->LineElements).ArrayNum;
        if (iVar11 == *piVar19) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x418,&(this->LineElements).AllocatorInstance,piVar19);
        }
        (this->LineElements).ArrayNum = iVar11 + 1;
        uVar14 = (ulonglong)uVar16;
        pFVar15 = (this->LineElements).AllocatorInstance.Data;
        pFVar6 = pFVar15 + (longlong)iVar11 * 0x18;
        *(undefined8 *)pFVar6 = local_88;
        *(undefined8 *)(pFVar6 + 8) = uStack_80;
        *(ulonglong *)(pFVar15 + (longlong)iVar11 * 0x18 + 0x10) =
             CONCAT44(fStack_74,CONCAT22(uStack_76,local_78));
        iVar11 = (this->SamplePointList).ArrayNum;
        uVar17 = uVar17 + 8;
      } while ((int)uVar16 < iVar11 + -1);
    }
    if (((this->LineElements).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (this->LineElements).AllocatorInstance.Data[0x10] = (FScriptContainerElement)0x1;
    iVar11 = (this->LineElements).ArrayNum;
    uVar13 = iVar11 - 1;
    uVar18 = 0;
    if ((int)uVar13 < iVar11) {
      uVar18 = ~uVar13 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (this->LineElements).AllocatorInstance.Data[(longlong)(this->LineElements).ArrayNum * 0x18 + -7]
         = (FScriptContainerElement)0x1;
  }
  uVar14 = 0;
  iVar11 = this->NumGridDivisions;
  pTVar1 = &this->EditorElements;
  fVar3 = this->MaxGridValue;
  fVar4 = this->MinGridValue;
  uVar18 = this->NumGridPoints;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  piVar19 = &(this->EditorElements).ArrayNum;
  piVar2 = &(this->EditorElements).ArrayMax;
  *piVar19 = 0;
  local_res18 = piVar19;
  if (*piVar2 != uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,uVar18,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar5 = this->NumGridPoints;
  iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x18,4,iVar5,&pTVar1->AllocatorInstance,piVar19,piVar2);
  DefaultConstructItems<FEditorElement,int>
            ((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x18,iVar5);
  fVar9 = __real_3f800000;
  if ((this->LineElements).ArrayNum == 0) {
    iVar11 = *piVar19;
    pFVar15 = (pTVar1->AllocatorInstance).Data;
    pFVar6 = pFVar15 + (longlong)iVar11 * 0x18;
    while( true ) {
      if (*piVar19 != iVar11) {
        `TCheckedPointerIterator<FEditorElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar15 == pFVar6) break;
      *(undefined4 *)pFVar15 = 0;
      *(undefined4 *)(pFVar15 + 0xc) = 0x3f800000;
      pFVar15 = pFVar15 + 0x18;
    }
  }
  else {
    uVar17 = uVar14;
    if (0 < this->NumGridPoints) {
LAB_14754bf43:
      uVar13 = (uint)uVar14;
      uVar18 = 0;
      if ((int)uVar13 < *piVar19) {
        uVar18 = ~uVar13 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar5 = (this->LineElements).ArrayNum;
      pFVar15 = (this->LineElements).AllocatorInstance.Data;
      pFVar7 = (this->EditorElements).AllocatorInstance.Data;
      pFVar6 = pFVar15 + (longlong)iVar5 * 0x18;
      fVar20 = (float)(int)uVar13 * ((fVar3 - fVar4) / (float)iVar11) + this->MinGridValue;
      do {
        if ((this->LineElements).ArrayNum != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FLineElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar15 == pFVar6) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("bPopulatedElement",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpace1DHelpers.cpp"
                              ,0x9d,L"");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          goto LAB_14754c05f;
        }
        if (*(float *)pFVar15 <= fVar20) {
          if (fVar20 < *(float *)(pFVar15 + 8) || fVar20 == *(float *)(pFVar15 + 8)) {
            *(float *)(pFVar7 + uVar17) = *(float *)(pFVar15 + 0xc);
            fVar20 = (fVar20 - *(float *)pFVar15) / *(float *)(pFVar15 + 0x14);
            *(float *)(pFVar7 + uVar17 + 0xc) = fVar20;
            *(float *)(pFVar7 + uVar17 + 4) = *(float *)(pFVar15 + 4);
            *(float *)(pFVar7 + uVar17 + 0x10) = fVar9 - fVar20;
            goto LAB_14754c05f;
          }
          if (pFVar15[0x11] != (FScriptContainerElement)0x0) {
            *(float *)(pFVar7 + uVar17) = *(float *)(pFVar15 + 0xc);
            *(undefined4 *)(pFVar7 + uVar17 + 0xc) = 0x3f800000;
            goto LAB_14754c05f;
          }
        }
        else if (pFVar15[0x10] != (FScriptContainerElement)0x0) goto code_r0x00014754bfdb;
        pFVar15 = pFVar15 + 0x18;
      } while( true );
    }
  }
  return;
code_r0x00014754bfdb:
  *(float *)(pFVar7 + uVar17) = *(float *)(pFVar15 + 4);
  *(undefined4 *)(pFVar7 + uVar17 + 0xc) = 0x3f800000;
LAB_14754c05f:
  uVar14 = (ulonglong)(uVar13 + 1);
  uVar17 = uVar17 + 0x18;
  piVar19 = local_res18;
  if (this->NumGridPoints <= (int)(uVar13 + 1)) {
    return;
  }
  goto LAB_14754bf43;
}

// CalculateSegments @ 14754c0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FBlendSpaceSegment,TSizedDefaultAllocator<32>_> * __thiscall
FLineElementGenerator::CalculateSegments
          (FLineElementGenerator *this,
          TArray<FBlendSpaceSegment,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FBlendSpaceSegment,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStackY_b8 [32];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  iVar5 = (this->SamplePointList).ArrayNum;
  uVar9 = iVar5 - 1;
  if (iVar5 < 2) {
    uVar9 = 0;
  }
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (0 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar9,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  uVar7 = 0;
  iVar5 = (this->SamplePointList).ArrayNum;
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      uStack_48 = 0;
      uStack_44 = 0x3f800000;
      local_50 = *(undefined4 *)((this->SamplePointList).AllocatorInstance.Data + 4);
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      uStack_4c = local_50;
      if (((pFVar2 <= (FScriptContainerElement *)&local_50) &&
          ((FScriptContainerElement *)&local_50 < pFVar2 + (longlong)*piVar1 * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<FBlendSpaceSegment,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(ulonglong *)pFVar2 = CONCAT44(uStack_4c,local_50);
      *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_44,uStack_48);
    }
    else {
      uVar11 = uVar7;
      if (0 < iVar5 + -1) {
        do {
          uVar8 = (uint)uVar7;
          local_60 = 0xffffffffffffffff;
          uStack_58 = 0;
          uVar9 = 0;
          if ((int)uVar8 < iVar5) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TArray<FBlendSpaceSegment,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar6;
          }
          uVar10 = uVar8 + 1;
          uVar9 = 0;
          if ((int)uVar10 < (this->SamplePointList).ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          uStack_58 = CONCAT44(uStack_58._4_4_,
                               (*(float *)((this->SamplePointList).AllocatorInstance.Data + uVar11)
                               - this->MinGridValue) / (this->MaxGridValue - this->MinGridValue));
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TArray<FBlendSpaceSegment,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar6;
          }
          uVar9 = 0;
          if ((int)uVar8 < (this->SamplePointList).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          uStack_58 = CONCAT44((*(float *)((this->SamplePointList).AllocatorInstance.Data +
                                          uVar11 + 8) - this->MinGridValue) /
                               (this->MaxGridValue - this->MinGridValue),(undefined4)uStack_58);
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TArray<FBlendSpaceSegment,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar6;
          }
          local_60 = CONCAT44(local_60._4_4_,
                              *(undefined4 *)
                               ((this->SamplePointList).AllocatorInstance.Data + uVar11 + 4));
          uVar9 = 0;
          if ((int)uVar10 < (this->SamplePointList).ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TArray<FBlendSpaceSegment,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar6;
          }
          local_60 = CONCAT44(*(undefined4 *)
                               ((this->SamplePointList).AllocatorInstance.Data + uVar11 + 0xc),
                              (undefined4)local_60);
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_60) &&
              ((FScriptContainerElement *)&local_60 < pFVar2 + (longlong)*piVar1 * 0x10)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TArray<FBlendSpaceSegment,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar6;
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x410,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          uVar7 = (ulonglong)uVar10;
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
          *(undefined8 *)pFVar2 = local_60;
          *(undefined8 *)(pFVar2 + 8) = uStack_58;
          iVar5 = (this->SamplePointList).ArrayNum;
          uVar11 = uVar11 + 8;
        } while ((int)uVar10 < iVar5 + -1);
      }
    }
  }
  return __return_storage_ptr__;
}

// Init @ 147563b80

void __thiscall FLineElementGenerator::Init(FLineElementGenerator *this,FBlendParameter *param_1)

{
  (this->SamplePointList).ArrayNum = 0;
  if ((this->SamplePointList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this,0,&(this->SamplePointList).ArrayMax);
  }
  this->MinGridValue = param_1->Min;
  this->MaxGridValue = param_1->Max;
  this->NumGridPoints = param_1->GridNum + 1;
  this->NumGridDivisions = param_1->GridNum;
  return;
}

// Process @ 147571f70

void __thiscall FLineElementGenerator::Process(FLineElementGenerator *this)

{
  int iVar1;
  FIdentityFunctor local_res8 [32];
  
  iVar1 = (this->SamplePointList).ArrayNum;
  if (1 < iVar1) {
    AlgoImpl::
    IntroSortInternal<FLineVertex,int,FIdentityFunctor,TDereferenceWrapper<FLineVertex,_FLineElementGenerator::Process_::__l5::<lambda_1>_>_>
              ((FLineVertex *)(this->SamplePointList).AllocatorInstance.Data,iVar1,local_res8[0],
               (<lambda_1> *)local_res8);
  }
  return;
}

