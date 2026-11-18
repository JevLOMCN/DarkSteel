// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 23

// AddRange @ 143a4a0c0

int __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::AddRange
          (TPBDActiveView<Chaos::Softs::FSolverParticles> *this,int param_1,bool param_2)

{
  TArray<Chaos::FActiveViewRange,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (this->Ranges).ArrayNum;
  pTVar1 = &this->Ranges;
  uVar6 = 0;
  if (iVar5 != 0) {
    uVar6 = 0;
    if ((int)(iVar5 - 1U) < iVar5) {
      uVar6 = ~(iVar5 - 1U) >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    uVar6 = *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)(this->Ranges).ArrayNum * 4 + -4)
            >> 1;
  }
  if (param_1 != 0) {
    iVar5 = (this->Ranges).ArrayNum;
    piVar2 = &(this->Ranges).ArrayMax;
    if (iVar5 == *piVar2) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar1->AllocatorInstance,piVar2);
      (this->Ranges).ArrayNum = iVar5;
    }
    (this->Ranges).ArrayNum = iVar5 + 1;
    *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 4) =
         (uVar6 + param_1) * 2 | (uint)param_2;
  }
  return uVar6;
}

// GetActiveRanges @ 143a679e0

TArray<Chaos::TVector<int,2>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> * __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::GetActiveRanges
          (TPBDActiveView<Chaos::Softs::FSolverParticles> *this,
          TArray<Chaos::TVector<int,2>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  ForElementType<Chaos::TVector<int,2>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<Chaos::TVector<int,2>_> FVar8;
  TArray<Chaos::TVector<int,2>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  uint local_38;
  uint uStack_34;
  
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<Chaos::TVector<int,2>_>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 8;
  pFVar11 = (this->Ranges).AllocatorInstance.Data;
  iVar2 = (this->Ranges).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 4;
  uVar10 = 0;
  do {
    if ((this->Ranges).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar11 == pFVar1) {
      return __return_storage_ptr__;
    }
    uVar3 = *(uint *)pFVar11;
    uVar12 = uVar3 >> 1;
    if (((uVar3 & 1) != 0) && (uVar3 >> 1 != 0)) {
      FVar4 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<Chaos::TVector<int,2>_>)__return_storage_ptr__;
      if (FVar4 != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
        FVar8 = FVar4;
      }
      local_38 = uVar10;
      uStack_34 = uVar12;
      if ((ulonglong)FVar8 <= &local_38) {
        FVar8 = (ForElementType<Chaos::TVector<int,2>_>)__return_storage_ptr__;
        if (FVar4 != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
          FVar8 = FVar4;
        }
        if ((&local_38 < (uint *)((longlong)FVar8 + (longlong)__return_storage_ptr__->ArrayMax * 8))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<Chaos::TVector<int,2>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                    *)(*pcVar5)();
          return pTVar9;
        }
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::TVector<int,2>_>_>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      FVar4 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<Chaos::TVector<int,2>_>)__return_storage_ptr__;
      if (FVar4 != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
        FVar8 = FVar4;
      }
      *(ulonglong *)((longlong)FVar8 + (longlong)iVar7 * 8) = CONCAT44(uStack_34,local_38);
    }
    pFVar11 = pFVar11 + 4;
    uVar10 = uVar12;
  } while( true );
}

// ParallelFor @ 143a88200

void __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::ParallelFor
          (TPBDActiveView<Chaos::Softs::FSolverParticles> *this,
          TFunctionRef<void___cdecl(Chaos::Softs::FSolverParticles_&,int)> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  code *local_58;
  TPBDActiveView<Chaos::Softs::FSolverParticles> **local_50;
  TPBDActiveView<Chaos::Softs::FSolverParticles> *local_48;
  uint local_40;
  TFunctionRef<void___cdecl(Chaos::Softs::FSolverParticles_&,int)> *local_38;
  
  pFVar6 = (this->Ranges).AllocatorInstance.Data;
  iVar2 = (this->Ranges).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  uVar5 = 0;
  while( true ) {
    if ((this->Ranges).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    uVar3 = *(uint *)pFVar6;
    if (((uVar3 & 1) != 0) && (uVar3 >> 1 != 0)) {
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::ParallelFor'::__l9::<lambda_1>,void,int>
                 ::Call;
      iVar4 = (uVar3 >> 1) - uVar5;
      local_50 = &local_48;
      local_48 = this;
      local_40 = uVar5;
      local_38 = param_1;
      PhysicsParallelFor(iVar4,(TFunctionRef<void___cdecl(int)> *)&local_58,iVar4 < param_2);
    }
    pFVar6 = pFVar6 + 4;
    uVar5 = uVar3 >> 1;
  }
  return;
}

// Reset @ 143a8e330

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::
TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
::Reset(TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
        *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (this->Ranges).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Ranges).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (param_1 < (int)(*(uint *)((this->Ranges).AllocatorInstance.Data + lVar5) >> 1)) {
        TArray<Chaos::FActiveViewRange,TSizedDefaultAllocator<32>_>::SetNum
                  (&this->Ranges,uVar4,Default);
        return;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 4;
    } while ((int)uVar4 < (this->Ranges).ArrayNum);
  }
  return;
}

