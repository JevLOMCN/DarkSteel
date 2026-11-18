// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FCompiledAssetManagerSearchRules @ 1475a4500

FCompiledAssetManagerSearchRules * __thiscall
FCompiledAssetManagerSearchRules::FCompiledAssetManagerSearchRules
          (FCompiledAssetManagerSearchRules *this,FAssetManagerSearchRules *param_1)

{
  int *piVar1;
  FName *pFVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  FTopLevelAssetPath *pFVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FCompiledAssetManagerSearchRules *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FTopLevelAssetPath local_68;
  FReadAccessScope local_58;
  
  FAssetManagerSearchRules::FAssetManagerSearchRules((FAssetManagerSearchRules *)this,param_1);
  (this->IncludeWildcards).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncludeWildcards).ArrayNum = 0;
  (this->IncludeWildcards).ArrayMax = 0;
  (this->ExcludeWildcards).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExcludeWildcards).ArrayNum = 0;
  (this->ExcludeWildcards).ArrayMax = 0;
  (this->AssetClassNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetClassNames).ArrayNum = 0;
  (this->AssetClassNames).ArrayMax = 0;
  *(undefined8 *)&(this->DerivedClassNames).Elements = 0;
  *(undefined8 *)&(this->DerivedClassNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DerivedClassNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DerivedClassNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DerivedClassNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DerivedClassNames).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->DerivedClassNames).Elements.field_0x30 = 0xffffffff;
  (this->DerivedClassNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DerivedClassNames).HashSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &param_1->ShouldIncludeDelegate,&local_58);
  if ((*(int *)&(param_1->ShouldIncludeDelegate).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(param_1->ShouldIncludeDelegate).field_0x8, plVar3 != (longlong *)0x0)
     ) {
    cVar7 = (**(code **)(*plVar3 + 0x38))();
    if (cVar7 != '\0') {
      bVar8 = true;
      goto LAB_1475a45ae;
    }
  }
  bVar8 = false;
LAB_1475a45ae:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  this->bShouldCallDelegate = bVar8;
  this->bShouldCheckWildcards = false;
  iVar10 = (int)this->_padding_;
  pFVar12 = (FScriptContainerElement *)this->_padding_;
  pFVar13 = pFVar12 + (longlong)iVar10 * 0x10;
  while( true ) {
    if ((int)this->_padding_ != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar12 == pFVar13) break;
    iVar9 = *(int *)(pFVar12 + 8) + -1;
    if (*(int *)(pFVar12 + 8) == 0) {
      iVar9 = 0;
    }
    if (iVar9 != 0) {
      pFVar4 = (this->IncludeWildcards).AllocatorInstance.Data;
      if ((pFVar4 <= pFVar12) &&
         (pFVar12 < pFVar4 + (longlong)(this->IncludeWildcards).ArrayMax * 0x10)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          pFVar11 = (FCompiledAssetManagerSearchRules *)(*pcVar6)();
          return pFVar11;
        }
      }
      iVar9 = (this->IncludeWildcards).ArrayNum;
      if (iVar9 == (this->IncludeWildcards).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->IncludeWildcards).AllocatorInstance,
                           &(this->IncludeWildcards).ArrayMax);
      }
      (this->IncludeWildcards).ArrayNum = iVar9 + 1;
      ::FString::FString((FString *)
                         ((this->IncludeWildcards).AllocatorInstance.Data + (longlong)iVar9 * 0x10),
                         (FString *)pFVar12);
      this->bShouldCheckWildcards = true;
    }
    pFVar12 = pFVar12 + 0x10;
  }
  iVar10 = (int)this->_padding_;
  pFVar12 = (FScriptContainerElement *)this->_padding_;
  pFVar13 = pFVar12 + (longlong)iVar10 * 0x10;
  while( true ) {
    if ((int)this->_padding_ != iVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar12 == pFVar13) break;
    iVar9 = *(int *)(pFVar12 + 8) + -1;
    if (*(int *)(pFVar12 + 8) == 0) {
      iVar9 = 0;
    }
    if (iVar9 != 0) {
      pFVar4 = (this->ExcludeWildcards).AllocatorInstance.Data;
      if ((pFVar4 <= pFVar12) &&
         (pFVar12 < pFVar4 + (longlong)(this->ExcludeWildcards).ArrayMax * 0x10)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          pFVar11 = (FCompiledAssetManagerSearchRules *)(*pcVar6)();
          return pFVar11;
        }
      }
      iVar9 = (this->ExcludeWildcards).ArrayNum;
      if (iVar9 == (this->ExcludeWildcards).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->ExcludeWildcards).AllocatorInstance,
                           &(this->ExcludeWildcards).ArrayMax);
      }
      (this->ExcludeWildcards).ArrayNum = iVar9 + 1;
      ::FString::FString((FString *)
                         ((this->ExcludeWildcards).AllocatorInstance.Data + (longlong)iVar9 * 0x10),
                         (FString *)pFVar12);
      this->bShouldCheckWildcards = true;
    }
    pFVar12 = pFVar12 + 0x10;
  }
  if ((UStruct *)this->_padding_ != (UStruct *)0x0) {
    UStruct::GetStructPathName((UStruct *)this->_padding_,&local_68);
    pFVar5 = (FTopLevelAssetPath *)(this->AssetClassNames).AllocatorInstance.Data;
    piVar1 = &(this->AssetClassNames).ArrayMax;
    if ((pFVar5 <= &local_68) && (&local_68 < pFVar5 + *piVar1)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FCompiledAssetManagerSearchRules *)(*pcVar6)();
        return pFVar11;
      }
    }
    iVar10 = (this->AssetClassNames).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&(this->AssetClassNames).AllocatorInstance,piVar1);
    }
    (this->AssetClassNames).ArrayNum = iVar10 + 1;
    pFVar2 = (FName *)((this->AssetClassNames).AllocatorInstance.Data + (longlong)iVar10 * 0x10);
    *pFVar2 = local_68.PackageName;
    pFVar2[1] = local_68.AssetName;
  }
  return this;
}

