// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 42

// Add @ 14374f870

TBVPayloadInfo<double,3> * __thiscall
Chaos::TArrayAsMap<int,Chaos::TBVPayloadInfo<double,3>_>::Add
          (TArrayAsMap<int,Chaos::TBVPayloadInfo<double,3>_> *this,int *param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TBVPayloadInfo<double,3> *pTVar8;
  int iVar9;
  uint uVar10;
  
  uVar3 = *param_1;
  if ((int)uVar3 < 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745173>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xd5,"Payload >=0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar8;
    }
  }
  iVar9 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayNum;
  if (iVar9 <= (int)uVar3) {
    iVar9 = uVar3 - iVar9;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x24,4,iVar9 + 1,(ForAnyElementType *)this,piVar1,&(this->Entries).ArrayMax);
    DefaultConstructItems<Chaos::TArrayAsMap<int,Chaos::TBVPayloadInfo<double,3>_>::FEntry,int>
              ((this->Entries).AllocatorInstance.Data + (longlong)iVar6 * 0x24,iVar9 + 1);
  }
  uVar10 = ~uVar3 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar8;
    }
  }
  lVar2 = (longlong)(int)uVar3 * 0x24;
  if ((this->Entries).AllocatorInstance.Data[lVar2 + 0x20] != (FScriptContainerElement)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745586>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0x272,"Entries[Idx].bSet == false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar8;
    }
  }
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar8;
    }
  }
  (this->Entries).AllocatorInstance.Data[lVar2 + 0x20] = (FScriptContainerElement)0x1;
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return (TBVPayloadInfo<double,3> *)((this->Entries).AllocatorInstance.Data + lVar2);
}

// Add @ 14374fa50

TBVPayloadInfo<double,3> * __thiscall
Chaos::TArrayAsMap<Chaos::TGeometryParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>
::Add(TArrayAsMap<Chaos::TGeometryParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>
      *this,TGeometryParticleHandleImp<double,3,1> **param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FUniqueIdx *pFVar8;
  TBVPayloadInfo<double,3> *pTVar9;
  int iVar10;
  uint uVar11;
  
  pFVar8 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                     ((TGeometryParticlesImp<double,3,0> *)(*param_1)->_padding_,
                      (int)(*param_1)->_padding_);
  uVar3 = pFVar8->Idx;
  if (uVar3 == 0xffffffff) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745167>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xcf,"Idx.IsValid()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar9;
    }
  }
  iVar10 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayNum;
  if (iVar10 <= (int)uVar3) {
    iVar10 = uVar3 - iVar10;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x24,4,iVar10 + 1,(ForAnyElementType *)this,piVar1,&(this->Entries).ArrayMax)
    ;
    DefaultConstructItems<Chaos::TArrayAsMap<Chaos::TGeometryParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>::FEntry,int>
              ((this->Entries).AllocatorInstance.Data + (longlong)iVar6 * 0x24,iVar10 + 1);
  }
  uVar11 = ~uVar3 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar9;
    }
  }
  lVar2 = (longlong)(int)uVar3 * 0x24;
  if ((this->Entries).AllocatorInstance.Data[lVar2 + 0x20] != (FScriptContainerElement)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745586>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0x272,"Entries[Idx].bSet == false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar9;
    }
  }
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar9;
    }
  }
  (this->Entries).AllocatorInstance.Data[lVar2 + 0x20] = (FScriptContainerElement)0x1;
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar9;
    }
  }
  return (TBVPayloadInfo<double,3> *)((this->Entries).AllocatorInstance.Data + lVar2);
}

// Add @ 14374fc40

TBVPayloadInfo<double,3> * __thiscall
Chaos::TArrayAsMap<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>
::Add(TArrayAsMap<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>
      *this,TPBDRigidParticleHandleImp<double,3,1> **param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FUniqueIdx *pFVar8;
  TBVPayloadInfo<double,3> *pTVar9;
  int iVar10;
  uint uVar11;
  
  pFVar8 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                     (*(TGeometryParticlesImp<double,3,0> **)*param_1,*(int *)&(*param_1)->field_0x8
                     );
  uVar3 = pFVar8->Idx;
  if (uVar3 == 0xffffffff) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745167>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xcf,"Idx.IsValid()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar9;
    }
  }
  iVar10 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayNum;
  if (iVar10 <= (int)uVar3) {
    iVar10 = uVar3 - iVar10;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x24,4,iVar10 + 1,(ForAnyElementType *)this,piVar1,&(this->Entries).ArrayMax)
    ;
    DefaultConstructItems<Chaos::TArrayAsMap<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>::FEntry,int>
              ((this->Entries).AllocatorInstance.Data + (longlong)iVar6 * 0x24,iVar10 + 1);
  }
  uVar11 = ~uVar3 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar9;
    }
  }
  lVar2 = (longlong)(int)uVar3 * 0x24;
  if ((this->Entries).AllocatorInstance.Data[lVar2 + 0x20] != (FScriptContainerElement)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745586>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0x272,"Entries[Idx].bSet == false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar9;
    }
  }
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar9;
    }
  }
  (this->Entries).AllocatorInstance.Data[lVar2 + 0x20] = (FScriptContainerElement)0x1;
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar9;
    }
  }
  return (TBVPayloadInfo<double,3> *)((this->Entries).AllocatorInstance.Data + lVar2);
}

// Add @ 14374fe30

TBVPayloadInfo<double,3> * __thiscall
Chaos::TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::TBVPayloadInfo<double,3>_>::Add
          (TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::TBVPayloadInfo<double,3>_> *this,
          FAccelerationStructureHandle *param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TBVPayloadInfo<double,3> *pTVar8;
  int iVar9;
  uint uVar10;
  
  uVar3 = (param_1->CachedUniqueIdx).Idx;
  if (uVar3 == 0xffffffff) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745159>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,199,"Idx.IsValid()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar8;
    }
  }
  iVar9 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayNum;
  if (iVar9 <= (int)uVar3) {
    iVar9 = uVar3 - iVar9;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x24,4,iVar9 + 1,(ForAnyElementType *)this,piVar1,&(this->Entries).ArrayMax);
    DefaultConstructItems<Chaos::TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::TBVPayloadInfo<double,3>_>::FEntry,int>
              ((this->Entries).AllocatorInstance.Data + (longlong)iVar6 * 0x24,iVar9 + 1);
  }
  uVar10 = ~uVar3 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar8;
    }
  }
  lVar2 = (longlong)(int)uVar3 * 0x24;
  if ((this->Entries).AllocatorInstance.Data[lVar2 + 0x20] != (FScriptContainerElement)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745586>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0x272,"Entries[Idx].bSet == false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar8;
    }
  }
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar8;
    }
  }
  (this->Entries).AllocatorInstance.Data[lVar2 + 0x20] = (FScriptContainerElement)0x1;
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TBVPayloadInfo<double,3> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return (TBVPayloadInfo<double,3> *)((this->Entries).AllocatorInstance.Data + lVar2);
}

