// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 13

// AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>_> @ 14db7b0d0

void __thiscall
Chaos::Softs::FEvolution::
AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>_>
          (FEvolution *this,int param_1,int param_2,
          TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>
  *this_00;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < *(int *)&param_3->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
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
  if (*(int *)((longlong)param_1 * 0x10 + 8 + *(longlong *)&param_3->field_0x8) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RuleArray[SoftBodyId].IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsEvolution.h"
                       ,0x1f0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = 0;
  if (param_1 < *(int *)&param_3->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
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
  this_00 = (TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>
             *)(*(longlong *)&param_3->field_0x8 + (longlong)param_1 * 0x10);
  iVar1 = this_00->ArrayNum;
  if (iVar1 < param_2) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,0x10,param_2 - iVar1,(ForAnyElementType *)this_00,&this_00->ArrayNum,
                       &this_00->ArrayMax);
    DefaultConstructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x30,param_2 - iVar1);
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
    if (param_2 < iVar1) {
      uVar5 = iVar1 - param_2;
      if ((int)(uVar5 | param_2) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar5 != 0) {
        TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_00,param_2,uVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,0x10,(ForAnyElementType *)this_00,this_00->ArrayNum,&this_00->ArrayMax);
      }
    }
  }
  return;
}

// AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>_> @ 14db7b2c0

void __thiscall
Chaos::Softs::FEvolution::
AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>_>
          (FEvolution *this,int param_1,int param_2,
          TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>
  *this_00;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < *(int *)&param_3->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
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
  if (*(int *)((longlong)param_1 * 0x10 + 8 + *(longlong *)&param_3->field_0x8) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RuleArray[SoftBodyId].IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsEvolution.h"
                       ,0x1f0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = 0;
  if (param_1 < *(int *)&param_3->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
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
  this_00 = (TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>
             *)(*(longlong *)&param_3->field_0x8 + (longlong)param_1 * 0x10);
  iVar1 = this_00->ArrayNum;
  if (iVar1 < param_2) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,0x10,param_2 - iVar1,(ForAnyElementType *)this_00,&this_00->ArrayNum,
                       &this_00->ArrayMax);
    DefaultConstructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x30,param_2 - iVar1);
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
    if (param_2 < iVar1) {
      uVar5 = iVar1 - param_2;
      if ((int)(uVar5 | param_2) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar5 != 0) {
        TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_00,param_2,uVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,0x10,(ForAnyElementType *)this_00,this_00->ArrayNum,&this_00->ArrayMax);
      }
    }
  }
  return;
}

// AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>_> @ 14db7b4b0

void __thiscall
Chaos::Softs::FEvolution::
AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>_>
          (FEvolution *this,int param_1,int param_2,
          TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType *this_00;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < *(int *)&param_3->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
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
  if (*(int *)((longlong)param_1 * 0x10 + 8 + *(longlong *)&param_3->field_0x8) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RuleArray[SoftBodyId].IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsEvolution.h"
                       ,0x1f0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = 0;
  if (param_1 < *(int *)&param_3->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
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
  this_00 = (ForAnyElementType *)(*(longlong *)&param_3->field_0x8 + (longlong)param_1 * 0x10);
  iVar1 = *(int *)&this_00[1].Data;
  if (iVar1 < param_2) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,0x10,param_2 - iVar1,this_00,(int *)(this_00 + 1),
                       (int *)((longlong)&this_00[1].Data + 4));
    DefaultConstructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,int>
              (this_00->Data + (longlong)iVar4 * 0x30,param_2 - iVar1);
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
    if (param_2 < iVar1) {
      uVar5 = iVar1 - param_2;
      if ((int)(uVar5 | param_2) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar5 != 0) {
        TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_00,param_2,uVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,0x10,this_00,*(int *)&this_00[1].Data,
                   (int *)((longlong)&this_00[1].Data + 4));
      }
    }
  }
  return;
}

// AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>_> @ 14db7b6a0

void __thiscall
Chaos::Softs::FEvolution::
AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>_>
          (FEvolution *this,int param_1,int param_2,
          TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>
  *this_00;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < *(int *)&param_3->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
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
  if (*(int *)((longlong)param_1 * 0x10 + 8 + *(longlong *)&param_3->field_0x8) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RuleArray[SoftBodyId].IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsEvolution.h"
                       ,0x1f0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = 0;
  if (param_1 < *(int *)&param_3->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
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
  this_00 = (TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>
             *)(*(longlong *)&param_3->field_0x8 + (longlong)param_1 * 0x10);
  iVar1 = this_00->ArrayNum;
  if (iVar1 < param_2) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,0x10,param_2 - iVar1,(ForAnyElementType *)this_00,&this_00->ArrayNum,
                       &this_00->ArrayMax);
    DefaultConstructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x30,param_2 - iVar1);
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
    if (param_2 < iVar1) {
      uVar5 = iVar1 - param_2;
      if ((int)(uVar5 | param_2) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar5 != 0) {
        TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_00,param_2,uVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,0x10,(ForAnyElementType *)this_00,this_00->ArrayNum,&this_00->ArrayMax);
      }
    }
  }
  return;
}

// AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>_> @ 14db7b890

