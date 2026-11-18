// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// ~FPolyglotTextSource @ 1417393b0

void __thiscall FPolyglotTextSource::~FPolyglotTextSource(FPolyglotTextSource *this)

{
  void *pvVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PolyglotDataCS);
  *(undefined4 *)&(this->PolyglotTextDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PolyglotTextDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FTextId,FPolyglotTextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTextId,FPolyglotTextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTextId,FPolyglotTextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PolyglotTextDataMap);
  *(undefined4 *)&(this->AvailableCultureInfo).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AvailableCultureInfo).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->AvailableCultureInfo);
  return;
}

// operator() @ 14173c550

void __thiscall
`FPolyglotTextSource::GetLocalizedCultureNames'::__l2::<lambda_1>::operator()
          (void *this,ELocalizedTextSourceCategory param_1)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  FCultureInfo *this_01;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)((longlong)this + 8);
  this_01 = TMapBase<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo,0>_>
            ::Find((void *)(*(longlong *)this + 8),param_1);
  if (this_01 != (FCultureInfo *)0x0) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
    GenerateKeyArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                *)this_01,&local_18);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Append<TSizedDefaultAllocator<32>_>(this_00,&local_18);
    DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
    GenerateKeyArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                *)&this_01->LocalizedCultures,&local_18);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Append<TSizedDefaultAllocator<32>_>(this_00,&local_18);
    DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14173e630

void __thiscall
`FPolyglotTextSource::UnregisterCultureNames'::__l2::<lambda_1>::operator()
          (void *this,
          TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
          *param_1,FString *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  wchar_t *pwVar7;
  
  iVar6 = (param_2->Data).ArrayNum;
  if (1 < iVar6) {
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>
                      (iVar6 + -1,(wchar_t *)(param_2->Data).AllocatorInstance.Data);
    piVar5 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
             ::FindOrAddImpl<FString_const_&>
                       ((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                         *)param_1,uVar4,param_2);
    pwVar7 = L"";
    *piVar5 = *piVar5 + -1;
    if ((*piVar5 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CultureCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\PolyglotTextSource.cpp"
                           ,0xfa,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*piVar5 == 0) && (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34)) {
      iVar1 = (param_2->Data).ArrayNum;
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      else {
        pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      RemoveImpl<FString>((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                           *)param_1,uVar4,param_2);
    }
  }
  return;
}

// AddPolyglotDataToResource @ 141743110

void __thiscall
FPolyglotTextSource::AddPolyglotDataToResource
          (FPolyglotTextSource *this,FPolyglotTextData *param_1,ELocalizationLoadFlags param_2,
          TArrayView<FString_const_,int> *param_3,FTextLocalizationResource *param_4,
          FTextLocalizationResource *param_5)

{
  ELocalizedTextSourceCategory EVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  FString *pFVar5;
  FTextKeyState *pFVar6;
  size_t sVar7;
  ulong64 uVar8;
  wchar_t *pwVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FString *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar18;
  bool bVar19;
  FTextKey local_res8 [2];
  FTextKey local_res10 [2];
  ELocalizationLoadFlags local_res18;
  TArrayView<FString_const_,int> *local_res20;
  FString local_148;
  FString local_138;
  FScriptContainerElement *local_128;
  uint uStack_120;
  undefined4 uStack_11c;
  FString local_118;
  FTextKey local_108;
  FTextKey local_104;
  FString local_100;
  int local_f0;
  int local_ec;
  FTextKey local_e8;
  int local_e4;
  FTextKey local_e0 [2];
  FString *local_d8;
  undefined8 uStack_d0;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  undefined4 local_7c;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  uint uVar17;
  
  local_res18 = param_2;
  local_res20 = param_3;
  local_e4 = (**(code **)(this->_padding_ + 8))();
  local_ec = param_3->ArrayNum;
  lVar18 = (longlong)local_ec;
  local_118.Data.ArrayNum = (param_1->NativeCulture).Data.ArrayNum;
  lVar15 = (longlong)local_118.Data.ArrayNum;
  local_f0 = local_ec - local_e4;
  if (local_118.Data.ArrayNum < 2) {
    TextLocalizationResourceUtil::GetNativeCultureName(&local_100,param_1->Category);
    local_118.Data.ArrayNum = local_100.Data.ArrayNum;
    if (local_100.Data.ArrayNum < 2) {
      ::FString::operator=(&local_100,L"en");
      local_118.Data.ArrayNum = local_100.Data.ArrayNum;
    }
    local_118.Data.AllocatorInstance.Data = local_100.Data.AllocatorInstance.Data;
    local_118.Data.ArrayMax = local_100.Data.ArrayMax;
    local_100.Data.ArrayNum = 0;
    local_100.Data.ArrayMax = 0;
    local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    pFVar14 = (param_1->NativeCulture).Data.AllocatorInstance.Data;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_118.Data.ArrayNum,0,(ForAnyElementType *)&local_118,local_118.Data.ArrayNum
               ,&local_118.Data.ArrayMax);
    memcpy(local_118.Data.AllocatorInstance.Data,pFVar14,lVar15 * 2);
  }
  uVar17 = 0;
  uVar16 = 0;
  uVar4 = 0;
  if ((param_2 & Native) != None) {
    pFVar13 = param_3->DataPtr;
    pFVar5 = pFVar13 + lVar18;
    iVar3 = local_118.Data.ArrayNum;
    for (; pFVar13 != pFVar5; pFVar13 = pFVar13 + 1) {
      iVar12 = (pFVar13->Data).ArrayNum;
      if (iVar12 == iVar3) {
        if (iVar12 < 2) goto LAB_1417435e1;
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar13->Data).AllocatorInstance.Data,
                           (wchar_t *)local_118.Data.AllocatorInstance.Data);
        bVar19 = iVar3 == 0;
        iVar3 = local_118.Data.ArrayNum;
      }
      else {
        bVar19 = iVar12 + iVar3 == 1;
      }
      if (bVar19) goto LAB_1417435e1;
    }
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar13 = &local_118;
    local_138.Data.ArrayNum = 0;
    local_138.Data.ArrayMax = 0;
    uVar10 = uVar17;
    do {
      uVar11 = uVar4;
      if ((int)uVar10 < 1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar19)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((pFVar13->Data).ArrayNum < 2) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InCulture.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\PolyglotTextData.cpp"
                              ,0x93,L"Culture name cannot be empty!"), bVar19)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
               ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                       *)&param_1->LocalizedStrings,pFVar13);
      if (pFVar5 != (FString *)0x0) {
        if (&local_138 != pFVar5) {
          iVar3 = (pFVar5->Data).ArrayNum;
          pFVar14 = (pFVar5->Data).AllocatorInstance.Data;
          local_138.Data.ArrayNum = iVar3;
          if (((iVar3 != 0) || (local_138.Data.ArrayMax != 0)) &&
             (UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar3,local_138.Data.ArrayMax,(ForAnyElementType *)&local_138,iVar3,
                         &local_138.Data.ArrayMax), iVar3 != 0)) {
            memcpy(local_138.Data.AllocatorInstance.Data,pFVar14,(longlong)iVar3 * 2);
          }
        }
        goto LAB_141743428;
      }
      uVar10 = uVar10 + 1;
      pFVar13 = pFVar13 + 1;
    } while ((int)uVar10 < 1);
    if (param_1->bIsMinimalPatch == false) {
      if (&local_138 != &param_1->NativeString) {
        iVar3 = (param_1->NativeString).Data.ArrayNum;
        pFVar14 = (param_1->NativeString).Data.AllocatorInstance.Data;
        local_138.Data.ArrayNum = iVar3;
        if (((iVar3 != 0) || (local_138.Data.ArrayMax != 0)) &&
           (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar3,local_138.Data.ArrayMax,(ForAnyElementType *)&local_138,iVar3,
                       &local_138.Data.ArrayMax), iVar3 != 0)) {
          memcpy(local_138.Data.AllocatorInstance.Data,pFVar14,(longlong)iVar3 * 2);
        }
      }