// PassesWildcardsAndDelegates @ 1475e9260

bool __thiscall
FCompiledAssetManagerSearchRules::PassesWildcardsAndDelegates
          (FCompiledAssetManagerSearchRules *this,FAssetData *param_1,UAssetManager *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  wchar_t *pwVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  void *local_48 [4];
  
  plVar8 = (longlong *)0x0;
  if (this->bShouldCheckWildcards != false) {
    ::FName::ToString(&param_1->PackageName,(FString *)local_48);
    iVar1 = (this->ExcludeWildcards).ArrayNum;
    pFVar6 = (this->ExcludeWildcards).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->ExcludeWildcards).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar6 == pFVar7) {
        iVar1 = (this->IncludeWildcards).ArrayNum;
        pFVar6 = (this->IncludeWildcards).AllocatorInstance.Data;
        pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
        goto LAB_1475e9310;
      }
      if (*(int *)(pFVar6 + 8) == 0) {
        pwVar5 = L"";
        iVar2 = 0;
      }
      else {
        pwVar5 = *(wchar_t **)pFVar6;
        iVar2 = *(int *)(pFVar6 + 8) + -1;
      }
      bVar3 = ::FString::MatchesWildcard((FString *)local_48,pwVar5,iVar2,IgnoreCase);
      if (bVar3) break;
      pFVar6 = pFVar6 + 0x10;
    }
LAB_1475e935d:
    if (local_48[0] == (FScriptContainerElement *)0x0) {
      return false;
    }
    FMemory::Free(local_48[0]);
    return false;
  }
  goto LAB_1475e937f;
LAB_1475e9310:
  if ((this->IncludeWildcards).ArrayNum != iVar1) {
    `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res8);
  }
  if (pFVar6 != pFVar7) {
    if (*(int *)(pFVar6 + 8) == 0) {
      pwVar5 = L"";
      iVar2 = 0;
    }
    else {
      pwVar5 = *(wchar_t **)pFVar6;
      iVar2 = *(int *)(pFVar6 + 8) + -1;
    }
    bVar3 = ::FString::MatchesWildcard((FString *)local_48,pwVar5,iVar2,IgnoreCase);
    if (bVar3) goto LAB_1475e9370;
    pFVar6 = pFVar6 + 0x10;
    goto LAB_1475e9310;
  }
  if (iVar1 != 0) goto LAB_1475e935d;
LAB_1475e9370:
  if (local_48[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0]);
  }
LAB_1475e937f:
  if ((*(char *)((longlong)&this->_padding_ + 3) == '\0') &&
     (cVar4 = (**(code **)(param_2->_padding_ + 0x598))(param_2,param_1,this), cVar4 == '\0')) {
    return false;
  }
  if (this->bShouldCallDelegate == false) {
    return true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FReadAccessScope *)local_48);
  if ((int)this->_padding_ != 0) {
    plVar8 = (longlong *)this->_padding_;
  }
  cVar4 = (**(code **)(*plVar8 + 0x60))(plVar8,param_1,this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_48);
  return cVar4 != '\0';
}

