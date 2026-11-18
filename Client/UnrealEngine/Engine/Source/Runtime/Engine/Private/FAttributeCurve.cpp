// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// StaticStruct @ 147338710

UScriptStruct * __cdecl FAttributeCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAttributeCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAttributeCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAttributeCurve,(UObject *)pUVar1,
                         L"AttributeCurve");
  }
  return Z_Registration_Info_UScriptStruct_FAttributeCurve.OuterSingleton;
}

// GetNumKeys @ 147338750

int __thiscall FAttributeCurve::GetNumKeys(FAttributeCurve *this)

{
  return (this->Keys).ArrayNum;
}

// Duplicate @ 147338760

FAttributeCurve * __thiscall FAttributeCurve::Duplicate(FAttributeCurve *this)

{
  UScriptStruct *pUVar1;
  FAttributeCurve *pFVar2;
  
  pFVar2 = ::operator_new(0xb0);
  if (pFVar2 != (FAttributeCurve *)0x0) {
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    *(undefined4 *)&pFVar2->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar2->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar2->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar2->_padding_ + 4) = 0;
    pFVar2->_padding_ = 0;
    *(undefined4 *)&pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = (longlong)&___7FAttributeCurve__6B_;
    (pFVar2->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->Keys).ArrayNum = 0;
    (pFVar2->Keys).ArrayMax = 0;
    (pFVar2->ScriptStructPath).AssetPath.PackageName.ComparisonIndex = 0;
    (pFVar2->ScriptStructPath).AssetPath.PackageName.Number = 0;
    (pFVar2->ScriptStructPath).AssetPath.AssetName.ComparisonIndex = 0;
    (pFVar2->ScriptStructPath).AssetPath.AssetName.Number = 0;
    (pFVar2->ScriptStructPath).SubPathString.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar2->ScriptStructPath).SubPathString.Data.ArrayNum = 0;
    (pFVar2->ScriptStructPath).SubPathString.Data.ArrayMax = 0;
    (pFVar2->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    TArray<FAttributeKey,TSizedDefaultAllocator<32>_>::operator=(&pFVar2->Keys,&this->Keys);
    FSoftObjectPath::operator=(&pFVar2->ScriptStructPath,&this->ScriptStructPath);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (this->ScriptStruct).field0_0x0.DebugPtr, pUVar1 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (pFVar2->ScriptStruct).field0_0x0 = (this->ScriptStruct).field0_0x0;
    pFVar2->Operator = this->Operator;
    pFVar2->bShouldInterpolate = this->bShouldInterpolate;
    return pFVar2;
  }
  return (FAttributeCurve *)0x0;
}

// SetKeyTime @ 147338870

void __thiscall FAttributeCurve::SetKeyTime(FAttributeCurve *this,FKeyHandle param_1,float param_2)

{
  TWrappedAttribute<TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  int iVar5;
  bool bVar6;
  FAttributeKey *pFVar7;
  size_t _Size;
  void *_Size_00;
  void *in_R8;
  float in_XMM1_Da;
  ForAnyElementType local_30;
  int local_28;
  int local_24 [7];
  
  bVar6 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (bVar6) {
    pFVar7 = GetKey(this,param_1);
    fVar3 = pFVar7->Time;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = (pFVar7->Value).StructMemory.ArrayNum;
    _Size_00 = (void *)(longlong)local_28;
    _Src = (pFVar7->Value).StructMemory.AllocatorInstance.Data;
    if (local_28 == 0) {
      local_24[0] = 0;
      _Size_00 = in_R8;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_28,0,&local_30,local_28,local_24);
      memcpy(local_30.Data,_Src,(size_t)_Size_00);
    }
    DeleteKey(this,param_1);
    AddKey(this,in_XMM1_Da,_Size_00,(FKeyHandle)(uint)local_30.Data);
    pFVar7 = GetKey(this,param_1);
    iVar5 = local_28;
    _Src_00.Data = local_30.Data;
    pTVar1 = &pFVar7->Value;
    pFVar7->Time = fVar3;
    if (pTVar1 != (TWrappedAttribute<TSizedDefaultAllocator<32>_> *)&local_30) {
      _Size = (size_t)local_28;
      piVar2 = &(pFVar7->Value).StructMemory.ArrayMax;
      iVar4 = *piVar2;
      (pFVar7->Value).StructMemory.ArrayNum = local_28;
      if ((local_28 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_28,iVar4,(ForAnyElementType *)pTVar1,local_28,piVar2);
        if (iVar5 != 0) {
          memcpy((pTVar1->StructMemory).AllocatorInstance.Data,_Src_00.Data,_Size);
        }
      }
    }
    pFVar7->Time = param_2;
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  return;
}

// GetKeyTime @ 1473389f0

float __thiscall FAttributeCurve::GetKeyTime(FAttributeCurve *this,FKeyHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  bVar2 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (!bVar2) {
    return 0.0;
  }
  iVar3 = (**(code **)(this->_padding_ + 8))(this);
  FIndexedCurve::EnsureAllIndicesHaveHandles_Internal((FIndexedCurve *)this,iVar3);
  uVar4 = FIndexedCurve::GetIndex((FIndexedCurve *)this,param_1);
  uVar5 = 0;
  if ((int)uVar4 < (this->Keys).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar6 = (float)(*pcVar1)();
      return fVar6;
    }
  }
  return *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x18);
}

// FAttributeCurve @ 14733f5c0

FAttributeCurve * __thiscall
FAttributeCurve::FAttributeCurve(FAttributeCurve *this,FAttributeCurve *param_1)

{
  UScriptStruct *pUVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAttributeCurve__6B_;
  (this->ScriptStructPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ScriptStructPath).AssetPath.PackageName.Number = 0;
  (this->ScriptStructPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ScriptStructPath).AssetPath.AssetName.Number = 0;
  (this->ScriptStructPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Keys).ArrayNum = 0;
  (this->Keys).ArrayMax = 0;
  (this->ScriptStructPath).SubPathString.Data.ArrayNum = 0;
  (this->ScriptStructPath).SubPathString.Data.ArrayMax = 0;
  (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  TArray<FAttributeKey,TSizedDefaultAllocator<32>_>::operator=(&this->Keys,&param_1->Keys);
  FSoftObjectPath::operator=(&this->ScriptStructPath,&param_1->ScriptStructPath);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->ScriptStruct).field0_0x0.DebugPtr, pUVar1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ScriptStruct).field0_0x0 = (param_1->ScriptStruct).field0_0x0;
  this->Operator = param_1->Operator;
  this->bShouldInterpolate = param_1->bShouldInterpolate;
  return this;
}

// ~FAttributeCurve @ 147341a80

