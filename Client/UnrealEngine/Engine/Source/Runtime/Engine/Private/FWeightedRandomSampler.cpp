// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// GetTypeLayout @ 1485e5560

FTypeLayoutDesc * __thiscall FWeightedRandomSampler::GetTypeLayout(FWeightedRandomSampler *this)

{
  code *pcVar1;
  bool bVar2;
  FTypeLayoutDesc *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                     ,0x123,L"Access to Abstract/Invalid type layout desc");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTypeLayoutDesc *)(*pcVar1)();
    return pFVar3;
  }
  return &InvalidTypeDesc;
}

// FWeightedRandomSampler @ 148623cb0

FWeightedRandomSampler * __thiscall
FWeightedRandomSampler::FWeightedRandomSampler
          (FWeightedRandomSampler *this,FWeightedRandomSampler *param_1)

{
  TArray<float,TMemoryImageAllocator<0>_> *pTVar1;
  int *piVar2;
  TArray<int,TMemoryImageAllocator<0>_> *pTVar3;
  int iVar4;
  ForAnyElementType FVar5;
  ForAnyElementType FVar6;
  
  this->_padding_ = (longlong)&___7FWeightedRandomSampler__6B_;
  pTVar1 = &this->Prob;
  pTVar1->AllocatorInstance = (ForAnyElementType)0x0;
  FVar6 = (param_1->Prob).AllocatorInstance;
  iVar4 = (param_1->Prob).ArrayNum;
  if (((ulonglong)FVar6 & 1) != 0) {
    FVar6 = (ForAnyElementType)
            ((longlong)&(param_1->Prob).AllocatorInstance.field_0x0 + ((longlong)FVar6 >> 0x18));
  }
  (this->Prob).ArrayNum = iVar4;
  piVar2 = &(this->Prob).ArrayMax;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    FVar5 = pTVar1->AllocatorInstance;
    if (((ulonglong)FVar5 & 1) != 0) {
      FVar5 = (ForAnyElementType)
              ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar5 >> 0x18));
    }
    memcpy((void *)FVar5,(void *)FVar6,(longlong)iVar4 << 2);
  }
  (this->Alias).AllocatorInstance = (ForAnyElementType)0x0;
  FVar6 = (param_1->Alias).AllocatorInstance;
  pTVar3 = &this->Alias;
  iVar4 = (param_1->Alias).ArrayNum;
  if (((ulonglong)FVar6 & 1) != 0) {
    FVar6 = (ForAnyElementType)
            ((longlong)&(param_1->Alias).AllocatorInstance.field_0x0 + ((longlong)FVar6 >> 0x18));
  }
  (this->Alias).ArrayNum = iVar4;
  piVar2 = &(this->Alias).ArrayMax;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    FVar5 = pTVar3->AllocatorInstance;
    if (((ulonglong)FVar5 & 1) != 0) {
      FVar5 = (ForAnyElementType)
              ((longlong)&(pTVar3->AllocatorInstance).field_0x0 + ((longlong)FVar5 >> 0x18));
    }
    memcpy((void *)FVar5,(void *)FVar6,(longlong)iVar4 << 2);
  }
  this->TotalWeight = param_1->TotalWeight;
  return this;
}

// operator= @ 148626c10

FWeightedRandomSampler * __thiscall
FWeightedRandomSampler::operator=(FWeightedRandomSampler *this,FWeightedRandomSampler *param_1)