// Reset @ 143a8e400

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::Reset
          (TPBDActiveView<Chaos::Softs::FSolverParticles> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (this->Ranges).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Ranges).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (param_1 < (int)(*(uint *)((this->Ranges).AllocatorInstance.Data + lVar5) >> 1)) {
        TArray<Chaos::FActiveViewRange,TSizedDefaultAllocator<32>_>::SetNum
                  (&this->Ranges,uVar4,Default);
        return;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 4;
    } while ((int)uVar4 < (this->Ranges).ArrayNum);
  }
  return;
}

// SequentialFor @ 143b3ad90

void __thiscall
Chaos::TPBDActiveView<Chaos::TDynamicParticles<double,3>_>::SequentialFor
          (TPBDActiveView<Chaos::TDynamicParticles<double,3>_> *this,
          TFunctionRef<void___cdecl(Chaos::TDynamicParticles<double,3>_&,int)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint local_res8 [2];
  
  pFVar5 = (this->Ranges).AllocatorInstance.Data;
  iVar2 = (this->Ranges).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 4;
  uVar6 = 0;
  while( true ) {
    if ((this->Ranges).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    uVar3 = *(uint *)pFVar5;
    uVar4 = uVar3 >> 1;
    if ((((uVar3 & 1) != 0) && (uVar3 >> 1 != 0)) && (uVar6 < uVar4)) {
      do {
        local_res8[0] = uVar6;
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,this->Items,local_res8);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar4);
    }
    pFVar5 = pFVar5 + 4;
    uVar6 = uVar4;
  }
  return;
}

// SequentialFor @ 143b3ae30

void __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::SequentialFor
          (TPBDActiveView<Chaos::Softs::FSolverParticles> *this,
          TFunctionRef<void___cdecl(Chaos::Softs::FSolverParticles_&,int)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint local_res8 [2];
  
  pFVar5 = (this->Ranges).AllocatorInstance.Data;
  iVar2 = (this->Ranges).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 4;
  uVar6 = 0;
  while( true ) {
    if ((this->Ranges).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    uVar3 = *(uint *)pFVar5;
    uVar4 = uVar3 >> 1;
    if ((((uVar3 & 1) != 0) && (uVar3 >> 1 != 0)) && (uVar6 < uVar4)) {
      do {
        local_res8[0] = uVar6;
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,this->Items,local_res8);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar4);
    }
    pFVar5 = pFVar5 + 4;
    uVar6 = uVar4;
  }
  return;
}

// operator() @ 143be60a0

