// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticStruct @ 147421130

UScriptStruct * __cdecl FRawCurveTracks::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRawCurveTracks.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRawCurveTracks.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRawCurveTracks,(UObject *)pUVar1,
                         L"RawCurveTracks");
  }
  return Z_Registration_Info_UScriptStruct_FRawCurveTracks.OuterSingleton;
}

// AddCurveDataImpl<FFloatCurve> @ 147424f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FRawCurveTracks::AddCurveDataImpl<FFloatCurve>
          (FRawCurveTracks *this,TArray<FFloatCurve,TSizedDefaultAllocator<32>_> *param_1,
          FName *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FFloatCurve *pFVar7;
  undefined1 auStackY_f8 [32];
  undefined1 local_a8 [56];
  void *local_70;
  undefined8 local_68;
  longlong lStack_60;
  void *local_50;
  undefined4 local_48;
  void *local_40;
  longlong local_38;
  undefined4 local_30;
  undefined2 local_2c;
  ForAnyElementType local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar7 = GetCurveDataImpl<FFloatCurve>(this,param_1,*param_2);
  if (pFVar7 == (FFloatCurve *)0x0) {
    local_a8._0_8_ = *param_2;
    pFVar1 = (param_1->AllocatorInstance).Data;
    local_a8._16_8_ = &___7FRichCurve__6B_;
    local_a8._24_8_ = (void *)0x0;
    local_a8._32_8_ = 0;
    local_70 = (void *)0x0;
    local_68 = ___xmm_00000000ffffffff0000008000000000;
    lStack_60 = _UNK_150631d98;
    local_50 = (void *)0x0;
    local_48 = 0;
    local_40 = (void *)0x0;
    local_38 = 0;
    local_30 = 0x7f7fffff;
    local_2c = 0x404;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20._0_4_ = 0;
    local_20._4_4_ = 0;
    local_a8._8_4_ = param_3;
    if ((pFVar1 <= (FScriptContainerElement *)local_a8) &&
       ((FScriptContainerElement *)local_a8 < pFVar1 + (longlong)param_1->ArrayMax * 0x90)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    iVar6 = param_1->ArrayNum;
    if (iVar6 == param_1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x890,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar6 + 1;
    FFloatCurve::FFloatCurve
              ((FFloatCurve *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x90),
               (FFloatCurve *)local_a8);
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    local_a8._16_8_ = &___7FIndexedCurve__6B_;
    if (local_40 != (void *)0x0) {
      FMemory::Free(local_40);
    }
    local_48 = 0;
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
    iVar6 = SUB84(local_a8._32_8_,4);
    local_a8._32_8_ = local_a8._32_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)(local_a8 + 0x18),0,(int *)(local_a8 + 0x24));
    }
    uVar3 = local_68._4_4_;
    lStack_60 = 0xffffffff;
    local_68 = (ulonglong)local_68._4_4_ << 0x20;
    if (0x80 < uVar3) {
      local_68 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x28),0);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if ((void *)local_a8._24_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._24_8_);
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// DeleteCurveDataImpl<FFloatCurve> @ 147429e30

bool __thiscall
FRawCurveTracks::DeleteCurveDataImpl<FFloatCurve>
          (FRawCurveTracks *this,TArray<FFloatCurve,TSizedDefaultAllocator<32>_> *param_1,
          FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *_Dst;
  uint uVar7;
  longlong lVar8;
  
  iVar5 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      uVar7 = ~uVar6 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = uVar7;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar5 = param_1->ArrayNum;
      if (*(FName *)((param_1->AllocatorInstance).Data + lVar8) == *param_2) {
        uVar4 = 0;
        if ((int)uVar6 < iVar5) {
          uVar4 = uVar7;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        _Dst = (param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x90;
        if (*(void **)(_Dst + 0x80) != (void *)0x0) {
          FMemory::Free(*(void **)(_Dst + 0x80));
        }
        *(undefined ***)(_Dst + 0x10) = &___7FIndexedCurve__6B_;
        if (*(void **)(_Dst + 0x68) != (void *)0x0) {
          FMemory::Free(*(void **)(_Dst + 0x68));
        }
        *(undefined4 *)(_Dst + 0x60) = 0;
        if (*(void **)(_Dst + 0x58) != (void *)0x0) {
          FMemory::Free(*(void **)(_Dst + 0x58));
        }
        TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(_Dst + 0x18));
        iVar5 = param_1->ArrayNum + ~uVar6;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + 0x90,(longlong)iVar5 * 0x90);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x90,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
        return true;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x90;
    } while ((int)uVar6 < iVar5);
  }
  return false;
}

