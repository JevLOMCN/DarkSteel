// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticStruct @ 148fe4640

UScriptStruct * __cdecl FNiagaraAssetTagDefinition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraAssetTagDefinition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraAssetTagDefinition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition,(UObject *)pUVar1,
                         L"NiagaraAssetTagDefinition");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraAssetTagDefinition.OuterSingleton;
}

// FNiagaraAssetTagDefinition @ 1490219f0

FNiagaraAssetTagDefinition * __thiscall
FNiagaraAssetTagDefinition::FNiagaraAssetTagDefinition
          (FNiagaraAssetTagDefinition *this,FText *param_1,int param_2,FText *param_3,
          ENiagaraAssetTagDefinitionImportance param_4,FLinearColor *param_5,FGuid *param_6)

{
  ITextData *pIVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 local_res18 [8];
  
  (this->AssetTag).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->TextData).Reference;
  (this->AssetTag).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
  }
  (this->AssetTag).Flags = param_1->Flags;
  this->AssetFlags = param_2;
  (this->Description).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_3->TextData).Reference;
  (this->Description).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
  }
  (this->Description).Flags = param_3->Flags;
  this->DisplayType = param_4;
  uVar5 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
  *(undefined8 *)&(this->Color).field0_0x0 = *(undefined8 *)&param_5->field0_0x0;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar5;
  uVar2 = param_6->B;
  uVar3 = param_6->C;
  uVar4 = param_6->D;
  (this->TagGuid).A = param_6->A;
  (this->TagGuid).B = uVar2;
  (this->TagGuid).C = uVar3;
  (this->TagGuid).D = uVar4;
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (param_3->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return this;
}

// DoesAssetDataContainTag @ 14903e950

bool __thiscall
FNiagaraAssetTagDefinition::DoesAssetDataContainTag
          (FNiagaraAssetTagDefinition *this,FAssetData *param_1)

{
  FName FVar1;
  FAssetDataTagMap *pFVar2;
  code *pcVar3;
  FKeyForward FVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FName *pFVar8;
  FValueId *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FName local_res8;
  FName local_res10;
  FString local_18;
  
  pFVar11 = (FScriptContainerElement *)0x0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FGuid::AppendString(&this->TagGuid,&local_18,DigitsWithHyphens);
  uVar7 = local_18.Data.ArrayNum - 1;
  if (local_18.Data.ArrayNum == 0) {
    uVar7 = 0;
  }
  pFVar8 = ::FName::FName(&local_res10,uVar7,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                          FNAME_Add);
  FVar1 = *pFVar8;
  if ((*(byte *)&(param_1->TagsAndValues).field0_0x0 & 1) == 0) {
    pFVar2 = (param_1->TagsAndValues).field0_0x0.Loose;
    if (pFVar2 != (FAssetDataTagMap *)0x0) {
      local_res8.ComparisonIndex.Value._0_1_ = FVar1.ComparisonIndex.Value._0_1_;
      FVar4 = local_res8.ComparisonIndex.Value._0_1_;
      local_res8 = FVar1;
      uVar7 = Algo::
              BinarySearchBy<TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                        ((TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)pFVar2,
                         &local_res8,FVar4,(FNameFastLess)FVar4);
      if (uVar7 != 0xffffffff) {
        uVar10 = 0;
        if ((int)uVar7 < (int)pFVar2->_padding_) {
          uVar10 = ~uVar7 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        pFVar11 = ((ForAnyElementType *)&pFVar2->_padding_)->Data +
                  ((longlong)(int)uVar7 * 3 + 1) * 8;
      }
    }
  }
  else {
    pFVar9 = FixedTagPrivate::FMapHandle::FindValue((FMapHandle *)&param_1->TagsAndValues,FVar1);
    if (pFVar9 != (FValueId *)0x0) {
      pFVar11 = (FScriptContainerElement *)
                (((ulonglong)*(ushort *)&(param_1->TagsAndValues).field0_0x0 & 0xfffffffffffffffc |
                 0xfffffffe00000000) << 0x1e | (ulonglong)(uint)*pFVar9);
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pFVar11 != (FScriptContainerElement *)0x0;
}

// GetGuidAsString @ 149046d20

FString * __thiscall
FNiagaraAssetTagDefinition::GetGuidAsString
          (FNiagaraAssetTagDefinition *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FGuid::AppendString(&this->TagGuid,__return_storage_ptr__,DigitsWithHyphens);
  return __return_storage_ptr__;
}

// GetSupportedClasses @ 149049940

TArray<UClass_*,TSizedDefaultAllocator<32>_> * __thiscall
FNiagaraAssetTagDefinition::GetSupportedClasses
          (FNiagaraAssetTagDefinition *this,
          TArray<UClass_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> *pTVar5;
  UClass *local_28;
  UClass *local_20;
  UClass *local_18 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((this->AssetFlags & 1) != 0) {
    local_28 = Z_Construct_UClass_UNiagaraEmitter_NoRegister();
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 <
        pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
    }
    iVar4 = __return_storage_ptr__->ArrayNum;
    if (iVar4 == __return_storage_ptr__->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    *(UClass **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_28;
  }
  if ((this->AssetFlags & 2) != 0) {
    local_20 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_20) &&
       ((FScriptContainerElement *)&local_20 <
        pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
    }
    iVar4 = __return_storage_ptr__->ArrayNum;
    if (iVar4 == __return_storage_ptr__->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    *(UClass **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_20;
  }
  if ((this->AssetFlags & 4) != 0) {
    local_18[0] = Z_Construct_UClass_UNiagaraScript_NoRegister();
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
    }
    iVar4 = __return_storage_ptr__->ArrayNum;
    if (iVar4 == __return_storage_ptr__->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    *(UClass **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return __return_storage_ptr__;
}

// IsValid @ 14905aed0

bool __thiscall FNiagaraAssetTagDefinition::IsValid(FNiagaraAssetTagDefinition *this)

{
  bool bVar1;
  
  if ((((this->TagGuid).D != 0 || (this->TagGuid).C != 0) || (this->TagGuid).B != 0) ||
      (this->TagGuid).A != 0) {
    bVar1 = FText::IsEmpty(&this->AssetTag);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// SupportsEmitters @ 14906a6c0

bool __thiscall FNiagaraAssetTagDefinition::SupportsEmitters(FNiagaraAssetTagDefinition *this)

{
  return (bool)((byte)this->AssetFlags & 1);
}

// SupportsScripts @ 14906a6d0

bool __thiscall FNiagaraAssetTagDefinition::SupportsScripts(FNiagaraAssetTagDefinition *this)

{
  return (bool)((byte)((uint)this->AssetFlags >> 2) & 1);
}

// SupportsSystems @ 14906a6e0

bool __thiscall FNiagaraAssetTagDefinition::SupportsSystems(FNiagaraAssetTagDefinition *this)

{
  return (bool)((byte)((uint)this->AssetFlags >> 1) & 1);
}

