// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 13

// Append<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> @ 14cd9c640

void __thiscall
TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>::
Append<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 0xc,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 * 0xc);
  }
  return;
}

// Append<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> @ 14cd9c6f0

void __thiscall
TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::
Append<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,(param_1->AllocatorInstance).Data
           ,(longlong)iVar1 << 4);
  }
  return;
}

// Append<FLinearColor,TSizedDefaultAllocator<32>_> @ 14cd9c790

void __thiscall
TArray<FLinearColor,TSizedDefaultAllocator<32>_>::Append<FLinearColor,TSizedDefaultAllocator<32>_>
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *this,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,(param_1->AllocatorInstance).Data
           ,(longlong)iVar1 << 4);
  }
  return;
}

// operator= @ 14cda6b80

TArray<FKSkinnedLevelSetElem,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FKSkinnedLevelSetElem,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FKSkinnedLevelSetElem,TSizedDefaultAllocator<32>_> *this,
          TArray<FKSkinnedLevelSetElem,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FKSkinnedLevelSetElem *pFVar3;
  
  if (this != param_1) {
    DestructItems<FKSkinnedLevelSetElem,int>
              ((FKSkinnedLevelSetElem *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FKSkinnedLevelSetElem *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FKSkinnedLevelSetElem,FKSkinnedLevelSetElem,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14cda6c20

TArray<FNegativeSpaceDirectionalToleranceScale,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNegativeSpaceDirectionalToleranceScale,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FNegativeSpaceDirectionalToleranceScale,TSizedDefaultAllocator<32>_> *this,
          TArray<FNegativeSpaceDirectionalToleranceScale,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x28);
    }
  }
  return this;
}

// RemoveAtImpl @ 14cde28e0

void __thiscall
TArray<TSharedPtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,1>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TSharedPtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,1>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TSharedPtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,1> *_Dst;
  
  _Dst = (TSharedPtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,1>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 14cde2960

void __thiscall
TArray<FKConvexElem,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FKConvexElem,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FKConvexElem *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  this_00 = (FKConvexElem *)(pFVar1 + (longlong)param_1 * 0x100);
  FKConvexElem::~FKConvexElem(this_00);
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x100,(longlong)iVar2 << 8);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNum @ 14cde47a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FGeometryScriptBoneInfo,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FGeometryScriptBoneInfo,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,0x10,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FGeometryScriptBoneInfo,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0xe0,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0xe0;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0xe0,(longlong)iVar5 * 0xe0);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xe0,0x10,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14cde48f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FGeometryScriptBoneWeight,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 8,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// operator=<double_const_,int> @ 14ce22770

TArray<double,TSizedDefaultAllocator<32>_> * __thiscall
TArray<double,TSizedDefaultAllocator<32>_>::operator=<double_const_,int>
          (TArray<double,TSizedDefaultAllocator<32>_> *this,TArrayView<double_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  double *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  }
  return this;
}

// TArray<std::atomic<double>,TSizedDefaultAllocator<32>_> @ 14ceae550

TArray<std::atomic<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<std::atomic<double>,TSizedDefaultAllocator<32>_>::
TArray<std::atomic<double>,TSizedDefaultAllocator<32>_>
          (TArray<std::atomic<double>,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<std::atomic<double>,TSizedDefaultAllocator<32>_> @ 14ceaeab0

void __thiscall
TArray<std::atomic<double>,TSizedDefaultAllocator<32>_>::
~TArray<std::atomic<double>,TSizedDefaultAllocator<32>_>
          (TArray<std::atomic<double>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// RemoveAtImpl @ 14cec0e90

void __thiscall
TArray<FGeometryScriptIndexList,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FGeometryScriptIndexList,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FGeometryScriptIndexList *_Dst;
  int iVar1;
  
  _Dst = (FGeometryScriptIndexList *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<FGeometryScriptIndexList,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

