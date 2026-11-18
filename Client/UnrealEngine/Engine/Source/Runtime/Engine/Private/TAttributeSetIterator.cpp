// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// GetHighestBoneWeightedValue @ 14755c080

FFloatAnimationAttribute * __thiscall
UE::Anim::FAttributeBlendData::TAttributeSetIterator<FFloatAnimationAttribute>::
GetHighestBoneWeightedValue(TAttributeSetIterator<FFloatAnimationAttribute> *this)

{
  int iVar1;
  int iVar2;
  FAttributeSet *pFVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FFloatAnimationAttribute *pFVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 local_res8 [16];
  
  if (((this->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.HasBoneWeights()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                         ,0xd0,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FFloatAnimationAttribute *)(*pcVar5)();
    return pFVar8;
  }
  pFVar3 = this->Collection;
  iVar11 = -1;
  piVar10 = (pFVar3->WeightIndices).AllocatorInstance.Data;
  iVar1 = (pFVar3->WeightIndices).ArrayNum;
  piVar4 = piVar10 + iVar1;
  fVar13 = __real_bf800000;
  while( true ) {
    if ((pFVar3->WeightIndices).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (piVar10 == piVar4) break;
    iVar2 = *piVar10;
    fVar12 = GetBoneWeight(this->Data,iVar2,this->Collection->Identifier->Index);
    if (fVar12 <= fVar13) {
      iVar2 = iVar11;
      fVar12 = fVar13;
    }
    fVar13 = fVar12;
    iVar11 = iVar2;
    piVar10 = piVar10 + 1;
  }
  if ((iVar11 == -1) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6899413482651779293>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                         ,0xdd,"HighestIndex != INDEX_NONE"), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FFloatAnimationAttribute *)(*pcVar5)();
    return pFVar8;
  }
  pFVar3 = this->Collection;
  piVar4 = (pFVar3->WeightIndices).AllocatorInstance.Data;
  piVar10 = piVar4;
  do {
    if (piVar10 == piVar4 + (pFVar3->WeightIndices).ArrayNum) {
      uVar9 = 0xffffffff;
LAB_14755c1a5:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FFloatAnimationAttribute *)(*pcVar5)();
        return pFVar8;
      }
LAB_14755c1db:
      return (FFloatAnimationAttribute *)(pFVar3->DataPtrs).AllocatorInstance.Data[(int)uVar9];
    }
    if (*piVar10 == iVar11) {
      uVar9 = (uint)((longlong)piVar10 - (longlong)piVar4 >> 2);
      uVar7 = 0;
      if ((int)uVar9 < (pFVar3->DataPtrs).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 != 0) goto LAB_14755c1db;
      goto LAB_14755c1a5;
    }
    piVar10 = piVar10 + 1;
  } while( true );
}

// GetHighestBoneWeightedValue @ 14755c230

FIntegerAnimationAttribute * __thiscall
UE::Anim::FAttributeBlendData::TAttributeSetIterator<FIntegerAnimationAttribute>::
GetHighestBoneWeightedValue(TAttributeSetIterator<FIntegerAnimationAttribute> *this)

