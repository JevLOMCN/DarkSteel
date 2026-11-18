// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 18

// CopyFrom @ 1436fbf30

void __thiscall
Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::CopyFrom
          (THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *this,
          THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *param_1)

{
  TArray<Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::FHandleEntry,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  FScriptContainerElement *_Src;
  ForElementType<unsigned_int> FVar5;
  FChaosPhysicsMaterial *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  FChaosPhysicsMaterial *pFVar11;
  ForElementType<unsigned_int> FVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  
  uVar14 = 0;
  if (this->Data != (FChaosPhysicsMaterial *)0x0) {
    uVar15 = uVar14;
    if (0 < this->NumData) {
      do {
        iVar13 = (int)uVar15;
        if (((iVar13 < 0) || ((this->Validity).NumBits <= iVar13)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar15 = (ulonglong)(iVar13 + 1U);
      } while ((int)(iVar13 + 1U) < this->NumData);
    }
    FMemory::Free(this->Data);
  }
  this->Data = (FChaosPhysicsMaterial *)0x0;
  pTVar1 = &this->HandleEntries;
  this->FreeList = 0xffffff;
  this->Capacity = 0;
  this->NumData = 0;
  piVar2 = &(this->HandleEntries).ArrayMax;
  this->NumActive = 0;
  (this->Validity).NumBits = 0;
  (this->HandleEntries).ArrayNum = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  this->Capacity = param_1->Capacity;
  if (pTVar1 != &param_1->HandleEntries) {
    iVar13 = (param_1->HandleEntries).ArrayNum;
    _Src = (param_1->HandleEntries).AllocatorInstance.Data;
    (this->HandleEntries).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar13,*piVar2,&pTVar1->AllocatorInstance,iVar13,piVar2);
      if (iVar13 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar13 << 2);
      }
    }
  }
  if (&this->Validity != &param_1->Validity) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              (&this->Validity,&param_1->Validity);
  }
  this->FreeList = param_1->FreeList;
  if (0 < this->Capacity) {
    pFVar11 = FMemory::Malloc((longlong)this->Capacity << 7,8);
    this->Data = pFVar11;
    iVar13 = param_1->NumData;
    this->NumData = iVar13;
    this->NumActive = param_1->NumActive;
    if (0 < iVar13) {
      uVar16 = 1;
      uVar15 = uVar14;
      do {
        iVar13 = (int)uVar14;
        if (((iVar13 < 0) || ((this->Validity).NumBits <= iVar13)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar5 = (this->Validity).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<unsigned_int>)&this->Validity;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar12 = FVar5;
        }
        iVar10 = iVar13;
        if (iVar13 < 0) {
          iVar10 = iVar13 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar12 + (longlong)(iVar10 >> 5) * 4) & uVar16) != 0) {
          pFVar11 = param_1->Data;
          pFVar6 = this->Data;
          puVar3 = (undefined8 *)((longlong)&pFVar11->Friction + uVar15);
          uVar8 = puVar3[1];
          puVar4 = (undefined8 *)((longlong)&pFVar6->Friction + uVar15);
          *puVar4 = *puVar3;
          puVar4[1] = uVar8;
          puVar3 = (undefined8 *)((longlong)&pFVar11->Restitution + uVar15);
          uVar8 = puVar3[1];
          puVar4 = (undefined8 *)((longlong)&pFVar6->Restitution + uVar15);
          *puVar4 = *puVar3;
          puVar4[1] = uVar8;
          puVar3 = (undefined8 *)((longlong)&pFVar11->LinearEtherDrag + uVar15);
          uVar8 = puVar3[1];
          puVar4 = (undefined8 *)((longlong)&pFVar6->LinearEtherDrag + uVar15);
          *puVar4 = *puVar3;
          puVar4[1] = uVar8;
          puVar3 = (undefined8 *)((longlong)&pFVar11->SleepingLinearThreshold + uVar15);
          uVar8 = puVar3[1];
          puVar4 = (undefined8 *)((longlong)&pFVar6->SleepingLinearThreshold + uVar15);
          *puVar4 = *puVar3;
          puVar4[1] = uVar8;
          puVar3 = (undefined8 *)((longlong)&pFVar11->DisabledLinearThreshold + uVar15);
          uVar8 = puVar3[1];
          puVar4 = (undefined8 *)((longlong)&pFVar6->DisabledLinearThreshold + uVar15);
          *puVar4 = *puVar3;
          puVar4[1] = uVar8;
          puVar3 = (undefined8 *)((longlong)&pFVar11->SleepCounterThreshold + uVar15);
          uVar8 = puVar3[1];
          puVar4 = (undefined8 *)((longlong)&pFVar6->SleepCounterThreshold + uVar15);
          *puVar4 = *puVar3;
          puVar4[1] = uVar8;
          puVar3 = (undefined8 *)((longlong)&pFVar11->BaseFrictionImpulse + uVar15);
          uVar8 = puVar3[1];
          puVar4 = (undefined8 *)((longlong)&pFVar6->BaseFrictionImpulse + uVar15);
          *puVar4 = *puVar3;
          puVar4[1] = uVar8;
          puVar3 = (undefined8 *)((longlong)&(pFVar11->Strength).ShearStrength + uVar15);
          uVar8 = puVar3[1];
          puVar4 = (undefined8 *)((longlong)&(pFVar6->Strength).ShearStrength + uVar15);
          *puVar4 = *puVar3;
          puVar4[1] = uVar8;
        }
        uVar14 = (ulonglong)(iVar13 + 1U);
        uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
        uVar15 = uVar15 + 0x80;
      } while ((int)(iVar13 + 1U) < this->NumData);
    }
  }
  return;
}

// CopyFrom @ 1436fc1a0

void __thiscall
Chaos::THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::CopyFrom
          (THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8> *this,
          THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8> *param_1)