{
  TArray<float,TMemoryImageAllocator<0>_> *pTVar1;
  TArray<float,TMemoryImageAllocator<0>_> *pTVar2;
  int *piVar3;
  TArray<int,TMemoryImageAllocator<0>_> *pTVar4;
  TArray<int,TMemoryImageAllocator<0>_> *pTVar5;
  int iVar6;
  ForAnyElementType FVar7;
  ForAnyElementType FVar8;
  
  pTVar1 = &param_1->Prob;
  pTVar2 = &this->Prob;
  if (pTVar2 != pTVar1) {
    FVar8 = pTVar1->AllocatorInstance;
    piVar3 = &(this->Prob).ArrayMax;
    iVar6 = (param_1->Prob).ArrayNum;
    if (((ulonglong)FVar8 & 1) != 0) {
      FVar8 = (ForAnyElementType)
              ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18));
    }
    (this->Prob).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,4,iVar6,*piVar3,&pTVar2->AllocatorInstance,iVar6,piVar3);
      FVar7 = pTVar2->AllocatorInstance;
      if (((ulonglong)FVar7 & 1) != 0) {
        FVar7 = (ForAnyElementType)
                ((longlong)&(pTVar2->AllocatorInstance).field_0x0 + ((longlong)FVar7 >> 0x18));
      }
      if (iVar6 != 0) {
        memcpy((void *)FVar7,(void *)FVar8,(longlong)iVar6 << 2);
      }
    }
  }
  pTVar4 = &param_1->Alias;
  pTVar5 = &this->Alias;
  if (pTVar5 != pTVar4) {
    FVar8 = pTVar4->AllocatorInstance;
    piVar3 = &(this->Alias).ArrayMax;
    iVar6 = (param_1->Alias).ArrayNum;
    if (((ulonglong)FVar8 & 1) != 0) {
      FVar8 = (ForAnyElementType)
              ((longlong)&(pTVar4->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18));
    }
    (this->Alias).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,4,iVar6,*piVar3,&pTVar5->AllocatorInstance,iVar6,piVar3);
      FVar7 = pTVar5->AllocatorInstance;
      if (((ulonglong)FVar7 & 1) != 0) {
        FVar7 = (ForAnyElementType)
                ((longlong)&(pTVar5->AllocatorInstance).field_0x0 + ((longlong)FVar7 >> 0x18));
      }
      if (iVar6 != 0) {
        memcpy((void *)FVar7,(void *)FVar8,(longlong)iVar6 << 2);
      }
    }
  }
  this->TotalWeight = param_1->TotalWeight;
  return this;
}

// FWeightedRandomSampler @ 1489b6200

FWeightedRandomSampler * __thiscall
FWeightedRandomSampler::FWeightedRandomSampler(FWeightedRandomSampler *this)

{
  this->_padding_ = (longlong)&___7FWeightedRandomSampler__6B_;
  (this->Prob).AllocatorInstance = (ForAnyElementType)0x0;
  (this->Prob).ArrayNum = 0;
  (this->Prob).ArrayMax = 0;
  (this->Alias).AllocatorInstance = (ForAnyElementType)0x0;
  (this->Alias).ArrayNum = 0;
  (this->Alias).ArrayMax = 0;
  this->TotalWeight = 0.0;
  return this;
}

// ~FWeightedRandomSampler @ 1489ba570

void __thiscall FWeightedRandomSampler::~FWeightedRandomSampler(FWeightedRandomSampler *this)

{
  this->_padding_ = (longlong)&___7FWeightedRandomSampler__6B_;
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&this->Alias);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&this->Prob);
  return;
}

// Initialize @ 1489f5730

void __thiscall FWeightedRandomSampler::Initialize(FWeightedRandomSampler *this)

