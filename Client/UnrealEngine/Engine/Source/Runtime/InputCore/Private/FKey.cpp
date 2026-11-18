// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputCore
// Functions: 39

// StaticStruct @ 14238bca0

UScriptStruct * __cdecl FKey::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKey.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InputCore();
    Z_Registration_Info_UScriptStruct_FKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKey,(UObject *)pUVar1,L"Key");
  }
  return Z_Registration_Info_UScriptStruct_FKey.OuterSingleton;
}

// FKey @ 14238d750

FKey * __thiscall FKey::FKey(FKey *this,FKey *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->KeyName = param_1->KeyName;
  (this->KeyDetails).Object = (param_1->KeyDetails).Object;
  pTVar1 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  (this->KeyDetails).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// FKey @ 14238d780

FKey * __thiscall FKey::FKey(FKey *this,wchar_t *param_1)

{
  ::FName::FName(&this->KeyName,param_1);
  (this->KeyDetails).Object = (FKeyDetails *)0x0;
  (this->KeyDetails).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// FKey @ 14238d7b0

FKey * __thiscall FKey::FKey(FKey *this)

{
  (this->KeyName).ComparisonIndex = 0;
  (this->KeyName).Number = 0;
  (this->KeyDetails).Object = (FKeyDetails *)0x0;
  (this->KeyDetails).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FKey @ 14238dfd0

void __thiscall FKey::~FKey(FKey *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 14238e0b0

FKey * __thiscall FKey::operator=(FKey *this,FKey *param_1)

{
  this->KeyName = param_1->KeyName;
  TSharedPtr<FKeyDetails,1>::operator=(&this->KeyDetails,&param_1->KeyDetails);
  return this;
}

// operator= @ 14238e100

FKey * __thiscall FKey::operator=(FKey *this,FKey *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FKeyDetails *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->KeyName = param_1->KeyName;
  pTVar1 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->KeyDetails).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->KeyDetails).SharedReferenceCount.ReferenceController;
  (this->KeyDetails).Object = pFVar2;
  (this->KeyDetails).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// ConditionalLookupKeyDetails @ 14238ef00

void __thiscall FKey::ConditionalLookupKeyDetails(FKey *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FKeyDetails *pFVar2;
  TTuple<FKey,TSharedPtr<FKeyDetails,1>_> *pTVar3;
  undefined8 *puVar4;
  FSharedReferencer<1> FVar5;
  FKeyDetails *local_48;
  FSharedReferencer<1> FStack_40;
  FKey local_38;
  
  if ((this->KeyDetails).Object == (FKeyDetails *)0x0) {
    local_38.KeyName = this->KeyName;
    pTVar1 = (this->KeyDetails).SharedReferenceCount.ReferenceController;
    local_38.KeyDetails.Object = (FKeyDetails *)0x0;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
    pTVar3 = TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
                     *)&EKeys::InputKeys,&local_38);
    puVar4 = (undefined8 *)&pTVar3->field_0x18;
    if (pTVar3 == (TTuple<FKey,TSharedPtr<FKeyDetails,1>_> *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 == (undefined8 *)0x0) {
      local_48 = (FKeyDetails *)0x0;
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      local_48 = (FKeyDetails *)*puVar4;
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)puVar4[1];
      if (FStack_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_40.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_40.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    FVar5.ReferenceController = FStack_40.ReferenceController;
    pFVar2 = local_48;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (&this->KeyDetails != (TSharedPtr<FKeyDetails,1> *)&local_48) {
      (this->KeyDetails).Object = pFVar2;
      local_48 = (FKeyDetails *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->KeyDetails).SharedReferenceCount,&FStack_40);
      FVar5.ReferenceController = FStack_40.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
  }
  return;
}

// ExportTextItem @ 14238f840

bool __thiscall
FKey::ExportTextItem
          (FKey *this,FString *param_1,FKey *param_2,UObject *param_3,int param_4,UObject *param_5)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  FString local_18;
  
  pFVar2 = ::FName::ToString(&this->KeyName,&local_18);
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetDisplayName @ 14238fd00

FText * __thiscall FKey::GetDisplayName(FKey *this,FText *__return_storage_ptr__,bool param_1)

{
  FKeyDetails *pFVar1;
  longlong lVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  FText local_28;
  FText local_18;
  
  ConditionalLookupKeyDetails(this);
  pFVar1 = (this->KeyDetails).Object;
  if (pFVar1 == (FKeyDetails *)0x0) {
    pFVar3 = FText::FromName(&local_18,&this->KeyName);
    FText::FText(__return_storage_ptr__,pFVar3);
  }
  else {
    if ((param_1) || (lVar2 = 0x90, (pFVar1->ShortDisplayName).bIsSet == false)) {
      lVar2 = 0x60;
    }
    pFVar3 = TAttribute<FText>::Get
                       ((TAttribute<FText> *)
                        ((longlong)&(pFVar1->Key).KeyName.ComparisonIndex.Value + lVar2));
    local_28.TextData.Reference = (pFVar3->TextData).Reference;
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 8))
                (local_28.TextData.Reference,local_res8);
    }
    local_28.Flags = pFVar3->Flags;
    FText::FText(__return_storage_ptr__,&local_28);
    local_18.TextData.Reference = local_28.TextData.Reference;
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetFName @ 14238fe40

FName __thiscall FKey::GetFName(FKey *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->KeyName;
  return in_RDX;
}

// GetMenuCategory @ 1423921f0

FName __thiscall FKey::GetMenuCategory(FKey *this)

{
  FKeyDetails *pFVar1;
  FName in_RDX;
  
  ConditionalLookupKeyDetails(this);
  pFVar1 = (this->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    *(FName *)in_RDX = pFVar1->MenuCategory;
    return in_RDX;
  }
  *(FName *)in_RDX = EKeys::NAME_KeyboardCategory;
  return in_RDX;
}

// GetPairedAxis @ 1423923d0

EPairedAxis __thiscall FKey::GetPairedAxis(FKey *this)

{
  FKeyDetails *pFVar1;
  
  ConditionalLookupKeyDetails(this);
  pFVar1 = (this->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->PairedAxis;
  }
  return Unpaired;
}

// GetPairedAxisKey @ 142392400

FKey * __thiscall FKey::GetPairedAxisKey(FKey *this,FKey *__return_storage_ptr__)

{
  FKeyDetails *pFVar1;
  bool bVar2;
  bool bVar3;
  FName FVar4;
  FKeyDetails *pFVar5;
  TReferenceControllerBase<1> *pTStack_18;
  
  ConditionalLookupKeyDetails(this);
  pFVar1 = (this->KeyDetails).Object;
  if (pFVar1 == (FKeyDetails *)0x0) {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
    bVar3 = false;
    pTStack_18 = (TReferenceControllerBase<1> *)0x0;
    bVar2 = true;
    pFVar5 = (FKeyDetails *)0x0;
  }
  else {
    FVar4 = (pFVar1->PairedAxisKey).KeyName;
    pFVar5 = (pFVar1->PairedAxisKey).KeyDetails.Object;
    pTStack_18 = (pFVar1->PairedAxisKey).KeyDetails.SharedReferenceCount.ReferenceController;
    if (pTStack_18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_18->SharedReferenceCount = (atomic<int>)((int)pTStack_18->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = true;
    bVar2 = false;
  }
  __return_storage_ptr__->KeyName = FVar4;
  (__return_storage_ptr__->KeyDetails).Object = pFVar5;
  (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController = pTStack_18;
  if (pTStack_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_18->SharedReferenceCount = (atomic<int>)((int)pTStack_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  }
  return __return_storage_ptr__;
}

// GetVirtualKey @ 1423933d0

FKey * __thiscall FKey::GetVirtualKey(FKey *this,FKey *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  FKeyDetails *pFVar3;
  FName FVar4;
  FKeyDetails *pFVar5;
  TReferenceControllerBase<1> *pTStack_18;
  
  ConditionalLookupKeyDetails(this);
  pFVar5 = (this->KeyDetails).Object;
  if (pFVar5 == (FKeyDetails *)0x0) {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
    bVar2 = false;
    pTStack_18 = (TReferenceControllerBase<1> *)0x0;
    bVar1 = true;
    pFVar5 = (FKeyDetails *)0x0;
  }
  else {
    pFVar3 = (FKeyDetails *)&pFVar5->VirtualKeyValue;
    if (pFVar5->bIsVirtual == 0) {
      pFVar3 = pFVar5;
    }
    pTStack_18 = (pFVar3->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (pFVar3->Key).KeyName;
    pFVar5 = (pFVar3->Key).KeyDetails.Object;
    if (pTStack_18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_18->SharedReferenceCount = (atomic<int>)((int)pTStack_18->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar2 = true;
    bVar1 = false;
  }
  __return_storage_ptr__->KeyName = FVar4;
  (__return_storage_ptr__->KeyDetails).Object = pFVar5;
  (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController = pTStack_18;
  if (pTStack_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_18->SharedReferenceCount = (atomic<int>)((int)pTStack_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  }
  return __return_storage_ptr__;
}

// ImportTextItem @ 1423934b0

bool __thiscall
FKey::ImportTextItem
          (FKey *this,wchar_t **param_1,int param_2,UObject *param_3,FOutputDevice *param_4)

{
  wchar_t *pwVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  FName local_28;
  FString local_20;
  
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  pwVar1 = FPropertyHelpers::ReadToken(*param_1,&local_20,false);
  if (pwVar1 == (wchar_t *)0x0) {
    bVar3 = false;
  }
  else {
    *param_1 = pwVar1;
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_20.Data.ArrayNum != 0) {
      FVar2.Data = local_20.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_28,(wchar_t *)FVar2.Data);
    this->KeyName = local_28;
    ResetKey(this);
    bVar3 = true;
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// IsAnalog @ 1423b66e0

bool __thiscall FKey::IsAnalog(FKey *this)

{
  EInputAxisType EVar1;
  FKeyDetails *pFVar2;
  
  ConditionalLookupKeyDetails(this);
  pFVar2 = (this->KeyDetails).Object;
  if ((pFVar2 != (FKeyDetails *)0x0) &&
     ((EVar1 = pFVar2->AxisType, EVar1 == Axis1D || ((byte)(EVar1 - Axis2D) < 2)))) {
    return true;
  }
  return false;
}

// IsAxis1D @ 1423b6720

bool __thiscall FKey::IsAxis1D(FKey *this)

{
  FKeyDetails *pFVar1;
  
  ConditionalLookupKeyDetails(this);
  pFVar1 = (this->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->AxisType == Axis1D;
  }
  return false;
}

// IsAxis2D @ 1423b6750

bool __thiscall FKey::IsAxis2D(FKey *this)

{
  FKeyDetails *pFVar1;
  
  ConditionalLookupKeyDetails(this);
  pFVar1 = (this->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->AxisType == Axis2D;
  }
  return false;
}

// IsAxis3D @ 1423b6780

bool __thiscall FKey::IsAxis3D(FKey *this)

{
  FKeyDetails *pFVar1;
  
  ConditionalLookupKeyDetails(this);
  pFVar1 = (this->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->AxisType == Axis3D;
  }
  return false;
}

// IsBindableInBlueprints @ 1423b67b0

bool __thiscall FKey::IsBindableInBlueprints(FKey *this)

{
  FKeyDetails *pFVar1;
  
  ConditionalLookupKeyDetails(this);
  pFVar1 = (this->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->bIsBindableInBlueprints;
  }
  return false;
}

// IsBindableToActions @ 1423b67f0

bool __thiscall FKey::IsBindableToActions(FKey *this)

{
  FKeyDetails *pFVar1;
  
  ConditionalLookupKeyDetails(this);
  pFVar1 = (this->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->bIsBindableToActions;
  }
  return false;
}

// IsButtonAxis @ 1423b6830

bool __thiscall FKey::IsButtonAxis(FKey *this)

{
  FKeyDetails *pFVar1;
  
  ConditionalLookupKeyDetails(this);
  pFVar1 = (this->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->AxisType == Button;
  }
  return false;
}

// IsDeprecated @ 1423b6860

bool __thiscall FKey::IsDeprecated(FKey *this)

{
  FKeyDetails *pFVar1;
  
  ConditionalLookupKeyDetails(this);
  pFVar1 = (this->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->bIsDeprecated;
  }
  return false;
}

// IsDigital @ 1423b6890

bool __thiscall FKey::IsDigital(FKey *this)

{
  EInputAxisType EVar1;
  FKeyDetails *pFVar2;
  
  ConditionalLookupKeyDetails(this);
  pFVar2 = (this->KeyDetails).Object;
  if (((pFVar2 != (FKeyDetails *)0x0) && (EVar1 = pFVar2->AxisType, EVar1 != Axis1D)) &&
     (1 < (byte)(EVar1 - Axis2D))) {
    return true;
  }
  return false;
}

// IsGamepadKey @ 1423b68d0

bool __thiscall FKey::IsGamepadKey(FKey *this)

{
  FKeyDetails *pFVar1;
  
  ConditionalLookupKeyDetails(this);
  pFVar1 = (this->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->bIsGamepadKey;
  }
  return false;
}

// IsGesture @ 1423b6910

bool __thiscall FKey::IsGesture(FKey *this)

{
  FKeyDetails *pFVar1;
  
  ConditionalLookupKeyDetails(this);
  pFVar1 = (this->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->bIsGesture;
  }
  return false;
}

// IsModifierKey @ 1423b6950

bool __thiscall FKey::IsModifierKey(FKey *this)

{
  FKeyDetails *pFVar1;
  
  ConditionalLookupKeyDetails(this);
  pFVar1 = (this->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->bIsModifierKey;
  }
  return false;
}

// IsMouseButton @ 1423b6980

bool __thiscall FKey::IsMouseButton(FKey *this)

{
  FKeyDetails *pFVar1;
  
  ConditionalLookupKeyDetails(this);
  pFVar1 = (this->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->bIsMouseButton;
  }
  return false;
}

// IsSameResolvedKey @ 1423b69d0

bool __thiscall FKey::IsSameResolvedKey(FKey *this,FKey *param_1)

{
  FName FVar1;
  FName FVar2;
  FKey *pFVar3;
  FKey *pFVar4;
  FKey local_38;
  FKey local_20;
  
  pFVar3 = GetVirtualKey(param_1,&local_20);
  pFVar4 = GetVirtualKey(this,&local_38);
  FVar1 = pFVar4->KeyName;
  FVar2 = pFVar3->KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.KeyDetails.SharedReferenceCount.ReferenceController);
  return FVar1 == FVar2;
}

// IsTouch @ 1423b6a30

bool __thiscall FKey::IsTouch(FKey *this)

{
  FKeyDetails *pFVar1;
  
  ConditionalLookupKeyDetails(this);
  pFVar1 = (this->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->bIsTouch;
  }
  return false;
}

// IsValid @ 1423b6a70

bool __thiscall FKey::IsValid(FKey *this)

{
  if (this->KeyName != (FName)0x0) {
    ConditionalLookupKeyDetails(this);
    return (this->KeyDetails).Object != (FKeyDetails *)0x0;
  }
  return false;
}

// IsVirtual @ 1423b6aa0

bool __thiscall FKey::IsVirtual(FKey *this)

{
  FKeyDetails *pFVar1;
  
  ConditionalLookupKeyDetails(this);
  pFVar1 = (this->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->bIsVirtual;
  }
  return false;
}

// PostScriptConstruct @ 1423b6ad0

void __thiscall FKey::PostScriptConstruct(FKey *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->KeyDetails != (TSharedPtr<FKeyDetails,1> *)&local_18) {
    (this->KeyDetails).Object = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->KeyDetails).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// PostSerialize @ 1423b6b20

void __thiscall FKey::PostSerialize(FKey *this,FArchive *param_1)

{
  wchar_t *pwVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FInputKeyManager *this_00;
  ForAnyElementType _Str;
  undefined8 uStack_58;
  FSharedReferencer<1> FStack_50;
  FString FStack_48;
  FString FStack_38;
  FKey FStack_28;
  size_t sVar5;
  
  uStack_58 = 0;
  FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->KeyDetails != (TSharedPtr<FKeyDetails,1> *)&uStack_58) {
    (this->KeyDetails).Object = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->KeyDetails).SharedReferenceCount,&FStack_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
  ::FName::ToString(&this->KeyName,&FStack_38);
  pwVar1 = SyntheticCharPrefix;
  if (SyntheticCharPrefix == (wchar_t *)0x0) {
    iVar3 = 0;
  }
  else {
    sVar5 = wcslen(SyntheticCharPrefix);
    iVar3 = (int)sVar5;
  }
  bVar2 = ::FString::StartsWith(&FStack_38,pwVar1,iVar3,IgnoreCase);
  if (bVar2) {
    sVar5 = wcslen(SyntheticCharPrefix);
    ::FString::RightChop(&FStack_38,&FStack_48,(int)sVar5);
    _Str.Data = (FScriptContainerElement *)L"";
    if (FStack_48.Data.ArrayNum != 0) {
      _Str.Data = FStack_48.Data.AllocatorInstance.Data;
    }
    uVar4 = _wtoi((wchar_t *)_Str.Data);
    if (uVar4 != 0) {
      this_00 = FInputKeyManager::Get();
      FInputKeyManager::GetKeyFromCodes(this_00,&FStack_28,0xffffffff,uVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_28.KeyDetails.SharedReferenceCount.ReferenceController);
    }
    if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
    }
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  return;
}

// ResetKey @ 1423b78f0

void __thiscall FKey::ResetKey(FKey *this)

{
  wchar_t *pwVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FInputKeyManager *this_00;
  ForAnyElementType _Str;
  undefined8 local_58;
  FSharedReferencer<1> FStack_50;
  FString local_48;
  FString local_38;
  FKey local_28;
  size_t sVar5;
  
  local_58 = 0;
  FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->KeyDetails != (TSharedPtr<FKeyDetails,1> *)&local_58) {
    (this->KeyDetails).Object = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->KeyDetails).SharedReferenceCount,&FStack_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
  ::FName::ToString(&this->KeyName,&local_38);
  pwVar1 = SyntheticCharPrefix;
  if (SyntheticCharPrefix == (wchar_t *)0x0) {
    iVar3 = 0;
  }
  else {
    sVar5 = wcslen(SyntheticCharPrefix);
    iVar3 = (int)sVar5;
  }
  bVar2 = ::FString::StartsWith(&local_38,pwVar1,iVar3,IgnoreCase);
  if (bVar2) {
    sVar5 = wcslen(SyntheticCharPrefix);
    ::FString::RightChop(&local_38,&local_48,(int)sVar5);
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      _Str.Data = local_48.Data.AllocatorInstance.Data;
    }
    uVar4 = _wtoi((wchar_t *)_Str.Data);
    if (uVar4 != 0) {
      this_00 = FInputKeyManager::Get();
      FInputKeyManager::GetKeyFromCodes(this_00,&local_28,0xffffffff,uVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// SerializeFromMismatchedTag @ 1423b7a00

bool __thiscall
FKey::SerializeFromMismatchedTag(FKey *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  bool bVar2;
  int iVar3;
  FNameEntryId FVar4;
  FName *pFVar5;
  FString *pFVar6;
  undefined4 extraout_var;
  FName FVar7;
  wchar_t *pwVar8;
  FName local_res10;
  FName local_res20;
  FString local_28;
  FString local_18;
  
  local_res10.ComparisonIndex.Value = (param_1->TypeName).Index;
  pFVar5 = ::FName::FName(&local_res20,L"EKeys");
  bVar2 = UE::FPropertyTypeName::IsEnum((FPropertyTypeName *)&local_res10,*pFVar5);
  if (bVar2) {
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
              (*(longlong **)(*(longlong *)param_2 + 8),this);
    ::FName::ToString(&this->KeyName,&local_28);
    iVar3 = ::FString::Find(&local_28,L"EKeys::",7,IgnoreCase,FromStart,-1);
    if (iVar3 != -1) {
      pFVar6 = ::FString::RightChop(&local_28,&local_18,iVar3 + 7);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_res10,pwVar8);
      FVar1.Number = local_res10.Number;
      FVar1.ComparisonIndex.Value = local_res10.ComparisonIndex.Value;
      this->KeyName = FVar1;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return true;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return false;
    }
  }
  else {
    FVar1 = param_1->Type;
    FVar4 = FNameEntryId::FromValidEName((EName)&local_res10);
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
    if (FVar1 == FVar7) {
      (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
                (*(longlong **)(*(longlong *)param_2 + 8),this);
    }
  }
  return false;
}

// ShouldUpdateAxisWithoutSamples @ 1423b7b70

bool __thiscall FKey::ShouldUpdateAxisWithoutSamples(FKey *this)

{
  FKeyDetails *pFVar1;
  
  ConditionalLookupKeyDetails(this);
  pFVar1 = (this->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->bShouldUpdateAxisWithoutSamples;
  }
  return false;
}

// ToString @ 1423b7bc0

FString * __thiscall FKey::ToString(FKey *this,FString *__return_storage_ptr__)

{
  ::FName::ToString(&this->KeyName,__return_storage_ptr__);
  return __return_storage_ptr__;
}