LAB_141743428:
      iVar3 = (param_1->Key).Data.ArrayNum;
      iVar12 = local_f0;
      if (param_1->bIsMinimalPatch != false) {
        iVar12 = local_ec;
      }
      pFVar14 = (param_1->Key).Data.AllocatorInstance.Data;
      local_e8.Index = -1;
      uVar10 = iVar3 - 1;
      if (iVar3 == 0) {
        uVar10 = uVar17;
      }
      uStack_11c = local_7c;
      local_res8[0].Index = -1;
      if (uVar10 != 0) {
        local_128 = pFVar14;
        uStack_120 = uVar10;
        pFVar6 = FTextKeyState::GetState();
        if (pFVar14 == (FScriptContainerElement *)0x0) {
          pFVar14 = (FScriptContainerElement *)0x0;
          uVar10 = uVar16;
        }
        else {
          if ((0 < (int)uVar10) && (*(short *)(pFVar14 + ((longlong)(int)uVar10 + -1) * 2) == 0)) {
            uVar10 = uVar10 - 1;
          }
          if (uVar10 == 0xffffffff) {
            sVar7 = wcslen((wchar_t *)pFVar14);
            uVar10 = (uint)sVar7;
          }
        }
        uVar8 = CityHash64((char *)pFVar14,uVar10 * 2);
        local_c8._12_4_ = uStack_11c;
        local_c8.Size = uStack_120;
        local_c8.DataPtr = (wchar_t *)local_128;
        FTextKeyState::FindOrAddImpl
                  (pFVar6,&local_c8,(int)(uVar8 >> 0x20) * 0x17 + (int)uVar8,local_res8);
      }
      iVar3 = (param_1->Namespace).Data.ArrayNum;
      pFVar14 = (param_1->Namespace).Data.AllocatorInstance.Data;
      local_res10[0].Index = -1;
      uVar10 = iVar3 - 1;
      if (iVar3 == 0) {
        uVar10 = uVar17;
      }
      uStack_11c = local_6c;
      local_128 = pFVar14;
      uStack_120 = uVar10;
      if (uVar10 != 0) {
        pFVar6 = FTextKeyState::GetState();
        if (pFVar14 == (FScriptContainerElement *)0x0) {
          pFVar14 = (FScriptContainerElement *)0x0;
          uVar10 = uVar16;
        }
        else {
          if ((0 < (int)uVar10) && (*(short *)(pFVar14 + ((longlong)(int)uVar10 + -1) * 2) == 0)) {
            uVar10 = uVar10 - 1;
          }
          if (uVar10 == 0xffffffff) {
            sVar7 = wcslen((wchar_t *)pFVar14);
            uVar10 = (uint)sVar7;
          }
        }
        uVar8 = CityHash64((char *)pFVar14,uVar10 * 2);
        local_b8._12_4_ = uStack_11c;
        local_b8.Size = uStack_120;
        local_b8.DataPtr = (wchar_t *)local_128;
        FTextKeyState::FindOrAddImpl
                  (pFVar6,&local_b8,(int)(uVar8 >> 0x20) * 0x17 + (int)uVar8,local_res10);
      }
      if ((param_1->NativeString).Data.ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(param_1->NativeString).Data.AllocatorInstance.Data;
      }
      uVar10 = FCrc::StrCrc32<wchar_t>(pwVar9,0);
      FTextLocalizationResource::AddEntry
                (param_4,local_res10,local_res8,uVar10,&local_138,iVar12,&local_e8);
      param_3 = local_res20;
    }
    param_2 = local_res18;
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
      param_2 = local_res18;
    }
  }
