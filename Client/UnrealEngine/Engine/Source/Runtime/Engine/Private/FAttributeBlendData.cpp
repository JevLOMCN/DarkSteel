// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 31

// ForEachAttributeSet<FFloatAnimationAttribute> @ 147527650

void __thiscall
UE::Anim::FAttributeBlendData::ForEachAttributeSet<FFloatAnimationAttribute>
          (FAttributeBlendData *this,
          TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FFloatAnimationAttribute>_&)>
          *param_1)

{
  int iVar1;
  FAttributeSet *pFVar2;
  FAttributeSet *pFVar3;
  undefined1 local_res8 [8];
  FAttributeBlendData *local_38;
  FAttributeSet *local_30;
  undefined4 local_28;
  
  iVar1 = (this->AttributeSets).ArrayNum;
  pFVar2 = (this->AttributeSets).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->AttributeSets).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Anim::FAttributeBlendData::FAttributeSet_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_28 = 0xffffffff;
    local_38 = this;
    local_30 = pFVar2;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_38);
    pFVar2 = pFVar2 + 1;
  }
  return;
}

// ForEachAttributeSet<FIntegerAnimationAttribute> @ 1475276e0

void __thiscall
UE::Anim::FAttributeBlendData::ForEachAttributeSet<FIntegerAnimationAttribute>
          (FAttributeBlendData *this,
          TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FIntegerAnimationAttribute>_&)>
          *param_1)

{
  int iVar1;
  FAttributeSet *pFVar2;
  FAttributeSet *pFVar3;
  undefined1 local_res8 [8];
  FAttributeBlendData *local_38;
  FAttributeSet *local_30;
  undefined4 local_28;
  
  iVar1 = (this->AttributeSets).ArrayNum;
  pFVar2 = (this->AttributeSets).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->AttributeSets).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Anim::FAttributeBlendData::FAttributeSet_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_28 = 0xffffffff;
    local_38 = this;
    local_30 = pFVar2;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_38);
    pFVar2 = pFVar2 + 1;
  }
  return;
}

// ForEachAttributeSet<FQuaternionAnimationAttribute> @ 147527770

void __thiscall
UE::Anim::FAttributeBlendData::ForEachAttributeSet<FQuaternionAnimationAttribute>
          (FAttributeBlendData *this,
          TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FQuaternionAnimationAttribute>_&)>
          *param_1)

{
  int iVar1;
  FAttributeSet *pFVar2;
  FAttributeSet *pFVar3;
  undefined1 local_res8 [8];
  FAttributeBlendData *local_38;
  FAttributeSet *local_30;
  undefined4 local_28;
  
  iVar1 = (this->AttributeSets).ArrayNum;
  pFVar2 = (this->AttributeSets).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->AttributeSets).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Anim::FAttributeBlendData::FAttributeSet_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_28 = 0xffffffff;
    local_38 = this;
    local_30 = pFVar2;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_38);
    pFVar2 = pFVar2 + 1;
  }
  return;
}

// ForEachAttributeSet<FStringAnimationAttribute> @ 147527800

void __thiscall
UE::Anim::FAttributeBlendData::ForEachAttributeSet<FStringAnimationAttribute>
          (FAttributeBlendData *this,
          TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FStringAnimationAttribute>_&)>
          *param_1)

{
  int iVar1;
  FAttributeSet *pFVar2;
  FAttributeSet *pFVar3;
  undefined1 local_res8 [8];
  FAttributeBlendData *local_38;
  FAttributeSet *local_30;
  undefined4 local_28;
  
  iVar1 = (this->AttributeSets).ArrayNum;
  pFVar2 = (this->AttributeSets).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->AttributeSets).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Anim::FAttributeBlendData::FAttributeSet_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_28 = 0xffffffff;
    local_38 = this;
    local_30 = pFVar2;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_38);
    pFVar2 = pFVar2 + 1;
  }
  return;
}

// ForEachAttributeSet<FTransformAnimationAttribute> @ 147527890

void __thiscall
UE::Anim::FAttributeBlendData::ForEachAttributeSet<FTransformAnimationAttribute>
          (FAttributeBlendData *this,
          TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FTransformAnimationAttribute>_&)>
          *param_1)

{
  int iVar1;
  FAttributeSet *pFVar2;
  FAttributeSet *pFVar3;
  undefined1 local_res8 [8];
  FAttributeBlendData *local_38;
  FAttributeSet *local_30;
  undefined4 local_28;
  
  iVar1 = (this->AttributeSets).ArrayNum;
  pFVar2 = (this->AttributeSets).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->AttributeSets).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Anim::FAttributeBlendData::FAttributeSet_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_28 = 0xffffffff;
    local_38 = this;
    local_30 = pFVar2;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_38);
    pFVar2 = pFVar2 + 1;
  }
  return;
}

// ForEachAttributeSet<FVectorAnimationAttribute> @ 147527920

void __thiscall
UE::Anim::FAttributeBlendData::ForEachAttributeSet<FVectorAnimationAttribute>
          (FAttributeBlendData *this,
          TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FVectorAnimationAttribute>_&)>
          *param_1)

{
  int iVar1;
  FAttributeSet *pFVar2;
  FAttributeSet *pFVar3;
  undefined1 local_res8 [8];
  FAttributeBlendData *local_38;
  FAttributeSet *local_30;
  undefined4 local_28;
  
  iVar1 = (this->AttributeSets).ArrayNum;
  pFVar2 = (this->AttributeSets).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->AttributeSets).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Anim::FAttributeBlendData::FAttributeSet_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_28 = 0xffffffff;
    local_38 = this;
    local_30 = pFVar2;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_38);
    pFVar2 = pFVar2 + 1;
  }
  return;
}

// ForEachUniqueAttribute<FFloatAnimationAttribute> @ 1475279b0

void __thiscall
UE::Anim::FAttributeBlendData::ForEachUniqueAttribute<FFloatAnimationAttribute>
          (FAttributeBlendData *this,
          TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FFloatAnimationAttribute>_&)>
          *param_1)

{
  int iVar1;
  FUniqueAttribute *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  FAttributeBlendData *local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 local_10;
  
  pFVar2 = (this->UniqueAttributes).AllocatorInstance.Data;
  iVar1 = (this->UniqueAttributes).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38 = SUB84(pFVar2,0);
  uStack_34 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_10 = 0xffffffff;
  local_20 = local_38;
  uStack_1c = uStack_34;
  local_28 = this;
  iStack_18 = iVar1;
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_28);
  return;
}

// ForEachUniqueAttribute<FIntegerAnimationAttribute> @ 147527a40

void __thiscall
UE::Anim::FAttributeBlendData::ForEachUniqueAttribute<FIntegerAnimationAttribute>
          (FAttributeBlendData *this,
          TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FIntegerAnimationAttribute>_&)>
          *param_1)

{
  int iVar1;
  FUniqueAttribute *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  FAttributeBlendData *local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 local_10;
  
  pFVar2 = (this->UniqueAttributes).AllocatorInstance.Data;
  iVar1 = (this->UniqueAttributes).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38 = SUB84(pFVar2,0);
  uStack_34 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_10 = 0xffffffff;
  local_20 = local_38;
  uStack_1c = uStack_34;
  local_28 = this;
  iStack_18 = iVar1;
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_28);
  return;
}

// ForEachUniqueAttribute<FQuaternionAnimationAttribute> @ 147527ad0

void __thiscall
UE::Anim::FAttributeBlendData::ForEachUniqueAttribute<FQuaternionAnimationAttribute>
          (FAttributeBlendData *this,
          TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FQuaternionAnimationAttribute>_&)>
          *param_1)

{
  int iVar1;
  FUniqueAttribute *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  FAttributeBlendData *local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 local_10;
  
  pFVar2 = (this->UniqueAttributes).AllocatorInstance.Data;
  iVar1 = (this->UniqueAttributes).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38 = SUB84(pFVar2,0);
  uStack_34 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_10 = 0xffffffff;
  local_20 = local_38;
  uStack_1c = uStack_34;
  local_28 = this;
  iStack_18 = iVar1;
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_28);
  return;
}

// ForEachUniqueAttribute<FStringAnimationAttribute> @ 147527b60

void __thiscall
UE::Anim::FAttributeBlendData::ForEachUniqueAttribute<FStringAnimationAttribute>
          (FAttributeBlendData *this,
          TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FStringAnimationAttribute>_&)>
          *param_1)

