// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 31

// ~FPCGAttributePropertySelector @ 149725c50

void __thiscall
FPCGAttributePropertySelector::~FPCGAttributePropertySelector(FPCGAttributePropertySelector *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->ExtraNames).AllocatorInstance.Data,(this->ExtraNames).ArrayNum);
  pFVar1 = (this->ExtraNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FPCGAttributePropertySelector @ 1497372e0

FPCGAttributePropertySelector * __thiscall
FPCGAttributePropertySelector::FPCGAttributePropertySelector
          (FPCGAttributePropertySelector *this,FPCGAttributePropertySelector *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &this->ExtraNames;
  this->_padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  this->Selection = param_1->Selection;
  this->DomainName = param_1->DomainName;
  this->AttributeName = param_1->AttributeName;
  this->PropertyName = param_1->PropertyName;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ExtraNames).ArrayMax;
  iVar3 = (param_1->ExtraNames).ArrayNum;
  pFVar4 = (param_1->ExtraNames).AllocatorInstance.Data;
  (this->ExtraNames).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  this->ExtraProperty = param_1->ExtraProperty;
  return this;
}

// operator= @ 1498923a0

FPCGAttributePropertySelector * __thiscall
FPCGAttributePropertySelector::operator=
          (FPCGAttributePropertySelector *this,FPCGAttributePropertySelector *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  this->Selection = param_1->Selection;
  pTVar1 = &this->ExtraNames;
  this->DomainName = param_1->DomainName;
  this->AttributeName = param_1->AttributeName;
  this->PropertyName = param_1->PropertyName;
  if (pTVar1 != &param_1->ExtraNames) {
    DestructItems<FString,int>
              ((FString *)(pTVar1->AllocatorInstance).Data,(this->ExtraNames).ArrayNum);
    iVar3 = (param_1->ExtraNames).ArrayNum;
    piVar2 = &(this->ExtraNames).ArrayMax;
    pFVar4 = (param_1->ExtraNames).AllocatorInstance.Data;
    (this->ExtraNames).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
    }
  }
  this->ExtraProperty = param_1->ExtraProperty;
  return this;
}

// GetDisplayText @ 1499f5750

FText * __thiscall
FPCGAttributePropertySelector::GetDisplayText
          (FPCGAttributePropertySelector *this,FText *__return_storage_ptr__,bool param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ToString(this,&local_18,param_1);
  FText::FromString(__return_storage_ptr__,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateAttributeSelector<FPCGAttributePropertySelector> @ 149b44a50

FPCGAttributePropertySelector * __cdecl
FPCGAttributePropertySelector::CreateAttributeSelector<FPCGAttributePropertySelector>
          (FPCGAttributePropertySelector *__return_storage_ptr__,FName param_1,FName param_2,
          TArrayView<FString_const_,int> *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FString *pFVar4;
  
  pTVar1 = &__return_storage_ptr__->ExtraNames;
  piVar2 = &(__return_storage_ptr__->ExtraNames).ArrayMax;
  __return_storage_ptr__->_padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  __return_storage_ptr__->Selection = Attribute;
  (__return_storage_ptr__->DomainName).ComparisonIndex = 0;
  *(undefined8 *)&(__return_storage_ptr__->DomainName).Number = 0;
  *(undefined8 *)&(__return_storage_ptr__->AttributeName).Number = 0;
  (__return_storage_ptr__->PropertyName).Number = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ExtraNames).ArrayNum = 0;
  *piVar2 = 0;
  __return_storage_ptr__->ExtraProperty = Index;
  SetDomainName(__return_storage_ptr__,param_2,true);
  SetAttributeName(__return_storage_ptr__,param_1,true);
  DestructItems<FString,int>
            ((FString *)(pTVar1->AllocatorInstance).Data,
             (__return_storage_ptr__->ExtraNames).ArrayNum);
  iVar3 = param_3->ArrayNum;
  pFVar4 = param_3->DataPtr;
  (__return_storage_ptr__->ExtraNames).ArrayNum = iVar3;
  if ((iVar3 == 0) && (*piVar2 == 0)) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return __return_storage_ptr__;
}

// StaticStruct @ 149d76b70

UScriptStruct * __cdecl FPCGAttributePropertySelector::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGAttributePropertySelector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGAttributePropertySelector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributePropertySelector,(UObject *)pUVar1,
                         L"PCGAttributePropertySelector");
  }
  return Z_Registration_Info_UScriptStruct_FPCGAttributePropertySelector.OuterSingleton;
}

// CreateFromOtherSelector<FPCGAttributePropertyOutputSelector> @ 149dd9c40