{
  TArray<Chaos::THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::FHandleEntry,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  ForElementType<unsigned_int> FVar3;
  void *pvVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FChaosPhysicsMaterialMask *pFVar9;
  ForElementType<unsigned_int> FVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  
  uVar11 = 0;
  if (this->Data != (FChaosPhysicsMaterialMask *)0x0) {
    if (0 < this->NumData) {
      uVar13 = 1;
      uVar12 = uVar11;
      uVar15 = uVar11;
      do {
        iVar14 = (int)uVar15;
        if (((iVar14 < 0) || ((this->Validity).NumBits <= iVar14)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar3 = (this->Validity).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<unsigned_int>)&this->Validity;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar3;
        }
        iVar7 = iVar14;
        if (iVar14 < 0) {
          iVar7 = iVar14 + 0x1f;
        }
        if (((*(uint *)((longlong)FVar10 + (longlong)(iVar7 >> 5) * 4) & uVar13) != 0) &&
           (pvVar4 = *(void **)((longlong)&(this->Data->MaskData).AllocatorInstance.Data + uVar12),
           pvVar4 != (void *)0x0)) {
          FMemory::Free(pvVar4);
        }
        uVar15 = (ulonglong)(iVar14 + 1U);
        uVar13 = uVar13 << 1 | (uint)((int)uVar13 < 0);
        uVar12 = uVar12 + 0x28;
      } while ((int)(iVar14 + 1U) < this->NumData);
    }
    FMemory::Free(this->Data);
  }
  this->Data = (FChaosPhysicsMaterialMask *)0x0;
  pTVar1 = &this->HandleEntries;
  this->FreeList = 0xffffff;
  this->Capacity = 0;
  this->NumData = 0;
  piVar2 = &(this->HandleEntries).ArrayMax;
  this->NumActive = 0;
  (this->Validity).NumBits = 0;
  (this->HandleEntries).ArrayNum = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  this->Capacity = param_1->Capacity;
  if (pTVar1 != &param_1->HandleEntries) {
    iVar14 = (param_1->HandleEntries).ArrayNum;
    _Src = (param_1->HandleEntries).AllocatorInstance.Data;
    (this->HandleEntries).ArrayNum = iVar14;
    if ((iVar14 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar14,*piVar2,&pTVar1->AllocatorInstance,iVar14,piVar2);
      if (iVar14 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar14 << 2);
      }
    }
  }
  if (&this->Validity != &param_1->Validity) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              (&this->Validity,&param_1->Validity);
  }
  this->FreeList = param_1->FreeList;
  if (0 < this->Capacity) {
    pFVar9 = FMemory::Malloc((longlong)this->Capacity * 0x28,8);
    this->Data = pFVar9;
    iVar14 = param_1->NumData;
    this->NumData = iVar14;
    this->NumActive = param_1->NumActive;
    if (0 < iVar14) {
      do {
        uVar13 = (uint)uVar11;
        if ((((int)uVar13 < 0) || ((this->Validity).NumBits <= (int)uVar13)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar3 = (this->Validity).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<unsigned_int>)&this->Validity;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar3;
        }
        uVar8 = uVar13;
        if ((int)uVar13 < 0) {
          uVar8 = uVar13 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar10 + (longlong)((int)uVar8 >> 5) * 4) >> (uVar13 & 0x1f) & 1)
            != 0) {
          ConstructItems<Chaos::FChaosPhysicsMaterialMask,Chaos::FChaosPhysicsMaterialMask,int>
                    (this->Data + (int)uVar13,param_1->Data + (int)uVar13,1);
        }
        uVar11 = (ulonglong)(uVar13 + 1);
      } while ((int)(uVar13 + 1) < this->NumData);
    }
  }
  return;
}

// Create<> @ 143d89cb0

THandle<Chaos::FChaosPhysicsMaterial,24,8> __thiscall
Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::Create<>
          (THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *this)

