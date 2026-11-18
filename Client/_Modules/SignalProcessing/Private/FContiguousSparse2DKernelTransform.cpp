// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 8

// FContiguousSparse2DKernelTransform @ 1444a33a0

FContiguousSparse2DKernelTransform * __thiscall
Audio::FContiguousSparse2DKernelTransform::FContiguousSparse2DKernelTransform
          (FContiguousSparse2DKernelTransform *this,int param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  void *_Src;
  bool bVar6;
  int iVar7;
  FContiguousSparse2DKernelTransform *pFVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 local_48 [2];
  void *local_40;
  undefined8 local_38;
  
  this->NumOut = param_2;
  this->NumIn = param_1;
  this->_padding_ = (longlong)&___7FContiguousSparse2DKernelTransform_Audio__6B_;
  piVar1 = &(this->Kernel).ArrayMax;
  (this->Kernel).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Kernel).ArrayNum = 0;
  *piVar1 = 0;
  if ((param_1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumIn >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                         ,0xc43,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FContiguousSparse2DKernelTransform *)(*pcVar5)();
    return pFVar8;
  }
  if ((this->NumOut < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumOut >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                         ,0xc44,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FContiguousSparse2DKernelTransform *)(*pcVar5)();
    return pFVar8;
  }
  uVar3 = this->NumOut;
  uVar9 = (ulonglong)uVar3;
  local_40 = (void *)0x0;
  local_38 = 0;
  local_48[0] = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar9);
  }
  DestructItems<Audio::FContiguousSparse2DKernelTransform::FRow,int>
            ((FRow *)(this->Kernel).AllocatorInstance.Data,(this->Kernel).ArrayNum);
  (this->Kernel).ArrayNum = 0;
  if (*piVar1 != uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar3,&(this->Kernel).AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar3) {
    do {
      pFVar4 = (this->Kernel).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 < pFVar4 + (longlong)*piVar1 * 0x18)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FContiguousSparse2DKernelTransform *)(*pcVar5)();
        return pFVar8;
      }
      iVar7 = (this->Kernel).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(this->Kernel).AllocatorInstance,piVar1);
      }
      _Src = local_40;
      (this->Kernel).ArrayNum = iVar7 + 1;
      pFVar2 = (this->Kernel).AllocatorInstance.Data + (longlong)iVar7 * 0x18;
      *(undefined4 *)pFVar2 = local_48[0];
      pFVar4 = pFVar2 + 8;
      *(FScriptContainerElement **)&pFVar4->field_0x0 = (FScriptContainerElement *)0x0;
      lVar10 = (longlong)(int)local_38;
      *(int *)(pFVar2 + 0x10) = (int)local_38;
      if ((int)local_38 == 0) {
        *(undefined4 *)(pFVar2 + 0x14) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_38,0,(ForAnyElementType *)pFVar4,(int)local_38,
                   (int *)(pFVar2 + 0x14));
        memcpy(*(FScriptContainerElement **)&pFVar4->field_0x0,_Src,lVar10 << 2);
      }
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  return this;
}

// ~FContiguousSparse2DKernelTransform @ 1444a6120