// Find @ 14376f830

TBVPayloadInfo<double,3> * __thiscall
Chaos::TArrayAsMap<int,Chaos::TBVPayloadInfo<double,3>_>::Find
          (TArrayAsMap<int,Chaos::TBVPayloadInfo<double,3>_> *this,int *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TBVPayloadInfo<double,3> *pTVar5;
  
  uVar1 = *param_1;
  if ((int)uVar1 < 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745173>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xd5,"Payload >=0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
      return pTVar5;
    }
  }
  else if ((int)uVar1 < (this->Entries).ArrayNum) {
    if (((int)uVar1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
      return pTVar5;
    }
    if ((this->Entries).AllocatorInstance.Data[(longlong)(int)uVar1 * 0x24 + 0x20] !=
        (FScriptContainerElement)0x0) {
      uVar4 = 0;
      if ((int)uVar1 < (this->Entries).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
        return pTVar5;
      }
      return (TBVPayloadInfo<double,3> *)
             ((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x24);
    }
  }
  return (TBVPayloadInfo<double,3> *)0x0;
}

// Find @ 14376f940

TBVPayloadInfo<double,3> * __thiscall
Chaos::TArrayAsMap<Chaos::TGeometryParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>
::Find(TArrayAsMap<Chaos::TGeometryParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>
       *this,TGeometryParticleHandleImp<double,3,1> **param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FUniqueIdx *pFVar5;
  TBVPayloadInfo<double,3> *pTVar6;
  
  pFVar5 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                     ((TGeometryParticlesImp<double,3,0> *)(*param_1)->_padding_,
                      (int)(*param_1)->_padding_);
  uVar1 = pFVar5->Idx;
  if (uVar1 == 0xffffffff) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745167>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xcf,"Idx.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
      return pTVar6;
    }
  }
  else if ((-1 < (int)uVar1) && ((int)uVar1 < (this->Entries).ArrayNum)) {
    if (((int)uVar1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
      return pTVar6;
    }
    if ((this->Entries).AllocatorInstance.Data[(longlong)(int)uVar1 * 0x24 + 0x20] !=
        (FScriptContainerElement)0x0) {
      uVar4 = 0;
      if ((int)uVar1 < (this->Entries).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
        return pTVar6;
      }
      return (TBVPayloadInfo<double,3> *)
             ((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x24);
    }
  }
  return (TBVPayloadInfo<double,3> *)0x0;
}

// Find @ 14376fa70

TBVPayloadInfo<double,3> * __thiscall
Chaos::TArrayAsMap<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>
::Find(TArrayAsMap<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>
       *this,TPBDRigidParticleHandleImp<double,3,1> **param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FUniqueIdx *pFVar5;
  TBVPayloadInfo<double,3> *pTVar6;
  
  pFVar5 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                     (*(TGeometryParticlesImp<double,3,0> **)*param_1,*(int *)&(*param_1)->field_0x8
                     );
  uVar1 = pFVar5->Idx;
  if (uVar1 == 0xffffffff) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745167>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xcf,"Idx.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
      return pTVar6;
    }
  }
  else if ((-1 < (int)uVar1) && ((int)uVar1 < (this->Entries).ArrayNum)) {
    if (((int)uVar1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
      return pTVar6;
    }
    if ((this->Entries).AllocatorInstance.Data[(longlong)(int)uVar1 * 0x24 + 0x20] !=
        (FScriptContainerElement)0x0) {
      uVar4 = 0;
      if ((int)uVar1 < (this->Entries).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
        return pTVar6;
      }
      return (TBVPayloadInfo<double,3> *)
             ((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x24);
    }
  }
  return (TBVPayloadInfo<double,3> *)0x0;
}

// Find @ 14376fba0

TBVPayloadInfo<double,3> * __thiscall
Chaos::TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::TBVPayloadInfo<double,3>_>::Find
          (TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::TBVPayloadInfo<double,3>_> *this,
          FAccelerationStructureHandle *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TBVPayloadInfo<double,3> *pTVar5;
  
  uVar1 = (param_1->CachedUniqueIdx).Idx;
  if (uVar1 == 0xffffffff) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745159>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,199,"Idx.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
      return pTVar5;
    }
  }
  else if ((-1 < (int)uVar1) && ((int)uVar1 < (this->Entries).ArrayNum)) {
    if (((int)uVar1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
      return pTVar5;
    }
    if ((this->Entries).AllocatorInstance.Data[(longlong)(int)uVar1 * 0x24 + 0x20] !=
        (FScriptContainerElement)0x0) {
      uVar4 = 0;
      if ((int)uVar1 < (this->Entries).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
        return pTVar5;
      }
      return (TBVPayloadInfo<double,3> *)
             ((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x24);
    }
  }
  return (TBVPayloadInfo<double,3> *)0x0;
}

// FindChecked @ 14377ad00

TBVPayloadInfo<double,3> * __thiscall
Chaos::TArrayAsMap<int,Chaos::TBVPayloadInfo<double,3>_>::FindChecked
          (TArrayAsMap<int,Chaos::TBVPayloadInfo<double,3>_> *this,int *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TBVPayloadInfo<double,3> *pTVar5;
  
  uVar1 = *param_1;
  if ((int)uVar1 < 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745173>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xd5,"Payload >=0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
      return pTVar5;
    }
  }
  uVar4 = 0;
  if ((int)uVar1 < (this->Entries).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TBVPayloadInfo<double,3> *)
         ((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x24);
}

// FindChecked @ 14377adb0

TBVPayloadInfo<double,3> * __thiscall
Chaos::TArrayAsMap<Chaos::TGeometryParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>
::FindChecked(TArrayAsMap<Chaos::TGeometryParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>
              *this,TGeometryParticleHandleImp<double,3,1> **param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FUniqueIdx *pFVar5;
  TBVPayloadInfo<double,3> *pTVar6;
  
  pFVar5 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                     ((TGeometryParticlesImp<double,3,0> *)(*param_1)->_padding_,
                      (int)(*param_1)->_padding_);
  uVar1 = pFVar5->Idx;
  if (uVar1 == 0xffffffff) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745167>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xcf,"Idx.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
      return pTVar6;
    }
  }
  uVar4 = 0;
  if ((int)uVar1 < (this->Entries).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
      return pTVar6;
    }
  }
  return (TBVPayloadInfo<double,3> *)
         ((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x24);
}

