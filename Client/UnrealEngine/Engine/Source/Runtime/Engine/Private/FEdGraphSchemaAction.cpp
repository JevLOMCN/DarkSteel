// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// StaticStruct @ 147b2b250

UScriptStruct * __cdecl FEdGraphSchemaAction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEdGraphSchemaAction.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FEdGraphSchemaAction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction,(UObject *)pUVar1,
                         L"EdGraphSchemaAction");
  }
  return Z_Registration_Info_UScriptStruct_FEdGraphSchemaAction.OuterSingleton;
}

// GetTypeId @ 147b2b290

FName __thiscall FEdGraphSchemaAction::GetTypeId(FEdGraphSchemaAction *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_FEdGraphSchemaAction::StaticGetTypeId(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_FEdGraphSchemaAction::StaticGetTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_FEdGraphSchemaAction::StaticGetTypeId(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_FEdGraphSchemaAction::StaticGetTypeId(void)'
                      ::__l2::Type,"FEdGraphSchemaAction");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_FEdGraphSchemaAction::StaticGetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_FEdGraphSchemaAction::StaticGetTypeId(void)'::__l2::Type;
  return in_RDX;
}

// IsParentable @ 147b2b390

bool __thiscall FEdGraphSchemaAction::IsParentable(FEdGraphSchemaAction *this)

{
  return false;
}

// PerformAction @ 147b2b3a0

UEdGraphNode * __thiscall
FEdGraphSchemaAction::PerformAction
          (FEdGraphSchemaAction *this,UEdGraph *param_1,UEdGraphPin *param_2,
          TVector2<double> *param_3,bool param_4)

{
  return (UEdGraphNode *)0x0;
}

// PerformAction @ 147b2b3b0

UEdGraphNode * __thiscall
FEdGraphSchemaAction::PerformAction
          (FEdGraphSchemaAction *this,UEdGraph *param_1,UEdGraphPin *param_2,
          TVector2<float> *param_3,bool param_4)

{
  UEdGraphNode *pUVar1;
  
  pUVar1 = (UEdGraphNode *)(**(code **)(this->_padding_ + 0x30))();
  return pUVar1;
}

// PerformAction @ 147b2b3e0

UEdGraphNode * __thiscall
FEdGraphSchemaAction::PerformAction
          (FEdGraphSchemaAction *this,UEdGraph *param_1,
          TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_> *param_2,TVector2<double> *param_3,
          bool param_4)

{
  code *pcVar1;
  UEdGraphNode *pUVar2;
  float local_res18;
  float local_res1c;
  
  local_res18 = (float)(param_3->field0_0x0)._s_0.X;
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  local_res1c = (float)(param_3->field0_0x0)._s_0.Y;
  if (0 < param_2->ArrayNum) {
    pUVar2 = (UEdGraphNode *)
             (*pcVar1)(local_res18,local_res1c,*(undefined8 *)(param_2->AllocatorInstance).Data,
                       &local_res18,param_4);
    return pUVar2;
  }
  pUVar2 = (UEdGraphNode *)(*pcVar1)(local_res18,local_res1c,0,&local_res18,param_4);
  return pUVar2;
}

// PerformAction @ 147b2b440

UEdGraphNode * __thiscall
FEdGraphSchemaAction::PerformAction
          (FEdGraphSchemaAction *this,UEdGraph *param_1,
          TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_> *param_2,TVector2<float> *param_3,
          bool param_4)

{
  UEdGraphNode *pUVar1;
  
  pUVar1 = (UEdGraphNode *)(**(code **)(this->_padding_ + 0x20))();
  return pUVar1;
}

// OnDoubleClick @ 147b2b470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FReply * __thiscall
FEdGraphSchemaAction::OnDoubleClick
          (FEdGraphSchemaAction *this,FReply *__return_storage_ptr__,UBlueprint *param_1)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// AddReferencedObjects @ 147b2b520

void __thiscall
FEdGraphSchemaAction::AddReferencedObjects(FEdGraphSchemaAction *this,FReferenceCollector *param_1)

{
  return;
}

// MovePersistentItemToCategory @ 147b2b530

void __thiscall
FEdGraphSchemaAction::MovePersistentItemToCategory(FEdGraphSchemaAction *this,FText *param_1)

{
  return;
}

// GetReorderIndexInContainer @ 147b2b540

int __thiscall FEdGraphSchemaAction::GetReorderIndexInContainer(FEdGraphSchemaAction *this)

{
  return -1;
}

// ReorderToBeforeAction @ 147b2b600

bool __thiscall
FEdGraphSchemaAction::ReorderToBeforeAction
          (FEdGraphSchemaAction *this,TSharedRef<FEdGraphSchemaAction,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// GetPersistentItemDefiningObject @ 147b2b620

FEdGraphSchemaActionDefiningObject * __thiscall
FEdGraphSchemaAction::GetPersistentItemDefiningObject
          (FEdGraphSchemaAction *this,FEdGraphSchemaActionDefiningObject *__return_storage_ptr__)

{
  (__return_storage_ptr__->DefiningObject).ObjectIndex = 0;
  (__return_storage_ptr__->DefiningObject).ObjectSerialNumber = 0;
  __return_storage_ptr__->DefiningPointer = (void *)0x0;
  (__return_storage_ptr__->DefiningName).ComparisonIndex = 0;
  (__return_storage_ptr__->DefiningName).Number = 0;
  __return_storage_ptr__->bIsEditable = false;
  return __return_storage_ptr__;
}

// IsA @ 147b2b640

bool __thiscall FEdGraphSchemaAction::IsA(FEdGraphSchemaAction *this,FName *param_1)

{
  FName *pFVar1;
  undefined1 local_res8 [32];
  
  pFVar1 = (FName *)(**(code **)this->_padding_)(this,local_res8);
  return *param_1 == *pFVar1;
}

// IsAVariable @ 147b2b670

bool __thiscall FEdGraphSchemaAction::IsAVariable(FEdGraphSchemaAction *this)

{
  return false;
}

// CanBeRenamed @ 147b2b680

bool __thiscall FEdGraphSchemaAction::CanBeRenamed(FEdGraphSchemaAction *this)

{
  return true;
}

// CanBeDeleted @ 147b2b690

bool __thiscall FEdGraphSchemaAction::CanBeDeleted(FEdGraphSchemaAction *this)

{
  return false;
}

// GetPaletteIcon @ 147b2b6a0

FSlateBrush * __thiscall FEdGraphSchemaAction::GetPaletteIcon(FEdGraphSchemaAction *this)

{
  return (FSlateBrush *)0x0;
}

// GetPaletteToolTip @ 147b2b6b0

FText * __thiscall
FEdGraphSchemaAction::GetPaletteToolTip(FEdGraphSchemaAction *this,FText *__return_storage_ptr__)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FEdGraphSchemaAction @ 147b39470

FEdGraphSchemaAction * __thiscall
FEdGraphSchemaAction::FEdGraphSchemaAction(FEdGraphSchemaAction *this)

{
  this->_padding_ = (longlong)&___7FEdGraphSchemaAction__6B_;
  FText::FText(&this->MenuDescription);
  FText::FText(&this->TooltipDescription);
  FText::FText(&this->Category);
  FText::FText(&this->Keywords);
  this->Grouping = 0;
  this->SectionID = 0;
  (this->MenuDescriptionArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuDescriptionArray).ArrayNum = 0;
  (this->MenuDescriptionArray).ArrayMax = 0;
  (this->FullSearchTitlesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FullSearchTitlesArray).ArrayNum = 0;
  (this->FullSearchTitlesArray).ArrayMax = 0;
  (this->FullSearchKeywordsArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FullSearchKeywordsArray).ArrayNum = 0;
  (this->FullSearchKeywordsArray).ArrayMax = 0;
  (this->FullSearchCategoryArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FullSearchCategoryArray).ArrayNum = 0;
  (this->FullSearchCategoryArray).ArrayMax = 0;
  (this->LocalizedMenuDescriptionArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalizedMenuDescriptionArray).ArrayNum = 0;
  (this->LocalizedMenuDescriptionArray).ArrayMax = 0;
  (this->LocalizedFullSearchTitlesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalizedFullSearchTitlesArray).ArrayNum = 0;
  (this->LocalizedFullSearchTitlesArray).ArrayMax = 0;
  (this->LocalizedFullSearchKeywordsArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalizedFullSearchKeywordsArray).ArrayNum = 0;
  (this->LocalizedFullSearchKeywordsArray).ArrayMax = 0;
  (this->LocalizedFullSearchCategoryArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalizedFullSearchCategoryArray).ArrayNum = 0;
  (this->LocalizedFullSearchCategoryArray).ArrayMax = 0;
  (this->SearchText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchText).Data.ArrayNum = 0;
  (this->SearchText).Data.ArrayMax = 0;
  return this;
}

// ~FEdGraphSchemaAction @ 147b3cd90

void __thiscall FEdGraphSchemaAction::~FEdGraphSchemaAction(FEdGraphSchemaAction *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&___7FEdGraphSchemaAction__6B_;
  pFVar1 = (this->SearchText).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->LocalizedFullSearchCategoryArray).AllocatorInstance.Data,
             (this->LocalizedFullSearchCategoryArray).ArrayNum);
  pFVar1 = (this->LocalizedFullSearchCategoryArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->LocalizedFullSearchKeywordsArray).AllocatorInstance.Data,
             (this->LocalizedFullSearchKeywordsArray).ArrayNum);
  pFVar1 = (this->LocalizedFullSearchKeywordsArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->LocalizedFullSearchTitlesArray).AllocatorInstance.Data,
             (this->LocalizedFullSearchTitlesArray).ArrayNum);
  pFVar1 = (this->LocalizedFullSearchTitlesArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->LocalizedMenuDescriptionArray).AllocatorInstance.Data,
             (this->LocalizedMenuDescriptionArray).ArrayNum);
  pFVar1 = (this->LocalizedMenuDescriptionArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->FullSearchCategoryArray).AllocatorInstance.Data,
             (this->FullSearchCategoryArray).ArrayNum);
  pFVar1 = (this->FullSearchCategoryArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->FullSearchKeywordsArray).AllocatorInstance.Data,
             (this->FullSearchKeywordsArray).ArrayNum);
  pFVar1 = (this->FullSearchKeywordsArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->FullSearchTitlesArray).AllocatorInstance.Data,
             (this->FullSearchTitlesArray).ArrayNum);
  pFVar1 = (this->FullSearchTitlesArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->MenuDescriptionArray).AllocatorInstance.Data,
             (this->MenuDescriptionArray).ArrayNum);
  pFVar1 = (this->MenuDescriptionArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Keywords).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->Category).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->TooltipDescription).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->MenuDescription).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b3ceef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar2 + 0x10))();
    return;
  }
  return;
}