LAB_1417435e1:
  EVar1 = param_1->Category;
  if (EVar1 == Game) {
    bVar19 = (param_2 & (ForceLocalizedGame|Game)) != None;
  }
  else if (EVar1 == Engine) {
    bVar19 = (bool)(param_2 >> 3 & 1);
  }
  else {
    if (EVar1 != Editor) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\PolyglotTextSource.cpp"
                          ,0x4f,L"Unknown ELocalizedTextSourceCategory!");
      if (bVar19) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_14174399d;
    }
    bVar19 = (bool)(param_2 >> 1 & 1);
  }
  if (bVar19 != false) {
    pFVar13 = param_3->DataPtr;
    uStack_d0 = *(undefined8 *)&param_3->ArrayNum;
    iVar3 = param_3->ArrayNum;
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.Data.ArrayNum = 0;
    local_148.Data.ArrayMax = 0;
    uVar10 = uVar4;
    local_d8 = pFVar13;
    uVar11 = uVar17;
    if (0 < iVar3) {
      do {
        uVar10 = uVar4;
        if ((int)uVar11 < iVar3) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar19)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((pFVar13->Data).ArrayNum < 2) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("!InCulture.IsEmpty()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\PolyglotTextData.cpp"
                                ,0x93,L"Culture name cannot be empty!"), bVar19)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar5 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                 ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                         *)&param_1->LocalizedStrings,pFVar13);
        if (pFVar5 != (FString *)0x0) {
          uVar4 = uVar11;
          if (&local_148 != pFVar5) {
            iVar3 = (pFVar5->Data).ArrayNum;
            pFVar14 = (pFVar5->Data).AllocatorInstance.Data;
            local_148.Data.ArrayNum = iVar3;
            if (((iVar3 != 0) || (local_148.Data.ArrayMax != 0)) &&
               (UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar3,local_148.Data.ArrayMax,(ForAnyElementType *)&local_148,iVar3,
                           &local_148.Data.ArrayMax), iVar3 != 0)) {
              memcpy(local_148.Data.AllocatorInstance.Data,pFVar14,(longlong)iVar3 * 2);
            }
          }
          goto LAB_141743799;
        }
        uVar11 = uVar11 + 1;
        pFVar13 = pFVar13 + 1;
        uVar10 = local_148.Data.ArrayMax;
      } while ((int)uVar11 < iVar3);
    }
    if (param_1->bIsMinimalPatch == false) {
      if (&local_148 != &param_1->NativeString) {
        iVar3 = (param_1->NativeString).Data.ArrayNum;
        pFVar14 = (param_1->NativeString).Data.AllocatorInstance.Data;
        local_148.Data.ArrayNum = iVar3;
        if (((iVar3 != 0) || (uVar10 != 0)) &&
           (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar3,uVar10,(ForAnyElementType *)&local_148,iVar3,
                       &local_148.Data.ArrayMax), iVar3 != 0)) {
          memcpy(local_148.Data.AllocatorInstance.Data,pFVar14,(longlong)iVar3 * 2);
        }
      }