void __thiscall FAttributeCurve::~FAttributeCurve(FAttributeCurve *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAttributeCurve__6B_;
  pFVar1 = (this->ScriptStructPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAttributeKey,int>
            ((FAttributeKey *)(this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FIndexedCurve__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  return;
}

// AddKey @ 147345120

/* WARNING: Removing unreachable block (ram,0x0001473452c9) */

FKeyHandle __thiscall
FAttributeCurve::AddKey(FAttributeCurve *this,float param_1,void *param_2,FKeyHandle param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint in_EDX;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 in_register_0000008c;
  float in_XMM2_Da;
  float local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  
  uVar9 = 0;
  uVar6 = 0;
  uVar10 = uVar9;
  if (0 < (this->Keys).ArrayNum) {
    do {
      uVar6 = (uint)uVar10;
      uVar5 = 0;
      if ((int)uVar6 < (this->Keys).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (FKeyHandle)uVar6;
      }
      pFVar2 = (this->Keys).AllocatorInstance.Data + uVar9;
      if (in_XMM2_Da < *(float *)pFVar2 || in_XMM2_Da == *(float *)pFVar2) break;
      uVar6 = uVar6 + 1;
      uVar9 = uVar9 + 0x18;
      uVar10 = (ulonglong)uVar6;
    } while ((int)uVar6 < (this->Keys).ArrayNum);
  }
  pFVar2 = (this->Keys).AllocatorInstance.Data;
  local_40 = 0;
  local_38 = 0;
  local_48[0] = in_XMM2_Da;
  if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar2 + (longlong)(this->Keys).ArrayMax * 0x18)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (FKeyHandle)uVar6;
  }
  iVar7 = (this->Keys).ArrayNum;
  piVar1 = &(this->Keys).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Keys).AllocatorInstance,piVar1);
  }
  (this->Keys).ArrayNum = iVar7 + 1;
  lVar8 = (longlong)(int)uVar6;
  pFVar2 = (this->Keys).AllocatorInstance.Data + lVar8 * 0x18;
  memmove(pFVar2 + 0x18,pFVar2,(longlong)(int)(iVar7 - uVar6) * 0x18);
  pFVar2 = (this->Keys).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
  *(float *)(pFVar2 + lVar8 * 0x18) = local_48[0];
  *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = local_40;
  *(undefined4 *)(pFVar2 + lVar8 * 0x18 + 0x10) = (undefined4)local_38;
  *(undefined4 *)(pFVar2 + lVar8 * 0x18 + 0x14) = local_38._4_4_;
  local_38 = 0;
  local_40 = 0;
  UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>::Allocate
            ((TWrappedAttribute<TSizedDefaultAllocator<32>_> *)(pFVar2 + lVar8 * 0x18 + 8),
             (this->ScriptStruct).field0_0x0.DebugPtr);
  UScriptStruct::CopyScriptStruct
            ((this->ScriptStruct).field0_0x0.DebugPtr,*(void **)(pFVar2 + lVar8 * 0x18 + 8),
             (void *)CONCAT44(in_register_0000008c,param_3.Index),1);
  FKeyHandleMap::Add((FKeyHandleMap *)&this->_padding_,(FKeyHandle *)&stack0x00000028,uVar6);
  FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,in_EDX);
  return (FKeyHandle)in_EDX;
}

// CanEvaluate @ 147346e90

bool __thiscall FAttributeCurve::CanEvaluate(FAttributeCurve *this)

{
  if (((this->ScriptStruct).field0_0x0.DebugPtr != (UScriptStruct *)0x0) &&
     (0 < (this->Keys).ArrayNum)) {
    return true;
  }
  return false;
}

// DeleteKey @ 147349df0

void __thiscall FAttributeCurve::DeleteKey(FAttributeCurve *this,FKeyHandle param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FKeyHandle local_res10 [2];
  
  local_res10[0].Index = param_1.Index;
  uVar6 = FIndexedCurve::GetIndex((FIndexedCurve *)this,param_1);
  uVar7 = 0;
  if ((int)uVar6 < (this->Keys).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = (this->Keys).AllocatorInstance.Data;
  _Dst = pFVar2 + (longlong)(int)uVar6 * 0x18;
  pvVar3 = *(void **)(pFVar2 + (longlong)(int)uVar6 * 0x18 + 8);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  iVar8 = (this->Keys).ArrayNum + ~uVar6;
  if (iVar8 != 0) {
    memmove(_Dst,_Dst + 0x18,(longlong)iVar8 * 0x18);
  }
  piVar1 = &(this->Keys).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,&(this->Keys).AllocatorInstance,(this->Keys).ArrayNum,&(this->Keys).ArrayMax);
  FKeyHandleMap::Remove((FKeyHandleMap *)&this->_padding_,local_res10);
  return;
}

// EvaluateToPtr @ 14734c580

void __thiscall
FAttributeCurve::EvaluateToPtr
          (FAttributeCurve *this,UScriptStruct *param_1,float param_2,uchar *param_3)