// operator= @ 147b3df50

FEdGraphSchemaAction * __thiscall
FEdGraphSchemaAction::operator=(FEdGraphSchemaAction *this,FEdGraphSchemaAction *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->MenuDescription).TextData.Reference;
  pIVar2 = (this->MenuDescription).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->MenuDescription).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->MenuDescription).Flags = (param_1->MenuDescription).Flags;
  pIVar1 = (param_1->TooltipDescription).TextData.Reference;
  pIVar2 = (this->TooltipDescription).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->TooltipDescription).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->TooltipDescription).Flags = (param_1->TooltipDescription).Flags;
  pIVar1 = (param_1->Category).TextData.Reference;
  pIVar2 = (this->Category).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Category).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->Category).Flags = (param_1->Category).Flags;
  pIVar1 = (param_1->Keywords).TextData.Reference;
  pIVar2 = (this->Keywords).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Keywords).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->Keywords).Flags = (param_1->Keywords).Flags;
  this->Grouping = param_1->Grouping;
  this->SectionID = param_1->SectionID;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->MenuDescriptionArray,&param_1->MenuDescriptionArray);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->FullSearchTitlesArray,&param_1->FullSearchTitlesArray);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->FullSearchKeywordsArray,&param_1->FullSearchKeywordsArray);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->FullSearchCategoryArray,&param_1->FullSearchCategoryArray);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->LocalizedMenuDescriptionArray,&param_1->LocalizedMenuDescriptionArray);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->LocalizedFullSearchTitlesArray,&param_1->LocalizedFullSearchTitlesArray);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->LocalizedFullSearchKeywordsArray,&param_1->LocalizedFullSearchKeywordsArray);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->LocalizedFullSearchCategoryArray,&param_1->LocalizedFullSearchCategoryArray);
  ::FString::operator=(&this->SearchText,&param_1->SearchText);
  return this;
}