{
  int *piVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  THandle<Chaos::FChaosPhysicsMaterial,24,8> TVar7;
  int iVar8;
  FChaosPhysicsMaterial *pFVar9;
  uint *in_RDX;
  uint uVar10;
  ForElementType<unsigned_int> FVar11;
  longlong lVar12;
  
  uVar10 = this->FreeList;
  if (uVar10 == 0xffffff) {
    if (this->NumData == this->Capacity) {
      pFVar9 = FMemory::Realloc(this->Data,(ulonglong)(this->Capacity + 4) << 7,8);
      this->Capacity = this->Capacity + 4;
      this->Data = pFVar9;
    }
    iVar8 = (this->HandleEntries).ArrayNum;
    piVar1 = &(this->HandleEntries).ArrayMax;
    uVar10 = this->NumData;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->HandleEntries).AllocatorInstance,piVar1);
    }
    (this->HandleEntries).ArrayNum = iVar8 + 1;
    DefaultConstructItems<Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::FHandleEntry,int>
              ((this->HandleEntries).AllocatorInstance.Data + (longlong)iVar8 * 4,1);
    TBitArray<FDefaultBitArrayAllocator>::Add(&this->Validity,true);
    this->NumData = this->NumData + 1;
  }
  else {
    uVar6 = 0;
    if ((int)uVar10 < (this->HandleEntries).ArrayNum) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar7 = (THandle<Chaos::FChaosPhysicsMaterial,24,8>)(*pcVar4)();
        return TVar7;
      }
    }
    uVar6 = this->FreeList;
    pFVar3 = (this->HandleEntries).AllocatorInstance.Data;
    if (((int)uVar6 < 0) || ((this->Validity).NumBits <= (int)uVar6)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar7 = (THandle<Chaos::FChaosPhysicsMaterial,24,8>)(*pcVar4)();
        return TVar7;
      }
    }
    FVar11 = (this->Validity).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<unsigned_int>)0x0) {
      FVar11 = (ForElementType<unsigned_int>)&this->Validity;
    }
    puVar2 = (uint *)((longlong)FVar11 +
                     (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)uVar6 & 0x1f);
    this->FreeList = *(uint *)(pFVar3 + (longlong)(int)uVar10 * 4) & 0xffffff;
    pFVar3 = pFVar3 + (longlong)(int)uVar10 * 4;
    *(uint *)pFVar3 = *(uint *)pFVar3 | 0xffffff;
  }
  pFVar9 = this->Data;
  lVar12 = (longlong)(int)uVar10;
  pFVar9[lVar12].Friction = 0.5;
  pFVar9[lVar12].Restitution = 0.10000000149011612;
  pFVar9[lVar12].Density = 1.0;
  pFVar9[lVar12].SleepingLinearThreshold = 1.0;
  pFVar9[lVar12].SleepingAngularThreshold = 1.0;
  pFVar9[lVar12].StaticFriction = 0.0;
  pFVar9[lVar12].LinearEtherDrag = 0.0;
  pFVar9[lVar12].AngularEtherDrag = 0.0;
  pFVar9[lVar12].DisabledLinearThreshold = 0.0;
  pFVar9[lVar12].DisabledAngularThreshold = 0.0;
  pFVar9[lVar12].SleepCounterThreshold = 0;
  pFVar9[lVar12].UserData = (void *)0x0;
  pFVar9[lVar12].BaseFrictionImpulse = 0.0;
  pFVar9[lVar12].FrictionCombineMode = Avg;
  pFVar9[lVar12].RestitutionCombineMode = Avg;
  pFVar9[lVar12].Strength.TensileStrength = 20000.0;
  pFVar9[lVar12].Strength.CompressionStrength = 200000.0;
  pFVar9[lVar12].Strength.ShearStrength = 60000.0;
  pFVar9[lVar12].DamageModifier.DamageThresholdMultiplier = 1.0;
  pFVar9[lVar12].SoftCollisionMode = None;
  pFVar9[lVar12].SoftCollisionThickness = 0.0;
  this->NumActive = this->NumActive + 1;
  if ((-1 < (int)uVar10) && ((int)uVar10 < (this->HandleEntries).ArrayNum)) {
    uVar6 = 0;
    if ((int)uVar10 < (this->HandleEntries).ArrayNum) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar7 = (THandle<Chaos::FChaosPhysicsMaterial,24,8>)(*pcVar4)();
        return TVar7;
      }
    }
    if ((this->HandleEntries).AllocatorInstance.Data[lVar12 * 4 + 3] != (FScriptContainerElement)0x0
       ) {
      uVar6 = 0;
      if ((int)uVar10 < (this->HandleEntries).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          TVar7 = (THandle<Chaos::FChaosPhysicsMaterial,24,8>)(*pcVar4)();
          return TVar7;
        }
      }
      pFVar3 = (this->HandleEntries).AllocatorInstance.Data;
      *in_RDX = *in_RDX ^ (*in_RDX ^ uVar10) & 0xffffff;
      *(FScriptContainerElement *)((longlong)in_RDX + 3) = pFVar3[lVar12 * 4 + 3];
      goto LAB_143d89f88;
    }
  }
  *in_RDX = 0;
  *(undefined1 *)((longlong)in_RDX + 3) = 0;
LAB_143d89f88:
  return SUB84(in_RDX,0);
}

// Create<> @ 143d89fb0

THandle<Chaos::FChaosPhysicsMaterialMask,24,8> __thiscall
Chaos::THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::Create<>
          (THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  THandle<Chaos::FChaosPhysicsMaterialMask,24,8> TVar7;
  int iVar8;
  FChaosPhysicsMaterialMask *pFVar9;
  uint *in_RDX;
  uint uVar10;
  ForElementType<unsigned_int> FVar11;
  longlong lVar12;
  
  uVar10 = this->FreeList;
  if (uVar10 == 0xffffff) {
    if (this->NumData == this->Capacity) {
      pFVar9 = FMemory::Realloc(this->Data,(ulonglong)(this->Capacity + 4) * 0x28,8);
      this->Capacity = this->Capacity + 4;
      this->Data = pFVar9;
    }
    iVar8 = (this->HandleEntries).ArrayNum;
    piVar1 = &(this->HandleEntries).ArrayMax;
    uVar10 = this->NumData;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->HandleEntries).AllocatorInstance,piVar1);
    }
    (this->HandleEntries).ArrayNum = iVar8 + 1;
    DefaultConstructItems<Chaos::THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::FHandleEntry,int>
              ((this->HandleEntries).AllocatorInstance.Data + (longlong)iVar8 * 4,1);
    TBitArray<FDefaultBitArrayAllocator>::Add(&this->Validity,true);
    this->NumData = this->NumData + 1;
  }
  else {
    uVar6 = 0;
    if ((int)uVar10 < (this->HandleEntries).ArrayNum) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar7 = (THandle<Chaos::FChaosPhysicsMaterialMask,24,8>)(*pcVar4)();
        return TVar7;
      }
    }
    uVar6 = this->FreeList;
    pFVar2 = (this->HandleEntries).AllocatorInstance.Data + (longlong)(int)uVar10 * 4;
    if (((int)uVar6 < 0) || ((this->Validity).NumBits <= (int)uVar6)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar7 = (THandle<Chaos::FChaosPhysicsMaterialMask,24,8>)(*pcVar4)();
        return TVar7;
      }
    }
    FVar11 = (this->Validity).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<unsigned_int>)0x0) {
      FVar11 = (ForElementType<unsigned_int>)&this->Validity;
    }
    puVar3 = (uint *)((longlong)FVar11 +
                     (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar6 & 0x1f);
    this->FreeList = *(uint *)pFVar2 & 0xffffff;
    *(uint *)pFVar2 = *(uint *)pFVar2 | 0xffffff;
  }
  pFVar9 = this->Data;
  lVar12 = (longlong)(int)uVar10;
  pFVar9[lVar12].SizeX = 0;
  pFVar9[lVar12].SizeY = 0;
  pFVar9[lVar12].MaskData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[lVar12].MaskData.ArrayNum = 0;
  pFVar9[lVar12].MaskData.ArrayMax = 0;
  pFVar9[lVar12].UVChannelIndex = 0;
  pFVar9[lVar12].AddressX = 0;
  pFVar9[lVar12].AddressY = 0;
  this->NumActive = this->NumActive + 1;
  if ((-1 < (int)uVar10) && ((int)uVar10 < (this->HandleEntries).ArrayNum)) {
    uVar6 = 0;
    if ((int)uVar10 < (this->HandleEntries).ArrayNum) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar7 = (THandle<Chaos::FChaosPhysicsMaterialMask,24,8>)(*pcVar4)();
        return TVar7;
      }
    }
    if ((this->HandleEntries).AllocatorInstance.Data[lVar12 * 4 + 3] != (FScriptContainerElement)0x0
       ) {
      uVar6 = 0;
      if ((int)uVar10 < (this->HandleEntries).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          TVar7 = (THandle<Chaos::FChaosPhysicsMaterialMask,24,8>)(*pcVar4)();
          return TVar7;
        }
      }
      pFVar2 = (this->HandleEntries).AllocatorInstance.Data;
      *in_RDX = *in_RDX ^ (*in_RDX ^ uVar10) & 0xffffff;
      *(FScriptContainerElement *)((longlong)in_RDX + 3) = pFVar2[lVar12 * 4 + 3];
      goto LAB_143d8a214;
    }
  }
  *in_RDX = 0;
  *(undefined1 *)((longlong)in_RDX + 3) = 0;