void __thiscall
`Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::RangeFor'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar4 = 0;
  if (param_1 < *(int *)(lVar1 + 0x48)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar5 = *(longlong *)(lVar1 + 0x40);
  if (*(longlong *)(lVar1 + 0x40) == 0) {
    lVar5 = lVar1;
  }
  local_res10[0] = *(undefined4 *)(lVar5 + 4 + (longlong)param_1 * 8);
  local_res8[0] = *(undefined4 *)(lVar5 + (longlong)param_1 * 8);
  (*(code *)**(undefined8 **)((longlong)this + 8))
            ((*(undefined8 **)((longlong)this + 8))[1],**(undefined8 **)this,local_res8,local_res10)
  ;
  return;
}

// AddRange @ 143beda10

int __thiscall
Chaos::
TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
::AddRange(TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,bool param_2)

{
  TArray<Chaos::FActiveViewRange,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (this->Ranges).ArrayNum;
  pTVar1 = &this->Ranges;
  uVar6 = 0;
  if (iVar5 != 0) {
    uVar6 = 0;
    if ((int)(iVar5 - 1U) < iVar5) {
      uVar6 = ~(iVar5 - 1U) >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    uVar6 = *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)(this->Ranges).ArrayNum * 4 + -4)
            >> 1;
  }
  if (param_1 != 0) {
    iVar5 = (this->Ranges).ArrayNum;
    piVar2 = &(this->Ranges).ArrayMax;
    if (iVar5 == *piVar2) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar1->AllocatorInstance,piVar2);
      (this->Ranges).ArrayNum = iVar5;
    }
    (this->Ranges).ArrayNum = iVar5 + 1;
    *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 4) =
         (uVar6 + param_1) * 2 | (uint)param_2;
  }
  return uVar6;
}

// AddRange @ 143bedaf0

int __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::AddRange
          (TPBDActiveView<Chaos::Softs::FSolverCollisionParticles> *this,int param_1,bool param_2)

{
  TArray<Chaos::FActiveViewRange,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (this->Ranges).ArrayNum;
  pTVar1 = &this->Ranges;
  uVar6 = 0;
  if (iVar5 != 0) {
    uVar6 = 0;
    if ((int)(iVar5 - 1U) < iVar5) {
      uVar6 = ~(iVar5 - 1U) >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    uVar6 = *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)(this->Ranges).ArrayNum * 4 + -4)
            >> 1;
  }
  if (param_1 != 0) {
    iVar5 = (this->Ranges).ArrayNum;
    piVar2 = &(this->Ranges).ArrayMax;
    if (iVar5 == *piVar2) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar1->AllocatorInstance,piVar2);
      (this->Ranges).ArrayNum = iVar5;
    }
    (this->Ranges).ArrayNum = iVar5 + 1;
    *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 4) =
         (uVar6 + param_1) * 2 | (uint)param_2;
  }
  return uVar6;
}

// RangeFor @ 143c10080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::RangeFor
          (TPBDActiveView<Chaos::Softs::FSolverParticles> *this,
          TFunctionRef<void___cdecl(Chaos::Softs::FSolverParticles_&,int,int)> *param_1,bool param_2
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<Chaos::TVector<int,2>_> FVar7;
  ForElementType<Chaos::TVector<int,2>_> FVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ForElementType<Chaos::TVector<int,2>_> FVar11;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  ForElementType<Chaos::TVector<int,2>_> local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined1 local_c8;
  bool local_c7;
  undefined4 local_c4;
  uint uStack_c0;
  code *local_b8;
  TPBDActiveView<Chaos::Softs::FSolverParticles> **local_b0;
  TPBDActiveView<Chaos::Softs::FSolverParticles> *local_a8;
  TFunctionRef<void___cdecl(Chaos::Softs::FSolverParticles_&,int,int)> *local_a0;
  ForElementType<Chaos::TVector<int,2>_> *local_98;
  ForElementType<Chaos::TVector<int,2>_> local_88;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar10 = (this->Ranges).AllocatorInstance.Data;
  iVar2 = (this->Ranges).ArrayNum;
  FVar7 = (ForElementType<Chaos::TVector<int,2>_>)0x0;
  local_88.SecondaryData = (ForElementType<Chaos::TVector<int,2>_>)0x0;
  local_40 = 0;
  pFVar1 = pFVar10 + (longlong)iVar2 * 4;
  local_3c = 8;
  FVar8 = FVar7;
  FVar11 = FVar7;
  local_c7 = param_2;
  do {
    if ((this->Ranges).ArrayNum != iVar2) {
      local_c8 = 0;
      `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_c8);
      FVar7._4_4_ = 0;
      FVar7._0_4_ = local_40;
      FVar11 = local_88.SecondaryData;
    }
    uVar6 = FVar7._0_4_;
    if (pFVar10 == pFVar1) {
      local_98 = &local_88;
      local_b0 = &local_a8;
      local_b8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::RangeFor'::__l2::<lambda_1>,void,int>
                 ::Call;
      local_a8 = this;
      local_a0 = param_1;
      PhysicsParallelFor(uVar6,(TFunctionRef<void___cdecl(int)> *)&local_b8,local_c7);
      if (local_88.SecondaryData != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
        FMemory::Free((void *)local_88.SecondaryData);
      }
      return;
    }
    uVar3 = *(uint *)pFVar10;
    uVar9 = uVar3 >> 1;
    if (((uVar3 & 1) != 0) && (uVar3 >> 1 != 0)) {
      local_c4 = FVar8._0_4_;
      FVar8 = (ForElementType<Chaos::TVector<int,2>_>)&local_88;
      if (FVar11 != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
        FVar8 = FVar11;
      }
      uStack_c0 = uVar9;
      if ((ulonglong)FVar8 <= &local_c4) {
        FVar8 = (ForElementType<Chaos::TVector<int,2>_>)&local_88;
        if (FVar11 != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
          FVar8 = FVar11;
        }
        if (&local_c4 < (undefined4 *)((longlong)FVar8 + (longlong)(int)local_3c * 8)) {
          local_e0 = (longlong)(int)uVar6;
          local_d8 = 8;
          local_f0 = (ForElementType<Chaos::TVector<int,2>_>)&local_88;
          if (FVar11 != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
            local_f0 = FVar11;
          }
          local_f8 = &local_c4;
          local_e8 = (longlong)(int)local_3c;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          FVar11 = local_88.SecondaryData;
          uVar6 = local_40;
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      if (uVar6 == local_3c) {
        uVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::TVector<int,2>_>_>
                          (0x408,&local_88,(int *)&local_3c);
        FVar11 = local_88.SecondaryData;
      }
      local_40 = uVar6 + 1;
      FVar8 = (ForElementType<Chaos::TVector<int,2>_>)&local_88;
      if (FVar11 != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
        FVar8 = FVar11;
      }
      *(ulonglong *)((longlong)FVar8 + (longlong)(int)uVar6 * 8) = CONCAT44(uStack_c0,local_c4);
      FVar7._4_4_ = 0;
      FVar7._0_4_ = local_40;
      FVar11 = local_88.SecondaryData;
    }
    FVar8._4_4_ = 0;
    FVar8._0_4_ = uVar9;
    pFVar10 = pFVar10 + 4;
  } while( true );
}

