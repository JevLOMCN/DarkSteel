// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 148fe47c0

UClass * __cdecl UDEPRECATED_NiagaraAssetTagDefinitions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_NiagaraAssetTagDefinitions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraAssetTagDefinitions",
               &Z_Registration_Info_UClass_UDEPRECATED_NiagaraAssetTagDefinitions.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_NiagaraAssetTagDefinitions,0x60,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_NiagaraAssetTagDefinitions>,
               InternalVTableHelperCtorCaller<UDEPRECATED_NiagaraAssetTagDefinitions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_NiagaraAssetTagDefinitions.InnerSingleton;
}

// UDEPRECATED_NiagaraAssetTagDefinitions @ 149023580

UDEPRECATED_NiagaraAssetTagDefinitions * __thiscall
UDEPRECATED_NiagaraAssetTagDefinitions::UDEPRECATED_NiagaraAssetTagDefinitions
          (UDEPRECATED_NiagaraAssetTagDefinitions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDEPRECATED_NiagaraAssetTagDefinitions__6B_;
  FText::FText(&this->DisplayName);
  FText::FText(&this->Description);
  this->SortOrder = -1;
  (this->TagDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagDefinitions).ArrayNum = 0;
  (this->TagDefinitions).ArrayMax = 0;
  this->bDisplayTagsAsFlatList = false;
  return this;
}

// UDEPRECATED_NiagaraAssetTagDefinitions @ 1490235d0

UDEPRECATED_NiagaraAssetTagDefinitions * __thiscall
UDEPRECATED_NiagaraAssetTagDefinitions::UDEPRECATED_NiagaraAssetTagDefinitions
          (UDEPRECATED_NiagaraAssetTagDefinitions *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDEPRECATED_NiagaraAssetTagDefinitions__6B_;
  FText::FText(&this->DisplayName);
  FText::FText(&this->Description);
  this->SortOrder = -1;
  (this->TagDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagDefinitions).ArrayNum = 0;
  (this->TagDefinitions).ArrayMax = 0;
  this->bDisplayTagsAsFlatList = false;
  return this;
}

// ~UDEPRECATED_NiagaraAssetTagDefinitions @ 1490263e0

void __thiscall
UDEPRECATED_NiagaraAssetTagDefinitions::~UDEPRECATED_NiagaraAssetTagDefinitions
          (UDEPRECATED_NiagaraAssetTagDefinitions *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&___7UDEPRECATED_NiagaraAssetTagDefinitions__6B_;
  DestructItems<FNiagaraAssetTagDefinition,int>
            ((FNiagaraAssetTagDefinition *)(this->TagDefinitions).AllocatorInstance.Data,
             (this->TagDefinitions).ArrayNum);
  pFVar1 = (this->TagDefinitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Description).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->DisplayName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UObject::~UObject((UObject *)this);
  return;
}

// DoesAssetDataContainAnyTag @ 14903e780

bool __thiscall
UDEPRECATED_NiagaraAssetTagDefinitions::DoesAssetDataContainAnyTag
          (UDEPRECATED_NiagaraAssetTagDefinitions *this,FAssetData *param_1)