LAB_143d8a214:
  return SUB84(in_RDX,0);
}

// THandleArray<Chaos::FChaosPhysicsMaterial,24,8> @ 143d90fd0

THandleArray<Chaos::FChaosPhysicsMaterial,24,8> * __thiscall
Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::
THandleArray<Chaos::FChaosPhysicsMaterial,24,8>
          (THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int iVar3;
  uint *puVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FChaosPhysicsMaterial *pFVar11;
  THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *pTVar12;
  ulong64 uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ForElementType<unsigned_int> FVar17;
  longlong lVar18;
  ulonglong uVar19;
  
  lVar18 = 0;
  this->FreeList = 0xffffff;
  (this->HandleEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->HandleEntries).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(this->HandleEntries).ArrayMax;
  *piVar2 = 0;
  (this->Validity).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->Validity).NumBits = 0;
  (this->Validity).MaxBits = 0x80;
  this->Data = (FChaosPhysicsMaterial *)0x0;
  this->NumData = 0;
  this->Capacity = 0;
  this->NumActive = 0;
  if (param_1 < 1) {
    return this;
  }
  pFVar11 = FMemory::Malloc((longlong)param_1 << 7,8);
  uVar15 = 4;
  this->Data = pFVar11;
  this->Capacity = param_1;
  this->NumData = param_1;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,param_1,&(this->HandleEntries).AllocatorInstance,piVar1,piVar2);
  DefaultConstructItems<Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::FHandleEntry,int>
            ((this->HandleEntries).AllocatorInstance.Data + (longlong)iVar9 * 4,param_1);
  iVar9 = this->NumData;
  uVar16 = 1;
  if (1 < iVar9) {
    do {
      uVar14 = 0;
      if ((int)(uVar16 - 1) < *piVar1) {
        uVar14 = -uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *)(*pcVar7)();
        return pTVar12;
      }
      pFVar6 = (this->HandleEntries).AllocatorInstance.Data;
      uVar14 = *(uint *)(pFVar6 + lVar18) ^ uVar16;
      uVar16 = uVar16 + 1;
      pFVar6 = pFVar6 + lVar18;
      *(uint *)pFVar6 = *(uint *)pFVar6 ^ uVar14 & 0xffffff;
      lVar18 = lVar18 + 4;
      iVar9 = this->NumData;
    } while ((int)uVar16 < iVar9);
  }
  this->FreeList = 0;
  this_00 = &this->Validity;
  if (-1 < iVar9) {
    iVar5 = (this->Validity).NumBits;
    if (0 < iVar9) {
      if (iVar5 == 0) {
        iVar10 = -1;
      }
      else {
        iVar10 = (int)((iVar5 + -1 >> 0x1f & 0x1fU) + iVar5 + -1) >> 5;
      }
      iVar3 = iVar5 + iVar9;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 == iVar10) {
        (this->Validity).NumBits = iVar3;
      }
      else {
        iVar10 = (this->Validity).MaxBits;
        if (iVar10 < iVar3) {
          uVar16 = iVar10 + 0x1fU >> 5;
          uVar14 = iVar3 + 0x1fU >> 5;
          uVar19 = (ulonglong)uVar14;
          if (4 < uVar14) {
            if (uVar16 < 5) {
              uVar16 = 0;
            }
            if (uVar16 == 0) {
              if (4 < uVar19) {
                uVar15 = uVar19;
              }
            }
            else {
              uVar15 = (uVar19 * 3 >> 3) + 0x10 + uVar19;
            }
            uVar13 = FMemory::QuantizeSize(uVar15 * 4,0);
            uVar16 = (uint)(uVar13 >> 2);
            if ((int)uVar16 < (int)uVar14) {
              uVar16 = 0x7fffffff;
            }
            uVar15 = (ulonglong)uVar16;
          }
          (this->Validity).MaxBits = (int)uVar15 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(this_00,(this->Validity).NumBits);
        }
        piVar1 = &(this->Validity).NumBits;
        *piVar1 = *piVar1 + iVar9;
        iVar10 = (this->Validity).NumBits;
        uVar14 = iVar10 >> 0x1f & 0x1f;
        uVar16 = iVar10 + uVar14;
        iVar10 = (uVar16 & 0x1f) - uVar14;
        if (iVar10 != 0) {
          FVar17 = (this->Validity).AllocatorInstance.SecondaryData;
          if (FVar17 == (ForElementType<unsigned_int>)0x0) {
            FVar17 = (ForElementType<unsigned_int>)this_00;
          }
          puVar4 = (uint *)((longlong)FVar17 + (longlong)((int)uVar16 >> 5) * 4);
          *puVar4 = *puVar4 & 0xffffffffU >> (0x20U - (char)iVar10 & 0x1f);
        }
      }
    }
    TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar5,iVar9,false);
  }
  return this;
}