{
  UScriptStruct *pUVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  void *pvVar14;
  uint uVar15;
  float fVar16;
  
  pUVar1 = (this->ScriptStruct).field0_0x0.DebugPtr;
  if (pUVar1 == (UScriptStruct *)0x0) {
    return;
  }
  if ((this->Keys).ArrayNum < 1) {
    return;
  }
  if (pUVar1 != param_1) {
    return;
  }
  uVar10 = 0;
  if (((this->Keys).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (this->Keys).AllocatorInstance.Data;
  iVar7 = (this->Keys).ArrayNum;
  pvVar14 = *(void **)(pFVar2 + 8);
  uVar15 = 0;
  uVar11 = 0;
  if (this->bShouldInterpolate == false) {
    if (iVar7 == 0) goto LAB_14734ca6f;
    if ((iVar7 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (param_2 < *(float *)(this->Keys).AllocatorInstance.Data) goto LAB_14734ca6f;
    iVar7 = (this->Keys).ArrayNum;
    if (iVar7 < 2) goto LAB_14734ca2f;
    uVar12 = iVar7 - 1;
    uVar9 = uVar15;
    if ((int)uVar12 < iVar7) {
      uVar9 = ~uVar12 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->Keys).ArrayNum;
    if (param_2 < *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x18)) {
      uVar13 = uVar10;
      if (0 < iVar7) {
        do {
          uVar12 = (uint)uVar13;
          uVar9 = uVar15;
          if ((int)uVar12 < (this->Keys).ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (param_2 < *(float *)((this->Keys).AllocatorInstance.Data + uVar10)) {
            uVar9 = uVar12 - 1;
            if ((int)(uVar12 - 1) < 0) {
              uVar9 = uVar15;
            }
            if ((int)uVar9 < (this->Keys).ArrayNum) {
              uVar11 = ~uVar9 >> 0x1f;
            }
            goto joined_r0x00014734c9cb;
          }
          uVar10 = uVar10 + 0x18;
          uVar13 = (ulonglong)(uVar12 + 1);
        } while ((int)(uVar12 + 1) < (this->Keys).ArrayNum);
      }
      goto LAB_14734ca6f;
    }
    uVar9 = iVar7 - 1;
    if ((int)uVar9 < iVar7) {
      uVar11 = ~uVar9 >> 0x1f;
    }
  }
  else {
    if (iVar7 == 0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2582139986237194315>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeCurve.cpp"
                         ,0x4b,"false");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14734ca6f;
    }
    if ((iVar7 < 2) || (param_2 < *(float *)pFVar2 || param_2 == *(float *)pFVar2)) {
LAB_14734ca2f:
      if (((this->Keys).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pvVar14 = *(void **)((this->Keys).AllocatorInstance.Data + 8);
      goto LAB_14734ca6f;
    }
    uVar9 = iVar7 - 1;
    if ((int)uVar9 < (this->Keys).ArrayNum) {
      uVar15 = ~uVar9 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (param_2 < *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x18)) {
      uVar15 = 1;
      iVar7 = iVar7 + -2;
      while (iVar5 = iVar7, 0 < iVar5) {
        iVar7 = iVar5 / 2;
        uVar9 = iVar7 + uVar15;
        uVar12 = uVar11;
        if ((int)uVar9 < (this->Keys).ArrayNum) {
          uVar12 = ~uVar9 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x18) <= param_2
           ) {
          uVar15 = uVar9 + 1;
          iVar7 = iVar5 + (-1 - iVar7);
        }
      }
      uVar9 = uVar15 - 1;
      uVar12 = uVar11;
      if ((int)uVar9 < (this->Keys).ArrayNum) {
        uVar12 = ~uVar9 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar8 = (longlong)(int)uVar9;
      pFVar2 = (this->Keys).AllocatorInstance.Data;
      if ((int)uVar15 < (this->Keys).ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Keys).AllocatorInstance.Data;
      fVar16 = *(float *)(pFVar3 + (longlong)(int)uVar15 * 0x18) - *(float *)(pFVar2 + lVar8 * 0x18)
      ;
      if (0.0 < fVar16) {
        (**(code **)((longlong)*this->Operator + 0x30))
                  (this->Operator,*(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8),
                   *(undefined8 *)(pFVar3 + (longlong)(int)uVar15 * 0x18 + 8),
                   (param_2 - *(float *)(pFVar2 + lVar8 * 0x18)) / fVar16,param_3);
        return;
      }
      pvVar14 = *(void **)(pFVar2 + lVar8 * 0x18 + 8);
      goto LAB_14734ca6f;
    }
    iVar7 = (this->Keys).ArrayNum;
    uVar9 = iVar7 - 1;
    if ((int)uVar9 < iVar7) {
      uVar11 = ~uVar9 >> 0x1f;
    }
  }
joined_r0x00014734c9cb:
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pvVar14 = *(void **)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x18 + 8);
LAB_14734ca6f:
  UScriptStruct::CopyScriptStruct((this->ScriptStruct).field0_0x0.DebugPtr,param_3,pvVar14,1);
  return;
}

// FindKey @ 14734d2a0

FKeyHandle __thiscall FAttributeCurve::FindKey(FAttributeCurve *this,float param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint in_EDX;
  int iVar8;
  int iVar9;
  float in_XMM3_Da;
  
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  iVar8 = 0;
  iVar9 = (this->Keys).ArrayNum + -1;
  if (-1 < iVar9) {
    do {
      iVar5 = iVar9 - iVar8;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 1;
      }
      uVar1 = (iVar5 >> 1) + iVar8;
      uVar6 = 0;
      if ((int)uVar1 < (this->Keys).ArrayNum) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (FKeyHandle)uVar7;
      }
      fVar2 = *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x18);
      if ((float)((uint)(fVar2 - param_2) & uVar7) <= in_XMM3_Da) {
        FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,in_EDX);
        return (FKeyHandle)in_EDX;
      }
      iVar5 = uVar1 + 1;
      if (param_2 <= fVar2) {
        iVar5 = iVar8;
        iVar9 = uVar1 - 1;
      }
      iVar8 = iVar5;
    } while (iVar8 <= iVar9);
  }
  FKeyHandle::Invalid();
  return (FKeyHandle)in_EDX;
}

// FindKeyBeforeOrAt @ 14734d3d0

FKeyHandle __thiscall FAttributeCurve::FindKeyBeforeOrAt(FAttributeCurve *this,float param_1)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  FKeyHandle FVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FKeyHandle *in_RDX;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float in_XMM2_Da;
  
  iVar2 = (this->Keys).ArrayNum;
  FVar6.Index = (uint)in_RDX;
  if (iVar2 != 0) {
    if ((iVar2 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (FKeyHandle)uVar7;
    }
    if (*(float *)(this->Keys).AllocatorInstance.Data <= in_XMM2_Da) {
      iVar2 = (this->Keys).ArrayNum;
      uVar10 = iVar2 - 1;
      uVar7 = 0;
      if ((int)uVar10 < iVar2) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (FKeyHandle)uVar7;
      }
      uVar7 = (this->Keys).ArrayNum - 1;
      if (in_XMM2_Da <
          *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18)) {
        uVar11 = 0xffffffff;
        uVar10 = 0;
        do {
          uVar8 = (int)(uVar7 + uVar10) / 2;
          uVar9 = 0;
          if ((int)uVar8 < (this->Keys).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (FKeyHandle)uVar7;
          }
          uVar12 = uVar8 + 1;
          fVar1 = *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x18);
          uVar9 = 0;
          if ((int)uVar12 < (this->Keys).ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (FKeyHandle)uVar7;
          }
          uVar9 = uVar8;
          uVar4 = uVar11;
          if ((fVar1 <= in_XMM2_Da) &&
             (uVar9 = uVar7, uVar4 = uVar8,
             *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x18) <=
             in_XMM2_Da)) {
            uVar10 = uVar12;
            uVar4 = uVar11;
          }
          uVar11 = uVar4;
          uVar7 = uVar9;
        } while ((int)uVar11 < 0);
        FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,FVar6.Index);
      }
      else {
        FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,FVar6.Index);
      }
      return (FKeyHandle)FVar6.Index;
    }
  }
  FKeyHandle::FKeyHandle(in_RDX);
  return (FKeyHandle)FVar6.Index;
}

// GetConstRefOfKeys @ 14734ecb0

TArray<FAttributeKey,TSizedDefaultAllocator<32>_> * __thiscall
FAttributeCurve::GetConstRefOfKeys(FAttributeCurve *this)

{
  return &this->Keys;
}

// GetCopyOfKeys @ 14734ecc0

TArray<FAttributeKey,TSizedDefaultAllocator<32>_> * __thiscall
FAttributeCurve::GetCopyOfKeys
          (FAttributeCurve *this,
          TArray<FAttributeKey,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FAttributeKey *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->Keys).ArrayNum;
  pFVar2 = (FAttributeKey *)(this->Keys).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FAttributeKey,FAttributeKey,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,iVar1);
  return __return_storage_ptr__;
}

// GetKey @ 14734f590

FAttributeKey * __thiscall FAttributeCurve::GetKey(FAttributeCurve *this,FKeyHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FAttributeKey *pFVar5;
  uint uVar6;
  
  iVar3 = (**(code **)(this->_padding_ + 8))();
  FIndexedCurve::EnsureAllIndicesHaveHandles_Internal((FIndexedCurve *)this,iVar3);
  uVar4 = FIndexedCurve::GetIndex((FIndexedCurve *)this,param_1);
  uVar6 = 0;
  if ((int)uVar4 < (this->Keys).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FAttributeKey *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FAttributeKey *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x18);
}