FPCGAttributePropertyOutputSelector * __cdecl
FPCGAttributePropertySelector::CreateFromOtherSelector<FPCGAttributePropertyOutputSelector>
          (FPCGAttributePropertyOutputSelector *__return_storage_ptr__,
          FPCGAttributePropertySelector *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  EPCGExtraProperties EVar3;
  EPCGAttributePropertySelection EVar4;
  int iVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  
  puVar1 = &__return_storage_ptr__->field_0x28;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  puVar2 = &__return_storage_ptr__->field_0x34;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)puVar2 = 0;
  __return_storage_ptr__->field_0x38 = 0;
  *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertyOutputSelector__6B_;
  uVar10 = PCGMetadataAttributeConstants::SourceAttributeName.Number;
  *(uint *)&__return_storage_ptr__->field_0x14 =
       PCGMetadataAttributeConstants::SourceAttributeName.ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x18 = uVar10;
  EVar4 = param_1->Selection;
  *(EPCGAttributePropertySelection *)&__return_storage_ptr__->field_0x8 = EVar4;
  uVar10 = (param_1->DomainName).Number;
  *(uint *)&__return_storage_ptr__->field_0xc = (param_1->DomainName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x10 = uVar10;
  if (EVar4 == Attribute) {
    FVar6 = param_1->AttributeName;
    if (*(int *)&__return_storage_ptr__->field_0x30 != 0) {
      DestructItems<FString,int>((FString *)0x0,*(int *)&__return_storage_ptr__->field_0x30);
      *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
      if (*(int *)puVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)puVar1,0,(int *)puVar2);
      }
    }
    if ((*(int *)&__return_storage_ptr__->field_0x8 != 0) ||
       (FVar8.ComparisonIndex.Value = *(uint *)&__return_storage_ptr__->field_0x14,
       FVar8.Number = *(uint *)&__return_storage_ptr__->field_0x18, FVar8 != FVar6)) {
      *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
      *(uint *)&__return_storage_ptr__->field_0x14 = FVar6.ComparisonIndex.Value;
      *(uint *)&__return_storage_ptr__->field_0x18 = FVar6.Number;
    }
  }
  else if (EVar4 == ExtraProperty) {
    EVar3 = param_1->ExtraProperty;
    if (*(int *)&__return_storage_ptr__->field_0x30 != 0) {
      DestructItems<FString,int>((FString *)0x0,*(int *)&__return_storage_ptr__->field_0x30);
      *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
      if (*(int *)puVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)puVar1,0,(int *)puVar2);
      }
    }
    if ((*(int *)&__return_storage_ptr__->field_0x8 != 2) ||
       (EVar3 != __return_storage_ptr__->field_0x38)) {
      *(undefined4 *)&__return_storage_ptr__->field_0x8 = 2;
      __return_storage_ptr__->field_0x38 = EVar3;
    }
  }
  else if (EVar4 == Property) {
    FVar6 = param_1->PropertyName;
    if (*(int *)&__return_storage_ptr__->field_0x30 != 0) {
      DestructItems<FString,int>((FString *)0x0,*(int *)&__return_storage_ptr__->field_0x30);
      *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
      if (*(int *)puVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)puVar1,0,(int *)puVar2);
      }
    }
    if ((*(int *)&__return_storage_ptr__->field_0x8 != 3) ||
       (FVar7.ComparisonIndex.Value = *(uint *)&__return_storage_ptr__->field_0x1c,
       FVar7.Number = *(uint *)&__return_storage_ptr__->field_0x20, FVar7 != FVar6)) {
      *(undefined4 *)&__return_storage_ptr__->field_0x8 = 3;
      *(uint *)&__return_storage_ptr__->field_0x1c = FVar6.ComparisonIndex.Value;
      *(uint *)&__return_storage_ptr__->field_0x20 = FVar6.Number;
    }
  }
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)puVar1 != &param_1->ExtraNames) {
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)&__return_storage_ptr__->field_0x30);
    iVar5 = (param_1->ExtraNames).ArrayNum;
    pFVar9 = (param_1->ExtraNames).AllocatorInstance.Data;
    *(int *)&__return_storage_ptr__->field_0x30 = iVar5;
    if ((iVar5 == 0) && (*(int *)puVar2 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,*(int *)puVar2,(ForAnyElementType *)puVar1,iVar5,(int *)puVar2);
      ConstructItems<FString,FString,int>(*(void **)puVar1,(FString *)pFVar9,iVar5);
    }
  }
  return __return_storage_ptr__;
}

// operator== @ 149e37c80

bool __thiscall
FPCGAttributePropertySelector::operator==
          (FPCGAttributePropertySelector *this,FPCGAttributePropertySelector *param_1)

{
  int iVar1;
  EPCGAttributePropertySelection EVar2;
  bool bVar3;
  
  if (((this->Selection == param_1->Selection) && (this->DomainName == param_1->DomainName)) &&
     (iVar1 = (this->ExtraNames).ArrayNum, iVar1 == (param_1->ExtraNames).ArrayNum)) {
    bVar3 = CompareItems<FString,int>
                      ((FString *)(this->ExtraNames).AllocatorInstance.Data,
                       (FString *)(param_1->ExtraNames).AllocatorInstance.Data,iVar1);
    if (bVar3) {
      EVar2 = this->Selection;
      if (EVar2 == Attribute) {
        return this->AttributeName == param_1->AttributeName;
      }
      if (EVar2 == ExtraProperty) {
        return this->ExtraProperty == param_1->ExtraProperty;
      }
      if (EVar2 == Property) {
        return this->PropertyName == param_1->PropertyName;
      }
    }
  }
  return false;
}

// AddToCrc @ 149e48490

void __thiscall
FPCGAttributePropertySelector::AddToCrc(FPCGAttributePropertySelector *this,FArchiveCrc32 *param_1)

{
  longlong *plVar1;
  EPCGExtraProperties *pEVar2;
  FName *pFVar3;
  EPCGAttributePropertySelection local_res8 [2];
  
  local_res8[0] = this->Selection;
  plVar1 = (longlong *)param_1->_padding_;
  if ((EPCGAttributePropertySelection *)plVar1[1] < (EPCGAttributePropertySelection *)*plVar1 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(EPCGAttributePropertySelection *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  (**(code **)(param_1->_padding_ + 0x178))(param_1,&this->DomainName);
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&this->ExtraNames);
  if (local_res8[0] == Attribute) {
    pFVar3 = &this->AttributeName;
  }
  else {
    if (local_res8[0] == ExtraProperty) {
      pEVar2 = *(EPCGExtraProperties **)param_1->_padding_;
      if ((EPCGExtraProperties *)((undefined8 *)param_1->_padding_)[1] < pEVar2 + 1) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,&this->ExtraProperty,1);
        return;
      }
      this->ExtraProperty = *pEVar2;
      *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 1;
      return;
    }
    if (local_res8[0] != Property) {
      return;
    }
    pFVar3 = &this->PropertyName;
  }
  (**(code **)(param_1->_padding_ + 0x178))(param_1,pFVar3);
  return;
}

