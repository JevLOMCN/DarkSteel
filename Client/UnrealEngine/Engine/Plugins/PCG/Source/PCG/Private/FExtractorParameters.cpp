// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// operator= @ 149c4eb00

FExtractorParameters * __thiscall
PCGPropertyHelpers::FExtractorParameters::operator=
          (FExtractorParameters *this,FExtractorParameters *param_1)

{
  TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  this->Container = param_1->Container;
  this->Class = param_1->Class;
  FPCGAttributePropertySelector::operator=(&this->PropertySelector,&param_1->PropertySelector);
  pTVar1 = &param_1->PropertySelectors;
  pTVar2 = &this->PropertySelectors;
  if (pTVar2 != pTVar1) {
    DestructItems<FPCGAttributePropertySelector,int>
              ((FPCGAttributePropertySelector *)(pTVar2->AllocatorInstance).Data,
               (this->PropertySelectors).ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PropertySelectors).ArrayNum = (param_1->PropertySelectors).ArrayNum;
    (this->PropertySelectors).ArrayMax = (param_1->PropertySelectors).ArrayMax;
    (param_1->PropertySelectors).ArrayNum = 0;
    (param_1->PropertySelectors).ArrayMax = 0;
  }
  this->OutputAttributeName = param_1->OutputAttributeName;
  this->bShouldExtract = param_1->bShouldExtract;
  this->bPropertyNeedsToBeVisible = param_1->bPropertyNeedsToBeVisible;
  this->bStrictSanitizeOutputAttributeNames = param_1->bStrictSanitizeOutputAttributeNames;
  return this;
}

// FExtractorParameters @ 149d33420

FExtractorParameters * __thiscall
PCGPropertyHelpers::FExtractorParameters::FExtractorParameters
          (FExtractorParameters *this,void *param_1,UStruct *param_2,
          FPCGAttributePropertySelector *param_3,FName param_4,bool param_5,bool param_6)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FExtractorParameters *pFVar4;
  
  this->Container = param_1;
  (this->PropertySelector)._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  (this->PropertySelector).Selection = Attribute;
  (this->PropertySelector).DomainName.ComparisonIndex = 0;
  this->Class = param_2;
  *(undefined8 *)&(this->PropertySelector).DomainName.Number = 0;
  *(undefined8 *)&(this->PropertySelector).AttributeName.Number = 0;
  (this->PropertySelector).PropertyName.Number = 0;
  (this->PropertySelector).ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertySelector).ExtraNames.ArrayNum = 0;
  (this->PropertySelector).ExtraNames.ArrayMax = 0;
  (this->PropertySelector).ExtraProperty = Index;
  (this->PropertySelectors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertySelectors).ArrayNum = 0;
  (this->PropertySelectors).ArrayMax = 0;
  this->OutputAttributeName = param_4;
  this->bShouldExtract = param_5;
  this->bPropertyNeedsToBeVisible = param_6;
  this->bStrictSanitizeOutputAttributeNames = false;
  if (param_3 < (FPCGAttributePropertySelector *)((longlong)(this->PropertySelectors).ArrayMax << 6)
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FExtractorParameters *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->PropertySelectors).ArrayNum;
  if (iVar3 == (this->PropertySelectors).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&(this->PropertySelectors).AllocatorInstance,
                       &(this->PropertySelectors).ArrayMax);
  }
  (this->PropertySelectors).ArrayNum = iVar3 + 1;
  FPCGAttributePropertySelector::FPCGAttributePropertySelector
            ((FPCGAttributePropertySelector *)
             ((this->PropertySelectors).AllocatorInstance.Data + (longlong)iVar3 * 0x40),param_3);
  return this;
}

// FExtractorParameters @ 149d33540

FExtractorParameters * __thiscall
PCGPropertyHelpers::FExtractorParameters::FExtractorParameters
          (FExtractorParameters *this,void *param_1,UStruct *param_2,
          TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> *param_3,FName param_4,
          bool param_5,bool param_6)

{
  TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FPCGAttributePropertySelector *pFVar4;
  
  this->Container = param_1;
  (this->PropertySelector)._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  this->Class = param_2;
  pTVar1 = &this->PropertySelectors;
  piVar2 = &(this->PropertySelectors).ArrayMax;
  (this->PropertySelector).Selection = Attribute;
  (this->PropertySelector).DomainName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PropertySelector).DomainName.Number = 0;
  *(undefined8 *)&(this->PropertySelector).AttributeName.Number = 0;
  (this->PropertySelector).PropertyName.Number = 0;
  (this->PropertySelector).ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertySelector).ExtraNames.ArrayNum = 0;
  (this->PropertySelector).ExtraNames.ArrayMax = 0;
  (this->PropertySelector).ExtraProperty = Index;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_3->ArrayNum;
  pFVar4 = (FPCGAttributePropertySelector *)(param_3->AllocatorInstance).Data;
  (this->PropertySelectors).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FPCGAttributePropertySelector,FPCGAttributePropertySelector,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  this->OutputAttributeName = param_4;
  this->bShouldExtract = param_5;
  this->bPropertyNeedsToBeVisible = param_6;
  this->bStrictSanitizeOutputAttributeNames = false;
  return this;
}

// FExtractorParameters @ 149d33620

FExtractorParameters * __thiscall
PCGPropertyHelpers::FExtractorParameters::FExtractorParameters
          (FExtractorParameters *this,void *param_1,UStruct *param_2,FString *param_3,FName param_4,
          bool param_5,bool param_6)