// ~THandleArray<Chaos::FChaosPhysicsMaterial,24,8> @ 143d923b0

void __thiscall
Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::
~THandleArray<Chaos::FChaosPhysicsMaterial,24,8>
          (THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *this)

{
  int *piVar1;
  ForElementType<unsigned_int> FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  iVar6 = 0;
  if (this->Data != (FChaosPhysicsMaterial *)0x0) {
    if (0 < this->NumData) {
      do {
        if (((iVar6 < 0) || ((this->Validity).NumBits <= iVar6)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < this->NumData);
    }
    FMemory::Free(this->Data);
  }
  this->FreeList = 0xffffff;
  piVar1 = &(this->HandleEntries).ArrayMax;
  this->NumData = 0;
  this->Capacity = 0;
  this->NumActive = 0;
  this->Data = (FChaosPhysicsMaterial *)0x0;
  (this->Validity).NumBits = 0;
  (this->HandleEntries).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->HandleEntries).AllocatorInstance,0,piVar1);
  }
  FVar2 = (this->Validity).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar3 = (this->HandleEntries).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ~THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8> @ 143d924a0

void __thiscall
Chaos::THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::
~THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>
          (THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8> *this)

{
  int *piVar1;
  ForElementType<unsigned_int> FVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  uVar10 = 0;
  if (this->Data != (FChaosPhysicsMaterialMask *)0x0) {
    if (0 < this->NumData) {
      uVar12 = 1;
      uVar11 = uVar10;
      do {
        iVar9 = (int)uVar10;
        if (((iVar9 < 0) || ((this->Validity).NumBits <= iVar9)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar2 = (this->Validity).AllocatorInstance.SecondaryData;
        FVar8 = (ForElementType<unsigned_int>)&this->Validity;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar8 = FVar2;
        }
        iVar7 = iVar9;
        if (iVar9 < 0) {
          iVar7 = iVar9 + 0x1f;
        }
        if (((*(uint *)((longlong)FVar8 + (longlong)(iVar7 >> 5) * 4) & uVar12) != 0) &&
           (pvVar3 = *(void **)((longlong)&(this->Data->MaskData).AllocatorInstance.Data + uVar11),
           pvVar3 != (void *)0x0)) {
          FMemory::Free(pvVar3);
        }
        uVar10 = (ulonglong)(iVar9 + 1U);
        uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
        uVar11 = uVar11 + 0x28;
      } while ((int)(iVar9 + 1U) < this->NumData);
    }
    FMemory::Free(this->Data);
  }
  this->Data = (FChaosPhysicsMaterialMask *)0x0;
  this->FreeList = 0xffffff;
  piVar1 = &(this->HandleEntries).ArrayMax;
  this->NumData = 0;
  this->Capacity = 0;
  this->NumActive = 0;
  (this->Validity).NumBits = 0;
  (this->HandleEntries).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->HandleEntries).AllocatorInstance,0,piVar1);
  }
  FVar2 = (this->Validity).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar4 = (this->HandleEntries).AllocatorInstance.Data;
  if (pFVar4 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar4);
  return;
}

// Destroy @ 143da43a0