LAB_141743799:
      iVar3 = (param_1->Key).Data.ArrayNum;
      iVar12 = uVar4 - local_e4;
      pFVar14 = (param_1->Key).Data.AllocatorInstance.Data;
      local_e0[0].Index = -1;
      uVar4 = iVar3 - 1;
      if (iVar3 == 0) {
        uVar4 = uVar17;
      }
      uStack_11c = local_5c;
      local_108.Index = -1;
      if (uVar4 != 0) {
        local_128 = pFVar14;
        uStack_120 = uVar4;
        pFVar6 = FTextKeyState::GetState();
        if (pFVar14 == (FScriptContainerElement *)0x0) {
          pFVar14 = (FScriptContainerElement *)0x0;
          uVar4 = uVar16;
        }
        else {
          if ((0 < (int)uVar4) && (*(short *)(pFVar14 + ((longlong)(int)uVar4 + -1) * 2) == 0)) {
            uVar4 = uVar4 - 1;
          }
          if (uVar4 == 0xffffffff) {
            sVar7 = wcslen((wchar_t *)pFVar14);
            uVar4 = (uint)sVar7;
          }
        }
        uVar8 = CityHash64((char *)pFVar14,uVar4 * 2);
        local_a8._12_4_ = uStack_11c;
        local_a8.Size = uStack_120;
        local_a8.DataPtr = (wchar_t *)local_128;
        FTextKeyState::FindOrAddImpl
                  (pFVar6,&local_a8,(int)(uVar8 >> 0x20) * 0x17 + (int)uVar8,&local_108);
      }
      iVar3 = (param_1->Namespace).Data.ArrayNum;
      pFVar14 = (param_1->Namespace).Data.AllocatorInstance.Data;
      local_104.Index = -1;
      uVar4 = iVar3 - 1;
      if (iVar3 == 0) {
        uVar4 = uVar17;
      }
      uStack_11c = local_4c;
      local_128 = pFVar14;
      uStack_120 = uVar4;
      if (uVar4 != 0) {
        pFVar6 = FTextKeyState::GetState();
        if (pFVar14 == (FScriptContainerElement *)0x0) {
          pFVar14 = (FScriptContainerElement *)0x0;
        }
        else {
          uVar16 = uVar4;
          if ((0 < (int)uVar4) && (*(short *)(pFVar14 + ((longlong)(int)uVar4 + -1) * 2) == 0)) {
            uVar16 = uVar4 - 1;
          }
          if (uVar16 == 0xffffffff) {
            sVar7 = wcslen((wchar_t *)pFVar14);
            uVar16 = (uint)sVar7;
          }
        }
        uVar8 = CityHash64((char *)pFVar14,uVar16 * 2);
        local_98._12_4_ = uStack_11c;
        local_98.Size = uStack_120;
        local_98.DataPtr = (wchar_t *)local_128;
        FTextKeyState::FindOrAddImpl
                  (pFVar6,&local_98,(int)(uVar8 >> 0x20) * 0x17 + (int)uVar8,&local_104);
      }
      if ((param_1->NativeString).Data.ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(param_1->NativeString).Data.AllocatorInstance.Data;
      }
      uVar4 = FCrc::StrCrc32<wchar_t>(pwVar9,0);
      FTextLocalizationResource::AddEntry
                (param_5,&local_104,&local_108,uVar4,&local_148,iVar12,local_e0);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