{
  int iVar1;
  FUniqueAttribute *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  FAttributeBlendData *local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 local_10;
  
  pFVar2 = (this->UniqueAttributes).AllocatorInstance.Data;
  iVar1 = (this->UniqueAttributes).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38 = SUB84(pFVar2,0);
  uStack_34 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_10 = 0xffffffff;
  local_20 = local_38;
  uStack_1c = uStack_34;
  local_28 = this;
  iStack_18 = iVar1;
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_28);
  return;
}

// ForEachUniqueAttribute<FTransformAnimationAttribute> @ 147527bf0

void __thiscall
UE::Anim::FAttributeBlendData::ForEachUniqueAttribute<FTransformAnimationAttribute>
          (FAttributeBlendData *this,
          TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FTransformAnimationAttribute>_&)>
          *param_1)

{
  int iVar1;
  FUniqueAttribute *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  FAttributeBlendData *local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 local_10;
  
  pFVar2 = (this->UniqueAttributes).AllocatorInstance.Data;
  iVar1 = (this->UniqueAttributes).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38 = SUB84(pFVar2,0);
  uStack_34 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_10 = 0xffffffff;
  local_20 = local_38;
  uStack_1c = uStack_34;
  local_28 = this;
  iStack_18 = iVar1;
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_28);
  return;
}

// ForEachUniqueAttribute<FVectorAnimationAttribute> @ 147527c80

void __thiscall
UE::Anim::FAttributeBlendData::ForEachUniqueAttribute<FVectorAnimationAttribute>
          (FAttributeBlendData *this,
          TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FVectorAnimationAttribute>_&)>
          *param_1)

{
  int iVar1;
  FUniqueAttribute *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  FAttributeBlendData *local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 local_10;
  
  pFVar2 = (this->UniqueAttributes).AllocatorInstance.Data;
  iVar1 = (this->UniqueAttributes).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38 = SUB84(pFVar2,0);
  uStack_34 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_10 = 0xffffffff;
  local_20 = local_38;
  uStack_1c = uStack_34;
  local_28 = this;
  iStack_18 = iVar1;
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_28);
  return;
}

// FAttributeBlendData @ 14752fd70

FAttributeBlendData * __thiscall
UE::Anim::FAttributeBlendData::FAttributeBlendData
          (FAttributeBlendData *this,FStackAttributeContainer *param_1,
          FStackAttributeContainer *param_2,TArrayView<float_const_,int> *param_3,
          UScriptStruct *param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  float *pfVar5;
  undefined4 uVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FAttributeBlendData *pFVar11;
  float *pfVar12;
  int local_48;
  int local_44 [7];
  
  pfVar5 = param_3->DataPtr;
  iVar9 = param_3->ArrayNum;
  uVar6 = *(undefined4 *)&param_3->field_0xc;
  uVar2 = param_3->ArrayNum;
  piVar1 = &(this->HighestBoneWeightedIndices).ArrayMax;
  (this->AttributeSets).AllocatorInstance.Data = (FAttributeSet *)0x0;
  (this->AttributeSets).ArrayNum = 0;
  (this->AttributeSets).ArrayMax = 0;
  (this->UniqueAttributes).AllocatorInstance.Data = (FUniqueAttribute *)0x0;
  (this->UniqueAttributes).ArrayNum = 0;
  (this->UniqueAttributes).ArrayMax = 0;
  (this->WeightIndices).DataPtr = (int *)0x0;
  (this->WeightIndices).ArrayNum = 0;
  (this->PerBoneWeights).DataPtr = (FPerBoneBlendWeight *)0x0;
  (this->PerBoneWeights).ArrayNum = 0;
  (this->HighestBoneWeightedIndices).AllocatorInstance.Data = (int *)0x0;
  (this->HighestBoneWeightedIndices).ArrayNum = 0;
  *piVar1 = 0;
  (this->PerBoneInterpolationIndices).DataPtr = (int *)0x0;
  (this->PerBoneInterpolationIndices).ArrayNum = 0;
  (this->BlendSampleDataCache).DataPtr = (FBlendSampleData *)0x0;
  (this->BlendSampleDataCache).ArrayNum = 0;
  this->UniformWeight = 0.0;
  this->AdditiveType = AAT_None;
  this->bPerBoneFilter = false;
  (this->Weights).DataPtr = pfVar5;
  (this->Weights).ArrayNum = iVar9;
  *(undefined4 *)&(this->Weights).field_0xc = uVar6;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (*piVar1 < (int)uVar2) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<int>_>
              (4,4,uVar2,&(this->HighestBoneWeightedIndices).AllocatorInstance,0,piVar1);
  }
  fVar7 = __real_3f000000;
  pfVar12 = param_3->DataPtr;
  pfVar5 = pfVar12 + (int)uVar2;
  do {
    if (pfVar12 == pfVar5) {
      ProcessAttributes(this,param_1,0,param_4);
      ProcessAttributes(this,param_2,1,param_4);
      return this;
    }
    piVar3 = (this->HighestBoneWeightedIndices).AllocatorInstance.Data;
    if (*pfVar12 <= fVar7) {
      local_44[0] = 0;
      if (((piVar3 <= local_44) && (local_44 < piVar3 + *piVar1)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FAttributeBlendData *)(*pcVar4)();
        return pFVar11;
      }
      iVar9 = (this->HighestBoneWeightedIndices).ArrayNum;
      iVar10 = local_44[0];
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<int>_>
                          (0x404,&(this->HighestBoneWeightedIndices).AllocatorInstance,piVar1);
        iVar10 = local_44[0];
      }
    }
    else {
      local_48 = 1;
      if (((piVar3 <= &local_48) && (&local_48 < piVar3 + *piVar1)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FAttributeBlendData *)(*pcVar4)();
        return pFVar11;
      }
      iVar9 = (this->HighestBoneWeightedIndices).ArrayNum;
      iVar10 = local_48;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<int>_>
                          (0x404,&(this->HighestBoneWeightedIndices).AllocatorInstance,piVar1);
        iVar10 = local_48;
      }
    }
    (this->HighestBoneWeightedIndices).ArrayNum = iVar9 + 1;
    pfVar12 = pfVar12 + 1;
    (this->HighestBoneWeightedIndices).AllocatorInstance.Data[iVar9] = iVar10;
  } while( true );
}

// FAttributeBlendData @ 14752fff0