// GetKey @ 14734f620

FAttributeKey * __thiscall FAttributeCurve::GetKey(FAttributeCurve *this,FKeyHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FAttributeKey *pFVar5;
  uint uVar6;
  
  iVar3 = (**(code **)(this->_padding_ + 8))();
  FIndexedCurve::EnsureAllIndicesHaveHandles_Internal((FIndexedCurve *)this,iVar3);
  uVar4 = FIndexedCurve::GetIndex((FIndexedCurve *)this,param_1);
  uVar6 = 0;
  if ((int)uVar4 < (this->Keys).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FAttributeKey *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FAttributeKey *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x18);
}

// GetKeyIterator @ 14734f6b0

TIndexedContainerIterator<TArray<FAttributeKey,TSizedDefaultAllocator<32>_>_const_,FAttributeKey_const_,int>
* __thiscall
FAttributeCurve::GetKeyIterator
          (FAttributeCurve *this,
          TIndexedContainerIterator<TArray<FAttributeKey,TSizedDefaultAllocator<32>_>_const_,FAttributeKey_const_,int>
          *__return_storage_ptr__)

{
  __return_storage_ptr__->Index = 0;
  __return_storage_ptr__->Container = &this->Keys;
  return __return_storage_ptr__;
}

// HasAnyData @ 147351590

bool __thiscall FAttributeCurve::HasAnyData(FAttributeCurve *this)

{
  return (this->Keys).ArrayNum != 0;
}

// ReadjustTimeRange @ 147353ac0

void __thiscall
FAttributeCurve::ReadjustTimeRange
          (FAttributeCurve *this,float param_1,float param_2,bool param_3,float param_4,
          float param_5)