// DuplicateCurveDataImpl<FFloatCurve> @ 14742a570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FRawCurveTracks::DuplicateCurveDataImpl<FFloatCurve>
          (FRawCurveTracks *this,TArray<FFloatCurve,TSizedDefaultAllocator<32>_> *param_1,
          FName *param_2,FName *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FFloatCurve *pFVar6;
  FFloatCurve *pFVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStackY_118 [32];
  undefined1 local_c8 [56];
  void *local_90;
  undefined8 local_88;
  longlong lStack_80;
  void *local_70;
  undefined4 local_68;
  void *local_60;
  longlong local_58;
  undefined4 local_50;
  undefined2 local_4c;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar6 = GetCurveDataImpl<FFloatCurve>(this,param_1,*param_2);
  if ((pFVar6 == (FFloatCurve *)0x0) ||
     (pFVar7 = GetCurveDataImpl<FFloatCurve>(this,param_1,*param_3), pFVar7 != (FFloatCurve *)0x0))
  {
    return false;
  }
  local_c8._8_4_ = (undefined4)pFVar6->_padding_;
  local_c8._0_8_ = *param_3;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_c8._16_8_ = &___7FRichCurve__6B_;
  local_c8._24_8_ = (void *)0x0;
  local_c8._32_8_ = 0;
  local_90 = (void *)0x0;
  local_88 = ___xmm_00000000ffffffff0000008000000000;
  lStack_80 = _UNK_150631d98;
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = 0x7f7fffff;
  local_4c = 0x404;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  if ((pFVar1 <= (FScriptContainerElement *)local_c8) &&
     (((FScriptContainerElement *)local_c8 < pFVar1 + (longlong)param_1->ArrayMax * 0x90 &&
      (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar3)))) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x890,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  FFloatCurve::FFloatCurve
            ((FFloatCurve *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x90),
             (FFloatCurve *)local_c8);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  local_c8._16_8_ = &___7FIndexedCurve__6B_;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  local_68 = 0;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  iVar5 = SUB84(local_c8._32_8_,4);
  local_c8._32_8_ = local_c8._32_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)(local_c8 + 0x18),0,(int *)(local_c8 + 0x24));
  }
  uVar9 = local_88._4_4_;
  lStack_80 = 0xffffffff;
  local_88 = (ulonglong)local_88._4_4_ << 0x20;
  if (0x80 < uVar9) {
    local_88 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x28),0);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  if ((void *)local_c8._24_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._24_8_);
  }
  uVar8 = param_1->ArrayNum - 1;
  uVar9 = 0;
  if ((int)uVar8 < param_1->ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  FRichCurve::operator=
            ((FRichCurve *)
             ((param_1->AllocatorInstance).Data + (longlong)(param_1->ArrayNum + -1) * 0x90 + 0x10),
             &pFVar6->FloatCurve);
  return true;
}

// GetCurveDataImpl<FFloatCurve> @ 14742c710

FFloatCurve * __thiscall
FRawCurveTracks::GetCurveDataImpl<FFloatCurve>
          (FRawCurveTracks *this,TArray<FFloatCurve,TSizedDefaultAllocator<32>_> *param_1,
          FName param_2)

{
  int iVar1;
  FFloatCurve *pFVar2;
  FFloatCurve *pFVar3;
  undefined1 local_res10 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar3 = (FFloatCurve *)(param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFloatCurve,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar3 == pFVar2) break;
    if ((FName)pFVar3->_padding_ == param_2) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FFloatCurve *)0x0;
}

// GetCurveDataImpl<FFloatCurve> @ 14742c790

FFloatCurve * __thiscall
FRawCurveTracks::GetCurveDataImpl<FFloatCurve>
          (FRawCurveTracks *this,TArray<FFloatCurve,TSizedDefaultAllocator<32>_> *param_1,
          FName param_2)

{
  int iVar1;
  FFloatCurve *pFVar2;
  FFloatCurve *pFVar3;
  undefined1 local_res10 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar3 = (FFloatCurve *)(param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFloatCurve_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar3 == pFVar2) break;
    if ((FName)pFVar3->_padding_ == param_2) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FFloatCurve *)0x0;
}

