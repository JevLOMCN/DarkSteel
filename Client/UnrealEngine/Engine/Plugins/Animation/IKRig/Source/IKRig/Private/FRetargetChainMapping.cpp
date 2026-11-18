// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 18

// StaticStruct @ 14defb580

UScriptStruct * __cdecl FRetargetChainMapping::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRetargetChainMapping.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FRetargetChainMapping.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRetargetChainMapping,(UObject *)pUVar1,
                         L"RetargetChainMapping");
  }
  return Z_Registration_Info_UScriptStruct_FRetargetChainMapping.OuterSingleton;
}

// operator= @ 14df1ea80

FRetargetChainMapping * __thiscall
FRetargetChainMapping::operator=(FRetargetChainMapping *this,FRetargetChainMapping *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  UIKRigDefinition *pUVar4;
  
  if (this != param_1) {
    iVar2 = (this->ChainMap).ArrayMax;
    piVar1 = &(this->ChainMap).ArrayMax;
    _Src = (param_1->ChainMap).AllocatorInstance.Data;
    iVar3 = (param_1->ChainMap).ArrayNum;
    (this->ChainMap).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->ChainMap).AllocatorInstance.Data,_Src,(longlong)iVar3 << 4);
      }
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->SourceIKRig).field0_0x0.DebugPtr, pUVar4 != (UIKRigDefinition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->SourceIKRig).field0_0x0 = (param_1->SourceIKRig).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->TargetIKRig).field0_0x0.DebugPtr, pUVar4 != (UIKRigDefinition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->TargetIKRig).field0_0x0 = (param_1->TargetIKRig).field0_0x0;
  return this;
}

// operator() @ 14df1fe20