// CosmeticUpdateCategory @ 147b4d850

void __thiscall
FEdGraphSchemaAction::CosmeticUpdateCategory(FEdGraphSchemaAction *this,FText *param_1)

{
  ITextData *pIVar1;
  FString *pFVar2;
  FString local_18;
  
  FText::operator=(&this->Category,param_1);
  pFVar2 = FText::ToString(&this->Category);
  ::FString::ParseIntoArray(pFVar2,&this->LocalizedFullSearchCategoryArray,L" ",true);
  pFVar2 = FText::BuildSourceString(&this->Category,&local_18);
  ::FString::ParseIntoArray(pFVar2,&this->FullSearchCategoryArray,L" ",true);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  UpdateSearchText(this);
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// UpdateSearchData @ 147b900a0

void __thiscall
FEdGraphSchemaAction::UpdateSearchData
          (FEdGraphSchemaAction *this,FText *param_1,FText *param_2,FText *param_3,FText *param_4)

{
  ITextData *pIVar1;
  FString *pFVar2;
  FString local_38;
  
  FText::operator=(&this->MenuDescription,param_1);
  FText::operator=(&this->TooltipDescription,param_2);
  FText::operator=(&this->Category,param_3);
  FText::operator=(&this->Keywords,param_4);
  pFVar2 = FText::ToString(&this->MenuDescription);
  ::FString::ParseIntoArray(pFVar2,&this->LocalizedMenuDescriptionArray,L" ",true);
  pFVar2 = FText::BuildSourceString(&this->MenuDescription,&local_38);
  ::FString::ParseIntoArray(pFVar2,&this->MenuDescriptionArray,L" ",true);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->FullSearchTitlesArray,&this->MenuDescriptionArray);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->LocalizedFullSearchTitlesArray,&this->LocalizedMenuDescriptionArray);
  pFVar2 = FText::ToString(&this->Keywords);
  ::FString::ParseIntoArray(pFVar2,&this->LocalizedFullSearchKeywordsArray,L" ",true);
  pFVar2 = FText::BuildSourceString(&this->Keywords,&local_38);
  ::FString::ParseIntoArray(pFVar2,&this->FullSearchKeywordsArray,L" ",true);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar2 = FText::ToString(&this->Category);
  ::FString::ParseIntoArray(pFVar2,&this->LocalizedFullSearchCategoryArray,L" ",true);
  pFVar2 = FText::BuildSourceString(&this->Category,&local_38);
  ::FString::ParseIntoArray(pFVar2,&this->FullSearchCategoryArray,L" ",true);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  UpdateSearchText(this);
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (param_3->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (param_4->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// UpdateSearchText @ 147b90290

void __thiscall FEdGraphSchemaAction::UpdateSearchText(FEdGraphSchemaAction *this)

{
  FString *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  
  this_00 = &this->SearchText;
  ::FString::Reset(this_00,0);
  iVar1 = (this->LocalizedFullSearchTitlesArray).ArrayNum;
  pFVar3 = (this->LocalizedFullSearchTitlesArray).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->LocalizedFullSearchTitlesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar3 == pFVar2) break;
    ::FString::ToLowerInline((FString *)pFVar3);
    iVar4 = *(int *)(pFVar3 + 8) + -1;
    if (*(int *)(pFVar3 + 8) == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(this_00,*(wchar_t **)&pFVar3->field_0x0,iVar4);
    pFVar3 = pFVar3 + 0x10;
  }
  ::FString::AppendChars(this_00,L"\r\n",2);
  iVar1 = (this->LocalizedFullSearchKeywordsArray).ArrayNum;
  pFVar3 = (this->LocalizedFullSearchKeywordsArray).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->LocalizedFullSearchKeywordsArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar3 == pFVar2) break;
    ::FString::ToLowerInline((FString *)pFVar3);
    iVar4 = *(int *)(pFVar3 + 8) + -1;
    if (*(int *)(pFVar3 + 8) == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(this_00,*(wchar_t **)&pFVar3->field_0x0,iVar4);
    pFVar3 = pFVar3 + 0x10;
  }
  ::FString::AppendChars(this_00,L"\r\n",2);
  iVar1 = (this->LocalizedFullSearchCategoryArray).ArrayNum;
  pFVar3 = (this->LocalizedFullSearchCategoryArray).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->LocalizedFullSearchCategoryArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar3 == pFVar2) break;
    ::FString::ToLowerInline((FString *)pFVar3);
    iVar4 = *(int *)(pFVar3 + 8) + -1;
    if (*(int *)(pFVar3 + 8) == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(this_00,*(wchar_t **)&pFVar3->field_0x0,iVar4);
    pFVar3 = pFVar3 + 0x10;
  }
  ::FString::AppendChars(this_00,L"\r\n",2);
  iVar1 = (this->FullSearchTitlesArray).ArrayNum;
  pFVar3 = (this->FullSearchTitlesArray).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FullSearchTitlesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar3 == pFVar2) break;
    ::FString::ToLowerInline((FString *)pFVar3);
    iVar4 = *(int *)(pFVar3 + 8) + -1;
    if (*(int *)(pFVar3 + 8) == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(this_00,*(wchar_t **)&pFVar3->field_0x0,iVar4);
    pFVar3 = pFVar3 + 0x10;
  }
  ::FString::AppendChars(this_00,L"\r\n",2);
  iVar1 = (this->FullSearchKeywordsArray).ArrayNum;
  pFVar3 = (this->FullSearchKeywordsArray).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FullSearchKeywordsArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar3 == pFVar2) break;
    ::FString::ToLowerInline((FString *)pFVar3);
    iVar4 = *(int *)(pFVar3 + 8) + -1;
    if (*(int *)(pFVar3 + 8) == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(this_00,*(wchar_t **)&pFVar3->field_0x0,iVar4);
    pFVar3 = pFVar3 + 0x10;
  }
  ::FString::AppendChars(this_00,L"\r\n",2);
  iVar1 = (this->FullSearchCategoryArray).ArrayNum;
  pFVar3 = (this->FullSearchCategoryArray).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FullSearchCategoryArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar3 == pFVar2) break;
    ::FString::ToLowerInline((FString *)pFVar3);
    iVar4 = *(int *)(pFVar3 + 8) + -1;
    if (*(int *)(pFVar3 + 8) == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(this_00,*(wchar_t **)&pFVar3->field_0x0,iVar4);
    pFVar3 = pFVar3 + 0x10;
  }
  return;
}

