// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 14

// TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_><UE::Math::TVector<float>_const_,int> @ 14db7a0d0

TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::
TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_><UE::Math::TVector<float>_const_,int>
          (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_1)

{
  int iVar1;
  TVector<float> *pTVar2;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  pTVar2 = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  ConstructItems<Chaos::TVector<float,3>,UE::Math::TVector<float>,int>
            ((this->AllocatorInstance).Data,pTVar2,iVar1);
  return this;
}

// operator=<Chaos::TVector<float,3>_const_,int> @ 14db7acd0

TArray<UE::Math::TVector<float>,TAlignedHeapAllocator<16>_> * __thiscall
TArray<UE::Math::TVector<float>,TAlignedHeapAllocator<16>_>::
operator=<Chaos::TVector<float,3>_const_,int>
          (TArray<UE::Math::TVector<float>,TAlignedHeapAllocator<16>_> *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TVector<float,3> *pTVar3;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pTVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (0xc,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<UE::Math::TVector<float>,Chaos::TVector<float,3>,int>
            ((this->AllocatorInstance).Data,pTVar3,iVar2);
  return this;
}

// AddZeroed @ 14dbbb400

int __thiscall
TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0xc,0,(longlong)param_1 * 0xc);
  return iVar1;
}

// RemoveAtImpl @ 14dc0d420

void __thiscall
TArray<FClothCollisionPrim_ConvexFace,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FClothCollisionPrim_ConvexFace,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FClothCollisionPrim_ConvexFace *_Dst;
  
  _Dst = (FClothCollisionPrim_ConvexFace *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<FClothCollisionPrim_ConvexFace,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dc0d4a0

void __thiscall
TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)> *_Dst;
  
  _Dst = (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dc0d520

void __thiscall
TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>
  *_Dst;
  
  _Dst = (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>
          *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dc0d5a0

void __thiscall
TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(void *this,int param_1,int param_2)

{
  int iVar1;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>
  *_Dst;
  
  _Dst = (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>
          *)((longlong)param_1 * 0x30 + *(longlong *)this);
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,int>
            (_Dst,param_2);
  iVar1 = (*(int *)((longlong)this + 8) - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  *(int *)((longlong)this + 8) = *(int *)((longlong)this + 8) - param_2;
  return;
}

// RemoveAtImpl @ 14dc0d620

void __thiscall
TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>
  *_Dst;
  
  _Dst = (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>
          *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dc0d6a0

void __thiscall
TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>
  *_Dst;
  
  _Dst = (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>
          *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dc0d720

void __thiscall
TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(void *this,int param_1,int param_2)

{
  int iVar1;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
  *_Dst;
  
  _Dst = (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
          *)((longlong)param_1 * 0x30 + *(longlong *)this);
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,int>
            (_Dst,param_2);
  iVar1 = (*(int *)((longlong)this + 8) - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  *(int *)((longlong)this + 8) = *(int *)((longlong)this + 8) - param_2;
  return;
}

// RemoveAtImpl @ 14dc0d7a0

void __thiscall
TArray<TSharedPtr<FManagedArrayCollection,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TSharedPtr<FManagedArrayCollection,1>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  TSharedPtr<FManagedArrayCollection,1> *_Dst;
  
  _Dst = (TSharedPtr<FManagedArrayCollection,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<FManagedArrayCollection,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dc0d820

void __thiscall
TArray<TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>,int>
            ((TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>
              *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveSwap @ 14dc0e100

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<Chaos::FClothingSimulationCloth_*,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<Chaos::FClothingSimulationCloth_*,TSizedDefaultAllocator<32>_> *this,
          FClothingSimulationCloth **param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  uVar9 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    bVar3 = false;
    iVar10 = iVar5;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar8 = uVar9;
      if (*(FClothingSimulationCloth **)((this->AllocatorInstance).Data + lVar7) == *param_1) {
        uVar8 = uVar9 - 1;
        lVar7 = lVar7 + -8;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar10 = ~uVar9 + this->ArrayNum;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar9 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar10) * 8
                  ,(longlong)iVar10 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar10 = this->ArrayNum;
      uVar9 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar9 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

// RemoveSwap @ 14dc0e310

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<Chaos::FClothingSimulationCollider_*,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<Chaos::FClothingSimulationCollider_*,TSizedDefaultAllocator<32>_> *this,
          FClothingSimulationCollider **param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  uVar9 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    bVar3 = false;
    iVar10 = iVar5;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar8 = uVar9;
      if (*(FClothingSimulationCollider **)((this->AllocatorInstance).Data + lVar7) == *param_1) {
        uVar8 = uVar9 - 1;
        lVar7 = lVar7 + -8;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar10 = ~uVar9 + this->ArrayNum;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar9 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar10) * 8
                  ,(longlong)iVar10 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar10 = this->ArrayNum;
      uVar9 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar9 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

