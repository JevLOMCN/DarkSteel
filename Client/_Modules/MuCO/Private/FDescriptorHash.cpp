// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 5

// FDescriptorHash @ 14ab9f5d0

FDescriptorHash * __thiscall FDescriptorHash::FDescriptorHash(FDescriptorHash *this)

{
  this->Hash = 0;
  this->bStreamingEnabled = false;
  *(undefined8 *)&this->MinLODs = 0;
  *(undefined8 *)&(this->MinLODs).field_0x8 = 0;
  *(undefined8 *)&(this->MinLODs).field_0x20 = 0;
  *(undefined4 *)&(this->MinLODs).field_0x28 = 0;
  *(undefined4 *)&(this->MinLODs).field_0x2c = 0x80;
  *(undefined4 *)&(this->MinLODs).field_0x34 = 0;
  *(undefined4 *)&(this->MinLODs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MinLODs).field_0x40 = 0;
  *(undefined4 *)&(this->MinLODs).field_0x48 = 0;
  *(undefined8 *)&this->QualitySettingMinLODs = 0;
  *(undefined8 *)&(this->QualitySettingMinLODs).field_0x8 = 0;
  *(undefined8 *)&(this->QualitySettingMinLODs).field_0x20 = 0;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x28 = 0;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x2c = 0x80;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x34 = 0;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QualitySettingMinLODs).field_0x40 = 0;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x48 = 0;
  *(undefined8 *)&this->FirstRequestedLOD = 0;
  *(undefined8 *)&(this->FirstRequestedLOD).field_0x8 = 0;
  *(undefined8 *)&(this->FirstRequestedLOD).field_0x20 = 0;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x28 = 0;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x2c = 0x80;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x34 = 0;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FirstRequestedLOD).field_0x40 = 0;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x48 = 0;
  return this;
}

// ~FDescriptorHash @ 14aba24f0

void __thiscall FDescriptorHash::~FDescriptorHash(FDescriptorHash *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FirstRequestedLOD).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FirstRequestedLOD);
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->QualitySettingMinLODs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->QualitySettingMinLODs);
  *(undefined4 *)&(this->MinLODs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MinLODs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MinLODs);
  return;
}

// FDescriptorHash @ 14ac099a0

FDescriptorHash * __thiscall
FDescriptorHash::FDescriptorHash
          (FDescriptorHash *this,FCustomizableObjectInstanceDescriptor *param_1)