{
  FScriptContainerElement *pFVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FKeyHandle *pFVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FScriptContainerElement *in_R8;
  longlong lVar14;
  float fVar15;
  float in_XMM3_Da;
  float fVar16;
  float fVar17;
  uint local_e8 [2];
  ForAnyElementType local_e0;
  undefined8 local_d8;
  TWrappedAttribute<TSizedDefaultAllocator<32>_> local_d0;
  TWrappedAttribute<TSizedDefaultAllocator<32>_> local_c0;
  TWrappedAttribute<TSizedDefaultAllocator<32>_> local_b0 [8];
  
  fVar15 = param_1;
  iVar6 = (**(code **)(this->_padding_ + 8))();
  FIndexedCurve::EnsureAllIndicesHaveHandles_Internal((FIndexedCurve *)this,iVar6);
  uVar11 = 0;
  fVar17 = 0.0;
  uVar7 = 0;
  if (param_3) {
    uVar13 = uVar11;
    uVar12 = uVar11;
    if (0 < (this->Keys).ArrayNum) {
      do {
        uVar10 = (uint)uVar13;
        uVar9 = 0;
        if ((int)uVar10 < (this->Keys).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if (uVar9 == 0) {
          in_R8 = (FScriptContainerElement *)0x447;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar1 = (this->Keys).AllocatorInstance.Data;
        fVar16 = *(float *)(pFVar1 + uVar12);
        if (param_4 <= fVar16) {
          *(float *)(pFVar1 + uVar12) = fVar16 + (param_5 - param_4);
        }
        uVar13 = (ulonglong)(uVar10 + 1);
        uVar12 = uVar12 + 0x18;
      } while ((int)(uVar10 + 1) < (this->Keys).ArrayNum);
    }
  }
  else {
    bVar4 = false;
    local_d0.StructMemory.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.StructMemory.ArrayNum = 0;
    local_d0.StructMemory.ArrayMax = 0;
    UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>::Allocate
              (&local_d0,(this->ScriptStruct).field0_0x0.DebugPtr);
    local_e0.Data = (FScriptContainerElement *)0x0;
    local_d8 = 0;
    local_e8[0] = 0;
    uVar13 = uVar11;
    if (0 < (this->Keys).ArrayNum) {
      do {
        uVar10 = (uint)uVar13;
        uVar9 = uVar7;
        if ((int)uVar10 < (this->Keys).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if (uVar9 == 0) {
          in_R8 = (FScriptContainerElement *)0x447;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar1 = (this->Keys).AllocatorInstance.Data;
        fVar16 = *(float *)(pFVar1 + (longlong)(int)uVar10 * 0x18);
        if (fVar16 < param_4) {
          if (param_5 < fVar16) goto LAB_147353d69;
        }
        else if (param_5 < fVar16) {
LAB_147353d69:
          *(float *)(pFVar1 + (longlong)(int)uVar10 * 0x18) = fVar16 - (param_5 - param_4);
        }
        else {
          pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
          bVar4 = true;
          in_R8 = *(FScriptContainerElement **)(pUVar2->_padding_ + 0x390);
          (*(code *)in_R8)(pUVar2,local_d0.StructMemory.AllocatorInstance.Data);
          fVar16 = param_5;
          if (param_4 != 0.0) {
            fVar16 = param_4;
          }
          EvaluateToPtr(this,(this->ScriptStruct).field0_0x0.DebugPtr,fVar16,
                        (uchar *)local_d0.StructMemory.AllocatorInstance.Data);
          if (local_e0.Data <= (FScriptContainerElement *)local_e8) {
            in_R8 = (FScriptContainerElement *)local_e8;
            if (in_R8 < local_e0.Data + (longlong)local_d8._4_4_ * 4) {
              in_R8 = (FScriptContainerElement *)0x7a5;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
          iVar6 = (int)local_d8;
          if ((int)local_d8 == local_d8._4_4_) {
            in_R8 = (FScriptContainerElement *)((longlong)&local_d8 + 4);
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_e0,(int *)in_R8);
          }
          local_d8 = CONCAT44(local_d8._4_4_,iVar6 + 1);
          *(uint *)(local_e0.Data + (longlong)iVar6 * 4) = local_e8[0];
        }
        local_e8[0] = local_e8[0] + 1;
        uVar13 = (ulonglong)local_e8[0];
      } while ((int)local_e8[0] < (this->Keys).ArrayNum);
      if (bVar4) {
        uVar9 = (int)local_d8 - 1;
        if (-1 < (int)uVar9) {
          lVar14 = (longlong)(int)uVar9 * 4;
          do {
            uVar10 = uVar7;
            if ((int)uVar9 < (int)local_d8) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if (uVar10 == 0) {
              in_R8 = (FScriptContainerElement *)0x447;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            pFVar8 = FKeyHandleMap::FindKey
                               ((FKeyHandleMap *)&this->_padding_,*(int *)(local_e0.Data + lVar14));
            if (pFVar8 != (FKeyHandle *)0x0) {
              DeleteKey(this,(FKeyHandle)pFVar8->Index);
            }
            lVar14 = lVar14 + -4;
            uVar9 = uVar9 - 1;
          } while (-1 < (int)uVar9);
        }
        UpdateOrAddKey(this,fVar15,in_R8,in_XMM3_Da);
      }
    }
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
    }
    if (local_d0.StructMemory.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.StructMemory.AllocatorInstance.Data);
    }
  }
  RemoveRedundantKeys(this);
  iVar6 = (this->Keys).ArrayNum;
  if (iVar6 == 0) {
    fVar16 = 0.0;
  }
  else {
    if (iVar6 < 1) {
      in_R8 = (FScriptContainerElement *)0x447;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = (this->Keys).ArrayNum;
    uVar10 = iVar6 - 1;
    fVar17 = *(float *)(this->Keys).AllocatorInstance.Data;
    uVar9 = uVar7;
    if ((int)uVar10 < iVar6) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if (uVar9 == 0) {
      in_R8 = (FScriptContainerElement *)0x447;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    fVar16 = *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18);
  }
  bVar4 = false;
  if (fVar17 < param_1) {
    local_c0.StructMemory.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.StructMemory.ArrayNum = 0;
    local_c0.StructMemory.ArrayMax = 0;
    UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>::Allocate
              (&local_c0,(this->ScriptStruct).field0_0x0.DebugPtr);
    EvaluateToPtr(this,(this->ScriptStruct).field0_0x0.DebugPtr,param_1,
                  (uchar *)local_c0.StructMemory.AllocatorInstance.Data);
    UpdateOrAddKey(this,fVar15,in_R8,in_XMM3_Da);
    bVar4 = true;
    if (local_c0.StructMemory.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.StructMemory.AllocatorInstance.Data);
    }
  }
  if (fVar16 <= param_2) {
    if (!bVar4) {
      return;
    }
  }
  else {
    local_b0[0].StructMemory.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0[0].StructMemory.ArrayNum = 0;
    local_b0[0].StructMemory.ArrayMax = 0;
    UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>::Allocate
              (local_b0,(this->ScriptStruct).field0_0x0.DebugPtr);
    EvaluateToPtr(this,(this->ScriptStruct).field0_0x0.DebugPtr,param_2,
                  (uchar *)local_b0[0].StructMemory.AllocatorInstance.Data);
    UpdateOrAddKey(this,fVar15,in_R8,in_XMM3_Da);
    if (local_b0[0].StructMemory.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0[0].StructMemory.AllocatorInstance.Data);
    }
  }
  uVar13 = uVar11;
  if (0 < (this->Keys).ArrayNum) {
    do {
      uVar10 = (uint)uVar11;
      uVar9 = uVar7;
      if ((int)uVar10 < (this->Keys).ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->Keys).AllocatorInstance.Data + uVar13;
      if (*(float *)pFVar1 <= param_1 && param_1 != *(float *)pFVar1) {
LAB_1473540ce:
        pFVar8 = FKeyHandleMap::FindKey((FKeyHandleMap *)&this->_padding_,uVar10);
        if (pFVar8 != (FKeyHandle *)0x0) {
          DeleteKey(this,(FKeyHandle)pFVar8->Index);
          uVar10 = uVar10 - 1;
          uVar13 = uVar13 - 0x18;
        }
      }
      else {
        uVar9 = uVar7;
        if ((int)uVar10 < (this->Keys).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (param_2 < *(float *)((this->Keys).AllocatorInstance.Data + uVar13)) goto LAB_1473540ce;
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar13 = uVar13 + 0x18;
    } while ((int)(uVar10 + 1) < (this->Keys).ArrayNum);
  }
  return;
}

// RemoveRedundantKeys @ 147355180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAttributeCurve::RemoveRedundantKeys(FAttributeCurve *this)

{
  uint *puVar1;
  FAttributeKey *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  UScriptStruct *this_00;
  void *pvVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FKeyHandle FVar12;
  ulonglong uVar13;
  undefined4 extraout_var;
  byte bVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  ForElementType<unsigned_int> FVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  undefined1 auStackY_158 [32];
  ForAnyElementType local_108;
  undefined8 uStack_100;
  int local_f8;
  uint local_f4;
  int local_f0;
  uint uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_e8;
  undefined4 local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  int local_cc;
  undefined1 local_c8 [8];
  longlong *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  FSparseArrayAllocationInfo local_98;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  iVar11 = (this->Keys).ArrayNum;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (0 < iVar11) {
    lVar24 = 0x30;
    uVar21 = 1;
    do {
      uVar23 = uVar21 + 1;
      local_f4 = uVar21;
      if ((int)uVar23 < iVar11) {
        uVar16 = 0;
        if ((int)(uVar21 - 1) < iVar11) {
          uVar16 = ~(uVar21 - 1) >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar3 = (this->Keys).AllocatorInstance.Data;
        uVar16 = 0;
        if ((int)uVar21 < (this->Keys).ArrayNum) {
          uVar16 = ~uVar21 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar4 = (this->Keys).AllocatorInstance.Data;
        uVar16 = 0;
        if ((int)uVar23 < (this->Keys).ArrayNum) {
          uVar16 = ~uVar23 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (this->Keys).AllocatorInstance.Data;
        bVar9 = UScriptStruct::CompareScriptStruct
                          ((this->ScriptStruct).field0_0x0.DebugPtr,
                           *(void **)(pFVar3 + lVar24 + -0x28),*(void **)(pFVar4 + lVar24 + -0x10),0
                          );
        if ((bVar9) &&
           (bVar9 = UScriptStruct::CompareScriptStruct
                              ((this->ScriptStruct).field0_0x0.DebugPtr,
                               *(void **)(pFVar4 + lVar24 + -0x10),*(void **)(pFVar5 + lVar24 + 8),0
                              ), bVar9)) {
          if (local_54 == 0) {
            iVar11 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0xc,4,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                                (int *)(local_88 + 0xc));
            iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                               ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),1);
            FVar17 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
            if (local_68 != (ForElementType<unsigned_int>)0x0) {
              FVar17 = local_68;
            }
            bVar14 = (byte)iVar10 & 0x1f;
            if (iVar10 < 0) {
              iVar10 = iVar10 + 0x1f;
              bVar14 = bVar14 - 0x20;
            }
            puVar1 = (uint *)((longlong)FVar17 + (longlong)(iVar10 >> 5) * 4);
            *puVar1 = *puVar1 & ~(1 << (bVar14 & 0x1f));
            iVar10 = local_58;
          }
          else {
            local_54 = local_54 + -1;
            iVar10 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0xc + 4);
            iVar11 = local_58;
            if (local_54 != 0) {
              *(undefined4 *)(local_88._0_8_ + (longlong)iVar10 * 0xc) = 0xffffffff;
            }
          }
          local_58 = iVar10;
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_88,&local_98,iVar11);
          pvVar6 = local_98.Pointer;
          if (local_98.Pointer != (TSparseSetElement<int> *)0x0) {
            *(uint *)local_98.Pointer = uVar21;
            *(undefined4 *)((longlong)local_98.Pointer + 4) = 0xffffffff;
          }
          uVar21 = *(uint *)local_98.Pointer;
          local_f8 = local_98.Index;
          bVar9 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::TryReplaceExisting
                            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88,
                             uVar21,local_98.Pointer,&local_f8,(bool *)0x0);
          if (!bVar9) {
            uVar20 = 1;
            uVar16 = local_88._8_4_ - local_54;
            if (3 < uVar16) {
              uVar18 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
              lVar19 = 0x3f;
              if (uVar18 != 0) {
                for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              local_d0 = (undefined4)lVar19;
              uVar20 = 1 << ((byte)lVar19 & 0x1f);
            }
            if (((int)uVar16 < 1) || ((int)uVar20 <= (int)local_40)) {
              uVar21 = local_40 - 1 & uVar21;
              *(uint *)((longlong)pvVar6 + 8) = uVar21;
              FVar15.Data = (FScriptContainerElement *)local_50;
              if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar15.Data = local_48.Data;
              }
              uVar18 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar21;
              *(undefined4 *)((longlong)pvVar6 + 4) =
                   *(undefined4 *)((longlong)FVar15.Data + uVar18 * 4);
              *(int *)((longlong)FVar15.Data + uVar18 * 4) = local_f8;
            }
            else {
              local_40 = uVar20;
              if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_48,0,0,4);
              }
              if (uVar20 != 0) {
                uVar21 = uVar20;
                if (uVar20 < 2) {
                  if ((ForElementType<FSetElementId>)local_48.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    uVar21 = 0;
                    goto LAB_1473554b2;
                  }
                }
                else {
LAB_1473554b2:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_48,0,uVar21,4);
                }
                if (0 < (int)uVar20) {
                  uVar22 = (ulonglong)uVar20;
                  uVar18 = 0;
                  do {
                    FVar15.Data = (FScriptContainerElement *)local_50;
                    if ((ForElementType<FSetElementId>)local_48.Data !=
                        (ForElementType<FSetElementId>)0x0) {
                      FVar15.Data = local_48.Data;
                    }
                    uVar13 = uVar18 & (longlong)(int)uVar20 - 1U;
                    uVar18 = uVar18 + 1;
                    *(undefined4 *)((longlong)FVar15.Data + uVar13 * 4) = 0xffffffff;
                    uVar22 = uVar22 - 1;
                  } while (uVar22 != 0);
                }
              }
              if (local_40 != 0) {
                pTStack_e8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
                uStack_ec = 1;
                local_f0 = 0;
                iStack_dc = 0;
                iStack_d8 = 0;
                if (local_60 != 0) {
                  FVar17 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
                  if (local_68 != (ForElementType<unsigned_int>)0x0) {
                    FVar17 = local_68;
                  }
                  uVar21 = *(uint *)FVar17;
                  iStack_d8 = 0;
                  local_f0 = 0;
                  while (uVar21 == 0) {
                    iStack_d8 = iStack_d8 + 0x20;
                    lVar19 = (longlong)local_f0;
                    local_f0 = local_f0 + 1;
                    if ((int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < local_f0)
                    goto LAB_1473555c1;
                    uVar21 = ((uint *)((longlong)FVar17 + 4))[lVar19];
                  }
                  uStack_ec = -uVar21 & uVar21;
                  uVar18 = (ulonglong)uStack_ec * 2 + 1;
                  lVar19 = 0x3f;
                  if (uVar18 != 0) {
                    for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                    }
                  }
                  local_cc = (int)lVar19;
                  iStack_dc = iStack_d8 + -1 + local_cc;
                  if (local_60 < iStack_dc) {
LAB_1473555c1:
                    iStack_dc = local_60;
                  }
                }
                local_e0 = 0xffffffff;
                local_c0 = (longlong *)local_88;
                local_b8._padding_ = CONCAT44(uStack_ec,local_f0);
                local_b8.CurrentBitIndex = iStack_dc;
                local_b8.UnvisitedBitMask = 0xffffffff;
                local_b8._28_4_ = uStack_d4;
                local_b8.BaseBitIndex = iStack_d8;
                local_b8.Array = pTStack_e8;
                iVar11 = iStack_dc;
                if (iStack_dc < local_60) {
                  do {
                    uVar21 = local_40 - 1 & *(uint *)(*local_c0 + (longlong)iVar11 * 0xc);
                    lVar19 = *local_c0 + (longlong)iVar11 * 0xc;
                    *(uint *)(lVar19 + 8) = uVar21;
                    FVar15.Data = (FScriptContainerElement *)local_50;
                    if ((ForElementType<FSetElementId>)local_48.Data !=
                        (ForElementType<FSetElementId>)0x0) {
                      FVar15.Data = local_48.Data;
                    }
                    uVar18 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar21;
                    *(undefined4 *)(lVar19 + 4) =
                         *(undefined4 *)((longlong)FVar15.Data + uVar18 * 4);
                    *(int *)((longlong)FVar15.Data + uVar18 * 4) = iVar11;
                    local_b8.UnvisitedBitMask =
                         local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
                    iVar11 = local_b8.CurrentBitIndex;
                  } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
                }
              }
            }
          }
        }
      }
      iVar11 = (this->Keys).ArrayNum;
      lVar24 = lVar24 + 0x18;
      uVar21 = uVar23;
    } while ((int)local_f4 < iVar11);
  }
  if (local_88._8_4_ - local_54 != 0) {
    uVar21 = iVar11 - (local_88._8_4_ - local_54);
    local_108.Data = (FScriptContainerElement *)0x0;
    uStack_100 = 0;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    if (0 < (int)uVar21) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar21,&local_108,0,(int *)((longlong)&uStack_100 + 4));
    }
    uVar21 = 0;
    if (0 < (this->Keys).ArrayNum) {
      do {
        if (local_88._8_4_ != local_54) {
          FVar15.Data = (FScriptContainerElement *)local_50;
          if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
            FVar15.Data = local_48.Data;
          }
          for (iVar11 = *(int *)((longlong)FVar15.Data + (ulonglong)(local_40 - 1 & uVar21) * 4);
              iVar11 != -1; iVar11 = *(int *)(local_88._0_8_ + (longlong)iVar11 * 0xc + 4)) {
            if (*(uint *)(local_88._0_8_ + (longlong)iVar11 * 0xc) == uVar21) goto LAB_14735586b;
          }
        }
        uVar23 = 0;
        if ((int)uVar21 < (this->Keys).ArrayNum) {
          uVar23 = ~uVar21 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar2 = (FAttributeKey *)
                 ((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x18);
        if (((local_108.Data <= pFVar2) &&
            (pFVar2 < (FAttributeKey *)(local_108.Data + (longlong)uStack_100._4_4_ * 0x18))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((int)uStack_100 == uStack_100._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_108,(int *)((longlong)&uStack_100 + 4));
          uStack_100 = CONCAT44(uStack_100._4_4_,iVar11);
        }
        lVar24 = (longlong)(int)uStack_100;
        uStack_100 = CONCAT44(uStack_100._4_4_,(int)uStack_100 + 1);
        FAttributeKey::FAttributeKey((FAttributeKey *)(local_108.Data + lVar24 * 0x18),pFVar2);
LAB_14735586b:
        uVar21 = uVar21 + 1;
      } while ((int)uVar21 < (this->Keys).ArrayNum);
    }
    pFVar2 = (FAttributeKey *)(this->Keys).AllocatorInstance.Data;
    uVar8._0_4_ = (this->Keys).ArrayNum;
    uVar8._4_4_ = (this->Keys).ArrayMax;
    (this->Keys).AllocatorInstance.Data = local_108.Data;
    (this->Keys).ArrayNum = (int)uStack_100;
    (this->Keys).ArrayMax = uStack_100._4_4_;
    local_108.Data = (FScriptContainerElement *)pFVar2;
    uStack_100 = uVar8;
    FKeyHandleMap::Empty((FKeyHandleMap *)&this->_padding_,(this->Keys).ArrayNum);
    FKeyHandleMap::SetKeyHandles((FKeyHandleMap *)&this->_padding_,(this->Keys).ArrayNum);
    DestructItems<FAttributeKey,int>((FAttributeKey *)local_108.Data,(int)uStack_100);
    if ((FAttributeKey *)local_108.Data != (FAttributeKey *)0x0) {
      FMemory::Free(local_108.Data);
    }
  }
  if ((this->Keys).ArrayNum == 2) {
    this_00 = (this->ScriptStruct).field0_0x0.DebugPtr;
    pvVar6 = *(void **)((this->Keys).AllocatorInstance.Data + 0x20);
    if (((this->Keys).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    bVar9 = UScriptStruct::CompareScriptStruct
                      (this_00,*(void **)((this->Keys).AllocatorInstance.Data + 8),pvVar6,0);
    if (bVar9) {
      FVar12 = FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,(int)local_c8);
      DeleteKey(this,(FKeyHandle)*(uint *)CONCAT44(extraout_var,FVar12.Index));
    }
  }
  local_40 = 0;
  if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// Reset @ 147355f40

void __thiscall FAttributeCurve::Reset(FAttributeCurve *this)

{
  int *piVar1;
  
  DestructItems<FAttributeKey,int>
            ((FAttributeKey *)(this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  piVar1 = &(this->Keys).ArrayMax;
  (this->Keys).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->Keys).AllocatorInstance,0,piVar1);
  }
  FKeyHandleMap::Empty((FKeyHandleMap *)&this->_padding_,0);
  return;
}

// Serialize @ 147356320

bool __thiscall FAttributeCurve::Serialize(FAttributeCurve *this,FArchive *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UScriptStruct *pUVar5;
  UClass *pUVar6;
  IAttributeBlendOperator *pIVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UScriptStruct *local_48;
  UScriptStruct *local_40;
  
  TArrayPrivateFriend::Serialize<FAttributeKey,TSizedDefaultAllocator<32>_>(param_1,&this->Keys);
  (**(code **)(*(longlong *)param_1 + 0x140))(param_1);
  if ((this->ScriptStructPath).AssetPath.PackageName == (FName)0x0) {
    return true;
  }
  if ((param_1->field_0x28 & 4) != 0) {
    if (((this->ScriptStruct).field0_0x0.DebugPtr == (UScriptStruct *)0x0) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2582139986237194592>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeCurve.cpp"
                           ,0x160,"ScriptStruct"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar1 = (this->Keys).ArrayNum;
    pFVar8 = (this->Keys).AllocatorInstance.Data;
    pFVar9 = pFVar8 + (longlong)iVar1 * 0x18;
    while( true ) {
      if ((this->Keys).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FAttributeKey,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar8 == pFVar9) break;
      UScriptStruct::SerializeItem
                ((this->ScriptStruct).field0_0x0.DebugPtr,param_1,*(void **)(pFVar8 + 8),(void *)0x0
                );
      pFVar8 = pFVar8 + 0x18;
    }
    return true;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    return true;
  }
  pUVar5 = (UScriptStruct *)FSoftObjectPath::ResolveObject(&this->ScriptStructPath);
  if (pUVar5 != (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) goto LAB_14735643e;
  }
  pUVar5 = (UScriptStruct *)0x0;
LAB_14735643e:
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar5 == (UScriptStruct *)0x0)) {
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar5;
    if ((pUVar5 == (UScriptStruct *)0x0) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2582139986237194601>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeCurve.cpp"
                           ,0x169,"ScriptStruct"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar5;
  }
  iVar1 = (this->Keys).ArrayNum;
  pFVar8 = (this->Keys).AllocatorInstance.Data;
  pFVar9 = pFVar8 + 8;
  while( true ) {
    if ((this->Keys).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FAttributeKey,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 + -8 == pFVar8 + (longlong)iVar1 * 0x18) break;
    UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>::Allocate
              ((TWrappedAttribute<TSizedDefaultAllocator<32>_> *)pFVar9,
               (this->ScriptStruct).field0_0x0.DebugPtr);
    UScriptStruct::SerializeItem
              ((this->ScriptStruct).field0_0x0.DebugPtr,param_1,*(void **)pFVar9,(void *)0x0);
    pFVar9 = pFVar9 + 0x18;
  }
  pUVar5 = (this->ScriptStruct).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar5 != (UScriptStruct *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_48 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_48);
  pIVar7 = UE::Anim::AttributeTypes::GetTypeOperator
                     ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)local_res18);
  this->Operator = pIVar7;
  if ((pIVar7 == (IAttributeBlendOperator *)0x0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2582139986237194610>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeCurve.cpp"
                         ,0x172,"Operator"), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pUVar5 = (this->ScriptStruct).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar5 != (UScriptStruct *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_40 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_40);
  bVar3 = UE::Anim::AttributeTypes::CanInterpolateType
                    ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)local_res20);
  this->bShouldInterpolate = bVar3;
  return true;
}

