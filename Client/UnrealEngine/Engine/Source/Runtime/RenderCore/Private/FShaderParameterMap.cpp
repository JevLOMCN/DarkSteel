// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 10

// UpdateHash @ 145e367c0

void __thiscall FShaderParameterMap::UpdateHash(FShaderParameterMap *this,FSHA1 *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  int iVar8;
  uint *puVar9;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  FShaderParameterMap *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iVar8 = *(int *)&(this->ParameterMap).field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ParameterMap).field_0x10;
  iStack_48 = 0;
  uStack_44 = 1;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar8 != 0) {
    puVar9 = *(uint **)&(this->ParameterMap).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)TStack_70.Array;
    }
    uVar2 = *puVar9;
    local_30 = 0;
    while (uVar2 == 0) {
      lVar5 = (longlong)iStack_48;
      local_30 = local_30 + 0x20;
      iStack_48 = iStack_48 + 1;
      iStack_34 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_145e36859;
      uVar2 = puVar9[lVar5 + 1];
    }
    uStack_44 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_44 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_34 = (int)lVar5 + -1 + local_30;
    if (iVar8 < iStack_34) {
      iStack_34 = iVar8;
    }
  }
LAB_145e36859:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = this;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70._padding_._0_4_ = iStack_48;
  TStack_70._padding_._4_4_ = uStack_44;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar8) {
    do {
      lVar6 = (longlong)TStack_70.CurrentBitIndex * 0x20;
      lVar4 = *(longlong *)&this->ParameterMap;
      iVar3 = *(int *)(lVar6 + 8 + lVar4);
      lVar5 = lVar6 + lVar4;
      iVar8 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar8 = 0;
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)(lVar6 + lVar4);
      }
      FSHA1::Update(param_1,(uchar *)pwVar7,(longlong)iVar8 * 2);
      FSHA1::Update(param_1,(uchar *)(lVar5 + 0x10),2);
      FSHA1::Update(param_1,(uchar *)(lVar5 + 0x12),2);
      FSHA1::Update(param_1,(uchar *)(lVar5 + 0x14),2);
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  return;
}

// VerifyBindingsAreComplete @ 145e37cf0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderParameterMap::VerifyBindingsAreComplete
          (FShaderParameterMap *this,wchar_t *param_1,FShaderTarget param_2,
          FVertexFactoryType *param_3)

{
  return;
}

// AddParameterAllocation @ 145e4ac60

void __thiscall
FShaderParameterMap::AddParameterAllocation
          (FShaderParameterMap *this,TStringView<wchar_t> *param_1,ushort param_2,ushort param_3,
          ushort param_4,EShaderParameterType param_5)

{
  code *pcVar1;
  EShaderParameterType EVar2;
  bool bVar3;
  ushort local_res8;
  ushort local_resa;
  ushort local_resc;
  EShaderParameterType local_rese;
  undefined1 local_resf;
  TStringView<wchar_t> *local_28;
  ushort *local_20;
  
  EVar2 = param_5;
  if (BindlessUAV < param_5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParameterType < EShaderParameterType::Num",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                       ,0x449,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_resc = param_4;
  local_20 = &local_res8;
  local_rese = EVar2;
  local_resf = 0;
  local_res8 = param_2;
  local_resa = param_3;
  local_28 = param_1;
  TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TStringView<wchar_t>_&,FParameterAllocation_&&>_>
            ((TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<TStringView<wchar_t>_&,FParameterAllocation_&&> *)&param_5,
             (bool *)&local_28);
  return;
}

// ContainsParameterAllocation @ 145e4fa20

bool __thiscall
FShaderParameterMap::ContainsParameterAllocation
          (FShaderParameterMap *this,TStringView<wchar_t> *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  iVar2 = TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TStringView<wchar_t>_>
                    ((TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
                      *)this,uVar1,param_1);
  lVar4 = 0;
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&this->ParameterMap;
  }
  lVar3 = lVar4 + 0x10;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3 != 0;
}

// CountParametersOfType @ 145e4fb40