FAttributeBlendData * __thiscall
UE::Anim::FAttributeBlendData::FAttributeBlendData
          (FAttributeBlendData *this,FStackAttributeContainer *param_1,
          TArrayView<UE::Anim::FStackAttributeContainer_const_,int> *param_2,
          TArrayView<FPerBoneBlendWeight_const_,int> *param_3,UScriptStruct *param_4)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  FPerBoneBlendWeight *pFVar4;
  undefined4 uVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FAttributeBlendData *pFVar11;
  longlong lVar12;
  uint uVar13;
  FPerBoneBlendWeight *pFVar14;
  int local_48;
  int local_44 [7];
  
  pFVar4 = param_3->DataPtr;
  iVar9 = param_3->ArrayNum;
  uVar5 = *(undefined4 *)&param_3->field_0xc;
  uVar13 = 0;
  piVar1 = &(this->HighestBoneWeightedIndices).ArrayMax;
  (this->AttributeSets).AllocatorInstance.Data = (FAttributeSet *)0x0;
  (this->AttributeSets).ArrayNum = 0;
  (this->AttributeSets).ArrayMax = 0;
  (this->UniqueAttributes).AllocatorInstance.Data = (FUniqueAttribute *)0x0;
  (this->UniqueAttributes).ArrayNum = 0;
  (this->UniqueAttributes).ArrayMax = 0;
  (this->Weights).DataPtr = (float *)0x0;
  (this->Weights).ArrayNum = 0;
  (this->WeightIndices).DataPtr = (int *)0x0;
  (this->WeightIndices).ArrayNum = 0;
  (this->HighestBoneWeightedIndices).AllocatorInstance.Data = (int *)0x0;
  (this->HighestBoneWeightedIndices).ArrayNum = 0;
  *piVar1 = 0;
  (this->PerBoneInterpolationIndices).DataPtr = (int *)0x0;
  (this->PerBoneInterpolationIndices).ArrayNum = 0;
  (this->BlendSampleDataCache).DataPtr = (FBlendSampleData *)0x0;
  (this->BlendSampleDataCache).ArrayNum = 0;
  (this->PerBoneWeights).DataPtr = pFVar4;
  (this->PerBoneWeights).ArrayNum = iVar9;
  *(undefined4 *)&(this->PerBoneWeights).field_0xc = uVar5;
  this->UniformWeight = 0.0;
  this->AdditiveType = AAT_None;
  this->bPerBoneFilter = true;
  ProcessAttributes(this,param_1,0,param_4);
  iVar9 = param_2->ArrayNum;
  if (0 < iVar9) {
    do {
      uVar8 = 0;
      if ((int)uVar13 < iVar9) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FAttributeBlendData *)(*pcVar3)();
        return pFVar11;
      }
      lVar12 = (longlong)(int)uVar13;
      uVar13 = uVar13 + 1;
      ProcessAttributes(this,param_2->DataPtr + lVar12,uVar13,param_4);
      iVar9 = param_2->ArrayNum;
    } while ((int)uVar13 < iVar9);
  }
  uVar13 = param_3->ArrayNum;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<int>_>
              (4,4,uVar13,&(this->HighestBoneWeightedIndices).AllocatorInstance,
               (this->HighestBoneWeightedIndices).ArrayNum,piVar1);
  }
  fVar6 = __real_3f000000;
  pFVar14 = param_3->DataPtr;
  pFVar4 = pFVar14 + (int)uVar13;
  do {
    if (pFVar14 == pFVar4) {
      return this;
    }
    piVar2 = (this->HighestBoneWeightedIndices).AllocatorInstance.Data;
    if (pFVar14->BlendWeight <= fVar6) {
      local_44[0] = 0;
      if (((piVar2 <= local_44) && (local_44 < piVar2 + *piVar1)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FAttributeBlendData *)(*pcVar3)();
        return pFVar11;
      }
      iVar9 = (this->HighestBoneWeightedIndices).ArrayNum;
      iVar10 = local_44[0];
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<int>_>
                          (0x404,&(this->HighestBoneWeightedIndices).AllocatorInstance,piVar1);
        iVar10 = local_44[0];
      }
    }
    else {
      local_48 = pFVar14->SourceIndex + 1;
      if (((piVar2 <= &local_48) && (&local_48 < piVar2 + *piVar1)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FAttributeBlendData *)(*pcVar3)();
        return pFVar11;
      }
      iVar9 = (this->HighestBoneWeightedIndices).ArrayNum;
      iVar10 = local_48;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<int>_>
                          (0x404,&(this->HighestBoneWeightedIndices).AllocatorInstance,piVar1);
        iVar10 = local_48;
      }
    }
    (this->HighestBoneWeightedIndices).ArrayNum = iVar9 + 1;
    pFVar14 = pFVar14 + 1;
    (this->HighestBoneWeightedIndices).AllocatorInstance.Data[iVar9] = iVar10;
  } while( true );
}

// FAttributeBlendData @ 1475302e0

FAttributeBlendData * __thiscall
UE::Anim::FAttributeBlendData::FAttributeBlendData
          (FAttributeBlendData *this,
          TArrayView<UE::Anim::FStackAttributeContainer_const_,int> *param_1,
          TArrayView<int_const_,int> *param_2,TArrayView<FBlendSampleData_const_,int> *param_3,
          TArrayView<int_const_,int> *param_4,UScriptStruct *param_5)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FAttributeBlendData *pFVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  int local_58 [12];
  
  piVar2 = param_2->DataPtr;
  iVar11 = param_2->ArrayNum;
  uVar4 = *(undefined4 *)&param_2->field_0xc;
  piVar1 = &(this->HighestBoneWeightedIndices).ArrayMax;
  uVar12 = 0;
  iVar8 = param_1->ArrayNum;
  (this->AttributeSets).AllocatorInstance.Data = (FAttributeSet *)0x0;
  (this->AttributeSets).ArrayNum = 0;
  (this->AttributeSets).ArrayMax = 0;
  (this->UniqueAttributes).AllocatorInstance.Data = (FUniqueAttribute *)0x0;
  (this->UniqueAttributes).ArrayNum = 0;
  (this->UniqueAttributes).ArrayMax = 0;
  (this->Weights).DataPtr = (float *)0x0;
  (this->Weights).ArrayNum = 0;
  (this->PerBoneWeights).DataPtr = (FPerBoneBlendWeight *)0x0;
  (this->PerBoneWeights).ArrayNum = 0;
  (this->HighestBoneWeightedIndices).AllocatorInstance.Data = (int *)0x0;
  (this->HighestBoneWeightedIndices).ArrayNum = 0;
  *piVar1 = 0;
  this->UniformWeight = 0.0;
  this->AdditiveType = AAT_None;
  this->bPerBoneFilter = false;
  (this->PerBoneInterpolationIndices).DataPtr = piVar2;
  (this->PerBoneInterpolationIndices).ArrayNum = iVar11;
  *(undefined4 *)&(this->PerBoneInterpolationIndices).field_0xc = uVar4;
  iVar11 = param_3->ArrayNum;
  uVar4 = *(undefined4 *)&param_3->field_0xc;
  (this->BlendSampleDataCache).DataPtr = param_3->DataPtr;
  (this->BlendSampleDataCache).ArrayNum = iVar11;
  *(undefined4 *)&(this->BlendSampleDataCache).field_0xc = uVar4;
  iVar11 = param_4->ArrayNum;
  uVar4 = *(undefined4 *)&param_4->field_0xc;
  (this->WeightIndices).DataPtr = param_4->DataPtr;
  (this->WeightIndices).ArrayNum = iVar11;
  *(undefined4 *)&(this->WeightIndices).field_0xc = uVar4;
  uVar10 = uVar12;
  if (0 < iVar8) {
    do {
      uVar7 = 0;
      if ((int)uVar10 < iVar8) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FAttributeBlendData *)(*pcVar3)();
        return pFVar9;
      }
      ProcessAttributes(this,param_1->DataPtr + (int)uVar10,uVar10,param_5);
      iVar8 = param_1->ArrayNum;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iVar8);
  }
  uVar10 = param_2->ArrayNum;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (*piVar1 < (int)uVar10) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<int>_>
              (4,4,uVar10,&(this->HighestBoneWeightedIndices).AllocatorInstance,
               (this->HighestBoneWeightedIndices).ArrayNum,piVar1);
  }
  fVar5 = __real_bf800000;
  if (0 < (int)uVar10) {
    do {
      iVar8 = param_1->ArrayNum;
      iVar11 = 0;
      local_58[0] = -1;
      fVar14 = fVar5;
      if (0 < iVar8) {
        do {
          fVar13 = GetBoneWeight(this,iVar11,(this->HighestBoneWeightedIndices).ArrayNum);
          if (fVar14 < fVar13) {
            fVar14 = fVar13;
            local_58[0] = iVar11;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar8);
      }
      piVar2 = (this->HighestBoneWeightedIndices).AllocatorInstance.Data;
      if (((piVar2 <= local_58) && (local_58 < piVar2 + *piVar1)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FAttributeBlendData *)(*pcVar3)();
        return pFVar9;
      }
      iVar8 = (this->HighestBoneWeightedIndices).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<int>_>
                          (0x404,&(this->HighestBoneWeightedIndices).AllocatorInstance,piVar1);
      }
      uVar12 = uVar12 + 1;
      (this->HighestBoneWeightedIndices).ArrayNum = iVar8 + 1;
      (this->HighestBoneWeightedIndices).AllocatorInstance.Data[iVar8] = local_58[0];
    } while ((int)uVar12 < param_2->ArrayNum);
  }
  return this;
}

// FAttributeBlendData @ 147530560