// Reset @ 143c122c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::Reset
          (TPBDActiveView<Chaos::Softs::FSolverCollisionParticles> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (this->Ranges).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Ranges).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (param_1 < (int)(*(uint *)((this->Ranges).AllocatorInstance.Data + lVar5) >> 1)) {
        TArray<Chaos::FActiveViewRange,TSizedDefaultAllocator<32>_>::SetNum
                  (&this->Ranges,uVar4,Default);
        return;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 4;
    } while ((int)uVar4 < (this->Ranges).ArrayNum);
  }
  return;
}

// SequentialFor @ 143c13900

void __thiscall
Chaos::
TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
::SequentialFor(TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
                *this,TFunctionRef<void___cdecl(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_&,int)>
                      *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint local_res8 [2];
  
  pFVar5 = (this->Ranges).AllocatorInstance.Data;
  iVar2 = (this->Ranges).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 4;
  uVar6 = 0;
  while( true ) {
    if ((this->Ranges).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    uVar3 = *(uint *)pFVar5;
    uVar4 = uVar3 >> 1;
    if ((((uVar3 & 1) != 0) && (uVar3 >> 1 != 0)) && (uVar6 < uVar4)) {
      do {
        local_res8[0] = uVar6;
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,this->Items,local_res8);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar4);
    }
    pFVar5 = pFVar5 + 4;
    uVar6 = uVar4;
  }
  return;
}

// SequentialFor @ 143c139a0

void __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::SequentialFor
          (TPBDActiveView<Chaos::Softs::FSolverCollisionParticles> *this,
          TFunctionRef<void___cdecl(Chaos::Softs::FSolverCollisionParticles_&,int)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint local_res8 [2];
  
  pFVar5 = (this->Ranges).AllocatorInstance.Data;
  iVar2 = (this->Ranges).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 4;
  uVar6 = 0;
  while( true ) {
    if ((this->Ranges).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    uVar3 = *(uint *)pFVar5;
    uVar4 = uVar3 >> 1;
    if ((((uVar3 & 1) != 0) && (uVar3 >> 1 != 0)) && (uVar6 < uVar4)) {
      do {
        local_res8[0] = uVar6;
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,this->Items,local_res8);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar4);
    }
    pFVar5 = pFVar5 + 4;
    uVar6 = uVar4;
  }
  return;
}