uint __thiscall
FShaderParameterMap::CountParametersOfType(FShaderParameterMap *this,EShaderParameterType param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  EShaderParameterType EVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  EShaderParameterType local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->ParameterMap).field_0x28;
  puVar1 = &(this->ParameterMap).field_0x10;
  uVar12 = 0;
  iVar13 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ParameterMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    iVar14 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar13) goto LAB_145e4fbdd;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar8 = local_res18 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_145e4fbdd:
  uVar11 = *(uint *)&(this->ParameterMap).field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar13);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ParameterMap).field_0x8 -
                       *(int *)&(this->ParameterMap).field_0x34);
  local_res10 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  EVar5 = local_res10;
  uVar7 = *(uint *)&(this->ParameterMap).field_0x28;
  if (uVar11 != uVar7) {
    puVar10 = *(undefined1 **)&(this->ParameterMap).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar13 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar13;
      uVar16 = uVar16 + 0x20;
      iVar13 = iVar13 + 1;
      uVar11 = uVar7;
      if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar13) goto LAB_145e4fce0;
      uVar11 = *(uint *)(puVar10 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar16;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_145e4fce0:
  while( true ) {
    if (*(int *)&(this->ParameterMap).field_0x8 - *(int *)&(this->ParameterMap).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FParameterAllocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    uVar7 = uVar12 + 1;
    if (*(EShaderParameterType *)
         ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x16 + *(longlong *)&this->ParameterMap) !=
        EVar5) {
      uVar7 = uVar12;
    }
    uVar12 = uVar7;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return uVar12;
}

// FindAndRemoveParameterAllocation @ 145e54120

TOptional<FParameterAllocation> * __thiscall
FShaderParameterMap::FindAndRemoveParameterAllocation
          (FShaderParameterMap *this,TOptional<FParameterAllocation> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  FParameterAllocation FVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  iVar3 = TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TStringView<wchar_t>_>
                    ((TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
                      *)this,uVar2,param_1);
  if (iVar3 == -1) {
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  FVar1 = *(FParameterAllocation *)
           ((longlong)iVar3 * 0x20 + 0x10 + *(longlong *)&this->ParameterMap);
  TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
  ::RemoveByIndex((TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
                   *)this,iVar3);
  __return_storage_ptr__->bIsSet = false;
  __return_storage_ptr__->TypedValue = FVar1;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// FindParameterAllocation @ 145e54730

TOptional<FParameterAllocation> * __thiscall
FShaderParameterMap::FindParameterAllocation
          (FShaderParameterMap *this,TOptional<FParameterAllocation> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  FParameterAllocation *pFVar4;
  
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  iVar2 = TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TStringView<wchar_t>_>
                    ((TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
                      *)this,uVar1,param_1);
  if (iVar2 == -1) {
    __return_storage_ptr__->bIsSet = false;
  }
  else {
    lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)&this->ParameterMap;
    __return_storage_ptr__->bIsSet = false;
    pFVar4 = (FParameterAllocation *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      pFVar4 = (FParameterAllocation *)0x0;
    }
    if (pFVar4 != (FParameterAllocation *)0x0) {
      pFVar4->bBound = true;
      __return_storage_ptr__->TypedValue = *pFVar4;
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// FindParameterAllocation @ 145e547c0

bool __thiscall
FShaderParameterMap::FindParameterAllocation
          (FShaderParameterMap *this,TStringView<wchar_t> *param_1,ushort *param_2,ushort *param_3,
          ushort *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(local_18.Size,local_18.DataPtr);
  iVar3 = TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TStringView<wchar_t>_>
                    ((TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
                      *)this,uVar2,&local_18);
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)&this->ParameterMap;
    puVar5 = (undefined8 *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined1 *)((longlong)puVar5 + 7) = 1;
      uVar1 = *puVar5;
      *param_2 = (ushort)uVar1;
      local_18.DataPtr._2_2_ = (ushort)((ulonglong)uVar1 >> 0x10);
      *param_3 = local_18.DataPtr._2_2_;
      local_18.DataPtr._4_2_ = (ushort)((ulonglong)uVar1 >> 0x20);
      *param_4 = local_18.DataPtr._4_2_;
      return true;
    }
  }
  return false;
}

// GetAllParameterNamesOfType @ 145e56150

TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> * __thiscall
FShaderParameterMap::GetAllParameterNamesOfType
          (FShaderParameterMap *this,
          TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EShaderParameterType param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  EShaderParameterType EVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  EShaderParameterType local_res18;
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &(this->ParameterMap).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar8 = *(int *)&(this->ParameterMap).field_0x28;
  iVar14 = 0;
  uVar6 = 1;
  iVar16 = 0;
  iVar7 = iVar14;
  if (iVar8 != 0) {
    puVar17 = *(uint **)&(this->ParameterMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    iVar16 = 0;
    iVar14 = 0;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar7 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145e561fd;
      uVar13 = puVar17[lVar10 + 1];
    }
    uVar6 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iVar7 = iVar16 + -1 + local_res20;
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
  }
LAB_145e561fd:
  uVar13 = *(uint *)&(this->ParameterMap).field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar6,iVar14);
  TStack_70.CurrentBitIndex = iVar7;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iVar7;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->ParameterMap).field_0x8 -
                       *(int *)&(this->ParameterMap).field_0x34);
  local_res18 = param_1;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar8 < (int)uVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar9;
  }
  EVar4 = local_res18;
  uVar6 = *(uint *)&(this->ParameterMap).field_0x28;
  if (uVar13 != uVar6) {
    puVar15 = *(undefined1 **)&(this->ParameterMap).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145e56310;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar18;
    if ((int)uVar6 < (int)uVar13) {
      uVar13 = uVar6;
    }
  }