bool __thiscall
`FRetargetChainMapping::SortMapping'::__l2::<lambda_1>::operator()
          (void *this,FRetargetChainPair *param_1,FRetargetChainPair *param_2)

{
  longlong lVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  FName *pFVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  FName *pFVar13;
  
  lVar1 = *(longlong *)(*(longlong *)this + 0x18);
  pFVar2 = *(FName **)(lVar1 + 0xf0);
  pFVar13 = pFVar2 + (longlong)*(int *)(lVar1 + 0xf8) * 6;
  if (pFVar2 != pFVar13) {
    pFVar9 = pFVar2;
    do {
      if (param_1->TargetChainName == *pFVar9) {
        lVar10 = ((longlong)pFVar9 - (longlong)pFVar2) / 6 +
                 ((longlong)pFVar9 - (longlong)pFVar2 >> 0x3f);
        uVar11 = (int)(lVar10 >> 3) - (int)(lVar10 >> 0x3f);
        goto LAB_14df1fe84;
      }
      pFVar9 = pFVar9 + 6;
    } while (pFVar9 != pFVar13);
  }
  uVar12 = 0xffffffff;
  uVar11 = 0xffffffff;
  if (pFVar2 != pFVar13) {
LAB_14df1fe84:
    uVar12 = uVar11;
    pFVar9 = pFVar2;
    do {
      if (param_2->TargetChainName == *pFVar9) {
        lVar10 = ((longlong)pFVar9 - (longlong)pFVar2) / 6 +
                 ((longlong)pFVar9 - (longlong)pFVar2 >> 0x3f);
        uVar11 = (int)(lVar10 >> 3) - (int)(lVar10 >> 0x3f);
        goto LAB_14df1fe9e;
      }
      pFVar9 = pFVar9 + 6;
    } while (pFVar9 != pFVar13);
  }
  uVar11 = 0xffffffff;
LAB_14df1fe9e:
  if ((-1 < (int)uVar12) && (-1 < (int)uVar11)) {
    uVar6 = 0;
    if ((int)uVar12 < *(int *)(lVar1 + 0xf8)) {
      uVar6 = ~uVar12 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    iVar7 = FIKRigSkeleton::GetBoneIndexFromName
                      ((FIKRigSkeleton *)(lVar1 + 0x58),
                       *(FName *)((longlong)(int)uVar12 * 0x30 + 8 + *(longlong *)(lVar1 + 0xf0)));
    uVar6 = 0;
    if ((int)uVar11 < *(int *)(lVar1 + 0xf8)) {
      uVar6 = ~uVar11 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    iVar8 = FIKRigSkeleton::GetBoneIndexFromName
                      ((FIKRigSkeleton *)(lVar1 + 0x58),
                       *(FName *)((longlong)(int)uVar11 * 0x30 + 8 + *(longlong *)(lVar1 + 0xf0)));
    if (iVar7 == iVar8) {
      uVar6 = 0;
      if ((int)uVar12 < *(int *)(lVar1 + 0xf8)) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      lVar10 = *(longlong *)(lVar1 + 0xf0);
      uVar6 = 0;
      if ((int)uVar11 < *(int *)(lVar1 + 0xf8)) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      iVar7 = ::FName::Compare((FName *)((longlong)(int)uVar12 * 0x30 + lVar10),
                               (FName *)(*(longlong *)(lVar1 + 0xf0) + (longlong)(int)uVar11 * 0x30)
                              );
      bVar4 = SUB41((uint)iVar7 >> 0x1f,0);
    }
    else {
      bVar4 = iVar7 < iVar8;
    }
    return bVar4;
  }
  return (int)uVar12 < (int)uVar11;
}

// AutoMapChains @ 14df26790

void __thiscall
FRetargetChainMapping::AutoMapChains
          (FRetargetChainMapping *this,EAutoMapChainType param_1,bool param_2)

{
  uint uVar1;
  UIKRigDefinition *pUVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  FString *pFVar12;
  FName FVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  FName *pFVar18;
  ulonglong uVar19;
  FName *this_00;
  int iVar20;
  float fVar21;
  float fVar22;
  FIdentityFunctor local_res8;
  undefined1 local_res20 [8];
  FScriptContainerElement *local_108;
  TArray<FName,TSizedDefaultAllocator<32>_> local_e8;
  FRetargetChainMapping *local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0 [6];
  
  ReinitializeWithIKRigs
            (this,(this->SourceIKRig).field0_0x0.DebugPtr,(this->TargetIKRig).field0_0x0.DebugPtr);
  pUVar2 = (this->SourceIKRig).field0_0x0.DebugPtr;
  local_108 = (FScriptContainerElement *)0x0;
  if (pUVar2 == (UIKRigDefinition *)0x0) {
    iVar20 = 0;
  }
  else {
    UIKRigDefinition::GetRetargetChainNames(pUVar2,&local_e8);
    local_108 = local_e8.AllocatorInstance.Data;
    iVar20 = local_e8.ArrayNum;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
  }
  fVar5 = __real_3e4ccccd;
  fVar4 = __real_3f800000;
  uVar1 = (this->ChainMap).ArrayNum;
  uVar11 = (ulonglong)(int)uVar1;
  this_00 = (FName *)(this->ChainMap).AllocatorInstance.Data;
  pFVar18 = this_00 + uVar11 * 2;
  do {
    if ((this->ChainMap).ArrayNum != (int)uVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FRetargetChainPair,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (this_00 == pFVar18) {
      pUVar2 = (this->TargetIKRig).field0_0x0.DebugPtr;
      if ((pUVar2 != (UIKRigDefinition *)0x0) && (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)) {
        local_res8 = SUB81(this,0);
        local_d8 = this;
        AlgoImpl::
        IntroSortInternal<FRetargetChainPair,int,FIdentityFunctor,TDereferenceWrapper<FRetargetChainPair,_FRetargetChainMapping::SortMapping_::__l2::<lambda_1>_>_>
                  ((FRetargetChainPair *)(this->ChainMap).AllocatorInstance.Data,
                   (this->ChainMap).ArrayNum,local_res8,(<lambda_1> *)&local_d8);
      }
      if (local_108 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108);
      }
      return;
    }
    if ((this_00[1] == (FName)0x0) || (param_2)) {
      uVar16 = 0xffffffff;
      uVar11 = 0xffffffffffffffff;
      if (param_1 == Exact) {
        uVar19 = 0;
        this_00[1].ComparisonIndex = 0;
        this_00[1].Number = 0;
        uVar11 = uVar19;
        if (0 < iVar20) {
          do {
            uVar17 = (uint)uVar19;
            if (((int)uVar17 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(FName *)(local_108 + uVar11 * 8) == *this_00) goto LAB_14df26a64;
            uVar19 = (ulonglong)(uVar17 + 1);
            uVar11 = uVar11 + 1;
          } while ((int)(uVar17 + 1) < iVar20);
        }
      }
      else if (param_1 == Fuzzy) {
        pFVar12 = ::FName::ToString(this_00,&local_b0);
        ::FString::ToLower(pFVar12,&local_c0);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        uVar15 = 0;
        uVar19 = 0;
        fVar22 = fVar5;
        uVar17 = uVar16;
        if (0 < iVar20) {
          do {
            if (((int)uVar15 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar12 = ::FName::ToString((FName *)(local_108 + (ulonglong)uVar15 * 8),local_a0);
            ::FString::ToLower(pFVar12,&local_d0);
            if (local_a0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0[0].Data.AllocatorInstance.Data);
            }
            iVar6 = local_c0.Data.ArrayNum;
            iVar10 = local_d0.Data.ArrayNum;
            iVar9 = Algo::LevenshteinDistance<FString,FString>(&local_c0,&local_d0);
            iVar14 = iVar10 + -1;
            if (iVar10 == 0) {
              iVar14 = 0;
            }
            iVar10 = iVar6 + -1;
            if (iVar6 == 0) {
              iVar10 = 0;
            }
            fVar21 = (float)(iVar14 + iVar10);
            if ((float)(iVar14 + iVar10) <= fVar4) {
              fVar21 = fVar4;
            }
            fVar21 = fVar4 - (float)iVar9 / fVar21;
            uVar17 = uVar15;
            uVar7 = uVar19;
            if (fVar21 <= fVar22) {
              uVar17 = uVar16;
              uVar7 = uVar11;
              fVar21 = fVar22;
            }
            uVar11 = uVar7;
            if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data.AllocatorInstance.Data);
            }
            uVar15 = uVar15 + 1;
            uVar19 = uVar19 + 1;
            fVar22 = fVar21;
            uVar16 = uVar17;
          } while ((int)uVar15 < iVar20);
        }
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        if ((-1 < (int)uVar17) && ((int)uVar17 < iVar20)) {
LAB_14df26a64:
          if (((int)uVar17 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar13 = *(FName *)(local_108 + uVar11 * 8);
          goto LAB_14df26aa5;
        }
      }
      else if (param_1 == Clear) {
        FVar13.ComparisonIndex.Value = 0;
        FVar13.Number = 0;
LAB_14df26aa5:
        this_00[1] = FVar13;
      }
      else {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetChainMapping.cpp"
                           ,0x109,L"");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    uVar11 = (ulonglong)uVar1;
    this_00 = this_00 + 2;
  } while( true );
}

// FindChainPair @ 14df335b0

FRetargetChainPair * __thiscall
FRetargetChainMapping::FindChainPair
          (FRetargetChainMapping *this,FName *param_1,ERetargetSourceOrTarget param_2)

{
  int iVar1;
  FRetargetChainPair *pFVar2;
  FRetargetChainPair *pFVar3;
  FRetargetChainPair *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ChainMap).ArrayNum;
  pFVar3 = (FRetargetChainPair *)(this->ChainMap).AllocatorInstance.Data;
  pFVar4 = pFVar3 + iVar1;
  while( true ) {
    if ((this->ChainMap).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRetargetChainPair_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) {
      return (FRetargetChainPair *)0x0;
    }
    pFVar2 = (FRetargetChainPair *)&pFVar3->SourceChainName;
    if (param_2 != Source) {
      pFVar2 = pFVar3;
    }
    if (pFVar2->TargetChainName == *param_1) break;
    pFVar3 = pFVar3 + 1;
  }
  return pFVar3;
}

// FindChainPairConst @ 14df33640

FRetargetChainPair * __thiscall
FRetargetChainMapping::FindChainPairConst
          (FRetargetChainMapping *this,FName *param_1,ERetargetSourceOrTarget param_2)

{
  int iVar1;
  FRetargetChainPair *pFVar2;
  FRetargetChainPair *pFVar3;
  FRetargetChainPair *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ChainMap).ArrayNum;
  pFVar3 = (FRetargetChainPair *)(this->ChainMap).AllocatorInstance.Data;
  pFVar4 = pFVar3 + iVar1;
  while( true ) {
    if ((this->ChainMap).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRetargetChainPair_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) {
      return (FRetargetChainPair *)0x0;
    }
    pFVar2 = (FRetargetChainPair *)&pFVar3->SourceChainName;
    if (param_2 != Source) {
      pFVar2 = pFVar3;
    }
    if (pFVar2->TargetChainName == *param_1) break;
    pFVar3 = pFVar3 + 1;
  }
  return pFVar3;
}

// GetChainMappedTo @ 14df36030

FName __thiscall
FRetargetChainMapping::GetChainMappedTo
          (FRetargetChainMapping *this,FName param_1,ERetargetSourceOrTarget param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined7 in_register_00000081;
  char in_R9B;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ChainMap).ArrayNum;
  pFVar5 = (this->ChainMap).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ChainMap).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRetargetChainPair_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar4) goto LAB_14df360a4;
    pFVar2 = pFVar5 + 8;
    if (in_R9B != '\0') {
      pFVar2 = pFVar5;
    }
    if (*(longlong *)pFVar2 == CONCAT71(in_register_00000081,param_2)) break;
    pFVar5 = pFVar5 + 0x10;
  }
  if (pFVar5 == (FScriptContainerElement *)0x0) {
LAB_14df360a4:
    lVar3 = 0;
  }
  else {
    if (in_R9B != '\0') {
      pFVar5 = pFVar5 + 8;
    }
    lVar3 = *(longlong *)pFVar5;
  }
  *(longlong *)param_1 = lVar3;
  return param_1;
}

// GetChainNames @ 14df360d0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FRetargetChainMapping::GetChainNames
          (FRetargetChainMapping *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          ERetargetSourceOrTarget param_1)

{
  UIKRigDefinition *this_00;
  longlong lVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  lVar1 = 0x10;
  if (param_1 != Source) {
    lVar1 = 0x18;
  }
  this_00 = *(UIKRigDefinition **)((longlong)&(this->ChainMap).AllocatorInstance.Data + lVar1);
  if (this_00 == (UIKRigDefinition *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UIKRigDefinition::GetRetargetChainNames(this_00,&local_18);
  (__return_storage_ptr__->AllocatorInstance).Data = local_18.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = local_18.ArrayNum;
  __return_storage_ptr__->ArrayMax = local_18.ArrayMax;
  return __return_storage_ptr__;
}

// GetChainPairs @ 14df36140

TArray<FRetargetChainPair,TSizedDefaultAllocator<32>_> * __thiscall
FRetargetChainMapping::GetChainPairs(FRetargetChainMapping *this)

{
  return &this->ChainMap;
}

// GetChainPairs @ 14df36150

TArray<FRetargetChainPair,TSizedDefaultAllocator<32>_> * __thiscall
FRetargetChainMapping::GetChainPairs(FRetargetChainMapping *this)

{
  return &this->ChainMap;
}

// GetIKRig @ 14df387f0

UIKRigDefinition * __thiscall
FRetargetChainMapping::GetIKRig(FRetargetChainMapping *this,ERetargetSourceOrTarget param_1)

{
  longlong lVar1;
  
  lVar1 = 0x10;
  if (param_1 != Source) {
    lVar1 = 0x18;
  }
  return *(UIKRigDefinition **)((longlong)&(this->ChainMap).AllocatorInstance.Data + lVar1);
}

// HasAnyChains @ 14df414e0

bool __thiscall FRetargetChainMapping::HasAnyChains(FRetargetChainMapping *this)

{
  return (this->ChainMap).ArrayNum != 0;
}

// HasChain @ 14df414f0

bool __thiscall
FRetargetChainMapping::HasChain
          (FRetargetChainMapping *this,FName *param_1,ERetargetSourceOrTarget param_2)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar2 = (FName *)(this->ChainMap).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->ChainMap).ArrayNum * 2;
  if (param_2 == Target) {
    if (pFVar2 != pFVar1) {
      while (*pFVar2 != *param_1) {
        pFVar2 = pFVar2 + 2;
        if (pFVar2 == pFVar1) {
          return false;
        }
      }
      goto LAB_14df41541;
    }
  }
  else {
    for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 2) {
      if (pFVar2[1] == *param_1) goto LAB_14df41541;
    }
  }
  pFVar2 = (FName *)0x0;
LAB_14df41541:
  return pFVar2 != (FName *)0x0;
}

// IsReady @ 14df48a80

bool __thiscall FRetargetChainMapping::IsReady(FRetargetChainMapping *this)

{
  if ((((this->SourceIKRig).field0_0x0.DebugPtr != (UIKRigDefinition *)0x0) &&
      ((this->TargetIKRig).field0_0x0.DebugPtr != (UIKRigDefinition *)0x0)) &&
     ((this->ChainMap).ArrayNum != 0)) {
    return true;
  }
  return false;
}

// LoadFromDeprecatedChainSettings @ 14df48ae0

void __thiscall
FRetargetChainMapping::LoadFromDeprecatedChainSettings
          (FRetargetChainMapping *this,
          TArray<URetargetChainSettings_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  
  piVar1 = &(this->ChainMap).ArrayMax;
  (this->ChainMap).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<URetargetChainSettings_*_const,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    local_28 = *(undefined8 *)(*(longlong *)pFVar8 + 0x30);
    uStack_20 = *(undefined8 *)(*(longlong *)pFVar8 + 0x28);
    pFVar4 = (this->ChainMap).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)*piVar1 * 0x10)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->ChainMap).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,(ForAnyElementType *)this,piVar1);
    }
    (this->ChainMap).ArrayNum = iVar7 + 1;
    pFVar8 = pFVar8 + 8;
    pFVar4 = (this->ChainMap).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar4 = local_28;
    *(undefined8 *)(pFVar4 + 8) = uStack_20;
  }
  return;
}

// ReinitializeWithIKRigs @ 14df4e150

void __thiscall
FRetargetChainMapping::ReinitializeWithIKRigs
          (FRetargetChainMapping *this,UIKRigDefinition *param_1,UIKRigDefinition *param_2)

{
  int *piVar1;
  UIKRigDefinition *pUVar2;
  code *pcVar3;
  byte bVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  byte bVar18;
  ulonglong uVar19;
  bool bVar20;
  FRetargetChainMapping *local_res8;
  FScriptContainerElement *local_res10;
  undefined1 local_res18 [8];
  FScriptContainerElement *local_res20;
  FRetargetChainMapping *local_88;
  TArray<FName,TSizedDefaultAllocator<32>_> local_80;
  longlong local_70;
  longlong lStack_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_60 [2];
  
  uVar10 = 0;
  local_res8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UIKRigDefinition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SourceIKRig).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UIKRigDefinition *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->TargetIKRig).field0_0x0.DebugPtr = param_2;
  if ((((this->ChainMap).ArrayNum != 0) &&
      ((((pUVar2 = (this->SourceIKRig).field0_0x0.DebugPtr, pUVar2 == (UIKRigDefinition *)0x0 ||
         (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) ||
        (pUVar2 = (this->TargetIKRig).field0_0x0.DebugPtr, pUVar2 == (UIKRigDefinition *)0x0)) ||
       (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)))) ||
     ((pUVar2 = (this->TargetIKRig).field0_0x0.DebugPtr, pUVar2 == (UIKRigDefinition *)0x0 ||
      (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)))) {
    return;
  }
  iVar14 = (this->ChainMap).ArrayNum;
  lVar5 = (longlong)iVar14;
  if (iVar14 != 0) {
    pFVar16 = (this->ChainMap).AllocatorInstance.Data;
    bVar20 = *(longlong *)pFVar16 != 0;
    uVar15 = uVar10;
    uVar19 = uVar10;
    do {
      iVar14 = (int)uVar15;
      uVar10 = uVar10 + 1;
      uVar15 = (ulonglong)(iVar14 + 1);
      if ((longlong)uVar10 < lVar5) {
        pFVar12 = pFVar16 + uVar10 * 0x10;
        do {
          if (bVar20 != (*(longlong *)pFVar12 != 0)) break;
          uVar15 = (ulonglong)((int)uVar15 + 1);
          uVar10 = uVar10 + 1;
          pFVar12 = pFVar12 + 0x10;
        } while ((longlong)uVar10 < lVar5);
      }
      iVar17 = (int)uVar15 - iVar14;
      if (bVar20 != false) {
        iVar13 = (int)uVar19;
        if (iVar13 != iVar14) {
          memmove(pFVar16 + (longlong)iVar13 * 0x10,pFVar16 + (longlong)iVar14 * 0x10,
                  (longlong)iVar17 << 4);
        }
        uVar19 = (ulonglong)(uint)(iVar13 + iVar17);
      }
      bVar20 = (bool)(bVar20 ^ 1);
    } while ((longlong)uVar10 < lVar5);
    (local_res8->ChainMap).ArrayNum = (int)uVar19;
    this = local_res8;
  }
  iVar17 = 0;
  UIKRigDefinition::GetRetargetChainNames((this->TargetIKRig).field0_0x0.DebugPtr,&local_80);
  iVar14 = (this->ChainMap).ArrayNum;
  lVar5 = (longlong)iVar14;
  local_res20 = local_80.AllocatorInstance.Data;
  if (iVar14 != 0) {
    pFVar16 = (this->ChainMap).AllocatorInstance.Data;
    if (local_80.AllocatorInstance.Data !=
        local_80.AllocatorInstance.Data + (longlong)local_80.ArrayNum * 8) {
      FVar8.Data = local_80.AllocatorInstance.Data;
      do {
        if (*(longlong *)FVar8.Data == *(longlong *)pFVar16) {
          bVar18 = 1;
          goto LAB_14df4e325;
        }
        FVar8.Data = FVar8.Data + 8;
      } while (FVar8.Data != local_80.AllocatorInstance.Data + (longlong)local_80.ArrayNum * 8);
    }
    bVar18 = 0;
LAB_14df4e325:
    lVar11 = 0;
    iVar14 = iVar17;
    local_res10 = pFVar16;
    do {
      lVar11 = lVar11 + 1;
      iVar13 = iVar14 + 1;
      if (lVar11 < lVar5) {
        pFVar12 = pFVar16 + lVar11 * 0x10;
        do {
          if (local_res20 != local_res20 + (longlong)local_80.ArrayNum * 8) {
            pFVar6 = local_res20;
            do {
              if (*(longlong *)pFVar6 == *(longlong *)pFVar12) {
                bVar4 = 1;
                goto LAB_14df4e374;
              }
              pFVar6 = pFVar6 + 8;
            } while (pFVar6 != local_res20 + (longlong)local_80.ArrayNum * 8);
          }
          bVar4 = 0;
LAB_14df4e374:
          if (bVar18 != bVar4) break;
          iVar13 = iVar13 + 1;
          lVar11 = lVar11 + 1;
          pFVar12 = pFVar12 + 0x10;
        } while (lVar11 < lVar5);
      }
      if (bVar18 != 0) {
        if (iVar17 != iVar14) {
          memmove(pFVar16 + (longlong)iVar17 * 0x10,pFVar16 + (longlong)iVar14 * 0x10,
                  (longlong)(iVar13 - iVar14) << 4);
          local_res20 = local_80.AllocatorInstance.Data;
        }
        iVar17 = iVar17 + (iVar13 - iVar14);
      }
      bVar18 = bVar18 ^ 1;
      iVar14 = iVar13;
    } while (lVar11 < lVar5);
    (local_res8->ChainMap).ArrayNum = iVar17;
    this = local_res8;
  }
  iVar14 = local_80.ArrayNum;
  pFVar16 = local_res20 + (longlong)local_80.ArrayNum * 8;
LAB_14df4e3e0:
  do {
    if (local_80.ArrayNum != iVar14) {
      local_res8 = (FRetargetChainMapping *)((ulonglong)local_res8 & 0xffffffffffffff00);
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (local_res20 == pFVar16) {
      pUVar2 = (this->SourceIKRig).field0_0x0.DebugPtr;
      if (pUVar2 == (UIKRigDefinition *)0x0) {
        iVar14 = 0;
        pFVar16 = (FScriptContainerElement *)0x0;
      }
      else {
        pTVar7 = UIKRigDefinition::GetRetargetChainNames(pUVar2,local_60);
        pFVar16 = (pTVar7->AllocatorInstance).Data;
        (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar14 = pTVar7->ArrayNum;
        pTVar7->ArrayNum = 0;
        pTVar7->ArrayMax = 0;
        if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].AllocatorInstance.Data);
        }
      }
      iVar17 = (this->ChainMap).ArrayNum;
      pFVar12 = (this->ChainMap).AllocatorInstance.Data;
      pFVar6 = pFVar12 + (longlong)iVar17 * 0x10;
      do {
        if ((this->ChainMap).ArrayNum != iVar17) {
          `TCheckedPointerIterator<FRetargetChainPair,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (pFVar12 == pFVar6) {
          pUVar2 = (this->TargetIKRig).field0_0x0.DebugPtr;
          if ((pUVar2 != (UIKRigDefinition *)0x0) && (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)) {
            local_88 = this;
            AlgoImpl::
            IntroSortInternal<FRetargetChainPair,int,FIdentityFunctor,TDereferenceWrapper<FRetargetChainPair,_FRetargetChainMapping::SortMapping_::__l2::<lambda_1>_>_>
                      ((FRetargetChainPair *)(this->ChainMap).AllocatorInstance.Data,
                       (this->ChainMap).ArrayNum,local_res8._0_1_,(<lambda_1> *)&local_88);
          }
          if (pFVar16 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar16);
          }
          if (local_80.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_80.AllocatorInstance.Data);
          return;
        }
        if (pFVar16 != pFVar16 + (longlong)iVar14 * 8) {
          pFVar9 = pFVar16;
          do {
            if (*(longlong *)pFVar9 == *(longlong *)(pFVar12 + 8)) goto LAB_14df4e5f6;
            pFVar9 = pFVar9 + 8;
          } while (pFVar9 != pFVar16 + (longlong)iVar14 * 8);
        }
        *(undefined8 *)(pFVar12 + 8) = 0;