{
  TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FPCGAttributePropertySelector *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FExtractorParameters *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FPCGAttributePropertySelector local_68;
  
  uVar10 = 0;
  this->Container = param_1;
  (this->PropertySelector).Selection = Attribute;
  (this->PropertySelector).DomainName.ComparisonIndex = 0;
  pTVar1 = &this->PropertySelectors;
  this->Class = param_2;
  (this->PropertySelector)._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  piVar2 = &(this->PropertySelectors).ArrayMax;
  *(undefined8 *)&(this->PropertySelector).DomainName.Number = 0;
  *(undefined8 *)&(this->PropertySelector).AttributeName.Number = 0;
  (this->PropertySelector).PropertyName.Number = 0;
  (this->PropertySelector).ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertySelector).ExtraNames.ArrayNum = 0;
  (this->PropertySelector).ExtraNames.ArrayMax = 0;
  (this->PropertySelector).ExtraProperty = Index;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PropertySelectors).ArrayNum = 0;
  *piVar2 = 0;
  this->OutputAttributeName = param_4;
  this->bShouldExtract = param_5;
  this->bPropertyNeedsToBeVisible = param_6;
  this->bStrictSanitizeOutputAttributeNames = false;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  ::FString::ParseIntoArray(param_3,&local_78,L",",true);
  iVar7 = local_78.ArrayNum;
  uVar9 = (ulonglong)local_78.ArrayNum;
  pFVar12 = local_78.AllocatorInstance.Data + uVar9 * 0x10;
  FVar11.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar9 != iVar7) {
      param_5 = false;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&param_5);
      uVar9 = local_78._8_8_ & 0xffffffff;
    }
    if (FVar11.Data == pFVar12) break;
    ::FString::TrimStartAndEndInline((FString *)FVar11.Data);
    uVar9 = local_78._8_8_ & 0xffffffff;
    FVar11.Data = FVar11.Data + 0x10;
  }
  iVar7 = (int)uVar9;
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar9 & 0xffffffff);
  }
  if (*piVar2 < iVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar7,&pTVar1->AllocatorInstance,(this->PropertySelectors).ArrayNum,piVar2);
    uVar9 = local_78._8_8_ & 0xffffffff;
  }
  iVar7 = (int)uVar9;
  if (0 < (int)uVar9) {
    do {
      uVar6 = 0;
      if ((int)uVar10 < (int)uVar9) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FExtractorParameters *)(*pcVar4)();
        return pFVar8;
      }
      local_68._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
      local_68.Selection = Attribute;
      local_68.DomainName.ComparisonIndex.Value = 0;
      local_68.DomainName.Number = 0;
      local_68.AttributeName.ComparisonIndex.Value = 0;
      local_68.AttributeName.Number = 0;
      local_68.PropertyName.ComparisonIndex.Value = 0;
      local_68.PropertyName.Number = 0;
      local_68.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ExtraNames.ArrayNum = 0;
      local_68.ExtraNames.ArrayMax = 0;
      local_68.ExtraProperty = Index;
      FPCGAttributePropertySelector::Update
                (&local_68,
                 (FString *)(local_78.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10));
      pFVar3 = (FPCGAttributePropertySelector *)(pTVar1->AllocatorInstance).Data;
      if (((pFVar3 <= &local_68) && (&local_68 < pFVar3 + *piVar2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FExtractorParameters *)(*pcVar4)();
        return pFVar8;
      }
      iVar7 = (this->PropertySelectors).ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&pTVar1->AllocatorInstance,piVar2);
      }
      FVar11.Data = local_68.ExtraNames.AllocatorInstance.Data;
      (this->PropertySelectors).ArrayNum = iVar7 + 1;
      pFVar13 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x40;
      *(undefined ***)pFVar13 = &___7FPCGAttributePropertySelector__6B_;
      pFVar12 = pFVar13 + 0x28;
      *(EPCGAttributePropertySelection *)(pFVar13 + 8) = local_68.Selection;
      *(ulonglong *)(pFVar13 + 0xc) =
           CONCAT44(local_68.DomainName.Number,local_68.DomainName.ComparisonIndex.Value);
      *(ulonglong *)(pFVar13 + 0x14) =
           CONCAT44(local_68.AttributeName.Number,local_68.AttributeName.ComparisonIndex.Value);
      *(ulonglong *)(pFVar13 + 0x1c) =
           CONCAT44(local_68.PropertyName.Number,local_68.PropertyName.ComparisonIndex.Value);
      *(FScriptContainerElement **)pFVar12 = (FScriptContainerElement *)0x0;
      iVar7 = local_68.ExtraNames.ArrayNum;
      *(int *)(pFVar13 + 0x30) = local_68.ExtraNames.ArrayNum;
      if (local_68.ExtraNames.ArrayNum == 0) {
        *(int *)(pFVar13 + 0x34) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_68.ExtraNames.ArrayNum,0,(ForAnyElementType *)pFVar12,
                   local_68.ExtraNames.ArrayNum,(int *)(pFVar13 + 0x34));
                    /* WARNING: Load size is inaccurate */
        ConstructItems<FString,FString,int>(*pFVar12,(FString *)FVar11.Data,iVar7);
      }
      pFVar13[0x38] = (FScriptContainerElement)local_68.ExtraProperty;
      DestructItems<FString,int>
                ((FString *)local_68.ExtraNames.AllocatorInstance.Data,local_68.ExtraNames.ArrayNum)
      ;
      if (local_68.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.ExtraNames.AllocatorInstance.Data);
      }
      uVar9 = local_78._8_8_ & 0xffffffff;
      uVar10 = uVar10 + 1;
      iVar7 = local_78.ArrayNum;
    } while ((int)uVar10 < local_78.ArrayNum);
  }
  DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,iVar7);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return this;
}