FAttributeBlendData * __thiscall
UE::Anim::FAttributeBlendData::FAttributeBlendData
          (FAttributeBlendData *this,
          TArrayView<UE::Anim::FStackAttributeContainer_const_,int> *param_1,
          TArrayView<int_const_,int> *param_2,TArrayView<FBlendSampleData_const_,int> *param_3,
          UScriptStruct *param_4)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FAttributeBlendData *pFVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  int local_58 [12];
  
  piVar2 = param_2->DataPtr;
  iVar11 = param_2->ArrayNum;
  uVar4 = *(undefined4 *)&param_2->field_0xc;
  uVar12 = 0;
  piVar1 = &(this->HighestBoneWeightedIndices).ArrayMax;
  (this->AttributeSets).AllocatorInstance.Data = (FAttributeSet *)0x0;
  iVar8 = param_1->ArrayNum;
  (this->AttributeSets).ArrayNum = 0;
  (this->AttributeSets).ArrayMax = 0;
  (this->UniqueAttributes).AllocatorInstance.Data = (FUniqueAttribute *)0x0;
  (this->UniqueAttributes).ArrayNum = 0;
  (this->UniqueAttributes).ArrayMax = 0;
  (this->Weights).DataPtr = (float *)0x0;
  (this->Weights).ArrayNum = 0;
  (this->WeightIndices).DataPtr = (int *)0x0;
  (this->WeightIndices).ArrayNum = 0;
  (this->PerBoneWeights).DataPtr = (FPerBoneBlendWeight *)0x0;
  (this->PerBoneWeights).ArrayNum = 0;
  (this->HighestBoneWeightedIndices).AllocatorInstance.Data = (int *)0x0;
  (this->HighestBoneWeightedIndices).ArrayNum = 0;
  *piVar1 = 0;
  this->UniformWeight = 0.0;
  this->AdditiveType = AAT_None;
  this->bPerBoneFilter = false;
  (this->PerBoneInterpolationIndices).DataPtr = piVar2;
  (this->PerBoneInterpolationIndices).ArrayNum = iVar11;
  *(undefined4 *)&(this->PerBoneInterpolationIndices).field_0xc = uVar4;
  iVar11 = param_3->ArrayNum;
  uVar4 = *(undefined4 *)&param_3->field_0xc;
  (this->BlendSampleDataCache).DataPtr = param_3->DataPtr;
  (this->BlendSampleDataCache).ArrayNum = iVar11;
  *(undefined4 *)&(this->BlendSampleDataCache).field_0xc = uVar4;
  uVar10 = uVar12;
  if (0 < iVar8) {
    do {
      uVar7 = 0;
      if ((int)uVar10 < iVar8) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FAttributeBlendData *)(*pcVar3)();
        return pFVar9;
      }
      ProcessAttributes(this,param_1->DataPtr + (int)uVar10,uVar10,param_4);
      iVar8 = param_1->ArrayNum;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iVar8);
  }
  uVar10 = param_2->ArrayNum;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (*piVar1 < (int)uVar10) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<int>_>
              (4,4,uVar10,&(this->HighestBoneWeightedIndices).AllocatorInstance,
               (this->HighestBoneWeightedIndices).ArrayNum,piVar1);
  }
  fVar5 = __real_bf800000;
  if (0 < (int)uVar10) {
    do {
      iVar8 = param_1->ArrayNum;
      iVar11 = 0;
      local_58[0] = -1;
      fVar14 = fVar5;
      if (0 < iVar8) {
        do {
          fVar13 = GetBoneWeight(this,iVar11,(this->HighestBoneWeightedIndices).ArrayNum);
          if (fVar14 < fVar13) {
            fVar14 = fVar13;
            local_58[0] = iVar11;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar8);
      }
      piVar2 = (this->HighestBoneWeightedIndices).AllocatorInstance.Data;
      if (((piVar2 <= local_58) && (local_58 < piVar2 + *piVar1)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FAttributeBlendData *)(*pcVar3)();
        return pFVar9;
      }
      iVar8 = (this->HighestBoneWeightedIndices).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<int>_>
                          (0x404,&(this->HighestBoneWeightedIndices).AllocatorInstance,piVar1);
      }
      uVar12 = uVar12 + 1;
      (this->HighestBoneWeightedIndices).ArrayNum = iVar8 + 1;
      (this->HighestBoneWeightedIndices).AllocatorInstance.Data[iVar8] = local_58[0];
    } while ((int)uVar12 < param_2->ArrayNum);
  }
  return this;
}

// FAttributeBlendData @ 1475307e0

FAttributeBlendData * __thiscall
UE::Anim::FAttributeBlendData::FAttributeBlendData
          (FAttributeBlendData *this,
          TArrayView<UE::Anim::FStackAttributeContainer_const_,int> *param_1,
          TArrayView<float_const_,int> *param_2,UScriptStruct *param_3)

{
  code *pcVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  FAttributeBlendData *pFVar7;
  int iVar8;
  uint uVar9;
  
  pfVar2 = param_2->DataPtr;
  iVar3 = param_2->ArrayNum;
  uVar4 = *(undefined4 *)&param_2->field_0xc;
  uVar9 = 0;
  iVar8 = param_1->ArrayNum;
  (this->AttributeSets).AllocatorInstance.Data = (FAttributeSet *)0x0;
  (this->AttributeSets).ArrayNum = 0;
  (this->AttributeSets).ArrayMax = 0;
  (this->UniqueAttributes).AllocatorInstance.Data = (FUniqueAttribute *)0x0;
  (this->UniqueAttributes).ArrayNum = 0;
  (this->UniqueAttributes).ArrayMax = 0;
  (this->WeightIndices).DataPtr = (int *)0x0;
  (this->WeightIndices).ArrayNum = 0;
  (this->PerBoneWeights).DataPtr = (FPerBoneBlendWeight *)0x0;
  (this->PerBoneWeights).ArrayNum = 0;
  (this->HighestBoneWeightedIndices).AllocatorInstance.Data = (int *)0x0;
  (this->HighestBoneWeightedIndices).ArrayNum = 0;
  (this->HighestBoneWeightedIndices).ArrayMax = 0;
  (this->PerBoneInterpolationIndices).DataPtr = (int *)0x0;
  (this->PerBoneInterpolationIndices).ArrayNum = 0;
  (this->BlendSampleDataCache).DataPtr = (FBlendSampleData *)0x0;
  (this->BlendSampleDataCache).ArrayNum = 0;
  this->UniformWeight = 0.0;
  this->AdditiveType = AAT_None;
  this->bPerBoneFilter = false;
  (this->Weights).DataPtr = pfVar2;
  (this->Weights).ArrayNum = iVar3;
  *(undefined4 *)&(this->Weights).field_0xc = uVar4;
  if (0 < iVar8) {
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar8) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FAttributeBlendData *)(*pcVar1)();
          return pFVar7;
        }
      }
      ProcessAttributes(this,param_1->DataPtr + (int)uVar9,uVar9,param_3);
      iVar8 = param_1->ArrayNum;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar8);
  }
  return this;
}

// FAttributeBlendData @ 147530900

FAttributeBlendData * __thiscall
UE::Anim::FAttributeBlendData::FAttributeBlendData
          (FAttributeBlendData *this,
          TArrayView<UE::Anim::FStackAttributeContainer_const_,int> *param_1,
          TArrayView<float_const_,int> *param_2,TArrayView<int_const_,int> *param_3,
          UScriptStruct *param_4)

{
  code *pcVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  FAttributeBlendData *pFVar7;
  int iVar8;
  uint uVar9;
  
  pfVar2 = param_2->DataPtr;
  iVar3 = param_2->ArrayNum;
  uVar4 = *(undefined4 *)&param_2->field_0xc;
  uVar9 = 0;
  iVar8 = param_1->ArrayNum;
  (this->AttributeSets).AllocatorInstance.Data = (FAttributeSet *)0x0;
  (this->AttributeSets).ArrayNum = 0;
  (this->AttributeSets).ArrayMax = 0;
  (this->UniqueAttributes).AllocatorInstance.Data = (FUniqueAttribute *)0x0;
  (this->UniqueAttributes).ArrayNum = 0;
  (this->UniqueAttributes).ArrayMax = 0;
  (this->PerBoneWeights).DataPtr = (FPerBoneBlendWeight *)0x0;
  (this->PerBoneWeights).ArrayNum = 0;
  (this->HighestBoneWeightedIndices).AllocatorInstance.Data = (int *)0x0;
  (this->HighestBoneWeightedIndices).ArrayNum = 0;
  (this->HighestBoneWeightedIndices).ArrayMax = 0;
  (this->PerBoneInterpolationIndices).DataPtr = (int *)0x0;
  (this->PerBoneInterpolationIndices).ArrayNum = 0;
  (this->BlendSampleDataCache).DataPtr = (FBlendSampleData *)0x0;
  (this->BlendSampleDataCache).ArrayNum = 0;
  this->UniformWeight = 0.0;
  this->AdditiveType = AAT_None;
  this->bPerBoneFilter = false;
  (this->Weights).DataPtr = pfVar2;
  (this->Weights).ArrayNum = iVar3;
  *(undefined4 *)&(this->Weights).field_0xc = uVar4;
  iVar3 = param_3->ArrayNum;
  uVar4 = *(undefined4 *)&param_3->field_0xc;
  (this->WeightIndices).DataPtr = param_3->DataPtr;
  (this->WeightIndices).ArrayNum = iVar3;
  *(undefined4 *)&(this->WeightIndices).field_0xc = uVar4;
  if (0 < iVar8) {
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar8) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FAttributeBlendData *)(*pcVar1)();
        return pFVar7;
      }
      ProcessAttributes(this,param_1->DataPtr + (int)uVar9,uVar9,param_4);
      iVar8 = param_1->ArrayNum;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar8);
  }
  return this;
}