// operator() @ 143c49050

void __thiscall
`Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::ParallelFor'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  code *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  int local_30;
  undefined8 local_28;
  
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar5 = 0;
  if (param_1 < *(int *)(lVar2 + 0x48)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  lVar6 = *(longlong *)(lVar2 + 0x40);
  if (*(longlong *)(lVar2 + 0x40) == 0) {
    lVar6 = lVar2;
  }
  lVar2 = *(longlong *)((longlong)this + 0x10);
  iVar1 = *(int *)(lVar6 + (longlong)param_1 * 8);
  uVar5 = 0;
  if (param_1 < *(int *)(lVar2 + 0x48)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  lVar6 = *(longlong *)(lVar2 + 0x40);
  if (*(longlong *)(lVar2 + 0x40) == 0) {
    lVar6 = lVar2;
  }
  iVar7 = *(int *)(lVar6 + 4 + (longlong)param_1 * 8) - iVar1;
  local_38 = *(undefined8 *)this;
  local_28 = *(undefined8 *)((longlong)this + 8);
  local_40 = &local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<``Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::ParallelFor'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  local_30 = iVar1;
  Chaos::PhysicsParallelFor
            (iVar7,(TFunctionRef<void___cdecl(int)> *)&local_48,
             iVar7 < **(int **)((longlong)this + 0x18));
  return;
}

// operator() @ 143c49280

void __thiscall
`Chaos::
TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
::RangeFor'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar4 = 0;
  if (param_1 < *(int *)(lVar1 + 0x48)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar5 = *(longlong *)(lVar1 + 0x40);
  if (*(longlong *)(lVar1 + 0x40) == 0) {
    lVar5 = lVar1;
  }
  local_res10[0] = *(undefined4 *)(lVar5 + 4 + (longlong)param_1 * 8);
  local_res8[0] = *(undefined4 *)(lVar5 + (longlong)param_1 * 8);
  (*(code *)**(undefined8 **)((longlong)this + 8))
            ((*(undefined8 **)((longlong)this + 8))[1],**(undefined8 **)this,local_res8,local_res10)
  ;
  return;
}

// ActivateRange @ 143c54ef0

void __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::ActivateRange
          (TPBDActiveView<Chaos::Softs::FSolverCollisionParticles> *this,int param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = GetRangeIndex(this,param_1);
  uVar5 = 0;
  if ((int)uVar4 < (this->Ranges).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Ranges).AllocatorInstance.Data;
  *(uint *)(pFVar1 + (longlong)(int)uVar4 * 4) =
       *(uint *)(pFVar1 + (longlong)(int)uVar4 * 4) & 0xfffffffe | (uint)param_2;
  return;
}

// GetActiveRanges @ 143c67870

TArray<Chaos::TVector<int,2>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> * __thiscall
Chaos::
TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
::GetActiveRanges(TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
                  *this,TArray<Chaos::TVector<int,2>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                        *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  ForElementType<Chaos::TVector<int,2>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<Chaos::TVector<int,2>_> FVar8;
  TArray<Chaos::TVector<int,2>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  uint local_38;
  uint uStack_34;
  
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<Chaos::TVector<int,2>_>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 8;
  pFVar11 = (this->Ranges).AllocatorInstance.Data;
  iVar2 = (this->Ranges).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 4;
  uVar10 = 0;
  do {
    if ((this->Ranges).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar11 == pFVar1) {
      return __return_storage_ptr__;
    }
    uVar3 = *(uint *)pFVar11;
    uVar12 = uVar3 >> 1;
    if (((uVar3 & 1) != 0) && (uVar3 >> 1 != 0)) {
      FVar4 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<Chaos::TVector<int,2>_>)__return_storage_ptr__;
      if (FVar4 != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
        FVar8 = FVar4;
      }
      local_38 = uVar10;
      uStack_34 = uVar12;
      if ((ulonglong)FVar8 <= &local_38) {
        FVar8 = (ForElementType<Chaos::TVector<int,2>_>)__return_storage_ptr__;
        if (FVar4 != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
          FVar8 = FVar4;
        }
        if ((&local_38 < (uint *)((longlong)FVar8 + (longlong)__return_storage_ptr__->ArrayMax * 8))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<Chaos::TVector<int,2>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                    *)(*pcVar5)();
          return pTVar9;
        }
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::TVector<int,2>_>_>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      FVar4 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<Chaos::TVector<int,2>_>)__return_storage_ptr__;
      if (FVar4 != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
        FVar8 = FVar4;
      }
      *(ulonglong *)((longlong)FVar8 + (longlong)iVar7 * 8) = CONCAT44(uStack_34,local_38);
    }
    pFVar11 = pFVar11 + 4;
    uVar10 = uVar12;
  } while( true );
}