{
  int iVar1;
  FAssetDataTagMap *pFVar2;
  code *pcVar3;
  FKeyForward FVar4;
  FAssetData *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FName *pFVar9;
  FValueId *pFVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FKeyForward local_res8 [8];
  FAssetData *local_res10;
  FName local_res18;
  FName local_res20;
  FString local_58;
  
  FVar4 = local_res8[0];
  iVar1 = (this->TagDefinitions).ArrayNum;
  pFVar14 = (this->TagDefinitions).AllocatorInstance.Data;
  pFVar15 = pFVar14 + (longlong)iVar1 * 0x50;
  local_res10 = param_1;
  do {
    pFVar5 = local_res10;
    if ((this->TagDefinitions).ArrayNum != iVar1) {
      local_res8[0] = (FKeyForward)0x0;
      `TCheckedPointerIterator<FNiagaraAssetTagDefinition_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar15) {
      return false;
    }
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    FGuid::AppendString((FGuid *)(pFVar14 + 0x3c),&local_58,DigitsWithHyphens);
    iVar12 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    pFVar9 = ::FName::FName(&local_res20,iVar12,(wchar_t *)local_58.Data.AllocatorInstance.Data,
                            FNAME_Add);
    if ((*(byte *)&(pFVar5->TagsAndValues).field0_0x0 & 1) == 0) {
      pFVar2 = (pFVar5->TagsAndValues).field0_0x0.Loose;
      if (pFVar2 != (FAssetDataTagMap *)0x0) {
        local_res18 = *pFVar9;
        uVar8 = Algo::
                BinarySearchBy<TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                          ((TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)pFVar2,
                           &local_res18,FVar4,(FNameFastLess)FVar4);
        if (uVar8 != 0xffffffff) {
          uVar11 = 0;
          if ((int)uVar8 < (int)pFVar2->_padding_) {
            uVar11 = ~uVar8 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          pFVar13 = ((ForAnyElementType *)&pFVar2->_padding_)->Data +
                    ((longlong)(int)uVar8 * 3 + 1) * 8;
          goto LAB_14903e905;
        }
      }
LAB_14903e8ff:
      pFVar13 = (FScriptContainerElement *)0x0;
    }
    else {
      pFVar10 = FixedTagPrivate::FMapHandle::FindValue((FMapHandle *)&pFVar5->TagsAndValues,*pFVar9)
      ;
      if (pFVar10 == (FValueId *)0x0) goto LAB_14903e8ff;
      pFVar13 = (FScriptContainerElement *)
                (((ulonglong)*(ushort *)&(pFVar5->TagsAndValues).field0_0x0 & 0xfffffffffffffffc |
                 0xfffffffe00000000) << 0x1e | (ulonglong)(uint)*pFVar10);
    }
LAB_14903e905:
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      return true;
    }
    pFVar14 = pFVar14 + 0x50;
  } while( true );
}

// GetDescription @ 149045be0

FText * __thiscall
UDEPRECATED_NiagaraAssetTagDefinitions::GetDescription
          (UDEPRECATED_NiagaraAssetTagDefinitions *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->Description).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->Description).Flags;
  return __return_storage_ptr__;
}

// GetDisplayName @ 149045cc0

FText * __thiscall
UDEPRECATED_NiagaraAssetTagDefinitions::GetDisplayName
          (UDEPRECATED_NiagaraAssetTagDefinitions *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  bool bVar2;
  FName local_res8;
  FString local_18;
  
  bVar2 = FText::IsEmptyOrWhitespace(&this->DisplayName);
  if (bVar2) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    FText::FromString(__return_storage_ptr__,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  else {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (this->DisplayName).TextData.Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_res8);
    }
    __return_storage_ptr__->Flags = (this->DisplayName).Flags;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149047c60

UClass * __cdecl UDEPRECATED_NiagaraAssetTagDefinitions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_NiagaraAssetTagDefinitions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraAssetTagDefinitions",
               &Z_Registration_Info_UClass_UDEPRECATED_NiagaraAssetTagDefinitions.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_NiagaraAssetTagDefinitions,0x60,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_NiagaraAssetTagDefinitions>,
               InternalVTableHelperCtorCaller<UDEPRECATED_NiagaraAssetTagDefinitions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_NiagaraAssetTagDefinitions.InnerSingleton;
}

// StaticRegisterNativesUDEPRECATED_NiagaraAssetTagDefinitions @ 14906a440

void __cdecl
UDEPRECATED_NiagaraAssetTagDefinitions::StaticRegisterNativesUDEPRECATED_NiagaraAssetTagDefinitions
          (void)

{
  return;
}