// FAttributeBlendData @ 147530a20

FAttributeBlendData * __thiscall
UE::Anim::FAttributeBlendData::FAttributeBlendData
          (FAttributeBlendData *this,
          TArrayView<UE::Anim::FStackAttributeContainer_const_,int> *param_1,
          TArrayView<FPerBoneBlendWeight_const_,int> *param_2,UScriptStruct *param_3)

{
  int *piVar1;
  int *piVar2;
  int *_Dst;
  code *pcVar3;
  FPerBoneBlendWeight *pFVar4;
  undefined4 uVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FAttributeBlendData *pFVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  
  pFVar4 = param_2->DataPtr;
  iVar8 = param_2->ArrayNum;
  uVar5 = *(undefined4 *)&param_2->field_0xc;
  uVar11 = 0;
  piVar1 = &(this->HighestBoneWeightedIndices).ArrayNum;
  (this->AttributeSets).AllocatorInstance.Data = (FAttributeSet *)0x0;
  iVar9 = param_1->ArrayNum;
  piVar2 = &(this->HighestBoneWeightedIndices).ArrayMax;
  (this->AttributeSets).ArrayNum = 0;
  (this->AttributeSets).ArrayMax = 0;
  (this->UniqueAttributes).AllocatorInstance.Data = (FUniqueAttribute *)0x0;
  (this->UniqueAttributes).ArrayNum = 0;
  (this->UniqueAttributes).ArrayMax = 0;
  (this->Weights).DataPtr = (float *)0x0;
  (this->Weights).ArrayNum = 0;
  (this->WeightIndices).DataPtr = (int *)0x0;
  (this->WeightIndices).ArrayNum = 0;
  (this->HighestBoneWeightedIndices).AllocatorInstance.Data = (int *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->PerBoneInterpolationIndices).DataPtr = (int *)0x0;
  (this->PerBoneInterpolationIndices).ArrayNum = 0;
  (this->BlendSampleDataCache).DataPtr = (FBlendSampleData *)0x0;
  (this->BlendSampleDataCache).ArrayNum = 0;
  this->UniformWeight = 0.0;
  this->AdditiveType = AAT_None;
  this->bPerBoneFilter = false;
  (this->PerBoneWeights).DataPtr = pFVar4;
  (this->PerBoneWeights).ArrayNum = iVar8;
  *(undefined4 *)&(this->PerBoneWeights).field_0xc = uVar5;
  if (0 < iVar9) {
    do {
      uVar13 = 0;
      if ((int)uVar11 < iVar9) {
        uVar13 = ~uVar11 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FAttributeBlendData *)(*pcVar3)();
        return pFVar10;
      }
      ProcessAttributes(this,param_1->DataPtr + (int)uVar11,uVar11,param_3);
      iVar9 = param_1->ArrayNum;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar9);
  }
  uVar11 = param_2->ArrayNum;
  iVar9 = *piVar1;
  if (iVar9 < (int)uVar11) {
    iVar8 = Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<int>_>
                      (4,4,uVar11 - iVar9,&(this->HighestBoneWeightedIndices).AllocatorInstance,
                       piVar1,piVar2);
    memset((this->HighestBoneWeightedIndices).AllocatorInstance.Data + iVar8,0,
           (longlong)(int)(uVar11 - iVar9) << 2);
  }
  else {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if ((int)uVar11 < iVar9) {
      uVar13 = iVar9 - uVar11;
      if (((int)(uVar13 | uVar11) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FAttributeBlendData *)(*pcVar3)();
        return pFVar10;
      }
      if (uVar13 != 0) {
        _Dst = (this->HighestBoneWeightedIndices).AllocatorInstance.Data + (int)uVar11;
        iVar9 = (*piVar1 - uVar11) - uVar13;
        if (iVar9 != 0) {
          memmove(_Dst,_Dst + (int)uVar13,(longlong)iVar9 << 2);
        }
        *piVar1 = *piVar1 - uVar13;
        Core::Private::ReallocShrink<0,TMemStackAllocator<0>::ForElementType<int>_>
                  (4,4,&(this->HighestBoneWeightedIndices).AllocatorInstance,*piVar1,piVar2);
      }
    }
  }
  fVar6 = __real_3f000000;
  uVar11 = 0;
  if (0 < (this->HighestBoneWeightedIndices).ArrayNum) {
    lVar12 = 0;
    do {
      uVar14 = ~uVar11 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar13 = uVar14;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FAttributeBlendData *)(*pcVar3)();
        return pFVar10;
      }
      if (param_2->DataPtr[lVar12].BlendWeight <= fVar6) {
        uVar13 = 0;
        if ((int)uVar11 < *piVar1) {
          uVar13 = uVar14;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FAttributeBlendData *)(*pcVar3)();
          return pFVar10;
        }
        (this->HighestBoneWeightedIndices).AllocatorInstance.Data[lVar12] = 0;
      }
      else {
        iVar9 = param_2->DataPtr[lVar12].SourceIndex;
        uVar13 = 0;
        if ((int)uVar11 < *piVar1) {
          uVar13 = uVar14;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FAttributeBlendData *)(*pcVar3)();
          return pFVar10;
        }
        (this->HighestBoneWeightedIndices).AllocatorInstance.Data[lVar12] = iVar9;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 1;
    } while ((int)uVar11 < (this->HighestBoneWeightedIndices).ArrayNum);
  }
  return this;
}

// FAttributeBlendData @ 147530d50

FAttributeBlendData * __thiscall
UE::Anim::FAttributeBlendData::FAttributeBlendData
          (FAttributeBlendData *this,
          TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int> *param_1,float param_2,
          UScriptStruct *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAttributeBlendData *pFVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  this->UniformWeight = param_2;
  (this->AttributeSets).AllocatorInstance.Data = (FAttributeSet *)0x0;
  iVar5 = param_1->ArrayNum;
  (this->AttributeSets).ArrayNum = 0;
  (this->AttributeSets).ArrayMax = 0;
  (this->UniqueAttributes).AllocatorInstance.Data = (FUniqueAttribute *)0x0;
  (this->UniqueAttributes).ArrayNum = 0;
  (this->UniqueAttributes).ArrayMax = 0;
  (this->Weights).DataPtr = (float *)0x0;
  (this->Weights).ArrayNum = 0;
  (this->WeightIndices).DataPtr = (int *)0x0;
  (this->WeightIndices).ArrayNum = 0;
  this->AdditiveType = AAT_None;
  (this->PerBoneWeights).DataPtr = (FPerBoneBlendWeight *)0x0;
  (this->PerBoneWeights).ArrayNum = 0;
  (this->HighestBoneWeightedIndices).AllocatorInstance.Data = (int *)0x0;
  (this->HighestBoneWeightedIndices).ArrayNum = 0;
  (this->HighestBoneWeightedIndices).ArrayMax = 0;
  this->bPerBoneFilter = false;
  (this->PerBoneInterpolationIndices).DataPtr = (int *)0x0;
  (this->PerBoneInterpolationIndices).ArrayNum = 0;
  (this->BlendSampleDataCache).DataPtr = (FBlendSampleData *)0x0;
  (this->BlendSampleDataCache).ArrayNum = 0;
  uVar8 = uVar7;
  if (0 < iVar5) {
    do {
      uVar6 = (uint)uVar7;
      uVar3 = 0;
      if ((int)uVar6 < iVar5) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FAttributeBlendData *)(*pcVar1)();
        return pFVar4;
      }
      ProcessAttributes(this,*(FStackAttributeContainer **)((longlong)param_1->DataPtr + uVar8),
                        uVar6,param_3);
      iVar5 = param_1->ArrayNum;
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar8 = uVar8 + 8;
    } while ((int)(uVar6 + 1) < iVar5);
  }
  return this;
}

// FAttributeBlendData @ 147530e70