{
  uint *puVar1;
  FObjectPtr *pFVar2;
  FScriptContainerElement FVar3;
  ForAnyElementType FVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  uint uVar11;
  FCustomizableObjectSkeletalMeshParameterValue *pFVar12;
  FScriptContainerElement *pFVar13;
  FCustomizableObjectProjector *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined8 *puVar17;
  uint *puVar18;
  FObjectPtr *this_00;
  FCustomizableObjectSkeletalMeshParameterValue *pFVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  FCustomizableObjectProjector *pFVar23;
  FDescriptorHash *local_res8;
  FCustomizableObjectInstanceDescriptor *local_res10;
  FScriptContainerElement *local_res18;
  FScriptContainerElement *local_res20;
  FString local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  
  this->Hash = 0;
  this->bStreamingEnabled = false;
  *(undefined8 *)&this->MinLODs = 0;
  *(undefined8 *)&(this->MinLODs).field_0x8 = 0;
  *(undefined8 *)&(this->MinLODs).field_0x20 = 0;
  *(undefined4 *)&(this->MinLODs).field_0x28 = 0;
  *(undefined4 *)&(this->MinLODs).field_0x2c = 0x80;
  *(undefined4 *)&(this->MinLODs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MinLODs).field_0x34 = 0;
  *(undefined8 *)&(this->MinLODs).field_0x40 = 0;
  *(undefined4 *)&(this->MinLODs).field_0x48 = 0;
  *(undefined8 *)&this->QualitySettingMinLODs = 0;
  *(undefined8 *)&(this->QualitySettingMinLODs).field_0x8 = 0;
  *(undefined8 *)&(this->QualitySettingMinLODs).field_0x20 = 0;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x28 = 0;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x2c = 0x80;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x34 = 0;
  *(undefined8 *)&(this->QualitySettingMinLODs).field_0x40 = 0;
  *(undefined4 *)&(this->QualitySettingMinLODs).field_0x48 = 0;
  *(undefined8 *)&this->FirstRequestedLOD = 0;
  *(undefined8 *)&(this->FirstRequestedLOD).field_0x8 = 0;
  *(undefined8 *)&(this->FirstRequestedLOD).field_0x20 = 0;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x28 = 0;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x2c = 0x80;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x34 = 0;
  *(undefined8 *)&(this->FirstRequestedLOD).field_0x40 = 0;
  *(undefined4 *)&(this->FirstRequestedLOD).field_0x48 = 0;
  iVar9 = (param_1->BoolParameters).ArrayNum;
  pFVar13 = (param_1->BoolParameters).AllocatorInstance.Data;
  pFVar15 = pFVar13 + (longlong)iVar9 * 0x28;
  local_res8 = this;
  local_res10 = param_1;
  while( true ) {
    if ((param_1->BoolParameters).ArrayNum != iVar9) {
      `TCheckedPointerIterator<FCustomizableObjectBoolParameterValue_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res18);
    }
    if (pFVar13 == pFVar15) break;
    if (*(int *)(pFVar13 + 8) == 0) {
      pwVar10 = L"";
      iVar8 = 0;
    }
    else {
      pwVar10 = *(wchar_t **)pFVar13;
      iVar8 = *(int *)(pFVar13 + 8) + -1;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar10);
    FVar3 = pFVar13[0x10];
    uVar20 = (uVar6 - (byte)FVar3) * 0x100 ^ 0x9e3779b9 - uVar6;
    uVar21 = (((uint)(byte)FVar3 + (uint)(byte)FVar3) - uVar20) - uVar6 ^ uVar20 >> 0xd;
    uVar6 = ((uVar6 - (byte)FVar3) - uVar21) - uVar20 ^ uVar21 >> 0xc;
    uVar20 = (uVar20 - uVar6) - uVar21 ^ uVar6 << 0x10;
    uVar21 = (uVar21 - uVar20) - uVar6 ^ uVar20 >> 5;
    uVar6 = (uVar6 - uVar21) - uVar20 ^ uVar21 >> 3;
    uVar20 = (uVar20 - uVar6) - uVar21 ^ uVar6 << 10;
    uVar21 = (uVar21 - uVar20) - uVar6 ^ uVar20 >> 0xf;
    uVar20 = this->Hash - uVar21 ^ uVar21 >> 0xd;
    uVar6 = (-0x61c88647 - uVar21) - uVar20 ^ uVar20 << 8;
    uVar21 = (uVar21 - uVar6) - uVar20 ^ uVar6 >> 0xd;
    uVar20 = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 0xc;
    uVar6 = (uVar6 - uVar20) - uVar21 ^ uVar20 << 0x10;
    uVar21 = (uVar21 - uVar6) - uVar20 ^ uVar6 >> 5;
    uVar20 = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 3;
    uVar6 = (uVar6 - uVar20) - uVar21 ^ uVar20 << 10;
    this->Hash = (uVar21 - uVar6) - uVar20 ^ uVar6 >> 0xf;
    pFVar13 = pFVar13 + 0x28;
  }
  iVar9 = (param_1->IntParameters).ArrayNum;
  uVar7 = (ulonglong)iVar9;
  pFVar13 = (param_1->IntParameters).AllocatorInstance.Data;
  pFVar16 = pFVar13 + uVar7 * 0x40;
  local_res20 = (FScriptContainerElement *)CONCAT44(local_res20._4_4_,iVar9);
  pFVar15 = pFVar13 + 0x38;
  while( true ) {
    iVar9 = 0;
    if ((param_1->IntParameters).ArrayNum != (int)uVar7) {
      `TCheckedPointerIterator<FCustomizableObjectIntParameterValue_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_res18);
    }
    if (pFVar13 == pFVar16) break;
    if (*(int *)(pFVar15 + -0x30) == 0) {
      pwVar10 = L"";
      iVar8 = iVar9;
    }
    else {
      pwVar10 = *(wchar_t **)pFVar13;
      iVar8 = *(int *)(pFVar15 + -0x30) + -1;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar10);
    if (*(int *)(pFVar15 + -0x20) == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = *(wchar_t **)(pFVar15 + -0x28);
      iVar9 = *(int *)(pFVar15 + -0x20) + -1;
    }
    uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
    iVar9 = *(int *)pFVar15;
    uVar21 = uVar6 - uVar20 ^ uVar20 >> 0xd;
    uVar6 = (-0x61c88647 - uVar20) - uVar21 ^ uVar21 << 8;
    uVar20 = (uVar20 - uVar6) - uVar21 ^ uVar6 >> 0xd;
    uVar21 = (uVar21 - uVar20) - uVar6 ^ uVar20 >> 0xc;
    uVar6 = (uVar6 - uVar21) - uVar20 ^ uVar21 << 0x10;
    uVar20 = (uVar20 - uVar6) - uVar21 ^ uVar6 >> 5;
    uVar21 = (uVar21 - uVar20) - uVar6 ^ uVar20 >> 3;
    uVar6 = (uVar6 - uVar21) - uVar20 ^ uVar21 << 10;
    puVar17 = *(undefined8 **)(pFVar15 + -8);
    puVar22 = puVar17 + (longlong)iVar9 * 2;
    uVar6 = (uVar20 - uVar6) - uVar21 ^ uVar6 >> 0xf;
    while( true ) {
      if (*(int *)pFVar15 != iVar9) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res18);
      }
      if (puVar17 == puVar22) break;
      iVar8 = *(int *)(puVar17 + 1) + -1;
      if (*(int *)(puVar17 + 1) == 0) {
        pwVar10 = L"";
        iVar8 = 0;
      }
      else {
        pwVar10 = (wchar_t *)*puVar17;
      }
      uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar10);
      uVar6 = uVar6 - uVar20 ^ uVar20 >> 0xd;
      uVar21 = (-0x61c88647 - uVar6) - uVar20 ^ uVar6 << 8;
      uVar20 = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 0xd;
      uVar6 = (uVar6 - uVar20) - uVar21 ^ uVar20 >> 0xc;
      uVar21 = (uVar21 - uVar6) - uVar20 ^ uVar6 << 0x10;
      uVar20 = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 5;
      uVar6 = (uVar6 - uVar20) - uVar21 ^ uVar20 >> 3;
      uVar21 = (uVar21 - uVar6) - uVar20 ^ uVar6 << 10;
      uVar6 = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 0xf;
      puVar17 = puVar17 + 2;
    }
    pFVar15 = pFVar15 + 0x40;
    uVar21 = local_res8->Hash - uVar6 ^ uVar6 >> 0xd;
    uVar20 = (-0x61c88647 - uVar6) - uVar21 ^ uVar21 << 8;
    uVar11 = (uVar6 - uVar20) - uVar21 ^ uVar20 >> 0xd;
    uVar21 = (uVar21 - uVar11) - uVar20 ^ uVar11 >> 0xc;
    uVar6 = (uVar20 - uVar21) - uVar11 ^ uVar21 << 0x10;
    uVar11 = (uVar11 - uVar6) - uVar21 ^ uVar6 >> 5;
    uVar20 = (uVar21 - uVar11) - uVar6 ^ uVar11 >> 3;
    uVar6 = (uVar6 - uVar20) - uVar11 ^ uVar20 << 10;
    uVar7 = (ulonglong)local_res20 & 0xffffffff;
    local_res8->Hash = (uVar11 - uVar6) - uVar20 ^ uVar6 >> 0xf;
    pFVar13 = pFVar13 + 0x40;
    this = local_res8;
    param_1 = local_res10;
  }
  iVar9 = (param_1->FloatParameters).ArrayNum;
  uVar7 = (ulonglong)iVar9;
  pFVar13 = (param_1->FloatParameters).AllocatorInstance.Data;
  local_res20 = (FScriptContainerElement *)CONCAT44(local_res20._4_4_,iVar9);
  pFVar15 = pFVar13 + 0x30;
  pFVar16 = pFVar13 + uVar7 * 0x38;
  while( true ) {
    iVar9 = 0;
    if ((param_1->FloatParameters).ArrayNum != (int)uVar7) {
      `TCheckedPointerIterator<FCustomizableObjectFloatParameterValue_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res18);
    }
    if (pFVar13 == pFVar16) break;
    if (*(int *)(pFVar15 + -0x28) == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = *(wchar_t **)pFVar13;
      iVar9 = *(int *)(pFVar15 + -0x28) + -1;
    }
    uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
    uVar6 = *(uint *)(pFVar15 + -0x20);
    puVar18 = *(uint **)(pFVar15 + -8);
    iVar9 = *(int *)pFVar15;
    uVar11 = uVar20 - uVar6 ^ uVar6 >> 0xd;
    uVar20 = (-0x61c88647 - uVar11) - uVar6 ^ uVar11 << 8;
    puVar1 = puVar18 + iVar9;
    uVar21 = (uVar6 - uVar20) - uVar11 ^ uVar20 >> 0xd;
    uVar11 = (uVar11 - uVar21) - uVar20 ^ uVar21 >> 0xc;
    uVar6 = (uVar20 - uVar11) - uVar21 ^ uVar11 << 0x10;
    uVar20 = (uVar21 - uVar6) - uVar11 ^ uVar6 >> 5;
    uVar21 = (uVar11 - uVar20) - uVar6 ^ uVar20 >> 3;
    uVar6 = (uVar6 - uVar21) - uVar20 ^ uVar21 << 10;
    uVar6 = (uVar20 - uVar6) - uVar21 ^ uVar6 >> 0xf;
    while( true ) {
      if (*(int *)pFVar15 != iVar9) {
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res18);
      }
      if (puVar18 == puVar1) break;
      uVar20 = *puVar18;
      uVar21 = uVar6 - uVar20 ^ uVar20 >> 0xd;
      uVar6 = (-0x61c88647 - uVar21) - uVar20 ^ uVar21 << 8;
      uVar11 = (uVar20 - uVar6) - uVar21 ^ uVar6 >> 0xd;
      uVar20 = (uVar21 - uVar11) - uVar6 ^ uVar11 >> 0xc;
      uVar6 = (uVar6 - uVar20) - uVar11 ^ uVar20 << 0x10;
      uVar21 = (uVar11 - uVar6) - uVar20 ^ uVar6 >> 5;
      uVar20 = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 3;
      uVar6 = (uVar6 - uVar20) - uVar21 ^ uVar20 << 10;
      uVar6 = (uVar21 - uVar6) - uVar20 ^ uVar6 >> 0xf;
      puVar18 = puVar18 + 1;
    }
    pFVar15 = pFVar15 + 0x38;
    uVar21 = this->Hash - uVar6 ^ uVar6 >> 0xd;
    uVar20 = (-0x61c88647 - uVar6) - uVar21 ^ uVar21 << 8;
    uVar11 = (uVar6 - uVar20) - uVar21 ^ uVar20 >> 0xd;
    uVar21 = (uVar21 - uVar11) - uVar20 ^ uVar11 >> 0xc;
    uVar6 = (uVar20 - uVar21) - uVar11 ^ uVar21 << 0x10;
    uVar11 = (uVar11 - uVar6) - uVar21 ^ uVar6 >> 5;
    uVar20 = (uVar21 - uVar11) - uVar6 ^ uVar11 >> 3;
    uVar6 = (uVar6 - uVar20) - uVar11 ^ uVar20 << 10;
    uVar7 = (ulonglong)local_res20 & 0xffffffff;
    this->Hash = (uVar11 - uVar6) - uVar20 ^ uVar6 >> 0xf;
    pFVar13 = pFVar13 + 0x38;
    param_1 = local_res10;
  }
  iVar9 = (param_1->TextureParameters).ArrayNum;
  uVar7 = (ulonglong)iVar9;
  pFVar13 = (param_1->TextureParameters).AllocatorInstance.Data;
  local_res20 = (FScriptContainerElement *)CONCAT44(local_res20._4_4_,iVar9);
  pFVar15 = pFVar13 + 0x30;
  pFVar16 = pFVar13 + uVar7 * 0x38;
  while( true ) {
    if ((param_1->TextureParameters).ArrayNum != (int)uVar7) {
      `TCheckedPointerIterator<FCustomizableObjectTextureParameterValue_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res18);
    }
    if (pFVar13 == pFVar16) break;
    iVar9 = *(int *)(pFVar15 + -0x28) + -1;
    if (*(int *)(pFVar15 + -0x28) == 0) {
      pwVar10 = L"";
      iVar9 = 0;
    }
    else {
      pwVar10 = *(wchar_t **)pFVar13;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
    this_00 = *(FObjectPtr **)(pFVar15 + -8);
    iVar9 = *(int *)pFVar15;
    pFVar2 = this_00 + iVar9;
    uVar20 = ((uint)(*(ulonglong *)(pFVar15 + -0x20) >> 0x14) & 0xffff ^
             (uint)(*(ulonglong *)(pFVar15 + -0x20) >> 4)) * -0x7a143595;
    uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
    uVar20 = uVar20 >> 0x10 ^ uVar20;
    uVar21 = uVar6 - uVar20 ^ uVar20 >> 0xd;
    uVar6 = (-0x61c88647 - uVar21) - uVar20 ^ uVar21 << 8;
    uVar20 = (uVar20 - uVar6) - uVar21 ^ uVar6 >> 0xd;
    uVar21 = (uVar21 - uVar20) - uVar6 ^ uVar20 >> 0xc;
    uVar6 = (uVar6 - uVar21) - uVar20 ^ uVar21 << 0x10;
    uVar20 = (uVar20 - uVar6) - uVar21 ^ uVar6 >> 5;
    uVar21 = (uVar21 - uVar20) - uVar6 ^ uVar20 >> 3;
    uVar6 = (uVar6 - uVar21) - uVar20 ^ uVar21 << 10;
    uVar6 = (uVar20 - uVar6) - uVar21 ^ uVar6 >> 0xf;
    while( true ) {
      if (*(int *)pFVar15 != iVar9) {
        `TCheckedPointerIterator<TObjectPtr<UTexture>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (this_00 == pFVar2) break;
      FObjectPtr::GetPathName(this_00,&local_68);
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
      iVar8 = local_68.Data.ArrayNum + -1;
      FVar4.Data = local_68.Data.AllocatorInstance.Data;
      if (local_68.Data.ArrayNum == 0) {
        iVar8 = 0;
        FVar4.Data = (FScriptContainerElement *)L"";
      }
      uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar4.Data);
      uVar6 = uVar6 - uVar20 ^ uVar20 >> 0xd;
      uVar21 = (-0x61c88647 - uVar20) - uVar6 ^ uVar6 << 8;
      uVar20 = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 0xd;
      uVar6 = (uVar6 - uVar20) - uVar21 ^ uVar20 >> 0xc;
      uVar21 = (uVar21 - uVar6) - uVar20 ^ uVar6 << 0x10;
      uVar20 = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 5;
      uVar6 = (uVar6 - uVar20) - uVar21 ^ uVar20 >> 3;
      uVar21 = (uVar21 - uVar6) - uVar20 ^ uVar6 << 10;
      uVar6 = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 0xf;
      if (FVar5.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar5.Data);
      }
      this_00 = this_00 + 1;
    }
    pFVar13 = pFVar13 + 0x38;
    uVar21 = local_res8->Hash - uVar6 ^ uVar6 >> 0xd;
    uVar20 = (-0x61c88647 - uVar6) - uVar21 ^ uVar21 << 8;
    uVar11 = (uVar6 - uVar21) - uVar20 ^ uVar20 >> 0xd;
    uVar21 = (uVar21 - uVar11) - uVar20 ^ uVar11 >> 0xc;
    uVar6 = (uVar20 - uVar21) - uVar11 ^ uVar21 << 0x10;
    uVar11 = (uVar11 - uVar6) - uVar21 ^ uVar6 >> 5;
    uVar20 = (uVar21 - uVar11) - uVar6 ^ uVar11 >> 3;
    uVar6 = (uVar6 - uVar20) - uVar11 ^ uVar20 << 10;
    uVar7 = (ulonglong)local_res20 & 0xffffffff;
    local_res8->Hash = (uVar11 - uVar6) - uVar20 ^ uVar6 >> 0xf;
    pFVar15 = pFVar15 + 0x38;
    this = local_res8;
    param_1 = local_res10;
  }
  iVar9 = (param_1->SkeletalMeshParameters).ArrayNum;
  pFVar12 = (FCustomizableObjectSkeletalMeshParameterValue *)
            (param_1->SkeletalMeshParameters).AllocatorInstance.Data;
  pFVar19 = pFVar12 + iVar9;
  while( true ) {
    if ((param_1->SkeletalMeshParameters).ArrayNum != iVar9) {
      `TCheckedPointerIterator<FCustomizableObjectSkeletalMeshParameterValue_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar12 == pFVar19) break;
    uVar6 = ::GetTypeHash(pFVar12);
    uVar21 = this->Hash - uVar6 ^ uVar6 >> 0xd;
    uVar20 = (-0x61c88647 - uVar6) - uVar21 ^ uVar21 << 8;
    uVar11 = (uVar6 - uVar21) - uVar20 ^ uVar20 >> 0xd;
    uVar21 = (uVar21 - uVar11) - uVar20 ^ uVar11 >> 0xc;
    uVar6 = (uVar20 - uVar21) - uVar11 ^ uVar21 << 0x10;
    uVar11 = (uVar11 - uVar6) - uVar21 ^ uVar6 >> 5;
    uVar20 = (uVar21 - uVar11) - uVar6 ^ uVar11 >> 3;
    uVar6 = (uVar6 - uVar20) - uVar11 ^ uVar20 << 10;
    this->Hash = (uVar11 - uVar6) - uVar20 ^ uVar6 >> 0xf;
    pFVar12 = pFVar12 + 1;
  }
  iVar9 = (param_1->VectorParameters).ArrayNum;
  pFVar15 = (param_1->VectorParameters).AllocatorInstance.Data;
  pFVar13 = pFVar15 + (longlong)iVar9 * 0x30;
  while( true ) {
    if ((param_1->VectorParameters).ArrayNum != iVar9) {
      `TCheckedPointerIterator<FCustomizableObjectVectorParameterValue_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar15 == pFVar13) break;
    iVar8 = *(int *)(pFVar15 + 8) + -1;
    if (*(int *)(pFVar15 + 8) == 0) {
      pwVar10 = L"";
      iVar8 = 0;
    }
    else {
      pwVar10 = *(wchar_t **)pFVar15;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar10);
    uVar20 = FCrc::MemCrc_DEPRECATED(pFVar15 + 0x10,0x10,0);
    uVar21 = uVar6 - uVar20 ^ uVar20 >> 0xd;
    uVar6 = (-0x61c88647 - uVar20) - uVar21 ^ uVar21 << 8;
    uVar11 = (uVar20 - uVar6) - uVar21 ^ uVar6 >> 0xd;
    uVar20 = (uVar21 - uVar11) - uVar6 ^ uVar11 >> 0xc;
    uVar6 = (uVar6 - uVar20) - uVar11 ^ uVar20 << 0x10;
    uVar21 = (uVar11 - uVar6) - uVar20 ^ uVar6 >> 5;
    uVar20 = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 3;
    uVar6 = (uVar6 - uVar20) - uVar21 ^ uVar20 << 10;
    uVar21 = (uVar21 - uVar6) - uVar20 ^ uVar6 >> 0xf;
    uVar20 = this->Hash - uVar21 ^ uVar21 >> 0xd;
    uVar6 = (-0x61c88647 - uVar20) - uVar21 ^ uVar20 << 8;
    uVar21 = (uVar21 - uVar20) - uVar6 ^ uVar6 >> 0xd;
    uVar20 = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 0xc;
    uVar6 = (uVar6 - uVar20) - uVar21 ^ uVar20 << 0x10;
    uVar21 = (uVar21 - uVar6) - uVar20 ^ uVar6 >> 5;
    uVar20 = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 3;
    uVar6 = (uVar6 - uVar20) - uVar21 ^ uVar20 << 10;
    this->Hash = (uVar21 - uVar6) - uVar20 ^ uVar6 >> 0xf;
    pFVar15 = pFVar15 + 0x30;
  }
  iVar9 = (param_1->ProjectorParameters).ArrayNum;
  uVar7 = (ulonglong)iVar9;
  pFVar13 = (param_1->ProjectorParameters).AllocatorInstance.Data;
  local_res18 = (FScriptContainerElement *)CONCAT44(local_res18._4_4_,iVar9);
  pFVar15 = pFVar13 + 0x60;
  pFVar16 = pFVar13 + uVar7 * 0x68;
  while( true ) {
    local_res20 = pFVar13;
    if ((param_1->ProjectorParameters).ArrayNum != (int)uVar7) {
      `TCheckedPointerIterator<FCustomizableObjectProjectorParameterValue_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar13 == pFVar16) break;
    iVar9 = *(int *)(pFVar15 + -0x58) + -1;
    if (*(int *)(pFVar15 + -0x58) == 0) {
      pwVar10 = L"";
      iVar9 = 0;
    }
    else {
      pwVar10 = *(wchar_t **)pFVar13;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
    uVar20 = ::GetTypeHash((FCustomizableObjectProjector *)(pFVar15 + -0x50));
    iVar9 = *(int *)pFVar15;
    uVar21 = uVar6 - uVar20 ^ uVar20 >> 0xd;
    uVar6 = (-0x61c88647 - uVar20) - uVar21 ^ uVar21 << 8;
    uVar11 = (uVar20 - uVar6) - uVar21 ^ uVar6 >> 0xd;
    uVar20 = (uVar21 - uVar11) - uVar6 ^ uVar11 >> 0xc;
    uVar6 = (uVar6 - uVar20) - uVar11 ^ uVar20 << 0x10;
    uVar21 = (uVar11 - uVar6) - uVar20 ^ uVar6 >> 5;
    uVar20 = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 3;
    uVar6 = (uVar6 - uVar20) - uVar21 ^ uVar20 << 10;
    pFVar14 = *(FCustomizableObjectProjector **)(pFVar15 + -8);
    uVar6 = (uVar21 - uVar6) - uVar20 ^ uVar6 >> 0xf;
    pFVar23 = pFVar14 + iVar9;
    while( true ) {
      if (*(int *)pFVar15 != iVar9) {
        `TCheckedPointerIterator<FCustomizableObjectProjector_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar14 == pFVar23) break;
      uVar20 = ::GetTypeHash(pFVar14);
      uVar6 = uVar6 - uVar20 ^ uVar20 >> 0xd;
      uVar21 = (-0x61c88647 - uVar20) - uVar6 ^ uVar6 << 8;
      uVar20 = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 0xd;
      uVar6 = (uVar6 - uVar20) - uVar21 ^ uVar20 >> 0xc;
      uVar21 = (uVar21 - uVar6) - uVar20 ^ uVar6 << 0x10;
      uVar20 = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 5;
      uVar6 = (uVar6 - uVar20) - uVar21 ^ uVar20 >> 3;
      uVar21 = (uVar21 - uVar6) - uVar20 ^ uVar6 << 10;
      uVar6 = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 0xf;
      pFVar14 = pFVar14 + 1;
    }
    pFVar13 = local_res20 + 0x68;
    uVar21 = this->Hash - uVar6 ^ uVar6 >> 0xd;
    uVar20 = (-0x61c88647 - uVar21) - uVar6 ^ uVar21 << 8;
    uVar11 = (uVar6 - uVar21) - uVar20 ^ uVar20 >> 0xd;
    uVar21 = (uVar21 - uVar11) - uVar20 ^ uVar11 >> 0xc;
    uVar6 = (uVar20 - uVar21) - uVar11 ^ uVar21 << 0x10;
    uVar11 = (uVar11 - uVar6) - uVar21 ^ uVar6 >> 5;
    uVar20 = (uVar21 - uVar11) - uVar6 ^ uVar11 >> 3;
    uVar6 = (uVar6 - uVar20) - uVar11 ^ uVar20 << 10;
    uVar7 = (ulonglong)local_res18 & 0xffffffff;
    this->Hash = (uVar11 - uVar6) - uVar20 ^ uVar6 >> 0xf;
    pFVar15 = pFVar15 + 0x68;
    param_1 = local_res10;
  }
  iVar9 = (param_1->TransformParameters).ArrayNum;
  uVar7 = (ulonglong)iVar9;
  pFVar13 = (param_1->TransformParameters).AllocatorInstance.Data;
  local_res20 = pFVar13 + uVar7 * 0x80;
  local_res8 = (FDescriptorHash *)CONCAT44(local_res8._4_4_,iVar9);
  pFVar15 = pFVar13 + 0x30;
  while( true ) {
    pFVar16 = local_res20;
    local_res18 = pFVar15;
    if ((param_1->TransformParameters).ArrayNum != (int)uVar7) {
      `TCheckedPointerIterator<FCustomizableObjectTransformParameterValue_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_res10);
    }
    if (pFVar13 == pFVar16) break;
    iVar9 = *(int *)(pFVar15 + -0x28) + -1;
    if (*(int *)(pFVar15 + -0x28) == 0) {
      pwVar10 = L"";
      iVar9 = 0;
    }
    else {
      pwVar10 = *(wchar_t **)pFVar13;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
                    /* WARNING: Load size is inaccurate */
    local_68.Data.AllocatorInstance.Data = *pFVar15;
    local_68.Data._8_8_ = *(undefined8 *)(pFVar15 + 8);
    local_58 = *(undefined8 *)(pFVar15 + 0x10);
    uVar20 = FCrc::MemCrc_DEPRECATED(&local_68,0x18,0);
                    /* WARNING: Load size is inaccurate */
    local_68.Data.AllocatorInstance.Data = pFVar15[-0x20];
    local_68.Data._8_8_ = *(undefined8 *)(pFVar15 + -0x18);
    local_58 = *(undefined8 *)(pFVar15 + -0x10);
    uStack_50 = *(undefined8 *)(pFVar15 + -8);
    uVar21 = FCrc::MemCrc_DEPRECATED(&local_68,0x20,0);
    uVar20 = uVar20 * 0x40 + (uVar20 >> 2) + uVar21 + 0x9e3779b9 ^ uVar20;
                    /* WARNING: Load size is inaccurate */
    local_68.Data.AllocatorInstance.Data = local_res18[0x20];
    local_68.Data._8_8_ = *(undefined8 *)(local_res18 + 0x28);
    local_58 = *(undefined8 *)(local_res18 + 0x30);
    uVar21 = FCrc::MemCrc_DEPRECATED(&local_68,0x18,0);
    uVar20 = uVar20 * 0x40 + (uVar20 >> 2) + uVar21 + 0x9e3779b9 ^ uVar20;
    uVar21 = uVar6 - uVar20 ^ uVar20 >> 0xd;
    uVar6 = (-0x61c88647 - uVar21) - uVar20 ^ uVar21 << 8;
    uVar11 = (uVar20 - uVar6) - uVar21 ^ uVar6 >> 0xd;
    uVar20 = (uVar21 - uVar11) - uVar6 ^ uVar11 >> 0xc;
    uVar6 = (uVar6 - uVar20) - uVar11 ^ uVar20 << 0x10;
    uVar21 = (uVar11 - uVar6) - uVar20 ^ uVar6 >> 5;
    pFVar13 = pFVar13 + 0x80;
    uVar20 = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 3;
    uVar6 = (uVar6 - uVar20) - uVar21 ^ uVar20 << 10;
    uVar21 = (uVar21 - uVar6) - uVar20 ^ uVar6 >> 0xf;
    uVar20 = this->Hash - uVar21 ^ uVar21 >> 0xd;
    uVar6 = (-0x61c88647 - uVar20) - uVar21 ^ uVar20 << 8;
    uVar21 = (uVar21 - uVar20) - uVar6 ^ uVar6 >> 0xd;
    uVar20 = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 0xc;
    uVar6 = (uVar6 - uVar20) - uVar21 ^ uVar20 << 0x10;
    uVar21 = (uVar21 - uVar6) - uVar20 ^ uVar6 >> 5;
    uVar20 = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 3;
    uVar6 = (uVar6 - uVar20) - uVar21 ^ uVar20 << 10;
    uVar7 = (ulonglong)local_res8 & 0xffffffff;
    this->Hash = (uVar21 - uVar6) - uVar20 ^ uVar6 >> 0xf;
    pFVar15 = local_res18 + 0x80;
  }
  uVar6 = param_1->State;
  uVar21 = this->Hash - uVar6 ^ uVar6 >> 0xd;
  uVar20 = (-0x61c88647 - uVar21) - uVar6 ^ uVar21 << 8;
  uVar11 = (uVar6 - uVar21) - uVar20 ^ uVar20 >> 0xd;
  uVar21 = (uVar21 - uVar11) - uVar20 ^ uVar11 >> 0xc;
  uVar6 = (uVar20 - uVar21) - uVar11 ^ uVar21 << 0x10;
  uVar11 = (uVar11 - uVar6) - uVar21 ^ uVar6 >> 5;
  uVar20 = (uVar21 - uVar11) - uVar6 ^ uVar11 >> 3;
  uVar6 = (uVar6 - uVar20) - uVar11 ^ uVar20 << 10;
  uVar6 = (uVar11 - uVar6) - uVar20 ^ uVar6 >> 0xf;
  this->Hash = uVar6;
  iVar9 = uVar6 - param_1->bBuildParameterRelevancy;
  uVar21 = 0x9e3779b9 - uVar6 ^ iVar9 * 0x100;
  uVar20 = (param_1->bBuildParameterRelevancy - uVar21) - iVar9 ^ uVar21 >> 0xd;
  uVar6 = (iVar9 - uVar20) - uVar21 ^ uVar20 >> 0xc;
  uVar21 = (uVar21 - uVar6) - uVar20 ^ uVar6 << 0x10;
  uVar20 = (uVar20 - uVar6) - uVar21 ^ uVar21 >> 5;
  uVar6 = (uVar6 - uVar20) - uVar21 ^ uVar20 >> 3;
  uVar21 = (uVar21 - uVar6) - uVar20 ^ uVar6 << 10;
  this->Hash = (uVar20 - uVar21) - uVar6 ^ uVar21 >> 0xf;
  this->bStreamingEnabled = param_1->bStreamingEnabled;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&this->MinLODs,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&param_1->MinLOD);
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&this->QualitySettingMinLODs,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&param_1->QualitySettingMinLODs);
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&this->FirstRequestedLOD,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&param_1->FirstRequestedLOD);
  return this;
}

