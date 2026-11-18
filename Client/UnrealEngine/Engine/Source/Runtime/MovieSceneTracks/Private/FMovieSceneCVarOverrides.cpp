// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// StaticStruct @ 1467255c0

UScriptStruct * __cdecl FMovieSceneCVarOverrides::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneCVarOverrides.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneCVarOverrides.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCVarOverrides,(UObject *)pUVar1,
                         L"MovieSceneCVarOverrides");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneCVarOverrides.OuterSingleton;
}

// GetString @ 14679b550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FMovieSceneCVarOverrides::GetString(FMovieSceneCVarOverrides *this,FString *__return_storage_ptr__)

{
  undefined1 auStack_258 [32];
  TStringBuilderWithBuffer<wchar_t,256> local_238;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_258;
  local_238._padding_ = (longlong)local_238.StringBuffer;
  local_238._padding_._0_2_ = 0;
  local_238._padding_ = (longlong)local_238.StringBuffer;
  local_238._padding_ = (longlong)local_18;
  GetString(this,&local_238);
  if ((ulonglong)local_238._padding_ < (wchar_t *)(local_238._padding_ + 2)) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_238,1);
  }
  *(wchar_t *)local_238._padding_ = L'\0';
  ::FString::FString(__return_storage_ptr__,(wchar_t *)local_238._padding_);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_238);
  return __return_storage_ptr__;
}

// GetString @ 14679b610

void __thiscall
FMovieSceneCVarOverrides::GetString
          (FMovieSceneCVarOverrides *this,TStringBuilderWithBuffer<wchar_t,256> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = *(int *)&(this->ValuesByCVar).field_0x28;
  puVar1 = &(this->ValuesByCVar).field_0x10;
  iVar10 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar11 != 0) {
    puVar14 = *(uint **)&(this->ValuesByCVar).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar9 = *puVar14;
    iVar13 = 0;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14679b6ad;
      uVar9 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar3 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = iVar13 + -1 + (int)lVar8;
    if (iVar11 < iVar7) {
      iVar7 = iVar11;
    }
  }
LAB_14679b6ad:
  uVar9 = *(uint *)&(this->ValuesByCVar).field_0x28;
  uVar15 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar10);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ValuesByCVar).field_0x8 -
                       *(int *)&(this->ValuesByCVar).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar11 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ValuesByCVar).field_0x28;
  if (uVar9 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ValuesByCVar).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar15 = uVar15 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14679b7b0;
      uVar9 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14679b7b0:
  while( true ) {
    if (*(int *)&(this->ValuesByCVar).field_0x8 - *(int *)&(this->ValuesByCVar).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar2 = (undefined8 *)
             (*(longlong *)&this->ValuesByCVar + (longlong)TStack_60.CurrentBitIndex * 0x28);
    if ((int)(param_1->_padding_ - param_1->_padding_ >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L", ",2)
      ;
    }
    iVar11 = *(int *)(puVar2 + 1) + -1;
    if (*(int *)(puVar2 + 1) == 0) {
      iVar11 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)param_1,(wchar_t *)*puVar2,iVar11);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" ",1);
    iVar11 = *(int *)(puVar2 + 3) + -1;
    if (*(int *)(puVar2 + 3) == 0) {
      iVar11 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)param_1,(wchar_t *)puVar2[2],iVar11);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// SetFromString @ 1467c1c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneCVarOverrides::SetFromString(FMovieSceneCVarOverrides *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  TPairInitializer<FString_const_&,FString_const_&> local_res18;
  ForAnyElementType local_88;
  int local_80 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  wchar_t *local_58;
  undefined *local_50;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)this);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_68,L"\r\n",true);
  iVar1 = local_68.ArrayNum;
  uVar4 = (ulonglong)local_68.ArrayNum;
  pFVar6 = local_68.AllocatorInstance.Data + uVar4 * 0x10;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80[0] = 0;
  local_80[1] = 0;
  FVar5.Data = local_68.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar5.Data == pFVar6) break;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    ::FString::ParseIntoArray((FString *)FVar5.Data,&local_78,L",",true);
    iVar2 = local_78.ArrayNum;
    iVar3 = 0;
    if (local_78.ArrayNum != 0) {
      iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,local_78.ArrayNum,&local_88,local_80,local_80 + 1);
      ConstructItems<FString,FString,int>
                (local_88.Data + (longlong)iVar3 * 0x10,(FString *)local_78.AllocatorInstance.Data,
                 iVar2);
      iVar3 = local_78.ArrayNum;
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,iVar3);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    uVar4 = local_68._8_8_ & 0xffffffff;
    FVar5.Data = FVar5.Data + 0x10;
  }
  iVar1 = local_80[0];
  pFVar6 = local_88.Data + (longlong)local_80[0] * 0x10;
  FVar5.Data = local_88.Data;
  do {
    if (local_80[0] != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar5.Data == pFVar6) {
      DestructItems<FString,int>((FString *)local_88.Data,local_80[0]);
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      return;
    }
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    local_58 = L",";
    local_50 = &::u__;
    ::FString::ParseIntoArray((FString *)FVar5.Data,&local_78,&local_58,2,true);
    if (local_78.ArrayNum == 2) {
      local_48 = local_78.AllocatorInstance.Data;
      local_40 = local_78.AllocatorInstance.Data + 0x10;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)this,&local_res18,(bool *)&local_48);
LAB_1467c1de5:
    }
    else if (2 < (byte)LogMovieScene._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      goto LAB_1467c1de5;
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    FVar5.Data = FVar5.Data + 0x10;
  } while( true );
}