{
  int iVar1;
  int iVar2;
  FAttributeSet *pFVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FIntegerAnimationAttribute *pFVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 local_res8 [16];
  
  if (((this->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.HasBoneWeights()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                         ,0xd0,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntegerAnimationAttribute *)(*pcVar5)();
    return pFVar8;
  }
  pFVar3 = this->Collection;
  iVar11 = -1;
  piVar10 = (pFVar3->WeightIndices).AllocatorInstance.Data;
  iVar1 = (pFVar3->WeightIndices).ArrayNum;
  piVar4 = piVar10 + iVar1;
  fVar13 = __real_bf800000;
  while( true ) {
    if ((pFVar3->WeightIndices).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (piVar10 == piVar4) break;
    iVar2 = *piVar10;
    fVar12 = GetBoneWeight(this->Data,iVar2,this->Collection->Identifier->Index);
    if (fVar12 <= fVar13) {
      iVar2 = iVar11;
      fVar12 = fVar13;
    }
    fVar13 = fVar12;
    iVar11 = iVar2;
    piVar10 = piVar10 + 1;
  }
  if ((iVar11 == -1) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6899413482651779293>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                         ,0xdd,"HighestIndex != INDEX_NONE"), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntegerAnimationAttribute *)(*pcVar5)();
    return pFVar8;
  }
  pFVar3 = this->Collection;
  piVar4 = (pFVar3->WeightIndices).AllocatorInstance.Data;
  piVar10 = piVar4;
  do {
    if (piVar10 == piVar4 + (pFVar3->WeightIndices).ArrayNum) {
      uVar9 = 0xffffffff;
LAB_14755c355:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FIntegerAnimationAttribute *)(*pcVar5)();
        return pFVar8;
      }
LAB_14755c38b:
      return (FIntegerAnimationAttribute *)(pFVar3->DataPtrs).AllocatorInstance.Data[(int)uVar9];
    }
    if (*piVar10 == iVar11) {
      uVar9 = (uint)((longlong)piVar10 - (longlong)piVar4 >> 2);
      uVar7 = 0;
      if ((int)uVar9 < (pFVar3->DataPtrs).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 != 0) goto LAB_14755c38b;
      goto LAB_14755c355;
    }
    piVar10 = piVar10 + 1;
  } while( true );
}

// GetHighestBoneWeightedValue @ 14755c3e0

FQuaternionAnimationAttribute * __thiscall
UE::Anim::FAttributeBlendData::TAttributeSetIterator<FQuaternionAnimationAttribute>::
GetHighestBoneWeightedValue(TAttributeSetIterator<FQuaternionAnimationAttribute> *this)

{
  int iVar1;
  int iVar2;
  FAttributeSet *pFVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FQuaternionAnimationAttribute *pFVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 local_res8 [16];
  
  if (((this->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.HasBoneWeights()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                         ,0xd0,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FQuaternionAnimationAttribute *)(*pcVar5)();
    return pFVar8;
  }
  pFVar3 = this->Collection;
  iVar11 = -1;
  piVar10 = (pFVar3->WeightIndices).AllocatorInstance.Data;
  iVar1 = (pFVar3->WeightIndices).ArrayNum;
  piVar4 = piVar10 + iVar1;
  fVar13 = __real_bf800000;
  while( true ) {
    if ((pFVar3->WeightIndices).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (piVar10 == piVar4) break;
    iVar2 = *piVar10;
    fVar12 = GetBoneWeight(this->Data,iVar2,this->Collection->Identifier->Index);
    if (fVar12 <= fVar13) {
      iVar2 = iVar11;
      fVar12 = fVar13;
    }
    fVar13 = fVar12;
    iVar11 = iVar2;
    piVar10 = piVar10 + 1;
  }
  if ((iVar11 == -1) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6899413482651779293>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                         ,0xdd,"HighestIndex != INDEX_NONE"), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FQuaternionAnimationAttribute *)(*pcVar5)();
    return pFVar8;
  }
  pFVar3 = this->Collection;
  piVar4 = (pFVar3->WeightIndices).AllocatorInstance.Data;
  piVar10 = piVar4;
  do {
    if (piVar10 == piVar4 + (pFVar3->WeightIndices).ArrayNum) {
      uVar9 = 0xffffffff;
LAB_14755c505:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FQuaternionAnimationAttribute *)(*pcVar5)();
        return pFVar8;
      }
LAB_14755c53b:
      return (FQuaternionAnimationAttribute *)(pFVar3->DataPtrs).AllocatorInstance.Data[(int)uVar9];
    }
    if (*piVar10 == iVar11) {
      uVar9 = (uint)((longlong)piVar10 - (longlong)piVar4 >> 2);
      uVar7 = 0;
      if ((int)uVar9 < (pFVar3->DataPtrs).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 != 0) goto LAB_14755c53b;
      goto LAB_14755c505;
    }
    piVar10 = piVar10 + 1;
  } while( true );
}

