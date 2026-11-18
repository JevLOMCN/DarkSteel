// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 21

// FGlobalShaderMap @ 145d0a170

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGlobalShaderMap * __thiscall
FGlobalShaderMap::FGlobalShaderMap(FGlobalShaderMap *this,EShaderPlatform param_1)

{
  *(undefined8 *)&this->SectionMap = 0;
  *(undefined8 *)&(this->SectionMap).field_0x8 = 0;
  *(undefined8 *)&(this->SectionMap).field_0x20 = 0;
  *(undefined4 *)&(this->SectionMap).field_0x28 = 0;
  *(undefined4 *)&(this->SectionMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SectionMap).field_0x34 = 0;
  *(undefined4 *)&(this->SectionMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SectionMap).field_0x40 = 0;
  *(undefined4 *)&(this->SectionMap).field_0x48 = 0;
  this->Platform = param_1;
  return this;
}

// ~FGlobalShaderMap @ 145d0c080

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FGlobalShaderMap::~FGlobalShaderMap(FGlobalShaderMap *this)

{
  void *pvVar1;
  
  ReleaseAllSections(this);
  *(undefined4 *)&(this->SectionMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SectionMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FHashedName,FGlobalShaderMapSection_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FHashedName,FGlobalShaderMapSection_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FHashedName,FGlobalShaderMapSection_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// AddSection @ 145d11850

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGlobalShaderMap::AddSection(FGlobalShaderMap *this,FGlobalShaderMapSection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TPairInitializer<FHashedName_const_&,FGlobalShaderMapSection_*_const_&> local_res8 [2];
  longlong local_18;
  FGlobalShaderMapSection ***local_10;
  
  local_res8[0].Value = (FGlobalShaderMapSection **)param_1;
  if ((param_1 == (FGlobalShaderMapSection *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalShader.cpp"
                         ,0x2f9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_18 = *(longlong *)((longlong)local_res8[0].Value + 0x28) + 0x60;
  local_10 = &local_res8[0].Value;
  TSet<TTuple<FHashedName,FGlobalShaderMapSection_*>,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FHashedName_const_&,FGlobalShaderMapSection_*_const_&>_>
            ((TSet<TTuple<FHashedName,FGlobalShaderMapSection_*>,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>,FDefaultSetAllocator>
              *)this,local_res8,(bool *)&local_18);
  return;
}

// BeginCreateAllShaders @ 145d12720

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FGlobalShaderMap::BeginCreateAllShaders(FGlobalShaderMap *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&(this->SectionMap).field_0x28;
  puVar1 = &(this->SectionMap).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->SectionMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145d127bd;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_145d127bd:
  uVar10 = *(uint *)&(this->SectionMap).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->SectionMap).field_0x8 -
                       *(int *)&(this->SectionMap).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->SectionMap).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->SectionMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145d128c0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_145d128c0:
  while( true ) {
    if (*(int *)&(this->SectionMap).field_0x8 - *(int *)&(this->SectionMap).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<FHashedName,FGlobalShaderMapSection_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FShaderMapResource::BeginCreateAllShaders
              (*(FShaderMapResource **)
                (*(longlong *)
                  (*(longlong *)&this->SectionMap + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18)
                + 8));
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// Empty @ 145d20bc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FGlobalShaderMap::Empty(FGlobalShaderMap *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FShaderMapBase *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&(this->SectionMap).field_0x28;
  puVar1 = &(this->SectionMap).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->SectionMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145d20c5d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_145d20c5d:
  uVar10 = *(uint *)&(this->SectionMap).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->SectionMap).field_0x8 -
                       *(int *)&(this->SectionMap).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->SectionMap).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->SectionMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145d20d60;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_145d20d60:
  while( true ) {
    if (*(int *)&(this->SectionMap).field_0x8 - *(int *)&(this->SectionMap).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<FHashedName,FGlobalShaderMapSection_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = *(FShaderMapBase **)
               (*(longlong *)&this->SectionMap + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18);
    FShaderMapBase::UnfreezeContent(this_00);
    FShaderMapContent::Empty((this_00->Content).Object);
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// FindOrAddSection @ 145d29000

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FGlobalShaderMapSection * __thiscall
FGlobalShaderMap::FindOrAddSection(FGlobalShaderMap *this,FShaderType *param_1)

{
  longlong lVar1;
  FGlobalShaderMapSection *pFVar2;
  FGlobalShaderMapSection *pFVar3;
  int iVar4;
  undefined1 *puVar5;
  FHashedName local_res8;
  
  FHashedName::FHashedName(&local_res8,&param_1->HashedSourceFilename);
  pFVar3 = (FGlobalShaderMapSection *)0x0;
  if (*(int *)&(this->SectionMap).field_0x8 != *(int *)&(this->SectionMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->SectionMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->SectionMap).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + ((local_res8.Hash >> 0x20) * 0x17 + local_res8.Hash &
                              (ulonglong)(*(int *)&(this->SectionMap).field_0x48 - 1)) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->SectionMap + (longlong)iVar4 * 0x18;
        if (*(ulonglong *)(*(longlong *)&this->SectionMap + (longlong)iVar4 * 0x18) ==
            local_res8.Hash) {
          pFVar2 = (FGlobalShaderMapSection *)(lVar1 + 8);
          if (lVar1 == 0) {
            pFVar2 = pFVar3;
          }
          if ((pFVar2 != (FGlobalShaderMapSection *)0x0) &&
             (*(FGlobalShaderMapSection **)pFVar2 != (FGlobalShaderMapSection *)0x0)) {
            return *(FGlobalShaderMapSection **)pFVar2;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  pFVar2 = ::operator_new(0x40);
  if (pFVar2 != (FGlobalShaderMapSection *)0x0) {
    pFVar3 = FGlobalShaderMapSection::FGlobalShaderMapSection(pFVar2,this->Platform,&local_res8);
  }
  AddSection(this,pFVar3);
  return pFVar3;
}

// FindOrAddShader @ 145d290e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FShader * __thiscall
FGlobalShaderMap::FindOrAddShader
          (FGlobalShaderMap *this,FShaderType *param_1,int param_2,FShader *param_3)

{
  FGlobalShaderMapSection *this_00;
  FShaderMapBase *this_01;
  FShader *pFVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  uint uVar5;
  int local_res8 [2];
  FHashedName local_res10;
  FHashedName *local_38 [2];
  
  FHashedName::FHashedName(&local_res10,&param_1->HashedSourceFilename);
  uVar5 = (int)(local_res10.Hash >> 0x20) * 0x17 + (int)local_res10.Hash;
  if (*(int *)&(this->SectionMap).field_0x8 != *(int *)&(this->SectionMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->SectionMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SectionMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->SectionMap).field_0x48 - 1U & uVar5) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)&this->SectionMap + (longlong)iVar2 * 0x18;
        if (*(ulong64 *)(*(longlong *)&this->SectionMap + (longlong)iVar2 * 0x18) ==
            local_res10.Hash) {
          if (lVar3 != 0) goto LAB_145d291a8;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_38[0] = &local_res10;
  TSet<TTuple<FHashedName,FGlobalShaderMapSection_*>,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FHashedName_const_&>_>
            ((TSet<TTuple<FHashedName,FGlobalShaderMapSection_*>,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>,FDefaultSetAllocator>
              *)this,(uint)local_res8,(TKeyInitializer<FHashedName_const_&> *)(ulonglong)uVar5,
             (bool *)local_38);
  lVar3 = *(longlong *)&this->SectionMap + (longlong)local_res8[0] * 0x18;
LAB_145d291a8:
  this_01 = *(FShaderMapBase **)(lVar3 + 8);
  if (this_01 == (FShaderMapBase *)0x0) {
    this_00 = ::operator_new(0x40);
    if (this_00 == (FGlobalShaderMapSection *)0x0) {
      this_01 = (FShaderMapBase *)0x0;
    }
    else {
      this_01 = (FShaderMapBase *)
                FGlobalShaderMapSection::FGlobalShaderMapSection
                          (this_00,this->Platform,&local_res10);
    }
    *(FShaderMapBase **)(lVar3 + 8) = this_01;
  }
  FShaderMapBase::UnfreezeContent(this_01);
  pFVar1 = FShaderMapContent::FindOrAddShader
                     ((this_01->Content).Object,&param_1->HashedName,param_2,param_3);
  return pFVar1;
}

// FindOrAddShaderPipeline @ 145d29220

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FShaderPipeline * __thiscall
FGlobalShaderMap::FindOrAddShaderPipeline
          (FGlobalShaderMap *this,FShaderPipelineType *param_1,FShaderPipeline *param_2)

{
  ulong64 uVar1;
  FGlobalShaderMapSection **ppFVar2;
  FGlobalShaderMapSection *this_00;
  FShaderMapBase *this_01;
  FShaderPipeline *pFVar3;
  
  uVar1 = (param_1->HashedPrimaryShaderFilename).Hash;
  ppFVar2 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
            ::FindOrAddImpl<FHashedName_const_&>
                      ((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                        *)this,(int)(uVar1 >> 0x20) * 0x17 + (int)uVar1,
                       &param_1->HashedPrimaryShaderFilename);
  this_01 = (FShaderMapBase *)*ppFVar2;
  if (this_01 == (FShaderMapBase *)0x0) {
    this_00 = ::operator_new(0x40);
    if (this_00 == (FGlobalShaderMapSection *)0x0) {
      this_01 = (FShaderMapBase *)0x0;
    }
    else {
      this_01 = (FShaderMapBase *)
                FGlobalShaderMapSection::FGlobalShaderMapSection
                          (this_00,this->Platform,&param_1->HashedPrimaryShaderFilename);
    }
    *ppFVar2 = (FGlobalShaderMapSection *)this_01;
  }
  FShaderMapBase::UnfreezeContent(this_01);
  pFVar3 = FShaderMapContent::FindOrAddShaderPipeline((this_01->Content).Object,param_2);
  return pFVar3;
}

// FindSection @ 145d292d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGlobalShaderMapSection * __thiscall
FGlobalShaderMap::FindSection(FGlobalShaderMap *this,FHashedName *param_1)

{
  FGlobalShaderMapSection **ppFVar1;
  
  ppFVar1 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
            ::Find((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                    *)this,param_1);
  if (ppFVar1 != (FGlobalShaderMapSection **)0x0) {
    return *ppFVar1;
  }
  return (FGlobalShaderMapSection *)0x0;
}

// GetShader @ 145d2ba80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

TShaderRefBase<FShader,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader
          (FGlobalShaderMap *this,
          TShaderRefBase<FShader,FShaderMapPointerTable> *__return_storage_ptr__,
          FShaderType *param_1,int param_2)

{
  FGlobalShaderMapSection **ppFVar1;
  FShader *local_18;
  FShaderMapBase *pFStack_10;
  
  ppFVar1 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
            ::Find((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                    *)this,&param_1->HashedSourceFilename);
  if (ppFVar1 == (FGlobalShaderMapSection **)0x0) {
    local_18 = (FShader *)0x0;
    pFStack_10 = (FShaderMapBase *)0x0;
  }
  else {
    pFStack_10 = (FShaderMapBase *)*ppFVar1;
    local_18 = FShaderMapContent::GetShader
                         ((pFStack_10->Content).Object,&param_1->HashedName,param_2);
    if (local_18 == (FShader *)0x0) {
      local_18 = (FShader *)0x0;
      pFStack_10 = (FShaderMapBase *)0x0;
    }
  }
  __return_storage_ptr__->ShaderContent = local_18;
  __return_storage_ptr__->ShaderMap = pFStack_10;
  return __return_storage_ptr__;
}

// GetShaderPipeline @ 145d2bcb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FShaderPipelineRef * __thiscall
FGlobalShaderMap::GetShaderPipeline
          (FGlobalShaderMap *this,FShaderPipelineRef *__return_storage_ptr__,
          FShaderPipelineType *param_1)

{
  FGlobalShaderMapSection *pFVar1;
  longlong lVar2;
  code *pcVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  uint uVar6;
  FGlobalShaderMapSection **ppFVar7;
  FShaderPipelineRef *pFVar8;
  ulonglong *puVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_> *pTVar12;
  FProjectShaderPipelineToKey local_res8;
  ulonglong local_28;
  FGlobalShaderMapSection *pFStack_20;
  ulonglong local_18 [2];
  
  ppFVar7 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
            ::Find((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                    *)this,&param_1->HashedPrimaryShaderFilename);
  if (ppFVar7 == (FGlobalShaderMapSection **)0x0) {
    puVar9 = local_18;
    local_18[0] = 0;
    local_18[1] = 0;
  }
  else {
    pFVar1 = *ppFVar7;
    lVar2 = *(longlong *)&pFVar1->field_0x28;
    pTVar12 = (TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_> *)(lVar2 + 0x48);
    uVar6 = Algo::
            BinarySearchBy<TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>,FHashedName,FShaderMapContent::FProjectShaderPipelineToKey,TLess<void>_>
                      (pTVar12,&param_1->HashedName,local_res8,(TLess<void>)local_res8);
    if (uVar6 != 0xffffffff) {
      uVar10 = 0;
      if ((int)uVar6 < *(int *)(lVar2 + 0x50)) {
        uVar10 = ~uVar6 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FShaderPipelineRef *)(*pcVar3)();
          return pFVar8;
        }
      }
      FVar11 = pTVar12->AllocatorInstance;
      if (((ulonglong)FVar11 & 1) != 0) {
        FVar11 = (ForAnyElementType)
                 ((longlong)&(pTVar12->AllocatorInstance).field_0x0 + ((longlong)FVar11 >> 0x18));
      }
      local_28 = *(ulonglong *)((longlong)FVar11 + (longlong)(int)uVar6 * 8);
      if ((local_28 & 1) != 0) {
        local_28 = ((longlong)local_28 >> 0x18) + (longlong)FVar11 + (longlong)(int)uVar6 * 8;
      }
      if (local_28 != 0) {
        puVar9 = &local_28;
        pFStack_20 = pFVar1;
        goto LAB_145d2bdbb;
      }
    }
    puVar9 = &local_28;
    local_28 = 0;
    pFStack_20 = (FGlobalShaderMapSection *)0x0;
  }
LAB_145d2bdbb:
  pFVar4 = (FShaderMapBase *)puVar9[1];
  __return_storage_ptr__->ShaderPipeline = (FShaderPipeline *)*puVar9;
  __return_storage_ptr__->ShaderMap = pFVar4;
  return __return_storage_ptr__;
}

// IsComplete @ 145d44060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

bool __thiscall FGlobalShaderMap::IsComplete(FGlobalShaderMap *this,ITargetPlatform *param_1)

{
  FScriptContainerElement *pFVar1;
  TLinkedList<FShaderType_*> *pTVar2;
  TLinkedList<FShaderPipelineType_*> *pTVar3;
  FShaderPipelineType *pFVar4;
  code *pcVar5;
  FProjectShaderPipelineToKey FVar6;
  bool bVar7;
  undefined1 uVar8;
  EShaderPermutationFlags EVar9;
  uint uVar10;
  TLinkedList<FShaderType_*> **ppTVar11;
  FGlobalShaderMapSection **ppFVar12;
  FShader *pFVar13;
  TLinkedList<FShaderPipelineType_*> **ppTVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  FShaderType *this_00;
  FScriptContainerElement *pFVar20;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  FProjectShaderPipelineToKey local_108 [2];
  EShaderPlatform local_106;
  EShaderPermutationFlags local_104;
  FShaderPermutationParameters local_100;
  FName local_f4;
  FShaderPermutationParameters local_e8;
  FName local_dc;
  undefined1 local_c8 [88];
  void *local_70;
  undefined4 local_68;
  ForAnyElementType local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  FGlobalShaderMapId::FGlobalShaderMapId((FGlobalShaderMapId *)local_c8,this->Platform,param_1);
  EVar9 = GetShaderPermutationFlags((FPlatformTypeLayoutParameters *)local_c8);
  local_104 = EVar9 & ~IsODSCOnly;
  ppTVar11 = FShaderType::GetTypeList();
  for (pTVar2 = *ppTVar11; pTVar2 != (TLinkedList<FShaderType_*> *)0x0;
      pTVar2 = (TLinkedList<FShaderType_*> *)pTVar2->_padding_) {
    this_00 = (FShaderType *)0x0;
    if (pTVar2->Element->ShaderTypeForDynamicCast == Global) {
      this_00 = pTVar2->Element;
    }
    if ((this_00 != (FShaderType *)0x0) && (iVar19 = 0, 0 < this_00->TotalPermutationCount)) {
      do {
        local_100.Platform = this->Platform;
        local_f4 = this_00->TypeName;
        local_100.PermutationId = iVar19;
        local_100.Flags = EVar9 & ~IsODSCOnly;
        bVar7 = FShaderType::ShouldCompilePermutation(this_00,&local_100);
        if ((bVar7) &&
           ((ppFVar12 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                        ::Find((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                                *)this,&this_00->HashedSourceFilename),
            ppFVar12 == (FGlobalShaderMapSection **)0x0 ||
            (pFVar13 = FShaderMapContent::GetShader
                                 (*(FShaderMapContent **)&(*ppFVar12)->field_0x28,
                                  &this_00->HashedName,iVar19), pFVar13 == (FShader *)0x0))))
        goto LAB_145d443b5;
        iVar19 = iVar19 + 1;
      } while (iVar19 < this_00->TotalPermutationCount);
    }
  }
  ppTVar14 = FShaderPipelineType::GetTypeList();
  FVar6 = local_108[0];
  lVar15 = local_110;
  for (pTVar3 = *ppTVar14; pTVar3 != (TLinkedList<FShaderPipelineType_*> *)0x0;
      pTVar3 = (TLinkedList<FShaderPipelineType_*> *)pTVar3->_padding_) {
    pFVar4 = pTVar3->Element;
    iVar19 = (pFVar4->Stages).ArrayNum;
    local_110 = (longlong)iVar19;
    if (iVar19 < 1) {
      local_118 = 0;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      lVar15 = local_110;
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
    local_110 = lVar15;
    pFVar20 = (pFVar4->Stages).AllocatorInstance.Data;
    lVar15 = 0;
    if (*(int *)(*(longlong *)pFVar20 + 8) == 0) {
      lVar15 = *(longlong *)pFVar20;
    }
    if (lVar15 != 0) {
      iVar19 = (pFVar4->Stages).ArrayNum;
      local_106 = this->Platform;
      pFVar1 = pFVar20 + (longlong)iVar19 * 8;
      while( true ) {
        if ((pFVar4->Stages).ArrayNum != iVar19) {
          local_108[0] = (FProjectShaderPipelineToKey)0x0;
          `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_108);
        }
        if (pFVar20 == pFVar1) break;
        local_e8.Flags = local_104;
        local_dc = (*(FShaderType **)pFVar20)->TypeName;
        local_e8.PermutationId = 0;
        local_e8.Platform = local_106;
        bVar7 = FShaderType::ShouldCompilePermutation(*(FShaderType **)pFVar20,&local_e8);
        if (!bVar7) goto LAB_145d44317;
        pFVar20 = pFVar20 + 8;
      }
      ppFVar12 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                 ::Find((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                         *)this,&pFVar4->HashedPrimaryShaderFilename);
      if (ppFVar12 == (FGlobalShaderMapSection **)0x0) goto LAB_145d443b5;
      lVar15 = *(longlong *)&(*ppFVar12)->field_0x28;
      uVar10 = Algo::
               BinarySearchBy<TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>,FHashedName,FShaderMapContent::FProjectShaderPipelineToKey,TLess<void>_>
                         ((TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_> *)
                          (lVar15 + 0x48),&pFVar4->HashedName,FVar6,(TLess<void>)FVar6);
      if (uVar10 == 0xffffffff) goto LAB_145d443b5;
      uVar17 = 0;
      if ((int)uVar10 < *(int *)(lVar15 + 0x50)) {
        uVar17 = ~uVar10 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (local_118 = (longlong)(int)uVar10, local_110 = (longlong)*(int *)(lVar15 + 0x50),
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      uVar18 = *(ulonglong *)(lVar15 + 0x48);
      if ((uVar18 & 1) != 0) {
        uVar18 = ((longlong)uVar18 >> 0x18) + 0x48 + lVar15;
      }
      lVar15 = (longlong)(int)uVar10 * 8;
      uVar16 = *(ulonglong *)(lVar15 + uVar18);
      if ((uVar16 & 1) != 0) {
        uVar16 = ((longlong)uVar16 >> 0x18) + lVar15 + uVar18;
      }
      if (uVar16 == 0) goto LAB_145d443b5;
    }
LAB_145d44317:
    lVar15 = local_110;
  }
  bVar7 = true;
  local_110 = lVar15;
LAB_145d44325:
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  local_68 = 0;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FShaderTypeDependency,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FShaderTypeDependency,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FShaderTypeDependency,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_c8 + 0x18));
  return bVar7;
LAB_145d443b5:
  bVar7 = false;
  goto LAB_145d44325;
}

// IsEmpty @ 145d446c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FGlobalShaderMap::IsEmpty(FGlobalShaderMap *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&(this->SectionMap).field_0x28;
  puVar1 = &(this->SectionMap).field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->SectionMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145d4475d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_145d4475d:
  uVar11 = *(uint *)&(this->SectionMap).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->SectionMap).field_0x8 -
                       *(int *)&(this->SectionMap).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(this->SectionMap).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->SectionMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145d44860;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_145d44860:
  while( true ) {
    if (*(int *)&(this->SectionMap).field_0x8 - *(int *)&(this->SectionMap).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<FHashedName,FGlobalShaderMapSection_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (*(int *)(*(longlong *)
                  (*(longlong *)
                    (*(longlong *)&this->SectionMap + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18
                    ) + 0x28) + 0x40) != 0) {
      return false;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return true;
}

// LoadFromGlobalArchive @ 145d45c10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGlobalShaderMap::LoadFromGlobalArchive(FGlobalShaderMap *this,FArchive *param_1)

{
  longlong *plVar1;
  bool bVar2;
  FShaderMapBase *this_00;
  FShaderMapBase *this_01;
  uint uVar3;
  FShaderMapBase *pFVar4;
  uint local_res10 [2];
  TPairInitializer<FHashedName_const_&,FGlobalShaderMapSection_*_const_&> local_res18;
  FShaderMapContent *local_68;
  FGlobalShaderMapSection ***local_60;
  FShaderSerializeContext local_58;
  
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = 0;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  pFVar4 = (FShaderMapBase *)0x0;
  if (0 < (int)local_res10[0]) {
    do {
      this_00 = ::operator_new(0x40);
      this_01 = (FShaderMapBase *)0x0;
      if (this_00 != (FShaderMapBase *)0x0) {
        FShaderMapBase::FShaderMapBase(this_00);
        this_00->_padding_ = (longlong)&___7FGlobalShaderMapSection__6B_;
        this_01 = this_00;
      }
      local_58._padding_ = (longlong)&___7FShaderSerializeContext__6B_;
      local_58.bLoadingCooked = false;
      local_58.SerializingAsset.ComparisonIndex.Value = 0;
      local_58.SerializingAsset.Number = 0;
      local_58.Ar = param_1;
      bVar2 = FShaderMapBase::Serialize(this_01,&local_58);
      if (bVar2) {
        if (this_01 == (FShaderMapBase *)0x0) goto LAB_145d45d3a;
        local_68 = (this_01->Content).Object + 1;
        local_60 = &local_res18.Value;
        local_res18.Value = (FGlobalShaderMapSection **)this_01;
        TSet<TTuple<FHashedName,FGlobalShaderMapSection_*>,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FHashedName_const_&,FGlobalShaderMapSection_*_const_&>_>
                  ((TSet<TTuple<FHashedName,FGlobalShaderMapSection_*>,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>,FDefaultSetAllocator>
                    *)this,&local_res18,(bool *)&local_68);
      }
      else {
        if (this_01 != (FShaderMapBase *)0x0) {
          (**(code **)this_01->_padding_)(this_01,1);
        }
LAB_145d45d3a:
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      uVar3 = (int)pFVar4 + 1;
      pFVar4 = (FShaderMapBase *)(ulonglong)uVar3;
    } while ((int)uVar3 < (int)local_res10[0]);
  }
  return;
}

// ReleaseAllSections @ 145d48040

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FGlobalShaderMap::ReleaseAllSections(FGlobalShaderMap *this)

{
  undefined1 *this_00;
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar2 = *(int *)&(this->SectionMap).field_0x28;
  this_00 = &(this->SectionMap).field_0x10;
  iVar9 = 0;
  iVar11 = 0;
  uVar6 = 1;
  iVar7 = iVar11;
  if (iVar2 != 0) {
    puVar12 = *(uint **)&(this->SectionMap).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)this_00;
    }
    uVar13 = *puVar12;
    iVar11 = 0;
    while (uVar13 == 0) {
      lVar8 = (longlong)iVar9;
      iVar11 = iVar11 + 0x20;
      iVar9 = iVar9 + 1;
      iVar7 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_145d480de;
      uVar13 = puVar12[lVar8 + 1];
    }
    uVar6 = -uVar13 & uVar13;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar11;
    if (iVar2 < iVar7) {
      iVar7 = iVar2;
    }
  }
LAB_145d480de:
  uVar13 = *(uint *)&(this->SectionMap).field_0x28;
  uVar14 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar9);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar11;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->SectionMap).field_0x8 -
                       *(int *)&(this->SectionMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
  if ((((int)uVar13 < 0) || (iVar2 < (int)uVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->SectionMap).field_0x28;
  if (uVar13 != uVar6) {
    puVar10 = *(undefined1 **)&(this->SectionMap).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = this_00;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar9 * 4);
    while (uVar13 == 0) {
      lVar8 = (longlong)iVar9;
      uVar14 = uVar14 + 0x20;
      iVar9 = iVar9 + 1;
      uVar13 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_145d481e0;
      uVar13 = *(uint *)(puVar10 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar13 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar13) {
      uVar13 = uVar6;
    }
  }
LAB_145d481e0:
  while( true ) {
    if (*(int *)&(this->SectionMap).field_0x8 - *(int *)&(this->SectionMap).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FHashedName,FGlobalShaderMapSection_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)this_00)) break;
    puVar3 = *(undefined8 **)
              (*(longlong *)&this->SectionMap + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)();
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar5 = 1 < *(int *)&(this->SectionMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<FHashedName,FGlobalShaderMapSection_*>,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FHashedName,FGlobalShaderMapSection_*>,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>,FDefaultSetAllocator>
                      *)this);
  }
  puVar10 = &(this->SectionMap).field_0xc;
  *(undefined4 *)&(this->SectionMap).field_0x8 = 0;
  if (*(int *)puVar10 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)puVar10);
  }
  *(undefined4 *)&(this->SectionMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SectionMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->SectionMap).field_0x2c;
  *(undefined4 *)&(this->SectionMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->SectionMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)this_00,0)
    ;
  }
  if (bVar5) {
    *(undefined4 *)&(this->SectionMap).field_0x48 = 1;
    TSet<TTuple<FHashedName,FGlobalShaderMapSection_*>,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FHashedName,FGlobalShaderMapSection_*>,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>,FDefaultSetAllocator>
              *)this);
  }
  return;
}

// RemoveShaderPipelineType @ 145d485d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FGlobalShaderMap::RemoveShaderPipelineType(FGlobalShaderMap *this,FShaderPipelineType *param_1)

{
  FShaderMapBase *this_00;
  FGlobalShaderMapSection **ppFVar1;
  
  ppFVar1 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
            ::Find((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                    *)this,&param_1->HashedPrimaryShaderFilename);
  if (ppFVar1 != (FGlobalShaderMapSection **)0x0) {
    this_00 = (FShaderMapBase *)*ppFVar1;
    FShaderMapBase::UnfreezeContent(this_00);
    FShaderMapContent::RemoveShaderPipelineType((this_00->Content).Object,param_1);
  }
  return;
}

// RemoveShaderTypePermutaion @ 145d48620

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FGlobalShaderMap::RemoveShaderTypePermutaion
          (FGlobalShaderMap *this,FShaderType *param_1,int param_2)

{
  FShaderMapBase *this_00;
  FGlobalShaderMapSection **ppFVar1;
  
  ppFVar1 = TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
            ::Find((TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
                    *)this,&param_1->HashedSourceFilename);
  if (ppFVar1 != (FGlobalShaderMapSection **)0x0) {
    this_00 = (FShaderMapBase *)*ppFVar1;
    FShaderMapBase::UnfreezeContent(this_00);
    FShaderMapContent::RemoveShaderTypePermutaion
              ((this_00->Content).Object,&param_1->HashedName,param_2);
  }
  return;
}

// SaveToGlobalArchive @ 145d49700

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FGlobalShaderMap::SaveToGlobalArchive(FGlobalShaderMap *this,FArchive *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  FGlobalShaderMap *pFVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  int local_res18;
  FShaderSerializeContext local_b8;
  FGlobalShaderMap *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  FGlobalShaderMap *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  local_res10[0] = *(int *)&(this->SectionMap).field_0x8 - *(int *)&(this->SectionMap).field_0x34;
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  iVar3 = *(int *)&(this->SectionMap).field_0x28;
  puVar2 = &(this->SectionMap).field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->SectionMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar2;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_145d497ed;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iStack_7c = local_78 + -1 + local_res18;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_145d497ed:
  uVar12 = *(uint *)&(this->SectionMap).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_70 = *(int *)&(this->SectionMap).field_0x8 - *(int *)&(this->SectionMap).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = this;
  local_88 = puVar2;
  iStack_74 = iStack_7c;
  local_68 = this;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->SectionMap).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(this->SectionMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_145d49900;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_145d49900:
  while( true ) {
    pFVar7 = local_68;
    if (*(int *)&(local_68->SectionMap).field_0x8 - *(int *)&(local_68->SectionMap).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FHashedName,FGlobalShaderMapSection_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pFVar7 == this))
    break;
    local_b8._padding_ = (longlong)&___7FShaderSerializeContext__6B_;
    local_b8.bLoadingCooked = false;
    local_b8.SerializingAsset.ComparisonIndex.Value = 0;
    local_b8.SerializingAsset.Number = 0;
    local_b8.Ar = param_1;
    FShaderMapBase::Serialize
              (*(FShaderMapBase **)
                (*(longlong *)&pFVar7->SectionMap + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18),
               &local_b8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetShader<FScatterCopyCS> @ 145e7aa30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

TShaderRefBase<FScatterCopyCS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FScatterCopyCS>
          (FGlobalShaderMap *this,
          TShaderRefBase<FScatterCopyCS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FScatterCopyCS,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  iVar3 = TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
          ::ToDimensionValueId(param_1);
  pFVar4 = (FShaderType *)FScatterCopyCS::GetStaticType();
  GetShader(this,&local_28,pFVar4,iVar3);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FScatterCopyCS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FScatterCopyCS,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FScatterCopyCS::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FScatterCopyCS *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// operator() @ 1504dbcd0

bool __thiscall
`FGlobalShaderMap::GetShader<FClearUAVRectsPS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FClearUAVRectsPS::GetStaticType();
    FClearUAVRectsPS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FClearUAVRectsPS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FClearUAVRectsPS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504dbd30

bool __thiscall
`FGlobalShaderMap::GetShader<FInitIndirectArgs1DCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FInitIndirectArgs1DCS::GetStaticType();
    FInitIndirectArgs1DCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FInitIndirectArgs1DCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FInitIndirectArgs1DCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