FAttributeBlendData * __thiscall
UE::Anim::FAttributeBlendData::FAttributeBlendData
          (FAttributeBlendData *this,
          TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int> *param_1,float param_2,
          EAdditiveAnimationType param_3,UScriptStruct *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAttributeBlendData *pFVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  this->UniformWeight = param_2;
  (this->AttributeSets).AllocatorInstance.Data = (FAttributeSet *)0x0;
  iVar5 = param_1->ArrayNum;
  (this->AttributeSets).ArrayNum = 0;
  (this->AttributeSets).ArrayMax = 0;
  (this->UniqueAttributes).AllocatorInstance.Data = (FUniqueAttribute *)0x0;
  (this->UniqueAttributes).ArrayNum = 0;
  (this->UniqueAttributes).ArrayMax = 0;
  (this->Weights).DataPtr = (float *)0x0;
  (this->Weights).ArrayNum = 0;
  (this->WeightIndices).DataPtr = (int *)0x0;
  (this->WeightIndices).ArrayNum = 0;
  this->AdditiveType = param_3;
  (this->PerBoneWeights).DataPtr = (FPerBoneBlendWeight *)0x0;
  (this->PerBoneWeights).ArrayNum = 0;
  (this->HighestBoneWeightedIndices).AllocatorInstance.Data = (int *)0x0;
  (this->HighestBoneWeightedIndices).ArrayNum = 0;
  (this->HighestBoneWeightedIndices).ArrayMax = 0;
  this->bPerBoneFilter = false;
  (this->PerBoneInterpolationIndices).DataPtr = (int *)0x0;
  (this->PerBoneInterpolationIndices).ArrayNum = 0;
  (this->BlendSampleDataCache).DataPtr = (FBlendSampleData *)0x0;
  (this->BlendSampleDataCache).ArrayNum = 0;
  uVar8 = uVar7;
  if (0 < iVar5) {
    do {
      uVar6 = (uint)uVar7;
      uVar3 = 0;
      if ((int)uVar6 < iVar5) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FAttributeBlendData *)(*pcVar1)();
        return pFVar4;
      }
      ProcessAttributes(this,*(FStackAttributeContainer **)((longlong)param_1->DataPtr + uVar8),
                        uVar6,param_4);
      iVar5 = param_1->ArrayNum;
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar8 = uVar8 + 8;
    } while ((int)(uVar6 + 1) < iVar5);
  }
  return this;
}

// FAttributeBlendData @ 147530f90

FAttributeBlendData * __thiscall
UE::Anim::FAttributeBlendData::FAttributeBlendData
          (FAttributeBlendData *this,
          TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int> *param_1,
          TArrayView<float_const_,int> *param_2,UScriptStruct *param_3)

{
  code *pcVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  FAttributeBlendData *pFVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  pfVar2 = param_2->DataPtr;
  iVar3 = param_2->ArrayNum;
  uVar4 = *(undefined4 *)&param_2->field_0xc;
  uVar10 = 0;
  iVar8 = param_1->ArrayNum;
  (this->AttributeSets).AllocatorInstance.Data = (FAttributeSet *)0x0;
  (this->AttributeSets).ArrayNum = 0;
  (this->AttributeSets).ArrayMax = 0;
  (this->UniqueAttributes).AllocatorInstance.Data = (FUniqueAttribute *)0x0;
  (this->UniqueAttributes).ArrayNum = 0;
  (this->UniqueAttributes).ArrayMax = 0;
  (this->WeightIndices).DataPtr = (int *)0x0;
  (this->WeightIndices).ArrayNum = 0;
  (this->PerBoneWeights).DataPtr = (FPerBoneBlendWeight *)0x0;
  (this->PerBoneWeights).ArrayNum = 0;
  (this->HighestBoneWeightedIndices).AllocatorInstance.Data = (int *)0x0;
  (this->HighestBoneWeightedIndices).ArrayNum = 0;
  (this->HighestBoneWeightedIndices).ArrayMax = 0;
  (this->PerBoneInterpolationIndices).DataPtr = (int *)0x0;
  (this->PerBoneInterpolationIndices).ArrayNum = 0;
  (this->BlendSampleDataCache).DataPtr = (FBlendSampleData *)0x0;
  (this->BlendSampleDataCache).ArrayNum = 0;
  this->UniformWeight = 0.0;
  this->AdditiveType = AAT_None;
  this->bPerBoneFilter = false;
  (this->Weights).DataPtr = pfVar2;
  (this->Weights).ArrayNum = iVar3;
  *(undefined4 *)&(this->Weights).field_0xc = uVar4;
  uVar11 = uVar10;
  if (0 < iVar8) {
    do {
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < iVar8) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FAttributeBlendData *)(*pcVar1)();
        return pFVar7;
      }
      ProcessAttributes(this,*(FStackAttributeContainer **)((longlong)param_1->DataPtr + uVar11),
                        uVar9,param_3);
      iVar8 = param_1->ArrayNum;
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 8;
    } while ((int)(uVar9 + 1) < iVar8);
  }
  return this;
}

// FAttributeBlendData @ 1475310b0

FAttributeBlendData * __thiscall
UE::Anim::FAttributeBlendData::FAttributeBlendData(FAttributeBlendData *this)

{
  (this->AttributeSets).AllocatorInstance.Data = (FAttributeSet *)0x0;
  (this->AttributeSets).ArrayNum = 0;
  (this->AttributeSets).ArrayMax = 0;
  (this->UniqueAttributes).AllocatorInstance.Data = (FUniqueAttribute *)0x0;
  (this->UniqueAttributes).ArrayNum = 0;
  (this->UniqueAttributes).ArrayMax = 0;
  this->UniformWeight = 0.0;
  (this->Weights).DataPtr = (float *)0x0;
  (this->Weights).ArrayNum = 0;
  (this->WeightIndices).DataPtr = (int *)0x0;
  (this->WeightIndices).ArrayNum = 0;
  this->AdditiveType = AAT_None;
  (this->PerBoneWeights).DataPtr = (FPerBoneBlendWeight *)0x0;
  (this->PerBoneWeights).ArrayNum = 0;
  (this->HighestBoneWeightedIndices).AllocatorInstance.Data = (int *)0x0;
  (this->HighestBoneWeightedIndices).ArrayNum = 0;
  (this->HighestBoneWeightedIndices).ArrayMax = 0;
  this->bPerBoneFilter = false;
  (this->PerBoneInterpolationIndices).DataPtr = (int *)0x0;
  (this->PerBoneInterpolationIndices).ArrayNum = 0;
  (this->BlendSampleDataCache).DataPtr = (FBlendSampleData *)0x0;
  (this->BlendSampleDataCache).ArrayNum = 0;
  return this;
}

// operator() @ 147540360

