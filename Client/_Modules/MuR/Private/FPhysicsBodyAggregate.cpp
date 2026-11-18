// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 3

// FPhysicsBodyAggregate @ 14a976990

FPhysicsBodyAggregate * __thiscall
UE::Mutable::Private::FPhysicsBodyAggregate::FPhysicsBodyAggregate
          (FPhysicsBodyAggregate *this,FPhysicsBodyAggregate *param_1)

{
  int *piVar1;
  TArray<UE::Mutable::Private::FBoxBody,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Mutable::Private::FConvexBody,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Mutable::Private::FSphylBody,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Mutable::Private::FTaperedCapsuleBody,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FSphereBody *pFVar7;
  FBoxBody *pFVar8;
  FConvexBody *pFVar9;
  FSphylBody *pFVar10;
  FTaperedCapsuleBody *pFVar11;
  
  piVar1 = &(this->Spheres).ArrayMax;
  (this->Spheres).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->Spheres).ArrayNum;
  pFVar7 = (FSphereBody *)(param_1->Spheres).AllocatorInstance.Data;
  (this->Spheres).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar6,0,(ForAnyElementType *)this,iVar6,piVar1);
    ConstructItems<UE::Mutable::Private::FSphereBody,UE::Mutable::Private::FSphereBody,int>
              ((this->Spheres).AllocatorInstance.Data,pFVar7,iVar6);
  }
  pTVar2 = &this->Boxes;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Boxes).ArrayMax;
  iVar6 = (param_1->Boxes).ArrayNum;
  pFVar8 = (FBoxBody *)(param_1->Boxes).AllocatorInstance.Data;
  (this->Boxes).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,iVar6,0,&pTVar2->AllocatorInstance,iVar6,piVar1);
    ConstructItems<UE::Mutable::Private::FBoxBody,UE::Mutable::Private::FBoxBody,int>
              ((pTVar2->AllocatorInstance).Data,pFVar8,iVar6);
  }
  pTVar3 = &this->Convex;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Convex).ArrayMax;
  iVar6 = (param_1->Convex).ArrayNum;
  pFVar9 = (FConvexBody *)(param_1->Convex).AllocatorInstance.Data;
  (this->Convex).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,0x10,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar1);
    ConstructItems<UE::Mutable::Private::FConvexBody,UE::Mutable::Private::FConvexBody,int>
              ((pTVar3->AllocatorInstance).Data,pFVar9,iVar6);
  }
  pTVar4 = &this->Sphyls;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Sphyls).ArrayMax;
  iVar6 = (param_1->Sphyls).ArrayNum;
  pFVar10 = (FSphylBody *)(param_1->Sphyls).AllocatorInstance.Data;
  (this->Sphyls).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar1);
    ConstructItems<UE::Mutable::Private::FSphylBody,UE::Mutable::Private::FSphylBody,int>
              ((pTVar4->AllocatorInstance).Data,pFVar10,iVar6);
  }
  pTVar5 = &this->TaperedCapsules;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->TaperedCapsules).ArrayMax;
  iVar6 = (param_1->TaperedCapsules).ArrayNum;
  pFVar11 = (FTaperedCapsuleBody *)(param_1->TaperedCapsules).AllocatorInstance.Data;
  (this->TaperedCapsules).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar1);
    ConstructItems<UE::Mutable::Private::FTaperedCapsuleBody,UE::Mutable::Private::FTaperedCapsuleBody,int>
              ((pTVar5->AllocatorInstance).Data,pFVar11,iVar6);
  }
  return this;
}

// Serialise @ 14ab85680

void __thiscall
UE::Mutable::Private::FPhysicsBodyAggregate::Serialise
          (FPhysicsBodyAggregate *this,FOutputArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  operator<<<UE::Mutable::Private::FSphereBody_TSizedDefaultAllocator<32>_>(param_1,&this->Spheres);
  local_res8[0] = (this->Boxes).ArrayNum;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  uVar5 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < (this->Boxes).ArrayNum) {
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
      FBoxBody::Serialise((FBoxBody *)
                          ((this->Boxes).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50),
                          param_1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  local_res10[0] = (this->Convex).ArrayNum;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res10,4);
  uVar5 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < (this->Convex).ArrayNum) {
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
      FConvexBody::Serialise
                ((FConvexBody *)
                 ((this->Convex).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x70),param_1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res10[0]);
  }
  local_res18[0] = (this->Sphyls).ArrayNum;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res18,4);
  uVar5 = 0;
  if (local_res18[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < (this->Sphyls).ArrayNum) {
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
      FSphylBody::Serialise
                ((FSphylBody *)((this->Sphyls).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50)
                 ,param_1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res18[0]);
  }
  local_res20[0] = (this->TaperedCapsules).ArrayNum;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res20,4);
  uVar5 = 0;
  if (local_res20[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < (this->TaperedCapsules).ArrayNum) {
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
      FTaperedCapsuleBody::Serialise
                ((FTaperedCapsuleBody *)
                 ((this->TaperedCapsules).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50),
                 param_1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res20[0]);
  }
  return;
}

// Unserialise @ 14ab8d2f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FPhysicsBodyAggregate::Unserialise
          (FPhysicsBodyAggregate *this,FInputArchive *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  uint local_res10 [2];
  
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  TArray<UE::Mutable::Private::FSphereBody,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Spheres,local_res8[0],Default);
  uVar6 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < (this->Spheres).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Spheres).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x28;
      Private::operator>>(param_1,(FString *)pFVar1);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 0x10,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 0x18,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 0x1c,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 0x20,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 0x24,4);
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_res8[0]);
  }
  operator>><UE::Mutable::Private::FBoxBody_TSizedDefaultAllocator<32>_>(param_1,&this->Boxes);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res10,4);
  TArray<UE::Mutable::Private::FConvexBody,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Convex,local_res10[0],Default);
  uVar6 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < (this->Convex).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FConvexBody::Unserialise
                ((FConvexBody *)
                 ((this->Convex).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x70),param_1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_res10[0]);
  }
  operator>><UE::Mutable::Private::FSphylBody_TSizedDefaultAllocator<32>_>(param_1,&this->Sphyls);
  operator>><UE::Mutable::Private::FTaperedCapsuleBody_TSizedDefaultAllocator<32>_>
            (param_1,&this->TaperedCapsules);
  return;
}