// SetKeys @ 1473575a0

void __thiscall
FAttributeCurve::SetKeys
          (FAttributeCurve *this,TArrayView<float_const_,int> *param_1,
          TArrayView<void_const_*,int> *param_2)

{
  TArray<FAttributeKey,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  UScriptStruct *pUVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  longlong local_res20;
  longlong local_68;
  
  uVar13 = param_1->ArrayNum;
  if ((uVar13 != param_2->ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTimes.Num() == InValues.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeCurve.cpp"
                         ,0x183,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = &this->Keys;
  piVar15 = &(this->Keys).ArrayNum;
  DestructItems<FAttributeKey,int>
            ((FAttributeKey *)(this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  piVar1 = &(this->Keys).ArrayMax;
  *piVar15 = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&this_00->AllocatorInstance,0,piVar1);
  }
  FKeyHandleMap::Empty((FKeyHandleMap *)&this->_padding_,0);
  iVar10 = *piVar15;
  if (iVar10 < (int)uVar13) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,uVar13 - iVar10,&this_00->AllocatorInstance,piVar15,piVar1);
    DefaultConstructItems<FAttributeKey,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar9 * 0x18,uVar13 - iVar10);
  }
  else {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if ((int)uVar13 < iVar10) {
      uVar11 = iVar10 - uVar13;
      if (((int)(uVar11 | uVar13) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar11 != 0) {
        TArray<FAttributeKey,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar13,uVar11);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&this_00->AllocatorInstance,*piVar15,piVar1);
      }
    }
  }
  FKeyHandleMap::SetKeyHandles((FKeyHandleMap *)&this->_padding_,uVar13);
  uVar13 = 0;
  if (0 < (this->Keys).ArrayNum) {
    local_res20 = 0;
    local_68 = 0;
    do {
      piVar15 = &(this->Keys).ArrayNum;
      uVar12 = ~uVar13 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar3 = param_1->DataPtr[local_res20];
      uVar11 = 0;
      if ((int)uVar13 < *piVar15) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(float *)((this_00->AllocatorInstance).Data + local_68) = fVar3;
      uVar11 = 0;
      if ((int)uVar13 < *piVar15) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (this_00->AllocatorInstance).Data;
      pUVar5 = (this->ScriptStruct).field0_0x0.DebugPtr;
      if (pUVar5 == (UScriptStruct *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\WrappedAttribute.h"
                           ,0x48,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        iVar10 = (int)*(short *)((longlong)&pUVar5->_padding_ + 4);
        uVar11 = iVar10 + -1 + (int)pUVar5->_padding_ & -iVar10;
        if (((int)uVar11 < 1) &&
           (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_2142383606264233908>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\WrappedAttribute.h"
                               ,0x4c,"StructureSize > 0"), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = *(int *)(pFVar4 + local_68 + 0x10);
        pFVar2 = pFVar4 + local_68 + 0x10;
        if (iVar10 < (int)uVar11) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,uVar11 - iVar10,(ForAnyElementType *)(pFVar4 + local_68 + 8),
                             (int *)pFVar2,(int *)(pFVar4 + local_68 + 0x14));
          memset((void *)((longlong)iVar9 + *(longlong *)(pFVar4 + local_68 + 8)),0,
                 (longlong)(int)(uVar11 - iVar10));
        }
        else {
          if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
          }
          if ((int)uVar11 < iVar10) {
            uVar14 = iVar10 - uVar11;
            if (((int)(uVar14 | uVar11) < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (uVar14 != 0) {
              iVar10 = (*(int *)pFVar2 - uVar11) - uVar14;
              if (iVar10 != 0) {
                memmove((void *)((longlong)(int)uVar11 + *(longlong *)(pFVar4 + local_68 + 8)),
                        (void *)((longlong)(int)uVar14 +
                                (longlong)(int)uVar11 + *(longlong *)(pFVar4 + local_68 + 8)),
                        (longlong)iVar10);
              }
              *(uint *)pFVar2 = *(int *)pFVar2 - uVar14;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,(ForAnyElementType *)(pFVar4 + local_68 + 8),*(int *)pFVar2,
                         (int *)(pFVar4 + local_68 + 0x14));
            }
          }
        }
        (**(code **)(pUVar5->_padding_ + 0x2f8))(pUVar5,*(undefined8 *)(pFVar4 + local_68 + 8),1);
      }
      pUVar5 = (this->ScriptStruct).field0_0x0.DebugPtr;
      uVar11 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pvVar6 = param_2->DataPtr[local_res20];
      uVar11 = 0;
      if ((int)uVar13 < (this->Keys).ArrayNum) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      UScriptStruct::CopyScriptStruct
                (pUVar5,*(void **)((this_00->AllocatorInstance).Data + local_68 + 8),pvVar6,1);
      local_res20 = local_res20 + 1;
      local_68 = local_68 + 0x18;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (this->Keys).ArrayNum);
  }
  return;
}