// FindChecked @ 14377ae70

TBVPayloadInfo<double,3> * __thiscall
Chaos::TArrayAsMap<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>
::FindChecked(TArrayAsMap<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>
              *this,TPBDRigidParticleHandleImp<double,3,1> **param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FUniqueIdx *pFVar5;
  TBVPayloadInfo<double,3> *pTVar6;
  
  pFVar5 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                     (*(TGeometryParticlesImp<double,3,0> **)*param_1,*(int *)&(*param_1)->field_0x8
                     );
  uVar1 = pFVar5->Idx;
  if (uVar1 == 0xffffffff) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745167>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xcf,"Idx.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
      return pTVar6;
    }
  }
  uVar4 = 0;
  if ((int)uVar1 < (this->Entries).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
      return pTVar6;
    }
  }
  return (TBVPayloadInfo<double,3> *)
         ((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x24);
}

// FindChecked @ 14377af30

TBVPayloadInfo<double,3> * __thiscall
Chaos::TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::TBVPayloadInfo<double,3>_>::
FindChecked(TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::TBVPayloadInfo<double,3>_> *this,
           FAccelerationStructureHandle *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TBVPayloadInfo<double,3> *pTVar5;
  
  uVar1 = (param_1->CachedUniqueIdx).Idx;
  if (uVar1 == 0xffffffff) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745159>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,199,"Idx.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
      return pTVar5;
    }
  }
  uVar4 = 0;
  if ((int)uVar1 < (this->Entries).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TBVPayloadInfo<double,3> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TBVPayloadInfo<double,3> *)
         ((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x24);
}

// Serialize @ 1437a7cc0

void __thiscall
Chaos::TArrayAsMap<int,Chaos::TBVPayloadInfo<double,3>_>::Serialize
          (TArrayAsMap<int,Chaos::TBVPayloadInfo<double,3>_> *this,FChaosArchive *param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  
  if ((param_1->_padding_ & 1) != 0) {
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    operator<<<int,TSizedDefaultAllocator<32>_>(param_1,&local_48);
    uVar9 = (ulonglong)local_48.ArrayNum;
    local_res20 = local_48.AllocatorInstance.Data + uVar9 * 4;
    local_res18 = local_48.ArrayNum;
    uVar10 = uVar9;
    FVar13.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      pFVar5 = local_res20;
      if ((int)uVar10 != (int)uVar9) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar13.Data == pFVar5) break;
      uVar3 = *(uint *)FVar13.Data;
      if ((int)uVar3 < 0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7431867033672745173>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,0xd5,"Payload >=0");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar11 = (this->Entries).ArrayNum;
      piVar1 = &(this->Entries).ArrayNum;
      if (iVar11 <= (int)uVar3) {
        iVar11 = uVar3 - iVar11;
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x24,4,iVar11 + 1,(ForAnyElementType *)this,piVar1,
                           &(this->Entries).ArrayMax);
        DefaultConstructItems<Chaos::TArrayAsMap<int,Chaos::TBVPayloadInfo<double,3>_>::FEntry,int>
                  ((this->Entries).AllocatorInstance.Data + (longlong)iVar7 * 0x24,iVar11 + 1);
      }
      uVar12 = ~uVar3 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar3 < *piVar1) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar2 = (longlong)(int)uVar3 * 0x24;
      if ((this->Entries).AllocatorInstance.Data[lVar2 + 0x20] != (FScriptContainerElement)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7431867033672745586>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,0x272,"Entries[Idx].bSet == false");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar8 = 0;
      if ((int)uVar3 < *piVar1) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (this->Entries).AllocatorInstance.Data[lVar2 + 0x20] = (FScriptContainerElement)0x1;
      uVar8 = 0;
      if ((int)uVar3 < *piVar1) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      operator<<<double,3>
                ((FArchive *)param_1,
                 (TBVPayloadInfo<double,3> *)((this->Entries).AllocatorInstance.Data + lVar2));
      uVar10 = local_48._8_8_ & 0xffffffff;
      FVar13.Data = FVar13.Data + 4;
      uVar9 = (ulonglong)local_res18;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 1437a7f60