// GetHighestBoneWeightedValue @ 14755c590

FStringAnimationAttribute * __thiscall
UE::Anim::FAttributeBlendData::TAttributeSetIterator<FStringAnimationAttribute>::
GetHighestBoneWeightedValue(TAttributeSetIterator<FStringAnimationAttribute> *this)

{
  int iVar1;
  int iVar2;
  FAttributeSet *pFVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FStringAnimationAttribute *pFVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 local_res8 [16];
  
  if (((this->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.HasBoneWeights()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                         ,0xd0,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FStringAnimationAttribute *)(*pcVar5)();
    return pFVar8;
  }
  pFVar3 = this->Collection;
  iVar11 = -1;
  piVar10 = (pFVar3->WeightIndices).AllocatorInstance.Data;
  iVar1 = (pFVar3->WeightIndices).ArrayNum;
  piVar4 = piVar10 + iVar1;
  fVar13 = __real_bf800000;
  while( true ) {
    if ((pFVar3->WeightIndices).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (piVar10 == piVar4) break;
    iVar2 = *piVar10;
    fVar12 = GetBoneWeight(this->Data,iVar2,this->Collection->Identifier->Index);
    if (fVar12 <= fVar13) {
      iVar2 = iVar11;
      fVar12 = fVar13;
    }
    fVar13 = fVar12;
    iVar11 = iVar2;
    piVar10 = piVar10 + 1;
  }
  if ((iVar11 == -1) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6899413482651779293>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                         ,0xdd,"HighestIndex != INDEX_NONE"), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FStringAnimationAttribute *)(*pcVar5)();
    return pFVar8;
  }
  pFVar3 = this->Collection;
  piVar4 = (pFVar3->WeightIndices).AllocatorInstance.Data;
  piVar10 = piVar4;
  do {
    if (piVar10 == piVar4 + (pFVar3->WeightIndices).ArrayNum) {
      uVar9 = 0xffffffff;
LAB_14755c6b5:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FStringAnimationAttribute *)(*pcVar5)();
        return pFVar8;
      }
LAB_14755c6eb:
      return (FStringAnimationAttribute *)(pFVar3->DataPtrs).AllocatorInstance.Data[(int)uVar9];
    }
    if (*piVar10 == iVar11) {
      uVar9 = (uint)((longlong)piVar10 - (longlong)piVar4 >> 2);
      uVar7 = 0;
      if ((int)uVar9 < (pFVar3->DataPtrs).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 != 0) goto LAB_14755c6eb;
      goto LAB_14755c6b5;
    }
    piVar10 = piVar10 + 1;
  } while( true );
}

// GetHighestBoneWeightedValue @ 14755c740

FTransformAnimationAttribute * __thiscall
UE::Anim::FAttributeBlendData::TAttributeSetIterator<FTransformAnimationAttribute>::
GetHighestBoneWeightedValue(TAttributeSetIterator<FTransformAnimationAttribute> *this)