// operator() @ 14743bdb0

float __thiscall
`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  
  plVar1 = *(longlong **)this;
  uVar4 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  fVar5 = FRichCurve::Eval((FRichCurve *)((longlong)param_1 * 0x90 + *plVar1 + 0x10),
                           *(float *)((longlong)this + 8),0.0);
  return fVar5;
}

// AddCurveData @ 14743d0e0

bool __thiscall
FRawCurveTracks::AddCurveData
          (FRawCurveTracks *this,FName *param_1,int param_2,ERawCurveTrackTypes param_3)

{
  bool bVar1;
  
  bVar1 = AddCurveDataImpl<FFloatCurve>(this,&this->FloatCurves,param_1,param_2);
  return bVar1;
}

// DeleteAllCurveData @ 147445ff0

void __thiscall
FRawCurveTracks::DeleteAllCurveData(FRawCurveTracks *this,ERawCurveTrackTypes param_1)

{
  int *piVar1;
  
  DestructItems<FFloatCurve,int>
            ((FFloatCurve *)(this->FloatCurves).AllocatorInstance.Data,(this->FloatCurves).ArrayNum)
  ;
  piVar1 = &(this->FloatCurves).ArrayMax;
  (this->FloatCurves).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// DeleteCurveData @ 147446040

bool __thiscall
FRawCurveTracks::DeleteCurveData(FRawCurveTracks *this,FName *param_1,ERawCurveTrackTypes param_2)

{
  bool bVar1;
  
  bVar1 = DeleteCurveDataImpl<FFloatCurve>(this,&this->FloatCurves,param_1);
  return bVar1;
}

// DuplicateCurveData @ 1474487e0

bool __thiscall
FRawCurveTracks::DuplicateCurveData
          (FRawCurveTracks *this,FName *param_1,FName *param_2,ERawCurveTrackTypes param_3)

{
  bool bVar1;
  
  bVar1 = DuplicateCurveDataImpl<FFloatCurve>(this,&this->FloatCurves,param_1,param_2);
  return bVar1;
}

// EvaluateCurveData @ 14744a080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRawCurveTracks::EvaluateCurveData(FRawCurveTracks *this,FBlendedCurve *param_1,float param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_EvalRawCurveData> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar12;
  FName FVar13;
  longlong lVar14;
  uint uVar15;
  FName local_res8;
  FBlendedCurve *local_res10;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FRawCurveTracks local_e8;
  undefined8 local_d8;
  float fStack_d0;
  FColor_u_0 FStack_cc;
  FName local_c8;
  undefined8 local_b8;
  FName *local_b0;
  FName *local_a8;
  LARGE_INTEGER local_a0;
  FStatMessage local_98;
  FRawCurveTracks *local_88;
  undefined8 *local_80;
  FName local_78 [2];
  <lambda_2> local_68 [2];
  
  FVar11 = StatPtr_STAT_EvalRawCurveData;
  local_res10 = param_1;
  if (StatPtr_STAT_EvalRawCurveData == (FThreadSafeStaticStat<FStat_STAT_EvalRawCurveData>)0x0) {
    pFVar10 = ::FName::FName(local_78,"STAT_EvalRawCurveData");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_EvalRawCurveData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EvalRawCurveData,*pFVar10,
                        L"EvalRawCurveData","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  if ((FVar13.ComparisonIndex.Value.Value != 0) || (FVar13.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar13.ComparisonIndex.Value.Value;
        local_res8.Number = FVar13.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCurveTypes.cpp"
                   ,0x1aa);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_14744a1c9;
    }
  }
  bVar6 = false;
  FVar13 = local_c8;
LAB_14744a1c9:
  lVar3 = *(longlong *)&param_1->field_0x18;
  uVar2 = (this->FloatCurves).ArrayNum;
  local_b8._4_4_ = (undefined4)((ulonglong)this >> 0x20);
  local_d8._4_4_ = local_b8._4_4_;
  FStack_cc._s_0 = local_res18[0]._s_0;
  local_d8._0_4_ = SUB84(this,0);
  local_res20 = (FName)this;
  fStack_d0 = param_2;
  local_b8 = this;
  if (((lVar3 == 0) || (*(char *)(lVar3 + 0x18) == '\0')) ||
     ((*(char *)(lVar3 + 0x18) == '\x03' && (*(int *)(lVar3 + 8) == 0)))) {
    local_68[0]._12_4_ = local_res18[0].Bits;
    local_68[0].CurrentTime = param_2;
    local_68[0].__this = this;
    UE::Anim::FCurveUtils::
    BuildLinearUnfiltered<_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_1>,_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_1,uVar2,
               (<lambda_1>)this,local_68);
  }
  else {
    iVar12 = 0;
    local_e8.FloatCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.FloatCurves.ArrayNum = 0;
    local_e8.FloatCurves.ArrayMax = 0;
    if ((int)uVar2 < 1) {
      if ((int)uVar2 < 0) {
        local_d8 = this;
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<int>_>
                (4,4,uVar2,(ForElementType<int> *)&local_e8,&local_e8.FloatCurves.ArrayNum,
                 &local_e8.FloatCurves.ArrayMax);
      iVar12 = local_e8.FloatCurves.ArrayNum;
    }
    uVar15 = 0;
    if (0 < (int)uVar2) {
      lVar14 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar15 < iVar12) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(uint *)(local_e8.FloatCurves.AllocatorInstance.Data + lVar14 * 4) = uVar15;
        uVar15 = uVar15 + 1;
        lVar14 = lVar14 + 1;
        iVar12 = local_e8.FloatCurves.ArrayNum;
      } while (lVar14 < (int)uVar2);
    }
    local_a8 = &local_res20;
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UE::Anim::FCurveUtils::BuildUnsorted<_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_1>,_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>_>_>
              ((int *)local_e8.FloatCurves.AllocatorInstance.Data,iVar12,
               (FIdentityFunctor)local_res18[0]._0_1_,(<lambda_1> *)&local_a8);
    local_88 = &local_e8;
    local_80 = &local_d8;
    local_b8 = &local_e8;
    local_res10->field_0x10 = 1;
    local_b0 = &local_res20;
    UE::Anim::FCurveUtils::
    BuildSortedFiltered<_UE::Anim::FCurveUtils::BuildUnsorted<_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_1>,_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_2>,_UE::Anim::FCurveUtils::BuildUnsorted<_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_1>,_FRawCurveTracks::EvaluateCurveData_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_3>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              (local_res10,uVar2,&local_b8,&local_88,lVar3);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_98.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_98.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_98.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_98.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_98.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_98.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_98);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// GetCurveData @ 147454be0

FAnimCurveBase * __thiscall
FRawCurveTracks::GetCurveData(FRawCurveTracks *this,FName param_1,ERawCurveTrackTypes param_2)

{
  FFloatCurve *pFVar1;
  
  pFVar1 = GetCurveDataImpl<FFloatCurve>(this,&this->FloatCurves,param_1);
  return (FAnimCurveBase *)pFVar1;
}

// GetCurveData @ 147454c00

FAnimCurveBase * __thiscall
FRawCurveTracks::GetCurveData(FRawCurveTracks *this,FName param_1,ERawCurveTrackTypes param_2)

{
  int iVar1;
  FAnimCurveBase *pFVar2;
  FAnimCurveBase *pFVar3;
  undefined1 local_res18 [16];
  
  iVar1 = (this->FloatCurves).ArrayNum;
  pFVar3 = (FAnimCurveBase *)(this->FloatCurves).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0xc;
  while( true ) {
    if ((this->FloatCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFloatCurve_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3->CurveName == param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 0xc;
  }
  return (FAnimCurveBase *)0x0;
}

// PostSerializeFixup @ 14746fbd0

void __thiscall FRawCurveTracks::PostSerializeFixup(FRawCurveTracks *this,FArchive *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FloatCurves).ArrayNum;
  pFVar2 = (this->FloatCurves).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x90;
  while( true ) {
    if ((this->FloatCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFloatCurve,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x90;
  }
  return;
}

// Resize @ 147475790

void __thiscall
FRawCurveTracks::Resize
          (FRawCurveTracks *this,float param_1,bool param_2,float param_3,float param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FloatCurves).ArrayNum;
  pFVar2 = (this->FloatCurves).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x90;
  while( true ) {
    if ((this->FloatCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFloatCurve,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    FRichCurve::ReadjustTimeRange((FRichCurve *)(pFVar2 + 0x10),0.0,param_1,param_2,param_3,param_4)
    ;
    pFVar2 = pFVar2 + 0x90;
  }
  return;
}