void __thiscall
Chaos::TArrayAsMap<Chaos::TGeometryParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>
::Serialize(TArrayAsMap<Chaos::TGeometryParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>
            *this,FChaosArchive *param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FUniqueIdx *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_48;
  
  if ((param_1->_padding_ & 1) != 0) {
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    operator<<<Chaos::TGeometryParticleHandleImp<double,3,1>_TSizedDefaultAllocator<32>_>
              (param_1,&local_48);
    uVar10 = (ulonglong)local_48.ArrayNum;
    local_res18 = local_48.ArrayNum;
    local_res20 = local_48.AllocatorInstance.Data + uVar10 * 8;
    uVar11 = uVar10;
    FVar14.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      pFVar5 = local_res20;
      if ((int)uVar11 != (int)uVar10) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Chaos::TGeometryParticleHandleImp<double,3,1>_*,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar14.Data == pFVar5) break;
      pFVar9 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                         ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)FVar14.Data,
                          *(int *)(*(undefined8 **)FVar14.Data + 1));
      uVar3 = pFVar9->Idx;
      if (uVar3 == 0xffffffff) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7431867033672745167>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,0xcf,"Idx.IsValid()");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar12 = (this->Entries).ArrayNum;
      piVar1 = &(this->Entries).ArrayNum;
      if (iVar12 <= (int)uVar3) {
        iVar12 = uVar3 - iVar12;
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x24,4,iVar12 + 1,(ForAnyElementType *)this,piVar1,
                           &(this->Entries).ArrayMax);
        DefaultConstructItems<Chaos::TArrayAsMap<Chaos::TGeometryParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>::FEntry,int>
                  ((this->Entries).AllocatorInstance.Data + (longlong)iVar7 * 0x24,iVar12 + 1);
      }
      uVar13 = ~uVar3 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar3 < *piVar1) {
        uVar8 = uVar13;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar2 = (longlong)(int)uVar3 * 0x24;
      if ((this->Entries).AllocatorInstance.Data[lVar2 + 0x20] != (FScriptContainerElement)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7431867033672745586>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,0x272,"Entries[Idx].bSet == false");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar8 = 0;
      if ((int)uVar3 < *piVar1) {
        uVar8 = uVar13;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (this->Entries).AllocatorInstance.Data[lVar2 + 0x20] = (FScriptContainerElement)0x1;
      uVar8 = 0;
      if ((int)uVar3 < *piVar1) {
        uVar8 = uVar13;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      operator<<<double,3>
                ((FArchive *)param_1,
                 (TBVPayloadInfo<double,3> *)((this->Entries).AllocatorInstance.Data + lVar2));
      uVar11 = local_48._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 8;
      uVar10 = (ulonglong)local_res18;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 1437a8200

void __thiscall
Chaos::TArrayAsMap<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>
::Serialize(TArrayAsMap<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>
            *this,FChaosArchive *param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FUniqueIdx *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  TArray<Chaos::TSerializablePtr<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,TSizedDefaultAllocator<32>_>
  local_48;
  
  if ((param_1->_padding_ & 1) != 0) {
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    operator<<<Chaos::TPBDRigidParticleHandleImp<double,3,1>_TSizedDefaultAllocator<32>_>
              (param_1,&local_48);
    uVar10 = (ulonglong)local_48.ArrayNum;
    local_res18 = local_48.ArrayNum;
    local_res20 = local_48.AllocatorInstance.Data + uVar10 * 8;
    uVar11 = uVar10;
    FVar14.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      pFVar5 = local_res20;
      if ((int)uVar11 != (int)uVar10) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar14.Data == pFVar5) break;
      pFVar9 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                         ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)FVar14.Data,
                          *(int *)(*(undefined8 **)FVar14.Data + 1));
      uVar3 = pFVar9->Idx;
      if (uVar3 == 0xffffffff) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7431867033672745167>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,0xcf,"Idx.IsValid()");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar12 = (this->Entries).ArrayNum;
      piVar1 = &(this->Entries).ArrayNum;
      if (iVar12 <= (int)uVar3) {
        iVar12 = uVar3 - iVar12;
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x24,4,iVar12 + 1,(ForAnyElementType *)this,piVar1,
                           &(this->Entries).ArrayMax);
        DefaultConstructItems<Chaos::TArrayAsMap<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TBVPayloadInfo<double,3>_>::FEntry,int>
                  ((this->Entries).AllocatorInstance.Data + (longlong)iVar7 * 0x24,iVar12 + 1);
      }
      uVar13 = ~uVar3 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar3 < *piVar1) {
        uVar8 = uVar13;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar2 = (longlong)(int)uVar3 * 0x24;
      if ((this->Entries).AllocatorInstance.Data[lVar2 + 0x20] != (FScriptContainerElement)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7431867033672745586>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,0x272,"Entries[Idx].bSet == false");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar8 = 0;
      if ((int)uVar3 < *piVar1) {
        uVar8 = uVar13;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (this->Entries).AllocatorInstance.Data[lVar2 + 0x20] = (FScriptContainerElement)0x1;
      uVar8 = 0;
      if ((int)uVar3 < *piVar1) {
        uVar8 = uVar13;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      operator<<<double,3>
                ((FArchive *)param_1,
                 (TBVPayloadInfo<double,3> *)((this->Entries).AllocatorInstance.Data + lVar2));
      uVar11 = local_48._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 8;
      uVar10 = (ulonglong)local_res18;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 1437a84a0

void __thiscall
Chaos::TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::TBVPayloadInfo<double,3>_>::Serialize
          (TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::TBVPayloadInfo<double,3>_> *this,
          FChaosArchive *param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  TArray<Chaos::FAccelerationStructureHandle,TSizedDefaultAllocator<32>_> local_48;
  
  if ((param_1->_padding_ & 1) != 0) {
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    operator<<<Chaos::FAccelerationStructureHandle_TSizedDefaultAllocator<32>_>(param_1,&local_48);
    uVar9 = (ulonglong)local_48.ArrayNum;
    local_res20 = local_48.AllocatorInstance.Data + uVar9 * 0x38;
    local_res18 = local_48.ArrayNum;
    uVar10 = uVar9;
    FVar13.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      pFVar5 = local_res20;
      if ((int)uVar10 != (int)uVar9) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Chaos::FAccelerationStructureHandle,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar13.Data == pFVar5) break;
      uVar3 = *(uint *)(FVar13.Data + 0x10);
      if (uVar3 == 0xffffffff) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7431867033672745159>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,199,"Idx.IsValid()");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar11 = (this->Entries).ArrayNum;
      piVar1 = &(this->Entries).ArrayNum;
      if (iVar11 <= (int)uVar3) {
        iVar11 = uVar3 - iVar11;
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x24,4,iVar11 + 1,(ForAnyElementType *)this,piVar1,
                           &(this->Entries).ArrayMax);
        DefaultConstructItems<Chaos::TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::TBVPayloadInfo<double,3>_>::FEntry,int>
                  ((this->Entries).AllocatorInstance.Data + (longlong)iVar7 * 0x24,iVar11 + 1);
      }
      uVar12 = ~uVar3 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar3 < *piVar1) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar2 = (longlong)(int)uVar3 * 0x24;
      if ((this->Entries).AllocatorInstance.Data[lVar2 + 0x20] != (FScriptContainerElement)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7431867033672745586>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,0x272,"Entries[Idx].bSet == false");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar8 = 0;
      if ((int)uVar3 < *piVar1) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (this->Entries).AllocatorInstance.Data[lVar2 + 0x20] = (FScriptContainerElement)0x1;
      uVar8 = 0;
      if ((int)uVar3 < *piVar1) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      operator<<<double,3>
                ((FArchive *)param_1,
                 (TBVPayloadInfo<double,3> *)((this->Entries).AllocatorInstance.Data + lVar2));
      uVar10 = local_48._8_8_ & 0xffffffff;
      FVar13.Data = FVar13.Data + 0x38;
      uVar9 = (ulonglong)local_res18;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

// Add @ 143898860

int * __thiscall
Chaos::TArrayAsMap<Chaos::FUniqueIdx,int>::Add
          (TArrayAsMap<Chaos::FUniqueIdx,int> *this,FUniqueIdx *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar1 = param_1->Idx;
  lVar9 = (longlong)(int)uVar1;
  if (uVar1 == 0xffffffff) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745179>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xdb,"Payload.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      piVar6 = (int *)(*pcVar2)();
      return piVar6;
    }
  }
  iVar7 = (this->Entries).ArrayNum;
  piVar6 = &(this->Entries).ArrayNum;
  if (iVar7 <= (int)uVar1) {
    iVar7 = uVar1 - iVar7;
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar7 + 1,(ForAnyElementType *)this,piVar6,&(this->Entries).ArrayMax);
    DefaultConstructItems<Chaos::TArrayAsMap<Chaos::FUniqueIdx,int>::FEntry,int>
              ((this->Entries).AllocatorInstance.Data + (longlong)iVar4 * 8,iVar7 + 1);
  }
  uVar8 = ~uVar1 >> 0x1f;
  uVar5 = 0;
  if ((int)uVar1 < *piVar6) {
    uVar5 = uVar8;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      piVar6 = (int *)(*pcVar2)();
      return piVar6;
    }
  }
  if ((this->Entries).AllocatorInstance.Data[lVar9 * 8 + 4] != (FScriptContainerElement)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745586>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0x272,"Entries[Idx].bSet == false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      piVar6 = (int *)(*pcVar2)();
      return piVar6;
    }
  }
  uVar5 = 0;
  if ((int)uVar1 < *piVar6) {
    uVar5 = uVar8;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      piVar6 = (int *)(*pcVar2)();
      return piVar6;
    }
  }
  (this->Entries).AllocatorInstance.Data[lVar9 * 8 + 4] = (FScriptContainerElement)0x1;
  uVar5 = 0;
  if ((int)uVar1 < *piVar6) {
    uVar5 = uVar8;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      piVar6 = (int *)(*pcVar2)();
      return piVar6;
    }
  }
  return (int *)((this->Entries).AllocatorInstance.Data + lVar9 * 8);
}