LAB_14df4e5f6:
        pFVar12 = pFVar12 + 0x10;
      } while( true );
    }
    pFVar12 = (this->ChainMap).AllocatorInstance.Data;
    lVar5 = *(longlong *)local_res20;
    pFVar6 = pFVar12 + (longlong)(this->ChainMap).ArrayNum * 0x10;
    if (pFVar12 != pFVar6) {
      do {
        if (*(longlong *)pFVar12 == lVar5) goto LAB_14df4e557;
        pFVar12 = pFVar12 + 0x10;
      } while (pFVar12 != pFVar6);
      pFVar12 = (this->ChainMap).AllocatorInstance.Data;
    }
    iVar17 = (this->ChainMap).ArrayNum;
    pFVar6 = pFVar12 + (longlong)iVar17 * 0x10;
    while( true ) {
      if ((this->ChainMap).ArrayNum != iVar17) {
        local_res10 = (FScriptContainerElement *)((ulonglong)local_res10 & 0xffffffffffffff00);
        `TCheckedPointerIterator<FRetargetChainPair_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      if (pFVar12 == pFVar6) break;
      if (*(longlong *)pFVar12 == lVar5) goto LAB_14df4e486;
      pFVar12 = pFVar12 + 0x10;
    }
    pFVar12 = (this->ChainMap).AllocatorInstance.Data;
    lStack_68 = 0;
    local_70 = lVar5;
    if (((pFVar12 <= (FScriptContainerElement *)&local_70) &&
        ((FScriptContainerElement *)&local_70 < pFVar12 + (longlong)(this->ChainMap).ArrayMax * 0x10
        )) && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar20)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar17 = (this->ChainMap).ArrayNum;
    piVar1 = &(this->ChainMap).ArrayMax;
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,(ForAnyElementType *)this,piVar1);
      (this->ChainMap).ArrayNum = iVar17;
    }
    (this->ChainMap).ArrayNum = iVar17 + 1;
    pFVar12 = (this->ChainMap).AllocatorInstance.Data + (longlong)iVar17 * 0x10;
    *(longlong *)pFVar12 = local_70;
    *(longlong *)(pFVar12 + 8) = lStack_68;
LAB_14df4e557:
    local_res20 = local_res20 + 8;
  } while( true );
LAB_14df4e486:
  *(longlong *)(pFVar12 + 8) = 0;
  local_res20 = local_res20 + 8;
  goto LAB_14df4e3e0;
}

// SetChainMapping @ 14df54330

void __thiscall
FRetargetChainMapping::SetChainMapping(FRetargetChainMapping *this,FName param_1,FName param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  FName *pFVar6;
  undefined1 local_res8 [8];
  FName local_28;
  FName FStack_20;
  
  iVar4 = (this->ChainMap).ArrayNum;
  pFVar6 = (FName *)(this->ChainMap).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar4 * 2;
  while( true ) {
    if ((this->ChainMap).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRetargetChainPair_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar5) break;
    if (*pFVar6 == param_1) {
      pFVar6[1] = param_2;
      return;
    }
    pFVar6 = pFVar6 + 2;
  }
  pFVar6 = (FName *)(this->ChainMap).AllocatorInstance.Data;
  local_28 = param_1;
  FStack_20 = param_2;
  if (((pFVar6 <= &local_28) && (&local_28 < pFVar6 + (longlong)(this->ChainMap).ArrayMax * 2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (this->ChainMap).ArrayNum;
  piVar1 = &(this->ChainMap).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)this,piVar1);
  }
  (this->ChainMap).ArrayNum = iVar4 + 1;
  pFVar6 = (FName *)((this->ChainMap).AllocatorInstance.Data + (longlong)iVar4 * 0x10);
  *pFVar6 = local_28;
  pFVar6[1] = FStack_20;
  return;
}

// SortMapping @ 14df58410

void __thiscall FRetargetChainMapping::SortMapping(FRetargetChainMapping *this)

{
  UIKRigDefinition *pUVar1;
  FIdentityFunctor FVar2;
  FRetargetChainMapping *local_res8 [4];
  
  pUVar1 = (this->TargetIKRig).field0_0x0.DebugPtr;
  if ((pUVar1 != (UIKRigDefinition *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    local_res8[0]._0_1_ = SUB81(this,0);
    FVar2 = local_res8[0]._0_1_;
    local_res8[0] = this;
    AlgoImpl::
    IntroSortInternal<FRetargetChainPair,int,FIdentityFunctor,TDereferenceWrapper<FRetargetChainPair,_FRetargetChainMapping::SortMapping_::__l2::<lambda_1>_>_>
              ((FRetargetChainPair *)(this->ChainMap).AllocatorInstance.Data,
               (this->ChainMap).ArrayNum,FVar2,(<lambda_1> *)local_res8);
  }
  return;
}

