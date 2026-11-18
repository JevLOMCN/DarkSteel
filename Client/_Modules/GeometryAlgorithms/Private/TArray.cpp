// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 6

// CopyToEmpty<UE::Math::TVector2<double>,int> @ 1494e6080

void __thiscall
TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<UE::Math::TVector2<double>,int>
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *this,
          TVector2<double> *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 4);
  }
  return;
}

// Reset @ 149522ca0

void __thiscall
TArray<UE::Geometry::TGeneralPolygon2<float>,TSizedDefaultAllocator<32>_>::Reset
          (TArray<UE::Geometry::TGeneralPolygon2<float>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int *piVar1;
  TGeneralPolygon2<float> *pTVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pTVar2 = (TGeneralPolygon2<float> *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<UE::Geometry::TGeneralPolygon2<float>,int>(pTVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<UE::Geometry::TGeneralPolygon2<float>,int>(pTVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

// Reset @ 149522d30

void __thiscall
TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>::Reset
          (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int *piVar1;
  TGeneralPolygon2<double> *pTVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pTVar2 = (TGeneralPolygon2<double> *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>(pTVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>(pTVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

// SetNum @ 149523830

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<gte::Vector<3,double>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<gte::Vector<3,double>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
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
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x18,(longlong)iVar4 * 0x18);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 149523970

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<signed_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<signed_char,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2
          )

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
                      (1,1,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + iVar4,0,(longlong)(param_1 - iVar5));
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
        _Dst = (this->AllocatorInstance).Data + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// Reset @ 1495c98b0

void __thiscall
TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Reset
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