// IsSubset @ 14ac27f40

/* WARNING: Type propagation algorithm not settling */

bool __thiscall FDescriptorHash::IsSubset(FDescriptorHash *this,FDescriptorHash *param_1)

{
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  TTuple<FName,unsigned_char> *pTVar10;
  longlong lVar11;
  char *pcVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1a8 [8];
  ulonglong local_1a0;
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *local_168;
  int iStack_160;
  uint uStack_15c;
  undefined1 *local_158;
  undefined4 uStack_150;
  int iStack_14c;
  int local_148;
  int iStack_140;
  undefined4 uStack_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined4 local_74;
  undefined4 local_54;
  
  if (this->Hash == param_1->Hash) {
    if ((this->bStreamingEnabled != false) && (param_1->bStreamingEnabled != false)) {
      return true;
    }
    iVar17 = *(int *)&(this->MinLODs).field_0x28;
    pTVar1 = &this->MinLODs;
    puVar2 = &(this->MinLODs).field_0x10;
    iStack_160 = 0;
    local_1a0 = 1;
    local_148 = 0;
    uStack_15c = 1;
    iStack_14c = 0;
    if (iVar17 != 0) {
      puVar20 = *(uint **)&(this->MinLODs).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)puVar2;
      }
      uStack_15c = *puVar20;
      local_148 = 0;
      while (uStack_15c == 0) {
        lVar11 = (longlong)iStack_160;
        local_148 = local_148 + 0x20;
        iStack_160 = iStack_160 + 1;
        uStack_15c = 1;
        iStack_14c = iVar17;
        if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_160)
        goto LAB_14ac2800d;
        uStack_15c = puVar20[lVar11 + 1];
      }
      uStack_15c = -uStack_15c & uStack_15c;
      uVar3 = (ulonglong)uStack_15c * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_138 = (int)lVar11;
      iStack_14c = local_148 + -1 + local_138;
      if (iVar17 < iStack_14c) {
        iStack_14c = iVar17;
      }
    }