// GetRangeIndex @ 143c69770

int __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::GetRangeIndex
          (TPBDActiveView<Chaos::Softs::FSolverCollisionParticles> *this,int param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  uVar2 = (this->Ranges).ArrayNum;
  iVar6 = 0;
  if (0 < (int)uVar2) {
    uVar7 = uVar2;
    do {
      iVar1 = (uVar7 >> 1) + iVar6;
      if (*(uint *)((this->Ranges).AllocatorInstance.Data + (longlong)iVar1 * 4) >> 1 <=
          (param_1 & 0x7fffffffU)) {
        iVar6 = iVar1 + (uVar7 & 1);
      }
      uVar4 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar4 != 0);
    if (iVar6 < 0) goto LAB_143c697ce;
  }
  if (iVar6 < (int)uVar2) {
    return iVar6;
  }
LAB_143c697ce:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Ranges.IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDActiveView.h"
                     ,0x69,L"");
  if (!bVar5) {
    return iVar6;
  }
  pcVar3 = (code *)swi(3);
  iVar6 = (*pcVar3)();
  return iVar6;
}

// ParallelFor @ 143c6bdb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::ParallelFor
          (TPBDActiveView<Chaos::Softs::FSolverParticles> *this,
          TFunctionRef<void___cdecl(Chaos::Softs::FSolverParticles_&,int)> *param_1,bool param_2,
          int param_3)

{
  int local_res20 [2];
  undefined1 auStack_c8 [32];
  code *local_a8;
  TPBDActiveView<Chaos::Softs::FSolverParticles> **local_a0;
  TPBDActiveView<Chaos::Softs::FSolverParticles> *local_98;
  TFunctionRef<void___cdecl(Chaos::Softs::FSolverParticles_&,int)> *local_90;
  TArray<Chaos::TVector<int,2>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *local_88;
  int *local_80;
  TArray<Chaos::TVector<int,2>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_res20[0] = param_3;
  GetActiveRanges(this,&local_78);
  local_88 = &local_78;
  local_80 = local_res20;
  local_a0 = &local_98;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::ParallelFor'::__l2::<lambda_1>,void,int>
             ::Call;
  local_98 = this;
  local_90 = param_1;
  PhysicsParallelFor(local_78.ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_a8,param_2);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return;
}