LAB_14174399d:
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  return;
}

// GetLocalizedCultureNames @ 14175f120

void __thiscall
FPolyglotTextSource::GetLocalizedCultureNames
          (FPolyglotTextSource *this,ELocalizationLoadFlags param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FPolyglotTextSource *local_18;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_10;
  
  lpCriticalSection = &this->PolyglotDataCS;
  local_18 = this;
  local_10 = param_2;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((param_1 & Editor) != None) {
      `FPolyglotTextSource::GetLocalizedCultureNames'::__l2::<lambda_1>::operator()
                (&local_18,Editor);
    }
    if ((param_1 & Game) != None) {
      `FPolyglotTextSource::GetLocalizedCultureNames'::__l2::<lambda_1>::operator()(&local_18,Game);
    }
    if ((param_1 & Engine) != None) {
      `FPolyglotTextSource::GetLocalizedCultureNames'::__l2::<lambda_1>::operator()
                (&local_18,Engine);
    }
                    /* WARNING: Could not recover jumptable at 0x00014175f18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetNativeCultureName @ 14175fdc0

bool __thiscall
FPolyglotTextSource::GetNativeCultureName
          (FPolyglotTextSource *this,ELocalizedTextSourceCategory param_1,FString *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  FCultureInfo *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  uint *puVar10;
  
  lpCriticalSection = &this->PolyglotDataCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar4 = TMapBase<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo,0>_>
           ::Find(&this->AvailableCultureInfo,param_1);
  if ((pFVar4 == (FCultureInfo *)0x0) ||
     (*(int *)&(pFVar4->NativeCultures).field_0x8 - *(int *)&(pFVar4->NativeCultures).field_0x34 < 1
     )) {
    bVar9 = false;
  }
  else {
    iVar2 = *(int *)&(pFVar4->NativeCultures).field_0x28;
    iVar5 = 0;
    iVar7 = iVar5;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(pFVar4->NativeCultures).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)&(pFVar4->NativeCultures).field_0x10;
      }
      uVar3 = *puVar10;
      iVar6 = iVar5;
      while (uVar3 == 0) {
        lVar8 = (longlong)iVar6;
        iVar5 = iVar5 + 0x20;
        iVar6 = iVar6 + 1;
        iVar7 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar6) goto LAB_14175fe85;
        uVar3 = puVar10[lVar8 + 1];
      }
      uVar1 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = (int)lVar8 + -1 + iVar5;
      if (iVar2 < iVar7) {
        iVar7 = iVar2;
      }
    }
LAB_14175fe85:
    ::FString::operator=
              (param_2,(FString *)((longlong)iVar7 * 0x20 + *(longlong *)&pFVar4->NativeCultures));
    bVar9 = true;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar9;
}

// GetPriority @ 1417607e0

int __thiscall FPolyglotTextSource::GetPriority(FPolyglotTextSource *this)

{
  return 1000;
}

// LoadLocalizedResources @ 14176c110

void __thiscall
FPolyglotTextSource::LoadLocalizedResources
          (FPolyglotTextSource *this,ELocalizationLoadFlags param_1,
          TArrayView<FString_const_,int> *param_2,FTextLocalizationResource *param_3,
          FTextLocalizationResource *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  FTextLocalizationResource *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  ELocalizationLoadFlags local_res10;
  TArrayView<FString_const_,int> *local_res18;
  FTextLocalizationResource *local_res20;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  TArrayView<FString_const_,int> local_58;
  
  lpCriticalSection = &this->PolyglotDataCS;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar11 = 0;
  puVar2 = &(this->PolyglotTextDataMap).field_0x10;
  iVar3 = *(int *)&(this->PolyglotTextDataMap).field_0x28;
  uVar7 = 1;
  iVar13 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->PolyglotTextDataMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar2;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14176c1ef;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar13;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14176c1ef:
  uVar10 = *(uint *)&(this->PolyglotTextDataMap).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uVar7,iVar11);
  TStack_80.CurrentBitIndex = iVar8;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_80._28_4_ = iVar8;
  TStack_80.BaseBitIndex = iVar13;
  uStack_60 = CONCAT44(uStack_9c,
                       *(int *)&(this->PolyglotTextDataMap).field_0x8 -
                       *(int *)&(this->PolyglotTextDataMap).field_0x34);
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar5 = local_res20;
  uVar7 = *(uint *)&(this->PolyglotTextDataMap).field_0x28;
  if (uVar10 != uVar7) {
    puVar12 = *(undefined1 **)&(this->PolyglotTextDataMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar2;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14176c310;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_14176c310:
  while( true ) {
    if (*(int *)&(this->PolyglotTextDataMap).field_0x8 -
        *(int *)&(this->PolyglotTextDataMap).field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<FTextId,FPolyglotTextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_80.CurrentBitIndex == uVar10) &&
       (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    local_58.DataPtr = local_res18->DataPtr;
    local_58.ArrayNum = local_res18->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&local_res18->field_0xc;
    AddPolyglotDataToResource
              (this,(FPolyglotTextData *)
                    (*(longlong *)&this->PolyglotTextDataMap + 8 +
                    (longlong)TStack_80.CurrentBitIndex * 0xc0),local_res10,&local_58,pFVar5,param_4
              );
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
                    /* WARNING: Could not recover jumptable at 0x00014176c3be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// QueryLocalizedResource @ 14176eb10

EQueryLocalizedResourceResult __thiscall
FPolyglotTextSource::QueryLocalizedResource
          (FPolyglotTextSource *this,ELocalizationLoadFlags param_1,
          TArrayView<FString_const_,int> *param_2,FTextId param_3,FTextLocalizationResource *param_4
          ,FTextLocalizationResource *param_5)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FPolyglotTextData *pFVar1;
  FTextId local_res20;
  TArrayView<FString_const_,int> local_18;
  
  lpCriticalSection = &this->PolyglotDataCS;
  local_res20 = param_3;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = TMapBase<FTextId,FPolyglotTextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FPolyglotTextData,0>_>
           ::Find((TMapBase<FTextId,FPolyglotTextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FPolyglotTextData,0>_>
                   *)&this->PolyglotTextDataMap,&local_res20);
  if (pFVar1 != (FPolyglotTextData *)0x0) {
    local_18.DataPtr = param_2->DataPtr;
    local_18.ArrayNum = param_2->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    AddPolyglotDataToResource(this,pFVar1,param_1,&local_18,param_4,param_5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar1 == (FPolyglotTextData *)0x0;
}

// RegisterCultureNames @ 1417726c0

void __thiscall
FPolyglotTextSource::RegisterCultureNames(FPolyglotTextSource *this,FPolyglotTextData *param_1)

{
  int iVar1;
  uint uVar2;
  FCultureInfo *this_00;
  int *piVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  
  local_res8[0] = (FIdentityFunctor)param_1->Category;
  this_00 = TMapBase<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo,0>_>
            ::FindOrAddImpl<enum_ELocalizedTextSourceCategory>
                      (&this->AvailableCultureInfo,(uint)(byte)local_res8[0],
                       (ELocalizedTextSourceCategory *)local_res8);
  iVar1 = (param_1->NativeCulture).Data.ArrayNum;
  if (1 < iVar1) {
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>
                      (iVar1 + -1,(wchar_t *)(param_1->NativeCulture).Data.AllocatorInstance.Data);
    piVar3 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
             ::FindOrAddImpl<FString_const_&>
                       ((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                         *)this_00,uVar2,&param_1->NativeCulture);
    *piVar3 = *piVar3 + 1;
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&param_1->LocalizedStrings,&local_28);
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
            ((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum,local_res8[0],
             (TLess<void> *)local_res10);
  iVar1 = local_28.ArrayNum;
  pFVar5 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 0x10;
  FVar4.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar4.Data == pFVar5) break;
    if (1 < *(int *)(FVar4.Data + 8)) {
      uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>
                        (*(int *)(FVar4.Data + 8) + -1,*(wchar_t **)FVar4.Data);
      piVar3 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
               ::FindOrAddImpl<FString_const_&>
                         ((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                           *)&this_00->LocalizedCultures,uVar2,(FString *)FVar4.Data);
      *piVar3 = *piVar3 + 1;
    }
    FVar4.Data = FVar4.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// RegisterPolyglotTextData @ 1417727c0

void __thiscall
FPolyglotTextSource::RegisterPolyglotTextData(FPolyglotTextSource *this,FPolyglotTextData *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  code *pcVar3;
  FTextKey FVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  FTextKeyState *pFVar8;
  ulong64 uVar9;
  FPolyglotTextData *pFVar10;
  wchar_t *_Str;
  wchar_t *_Str_00;
  FTextKey local_res10 [2];
  FTextKey local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_a8 [8];
  FTextId local_a0;
  TStringView<wchar_t> local_98;
  FTextId *local_88;
  FPolyglotTextData *local_80;
  TStringView<wchar_t> local_78;
  undefined4 local_5c;
  undefined4 local_4c;
  
  _Str_00 = L"";
  if ((((param_1->Key).Data.ArrayNum < 2) || ((param_1->NativeString).Data.ArrayNum < 2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPolyglotTextData.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\PolyglotTextSource.cpp"
                         ,0xc9,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (&this->PolyglotDataCS == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->PolyglotDataCS);
  if ((param_1->Key).Data.ArrayNum == 0) {
    _Str = L"";
LAB_141772864:
    sVar7 = wcslen(_Str);
    iVar6 = (int)sVar7;
  }
  else {
    _Str = (wchar_t *)(param_1->Key).Data.AllocatorInstance.Data;
    iVar6 = 0;
    if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_141772864;
  }
  local_res10[0].Index = -1;
  local_98._12_4_ = local_5c;
  local_98.Size = iVar6;
  local_98.DataPtr = _Str;
  if (iVar6 != 0) {
    pFVar8 = FTextKeyState::GetState();
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      iVar6 = 0;
    }
    else {
      if ((0 < iVar6) && (*(short *)((longlong)_Str + ((longlong)iVar6 + -1) * 2) == 0)) {
        iVar6 = iVar6 + -1;
      }
      if (iVar6 == -1) {
        sVar7 = wcslen(_Str);
        iVar6 = (int)sVar7;
      }
    }
    uVar9 = CityHash64((char *)_Str,iVar6 * 2);
    FTextKeyState::FindOrAddImpl
              (pFVar8,&local_98,(int)(uVar9 >> 0x20) * 0x17 + (int)uVar9,local_res10);
  }
  FVar4.Index = local_res10[0].Index;
  if ((param_1->Namespace).Data.ArrayNum != 0) {
    _Str_00 = (wchar_t *)(param_1->Namespace).Data.AllocatorInstance.Data;
    iVar6 = 0;
    if ((FScriptContainerElement *)_Str_00 == (FScriptContainerElement *)0x0) goto LAB_14177292a;
  }
  sVar7 = wcslen(_Str_00);
  iVar6 = (int)sVar7;
LAB_14177292a:
  local_98._12_4_ = local_4c;
  local_98.Size = iVar6;
  local_res18[0].Index = -1;
  local_98.DataPtr = _Str_00;
  if (iVar6 != 0) {
    pFVar8 = FTextKeyState::GetState();
    if ((FScriptContainerElement *)_Str_00 == (FScriptContainerElement *)0x0) {
      iVar6 = 0;
    }
    else {
      if ((0 < iVar6) && (*(short *)((longlong)_Str_00 + ((longlong)iVar6 + -1) * 2) == 0)) {
        iVar6 = iVar6 + -1;
      }
      if (iVar6 == -1) {
        sVar7 = wcslen(_Str_00);
        iVar6 = (int)sVar7;
      }
    }
    uVar9 = CityHash64((char *)_Str_00,iVar6 * 2);
    local_78.DataPtr = local_98.DataPtr;
    local_78.Size = local_98.Size;
    local_78._12_4_ = local_98._12_4_;
    FTextKeyState::FindOrAddImpl
              (pFVar8,&local_78,(int)(uVar9 >> 0x20) * 0x17 + (int)uVar9,local_res18);
  }
  local_a0.Namespace.Index = local_res18[0].Index;
  local_a0.Key.Index = FVar4.Index;
  pFVar10 = TMapBase<FTextId,FPolyglotTextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FPolyglotTextData,0>_>
            ::Find((TMapBase<FTextId,FPolyglotTextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FPolyglotTextData,0>_>
                    *)&this->PolyglotTextDataMap,&local_a0);
  if (pFVar10 == (FPolyglotTextData *)0x0) {
    local_88 = &local_a0;
    local_80 = param_1;
    TSet<TTuple<FTextId,FPolyglotTextData>,TDefaultMapHashableKeyFuncs<FTextId,FPolyglotTextData,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FTextId_const_&,FPolyglotTextData_const_&>_>
              ((TSet<TTuple<FTextId,FPolyglotTextData>,TDefaultMapHashableKeyFuncs<FTextId,FPolyglotTextData,0>,FDefaultSetAllocator>
                *)&this->PolyglotTextDataMap,
               (TPairInitializer<FTextId_const_&,FPolyglotTextData_const_&> *)local_a8,
               (bool *)&local_88);
  }
  else {
    UnregisterCultureNames(this,pFVar10);
    pFVar10->Category = param_1->Category;
    ::FString::operator=(&pFVar10->NativeCulture,&param_1->NativeCulture);
    ::FString::operator=(&pFVar10->Namespace,&param_1->Namespace);
    ::FString::operator=(&pFVar10->Key,&param_1->Key);
    ::FString::operator=(&pFVar10->NativeString,&param_1->NativeString);
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)&pFVar10->LocalizedStrings,
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)&param_1->LocalizedStrings);
    pFVar10->bIsMinimalPatch = param_1->bIsMinimalPatch;
    pIVar1 = (param_1->CachedText).TextData.Reference;
    pIVar2 = (pFVar10->CachedText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (pFVar10->CachedText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (pFVar10->CachedText).Flags = (param_1->CachedText).Flags;
    param_1 = pFVar10;
  }
  RegisterCultureNames(this,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->PolyglotDataCS);
  return;
}

// UnregisterCultureNames @ 141781c30

void __thiscall
FPolyglotTextSource::UnregisterCultureNames(FPolyglotTextSource *this,FPolyglotTextData *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  FCultureInfo *pFVar5;
  int *piVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_50;
  
  local_res8[0] = (FIdentityFunctor)param_1->Category;
  pFVar5 = TMapBase<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo,0>_>
           ::FindOrAddImpl<enum_ELocalizedTextSourceCategory>
                     (&this->AvailableCultureInfo,(uint)(byte)local_res8[0],
                      (ELocalizedTextSourceCategory *)local_res8);
  `FPolyglotTextSource::UnregisterCultureNames'::__l2::<lambda_1>::operator()
            (local_res18,&pFVar5->NativeCultures,&param_1->NativeCulture);
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&param_1->LocalizedStrings,&local_50);
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
            ((FString *)local_50.AllocatorInstance.Data,local_50.ArrayNum,local_res8[0],
             (TLess<void> *)local_res20);
  iVar2 = local_50.ArrayNum;
  pFVar9 = local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 0x10;
  FVar8.Data = local_50.AllocatorInstance.Data;
  while( true ) {
    if (local_50.ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar8.Data == pFVar9) break;
    if (1 < *(int *)(FVar8.Data + 8)) {
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>
                        (*(int *)(FVar8.Data + 8) + -1,*(wchar_t **)FVar8.Data);
      piVar6 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
               ::FindOrAddImpl<FString_const_&>
                         ((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                           *)&pFVar5->LocalizedCultures,uVar4,(FString *)FVar8.Data);
      *piVar6 = *piVar6 + -1;
      if ((*piVar6 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("CultureCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\PolyglotTextSource.cpp"
                             ,0xfa,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar10 = 0;
      if ((*piVar6 == 0) &&
         (*(int *)&(pFVar5->LocalizedCultures).field_0x8 !=
          *(int *)&(pFVar5->LocalizedCultures).field_0x34)) {
        if (*(int *)(FVar8.Data + 8) == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = *(wchar_t **)FVar8.Data;
          iVar10 = *(int *)(FVar8.Data + 8) + -1;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar7);
        TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
        RemoveImpl<FString>((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                             *)&pFVar5->LocalizedCultures,uVar4,(FString *)FVar8.Data);
      }
    }
    FVar8.Data = FVar8.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_50.AllocatorInstance.Data,local_50.ArrayNum);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return;
}