LAB_14ac2800d:
    uVar18 = *(uint *)&(this->MinLODs).field_0x28;
    iStack_140 = *(int *)&(this->MinLODs).field_0x8 - *(int *)&(this->MinLODs).field_0x34;
    uVar16 = uVar18 & 0xffffffe0;
    TStack_118._padding_ = CONCAT44(uStack_15c,iStack_160);
    uStack_150 = 0xffffffff;
    TStack_118.CurrentBitIndex = iStack_14c;
    TStack_118.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar18 >> 5;
    TStack_118._28_4_ = local_74;
    TStack_118.BaseBitIndex = local_148;
    uStack_f8 = CONCAT44(uStack_13c,iStack_140);
    local_168 = pTVar1;
    local_158 = puVar2;
    local_120 = pTVar1;
    TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar18 < 0) || (iVar17 < (int)uVar18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    uVar4 = *(uint *)&(this->MinLODs).field_0x28;
    if (uVar18 != uVar4) {
      puVar19 = *(undefined1 **)&(this->MinLODs).field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = puVar2;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
      while (uVar18 == 0) {
        lVar11 = (longlong)iVar14;
        uVar16 = uVar16 + 0x20;
        iVar14 = iVar14 + 1;
        uVar18 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14ac2810e;
        uVar18 = *(uint *)(puVar19 + lVar11 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_134 = (int)lVar11;
      uVar18 = local_134 + -1 + uVar16;
      if ((int)uVar4 < (int)uVar18) {
        uVar18 = uVar4;
      }
    }
LAB_14ac2810e:
    iVar17 = 0;
    while( true ) {
      pTVar7 = local_120;
      if (*(int *)&local_120->field_0x8 - *(int *)&local_120->field_0x34 != (int)uStack_f8) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      lVar11 = (longlong)TStack_118.CurrentBitIndex;
      if (((TStack_118.CurrentBitIndex == uVar18) &&
          (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar7 == pTVar1)) {
        puVar2 = &(this->QualitySettingMinLODs).field_0x10;
        iVar14 = *(int *)&(this->QualitySettingMinLODs).field_0x28;
        pTVar1 = &this->QualitySettingMinLODs;
        uStack_18c = (uint)local_1a0;
        iStack_17c = iVar17;
        local_178 = iVar17;
        if (iVar14 == 0) goto LAB_14ac2822d;
        puVar20 = *(uint **)&(this->QualitySettingMinLODs).field_0x20;
        if (puVar20 == (uint *)0x0) {
          puVar20 = (uint *)puVar2;
        }
        uVar18 = *puVar20;
        goto joined_r0x00014ac281e8;
      }
      lVar5 = *(longlong *)pTVar7;
      pTVar10 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                        *)&param_1->MinLODs,*(FName *)(lVar5 + lVar11 * 0x14));
      pbVar13 = &pTVar10->field_0x8;
      if (pTVar10 == (TTuple<FName,unsigned_char> *)0x0) {
        pbVar13 = (byte *)0x0;
      }
      if ((pbVar13 == (byte *)0x0) || (*(byte *)(lVar5 + lVar11 * 0x14 + 8) < *pbVar13)) break;
      TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
    }
  }
  return false;
joined_r0x00014ac281e8:
  if (uVar18 != 0) goto LAB_14ac28208;
  lVar11 = (longlong)iVar17;
  local_178 = local_178 + 0x20;
  iVar17 = iVar17 + 1;
  iStack_17c = iVar14;
  if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ac2822d;
  uVar18 = puVar20[lVar11 + 1];
  goto joined_r0x00014ac281e8;
LAB_14ac28208:
  uStack_18c = -uVar18 & uVar18;
  uVar3 = (ulonglong)uStack_18c * 2 + 1;
  lVar11 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  local_130 = (int)lVar11;
  iStack_17c = local_178 + -1 + local_130;
  if (iVar14 < iStack_17c) {
    iStack_17c = iVar14;
  }
LAB_14ac2822d:
  iStack_174 = local_54;
  iStack_170 = *(int *)&(this->QualitySettingMinLODs).field_0x8 -
               *(int *)&(this->QualitySettingMinLODs).field_0x34;
  uVar18 = *(uint *)&(this->QualitySettingMinLODs).field_0x28;
  uVar16 = uVar18 & 0xffffffe0;
  TStack_e8._padding_ = CONCAT44(uStack_18c,iVar17);
  uStack_180 = 0xffffffff;
  TStack_e8.CurrentBitIndex = iStack_17c;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_e8._28_4_ = local_54;
  TStack_e8.BaseBitIndex = local_178;
  uStack_c8 = CONCAT44(uStack_16c,iStack_170);
  local_198 = pTVar1;
  iStack_190 = iVar17;
  local_188 = puVar2;
  local_f0 = pTVar1;
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar18 < 0) || (iVar14 < (int)uVar18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  uVar4 = *(uint *)&(this->QualitySettingMinLODs).field_0x28;
  if (uVar18 != uVar4) {
    puVar19 = *(undefined1 **)&(this->QualitySettingMinLODs).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar2;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar11 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14ac2833d;
      uVar18 = *(uint *)(puVar19 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_12c = (int)lVar11;
    uVar18 = local_12c + -1 + uVar16;
    if ((int)uVar4 < (int)uVar18) {
      uVar18 = uVar4;
    }
  }
LAB_14ac2833d:
  while( true ) {
    pTVar7 = local_f0;
    if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    lVar11 = (longlong)TStack_e8.CurrentBitIndex;
    if (((TStack_e8.CurrentBitIndex == uVar18) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar7 == pTVar1))
    break;
    lVar5 = *(longlong *)pTVar7;
    pTVar10 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                      *)&param_1->QualitySettingMinLODs,*(FName *)(lVar5 + lVar11 * 0x14));
    pcVar12 = &pTVar10->field_0x8;
    if (pTVar10 == (TTuple<FName,unsigned_char> *)0x0) {
      pcVar12 = (char *)0x0;
    }
    if (pcVar12 == (char *)0x0) {
      return false;
    }
    if (*(char *)(lVar5 + lVar11 * 0x14 + 8) != *pcVar12) {
      return false;
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  iStack_170 = *(int *)&(this->FirstRequestedLOD).field_0x8 -
               *(int *)&(this->FirstRequestedLOD).field_0x34;
  if (iStack_170 !=
      *(int *)&(param_1->FirstRequestedLOD).field_0x8 -
      *(int *)&(param_1->FirstRequestedLOD).field_0x34) {
    return false;
  }
  iStack_190 = 0;
  puVar2 = &(this->FirstRequestedLOD).field_0x10;
  iVar17 = *(int *)&(this->FirstRequestedLOD).field_0x28;
  pTVar1 = &this->FirstRequestedLOD;
  iStack_17c = iStack_190;
  local_178 = iStack_190;
  if (iVar17 != 0) {
    puVar20 = *(uint **)&(this->FirstRequestedLOD).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uVar18 = *puVar20;
    while (uVar18 == 0) {
      lVar11 = (longlong)iStack_190;
      local_178 = local_178 + 0x20;
      iStack_190 = iStack_190 + 1;
      iStack_17c = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190) goto LAB_14ac28481;
      uVar18 = puVar20[lVar11 + 1];
    }
    local_1a0 = (ulonglong)(-uVar18 & uVar18);
    uVar3 = local_1a0 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_128 = (int)lVar11;
    iStack_17c = local_178 + -1 + local_128;
    if (iVar17 < iStack_17c) {
      iStack_17c = iVar17;
    }
  }
LAB_14ac28481:
  uVar18 = *(uint *)&(this->FirstRequestedLOD).field_0x28;
  uVar16 = uVar18 & 0xffffffe0;
  uStack_18c = (uint)local_1a0;
  uStack_180 = 0xffffffff;
  TStack_b8._padding_ = CONCAT44(uStack_18c,iStack_190);
  TStack_b8.CurrentBitIndex = iStack_17c;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iStack_174 = iStack_14c;
  TStack_b8._28_4_ = iStack_14c;
  TStack_b8.BaseBitIndex = local_178;
  uStack_98 = CONCAT44(uStack_16c,iStack_170);
  iVar14 = (int)uVar18 >> 5;
  local_198 = pTVar1;
  local_188 = puVar2;
  local_c0 = pTVar1;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar18 < 0) || (iVar17 < (int)uVar18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  uVar4 = *(uint *)&(this->FirstRequestedLOD).field_0x28;
  if (uVar18 != uVar4) {
    puVar19 = *(undefined1 **)&(this->FirstRequestedLOD).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar2;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
    while (uVar18 == 0) {
      lVar11 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar18 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ac28590;
      uVar18 = *(uint *)(puVar19 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar18 = (int)lVar11 + -1 + uVar16;
    if ((int)uVar4 < (int)uVar18) {
      uVar18 = uVar4;
    }
  }
LAB_14ac28590:
  while( true ) {
    pTVar7 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      `TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
    }
    lVar11 = (longlong)TStack_b8.CurrentBitIndex;
    if (((TStack_b8.CurrentBitIndex == uVar18) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar7 == pTVar1))
    {
      return true;
    }
    lVar5 = *(longlong *)pTVar7;
    pTVar10 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                      *)&param_1->FirstRequestedLOD,*(FName *)(lVar5 + lVar11 * 0x14));
    pbVar13 = &pTVar10->field_0x8;
    if (pTVar10 == (TTuple<FName,unsigned_char> *)0x0) {
      pbVar13 = (byte *)0x0;
    }
    if (pbVar13 == (byte *)0x0) break;
    if (*(byte *)(lVar5 + lVar11 * 0x14 + 8) < *pbVar13) {
      return false;
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  return false;
}

// ToString @ 14ac48580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDescriptorHash::ToString(FDescriptorHash *this,FString *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  FDescriptorHash *pFVar7;
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *pTVar8;
  bool bVar9;
  longlong lVar10;
  FString *pFVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 auStack_348 [32];
  undefined1 local_328;
  undefined1 local_327;
  undefined1 local_326 [6];
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *local_320;
  int iStack_318;
  uint uStack_314;
  undefined1 *local_310;
  undefined4 uStack_308;
  int iStack_304;
  int local_300;
  int iStack_2fc;
  int iStack_2f8;
  undefined4 uStack_2f4;
  FDescriptorHash *local_2f0;
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *local_2e8;
  int iStack_2e0;
  uint uStack_2dc;
  undefined1 *local_2d8;
  undefined4 uStack_2d0;
  int iStack_2cc;
  int local_2c8;
  undefined4 uStack_2c4;
  int iStack_2c0;
  undefined4 uStack_2bc;
  int local_2b8;
  int local_2b4;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  FString *local_2a0;
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_290;
  undefined8 uStack_270;
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_260;
  undefined8 uStack_240;
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_230;
  undefined8 uStack_210;
  FString local_208;
  FString local_1f8;
  FString local_1e8 [2];
  undefined4 local_1bc;
  undefined4 local_19c;
  TStringBuilderBase<wchar_t> local_198;
  wchar_t local_178 [150];
  wchar_t local_4c [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_348;
  local_198.Base = local_178;
  local_198.CurPos = local_178;
  local_198.End = local_4c;
  local_198.bIsDynamic = false;
  local_198.bIsExternal = false;
  local_2f0 = this;
  local_2a0 = __return_storage_ptr__;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_198,L"(Hash=%u,");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_198,L"MinLODs=[");
  iVar4 = *(int *)&(this->MinLODs).field_0x28;
  puVar1 = &(this->MinLODs).field_0x10;
  pTVar2 = &this->MinLODs;
  iStack_2e0 = 0;
  uStack_2dc = 1;
  local_2c8 = 0;
  iStack_2cc = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->MinLODs).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar15 = *puVar16;
    while (uVar15 == 0) {
      lVar10 = (longlong)iStack_2e0;
      local_2c8 = local_2c8 + 0x20;
      iStack_2e0 = iStack_2e0 + 1;
      iStack_2cc = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_2e0) goto LAB_14ac4869d;
      uVar15 = puVar16[lVar10 + 1];
    }
    uStack_2dc = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_2dc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_2b8 = (int)lVar10;
    iStack_2cc = local_2c8 + -1 + local_2b8;
    if (iVar4 < iStack_2cc) {
      iStack_2cc = iVar4;
    }
  }
LAB_14ac4869d:
  uVar15 = *(uint *)&(this->MinLODs).field_0x28;
  uStack_2c4 = local_1bc;
  iStack_2c0 = *(int *)&(this->MinLODs).field_0x8 - *(int *)&(this->MinLODs).field_0x34;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_290._padding_ = CONCAT44(uStack_2dc,iStack_2e0);
  uStack_2d0 = 0xffffffff;
  TStack_290.CurrentBitIndex = iStack_2cc;
  TStack_290.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_290._28_4_ = local_1bc;
  TStack_290.BaseBitIndex = local_2c8;
  uStack_270 = CONCAT44(uStack_2bc,iStack_2c0);
  local_2e8 = pTVar2;
  local_2d8 = puVar1;
  local_298 = pTVar2;
  TStack_290.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FString *)(*pcVar6)();
    return pFVar11;
  }
  uVar5 = *(uint *)&(this->MinLODs).field_0x28;
  if (uVar15 != uVar5) {
    puVar12 = *(undefined1 **)&(this->MinLODs).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar13) goto LAB_14ac487a0;
      uVar15 = *(uint *)(puVar12 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_2b4 = (int)lVar10;
    uVar15 = local_2b4 + -1 + uVar14;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_14ac487a0:
  while( true ) {
    pTVar8 = local_298;
    if (*(int *)&local_298->field_0x8 - *(int *)&local_298->field_0x34 != (int)uStack_270) {
      local_328 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_328);
    }
    if (((TStack_290.CurrentBitIndex == uVar15) &&
        (TStack_290.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    ::FName::ToString((FName *)(*(longlong *)pTVar8 + (longlong)TStack_290.CurrentBitIndex * 0x14),
                      &local_208);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_198,L"(%s, %i),");
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    TStack_290.UnvisitedBitMask = TStack_290.UnvisitedBitMask & ~TStack_290._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_290);
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_198,L"])");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_198,L"FirstLODAvailable=[");
  pFVar7 = local_2f0;
  iStack_318 = 0;
  local_300 = 0;
  uStack_314 = 1;
  puVar1 = &(local_2f0->QualitySettingMinLODs).field_0x10;
  iVar4 = *(int *)&(local_2f0->QualitySettingMinLODs).field_0x28;
  pTVar2 = &local_2f0->QualitySettingMinLODs;
  iStack_304 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(local_2f0->QualitySettingMinLODs).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar15 = *puVar16;
    while (uVar15 == 0) {
      lVar10 = (longlong)iStack_318;
      local_300 = local_300 + 0x20;
      iStack_318 = iStack_318 + 1;
      iStack_304 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_318) goto LAB_14ac488ed;
      uVar15 = puVar16[lVar10 + 1];
    }
    uStack_314 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_314 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_2b0 = (int)lVar10;
    iStack_304 = local_300 + -1 + local_2b0;
    if (iVar4 < iStack_304) {
      iStack_304 = iVar4;
    }
  }
LAB_14ac488ed:
  iStack_2fc = local_19c;
  iStack_2f8 = *(int *)&(local_2f0->QualitySettingMinLODs).field_0x8 -
               *(int *)&(local_2f0->QualitySettingMinLODs).field_0x34;
  uVar15 = *(uint *)&(local_2f0->QualitySettingMinLODs).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_260._padding_ = CONCAT44(uStack_314,iStack_318);
  uStack_308 = 0xffffffff;
  TStack_260.CurrentBitIndex = iStack_304;
  TStack_260.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_260._28_4_ = local_19c;
  TStack_260.BaseBitIndex = local_300;
  uStack_240 = CONCAT44(uStack_2f4,iStack_2f8);
  local_320 = pTVar2;
  local_310 = puVar1;
  local_268 = pTVar2;
  TStack_260.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FString *)(*pcVar6)();
    return pFVar11;
  }
  uVar5 = *(uint *)&(pFVar7->QualitySettingMinLODs).field_0x28;
  if (uVar15 != uVar5) {
    puVar12 = *(undefined1 **)&(pFVar7->QualitySettingMinLODs).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar13) goto LAB_14ac48a00;
      uVar15 = *(uint *)(puVar12 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_2ac = (int)lVar10;
    uVar15 = local_2ac + -1 + uVar14;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_14ac48a00:
  while( true ) {
    pTVar8 = local_268;
    if (*(int *)&local_268->field_0x8 - *(int *)&local_268->field_0x34 != (int)uStack_240) {
      local_327 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_327);
    }
    if (((TStack_260.CurrentBitIndex == uVar15) &&
        (TStack_260.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    ::FName::ToString((FName *)(*(longlong *)pTVar8 + (longlong)TStack_260.CurrentBitIndex * 0x14),
                      &local_1f8);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_198,L"(%s, %i),");
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    TStack_260.UnvisitedBitMask = TStack_260.UnvisitedBitMask & ~TStack_260._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_260);
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_198,L"])");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_198,L"FirstRequestedLOD=[");
  pFVar7 = local_2f0;
  iStack_318 = 0;
  uStack_314 = 1;
  local_300 = 0;
  puVar1 = &(local_2f0->FirstRequestedLOD).field_0x10;
  iVar4 = *(int *)&(local_2f0->FirstRequestedLOD).field_0x28;
  pTVar2 = &local_2f0->FirstRequestedLOD;
  iStack_304 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(local_2f0->FirstRequestedLOD).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar15 = *puVar16;
    local_300 = 0;
    while (uVar15 == 0) {
      lVar10 = (longlong)iStack_318;
      local_300 = local_300 + 0x20;
      iStack_318 = iStack_318 + 1;
      iStack_304 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_318) goto LAB_14ac48b4d;
      uVar15 = puVar16[lVar10 + 1];
    }
    uStack_314 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_314 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_2a8 = (int)lVar10;
    iStack_304 = local_300 + -1 + local_2a8;
    if (iVar4 < iStack_304) {
      iStack_304 = iVar4;
    }
  }
LAB_14ac48b4d:
  iStack_2fc = iStack_2cc;
  iStack_2f8 = *(int *)&(local_2f0->FirstRequestedLOD).field_0x8 -
               *(int *)&(local_2f0->FirstRequestedLOD).field_0x34;
  uVar15 = *(uint *)&(local_2f0->FirstRequestedLOD).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  uStack_308 = 0xffffffff;
  TStack_230._padding_ = CONCAT44(uStack_314,iStack_318);
  TStack_230.CurrentBitIndex = iStack_304;
  TStack_230.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_230._28_4_ = iStack_2cc;
  TStack_230.BaseBitIndex = local_300;
  uStack_210 = CONCAT44(uStack_2f4,iStack_2f8);
  local_320 = pTVar2;
  local_310 = puVar1;
  local_238 = pTVar2;
  TStack_230.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FString *)(*pcVar6)();
    return pFVar11;
  }
  uVar5 = *(uint *)&(pFVar7->FirstRequestedLOD).field_0x28;
  if (uVar15 != uVar5) {
    puVar12 = *(undefined1 **)&(pFVar7->FirstRequestedLOD).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar13) goto LAB_14ac48c50;
      uVar15 = *(uint *)(puVar12 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar15 = (int)lVar10 + -1 + uVar14;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_14ac48c50:
  while( true ) {
    pTVar8 = local_238;
    if (*(int *)&local_238->field_0x8 - *(int *)&local_238->field_0x34 != (int)uStack_210) {
      `TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_326);
    }
    if (((TStack_230.CurrentBitIndex == uVar15) &&
        (TStack_230.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    ::FName::ToString((FName *)(*(longlong *)pTVar8 + (longlong)TStack_230.CurrentBitIndex * 0x14),
                      local_1e8);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_198,L"(%s, %i),");
    if (local_1e8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8[0].Data.AllocatorInstance.Data);
    }
    TStack_230.UnvisitedBitMask = TStack_230.UnvisitedBitMask & ~TStack_230._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_230);
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_198,L"])");
  if (local_198.End < local_198.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_198,1);
  }
  *local_198.CurPos = L'\0';
  ::FString::FString(local_2a0,local_198.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_198);
  return local_2a0;
}