// Find @ 1438b04e0

int * __thiscall
Chaos::TArrayAsMap<Chaos::FUniqueIdx,int>::Find
          (TArrayAsMap<Chaos::FUniqueIdx,int> *this,FUniqueIdx *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  
  uVar1 = param_1->Idx;
  if (uVar1 == 0xffffffff) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745179>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xdb,"Payload.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      piVar5 = (int *)(*pcVar2)();
      return piVar5;
    }
  }
  else if ((-1 < (int)uVar1) && ((int)uVar1 < (this->Entries).ArrayNum)) {
    if (((int)uVar1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      piVar5 = (int *)(*pcVar2)();
      return piVar5;
    }
    if ((this->Entries).AllocatorInstance.Data[(longlong)(int)uVar1 * 8 + 4] !=
        (FScriptContainerElement)0x0) {
      uVar4 = 0;
      if ((int)uVar1 < (this->Entries).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        piVar5 = (int *)(*pcVar2)();
        return piVar5;
      }
      return (int *)((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
    }
  }
  return (int *)0x0;
}

// TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> @ 143c42e20

TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> * __thiscall
Chaos::TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>::TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>
          (TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *this,
          TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Entries).ArrayMax;
  iVar2 = (param_1->Entries).ArrayNum;
  _Src = (param_1->Entries).AllocatorInstance.Data;
  (this->Entries).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->Entries).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0x18);
  return this;
}

// operator= @ 143c45f50

TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> * __thiscall
Chaos::TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>::operator=
          (TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *this,
          TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Entries).ArrayMax;
    piVar1 = &(this->Entries).ArrayMax;
    _Src = (param_1->Entries).AllocatorInstance.Data;
    iVar3 = (param_1->Entries).ArrayNum;
    (this->Entries).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->Entries).AllocatorInstance.Data,_Src,(longlong)iVar3 * 0x18);
    }
  }
  return this;
}

// Add @ 143c55130

FAABBTreePayloadInfo * __thiscall
Chaos::TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>::Add
          (TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *this,int *param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FAABBTreePayloadInfo *pFVar8;
  int iVar9;
  uint uVar10;
  
  uVar3 = *param_1;
  if ((int)uVar3 < 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745173>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xd5,"Payload >=0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FAABBTreePayloadInfo *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar9 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayNum;
  if (iVar9 <= (int)uVar3) {
    iVar9 = uVar3 - iVar9;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,iVar9 + 1,(ForAnyElementType *)this,piVar1,&(this->Entries).ArrayMax);
    DefaultConstructItems<Chaos::TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>::FEntry,int>
              ((this->Entries).AllocatorInstance.Data + (longlong)iVar6 * 0x18,iVar9 + 1);
  }
  uVar10 = ~uVar3 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FAABBTreePayloadInfo *)(*pcVar4)();
      return pFVar8;
    }
  }
  lVar2 = (longlong)(int)uVar3 * 0x18;
  if ((this->Entries).AllocatorInstance.Data[lVar2 + 0x14] != (FScriptContainerElement)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745586>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0x272,"Entries[Idx].bSet == false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FAABBTreePayloadInfo *)(*pcVar4)();
      return pFVar8;
    }
  }
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FAABBTreePayloadInfo *)(*pcVar4)();
      return pFVar8;
    }
  }
  (this->Entries).AllocatorInstance.Data[lVar2 + 0x14] = (FScriptContainerElement)0x1;
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FAABBTreePayloadInfo *)(*pcVar4)();
      return pFVar8;
    }
  }
  return (FAABBTreePayloadInfo *)((this->Entries).AllocatorInstance.Data + lVar2);
}

// AddFrom @ 143c56e00

void __thiscall
Chaos::TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>::AddFrom
          (TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *this,
          TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = 0;
  if (param_2 < (param_1->Entries).ArrayNum) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (this->Entries).AllocatorInstance.Data;
  pFVar2 = (param_1->Entries).AllocatorInstance.Data + (longlong)param_2 * 0x18;
  if ((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)(this->Entries).ArrayMax * 0x18)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,(ForAnyElementType *)this,piVar1);
  }
  (this->Entries).ArrayNum = iVar9 + 1;
  uVar6 = *(undefined8 *)(pFVar2 + 8);
  pFVar4 = (this->Entries).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar9 * 0x18;
  *(undefined8 *)pFVar3 = *(undefined8 *)pFVar2;
  *(undefined8 *)(pFVar3 + 8) = uVar6;
  *(undefined8 *)(pFVar4 + (longlong)iVar9 * 0x18 + 0x10) = *(undefined8 *)(pFVar2 + 0x10);
  return;
}

// Find @ 143c66140