// RangeFor @ 143c6d640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::
TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
::RangeFor(TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
           *this,TFunctionRef<void___cdecl(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_&,int,int)>
                 *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<Chaos::TVector<int,2>_> FVar7;
  ForElementType<Chaos::TVector<int,2>_> FVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ForElementType<Chaos::TVector<int,2>_> FVar11;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  ForElementType<Chaos::TVector<int,2>_> local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined1 local_c8;
  bool local_c7;
  undefined4 local_c4;
  uint uStack_c0;
  code *local_b8;
  TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
  **local_b0;
  TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
  *local_a8;
  TFunctionRef<void___cdecl(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_&,int,int)>
  *local_a0;
  ForElementType<Chaos::TVector<int,2>_> *local_98;
  ForElementType<Chaos::TVector<int,2>_> local_88;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar10 = (this->Ranges).AllocatorInstance.Data;
  iVar2 = (this->Ranges).ArrayNum;
  FVar7 = (ForElementType<Chaos::TVector<int,2>_>)0x0;
  local_88.SecondaryData = (ForElementType<Chaos::TVector<int,2>_>)0x0;
  local_40 = 0;
  pFVar1 = pFVar10 + (longlong)iVar2 * 4;
  local_3c = 8;
  FVar8 = FVar7;
  FVar11 = FVar7;
  local_c7 = param_2;
  do {
    if ((this->Ranges).ArrayNum != iVar2) {
      local_c8 = 0;
      `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_c8);
      FVar7._4_4_ = 0;
      FVar7._0_4_ = local_40;
      FVar11 = local_88.SecondaryData;
    }
    uVar6 = FVar7._0_4_;
    if (pFVar10 == pFVar1) {
      local_98 = &local_88;
      local_b0 = &local_a8;
      local_b8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>::RangeFor'::__l2::<lambda_1>,void,int>
                 ::Call;
      local_a8 = this;
      local_a0 = param_1;
      PhysicsParallelFor(uVar6,(TFunctionRef<void___cdecl(int)> *)&local_b8,local_c7);
      if (local_88.SecondaryData != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
        FMemory::Free((void *)local_88.SecondaryData);
      }
      return;
    }
    uVar3 = *(uint *)pFVar10;
    uVar9 = uVar3 >> 1;
    if (((uVar3 & 1) != 0) && (uVar3 >> 1 != 0)) {
      local_c4 = FVar8._0_4_;
      FVar8 = (ForElementType<Chaos::TVector<int,2>_>)&local_88;
      if (FVar11 != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
        FVar8 = FVar11;
      }
      uStack_c0 = uVar9;
      if ((ulonglong)FVar8 <= &local_c4) {
        FVar8 = (ForElementType<Chaos::TVector<int,2>_>)&local_88;
        if (FVar11 != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
          FVar8 = FVar11;
        }
        if (&local_c4 < (undefined4 *)((longlong)FVar8 + (longlong)(int)local_3c * 8)) {
          local_e0 = (longlong)(int)uVar6;
          local_d8 = 8;
          local_f0 = (ForElementType<Chaos::TVector<int,2>_>)&local_88;
          if (FVar11 != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
            local_f0 = FVar11;
          }
          local_f8 = &local_c4;
          local_e8 = (longlong)(int)local_3c;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          FVar11 = local_88.SecondaryData;
          uVar6 = local_40;
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      if (uVar6 == local_3c) {
        uVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::TVector<int,2>_>_>
                          (0x408,&local_88,(int *)&local_3c);
        FVar11 = local_88.SecondaryData;
      }
      local_40 = uVar6 + 1;
      FVar8 = (ForElementType<Chaos::TVector<int,2>_>)&local_88;
      if (FVar11 != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
        FVar8 = FVar11;
      }
      *(ulonglong *)((longlong)FVar8 + (longlong)(int)uVar6 * 8) = CONCAT44(uStack_c0,local_c4);
      FVar7._4_4_ = 0;
      FVar7._0_4_ = local_40;
      FVar11 = local_88.SecondaryData;
    }
    FVar8._4_4_ = 0;
    FVar8._0_4_ = uVar9;
    pFVar10 = pFVar10 + 4;
  } while( true );
}

// RangeFor @ 143c6d860

void __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::RangeFor
          (TPBDActiveView<Chaos::Softs::FSolverParticles> *this,
          TFunctionRef<void___cdecl(Chaos::Softs::FSolverParticles_&,int,int)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint local_res8 [2];
  uint local_res18 [2];
  
  pFVar5 = (this->Ranges).AllocatorInstance.Data;
  iVar2 = (this->Ranges).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 4;
  uVar4 = 0;
  while( true ) {
    if ((this->Ranges).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    uVar3 = *(uint *)pFVar5;
    if (((uVar3 & 1) != 0) && (uVar3 >> 1 != 0)) {
      local_res8[0] = uVar3 >> 1;
      local_res18[0] = uVar4;
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,this->Items,local_res18,local_res8);
    }
    pFVar5 = pFVar5 + 4;
    uVar4 = uVar3 >> 1;
  }
  return;
}

// RangeFor @ 143db2c70

void __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::RangeFor
          (TPBDActiveView<Chaos::Softs::FSolverCollisionParticles> *this,
          TFunctionRef<void___cdecl(Chaos::Softs::FSolverCollisionParticles_&,int,int)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint local_res8 [2];
  uint local_res18 [2];
  
  pFVar5 = (this->Ranges).AllocatorInstance.Data;
  iVar2 = (this->Ranges).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 4;
  uVar4 = 0;
  while( true ) {
    if ((this->Ranges).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    uVar3 = *(uint *)pFVar5;
    if (((uVar3 & 1) != 0) && (uVar3 >> 1 != 0)) {
      local_res8[0] = uVar3 >> 1;
      local_res18[0] = uVar4;
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,this->Items,local_res18,local_res8);
    }
    pFVar5 = pFVar5 + 4;
    uVar4 = uVar3 >> 1;
  }
  return;
}