void __thiscall
`UE::Anim::FAttributeBlendData::ProcessAttributes'::__l2::<lambda_3>::operator()
          (void *this,FAttributeSet *param_1,uchar *param_2,int param_3)

{
  uchar **ppuVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  uchar *local_res18;
  int local_res20 [2];
  
  ppuVar1 = (param_1->DataPtrs).AllocatorInstance.Data;
  local_res18 = param_2;
  local_res20[0] = param_3;
  if ((ppuVar1 <= &local_res18) && (&local_res18 < ppuVar1 + (param_1->DataPtrs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_1->DataPtrs).ArrayNum;
  piVar2 = &(param_1->DataPtrs).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<unsigned_char_const_*>_>
                      (0x808,(ForElementType<unsigned_char_const_*> *)param_1,piVar2);
  }
  (param_1->DataPtrs).ArrayNum = iVar5 + 1;
  (param_1->DataPtrs).AllocatorInstance.Data[iVar5] = local_res18;
  piVar2 = (param_1->WeightIndices).AllocatorInstance.Data;
  if (piVar2 <= local_res20) {
    if (local_res20 < piVar2 + (param_1->WeightIndices).ArrayMax) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  iVar5 = (param_1->WeightIndices).ArrayNum;
  piVar2 = &(param_1->WeightIndices).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<int>_>
                      (0x404,&(param_1->WeightIndices).AllocatorInstance,piVar2);
  }
  (param_1->WeightIndices).ArrayNum = iVar5 + 1;
  (param_1->WeightIndices).AllocatorInstance.Data[iVar5] = local_res20[0];
  fVar6 = UE::Anim::FAttributeBlendData::GetContainerWeight
                    (*(FAttributeBlendData **)this,local_res20[0]);
  if (param_1->HighestWeight <= fVar6 && fVar6 != param_1->HighestWeight) {
    iVar5 = (param_1->DataPtrs).ArrayNum;
    param_1->HighestWeight = fVar6;
    param_1->HighestWeightedIndex = iVar5 + -1;
  }
  return;
}

// ForEachAttributeSet @ 147556080

void __thiscall
UE::Anim::FAttributeBlendData::ForEachAttributeSet
          (FAttributeBlendData *this,
          TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetRawIterator_&)>
          *param_1)

{
  int iVar1;
  FAttributeSet *pFVar2;
  FAttributeSet *pFVar3;
  undefined1 local_res8 [8];
  FAttributeBlendData *local_38;
  FAttributeSet *local_30;
  undefined4 local_28;
  
  iVar1 = (this->AttributeSets).ArrayNum;
  pFVar2 = (this->AttributeSets).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->AttributeSets).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Anim::FAttributeBlendData::FAttributeSet_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_28 = 0xffffffff;
    local_38 = this;
    local_30 = pFVar2;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_38);
    pFVar2 = pFVar2 + 1;
  }
  return;
}

// ForEachUniqueAttribute @ 147556190

void __thiscall
UE::Anim::FAttributeBlendData::ForEachUniqueAttribute
          (FAttributeBlendData *this,
          TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleRawIterator_&)> *param_1)

{
  int iVar1;
  FUniqueAttribute *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  FAttributeBlendData *local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 local_10;
  
  pFVar2 = (this->UniqueAttributes).AllocatorInstance.Data;
  iVar1 = (this->UniqueAttributes).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38 = SUB84(pFVar2,0);
  uStack_34 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_10 = 0xffffffff;
  local_20 = local_38;
  uStack_1c = uStack_34;
  local_28 = this;
  iStack_18 = iVar1;
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_28);
  return;
}

// GetBoneWeight @ 14755ab60

float __thiscall
UE::Anim::FAttributeBlendData::GetBoneWeight(FAttributeBlendData *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPerBoneBlendWeight *pFVar6;
  float *pfVar7;
  int *piVar8;
  FBlendSampleData *pFVar9;
  uint *puVar10;
  float fVar11;
  
  iVar1 = (this->PerBoneWeights).ArrayNum;
  if (iVar1 != 0) {
    if (((param_2 < 0) || (iVar1 <= param_2)) &&
       (bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3123039401467183411>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AttributeBlendData.cpp"
                           ,0x133,"PerBoneWeights.IsValidIndex(BoneIndex)"), bVar4)) {
      pcVar3 = (code *)swi(3);
      fVar11 = (float)(*pcVar3)();
      return fVar11;
    }
    pFVar6 = TArrayView<FPerBoneBlendWeight_const_,int>::operator[](&this->PerBoneWeights,param_2);
    if (pFVar6->SourceIndex + 1 == param_1) {
      pFVar6 = TArrayView<FPerBoneBlendWeight_const_,int>::operator[](&this->PerBoneWeights,param_2)
      ;
      return pFVar6->BlendWeight;
    }
    if (param_1 == 0) {
      pFVar6 = TArrayView<FPerBoneBlendWeight_const_,int>::operator[](&this->PerBoneWeights,param_2)
      ;
      return __real_3f800000 - pFVar6->BlendWeight;
    }
  }
  iVar1 = (this->Weights).ArrayNum;
  if (iVar1 == 0) {
    if ((this->BlendSampleDataCache).ArrayNum == 0) {
      fVar11 = 0.0;
    }
    else {
      if ((this->WeightIndices).ArrayNum != 0) {
        piVar8 = TArrayView<int_const_,int>::operator[](&this->WeightIndices,param_1);
        param_1 = *piVar8;
      }
      pFVar9 = TArrayView<FBlendSampleData_const_,int>::operator[]
                         (&this->BlendSampleDataCache,param_1);
      puVar10 = (uint *)TArrayView<int_const_,int>::operator[]
                                  (&this->PerBoneInterpolationIndices,param_2);
      uVar2 = *puVar10;
      if (((uVar2 == 0xffffffff) || ((int)uVar2 < 0)) ||
         ((pFVar9->PerBoneBlendData).ArrayNum <= (int)uVar2)) {
        fVar11 = pFVar9->TotalWeight;
        if (__real_3f800000 <= pFVar9->TotalWeight) {
          fVar11 = __real_3f800000;
        }
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
      }
      else {
        uVar5 = 0;
        if ((int)uVar2 < (pFVar9->PerBoneBlendData).ArrayNum) {
          uVar5 = ~uVar2 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          fVar11 = (float)(*pcVar3)();
          return fVar11;
        }
        fVar11 = *(float *)((pFVar9->PerBoneBlendData).AllocatorInstance.Data +
                           (longlong)(int)uVar2 * 4);
      }
    }
  }
  else {
    if (((param_2 < 0) || (iVar1 <= param_2)) &&
       (bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3123039401467183428>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AttributeBlendData.cpp"
                           ,0x144,"Weights.IsValidIndex(BoneIndex)"), bVar4)) {
      pcVar3 = (code *)swi(3);
      fVar11 = (float)(*pcVar3)();
      return fVar11;
    }
    pfVar7 = TArrayView<float_const_,int>::operator[](&this->Weights,param_2);
    fVar11 = *pfVar7;
    if (param_1 == 0) {
      fVar11 = __real_3f800000 - fVar11;
    }
  }
  return fVar11;
}

// GetContainerWeight @ 14755b450

float __thiscall
UE::Anim::FAttributeBlendData::GetContainerWeight(FAttributeBlendData *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  float *pfVar5;
  float fVar6;
  
  if ((this->Weights).ArrayNum == 0) {
    return this->UniformWeight;
  }
  iVar1 = (this->WeightIndices).ArrayNum;
  if (iVar1 != 0) {
    if ((param_1 < 0) || (iVar1 <= param_1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("WeightIndices.IsValidIndex(ContainerIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AttributeBlendData.cpp"
                         ,0x124,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar6 = (float)(*pcVar2)();
        return fVar6;
      }
    }
    piVar4 = TArrayView<int_const_,int>::operator[](&this->WeightIndices,param_1);
    param_1 = *piVar4;
  }
  pfVar5 = TArrayView<float_const_,int>::operator[](&this->Weights,param_1);
  return *pfVar5;
}

// HasBoneWeights @ 1475639b0

bool __thiscall UE::Anim::FAttributeBlendData::HasBoneWeights(FAttributeBlendData *this)

{
  return 0 < (this->HighestBoneWeightedIndices).ArrayNum;
}

// HasContainerWeights @ 1475639c0

bool __thiscall UE::Anim::FAttributeBlendData::HasContainerWeights(FAttributeBlendData *this)

{
  return (this->HighestBoneWeightedIndices).ArrayNum == 0;
}

// ProcessAttributes @ 147571fa0

void __thiscall
UE::Anim::FAttributeBlendData::ProcessAttributes
          (FAttributeBlendData *this,FStackAttributeContainer *param_1,int param_2,
          UScriptStruct *param_3)

{
  int iVar1;
  FAttributeId *pFVar2;
  FUniqueAttribute *pFVar3;
  uchar **ppuVar4;
  int *piVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *pTVar12;
  FAttributeSet *pFVar13;
  FUniqueAttribute *pFVar14;
  longlong lVar15;
  FAttributeSet *pFVar16;
  uint uVar17;
  uint uVar18;
  FAttributeId *pFVar19;
  undefined8 *puVar20;
  float fVar21;
  int local_c8 [2];
  uint local_c0;
  longlong local_b8;
  uchar *local_b0;
  int local_a8;
  uint local_a4;
  int local_a0;
  FAttributeBlendData *local_98;
  FAttributeId *local_90;
  undefined8 *local_88;
  FName local_78;
  FName FStack_70;
  int local_68;
  FName local_58;
  FName FStack_50;
  int local_48;
  
  local_98 = this;
  uVar8 = TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindTypeIndex
                    ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)param_1,
                     param_3);
  if (uVar8 != 0xffffffff) {
    uVar17 = 0;
    if ((int)uVar8 < *(int *)&param_1->field_0x28) {
      uVar17 = ~uVar8 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = *(int *)(*(longlong *)&param_1->field_0x20 + 8 + (longlong)(int)uVar8 * 0x10);
    puVar20 = *(undefined8 **)(*(longlong *)&param_1->field_0x20 + (longlong)(int)uVar8 * 0x10);
    local_a8 = iVar11;
    local_88 = puVar20;
    if ((iVar11 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar12 = TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::GetKeys
                        ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
                         param_1,uVar8);
    iVar9 = pTVar12->ArrayNum;
    pFVar19 = (FAttributeId *)(pTVar12->AllocatorInstance).Data;
    local_a0 = iVar9;
    local_90 = pFVar19;
    if ((iVar9 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_c0 = 0;
    if (0 < iVar9) {
      local_b8 = 0;
      do {
        uVar8 = local_c0;
        pFVar16 = (this->AttributeSets).AllocatorInstance.Data;
        iVar9 = (this->AttributeSets).ArrayNum;
        local_78 = pFVar19->Namespace;
        FStack_70 = pFVar19->Name;
        local_68 = pFVar19->Index;
        uVar17 = ~local_c0 >> 0x1f;
        for (pFVar13 = pFVar16; local_a4 = uVar17, pFVar13 != pFVar16 + iVar9; pFVar13 = pFVar13 + 1
            ) {
          pFVar2 = pFVar13->Identifier;
          if (((pFVar2->Index == local_68) && (pFVar2->Name == FStack_70)) &&
             (pFVar2->Namespace == local_78)) {
            lVar15 = ((longlong)pFVar13 - (longlong)pFVar16) / 6 +
                     ((longlong)pFVar13 - (longlong)pFVar16 >> 0x3f);
            uVar18 = (int)(lVar15 >> 3) - (int)(lVar15 >> 0x3f);
            if (uVar18 != 0xffffffff) {
              uVar10 = 0;
              if ((int)uVar18 < iVar9) {
                uVar10 = ~uVar18 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar16 = (this->AttributeSets).AllocatorInstance.Data + (int)uVar18;
              uVar18 = 0;
              if ((int)uVar8 < iVar11) {
                uVar18 = uVar17;
              }
              if ((uVar18 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              ppuVar4 = (pFVar16->DataPtrs).AllocatorInstance.Data;
              local_b0 = (uchar *)*puVar20;
              local_c8[0] = param_2;
              if (((ppuVar4 <= &local_b0) && (&local_b0 < ppuVar4 + (pFVar16->DataPtrs).ArrayMax))
                 && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar9 = (pFVar16->DataPtrs).ArrayNum;
              piVar5 = &(pFVar16->DataPtrs).ArrayMax;
              if (iVar9 == *piVar5) {
                iVar9 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<unsigned_char_const_*>_>
                                  (0x808,(ForElementType<unsigned_char_const_*> *)pFVar16,piVar5);
              }
              (pFVar16->DataPtrs).ArrayNum = iVar9 + 1;
              (pFVar16->DataPtrs).AllocatorInstance.Data[iVar9] = local_b0;
              piVar5 = (pFVar16->WeightIndices).AllocatorInstance.Data;
              if (((piVar5 <= local_c8) && (local_c8 < piVar5 + (pFVar16->WeightIndices).ArrayMax))
                 && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar9 = (pFVar16->WeightIndices).ArrayNum;
              piVar5 = &(pFVar16->WeightIndices).ArrayMax;
              if (iVar9 == *piVar5) {
                iVar9 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<int>_>
                                  (0x404,&(pFVar16->WeightIndices).AllocatorInstance,piVar5);
              }
              (pFVar16->WeightIndices).ArrayNum = iVar9 + 1;
              (pFVar16->WeightIndices).AllocatorInstance.Data[iVar9] = local_c8[0];
              fVar21 = GetContainerWeight(local_98,local_c8[0]);
              local_90 = pFVar19;
              local_88 = puVar20;
              local_c0 = uVar8;
              if (pFVar16->HighestWeight <= fVar21 && fVar21 != pFVar16->HighestWeight) {
                iVar9 = (pFVar16->DataPtrs).ArrayNum;
                pFVar16->HighestWeight = fVar21;
                pFVar16->HighestWeightedIndex = iVar9 + -1;
              }
              goto LAB_147572276;
            }
            break;
          }
        }
        pFVar3 = (this->UniqueAttributes).AllocatorInstance.Data;
        iVar9 = (this->UniqueAttributes).ArrayNum;
        for (pFVar14 = pFVar3; local_58 = local_78, FStack_50 = FStack_70, local_48 = local_68,
            pFVar14 != pFVar3 + iVar9; pFVar14 = pFVar14 + 1) {
          pFVar2 = pFVar14->Identifier;
          if (((pFVar2->Index == local_68) && (pFVar2->Name == FStack_70)) &&
             (pFVar2->Namespace == local_78)) {
            lVar15 = ((longlong)pFVar14 - (longlong)pFVar3) / 6 +
                     ((longlong)pFVar14 - (longlong)pFVar3 >> 0x3f);
            uVar17 = (int)(lVar15 >> 2) - (int)(lVar15 >> 0x3f);
            if (uVar17 != 0xffffffff) {
              uVar18 = ~uVar17 >> 0x1f;
              uVar8 = 0;
              if ((int)uVar17 < iVar9) {
                uVar8 = uVar18;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar3 = (this->UniqueAttributes).AllocatorInstance.Data;
              piVar5 = &(this->AttributeSets).ArrayMax;
              iVar11 = (this->AttributeSets).ArrayNum;
              if (iVar11 == *piVar5) {
                iVar11 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FAttributeBlendData::FAttributeSet>_>
                                   (0x830,(ForElementType<UE::Anim::FAttributeBlendData::FAttributeSet>
                                           *)this,piVar5);
              }
              (this->AttributeSets).ArrayNum = iVar11 + 1;
              pFVar16 = (this->AttributeSets).AllocatorInstance.Data + iVar11;
              (pFVar16->DataPtrs).AllocatorInstance.Data = (uchar **)0x0;
              (pFVar16->DataPtrs).ArrayNum = 0;
              (pFVar16->DataPtrs).ArrayMax = 0;
              (pFVar16->WeightIndices).AllocatorInstance.Data = (int *)0x0;
              (pFVar16->WeightIndices).ArrayNum = 0;
              (pFVar16->WeightIndices).ArrayMax = 0;
              pFVar16->Identifier = local_90;
              pFVar16->HighestWeight = -1.0;
              pFVar16->HighestWeightedIndex = -1;
              `UE::Anim::FAttributeBlendData::ProcessAttributes'::__l2::<lambda_3>::operator()
                        (&local_98,pFVar16,pFVar3[(int)uVar17].DataPtr,
                         pFVar3[(int)uVar17].WeightIndex);
              iVar11 = local_a8;
              uVar8 = 0;
              if ((int)local_c0 < local_a8) {
                uVar8 = local_a4;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              `UE::Anim::FAttributeBlendData::ProcessAttributes'::__l2::<lambda_3>::operator()
                        (&local_98,pFVar16,(uchar *)*local_88,param_2);
              uVar8 = 0;
              if ((int)uVar17 < (this->UniqueAttributes).ArrayNum) {
                uVar8 = uVar18;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar1 = (this->UniqueAttributes).ArrayNum;
              pFVar3 = (this->UniqueAttributes).AllocatorInstance.Data;
              iVar9 = iVar1 + ~uVar17;
              if (1 < iVar9) {
                iVar9 = 1;
              }
              if (iVar9 != 0) {
                memmove(pFVar3 + (int)uVar17,pFVar3 + (iVar1 - iVar9),(longlong)iVar9 * 0x18);
              }
              piVar5 = &(this->UniqueAttributes).ArrayNum;
              *piVar5 = *piVar5 + -1;
              Core::Private::
              ReallocShrink<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FAttributeBlendData::FUniqueAttribute>_>
                        (0x18,8,&(this->UniqueAttributes).AllocatorInstance,
                         (this->UniqueAttributes).ArrayNum,&(this->UniqueAttributes).ArrayMax);
              goto LAB_147572276;
            }
            break;
          }
        }
        if (iVar9 == (this->UniqueAttributes).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FAttributeBlendData::FUniqueAttribute>_>
                            (0x818,&(this->UniqueAttributes).AllocatorInstance,
                             &(this->UniqueAttributes).ArrayMax);
          (this->UniqueAttributes).ArrayNum = iVar9;
        }
        iVar9 = (this->UniqueAttributes).ArrayNum;
        (this->UniqueAttributes).ArrayNum = iVar9 + 1;
        pFVar3 = (this->UniqueAttributes).AllocatorInstance.Data;
        *(undefined8 *)&pFVar3[iVar9].field_0xc = 0;
        *(undefined4 *)((longlong)&pFVar3[iVar9].DataPtr + 4) = 0;
        pFVar3[iVar9].WeightIndex = param_2;
        uVar17 = 0;
        if ((int)uVar8 < iVar11) {
          uVar17 = ~uVar8 >> 0x1f;
        }
        pFVar3[iVar9].Identifier = pFVar19;
        if ((uVar17 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3[iVar9].DataPtr = (uchar *)*puVar20;
        local_90 = pFVar19;
        local_88 = puVar20;
        local_c0 = uVar8;
LAB_147572276:
        local_b8 = local_b8 + 1;
        local_c0 = local_c0 + 1;
        pFVar19 = local_90 + 1;
        puVar20 = local_88 + 2;
        local_90 = pFVar19;
        local_88 = puVar20;
      } while ((int)local_c0 < local_a0);
    }
  }
  return;
}