void __thiscall
Chaos::Softs::FEvolution::
AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>_>
          (FEvolution *this,int param_1,int param_2,
          TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>
  *this_00;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < *(int *)&param_3->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
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
  if (*(int *)((longlong)param_1 * 0x10 + 8 + *(longlong *)&param_3->field_0x8) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RuleArray[SoftBodyId].IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsEvolution.h"
                       ,0x1f0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = 0;
  if (param_1 < *(int *)&param_3->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
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
  this_00 = (TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>
             *)(*(longlong *)&param_3->field_0x8 + (longlong)param_1 * 0x10);
  iVar1 = this_00->ArrayNum;
  if (iVar1 < param_2) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,0x10,param_2 - iVar1,(ForAnyElementType *)this_00,&this_00->ArrayNum,
                       &this_00->ArrayMax);
    DefaultConstructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x30,param_2 - iVar1);
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
    if (param_2 < iVar1) {
      uVar5 = iVar1 - param_2;
      if ((int)(uVar5 | param_2) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar5 != 0) {
        TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_00,param_2,uVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,0x10,(ForAnyElementType *)this_00,this_00->ArrayNum,&this_00->ArrayMax);
      }
    }
  }
  return;
}

// AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>_> @ 14db7ba80

void __thiscall
Chaos::Softs::FEvolution::
AllocateRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>_>
          (FEvolution *this,int param_1,int param_2,
          TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType *this_00;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < *(int *)&param_3->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
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
  if (*(int *)((longlong)param_1 * 0x10 + 8 + *(longlong *)&param_3->field_0x8) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RuleArray[SoftBodyId].IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsEvolution.h"
                       ,0x1f0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = 0;
  if (param_1 < *(int *)&param_3->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
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
  this_00 = (ForAnyElementType *)(*(longlong *)&param_3->field_0x8 + (longlong)param_1 * 0x10);
  iVar1 = *(int *)&this_00[1].Data;
  if (iVar1 < param_2) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,0x10,param_2 - iVar1,this_00,(int *)(this_00 + 1),
                       (int *)((longlong)&this_00[1].Data + 4));
    DefaultConstructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,int>
              (this_00->Data + (longlong)iVar4 * 0x30,param_2 - iVar1);
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
    if (param_2 < iVar1) {
      uVar5 = iVar1 - param_2;
      if ((int)(uVar5 | param_2) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar5 != 0) {
        TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_00,param_2,uVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,0x10,this_00,*(int *)&this_00[1].Data,
                   (int *)((longlong)&this_00[1].Data + 4));
      }
    }
  }
  return;
}

// GetRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>_> @ 14db8a8c0

TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int> * __thiscall
Chaos::Softs::FEvolution::
GetRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>_>
          (FEvolution *this,
          TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>
          *__return_storage_ptr__,int param_1,
          TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int> *pTVar5;
  undefined8 *puVar6;
  
  uVar4 = 0;
  if (param_1 < *(int *)&param_2->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  puVar6 = (undefined8 *)((longlong)param_1 * 0x10 + *(longlong *)&param_2->field_0x8);
  iVar1 = *(int *)(puVar6 + 1);
  __return_storage_ptr__->DataPtr =
       (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)> *)*puVar6;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>_> @ 14db8a980

TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>,int>
* __thiscall
Chaos::Softs::FEvolution::
GetRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>_>
          (FEvolution *this,
          TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>,int>
          *__return_storage_ptr__,int param_1,
          TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>,int>
  *pTVar5;
  undefined8 *puVar6;
  
  uVar4 = 0;
  if (param_1 < *(int *)&param_2->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>,int>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  puVar6 = (undefined8 *)((longlong)param_1 * 0x10 + *(longlong *)&param_2->field_0x8);
  iVar1 = *(int *)(puVar6 + 1);
  __return_storage_ptr__->DataPtr =
       (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>
        *)*puVar6;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>,int>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>_> @ 14db8aa40

TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>,int>
* __thiscall
Chaos::Softs::FEvolution::
GetRules<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>_>
          (FEvolution *this,
          TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>,int>
          *__return_storage_ptr__,int param_1,
          TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>,int>
  *pTVar5;
  undefined8 *puVar6;
  
  uVar4 = 0;
  if (param_1 < *(int *)&param_2->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>,int>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  puVar6 = (undefined8 *)((longlong)param_1 * 0x10 + *(longlong *)&param_2->field_0x8);
  iVar1 = *(int *)(puVar6 + 1);
  __return_storage_ptr__->DataPtr =
       (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
        *)*puVar6;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>,int>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetCollisionParticleRange @ 14dbf95e0

FSolverCollisionParticlesRange * __thiscall
Chaos::Softs::FEvolution::GetCollisionParticleRange(FEvolution *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSolverCollisionParticlesRange *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->CollisionRanges).ParticleRanges.field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSolverCollisionParticlesRange *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FSolverCollisionParticlesRange *)
         ((longlong)param_1 * 0x20 + *(longlong *)&(this->CollisionRanges).ParticleRanges.field_0x8)
  ;
}

// GetGroupActiveCollisionParticleRanges @ 14dbfc280

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
Chaos::Softs::FEvolution::GetGroupActiveCollisionParticleRanges(FEvolution *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < *(int *)&(this->Groups).ActiveCollisionParticleRanges.field_0x10) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
         ((longlong)(int)param_1 * 0x50 +
         *(longlong *)&(this->Groups).ActiveCollisionParticleRanges.field_0x8);
}

// GetGroupActiveSoftBodies @ 14dbfc300

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
Chaos::Softs::FEvolution::GetGroupActiveSoftBodies(FEvolution *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < *(int *)&(this->Groups).ActiveSoftBodies.field_0x10) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
         ((longlong)(int)param_1 * 0x50 + *(longlong *)&(this->Groups).ActiveSoftBodies.field_0x8);
}

// GetSoftBodyParticles @ 14dbfffc0

FSolverParticlesRange * __thiscall
Chaos::Softs::FEvolution::GetSoftBodyParticles(FEvolution *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSolverParticlesRange *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->SoftBodies).ParticleRanges.field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSolverParticlesRange *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FSolverParticlesRange *)
         ((longlong)param_1 * 0x20 + *(longlong *)&(this->SoftBodies).ParticleRanges.field_0x8);
}