// SetScriptStruct @ 147357e70

void __thiscall FAttributeCurve::SetScriptStruct(FAttributeCurve *this,UScriptStruct *param_1)

{
  FUtf8String *pFVar1;
  UScriptStruct *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  IAttributeBlendOperator *pIVar6;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UScriptStruct *local_res20;
  UScriptStruct *local_48;
  FSoftObjectPath local_40;
  
  if ((param_1 != (UScriptStruct *)0x0) &&
     (((pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr, pUVar2 == (UScriptStruct *)0x0 ||
       (pUVar2 != param_1)) && ((this->Keys).ArrayNum == 0)))) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = param_1;
    local_40.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_40.AssetPath.PackageName.Number = 0;
    local_40.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_40.AssetPath.AssetName.Number = 0;
    local_40.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.SubPathString.Data.ArrayNum = 0;
    local_40.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_40,(UObject *)param_1);
    pFVar1 = &(this->ScriptStructPath).SubPathString;
    (this->ScriptStructPath).AssetPath.PackageName = local_40.AssetPath.PackageName;
    (this->ScriptStructPath).AssetPath.AssetName = local_40.AssetPath.AssetName;
    if (pFVar1 != &local_40.SubPathString) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_40.SubPathString.Data.AllocatorInstance.Data;
      (this->ScriptStructPath).SubPathString.Data.ArrayNum = local_40.SubPathString.Data.ArrayNum;
      (this->ScriptStructPath).SubPathString.Data.ArrayMax = local_40.SubPathString.Data.ArrayMax;
      local_40.SubPathString.Data.ArrayNum = 0;
      local_40.SubPathString.Data.ArrayMax = 0;
      local_40.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_40.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.SubPathString.Data.AllocatorInstance.Data);
    }
    pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar2 != (UScriptStruct *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res20 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    pIVar6 = UE::Anim::AttributeTypes::GetTypeOperator
                       ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)local_res10);
    this->Operator = pIVar6;
    if ((pIVar6 == (IAttributeBlendOperator *)0x0) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2582139986237194268>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeCurve.cpp"
                           ,0x1c,"Operator"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar2 != (UScriptStruct *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_48 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_48);
    bVar5 = UE::Anim::AttributeTypes::CanInterpolateType
                      ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)local_res18);
    this->bShouldInterpolate = bVar5;
  }
  return;
}