void __thiscall
Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::Destroy
          (THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *this,
          THandle<Chaos::FChaosPhysicsMaterial,24,8> param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<unsigned_int> FVar6;
  uint uVar7;
  undefined1 local_res10 [8];
  ulonglong uVar8;
  
  if (0xffffff < (uint)param_1) {
    uVar7 = (uint)param_1 & 0xffffff;
    uVar8 = (ulonglong)uVar7;
    if (((this->HandleEntries).ArrayNum <= (int)uVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->HandleEntries).AllocatorInstance.Data;
    if ((uint)(byte)pFVar2[uVar8 * 4 + 3] == (uint)param_1 >> 0x18) {
      pFVar2[uVar8 * 4 + 3] = (FScriptContainerElement)((char)pFVar2[uVar8 * 4 + 3] + 1);
      if (((this->Validity).NumBits <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar6 = (this->Validity).AllocatorInstance.SecondaryData;
      if (FVar6 == (ForElementType<unsigned_int>)0x0) {
        FVar6 = (ForElementType<unsigned_int>)&this->Validity;
      }
      puVar1 = (uint *)((longlong)FVar6 + (ulonglong)(uVar7 >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << ((byte)uVar7 & 0x1f));
      this->NumActive = this->NumActive + -1;
      if (pFVar2[uVar8 * 4 + 3] != (FScriptContainerElement)0x0) {
        if (this->FreeList != 0xffffff) {
          if (((this->HandleEntries).ArrayNum <= (int)uVar7) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (this->HandleEntries).AllocatorInstance.Data;
          pFVar2 = pFVar3 + uVar8 * 4;
          *(uint *)pFVar2 =
               *(uint *)pFVar2 ^ (*(uint *)(pFVar3 + uVar8 * 4) ^ this->FreeList) & 0xffffff;
        }
        this->FreeList = uVar7;
      }
    }
    else {
      `Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::Destroy'::__l8::<lambda_1>::
      operator()(local_res10);
    }
  }
  return;
}

// Destroy @ 143da4500

void __thiscall
Chaos::THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::Destroy
          (THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8> *this,
          THandle<Chaos::FChaosPhysicsMaterialMask,24,8> param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<unsigned_int> FVar6;
  uint uVar7;
  undefined1 local_res10 [8];
  ulonglong uVar8;
  
  if (0xffffff < (uint)param_1) {
    uVar7 = (uint)param_1 & 0xffffff;
    uVar8 = (ulonglong)uVar7;
    if (((this->HandleEntries).ArrayNum <= (int)uVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->HandleEntries).AllocatorInstance.Data;
    if ((uint)(byte)pFVar2[uVar8 * 4 + 3] == (uint)param_1 >> 0x18) {
      pFVar2[uVar8 * 4 + 3] = (FScriptContainerElement)((char)pFVar2[uVar8 * 4 + 3] + 1);
      pFVar3 = this->Data[(uint)param_1 & 0xffffff].MaskData.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      if (((this->Validity).NumBits <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar6 = (this->Validity).AllocatorInstance.SecondaryData;
      if (FVar6 == (ForElementType<unsigned_int>)0x0) {
        FVar6 = (ForElementType<unsigned_int>)&this->Validity;
      }
      puVar1 = (uint *)((longlong)FVar6 + (ulonglong)(uVar7 >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << ((byte)uVar7 & 0x1f));
      this->NumActive = this->NumActive + -1;
      if (pFVar2[uVar8 * 4 + 3] != (FScriptContainerElement)0x0) {
        if (this->FreeList != 0xffffff) {
          if (((this->HandleEntries).ArrayNum <= (int)uVar7) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (this->HandleEntries).AllocatorInstance.Data;
          pFVar2 = pFVar3 + uVar8 * 4;
          *(uint *)pFVar2 =
               *(uint *)pFVar2 ^ (*(uint *)(pFVar3 + uVar8 * 4) ^ this->FreeList) & 0xffffff;
        }
        this->FreeList = uVar7;
      }
    }
    else {
      `Chaos::THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::Destroy'::__l8::<lambda_1>::
      operator()(local_res10);
    }
  }
  return;
}

// Get @ 143da8b10

FChaosPhysicsMaterial * __thiscall
Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::Get
          (THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *this,
          THandle<Chaos::FChaosPhysicsMaterial,24,8> param_1)

{
  code *pcVar1;
  bool bVar2;
  FChaosPhysicsMaterial *pFVar3;
  ForElementType<unsigned_int> FVar4;
  uint uVar5;
  
  if ((0xffffff < (uint)param_1) &&
     (uVar5 = (uint)param_1 & 0xffffff, (int)uVar5 < (this->Validity).NumBits)) {
    FVar4 = (this->Validity).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<unsigned_int>)0x0) {
      FVar4 = (ForElementType<unsigned_int>)&this->Validity;
    }
    if ((*(uint *)((longlong)FVar4 + (ulonglong)(uVar5 >> 5) * 4) >> ((uint)param_1 & 0x1f) & 1) !=
        0) {
      if ((this->HandleEntries).ArrayNum <= (int)uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FChaosPhysicsMaterial *)(*pcVar1)();
          return pFVar3;
        }
      }
      if ((this->HandleEntries).AllocatorInstance.Data[(ulonglong)uVar5 * 4 + 3] == param_1._3_1_) {
        return this->Data + ((uint)param_1 & 0xffffff);
      }
      return (FChaosPhysicsMaterial *)0x0;
    }
  }
  return (FChaosPhysicsMaterial *)0x0;
}

// Create<Chaos::FChaosPhysicsMaterial_const_&> @ 14405c950

THandle<Chaos::FChaosPhysicsMaterial,24,8> __thiscall
Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::Create<Chaos::FChaosPhysicsMaterial_const_&>
          (THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *this,FChaosPhysicsMaterial *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  code *pcVar4;
  double dVar5;
  void *pvVar6;
  bool bVar7;
  uint uVar8;
  THandle<Chaos::FChaosPhysicsMaterial,24,8> TVar9;
  int iVar10;
  FChaosPhysicsMaterial *pFVar11;
  uint uVar12;
  double *in_R8;
  ForElementType<unsigned_int> FVar13;
  longlong lVar14;
  
  uVar12 = this->FreeList;
  if (uVar12 == 0xffffff) {
    if (this->NumData == this->Capacity) {
      pFVar11 = FMemory::Realloc(this->Data,(ulonglong)(this->Capacity + 4) << 7,8);
      this->Capacity = this->Capacity + 4;
      this->Data = pFVar11;
    }
    iVar10 = (this->HandleEntries).ArrayNum;
    piVar1 = &(this->HandleEntries).ArrayMax;
    uVar12 = this->NumData;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&(this->HandleEntries).AllocatorInstance,piVar1);
    }
    (this->HandleEntries).ArrayNum = iVar10 + 1;
    DefaultConstructItems<Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::FHandleEntry,int>
              ((this->HandleEntries).AllocatorInstance.Data + (longlong)iVar10 * 4,1);
    TBitArray<FDefaultBitArrayAllocator>::Add(&this->Validity,true);
    this->NumData = this->NumData + 1;
  }
  else {
    uVar8 = 0;
    if ((int)uVar12 < (this->HandleEntries).ArrayNum) {
      uVar8 = ~uVar12 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        TVar9 = (THandle<Chaos::FChaosPhysicsMaterial,24,8>)(*pcVar4)();
        return TVar9;
      }
    }
    uVar8 = this->FreeList;
    pFVar2 = (this->HandleEntries).AllocatorInstance.Data + (longlong)(int)uVar12 * 4;
    if (((int)uVar8 < 0) || ((this->Validity).NumBits <= (int)uVar8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        TVar9 = (THandle<Chaos::FChaosPhysicsMaterial,24,8>)(*pcVar4)();
        return TVar9;
      }
    }
    FVar13 = (this->Validity).AllocatorInstance.SecondaryData;
    if (FVar13 == (ForElementType<unsigned_int>)0x0) {
      FVar13 = (ForElementType<unsigned_int>)&this->Validity;
    }
    puVar3 = (uint *)((longlong)FVar13 +
                     (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar8 & 0x1f);
    this->FreeList = *(uint *)pFVar2 & 0xffffff;
    *(uint *)pFVar2 = *(uint *)pFVar2 | 0xffffff;
  }
  dVar5 = in_R8[1];
  pFVar11 = this->Data;
  lVar14 = (longlong)(int)uVar12;
  pFVar11[lVar14].Friction = *in_R8;
  pFVar11[lVar14].StaticFriction = dVar5;
  dVar5 = in_R8[3];
  pFVar11[lVar14].Restitution = in_R8[2];
  (&pFVar11[lVar14].Restitution)[1] = dVar5;
  dVar5 = in_R8[5];
  pFVar11[lVar14].LinearEtherDrag = in_R8[4];
  (&pFVar11[lVar14].LinearEtherDrag)[1] = dVar5;
  dVar5 = in_R8[7];
  pFVar11[lVar14].SleepingLinearThreshold = in_R8[6];
  (&pFVar11[lVar14].SleepingLinearThreshold)[1] = dVar5;
  dVar5 = in_R8[9];
  pFVar11[lVar14].DisabledLinearThreshold = in_R8[8];
  (&pFVar11[lVar14].DisabledLinearThreshold)[1] = dVar5;
  pvVar6 = (void *)in_R8[0xb];
  *(double *)&pFVar11[lVar14].SleepCounterThreshold = in_R8[10];
  *(void **)(&pFVar11[lVar14].SleepCounterThreshold + 2) = pvVar6;
  dVar5 = in_R8[0xd];
  *(double *)&pFVar11[lVar14].BaseFrictionImpulse = in_R8[0xc];
  *(double *)(&pFVar11[lVar14].BaseFrictionImpulse + 2) = dVar5;
  dVar5 = in_R8[0xf];
  *(double *)&pFVar11[lVar14].Strength.ShearStrength = in_R8[0xe];
  *(double *)((FChaosPhysicsMaterialDamageModifier *)(&pFVar11[lVar14].Strength + 1) + 1) = dVar5;
  this->NumActive = this->NumActive + 1;
  if ((-1 < (int)uVar12) && ((int)uVar12 < (this->HandleEntries).ArrayNum)) {
    uVar8 = 0;
    if ((int)uVar12 < (this->HandleEntries).ArrayNum) {
      uVar8 = ~uVar12 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        TVar9 = (THandle<Chaos::FChaosPhysicsMaterial,24,8>)(*pcVar4)();
        return TVar9;
      }
    }
    if ((this->HandleEntries).AllocatorInstance.Data[lVar14 * 4 + 3] != (FScriptContainerElement)0x0
       ) {
      uVar8 = 0;
      if ((int)uVar12 < (this->HandleEntries).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          TVar9 = (THandle<Chaos::FChaosPhysicsMaterial,24,8>)(*pcVar4)();
          return TVar9;
        }
      }
      pFVar2 = (this->HandleEntries).AllocatorInstance.Data;
      *(uint *)&param_1->Friction =
           *(uint *)&param_1->Friction ^ (*(uint *)&param_1->Friction ^ uVar12) & 0xffffff;
      *(FScriptContainerElement *)((longlong)&param_1->Friction + 3) = pFVar2[lVar14 * 4 + 3];
      goto LAB_14405cbf9;
    }
  }
  *(undefined4 *)&param_1->Friction = 0;
  *(undefined1 *)((longlong)&param_1->Friction + 3) = 0;