FAABBTreePayloadInfo * __thiscall
Chaos::TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>::Find
          (TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *this,int *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAABBTreePayloadInfo *pFVar5;
  
  uVar1 = *param_1;
  if ((int)uVar1 < 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745173>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xd5,"Payload >=0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  else if ((int)uVar1 < (this->Entries).ArrayNum) {
    if (((int)uVar1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
      return pFVar5;
    }
    if ((this->Entries).AllocatorInstance.Data[(longlong)(int)uVar1 * 0x18 + 0x14] !=
        (FScriptContainerElement)0x0) {
      uVar4 = 0;
      if ((int)uVar1 < (this->Entries).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
        return pFVar5;
      }
      return (FAABBTreePayloadInfo *)
             ((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x18);
    }
  }
  return (FAABBTreePayloadInfo *)0x0;
}

// Find @ 143c66250

FAABBTreePayloadInfo * __thiscall
Chaos::TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>::Find
          (TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *this,int *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAABBTreePayloadInfo *pFVar5;
  
  uVar1 = *param_1;
  if (((int)uVar1 < 0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7431867033672745173>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                         ,0xd5,"Payload >=0"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
    return pFVar5;
  }
  if ((int)uVar1 < (this->Entries).ArrayNum) {
    if (((int)uVar1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
      return pFVar5;
    }
    if ((this->Entries).AllocatorInstance.Data[(longlong)(int)uVar1 * 0x18 + 0x14] !=
        (FScriptContainerElement)0x0) {
      uVar4 = 0;
      if ((int)uVar1 < (this->Entries).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
        return pFVar5;
      }
      return (FAABBTreePayloadInfo *)
             ((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x18);
    }
  }
  return (FAABBTreePayloadInfo *)0x0;
}

// FindChecked @ 143c67270

FAABBTreePayloadInfo * __thiscall
Chaos::TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>::FindChecked
          (TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *this,int *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAABBTreePayloadInfo *pFVar5;
  
  uVar1 = *param_1;
  if ((int)uVar1 < 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745173>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xd5,"Payload >=0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar4 = 0;
  if ((int)uVar1 < (this->Entries).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FAABBTreePayloadInfo *)
         ((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x18);
}

// Remove @ 143c6dde0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>::Remove
          (TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *this,int *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uStack_24;
  
  uVar6 = _UNK_15060db28;
  uVar5 = ___xmm_ffffffffffffffffffffffffffffffff;
  iVar2 = *param_1;
  if (iVar2 < 0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745173>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xd5,"Payload >=0");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (iVar2 < (this->Entries).ArrayNum) {
    uStack_24 = uStack_24 & 0xffffff00;
    if (iVar2 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->Entries).AllocatorInstance.Data;
    pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
    *(undefined8 *)pFVar1 = uVar5;
    *(undefined8 *)(pFVar1 + 8) = uVar6;
    *(ulonglong *)(pFVar3 + (longlong)iVar2 * 0x18 + 0x10) = CONCAT44(uStack_24,0xffffffff);
  }
  return;
}

// Serialize @ 143c72d80

void __thiscall
Chaos::TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>::Serialize
          (TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *this,FChaosArchive *param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  
  if ((param_1->_padding_ & 1) != 0) {
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    operator<<<int,TSizedDefaultAllocator<32>_>(param_1,&local_48);
    uVar9 = (ulonglong)local_48.ArrayNum;
    local_res20 = local_48.AllocatorInstance.Data + uVar9 * 4;
    local_res18 = local_48.ArrayNum;
    uVar10 = uVar9;
    FVar13.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      pFVar5 = local_res20;
      if ((int)uVar10 != (int)uVar9) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar13.Data == pFVar5) break;
      uVar3 = *(uint *)FVar13.Data;
      if ((int)uVar3 < 0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7431867033672745173>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,0xd5,"Payload >=0");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar11 = (this->Entries).ArrayNum;
      piVar1 = &(this->Entries).ArrayNum;
      if (iVar11 <= (int)uVar3) {
        iVar11 = uVar3 - iVar11;
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,4,iVar11 + 1,(ForAnyElementType *)this,piVar1,
                           &(this->Entries).ArrayMax);
        DefaultConstructItems<Chaos::TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>::FEntry,int>
                  ((this->Entries).AllocatorInstance.Data + (longlong)iVar7 * 0x18,iVar11 + 1);
      }
      uVar12 = ~uVar3 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar3 < *piVar1) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar2 = (longlong)(int)uVar3 * 0x18;
      if ((this->Entries).AllocatorInstance.Data[lVar2 + 0x14] != (FScriptContainerElement)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7431867033672745586>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,0x272,"Entries[Idx].bSet == false");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar8 = 0;
      if ((int)uVar3 < *piVar1) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (this->Entries).AllocatorInstance.Data[lVar2 + 0x14] = (FScriptContainerElement)0x1;
      uVar8 = 0;
      if ((int)uVar3 < *piVar1) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FAABBTreePayloadInfo::Serialize
                ((FAABBTreePayloadInfo *)((this->Entries).AllocatorInstance.Data + lVar2),
                 (FArchive *)param_1);
      uVar10 = local_48._8_8_ & 0xffffffff;
      FVar13.Data = FVar13.Data + 4;
      uVar9 = (ulonglong)local_res18;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

// TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo> @ 143cff840

TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo> * __thiscall
Chaos::TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo>::
TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo>
          (TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo> *this,
          TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Entries).ArrayMax;
  iVar2 = (param_1->Entries).ArrayNum;
  _Src = (param_1->Entries).AllocatorInstance.Data;
  (this->Entries).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->Entries).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0x18);
  return this;
}

// operator= @ 143d04470

TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo> * __thiscall
Chaos::TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo>::operator=
          (TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo> *this,
          TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Entries).ArrayMax;
    piVar1 = &(this->Entries).ArrayMax;
    _Src = (param_1->Entries).AllocatorInstance.Data;
    iVar3 = (param_1->Entries).ArrayNum;
    (this->Entries).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->Entries).AllocatorInstance.Data,_Src,(longlong)iVar3 * 0x18);
    }
  }
  return this;
}

// Add @ 143d38ba0

uint * __thiscall
Chaos::TArrayAsMap<Chaos::FUniqueIdx,unsigned_int>::Add
          (TArrayAsMap<Chaos::FUniqueIdx,unsigned_int> *this,FUniqueIdx *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar2 = param_1->Idx;
  lVar10 = (longlong)(int)uVar2;
  if (uVar2 == 0xffffffff) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745179>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xdb,"Payload.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      puVar7 = (uint *)(*pcVar3)();
      return puVar7;
    }
  }
  iVar8 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayNum;
  if (iVar8 <= (int)uVar2) {
    iVar8 = uVar2 - iVar8;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar8 + 1,(ForAnyElementType *)this,piVar1,&(this->Entries).ArrayMax);
    DefaultConstructItems<Chaos::TArrayAsMap<Chaos::FUniqueIdx,unsigned_int>::FEntry,int>
              ((this->Entries).AllocatorInstance.Data + (longlong)iVar5 * 8,iVar8 + 1);
  }
  uVar9 = ~uVar2 >> 0x1f;
  uVar6 = 0;
  if ((int)uVar2 < *piVar1) {
    uVar6 = uVar9;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      puVar7 = (uint *)(*pcVar3)();
      return puVar7;
    }
  }
  if ((this->Entries).AllocatorInstance.Data[lVar10 * 8 + 4] != (FScriptContainerElement)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745586>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0x272,"Entries[Idx].bSet == false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      puVar7 = (uint *)(*pcVar3)();
      return puVar7;
    }
  }
  uVar6 = 0;
  if ((int)uVar2 < *piVar1) {
    uVar6 = uVar9;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      puVar7 = (uint *)(*pcVar3)();
      return puVar7;
    }
  }
  (this->Entries).AllocatorInstance.Data[lVar10 * 8 + 4] = (FScriptContainerElement)0x1;
  uVar6 = 0;
  if ((int)uVar2 < *piVar1) {
    uVar6 = uVar9;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      puVar7 = (uint *)(*pcVar3)();
      return puVar7;
    }
  }
  return (uint *)((this->Entries).AllocatorInstance.Data + lVar10 * 8);
}