// UpdateOrAddKey @ 14735d710

FKeyHandle __thiscall
FAttributeCurve::UpdateOrAddKey(FAttributeCurve *this,float param_1,void *param_2,float param_3)

{
  UScriptStruct *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint in_EDX;
  uint uVar5;
  longlong lVar6;
  void *in_R9;
  float in_XMM2_Da;
  FKeyHandle local_res8 [2];
  float in_stack_00000028;
  
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar5 = 0;
  if (0 < (this->Keys).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Keys).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if (uVar3 == 0) {
        param_2 = (void *)0x447;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (FKeyHandle)uVar4;
        }
      }
      param_1 = *(float *)((this->Keys).AllocatorInstance.Data + lVar6);
      if ((float)((uint)(param_1 - in_XMM2_Da) & uVar4) <= in_stack_00000028) {
        this_00 = (this->ScriptStruct).field0_0x0.DebugPtr;
        uVar4 = 0;
        if ((int)uVar5 < (this->Keys).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (FKeyHandle)uVar4;
        }
        UScriptStruct::CopyScriptStruct
                  (this_00,*(void **)((this->Keys).AllocatorInstance.Data +
                                     (longlong)(int)uVar5 * 0x18 + 8),in_R9,1);
        FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,in_EDX);
        return (FKeyHandle)in_EDX;
      }
      if (in_XMM2_Da < param_1) break;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while ((int)uVar5 < (this->Keys).ArrayNum);
  }
  FKeyHandle::FKeyHandle(local_res8);
  AddKey(this,param_1,param_2,(FKeyHandle)(uint)in_R9);
  return (FKeyHandle)in_EDX;
}