{
  int iVar1;
  int iVar2;
  FAttributeSet *pFVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FTransformAnimationAttribute *pFVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 local_res8 [16];
  
  if (((this->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.HasBoneWeights()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                         ,0xd0,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FTransformAnimationAttribute *)(*pcVar5)();
    return pFVar8;
  }
  pFVar3 = this->Collection;
  iVar11 = -1;
  piVar10 = (pFVar3->WeightIndices).AllocatorInstance.Data;
  iVar1 = (pFVar3->WeightIndices).ArrayNum;
  piVar4 = piVar10 + iVar1;
  fVar13 = __real_bf800000;
  while( true ) {
    if ((pFVar3->WeightIndices).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (piVar10 == piVar4) break;
    iVar2 = *piVar10;
    fVar12 = GetBoneWeight(this->Data,iVar2,this->Collection->Identifier->Index);
    if (fVar12 <= fVar13) {
      iVar2 = iVar11;
      fVar12 = fVar13;
    }
    fVar13 = fVar12;
    iVar11 = iVar2;
    piVar10 = piVar10 + 1;
  }
  if ((iVar11 == -1) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6899413482651779293>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                         ,0xdd,"HighestIndex != INDEX_NONE"), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FTransformAnimationAttribute *)(*pcVar5)();
    return pFVar8;
  }
  pFVar3 = this->Collection;
  piVar4 = (pFVar3->WeightIndices).AllocatorInstance.Data;
  piVar10 = piVar4;
  do {
    if (piVar10 == piVar4 + (pFVar3->WeightIndices).ArrayNum) {
      uVar9 = 0xffffffff;
LAB_14755c865:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FTransformAnimationAttribute *)(*pcVar5)();
        return pFVar8;
      }
LAB_14755c89b:
      return (FTransformAnimationAttribute *)(pFVar3->DataPtrs).AllocatorInstance.Data[(int)uVar9];
    }
    if (*piVar10 == iVar11) {
      uVar9 = (uint)((longlong)piVar10 - (longlong)piVar4 >> 2);
      uVar7 = 0;
      if ((int)uVar9 < (pFVar3->DataPtrs).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 != 0) goto LAB_14755c89b;
      goto LAB_14755c865;
    }
    piVar10 = piVar10 + 1;
  } while( true );
}

// GetHighestBoneWeightedValue @ 14755c8f0

FVectorAnimationAttribute * __thiscall
UE::Anim::FAttributeBlendData::TAttributeSetIterator<FVectorAnimationAttribute>::
GetHighestBoneWeightedValue(TAttributeSetIterator<FVectorAnimationAttribute> *this)

{
  int iVar1;
  int iVar2;
  FAttributeSet *pFVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FVectorAnimationAttribute *pFVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 local_res8 [16];
  
  if (((this->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.HasBoneWeights()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                         ,0xd0,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FVectorAnimationAttribute *)(*pcVar5)();
    return pFVar8;
  }
  pFVar3 = this->Collection;
  iVar11 = -1;
  piVar10 = (pFVar3->WeightIndices).AllocatorInstance.Data;
  iVar1 = (pFVar3->WeightIndices).ArrayNum;
  piVar4 = piVar10 + iVar1;
  fVar13 = __real_bf800000;
  while( true ) {
    if ((pFVar3->WeightIndices).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (piVar10 == piVar4) break;
    iVar2 = *piVar10;
    fVar12 = GetBoneWeight(this->Data,iVar2,this->Collection->Identifier->Index);
    if (fVar12 <= fVar13) {
      iVar2 = iVar11;
      fVar12 = fVar13;
    }
    fVar13 = fVar12;
    iVar11 = iVar2;
    piVar10 = piVar10 + 1;
  }
  if ((iVar11 == -1) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6899413482651779293>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                         ,0xdd,"HighestIndex != INDEX_NONE"), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FVectorAnimationAttribute *)(*pcVar5)();
    return pFVar8;
  }
  pFVar3 = this->Collection;
  piVar4 = (pFVar3->WeightIndices).AllocatorInstance.Data;
  piVar10 = piVar4;
  do {
    if (piVar10 == piVar4 + (pFVar3->WeightIndices).ArrayNum) {
      uVar9 = 0xffffffff;
LAB_14755ca15:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FVectorAnimationAttribute *)(*pcVar5)();
        return pFVar8;
      }
LAB_14755ca4b:
      return (FVectorAnimationAttribute *)(pFVar3->DataPtrs).AllocatorInstance.Data[(int)uVar9];
    }
    if (*piVar10 == iVar11) {
      uVar9 = (uint)((longlong)piVar10 - (longlong)piVar4 >> 2);
      uVar7 = 0;
      if ((int)uVar9 < (pFVar3->DataPtrs).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 != 0) goto LAB_14755ca4b;
      goto LAB_14755ca15;
    }
    piVar10 = piVar10 + 1;
  } while( true );
}

