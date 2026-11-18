// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FDelinquencyAnalytics @ 148013fa0

FDelinquencyAnalytics * __thiscall
FDelinquencyAnalytics::FDelinquencyAnalytics
          (FDelinquencyAnalytics *this,FDelinquencyAnalytics *param_1)

{
  int *piVar1;
  TSet<FDelinquencyNameTimePair,FDelinquencyKeyFuncs,FDefaultSetAllocator> *pTVar2;
  TSet<FDelinquencyNameTimePair,FDelinquencyKeyFuncs,FDefaultSetAllocator> *pTVar3;
  undefined1 *_Dst;
  undefined1 *_Src;
  uint uVar4;
  void *pvVar5;
  ForElementType<FSetElementId> FVar6;
  
  piVar1 = &(this->TopOffenders).ArrayMax;
  pTVar2 = &param_1->AllDelinquents;
  pTVar3 = &this->AllDelinquents;
  (this->TopOffenders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TopOffenders).AllocatorInstance.Data = (param_1->TopOffenders).AllocatorInstance.Data;
  (param_1->TopOffenders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TopOffenders).ArrayNum = (param_1->TopOffenders).ArrayNum;
  *piVar1 = (param_1->TopOffenders).ArrayMax;
  (param_1->TopOffenders).ArrayNum = 0;
  (param_1->TopOffenders).ArrayMax = 0;
  *(undefined8 *)&pTVar3->Elements = 0;
  *(undefined8 *)&(this->AllDelinquents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllDelinquents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AllDelinquents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllDelinquents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllDelinquents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllDelinquents).Elements.field_0x34 = 0;
  (this->AllDelinquents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllDelinquents).HashSize = 0;
  if (pTVar3 != pTVar2) {
    *(undefined8 *)&pTVar3->Elements = *(undefined8 *)&pTVar2->Elements;
    *(undefined8 *)&pTVar2->Elements = 0;
    _Dst = &(this->AllDelinquents).Elements.field_0x10;
    *(undefined4 *)&(this->AllDelinquents).Elements.field_0x8 =
         *(undefined4 *)&(param_1->AllDelinquents).Elements.field_0x8;
    _Src = &(param_1->AllDelinquents).Elements.field_0x10;
    *(undefined4 *)&(this->AllDelinquents).Elements.field_0xc =
         *(undefined4 *)&(param_1->AllDelinquents).Elements.field_0xc;
    *(undefined8 *)&(param_1->AllDelinquents).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->AllDelinquents).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar5 = *(void **)&(this->AllDelinquents).Elements.field_0x20;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      *(undefined8 *)&(this->AllDelinquents).Elements.field_0x20 =
           *(undefined8 *)&(param_1->AllDelinquents).Elements.field_0x20;
      *(undefined8 *)&(param_1->AllDelinquents).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->AllDelinquents).Elements.field_0x28 =
           *(undefined4 *)&(param_1->AllDelinquents).Elements.field_0x28;
      *(undefined4 *)&(this->AllDelinquents).Elements.field_0x2c =
           *(undefined4 *)&(param_1->AllDelinquents).Elements.field_0x2c;
      *(undefined8 *)&(param_1->AllDelinquents).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->AllDelinquents).Elements.field_0x30 =
         *(undefined4 *)&(param_1->AllDelinquents).Elements.field_0x30;
    *(undefined4 *)&(this->AllDelinquents).Elements.field_0x34 =
         *(undefined4 *)&(param_1->AllDelinquents).Elements.field_0x34;
    *(undefined4 *)&(param_1->AllDelinquents).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->AllDelinquents).Elements.field_0x34 = 0;
  }
  if ((param_1->AllDelinquents).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->AllDelinquents).Hash.InlineData =
         *(undefined4 *)(param_1->AllDelinquents).Hash.InlineData;
  }
  FVar6 = (this->AllDelinquents).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  (this->AllDelinquents).Hash.SecondaryData = (param_1->AllDelinquents).Hash.SecondaryData;
  (param_1->AllDelinquents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllDelinquents).HashSize = (param_1->AllDelinquents).HashSize;
  (param_1->AllDelinquents).HashSize = 0;
  this->TotalTime = param_1->TotalTime;
  uVar4 = param_1->NumberOfTopOffendersToTrack;
  this->NumberOfTopOffendersToTrack = uVar4;
  if (-1 < (int)uVar4) {
    if (*piVar1 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar4,(ForAnyElementType *)this,(this->TopOffenders).ArrayNum,piVar1);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

// FDelinquencyAnalytics @ 148014150

FDelinquencyAnalytics * __thiscall
FDelinquencyAnalytics::FDelinquencyAnalytics(FDelinquencyAnalytics *this,uint param_1)

{
  int *piVar1;
  
  (this->TopOffenders).ArrayMax = 0;
  piVar1 = &(this->TopOffenders).ArrayMax;
  (this->TopOffenders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TopOffenders).ArrayNum = 0;
  *(undefined8 *)&(this->AllDelinquents).Elements = 0;
  *(undefined8 *)&(this->AllDelinquents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllDelinquents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AllDelinquents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllDelinquents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllDelinquents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllDelinquents).Elements.field_0x34 = 0;
  (this->AllDelinquents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllDelinquents).HashSize = 0;
  this->TotalTime = 0.0;
  this->NumberOfTopOffendersToTrack = param_1;
  if (-1 < (int)param_1) {
    if (*piVar1 < (int)param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

// Add @ 14801eb90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDelinquencyAnalytics::Add(FDelinquencyAnalytics *this,FDelinquencyNameTimePair *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  FDelinquencyNameTimePair *pFVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  longlong *local_res20;
  longlong **local_68 [5];
  
  this->TotalTime = param_1->TimeSeconds + this->TotalTime;
  if (this->NumberOfTopOffendersToTrack == 0) {
    TSet<FDelinquencyNameTimePair,FDelinquencyKeyFuncs,FDefaultSetAllocator>::
    Emplace<FDelinquencyNameTimePair>
              (&this->AllDelinquents,(FDelinquencyNameTimePair *)local_res8,(bool *)param_1);
    return;
  }
  if ((this->TopOffenders).ArrayNum == 0) {
    pFVar4 = (FDelinquencyNameTimePair *)(this->TopOffenders).AllocatorInstance.Data;
    if (((pFVar4 <= param_1) && (param_1 < pFVar4 + (this->TopOffenders).ArrayMax)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = (this->TopOffenders).ArrayNum;
    piVar1 = &(this->TopOffenders).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,(ForAnyElementType *)this,piVar1);
    }
    (this->TopOffenders).ArrayNum = iVar10 + 1;
    pFVar5 = (this->TopOffenders).AllocatorInstance.Data;
    *(FName *)(pFVar5 + (longlong)iVar10 * 0xc) = param_1->Name;
    *(float *)(pFVar5 + (longlong)iVar10 * 0xc + 8) = param_1->TimeSeconds;
    TSet<FDelinquencyNameTimePair,FDelinquencyKeyFuncs,FDefaultSetAllocator>::
    Emplace<FDelinquencyNameTimePair>
              (&this->AllDelinquents,(FDelinquencyNameTimePair *)(local_res8 + 8),(bool *)param_1);
    return;
  }
  FVar6 = param_1->Name;
  uVar11 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
  uVar13 = 0;
  uVar20 = 0;
  if (*(int *)&(this->AllDelinquents).Elements.field_0x8 !=
      *(int *)&(this->AllDelinquents).Elements.field_0x34) {
    FVar12 = (this->AllDelinquents).Hash.SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&(this->AllDelinquents).Hash;
    }
    iVar10 = *(int *)((longlong)FVar12 +
                     (ulonglong)((this->AllDelinquents).HashSize - 1U & FVar6.Number + uVar11) * 4);
    if (iVar10 != -1) {
      lVar15 = *(longlong *)&(this->AllDelinquents).Elements;
      while (local_res20 = (longlong *)(lVar15 + (longlong)iVar10 * 0x14),
            *(FName *)(lVar15 + (longlong)iVar10 * 0x14) != param_1->Name) {
        iVar10 = *(int *)((longlong)local_res20 + 0xc);
        if (iVar10 == -1) goto LAB_14801ed3c;
      }
      if (local_res20 == (longlong *)0x0) goto LAB_14801ed44;
      if (param_1->TimeSeconds < *(float *)(local_res20 + 1) ||
          param_1->TimeSeconds == *(float *)(local_res20 + 1)) {
        return;
      }
      iVar10 = (this->TopOffenders).ArrayNum;
      if (iVar10 < 1) goto LAB_14801ed44;
      uVar11 = uVar20;
      if ((int)(iVar10 - 1U) < iVar10) {
        uVar11 = ~(iVar10 - 1U) >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar11 = (this->TopOffenders).ArrayNum;
      uVar18 = (ulonglong)(int)uVar11;
      pFVar5 = (this->TopOffenders).AllocatorInstance.Data;
      fVar3 = *(float *)(pFVar5 + uVar18 * 0xc + -4);
      if (*(float *)(local_res20 + 1) <= fVar3 && fVar3 != *(float *)(local_res20 + 1))
      goto LAB_14801ed44;
      uVar14 = uVar13;
      if (0 < (int)uVar11) {
        uVar16 = uVar11;
        uVar17 = uVar13;
        do {
          uVar19 = uVar16 >> 1;
          pFVar2 = pFVar5 + (longlong)(int)(uVar19 + uVar17) * 0xc + 8;
          uVar14 = (uVar16 & 1) + uVar19 + uVar17;
          if (*(float *)pFVar2 <= param_1->TimeSeconds && param_1->TimeSeconds != *(float *)pFVar2)
          {
            uVar14 = uVar17;
          }
          uVar16 = uVar19;
          uVar17 = uVar14;
        } while (uVar19 != 0);
      }
      if (uVar14 != uVar11) {
        lVar15 = (longlong)(int)uVar14 * 0xc;
        do {
          uVar11 = 0;
          if ((int)uVar14 < (int)uVar18) {
            uVar11 = ~uVar14 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          plVar8 = local_res20;
          pFVar5 = (this->TopOffenders).AllocatorInstance.Data + lVar15 + 8;
          if (*(float *)pFVar5 <= *(float *)(local_res20 + 1) &&
              *(float *)(local_res20 + 1) != *(float *)pFVar5) break;
          uVar11 = 0;
          if ((int)uVar14 < (this->TopOffenders).ArrayNum) {
            uVar11 = ~uVar14 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(longlong *)((this->TopOffenders).AllocatorInstance.Data + lVar15) == *plVar8) {
            TArray<FDelinquencyNameTimePair,TSizedDefaultAllocator<32>_>::RemoveAt
                      (&this->TopOffenders,uVar14,No);
            goto LAB_14801ed44;
          }
          uVar11 = (this->TopOffenders).ArrayNum;
          uVar18 = (ulonglong)uVar11;
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 0xc;
        } while (uVar14 != uVar11);
      }
      if (fVar3 != *(float *)(local_res20 + 1)) {
        local_68[0] = &local_res20;
        `FDelinquencyAnalytics::Add'::__l29::<lambda_1>::operator()(local_68);
      }
      goto LAB_14801ed44;
    }
  }
LAB_14801ed3c:
  local_res20 = (longlong *)0x0;
LAB_14801ed44:
  TSet<FDelinquencyNameTimePair,FDelinquencyKeyFuncs,FDefaultSetAllocator>::
  Emplace<FDelinquencyNameTimePair_const_&>
            (&this->AllDelinquents,(FDelinquencyNameTimePair *)local_res18,(bool *)param_1);
  uVar11 = (this->TopOffenders).ArrayNum;
  uVar14 = uVar20;
  if (0 < (int)uVar11) {
    uVar16 = uVar11;
    do {
      uVar17 = uVar16 >> 1;
      pFVar5 = (this->TopOffenders).AllocatorInstance.Data +
               (longlong)(int)(uVar17 + uVar13) * 0xc + 8;
      uVar14 = (uVar16 & 1) + uVar17 + uVar13;
      if (*(float *)pFVar5 <= param_1->TimeSeconds && param_1->TimeSeconds != *(float *)pFVar5) {
        uVar14 = uVar13;
      }
      uVar16 = uVar17;
      uVar13 = uVar14;
    } while (uVar17 != 0);
  }
  if ((int)uVar14 < (int)this->NumberOfTopOffendersToTrack) {
    if (this->NumberOfTopOffendersToTrack == uVar11) {
      TArray<FDelinquencyNameTimePair,TSizedDefaultAllocator<32>_>::RemoveAt
                (&this->TopOffenders,uVar11 - 1,No);
    }
    TArray<FDelinquencyNameTimePair,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
              (&this->TopOffenders,uVar14,1);
    FVar6 = param_1->Name;
    fVar3 = param_1->TimeSeconds;
    if ((int)uVar14 < (this->TopOffenders).ArrayNum) {
      uVar20 = ~uVar14 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = (this->TopOffenders).AllocatorInstance.Data;
    *(FName *)(pFVar5 + (longlong)(int)uVar14 * 0xc) = FVar6;
    *(float *)(pFVar5 + (longlong)(int)uVar14 * 0xc + 8) = fVar3;
  }
  return;
}

// CountBytes @ 148026240

void __thiscall FDelinquencyAnalytics::CountBytes(FDelinquencyAnalytics *this,FArchive *param_1)

{
  longlong lVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->TopOffenders).ArrayNum * 0xc,
             (longlong)(this->TopOffenders).ArrayMax * 0xc);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)&(this->AllDelinquents).Elements.field_0x8 * 0x14,
             (longlong)*(int *)&(this->AllDelinquents).Elements.field_0xc * 0x14);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&(this->AllDelinquents).Elements.field_0x28 + 0x1fU >> 5)
                     << 2,
             (ulonglong)(*(int *)&(this->AllDelinquents).Elements.field_0x2c + 0x1fU >> 5) << 2);
  lVar1 = (longlong)(this->AllDelinquents).HashSize << 2;
                    /* WARNING: Could not recover jumptable at 0x0001480262d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar1,lVar1);
  return;
}

// Reset @ 148053d60

void __thiscall FDelinquencyAnalytics::Reset(FDelinquencyAnalytics *this)

{
  int iVar1;
  
  (this->TopOffenders).ArrayNum = 0;
  if ((this->TopOffenders).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,&(this->TopOffenders).ArrayMax);
  }
  if (*(int *)&(this->AllDelinquents).Elements.field_0x8 !=
      *(int *)&(this->AllDelinquents).Elements.field_0x34) {
    TSet<FDelinquencyNameTimePair,FDelinquencyKeyFuncs,FDefaultSetAllocator>::UnhashElements
              (&this->AllDelinquents);
    iVar1 = *(int *)&(this->AllDelinquents).Elements.field_0xc;
    *(undefined4 *)&(this->AllDelinquents).Elements.field_0x8 = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,(ForAnyElementType *)&this->AllDelinquents,0,
                 (int *)&(this->AllDelinquents).Elements.field_0xc);
    }
    *(undefined4 *)&(this->AllDelinquents).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->AllDelinquents).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->AllDelinquents).Elements.field_0x28 = 0;
  }
  this->TotalTime = 0.0;
  return;
}

// operator= @ 14808fad0

FDelinquencyAnalytics * __thiscall
FDelinquencyAnalytics::operator=(FDelinquencyAnalytics *this,FDelinquencyAnalytics *param_1)

{
  TSet<FDelinquencyNameTimePair,FDelinquencyKeyFuncs,FDefaultSetAllocator> *pTVar1;
  TSet<FDelinquencyNameTimePair,FDelinquencyKeyFuncs,FDefaultSetAllocator> *pTVar2;
  undefined1 *_Src;
  undefined1 *_Dst;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (this != param_1) {
    pFVar3 = (this->TopOffenders).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->TopOffenders).AllocatorInstance.Data = (param_1->TopOffenders).AllocatorInstance.Data;
    (param_1->TopOffenders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TopOffenders).ArrayNum = (param_1->TopOffenders).ArrayNum;
    (this->TopOffenders).ArrayMax = (param_1->TopOffenders).ArrayMax;
    (param_1->TopOffenders).ArrayNum = 0;
    (param_1->TopOffenders).ArrayMax = 0;
  }
  pTVar1 = &param_1->AllDelinquents;
  pTVar2 = &this->AllDelinquents;
  if (pTVar2 != pTVar1) {
    if (*(void **)&pTVar2->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar2->Elements);
    }
    _Src = &(param_1->AllDelinquents).Elements.field_0x10;
    *(undefined8 *)&pTVar2->Elements = *(undefined8 *)&pTVar1->Elements;
    _Dst = &(this->AllDelinquents).Elements.field_0x10;
    *(undefined8 *)&pTVar1->Elements = 0;
    *(undefined4 *)&(this->AllDelinquents).Elements.field_0x8 =
         *(undefined4 *)&(param_1->AllDelinquents).Elements.field_0x8;
    *(undefined4 *)&(this->AllDelinquents).Elements.field_0xc =
         *(undefined4 *)&(param_1->AllDelinquents).Elements.field_0xc;
    *(undefined8 *)&(param_1->AllDelinquents).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->AllDelinquents).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar4 = *(void **)&(this->AllDelinquents).Elements.field_0x20;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      *(undefined8 *)&(this->AllDelinquents).Elements.field_0x20 =
           *(undefined8 *)&(param_1->AllDelinquents).Elements.field_0x20;
      *(undefined8 *)&(param_1->AllDelinquents).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->AllDelinquents).Elements.field_0x28 =
           *(undefined4 *)&(param_1->AllDelinquents).Elements.field_0x28;
      *(undefined4 *)&(this->AllDelinquents).Elements.field_0x2c =
           *(undefined4 *)&(param_1->AllDelinquents).Elements.field_0x2c;
      *(undefined8 *)&(param_1->AllDelinquents).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->AllDelinquents).Elements.field_0x30 =
         *(undefined4 *)&(param_1->AllDelinquents).Elements.field_0x30;
    *(undefined4 *)&(this->AllDelinquents).Elements.field_0x34 =
         *(undefined4 *)&(param_1->AllDelinquents).Elements.field_0x34;
    *(undefined4 *)&(param_1->AllDelinquents).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->AllDelinquents).Elements.field_0x34 = 0;
    if ((param_1->AllDelinquents).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
      *(undefined4 *)(this->AllDelinquents).Hash.InlineData =
           *(undefined4 *)(param_1->AllDelinquents).Hash.InlineData;
    }
    FVar5 = (this->AllDelinquents).Hash.SecondaryData;
    if (FVar5 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    (this->AllDelinquents).Hash.SecondaryData = (param_1->AllDelinquents).Hash.SecondaryData;
    (param_1->AllDelinquents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (this->AllDelinquents).HashSize = (param_1->AllDelinquents).HashSize;
    (param_1->AllDelinquents).HashSize = 0;
  }
  this->TotalTime = param_1->TotalTime;
  this->NumberOfTopOffendersToTrack = param_1->NumberOfTopOffendersToTrack;
  return this;
}

// operator() @ 1505214b0

bool __thiscall `FDelinquencyAnalytics::Add'::__l29::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28 [2];
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4414422078942347153>);
  if (bVar2) {
    ::FName::ToString((FName *)**(undefined8 **)this,local_28);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4414422078942347153>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150521538;
    }
  }
  bVar2 = false;
LAB_150521538:
  if ((bVar4) && (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