// Add @ 143d38d60

FAABBTreePayloadInfo * __thiscall
Chaos::TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo>::Add
          (TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo> *this,
          FAccelerationStructureHandle *param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FAABBTreePayloadInfo *pFVar8;
  int iVar9;
  uint uVar10;
  
  uVar3 = (param_1->CachedUniqueIdx).Idx;
  if (uVar3 == 0xffffffff) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745159>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,199,"Idx.IsValid()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FAABBTreePayloadInfo *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar9 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayNum;
  if (iVar9 <= (int)uVar3) {
    iVar9 = uVar3 - iVar9;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,iVar9 + 1,(ForAnyElementType *)this,piVar1,&(this->Entries).ArrayMax);
    DefaultConstructItems<Chaos::TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo>::FEntry,int>
              ((this->Entries).AllocatorInstance.Data + (longlong)iVar6 * 0x18,iVar9 + 1);
  }
  uVar10 = ~uVar3 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FAABBTreePayloadInfo *)(*pcVar4)();
      return pFVar8;
    }
  }
  lVar2 = (longlong)(int)uVar3 * 0x18;
  if ((this->Entries).AllocatorInstance.Data[lVar2 + 0x14] != (FScriptContainerElement)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745586>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0x272,"Entries[Idx].bSet == false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FAABBTreePayloadInfo *)(*pcVar4)();
      return pFVar8;
    }
  }
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FAABBTreePayloadInfo *)(*pcVar4)();
      return pFVar8;
    }
  }
  (this->Entries).AllocatorInstance.Data[lVar2 + 0x14] = (FScriptContainerElement)0x1;
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FAABBTreePayloadInfo *)(*pcVar4)();
      return pFVar8;
    }
  }
  return (FAABBTreePayloadInfo *)((this->Entries).AllocatorInstance.Data + lVar2);
}

// AddFrom @ 143d3ab50

void __thiscall
Chaos::TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo>::AddFrom
          (TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo> *this,
          TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = 0;
  if (param_2 < (param_1->Entries).ArrayNum) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (this->Entries).AllocatorInstance.Data;
  pFVar2 = (param_1->Entries).AllocatorInstance.Data + (longlong)param_2 * 0x18;
  if ((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)(this->Entries).ArrayMax * 0x18)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,(ForAnyElementType *)this,piVar1);
  }
  (this->Entries).ArrayNum = iVar9 + 1;
  uVar6 = *(undefined8 *)(pFVar2 + 8);
  pFVar4 = (this->Entries).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar9 * 0x18;
  *(undefined8 *)pFVar3 = *(undefined8 *)pFVar2;
  *(undefined8 *)(pFVar3 + 8) = uVar6;
  *(undefined8 *)(pFVar4 + (longlong)iVar9 * 0x18 + 0x10) = *(undefined8 *)(pFVar2 + 0x10);
  return;
}

// Find @ 143d4ff30