{
  TArray<float,TMemoryImageAllocator<0>_> *pTVar1;
  int *piVar2;
  TArray<int,TMemoryImageAllocator<0>_> *pTVar3;
  void *pvVar4;
  float *pfVar5;
  FScriptContainerElement *pFVar6;
  undefined4 uVar7;
  float fVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ForAnyElementType FVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_a8;
  uint local_a4;
  ForAnyElementType local_a0;
  undefined8 local_98;
  ForAnyElementType local_90;
  undefined8 local_88;
  void *local_80;
  ulonglong local_78;
  
  local_80 = (void *)0x0;
  local_78 = 0;
  fVar23 = (float)(**(code **)(this->_padding_ + 0x20))(this,&local_80);
  uVar13 = (uint)local_78;
  lVar19 = (longlong)(int)(uint)local_78;
  this->TotalWeight = fVar23;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  if ((int)(uint)local_78 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_78 & 0xffffffff);
  }
  local_98._4_4_ = 0;
  if (0 < (int)(uint)local_78) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(uint)local_78,&local_90,0,(int *)((longlong)&local_88 + 4));
  }
  if (local_98._4_4_ < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar13,&local_a0,(int)local_98,(int *)((longlong)&local_98 + 4));
  }
  pTVar1 = &this->Prob;
  iVar12 = (this->Prob).ArrayNum;
  piVar2 = &(this->Prob).ArrayNum;
  if (iVar12 < (int)uVar13) {
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,4,uVar13 - iVar12,&pTVar1->AllocatorInstance,piVar2,&(this->Prob).ArrayMax);
  }
  else if ((int)uVar13 < iVar12) {
    uVar16 = iVar12 - uVar13;
    if (((int)(uVar13 | uVar16) < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (uVar16 != 0) {
      FVar14 = pTVar1->AllocatorInstance;
      if (((ulonglong)FVar14 & 1) != 0) {
        FVar14 = (ForAnyElementType)
                 ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar14 >> 0x18));
      }
      pvVar4 = (void *)((longlong)FVar14 + lVar19 * 4);
      iVar12 = (*piVar2 - uVar16) - uVar13;
      if (iVar12 != 0) {
        memmove(pvVar4,(void *)((longlong)pvVar4 + (longlong)(int)uVar16 * 4),(longlong)iVar12 << 2)
        ;
      }
      *piVar2 = *piVar2 - uVar16;
      UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,4,&pTVar1->AllocatorInstance,*piVar2,&(this->Prob).ArrayMax);
    }
  }
  pTVar3 = &this->Alias;
  iVar12 = (this->Alias).ArrayNum;
  piVar2 = &(this->Alias).ArrayNum;
  if (iVar12 < (int)uVar13) {
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,4,uVar13 - iVar12,&pTVar3->AllocatorInstance,piVar2,&(this->Alias).ArrayMax);
  }
  else if ((int)uVar13 < iVar12) {
    uVar16 = iVar12 - uVar13;
    if (((int)(uVar16 | uVar13) < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (uVar16 != 0) {
      FVar14 = pTVar3->AllocatorInstance;
      if (((ulonglong)FVar14 & 1) != 0) {
        FVar14 = (ForAnyElementType)
                 ((longlong)&(pTVar3->AllocatorInstance).field_0x0 + ((longlong)FVar14 >> 0x18));
      }
      pvVar4 = (void *)((longlong)FVar14 + lVar19 * 4);
      iVar12 = (*piVar2 - uVar16) - uVar13;
      if (iVar12 != 0) {
        memmove(pvVar4,(void *)((longlong)pvVar4 + (longlong)(int)uVar16 * 4),(longlong)iVar12 << 2)
        ;
      }
      *piVar2 = *piVar2 - uVar16;
      UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,4,&pTVar3->AllocatorInstance,*piVar2,&(this->Alias).ArrayMax);
    }
  }
  fVar23 = __real_3f800000;
  if (this->TotalWeight == 0.0) {
    fVar24 = 0.0;
    local_a8 = uVar13;
  }
  else {
    fVar24 = (float)(int)uVar13 / this->TotalWeight;
    local_a8 = uVar13;
  }
  do {
    uVar16 = local_a8 - 1;
    local_a8 = uVar16;
    if ((int)uVar16 < 0) {
      FVar21.Data = local_a0.Data;
      while( true ) {
        iVar12 = (int)local_98;
        local_a0.Data = FVar21.Data;
        if (((int)local_88 == 0) || ((int)local_98 == 0)) {
          pFVar6 = FVar21.Data + (longlong)(int)local_98 * 4;
          while( true ) {
            if ((int)local_98 != iVar12) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res10);
            }
            if (FVar21.Data == pFVar6) {
              iVar12 = (int)local_88;
              uVar15 = (ulonglong)(int)local_88;
              pFVar6 = local_90.Data + uVar15 * 4;
              FVar21.Data = local_90.Data;
              while( true ) {
                if ((int)uVar15 != iVar12) {
                  local_res18[0] = 0;
                  `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (local_res18);
                }
                if (FVar21.Data == pFVar6) {
                  if (local_a0.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_a0.Data);
                  }
                  if (local_90.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_90.Data);
                  }
                  if (local_80 != (void *)0x0) {
                    FMemory::Free(local_80);
                  }
                  return;
                }
                uVar13 = *(uint *)FVar21.Data;
                uVar16 = 0;
                if ((int)uVar13 < (this->Prob).ArrayNum) {
                  uVar16 = ~uVar13 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) break;
                FVar14 = pTVar1->AllocatorInstance;
                if (((ulonglong)FVar14 & 1) != 0) {
                  FVar14 = (ForAnyElementType)
                           ((longlong)&(pTVar1->AllocatorInstance).field_0x0 +
                           ((longlong)FVar14 >> 0x18));
                }
                *(undefined4 *)((longlong)FVar14 + (longlong)(int)uVar13 * 4) = 0x3f800000;
                uVar13 = *(uint *)FVar21.Data;
                uVar16 = 0;
                if ((int)uVar13 < (this->Alias).ArrayNum) {
                  uVar16 = ~uVar13 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                FVar14 = pTVar3->AllocatorInstance;
                if (((ulonglong)FVar14 & 1) != 0) {
                  FVar14 = (ForAnyElementType)
                           ((longlong)&(pTVar3->AllocatorInstance).field_0x0 +
                           ((longlong)FVar14 >> 0x18));
                }
                *(uint *)((longlong)FVar14 + (longlong)(int)uVar13 * 4) = uVar13;
                FVar21.Data = FVar21.Data + 4;
                uVar15 = local_88 & 0xffffffff;
              }
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar13 = *(uint *)FVar21.Data;
            uVar16 = 0;
            if ((int)uVar13 < (this->Prob).ArrayNum) {
              uVar16 = ~uVar13 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) break;
            FVar14 = pTVar1->AllocatorInstance;
            if (((ulonglong)FVar14 & 1) != 0) {
              FVar14 = (ForAnyElementType)
                       ((longlong)&(pTVar1->AllocatorInstance).field_0x0 +
                       ((longlong)FVar14 >> 0x18));
            }
            *(undefined4 *)((longlong)FVar14 + (longlong)(int)uVar13 * 4) = 0x3f800000;
            uVar13 = *(uint *)FVar21.Data;
            uVar16 = 0;
            if ((int)uVar13 < (this->Alias).ArrayNum) {
              uVar16 = ~uVar13 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar14 = pTVar3->AllocatorInstance;
            if (((ulonglong)FVar14 & 1) != 0) {
              FVar14 = (ForAnyElementType)
                       ((longlong)&(pTVar3->AllocatorInstance).field_0x0 +
                       ((longlong)FVar14 >> 0x18));
            }
            *(uint *)((longlong)FVar14 + (longlong)(int)uVar13 * 4) = uVar13;
            FVar21.Data = FVar21.Data + 4;
          }
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (((int)local_88 < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar12 = (int)local_88 + -1;
        uVar13 = *(uint *)(local_90.Data + (longlong)iVar12 * 4);
        lVar19 = (longlong)(int)uVar13;
        iVar22 = ((int)local_88 - iVar12) + -1;
        if (iVar22 != 0) {
          memmove(local_90.Data + (longlong)iVar12 * 4,local_90.Data + (longlong)iVar12 * 4 + 4,
                  (longlong)iVar22 << 2);
        }
        local_88 = CONCAT44(local_88._4_4_,(int)local_88 + -1);
        if (((int)local_98 < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) break;
        iVar12 = (int)local_98 + -1;
        uVar16 = *(uint *)(local_a0.Data + (longlong)iVar12 * 4);
        iVar22 = ((int)local_98 - iVar12) + -1;
        if (iVar22 != 0) {
          memmove(local_a0.Data + (longlong)iVar12 * 4,local_a0.Data + (longlong)iVar12 * 4 + 4,
                  (longlong)iVar22 << 2);
        }
        local_98 = CONCAT44(local_98._4_4_,(int)local_98 + -1);
        uVar17 = ~uVar13 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar13 < (int)(uint)local_78) {
          uVar11 = uVar17;
        }
        local_a4 = uVar16;
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar7 = *(undefined4 *)((longlong)local_80 + lVar19 * 4);
        uVar16 = 0;
        if ((int)uVar13 < (this->Prob).ArrayNum) {
          uVar16 = uVar17;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar16 = local_a4;
        FVar14 = pTVar1->AllocatorInstance;
        if (((ulonglong)FVar14 & 1) != 0) {
          FVar14 = (ForAnyElementType)
                   ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar14 >> 0x18));
        }
        *(undefined4 *)((longlong)FVar14 + lVar19 * 4) = uVar7;
        uVar11 = 0;
        if ((int)uVar13 < (this->Alias).ArrayNum) {
          uVar11 = uVar17;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar14 = pTVar3->AllocatorInstance;
        if (((ulonglong)FVar14 & 1) != 0) {
          FVar14 = (ForAnyElementType)
                   ((longlong)&(pTVar3->AllocatorInstance).field_0x0 + ((longlong)FVar14 >> 0x18));
        }
        *(uint *)((longlong)FVar14 + lVar19 * 4) = uVar16;
        lVar20 = (longlong)(int)local_a4;
        uVar16 = 0;
        if ((int)local_a4 < (int)(uint)local_78) {
          uVar16 = ~local_a4 >> 0x1f;
        }
        if (uVar16 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        pvVar4 = local_80;
        uVar16 = 0;
        if ((int)uVar13 < (int)(uint)local_78) {
          uVar16 = uVar17;
        }
        iVar12 = (uint)local_78;
        if (uVar16 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar12 = (uint)local_78;
        }
        lVar18 = (longlong)(int)local_a4;
        fVar24 = *(float *)((longlong)local_80 + lVar19 * 4);
        fVar8 = *(float *)((longlong)pvVar4 + lVar20 * 4);
        uVar13 = 0;
        if ((int)local_a4 < iVar12) {
          uVar13 = ~local_a4 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(float *)((longlong)local_80 + lVar18 * 4) = (fVar24 + fVar8) - fVar23;
        lVar19 = (longlong)(int)local_a4;
        uVar13 = 0;
        if ((int)local_a4 < (int)(uint)local_78) {
          uVar13 = ~local_a4 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pfVar5 = (float *)((longlong)local_80 + lVar19 * 4);
        if (fVar23 < *pfVar5 || fVar23 == *pfVar5) {
          if (((local_a0.Data <= (FScriptContainerElement *)&local_a4) &&
              ((FScriptContainerElement *)&local_a4 < local_a0.Data + (longlong)local_98._4_4_ * 4))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar12 = (int)local_98;
          if ((int)local_98 == local_98._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_a0,(int *)((longlong)&local_98 + 4));
          }
          local_98 = CONCAT44(local_98._4_4_,iVar12 + 1);
          FVar21.Data = local_a0.Data;
        }
        else {
          if (((local_90.Data <= (FScriptContainerElement *)&local_a4) &&
              ((FScriptContainerElement *)&local_a4 < local_90.Data + (longlong)local_88._4_4_ * 4))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar12 = (int)local_88;
          if ((int)local_88 == local_88._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_90,(int *)((longlong)&local_88 + 4));
          }
          local_88 = CONCAT44(local_88._4_4_,iVar12 + 1);
          FVar21.Data = local_90.Data;
        }
        *(uint *)(FVar21.Data + (longlong)iVar12 * 4) = local_a4;
        FVar21.Data = local_a0.Data;
      }
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar11 = 0;
    if ((int)uVar16 < (int)(uint)local_78) {
      uVar11 = ~uVar16 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    *(float *)((longlong)local_80 + (longlong)(int)uVar16 * 4) =
         fVar24 * *(float *)((longlong)local_80 + (longlong)(int)uVar16 * 4);
    lVar19 = (longlong)(int)local_a8;
    uVar16 = 0;
    if ((int)local_a8 < (int)(uint)local_78) {
      uVar16 = ~local_a8 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pfVar5 = (float *)((longlong)local_80 + lVar19 * 4);
    if (*pfVar5 <= 0.0 && *pfVar5 != 0.0) {
LAB_1489f5afd:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("P[i] >= 0.0f && P[i] <= (float)NumElements",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WeightedRandomSampler.cpp"
                          ,0x24,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    else {
      lVar19 = (longlong)(int)local_a8;
      uVar16 = 0;
      if ((int)local_a8 < (int)(uint)local_78) {
        uVar16 = ~local_a8 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((float)(int)uVar13 < *(float *)((longlong)local_80 + lVar19 * 4)) goto LAB_1489f5afd;
    }
    lVar19 = (longlong)(int)local_a8;
    uVar16 = 0;
    if ((int)local_a8 < (int)(uint)local_78) {
      uVar16 = ~local_a8 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pfVar5 = (float *)((longlong)local_80 + lVar19 * 4);
    if (fVar23 < *pfVar5 || fVar23 == *pfVar5) {
      if (((local_a0.Data <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < local_a0.Data + (longlong)local_98._4_4_ * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar12 = (int)local_98;
      if ((int)local_98 == local_98._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_a0,(int *)((longlong)&local_98 + 4));
      }
      local_98 = CONCAT44(local_98._4_4_,iVar12 + 1);
      FVar21.Data = local_a0.Data;
    }
    else {
      if (((local_90.Data <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < local_90.Data + (longlong)local_88._4_4_ * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar12 = (int)local_88;
      if ((int)local_88 == local_88._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_90,(int *)((longlong)&local_88 + 4));
      }
      local_88 = CONCAT44(local_88._4_4_,iVar12 + 1);
      FVar21.Data = local_90.Data;
    }
    *(uint *)(FVar21.Data + (longlong)iVar12 * 4) = local_a8;
  } while( true );
}

// InternalDestroy @ 1489f7f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FWeightedRandomSampler::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (!param_4) {
    (**(code **)(*(longlong *)param_1 + 8))(param_1,0);
  }
  uVar2 = _UNK_1506d61e8;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar2;
  return;
}

// Serialize @ 148a13300

void __thiscall FWeightedRandomSampler::Serialize(FWeightedRandomSampler *this,FArchive *param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  TArrayPrivateFriend::Serialize<float,TMemoryImageAllocator<0>_>(param_1,&this->Prob);
  TArrayPrivateFriend::Serialize<int,TMemoryImageAllocator<0>_>(param_1,&this->Alias);
  pfVar1 = &this->TotalWeight;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148a13371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return;
}

// StaticGetTypeLayout @ 148a17fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FWeightedRandomSampler::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '0';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FWeightedRandom;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FWeightedRandomSampler,2>::Do;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\x02';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FWeightedRandomSampler::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TotalWeight";
    DAT_15525a922 = Freeze::FindFieldNameLength(L"TotalWeight");
    _DAT_15525a900 = StaticGetTypeLayoutDesc<float>();
    DAT_15525a908 = ::TypeBuffer[0x10];
    DAT_15525a908_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15525a908_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15525a908_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15525a908_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15525a908_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15525a908_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15525a908_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FWeightedRandomSampler::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15525a910 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15525a918 = 0x28;
    _DAT_15525a91c = 1;
    _DAT_15525a920 = 0;
    `public:_static_void___cdecl_FWeightedRandomSampler::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Alias";
    DAT_15525a8f2 = Freeze::FindFieldNameLength(L"Alias");
    if ((DAT_155190017 & 2) == 0) {
      DAT_155190017 = DAT_155190017 | 3;
      _DAT_15518ffb8 = L"(TArray<T, AllocatorType>)";
      _DAT_15518ffd0 =
           TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::CallWriteMemoryImage;
      _DAT_15518ffd8 =
           TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy;
      _DAT_15518ffe0 =
           TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::CallAppendHash;
      _DAT_15518ffe8 =
           TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::
           CallGetTargetAlignment;
      _DAT_15518fff0 =
           TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::CallToString;
      _DAT_15518ffc8 =
           TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::CallDestroy;
      _DAT_155190008 = 0x10;
      _DAT_155190010 = 8;
      DAT_155190014 = 0;
      _DAT_15519000c = 0x10;
    }
    _DAT_15525a8e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15525a8d0 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<int,TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_15525a8d8 = ::TypeBuffer[0x10];
    DAT_15525a8d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15525a8d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15525a8d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15525a8d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15525a8d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15525a8d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15525a8d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FWeightedRandomSampler::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15525a8e8 = 0x18;
    _DAT_15525a8ec = 1;
    _DAT_15525a8f0 = 0;
    `public:_static_void___cdecl_FWeightedRandomSampler::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Prob";
    DAT_15525a8c2 = Freeze::FindFieldNameLength(L"Prob");
    if ((DAT_155198c3f & 2) == 0) {
      DAT_155198c3f = DAT_155198c3f | 3;
      _DAT_155198be0 = L"(TArray<T, AllocatorType>)";
      _DAT_155198bf8 =
           TStaticGetTypeLayoutHelper<TArray<float,TMemoryImageAllocator<0>_>_>::
           CallWriteMemoryImage;
      _DAT_155198c00 =
           TStaticGetTypeLayoutHelper<TArray<float,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy;
      _DAT_155198c08 =
           TStaticGetTypeLayoutHelper<TArray<float,TMemoryImageAllocator<0>_>_>::CallAppendHash;
      _DAT_155198c10 =
           TStaticGetTypeLayoutHelper<TArray<float,TMemoryImageAllocator<0>_>_>::
           CallGetTargetAlignment;
      _DAT_155198c18 =
           TStaticGetTypeLayoutHelper<TArray<float,TMemoryImageAllocator<0>_>_>::CallToString;
      _DAT_155198bf0 =
           TStaticGetTypeLayoutHelper<TArray<float,TMemoryImageAllocator<0>_>_>::CallDestroy;
      _DAT_155198c30 = 0x10;
      _DAT_155198c38 = 8;
      DAT_155198c3c = 0;
      _DAT_155198c34 = 0x10;
    }
    _DAT_15525a8b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15525a8a0 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<float,TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_15525a8a8 = ::TypeBuffer[0x10];
    DAT_15525a8a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15525a8a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15525a8a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15525a8a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15525a8a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15525a8a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15525a8a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FWeightedRandomSampler::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15525a8b8 = 8;
    _DAT_15525a8bc = 1;
    _DAT_15525a8c0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