void __thiscall
Audio::FContiguousSparse2DKernelTransform::~FContiguousSparse2DKernelTransform
          (FContiguousSparse2DKernelTransform *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FContiguousSparse2DKernelTransform_Audio__6B_;
  DestructItems<Audio::FContiguousSparse2DKernelTransform::FRow,int>
            ((FRow *)(this->Kernel).AllocatorInstance.Data,(this->Kernel).ArrayNum);
  pFVar1 = (this->Kernel).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetNumInElements @ 1444c08a0

int __thiscall
Audio::FContiguousSparse2DKernelTransform::GetNumInElements
          (FContiguousSparse2DKernelTransform *this)

{
  return this->NumIn;
}

// GetNumOutElements @ 1444c08d0

int __thiscall
Audio::FContiguousSparse2DKernelTransform::GetNumOutElements
          (FContiguousSparse2DKernelTransform *this)

{
  return this->NumOut;
}

// SetRow @ 1444e5640

void __thiscall
Audio::FContiguousSparse2DKernelTransform::SetRow
          (FContiguousSparse2DKernelTransform *this,int param_1,int param_2,
          TArrayView<float_const_,int> *param_3)

{
  float *_Src;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  if (this->NumIn < param_3->ArrayNum + param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(StartIndex + OffsetValues.Num()) <= NumIn",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                       ,0xc5d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->Kernel).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Kernel).AllocatorInstance.Data + (longlong)param_1 * 0x18) = param_2;
  uVar3 = param_3->ArrayNum;
  _Src = param_3->DataPtr;
  if (-1 < (int)uVar3) {
    if ((_Src == (float *)0x0) && (uVar3 != 0)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x2d3,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_30 = CONCAT44(local_30._4_4_,uVar3);
    if (uVar3 == 0) {
      local_30 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar3,0,&local_38,uVar3,(int *)((longlong)&local_30 + 4));
      memcpy(local_38.Data,_Src,(longlong)(int)uVar3 << 2);
    }
    uVar3 = 0;
    if (param_1 < (this->Kernel).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (this->Kernel).AllocatorInstance.Data + (longlong)param_1 * 0x18 + 8;
    if (pFVar4 != (FScriptContainerElement *)&local_38) {
      if (*(void **)pFVar4 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar4);
      }
      *(FScriptContainerElement **)pFVar4 = local_38.Data;
      local_38.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(pFVar4 + 8) = (undefined4)local_30;
      *(undefined4 *)(pFVar4 + 0xc) = local_30._4_4_;
      local_30 = 0;
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// TransformArray @ 1444e6330

void __thiscall
Audio::FContiguousSparse2DKernelTransform::TransformArray
          (FContiguousSparse2DKernelTransform *this,float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  code *pcVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  float *pfVar13;
  uint uVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  if (!__CsvProfilerStat3202) {
    FCsvProfilerTrace::OutputInlineStat("TransformArray",_GCsvCategory_Audio_Dsp.Index);
    __CsvProfilerStat3202 = true;
  }
  uVar10 = _GCsvCategory_Audio_Dsp.Index;
  FCsvProfiler::BeginStat("TransformArray",_GCsvCategory_Audio_Dsp.Index,"CSV_TransformArray");
  if ((param_1 == (float *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("nullptr != InArray",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0xc84,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_2 == (float *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("nullptr != OutArray",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                          ,0xc85,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  memset(param_2,0,(longlong)this->NumOut << 2);
  iVar17 = 0;
  if (0 < (this->Kernel).ArrayNum) {
    pFVar18 = (this->Kernel).AllocatorInstance.Data + 0x10;
    pfVar15 = param_2;
    do {
      pfVar4 = *(float **)(pFVar18 + -8);
      uVar3 = *(uint *)pFVar18;
      pfVar1 = param_1 + (int)*(uint *)(pFVar18 + -0x10);
      if (bAudio_FloatArrayMath_ISPC_Enabled == false) {
        lVar19 = 0;
        if (0 < (int)uVar3) {
          if (7 < uVar3) {
            iVar12 = uVar3 - 1;
            iVar16 = 0;
            if (((pfVar1 + iVar12 < param_2) || (param_2 + iVar12 < pfVar1)) &&
               ((pfVar4 + iVar12 < param_2 || (param_2 + iVar12 < pfVar4)))) {
              fVar24 = 0.0;
              fVar25 = 0.0;
              fVar26 = 0.0;
              fVar27 = 0.0;
              fVar20 = 0.0;
              fVar21 = 0.0;
              fVar22 = 0.0;
              fVar23 = 0.0;
              uVar14 = uVar3 & 0x80000007;
              if ((int)uVar14 < 0) {
                uVar14 = (uVar14 - 1 | 0xfffffff8) + 1;
              }
              pfVar13 = pfVar1 + 4;
              do {
                iVar16 = iVar16 + 8;
                lVar19 = lVar19 + 8;
                pfVar2 = (float *)(((longlong)pfVar4 - (longlong)pfVar1) + -0x10 + (longlong)pfVar13
                                  );
                fVar6 = *pfVar13;
                pfVar7 = pfVar13 + 1;
                pfVar8 = pfVar13 + 2;
                pfVar9 = pfVar13 + 3;
                fVar24 = fVar24 + *pfVar2 * pfVar13[-4];
                fVar25 = fVar25 + pfVar2[1] * pfVar13[-3];
                fVar26 = fVar26 + pfVar2[2] * pfVar13[-2];
                fVar27 = fVar27 + pfVar2[3] * pfVar13[-1];
                pfVar2 = (float *)(((longlong)pfVar4 - (longlong)pfVar1) + (longlong)pfVar13);
                pfVar13 = pfVar13 + 8;
                fVar20 = fVar20 + *pfVar2 * fVar6;
                fVar21 = fVar21 + pfVar2[1] * *pfVar7;
                fVar22 = fVar22 + pfVar2[2] * *pfVar8;
                fVar23 = fVar23 + pfVar2[3] * *pfVar9;
              } while (lVar19 < (int)(uVar3 - uVar14));
              *pfVar15 = *pfVar15 +
                         fVar22 + fVar26 + fVar20 + fVar24 + fVar23 + fVar27 + fVar21 + fVar25;
              if ((int)uVar3 <= iVar16) goto LAB_1444e654c;
            }
          }
          fVar20 = *pfVar15;
          pfVar13 = pfVar1 + lVar19;
          lVar19 = (int)uVar3 - lVar19;
          do {
            pfVar2 = (float *)(((longlong)pfVar4 - (longlong)pfVar1) + (longlong)pfVar13);
            fVar21 = *pfVar13;
            pfVar13 = pfVar13 + 1;
            fVar20 = fVar20 + *pfVar2 * fVar21;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          *pfVar15 = fVar20;
        }
      }
      else {
        TransformArrayRow(pfVar1,pfVar4,param_2,iVar17,uVar3);
      }
LAB_1444e654c:
      iVar17 = iVar17 + 1;
      pFVar18 = pFVar18 + 0x18;
      pfVar15 = pfVar15 + 1;
    } while (iVar17 < (this->Kernel).ArrayNum);
  }
  FCsvProfiler::EndStat("TransformArray",uVar10);
  return;
}

// TransformArray @ 1444e65a0

void __thiscall
Audio::FContiguousSparse2DKernelTransform::TransformArray
          (FContiguousSparse2DKernelTransform *this,TArrayView<float_const_,int> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1->ArrayNum != this->NumIn) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InView.Num() == NumIn",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                       ,0xc74,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = this->NumOut;
  if (-1 < (int)uVar1) {
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar1,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    if (0 < this->NumOut) {
      UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,this->NumOut,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax)
      ;
    }
    TransformArray(this,param_1->DataPtr,(float *)(param_2->AllocatorInstance).Data);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// TransformArray @ 1444e6690

void __thiscall
Audio::FContiguousSparse2DKernelTransform::TransformArray
          (FContiguousSparse2DKernelTransform *this,TArrayView<float_const_,int> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1->ArrayNum != this->NumIn) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InView.Num() == NumIn",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FloatArrayMath.cpp"
                       ,0xc66,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = this->NumOut;
  if (-1 < (int)uVar1) {
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar1,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    if (0 < this->NumOut) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,this->NumOut,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax)
      ;
    }
    TransformArray(this,param_1->DataPtr,(float *)(param_2->AllocatorInstance).Data);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