LAB_14405cbf9:
  return SUB84(param_1,0);
}

// Create<Chaos::FChaosPhysicsMaterialMask_const_&> @ 14405cc20

THandle<Chaos::FChaosPhysicsMaterialMask,24,8> __thiscall
Chaos::THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::
Create<Chaos::FChaosPhysicsMaterialMask_const_&>
          (THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8> *this,
          FChaosPhysicsMaterialMask *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  THandle<Chaos::FChaosPhysicsMaterialMask,24,8> TVar7;
  int iVar8;
  FChaosPhysicsMaterialMask *pFVar9;
  uint uVar10;
  FChaosPhysicsMaterialMask *in_R8;
  ForElementType<unsigned_int> FVar11;
  longlong lVar12;
  
  uVar10 = this->FreeList;
  if (uVar10 == 0xffffff) {
    if (this->NumData == this->Capacity) {
      pFVar9 = FMemory::Realloc(this->Data,(ulonglong)(this->Capacity + 4) * 0x28,8);
      this->Capacity = this->Capacity + 4;
      this->Data = pFVar9;
    }
    iVar8 = (this->HandleEntries).ArrayNum;
    piVar1 = &(this->HandleEntries).ArrayMax;
    uVar10 = this->NumData;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->HandleEntries).AllocatorInstance,piVar1);
    }
    (this->HandleEntries).ArrayNum = iVar8 + 1;
    DefaultConstructItems<Chaos::THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::FHandleEntry,int>
              ((this->HandleEntries).AllocatorInstance.Data + (longlong)iVar8 * 4,1);
    TBitArray<FDefaultBitArrayAllocator>::Add(&this->Validity,true);
    this->NumData = this->NumData + 1;
  }
  else {
    uVar6 = 0;
    if ((int)uVar10 < (this->HandleEntries).ArrayNum) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar7 = (THandle<Chaos::FChaosPhysicsMaterialMask,24,8>)(*pcVar4)();
        return TVar7;
      }
    }
    uVar6 = this->FreeList;
    pFVar2 = (this->HandleEntries).AllocatorInstance.Data + (longlong)(int)uVar10 * 4;
    if (((int)uVar6 < 0) || ((this->Validity).NumBits <= (int)uVar6)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar7 = (THandle<Chaos::FChaosPhysicsMaterialMask,24,8>)(*pcVar4)();
        return TVar7;
      }
    }
    FVar11 = (this->Validity).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<unsigned_int>)0x0) {
      FVar11 = (ForElementType<unsigned_int>)&this->Validity;
    }
    puVar3 = (uint *)((longlong)FVar11 +
                     (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar6 & 0x1f);
    this->FreeList = *(uint *)pFVar2 & 0xffffff;
    *(uint *)pFVar2 = *(uint *)pFVar2 | 0xffffff;
  }
  lVar12 = (longlong)(int)uVar10;
  FChaosPhysicsMaterialMask::FChaosPhysicsMaterialMask(this->Data + lVar12,in_R8);
  this->NumActive = this->NumActive + 1;
  if ((-1 < (int)uVar10) && ((int)uVar10 < (this->HandleEntries).ArrayNum)) {
    uVar6 = 0;
    if ((int)uVar10 < (this->HandleEntries).ArrayNum) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar7 = (THandle<Chaos::FChaosPhysicsMaterialMask,24,8>)(*pcVar4)();
        return TVar7;
      }
    }
    if ((this->HandleEntries).AllocatorInstance.Data[lVar12 * 4 + 3] != (FScriptContainerElement)0x0
       ) {
      uVar6 = 0;
      if ((int)uVar10 < (this->HandleEntries).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          TVar7 = (THandle<Chaos::FChaosPhysicsMaterialMask,24,8>)(*pcVar4)();
          return TVar7;
        }
      }
      pFVar2 = (this->HandleEntries).AllocatorInstance.Data;
      param_1->SizeX = param_1->SizeX ^ (param_1->SizeX ^ uVar10) & 0xffffff;
      *(FScriptContainerElement *)((longlong)&param_1->SizeX + 3) = pFVar2[lVar12 * 4 + 3];
      goto LAB_14405ce8b;
    }
  }
  param_1->SizeX = 0;
  *(undefined1 *)((longlong)&param_1->SizeX + 3) = 0;
