// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 11

// TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> @ 14c945d20

TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>::
TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> @ 14c948d10

void __thiscall
TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
            ((TGeneralPolygon2<double> *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// RemoveAtImpl @ 14c984070

void __thiscall
TArray<UE::Geometry::TBasicBlockedDenseGrid3<int,8>::FBlock3,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<UE::Geometry::TBasicBlockedDenseGrid3<int,8>::FBlock3,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  FBlock3 *_Dst;
  
  _Dst = (FBlock3 *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<int,8>::FBlock3,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14c9840f0

void __thiscall
TArray<UE::Geometry::TBasicBlockedDenseGrid3<float,8>::FBlock3,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<UE::Geometry::TBasicBlockedDenseGrid3<float,8>::FBlock3,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  FBlock3 *_Dst;
  
  _Dst = (FBlock3 *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<float,8>::FBlock3,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14c984170

void __thiscall
TArray<UE::Geometry::TBasicBlockedDenseGrid3<bool,8>::FBlock3,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<UE::Geometry::TBasicBlockedDenseGrid3<bool,8>::FBlock3,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  FBlock3 *_Dst;
  
  _Dst = (FBlock3 *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<bool,8>::FBlock3,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14c9841f0

void __thiscall
TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14c984270

void __thiscall
TArray<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *_Dst;
  
  _Dst = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0xc0);
  DestructItems<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0xc0);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14c9842f0

void __thiscall
TArray<TUniquePtr<TStaticArray<std::atomic<int>,512,4294967295>,TDefaultDelete<TStaticArray<std::atomic<int>,512,4294967295>_>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TUniquePtr<TStaticArray<std::atomic<int>,512,4294967295>,TDefaultDelete<TStaticArray<std::atomic<int>,512,4294967295>_>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<TUniquePtr<TStaticArray<std::atomic<int>,512,4294967295>,TDefaultDelete<TStaticArray<std::atomic<int>,512,4294967295>_>_>,int>
            ((TUniquePtr<TStaticArray<std::atomic<int>,512,4294967295>,TDefaultDelete<TStaticArray<std::atomic<int>,512,4294967295>_>_>
              *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14c9850c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<std::atomic<int>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<std::atomic<int>,TSizedDefaultAllocator<32>_> *this,int param_1,
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
                      (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<std::atomic<int>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 4,param_1 - iVar5);
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 4,(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14c985200

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
SetNum(TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
       *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar5 * 0x10,0,
           (longlong)(param_1 - iVar2) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14c985330

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TUniquePtr<TStaticArray<std::atomic<int>,512,4294967295>,TDefaultDelete<TStaticArray<std::atomic<int>,512,4294967295>_>_>,TSizedDefaultAllocator<32>_>
::SetNum(TArray<TUniquePtr<TStaticArray<std::atomic<int>,512,4294967295>,TDefaultDelete<TStaticArray<std::atomic<int>,512,4294967295>_>_>,TSizedDefaultAllocator<32>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar5 * 8,0,(longlong)(param_1 - iVar2) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