LAB_145e56310:
  while( true ) {
    if (*(int *)&(this->ParameterMap).field_0x8 - *(int *)&(this->ParameterMap).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FParameterAllocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_70.CurrentBitIndex == uVar13) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar12 = (undefined8 *)
              (*(longlong *)&this->ParameterMap + (longlong)TStack_70.CurrentBitIndex * 0x20);
    if (*(EShaderParameterType *)((longlong)puVar12 + 0x16) == EVar4) {
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar11 = *puVar12;
      iVar8 = *(int *)(puVar12 + 1) + -1;
      if (*(int *)(puVar12 + 1) == 0) {
        iVar8 = 0;
      }
      *(int *)(pFVar11 + 8) = iVar8;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return __return_storage_ptr__;
}

// RemoveParameterAllocation @ 145e6b3f0

void __thiscall
FShaderParameterMap::RemoveParameterAllocation
          (FShaderParameterMap *this,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  if (*(int *)&(this->ParameterMap).field_0x8 != *(int *)&(this->ParameterMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ParameterMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ParameterMap).field_0x38;
    }
    iVar7 = *(int *)(puVar5 + ((longlong)*(int *)&(this->ParameterMap).field_0x48 - 1U &
                              (longlong)(int)uVar3) * 4);
    if (iVar7 != -1) {
      pwVar1 = param_1->DataPtr;
      uVar2 = *(undefined8 *)&param_1->Size;
      do {
        puVar9 = (undefined8 *)((longlong)iVar7 * 0x20 + *(longlong *)&this->ParameterMap);
        iVar6 = *(int *)(puVar9 + 1) + -1;
        if (*(int *)(puVar9 + 1) == 0) {
          iVar6 = 0;
        }
        iVar8 = (int)uVar2;
        if (iVar8 == iVar6) {
          if ((iVar8 != 0) && (iVar6 != 0)) {
            iVar4 = iVar6;
            if (iVar8 < iVar6) {
              iVar4 = iVar8;
            }
            iVar4 = FGenericPlatformStricmp::Strnicmp(pwVar1,(wchar_t *)*puVar9,(longlong)iVar4);
            if (iVar4 != 0) goto LAB_145e6b4b4;
          }
          if (iVar8 == iVar6) {
            TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
                             *)this,iVar7);
            return;
          }
        }
LAB_145e6b4b4:
        iVar7 = *(int *)(puVar9 + 3);
      } while (iVar7 != -1);
    }
  }
  return;
}