LAB_14405ce8b:
  return SUB84(param_1,0);
}

// DestroyItems @ 144086220

void __thiscall
Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::DestroyItems
          (THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (this->Data != (FChaosPhysicsMaterial *)0x0) {
    if (0 < this->NumData) {
      do {
        if (((iVar4 < 0) || ((this->Validity).NumBits <= iVar4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < this->NumData);
    }
    FMemory::Free(this->Data);
  }
  this->FreeList = 0xffffff;
  this->NumData = 0;
  this->Capacity = 0;
  piVar1 = &(this->HandleEntries).ArrayMax;
  this->NumActive = 0;
  this->Data = (FChaosPhysicsMaterial *)0x0;
  (this->Validity).NumBits = 0;
  (this->HandleEntries).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->HandleEntries).AllocatorInstance,0,piVar1);
  }
  return;
}

// DestroyItems @ 144086300

void __thiscall
Chaos::THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::DestroyItems
          (THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8> *this)

{
  int *piVar1;
  ForElementType<unsigned_int> FVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar9 = 0;
  if (this->Data != (FChaosPhysicsMaterialMask *)0x0) {
    if (0 < this->NumData) {
      uVar11 = 1;
      uVar10 = uVar9;
      do {
        iVar8 = (int)uVar9;
        if (((iVar8 < 0) || ((this->Validity).NumBits <= iVar8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar2 = (this->Validity).AllocatorInstance.SecondaryData;
        FVar7 = (ForElementType<unsigned_int>)&this->Validity;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar7 = FVar2;
        }
        iVar6 = iVar8;
        if (iVar8 < 0) {
          iVar6 = iVar8 + 0x1f;
        }
        if (((*(uint *)((longlong)FVar7 + (longlong)(iVar6 >> 5) * 4) & uVar11) != 0) &&
           (pvVar3 = *(void **)((longlong)&(this->Data->MaskData).AllocatorInstance.Data + uVar10),
           pvVar3 != (void *)0x0)) {
          FMemory::Free(pvVar3);
        }
        uVar9 = (ulonglong)(iVar8 + 1U);
        uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
        uVar10 = uVar10 + 0x28;
      } while ((int)(iVar8 + 1U) < this->NumData);
    }
    FMemory::Free(this->Data);
  }
  this->FreeList = 0xffffff;
  this->NumData = 0;
  this->Capacity = 0;
  piVar1 = &(this->HandleEntries).ArrayMax;
  this->NumActive = 0;
  this->Data = (FChaosPhysicsMaterialMask *)0x0;
  (this->Validity).NumBits = 0;
  (this->HandleEntries).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->HandleEntries).AllocatorInstance,0,piVar1);
  }
  return;
}

// operator() @ 1504a8870

bool __thiscall
`Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::Destroy'::__l8::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6869238172006482242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6869238172006482242>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::Destroy(Chaos::THandle<Chaos::FChaosPhysicsMaterial,24,8>)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a88b0

bool __thiscall
`Chaos::THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::Destroy'::__l8::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6869238172006482242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6869238172006482242>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::Destroy(Chaos::THandle<Chaos::FChaosPhysicsMaterialMask,24,8>)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a88f0

bool __thiscall
`Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::Get'::__l13::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6869238172006482175>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6869238172006482175>,
                       &`public:___cdecl_`public:_class_Chaos::FChaosPhysicsMaterial_const*___ptr64___cdecl_Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::Get(Chaos::TConstHandle<Chaos::FChaosPhysicsMaterial,24,8>)const___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a8960

bool __thiscall
`Chaos::THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::Get'::__l13::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6869238172006482175>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6869238172006482175>,
                       &`public:___cdecl_`public:_class_Chaos::FChaosPhysicsMaterialMask_const*___ptr64___cdecl_Chaos::THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::Get(Chaos::TConstHandle<Chaos::FChaosPhysicsMaterialMask,24,8>)const___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