uint * __thiscall
Chaos::TArrayAsMap<Chaos::FUniqueIdx,unsigned_int>::Find
          (TArrayAsMap<Chaos::FUniqueIdx,unsigned_int> *this,FUniqueIdx *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar1 = param_1->Idx;
  if (uVar1 == 0xffffffff) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745179>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xdb,"Payload.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uint *)(*pcVar2)();
      return puVar5;
    }
  }
  else if ((-1 < (int)uVar1) && ((int)uVar1 < (this->Entries).ArrayNum)) {
    if (((int)uVar1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uint *)(*pcVar2)();
      return puVar5;
    }
    if ((this->Entries).AllocatorInstance.Data[(longlong)(int)uVar1 * 8 + 4] !=
        (FScriptContainerElement)0x0) {
      uVar4 = 0;
      if ((int)uVar1 < (this->Entries).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        puVar5 = (uint *)(*pcVar2)();
        return puVar5;
      }
      return (uint *)((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
    }
  }
  return (uint *)0x0;
}

// Find @ 143d50040

FAABBTreePayloadInfo * __thiscall
Chaos::TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo>::Find
          (TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo> *this,
          FAccelerationStructureHandle *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAABBTreePayloadInfo *pFVar5;
  
  uVar1 = (param_1->CachedUniqueIdx).Idx;
  if (uVar1 == 0xffffffff) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745159>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,199,"Idx.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  else if ((-1 < (int)uVar1) && ((int)uVar1 < (this->Entries).ArrayNum)) {
    if (((int)uVar1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
      return pFVar5;
    }
    if ((this->Entries).AllocatorInstance.Data[(longlong)(int)uVar1 * 0x18 + 0x14] !=
        (FScriptContainerElement)0x0) {
      uVar4 = 0;
      if ((int)uVar1 < (this->Entries).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
        return pFVar5;
      }
      return (FAABBTreePayloadInfo *)
             ((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x18);
    }
  }
  return (FAABBTreePayloadInfo *)0x0;
}

// Find @ 143d50160

FAABBTreePayloadInfo * __thiscall
Chaos::TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo>::Find
          (TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo> *this,
          FAccelerationStructureHandle *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAABBTreePayloadInfo *pFVar5;
  
  uVar1 = (param_1->CachedUniqueIdx).Idx;
  if ((uVar1 == 0xffffffff) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7431867033672745159>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                         ,199,"Idx.IsValid()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
    return pFVar5;
  }
  if ((int)uVar1 < (this->Entries).ArrayNum) {
    if (((int)uVar1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
      return pFVar5;
    }
    if ((this->Entries).AllocatorInstance.Data[(longlong)(int)uVar1 * 0x18 + 0x14] !=
        (FScriptContainerElement)0x0) {
      uVar4 = 0;
      if ((int)uVar1 < (this->Entries).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
        return pFVar5;
      }
      return (FAABBTreePayloadInfo *)
             ((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x18);
    }
  }
  return (FAABBTreePayloadInfo *)0x0;
}

// FindChecked @ 143d52130

int * __thiscall
Chaos::TArrayAsMap<Chaos::FUniqueIdx,int>::FindChecked
          (TArrayAsMap<Chaos::FUniqueIdx,int> *this,FUniqueIdx *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  
  uVar1 = param_1->Idx;
  if (uVar1 == 0xffffffff) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745179>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xdb,"Payload.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      piVar5 = (int *)(*pcVar2)();
      return piVar5;
    }
  }
  uVar4 = 0;
  if ((int)uVar1 < (this->Entries).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      piVar5 = (int *)(*pcVar2)();
      return piVar5;
    }
  }
  return (int *)((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
}

// FindChecked @ 143d521e0

uint * __thiscall
Chaos::TArrayAsMap<Chaos::FUniqueIdx,unsigned_int>::FindChecked
          (TArrayAsMap<Chaos::FUniqueIdx,unsigned_int> *this,FUniqueIdx *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar1 = param_1->Idx;
  if (uVar1 == 0xffffffff) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745179>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xdb,"Payload.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uint *)(*pcVar2)();
      return puVar5;
    }
  }
  uVar4 = 0;
  if ((int)uVar1 < (this->Entries).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uint *)(*pcVar2)();
      return puVar5;
    }
  }
  return (uint *)((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
}

// FindChecked @ 143d52290

FAABBTreePayloadInfo * __thiscall
Chaos::TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo>::FindChecked
          (TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo> *this,
          FAccelerationStructureHandle *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAABBTreePayloadInfo *pFVar5;
  
  uVar1 = (param_1->CachedUniqueIdx).Idx;
  if (uVar1 == 0xffffffff) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745159>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,199,"Idx.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar4 = 0;
  if ((int)uVar1 < (this->Entries).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAABBTreePayloadInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FAABBTreePayloadInfo *)
         ((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x18);
}

// Remove @ 143d619f0

void __thiscall
Chaos::TArrayAsMap<Chaos::FUniqueIdx,unsigned_int>::Remove
          (TArrayAsMap<Chaos::FUniqueIdx,unsigned_int> *this,FUniqueIdx *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 local_res10;
  undefined4 uStackX_14;
  
  iVar1 = param_1->Idx;
  if (iVar1 == -1) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745179>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xdb,"Payload.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if ((-1 < iVar1) && (iVar1 < (this->Entries).ArrayNum)) {
    if (iVar1 < 0) {
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
    *(ulonglong *)((this->Entries).AllocatorInstance.Data + (longlong)iVar1 * 8) =
         CONCAT44(uStackX_14,local_res10) & 0xffffff00ffffffff;
  }
  return;
}

// Remove @ 143d61ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo>::Remove
          (TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo> *this,
          FAccelerationStructureHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uStack_24;
  
  uVar6 = _UNK_15060db28;
  uVar5 = ___xmm_ffffffffffffffffffffffffffffffff;
  iVar2 = (param_1->CachedUniqueIdx).Idx;
  if (iVar2 == -1) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745159>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,199,"Idx.IsValid()");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if ((-1 < iVar2) && (iVar2 < (this->Entries).ArrayNum)) {
    uStack_24 = uStack_24 & 0xffffff00;
    if (iVar2 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->Entries).AllocatorInstance.Data;
    pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
    *(undefined8 *)pFVar1 = uVar5;
    *(undefined8 *)(pFVar1 + 8) = uVar6;
    *(ulonglong *)(pFVar3 + (longlong)iVar2 * 0x18 + 0x10) = CONCAT44(uStack_24,0xffffffff);
  }
  return;
}

// RemoveChecked @ 143d62d00

void __thiscall
Chaos::TArrayAsMap<Chaos::FUniqueIdx,int>::RemoveChecked
          (TArrayAsMap<Chaos::FUniqueIdx,int> *this,FUniqueIdx *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  uVar1 = param_1->Idx;
  if (uVar1 == 0xffffffff) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745179>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,0xdb,"Payload.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = 0;
  if ((int)uVar1 < (this->Entries).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
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
  *(ulonglong *)((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) =
       CONCAT44(uStackX_c,local_res8) & 0xffffff00ffffffff;
  return;
}

// Serialize @ 143d6cb00

void __thiscall
Chaos::TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo>::Serialize
          (TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo> *this,
          FChaosArchive *param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  TArray<Chaos::FAccelerationStructureHandle,TSizedDefaultAllocator<32>_> local_48;
  
  if ((param_1->_padding_ & 1) != 0) {
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    operator<<<Chaos::FAccelerationStructureHandle_TSizedDefaultAllocator<32>_>(param_1,&local_48);
    uVar9 = (ulonglong)local_48.ArrayNum;
    local_res20 = local_48.AllocatorInstance.Data + uVar9 * 0x38;
    local_res18 = local_48.ArrayNum;
    uVar10 = uVar9;
    FVar13.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      pFVar5 = local_res20;
      if ((int)uVar10 != (int)uVar9) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Chaos::FAccelerationStructureHandle,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar13.Data == pFVar5) break;
      uVar3 = *(uint *)(FVar13.Data + 0x10);
      if (uVar3 == 0xffffffff) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7431867033672745159>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,199,"Idx.IsValid()");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar11 = (this->Entries).ArrayNum;
      piVar1 = &(this->Entries).ArrayNum;
      if (iVar11 <= (int)uVar3) {
        iVar11 = uVar3 - iVar11;
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,4,iVar11 + 1,(ForAnyElementType *)this,piVar1,
                           &(this->Entries).ArrayMax);
        DefaultConstructItems<Chaos::TArrayAsMap<Chaos::FAccelerationStructureHandle,Chaos::FAABBTreePayloadInfo>::FEntry,int>
                  ((this->Entries).AllocatorInstance.Data + (longlong)iVar7 * 0x18,iVar11 + 1);
      }
      uVar12 = ~uVar3 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar3 < *piVar1) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar2 = (longlong)(int)uVar3 * 0x18;
      if ((this->Entries).AllocatorInstance.Data[lVar2 + 0x14] != (FScriptContainerElement)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7431867033672745586>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,0x272,"Entries[Idx].bSet == false");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar8 = 0;
      if ((int)uVar3 < *piVar1) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (this->Entries).AllocatorInstance.Data[lVar2 + 0x14] = (FScriptContainerElement)0x1;
      uVar8 = 0;
      if ((int)uVar3 < *piVar1) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FAABBTreePayloadInfo::Serialize
                ((FAABBTreePayloadInfo *)((this->Entries).AllocatorInstance.Data + lVar2),
                 (FArchive *)param_1);
      uVar10 = local_48._8_8_ & 0xffffffff;
      FVar13.Data = FVar13.Data + 0x38;
      uVar9 = (ulonglong)local_res18;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