// ExportTextItem @ 149e55760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGAttributePropertySelector::ExportTextItem
          (FPCGAttributePropertySelector *this,FString *param_1,
          FPCGAttributePropertySelector *param_2,UObject *param_3,int param_4,UObject *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  void *pvVar4;
  FString *pFVar5;
  size_t sVar6;
  ulong64 uVar7;
  int iVar8;
  undefined1 auStack_288 [32];
  FString local_268;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  FVar3.Data = PCGAttributePropertySelectorConstants::ExportTextLeftSentinel.Data.AllocatorInstance.
               Data;
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_288;
  local_258.Base = local_238;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_258.End = (wchar_t *)local_38;
  local_258.CurPos = local_238;
  iVar8 = PCGAttributePropertySelectorConstants::ExportTextLeftSentinel.Data.ArrayNum + -1;
  if (PCGAttributePropertySelectorConstants::ExportTextLeftSentinel.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  uVar7 = (ulong64)iVar8;
  if (local_38 < local_238 + uVar7) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,uVar7);
  }
  if (iVar8 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(local_258.CurPos,FVar3.Data,uVar7 * 2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar4 + uVar7 * 2);
  }
  pFVar5 = ToString(this,&local_268,false);
  iVar1 = (pFVar5->Data).ArrayNum;
  pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  uVar7 = (ulong64)iVar8;
  if (local_258.End < local_258.CurPos + uVar7) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,uVar7);
  }
  if (iVar8 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(local_258.CurPos,pFVar2,uVar7 * 2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar4 + uVar7 * 2);
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  FVar3.Data = PCGAttributePropertySelectorConstants::ExportTextRightSentinel.Data.AllocatorInstance
               .Data;
  iVar8 = PCGAttributePropertySelectorConstants::ExportTextRightSentinel.Data.ArrayNum + -1;
  if (PCGAttributePropertySelectorConstants::ExportTextRightSentinel.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  uVar7 = (ulong64)iVar8;
  if (local_258.End < local_258.CurPos + uVar7) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,uVar7);
  }
  if (iVar8 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(local_258.CurPos,FVar3.Data,uVar7 * 2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar4 + uVar7 * 2);
  }
  if (local_258.End < local_258.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,1);
  }
  *local_258.CurPos = L'\0';
  sVar6 = wcslen(local_258.Base);
  ::FString::AppendChars(param_1,local_258.Base,(int)sVar6);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return true;
}

// GetAttributePropertyAccessorsString @ 149e57df0

FString * __thiscall
FPCGAttributePropertySelector::GetAttributePropertyAccessorsString
          (FPCGAttributePropertySelector *this,FString *__return_storage_ptr__,bool param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *_Str;
  FString *pFVar3;
  size_t sVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((this->ExtraNames).ArrayNum == 0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    if (param_1) {
      pFVar3 = ::FString::FString(&local_38,PCGAttributePropertySelectorConstants::ExtraSeparator);
      if (&local_58 != pFVar3) {
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        local_58.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = (pFVar3->Data).ArrayNum;
        local_58.Data.ArrayMax = (pFVar3->Data).ArrayMax;
        (pFVar3->Data).ArrayNum = 0;
        (pFVar3->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    _Str = PCGAttributePropertySelectorConstants::ExtraSeparator;
    iVar1 = (this->ExtraNames).ArrayNum;
    bVar2 = true;
    pFVar5 = (this->ExtraNames).AllocatorInstance.Data;
    pFVar7 = pFVar5 + (longlong)iVar1 * 0x10;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    while( true ) {
      if ((this->ExtraNames).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar5 == pFVar7) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        sVar4 = wcslen(_Str);
        ::FString::AppendChars(&local_48,_Str,(int)sVar4);
      }
      iVar6 = *(int *)(pFVar5 + 8) + -1;
      if (*(int *)(pFVar5 + 8) == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars(&local_48,*(wchar_t **)pFVar5,iVar6);
      pFVar5 = pFVar5 + 0x10;
    }
    ::FString::ConcatFF(__return_storage_ptr__,&local_58,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetAttributePropertyString @ 149e57f90

FString * __thiscall
FPCGAttributePropertySelector::GetAttributePropertyString
          (FPCGAttributePropertySelector *this,FString *__return_storage_ptr__,bool param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FName local_res20;
  FString local_28;
  FString local_18;
  
  GetName(this);
  if (((param_1) && (this->Selection != Attribute)) && (local_res20 != (FName)0x0)) {
    pFVar1 = ::FName::ToString(&local_res20,&local_18);
    pFVar2 = ::FString::FString(&local_28,PCGAttributePropertySelectorConstants::PropertyPrefix);
    ::FString::ConcatFF(__return_storage_ptr__,pFVar2,pFVar1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  else {
    ::FName::ToString(&local_res20,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetDomainString @ 149e58e30

FString * __thiscall
FPCGAttributePropertySelector::GetDomainString
          (FPCGAttributePropertySelector *this,FString *__return_storage_ptr__,bool param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = this->DomainName;
  if (local_res8 == (FName)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  if (param_1) {
    pFVar1 = ::FName::ToString(&local_res8,&local_18);
    pFVar2 = ::FString::FString(&local_28,PCGAttributePropertySelectorConstants::DomainPrefix);
    ::FString::ConcatFF(__return_storage_ptr__,pFVar2,pFVar1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  else {
    ::FName::ToString(&local_res8,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetName @ 149e5c190

FName __thiscall FPCGAttributePropertySelector::GetName(FPCGAttributePropertySelector *this)

{
  EPCGAttributePropertySelection EVar1;
  int iVar2;
  UPackage *pUVar3;
  FString *pFVar4;
  FName *pFVar5;
  int iVar6;
  FName in_RDX;
  FName local_res8;
  FString local_18;
  
  EVar1 = this->Selection;
  if (EVar1 == Attribute) {
    *(FName *)in_RDX = this->AttributeName;
  }
  else {
    if (EVar1 != ExtraProperty) {
      if (EVar1 == Property) {
        *(FName *)in_RDX = this->PropertyName;
        return in_RDX;
      }
LAB_149e5c1b5:
      *(undefined8 *)in_RDX = 0;
      return in_RDX;
    }
    if (Z_Registration_Info_UEnum_EPCGExtraProperties.OuterSingleton == (UEnum *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UEnum_EPCGExtraProperties.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_PCG_EPCGExtraProperties,(UObject *)pUVar3,
                         L"EPCGExtraProperties");
      if (Z_Registration_Info_UEnum_EPCGExtraProperties.OuterSingleton == (UEnum *)0x0)
      goto LAB_149e5c1b5;
    }
    pFVar4 = UEnum::GetNameStringByValue
                       (Z_Registration_Info_UEnum_EPCGExtraProperties.OuterSingleton,&local_18,
                        (ulonglong)this->ExtraProperty);
    iVar2 = (pFVar4->Data).ArrayNum;
    iVar6 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar6 = 0;
    }
    pFVar5 = ::FName::FName(&local_res8,iVar6,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,
                            FNAME_Add);
    *(FName *)in_RDX = *pFVar5;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return in_RDX;
    }
  }
  return in_RDX;
}

// GetPointProperty @ 149e5d3f0

EPCGPointProperties __thiscall
FPCGAttributePropertySelector::GetPointProperty(FPCGAttributePropertySelector *this)

{
  code *pcVar1;
  bool bVar2;
  EPCGPointProperties EVar3;
  int iVar4;
  UEnum *this_00;
  long64 lVar5;
  
  this_00 = StaticEnum<enum_EPCGPointProperties>();
  if (this_00 == (UEnum *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGAttributePropertySelector.cpp"
                       ,0x1df,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  iVar4 = UEnum::GetIndexByName(this_00,this->PropertyName,None);
  if (iVar4 != -1) {
    lVar5 = UEnum::GetValueByIndex(this_00,iVar4);
    return (EPCGPointProperties)lVar5;
  }
  return Invalid;
}

// ImportFromOtherSelector @ 149e73320

void __thiscall
FPCGAttributePropertySelector::ImportFromOtherSelector
          (FPCGAttributePropertySelector *this,FPCGAttributePropertySelector *param_1)

{
  EPCGExtraProperties EVar1;
  EPCGAttributePropertySelection EVar2;
  FName FVar3;
  
  EVar2 = param_1->Selection;
  this->Selection = EVar2;
  this->DomainName = param_1->DomainName;
  if (EVar2 == Attribute) {
    FVar3 = param_1->AttributeName;
    ResetExtraNames(this);
    if ((this->Selection != Attribute) || (this->AttributeName != FVar3)) {
      this->Selection = Attribute;
      this->AttributeName = FVar3;
    }
  }
  else if (EVar2 == ExtraProperty) {
    EVar1 = param_1->ExtraProperty;
    ResetExtraNames(this);
    if ((this->Selection != ExtraProperty) || (EVar1 != this->ExtraProperty)) {
      this->Selection = ExtraProperty;
      this->ExtraProperty = EVar1;
    }
  }
  else if (EVar2 == Property) {
    FVar3 = param_1->PropertyName;
    ResetExtraNames(this);
    if ((this->Selection != Property) || (this->PropertyName != FVar3)) {
      this->Selection = Property;
      this->PropertyName = FVar3;
    }
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&this->ExtraNames,&param_1->ExtraNames);
  return;
}

// ImportTextItem @ 149e733e0

bool __thiscall
FPCGAttributePropertySelector::ImportTextItem
          (FPCGAttributePropertySelector *this,wchar_t **param_1,int param_2,UObject *param_3,
          FOutputDevice *param_4)

{
  wchar_t *_Str;
  bool bVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  FString *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FString local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  _Str = *param_1;
  iVar7 = 0;
  if (_Str != (wchar_t *)0x0) {
    sVar4 = wcslen(_Str);
    iVar7 = (int)sVar4;
  }
  local_48.Size = PCGAttributePropertySelectorConstants::ExportTextLeftSentinel.Data.ArrayNum + -1;
  if (PCGAttributePropertySelectorConstants::ExportTextLeftSentinel.Data.ArrayNum == 0) {
    local_48.Size = 0;
  }
  iVar3 = 0;
  if (0 < iVar7) {
    iVar3 = iVar7;
  }
  local_48.DataPtr =
       (wchar_t *)
       PCGAttributePropertySelectorConstants::ExportTextLeftSentinel.Data.AllocatorInstance.Data;
  local_38.DataPtr = _Str + ((longlong)iVar7 - (longlong)iVar3);
  local_38.Size = iVar3;
  iVar2 = UE::String::FindFirst(&local_38,&local_48,CaseSensitive);
  if (iVar2 == -1) {
    iVar2 = -1;
  }
  local_48.Size = iVar3;
  local_38.Size = PCGAttributePropertySelectorConstants::ExportTextRightSentinel.Data.ArrayNum + -1;
  if (PCGAttributePropertySelectorConstants::ExportTextRightSentinel.Data.ArrayNum == 0) {
    local_38.Size = 0;
  }
  local_38.DataPtr =
       (wchar_t *)
       PCGAttributePropertySelectorConstants::ExportTextRightSentinel.Data.AllocatorInstance.Data;
  local_48.DataPtr = _Str + ((longlong)iVar7 - (longlong)iVar3);
  iVar3 = UE::String::FindFirst(&local_48,&local_38,CaseSensitive);
  if (iVar3 == -1) {
    iVar3 = -1;
  }
  if ((iVar2 == -1) || (iVar3 == -1)) {
    bVar1 = false;
  }
  else {
    iVar8 = PCGAttributePropertySelectorConstants::ExportTextLeftSentinel.Data.ArrayNum + -1 + iVar2
    ;
    if (PCGAttributePropertySelectorConstants::ExportTextLeftSentinel.Data.ArrayNum == 0) {
      iVar8 = iVar2;
    }
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    iVar2 = 0;
    if (iVar8 < 0) {
      iVar2 = iVar8;
    }
    iVar6 = (iVar2 - iVar8) + iVar3;
    iVar9 = iVar8 - iVar2;
    if (iVar7 < iVar8 - iVar2) {
      iVar9 = iVar7;
    }
    iVar2 = iVar7 - iVar9;
    if (iVar6 < iVar7 - iVar9) {
      iVar2 = iVar6;
    }
    iVar7 = 0;
    if (0 < iVar2) {
      iVar7 = iVar2;
    }
    pFVar5 = ::FString::ConstructFromPtrSize((FString *)&local_38,_Str + iVar9,iVar7);
    if (&local_58 != pFVar5) {
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_58.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_58.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
    Update(this,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    iVar7 = PCGAttributePropertySelectorConstants::ExportTextRightSentinel.Data.ArrayNum + -1 +
            iVar3;
    if (PCGAttributePropertySelectorConstants::ExportTextRightSentinel.Data.ArrayNum == 0) {
      iVar7 = iVar3;
    }
    *param_1 = *param_1 + iVar7;
    bVar1 = true;
  }
  return bVar1;
}

// IsBasicAttribute @ 149e77b80

bool __thiscall FPCGAttributePropertySelector::IsBasicAttribute(FPCGAttributePropertySelector *this)

{
  if ((this->Selection == Attribute) && ((this->ExtraNames).ArrayNum == 0)) {
    return true;
  }
  return false;
}

// IsSame @ 149e78020

bool __thiscall
FPCGAttributePropertySelector::IsSame
          (FPCGAttributePropertySelector *this,FPCGAttributePropertySelector *param_1,bool param_2)

{
  int iVar1;
  EPCGAttributePropertySelection EVar2;
  bool bVar3;
  
  if (this->Selection != param_1->Selection) {
    return false;
  }
  if (this->DomainName != param_1->DomainName) {
    return false;
  }
  if (param_2) {
    iVar1 = (this->ExtraNames).ArrayNum;
    if (iVar1 != (param_1->ExtraNames).ArrayNum) {
      return false;
    }
    bVar3 = CompareItems<FString,int>
                      ((FString *)(this->ExtraNames).AllocatorInstance.Data,
                       (FString *)(param_1->ExtraNames).AllocatorInstance.Data,iVar1);
    if (!bVar3) {
      return false;
    }
  }
  EVar2 = this->Selection;
  if (EVar2 == Attribute) {
    return this->AttributeName == param_1->AttributeName;
  }
  if (EVar2 != ExtraProperty) {
    if (EVar2 != Property) {
      return false;
    }
    return this->PropertyName == param_1->PropertyName;
  }
  return this->ExtraProperty == param_1->ExtraProperty;
}

// IsValid @ 149e780d0

bool __thiscall FPCGAttributePropertySelector::IsValid(FPCGAttributePropertySelector *this)

{
  bool bVar1;
  FName local_res8 [4];
  
  GetName(this);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::EmptyName,L"");
    _Init_thread_footer(&::_TSS0);
  }
  if (((this->ExtraNames).ArrayNum != 0) && (local_res8[0] == ::EmptyName)) {
    return false;
  }
  if ((((this->Selection == Attribute) &&
       (local_res8[0] != PCGMetadataAttributeConstants::LastAttributeName)) &&
      (local_res8[0] != PCGMetadataAttributeConstants::LastCreatedAttributeName)) &&
     (((local_res8[0] != PCGMetadataAttributeConstants::SourceAttributeName &&
       (local_res8[0] != PCGMetadataAttributeConstants::SourceNameAttributeName)) &&
      (bVar1 = FPCGMetadataAttributeBase::IsValidName(local_res8), !bVar1)))) {
    return false;
  }
  return true;
}

// PostSerialize @ 149e7a4a0

void __thiscall
FPCGAttributePropertySelector::PostSerialize(FPCGAttributePropertySelector *this,FArchive *param_1)

{
  return;
}

// Reset @ 149e85d60

bool __thiscall FPCGAttributePropertySelector::Reset(FPCGAttributePropertySelector *this)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  FName FVar4;
  ForAnyElementType FVar5;
  int iVar6;
  bool bVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FPCGAttributePropertySelector::Reset'::__l2::
           _dynamic_atexit_destructor_for__EmptySelector__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((((EmptySelector.Selection == this->Selection) &&
       (FVar3.Number = EmptySelector.DomainName.Number,
       FVar3.ComparisonIndex.Value = EmptySelector.DomainName.ComparisonIndex.Value,
       FVar3 == this->DomainName)) &&
      (EmptySelector.ExtraNames.ArrayNum == (this->ExtraNames).ArrayNum)) &&
     (bVar7 = CompareItems<FString,int>
                        ((FString *)EmptySelector.ExtraNames.AllocatorInstance.Data,
                         (FString *)(this->ExtraNames).AllocatorInstance.Data,
                         EmptySelector.ExtraNames.ArrayNum), bVar7)) {
    if (EmptySelector.Selection == Attribute) {
      bVar7 = EmptySelector.AttributeName != this->AttributeName;
      goto LAB_149e85e45;
    }
    if (EmptySelector.Selection == ExtraProperty) {
      bVar7 = EmptySelector.ExtraProperty != this->ExtraProperty;
      goto LAB_149e85e45;
    }
    if (EmptySelector.Selection == Property) {
      bVar7 = EmptySelector.PropertyName != this->PropertyName;
      goto LAB_149e85e45;
    }
  }
  bVar7 = true;
LAB_149e85e45:
  this->Selection = EmptySelector.Selection;
  pTVar2 = &this->ExtraNames;
  FVar4.Number = EmptySelector.DomainName.Number;
  FVar4.ComparisonIndex.Value = EmptySelector.DomainName.ComparisonIndex.Value;
  this->DomainName = FVar4;
  this->AttributeName = EmptySelector.AttributeName;
  this->PropertyName = EmptySelector.PropertyName;
  if (pTVar2 == &EmptySelector.ExtraNames) {
    this->ExtraProperty = EmptySelector.ExtraProperty;
    return bVar7;
  }
  DestructItems<FString,int>
            ((FString *)(pTVar2->AllocatorInstance).Data,(this->ExtraNames).ArrayNum);
  iVar6 = EmptySelector.ExtraNames.ArrayNum;
  FVar5 = EmptySelector.ExtraNames.AllocatorInstance;
  piVar1 = &(this->ExtraNames).ArrayMax;
  (this->ExtraNames).ArrayNum = EmptySelector.ExtraNames.ArrayNum;
  if ((iVar6 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    this->ExtraProperty = EmptySelector.ExtraProperty;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar6,*piVar1,&pTVar2->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FString,FString,int>
              ((pTVar2->AllocatorInstance).Data,(FString *)FVar5.Data,iVar6);
    this->ExtraProperty = EmptySelector.ExtraProperty;
  }
  return bVar7;
}

// ResetExtraNames @ 149e860f0

bool __thiscall FPCGAttributePropertySelector::ResetExtraNames(FPCGAttributePropertySelector *this)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->ExtraNames).ArrayNum;
  if (iVar2 != 0) {
    DestructItems<FString,int>((FString *)(this->ExtraNames).AllocatorInstance.Data,iVar2);
    piVar1 = &(this->ExtraNames).ArrayMax;
    (this->ExtraNames).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ExtraNames).AllocatorInstance,0,piVar1);
    }
    return true;
  }
  return false;
}

// Serialize @ 149e8cc20

bool __thiscall
FPCGAttributePropertySelector::Serialize(FPCGAttributePropertySelector *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPCGCustomVersion::GUID);
  return false;
}

// SetAttributeName @ 149e8dfd0

bool __thiscall
FPCGAttributePropertySelector::SetAttributeName
          (FPCGAttributePropertySelector *this,FName param_1,bool param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_2) {
    bVar1 = ResetExtraNames(this);
  }
  if ((this->Selection != Attribute) || (this->AttributeName != param_1)) {
    this->Selection = Attribute;
    bVar1 = true;
    this->AttributeName = param_1;
  }
  return bVar1;
}

// SetDomainName @ 149e8f3e0

bool __thiscall
FPCGAttributePropertySelector::SetDomainName
          (FPCGAttributePropertySelector *this,FName param_1,bool param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_2) {
    bVar1 = ResetExtraNames(this);
  }
  if (this->DomainName != param_1) {
    this->DomainName = param_1;
    bVar1 = true;
  }
  return bVar1;
}

// SetExtraProperty @ 149e8f4b0

bool __thiscall
FPCGAttributePropertySelector::SetExtraProperty
          (FPCGAttributePropertySelector *this,EPCGExtraProperties param_1,bool param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_2) {
    bVar1 = ResetExtraNames(this);
  }
  if ((this->Selection != ExtraProperty) || (param_1 != this->ExtraProperty)) {
    this->Selection = ExtraProperty;
    bVar1 = true;
    this->ExtraProperty = param_1;
  }
  return bVar1;
}

// SetPointProperty @ 149e8fde0

bool __thiscall
FPCGAttributePropertySelector::SetPointProperty
          (FPCGAttributePropertySelector *this,EPCGPointProperties param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UEnum *this_00;
  FString *pFVar5;
  FName *pFVar6;
  wchar_t *pwVar7;
  FName local_res8;
  FString local_28;
  
  this_00 = StaticEnum<enum_EPCGPointProperties>();
  pwVar7 = L"";
  if (this_00 == (UEnum *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGAttributePropertySelector.cpp"
                       ,0xba,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar5 = UEnum::GetNameStringByValue(this_00,&local_28,(ulonglong)param_1);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar6 = ::FName::FName(&local_res8,pwVar7);
  bVar3 = false;
  FVar1 = *pFVar6;
  if (param_2) {
    bVar3 = ResetExtraNames(this);
  }
  if ((this->Selection != Property) || (this->PropertyName != FVar1)) {
    this->Selection = Property;
    bVar3 = true;
    this->PropertyName = FVar1;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetPropertyName @ 149e8ffa0

bool __thiscall
FPCGAttributePropertySelector::SetPropertyName
          (FPCGAttributePropertySelector *this,FName param_1,bool param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_2) {
    bVar1 = ResetExtraNames(this);
  }
  if ((this->Selection != Property) || (this->PropertyName != param_1)) {
    this->Selection = Property;
    bVar1 = true;
    this->PropertyName = param_1;
  }
  return bVar1;
}

// ToString @ 149ec1eb0

FString * __thiscall
FPCGAttributePropertySelector::ToString
          (FPCGAttributePropertySelector *this,FString *__return_storage_ptr__,bool param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  wchar_t *_Str;
  FString *pFVar4;
  FString *pFVar5;
  size_t sVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FName local_res8;
  FString *local_res10;
  undefined4 local_res18 [2];
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res18[0] = 0;
  local_res10 = __return_storage_ptr__;
  if (param_1) {
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    pFVar4 = &local_a8;
    bVar3 = false;
    bVar2 = true;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    local_res8 = this->DomainName;
    if (local_res8 == (FName)0x0) {
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar4 = &local_c8;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      bVar3 = true;
      bVar2 = false;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    else {
      pFVar4 = ::FName::ToString(&local_res8,&local_a8);
      pFVar5 = ::FString::FString(&local_78,PCGAttributePropertySelectorConstants::DomainPrefix);
      ::FString::ConcatFF(&local_c8,pFVar5,pFVar4);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      pFVar4 = &local_c8;
      bVar3 = true;
      bVar2 = false;
      local_88.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    }
  }
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = (pFVar4->Data).ArrayNum;
  local_88.Data.ArrayMax = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar3) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  GetName(this);
  if ((this->Selection == Attribute) || (local_res8 == (FName)0x0)) {
    ::FName::ToString(&local_res8,&local_68);
  }
  else {
    pFVar4 = ::FName::ToString(&local_res8,&local_48);
    pFVar5 = ::FString::FString(&local_58,PCGAttributePropertySelectorConstants::PropertyPrefix);
    ::FString::ConcatFF(&local_68,pFVar5,pFVar4);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((this->ExtraNames).ArrayNum == 0) {
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
  }
  else {
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    pFVar4 = ::FString::FString(&local_78,PCGAttributePropertySelectorConstants::ExtraSeparator);
    if (&local_b8 != pFVar4) {
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      local_b8.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = (pFVar4->Data).ArrayNum;
      local_b8.Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    _Str = PCGAttributePropertySelectorConstants::ExtraSeparator;
    iVar1 = (this->ExtraNames).ArrayNum;
    pFVar7 = (this->ExtraNames).AllocatorInstance.Data;
    pFVar9 = pFVar7 + (longlong)iVar1 * 0x10;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    bVar2 = true;
    while( true ) {
      if ((this->ExtraNames).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar7 == pFVar9) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        sVar6 = wcslen(_Str);
        ::FString::AppendChars(&local_c8,_Str,(int)sVar6);
      }
      iVar8 = *(int *)(pFVar7 + 8) + -1;
      if (*(int *)(pFVar7 + 8) == 0) {
        iVar8 = 0;
      }
      ::FString::AppendChars(&local_c8,*(wchar_t **)pFVar7,iVar8);
      pFVar7 = pFVar7 + 0x10;
    }
    ::FString::ConcatFF(&local_98,&local_b8,&local_c8);
    __return_storage_ptr__ = local_res10;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_88.Data.ArrayNum < 2) {
    ::FString::ConcatFF(__return_storage_ptr__,&local_68,&local_98);
  }
  else {
    ::FString::ConcatFC(&local_78,&local_88,PCGAttributePropertySelectorConstants::ExtraSeparator);
    ::FString::ConcatFF(&local_a8,&local_78,&local_68);
    ::FString::ConcatFF(__return_storage_ptr__,&local_a8,&local_98);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Update @ 149ec3d80

bool __thiscall
FPCGAttributePropertySelector::Update(FPCGAttributePropertySelector *this,FString *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FString *pFVar12;
  FName *pFVar13;
  UPackage *pUVar14;
  UEnum *this_00;
  long64 lVar15;
  wchar_t *pwVar16;
  uint uVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  byte bVar21;
  uint uVar22;
  wchar_t *pwVar23;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  ForAnyElementType local_98;
  int local_90 [2];
  FName local_88;
  FString local_80;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FString local_50;
  
  bVar5 = false;
  if ((param_1->Data).ArrayNum < 2) {
    bVar5 = Reset(this);
    return bVar5;
  }
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  ::FString::ParseIntoArray
            (param_1,&local_a8,PCGAttributePropertySelectorConstants::ExtraSeparator,false);
  pwVar23 = L"";
  bVar6 = false;
  if (local_a8.ArrayNum == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NewValues.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGAttributePropertySelector.cpp"
                       ,0x17a,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    bVar6 = local_a8.ArrayNum == 0;
  }
  iVar11 = local_a8.ArrayNum;
  if (bVar6 || local_a8.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    iVar11 = local_a8.ArrayNum;
  }
  iVar20 = *(int *)(local_a8.AllocatorInstance.Data + 8) + -1;
  if (*(int *)(local_a8.AllocatorInstance.Data + 8) == 0) {
    iVar20 = 0;
  }
  if (iVar20 < 2) {
LAB_149ec3fa1:
    bVar21 = 0;
  }
  else {
    if (iVar11 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      iVar11 = local_a8.ArrayNum;
    }
    FVar4.Data = local_a8.AllocatorInstance.Data;
    iVar20 = *(int *)(local_a8.AllocatorInstance.Data + 8) + -1;
    if (*(int *)(local_a8.AllocatorInstance.Data + 8) == 0) {
      iVar20 = 0;
    }
    if (iVar20 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      iVar11 = local_a8.ArrayNum;
    }
    if (**(wchar_t **)FVar4.Data != PCGAttributePropertySelectorConstants::DomainPrefixChar)
    goto LAB_149ec3fa1;
    if ((iVar11 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    if (*(int *)(local_a8.AllocatorInstance.Data + 8) == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = *(wchar_t **)local_a8.AllocatorInstance.Data;
    }
    ::FName::FName(&local_70,pwVar16);
    iVar11 = local_a8.ArrayNum;
    if ((((local_70 == PCGMetadataAttributeConstants::LastAttributeName) ||
         (local_70 == PCGMetadataAttributeConstants::LastCreatedAttributeName)) ||
        (local_70 == PCGMetadataAttributeConstants::SourceAttributeName)) ||
       (local_70 == PCGMetadataAttributeConstants::SourceNameAttributeName)) goto LAB_149ec3fa1;
    bVar21 = 1;
  }
  uVar22 = (uint)bVar21;
  if (((int)(uint)bVar21 < iVar11) &&
     (lVar18 = (longlong)(int)(uint)bVar21 * 0x10,
     1 < *(int *)(local_a8.AllocatorInstance.Data + lVar18 + 8))) {
    if (iVar11 <= (int)uVar22) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      iVar11 = local_a8.ArrayNum;
    }
    pFVar19 = local_a8.AllocatorInstance.Data + lVar18;
    iVar20 = *(int *)(pFVar19 + 8);
    iVar10 = iVar20 + -1;
    if (iVar20 == 0) {
      iVar10 = 0;
    }
    if (iVar10 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      iVar11 = local_a8.ArrayNum;
    }
    bVar6 = true;
    if (**(wchar_t **)pFVar19 != PCGAttributePropertySelectorConstants::PropertyPrefixChar)
    goto LAB_149ec406c;
  }
  else {
LAB_149ec406c:
    bVar6 = false;
  }
  uVar17 = bVar21 + 1;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90[0] = 0;
  local_90[1] = 0;
  if ((int)uVar17 < iVar11) {
    iVar20 = iVar11 - uVar17;
    if ((iVar11 <= (int)uVar17) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    pFVar19 = local_a8.AllocatorInstance.Data + (ulonglong)uVar17 * 0x10;
    if (((pFVar19 == (FScriptContainerElement *)0x0) && (iVar20 != 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar20,&local_98,local_90,local_90 + 1);
    ConstructItems<FString,FString,int>
              (local_98.Data + (longlong)iVar11 * 0x10,(FString *)pFVar19,iVar20);
    iVar11 = local_a8.ArrayNum;
  }
  pTVar1 = &this->ExtraNames;
  if (local_90[0] == (this->ExtraNames).ArrayNum) {
    bVar9 = CompareItems<FString,int>
                      ((FString *)local_98.Data,(FString *)(pTVar1->AllocatorInstance).Data,
                       local_90[0]);
    iVar11 = local_a8.ArrayNum;
    bVar8 = bVar5;
    if (!bVar9) goto LAB_149ec4156;
  }
  else {
LAB_149ec4156:
    bVar8 = true;
  }
  if (pTVar1 != (TArray<FString,TSizedDefaultAllocator<32>_> *)&local_98) {
    DestructItems<FString,int>
              ((FString *)(pTVar1->AllocatorInstance).Data,(this->ExtraNames).ArrayNum);
    pFVar19 = (pTVar1->AllocatorInstance).Data;
    if (pFVar19 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar19);
    }
    (pTVar1->AllocatorInstance).Data = local_98.Data;
    (this->ExtraNames).ArrayNum = local_90[0];
    (this->ExtraNames).ArrayMax = local_90[1];
    local_90[0] = 0;
    local_90[1] = 0;
    local_98.Data = (FScriptContainerElement *)0x0;
    iVar11 = local_a8.ArrayNum;
  }
  if (bVar21 == 0) {
    local_88.ComparisonIndex.Value = 0;
    local_88.Number = 0;
    pFVar13 = &local_88;
  }
  else {
    if ((iVar11 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    pFVar12 = ::FString::RightChop((FString *)local_a8.AllocatorInstance.Data,&local_50,1);
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    pFVar13 = ::FName::FName(&local_68,pwVar16);
    bVar5 = true;
    iVar11 = local_a8.ArrayNum;
  }
  FVar2 = *pFVar13;
  if ((bVar5) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
    iVar11 = local_a8.ArrayNum;
  }
  bVar5 = this->DomainName != FVar2;
  if (bVar5) {
    this->DomainName = FVar2;
  }
  if ((int)uVar22 < iVar11) {
    if (bVar6) {
      if ((iVar11 <= (int)uVar22) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      ::FString::RightChop
                ((FString *)(local_a8.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10),
                 &local_80,1);
      this_00 = Z_Registration_Info_UEnum_EPCGExtraProperties.OuterSingleton;
      if (Z_Registration_Info_UEnum_EPCGExtraProperties.OuterSingleton == (UEnum *)0x0) {
        pUVar14 = Z_Construct_UPackage__Script_PCG();
        this_00 = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGExtraProperties,(UObject *)pUVar14,
                                L"EPCGExtraProperties");
        Z_Registration_Info_UEnum_EPCGExtraProperties.OuterSingleton = this_00;
        if ((this_00 == (UEnum *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGAttributePropertySelector.cpp"
                               ,0x198,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
      }
      iVar11 = UEnum::GetIndexByNameString(this_00,&local_80,None);
      if (iVar11 == -1) {
        if (local_80.Data.ArrayNum != 0) {
          pwVar23 = (wchar_t *)local_80.Data.AllocatorInstance.Data;
        }
        pFVar13 = ::FName::FName(&local_60,pwVar23);
        FVar2 = *pFVar13;
        if ((this->Selection == Property) && (this->PropertyName == FVar2)) {
          if (!bVar5 && !bVar8) {
            bVar5 = false;
            goto LAB_149ec43af;
          }
        }
        else {
          this->Selection = Property;
          this->PropertyName = FVar2;
        }
LAB_149ec43ad:
        bVar5 = true;
      }
      else {
        lVar15 = UEnum::GetValueByIndex(this_00,iVar11);
        if ((this->Selection != ExtraProperty) ||
           ((EPCGExtraProperties)lVar15 != this->ExtraProperty)) {
          this->Selection = ExtraProperty;
          this->ExtraProperty = (EPCGExtraProperties)lVar15;
          goto LAB_149ec43ad;
        }
        if (bVar5 || bVar8) goto LAB_149ec43ad;
        bVar5 = false;
      }
LAB_149ec43af:
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      goto LAB_149ec4442;
    }
    if ((iVar11 <= (int)uVar22) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    if (*(int *)(local_a8.AllocatorInstance.Data + (ulonglong)bVar21 * 0x10 + 8) != 0) {
      pwVar23 = *(wchar_t **)(local_a8.AllocatorInstance.Data + (ulonglong)bVar21 * 0x10);
    }
    pFVar13 = ::FName::FName(&local_58,pwVar23);
    if ((this->Selection != Attribute) || (this->AttributeName != *pFVar13)) {
      this->AttributeName = *pFVar13;
      goto LAB_149ec443d;
    }
    if (!bVar5 && !bVar8) {
      bVar5 = false;
      goto LAB_149ec4442;
    }
  }
  else if ((this->Selection == Attribute) && (this->AttributeName == (FName)0x0)) {
    if (!bVar5 && !bVar8) {
      bVar5 = false;
      goto LAB_149ec4442;
    }
  }
  else {
    (this->AttributeName).ComparisonIndex = 0;
    (this->AttributeName).Number = 0;
LAB_149ec443d:
    this->Selection = Attribute;
  }
  bVar5 = true;
LAB_149ec4442:
  DestructItems<FString,int>((FString *)local_98.Data,local_90[0]);
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  DestructItems<FString,int>((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return bVar5;
}

