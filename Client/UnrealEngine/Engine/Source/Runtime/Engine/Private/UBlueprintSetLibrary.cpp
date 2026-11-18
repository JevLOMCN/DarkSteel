// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 38

// StaticClass @ 1476711f0

UClass * __cdecl UBlueprintSetLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintSetLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintSetLibrary",
               &Z_Registration_Info_UClass_UBlueprintSetLibrary.InnerSingleton,
               StaticRegisterNativesUBlueprintSetLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintSetLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintSetLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintSetLibrary.InnerSingleton;
}

// UBlueprintSetLibrary @ 1476888d0

UBlueprintSetLibrary * __thiscall
UBlueprintSetLibrary::UBlueprintSetLibrary(UBlueprintSetLibrary *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBlueprintSetLibrary__6B_;
  return this;
}

// UBlueprintSetLibrary @ 147688900

UBlueprintSetLibrary * __thiscall
UBlueprintSetLibrary::UBlueprintSetLibrary(UBlueprintSetLibrary *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBlueprintSetLibrary__6B_;
  return this;
}

// ~UBlueprintSetLibrary @ 14768a940

void __thiscall UBlueprintSetLibrary::~UBlueprintSetLibrary(UBlueprintSetLibrary *this)

{
  *(undefined ***)this = &___7UBlueprintFunctionLibrary__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GenericSet_Add @ 1476ab9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UBlueprintSetLibrary::GenericSet_Add(void *param_1,FSetProperty *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType FVar6;
  FProperty *local_res8;
  FProperty *local_res20;
  FString local_98;
  FString local_88;
  code *local_78;
  FProperty **local_70;
  code *local_68;
  FProperty **local_60;
  FScriptSetHelper local_58;
  
  if (param_1 != (void *)0x0) {
    local_58.SetLayout.HashNextIdOffset = (param_2->SetLayout).HashNextIdOffset;
    local_58.SetLayout.HashIndexOffset = (param_2->SetLayout).HashIndexOffset;
    local_58.SetLayout.Size = (param_2->SetLayout).Size;
    local_58.SetLayout.SparseArrayLayout.Alignment =
         (param_2->SetLayout).SparseArrayLayout.Alignment;
    pFVar1 = param_2->ElementProp;
    local_58.SetLayout.SparseArrayLayout.Size = (param_2->SetLayout).SparseArrayLayout.Size;
    local_58.ElementProp = pFVar1;
    local_58.Set = param_1;
    if ((pFVar1 == (FProperty *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(int *)((longlong)param_1 + 8) - *(int *)((longlong)param_1 + 0x34) < 0x7fffffff) {
      FScriptSetHelper::AddElement(&local_58,param_3);
    }
    else {
      local_70 = &local_res8;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FScriptSetHelper::FindElementIndexFromHash'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
                 ::Call;
      local_60 = &local_res20;
      local_68 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FScriptSetHelper::FindElementIndexFromHash'::__l2::<lambda_1>,unsigned_int,void_const_*>
                 ::Call;
      local_res8 = pFVar1;
      local_res20 = pFVar1;
      iVar5 = TScriptSparseSet<FDefaultSetAllocator>::FindIndex
                        (param_1,param_3,&local_58.SetLayout,
                         (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_68,
                         (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_78);
      FVar3 = UKismetArrayLibrary::ReachedMaximumContainerSizeWarning;
      if (iVar5 == -1) {
        bVar4 = IsThisNotNull(param_2,"FField::GetName");
        if (bVar4) {
          ::FName::ToString((FName *)&param_2->_padding_,&local_98);
        }
        else {
          ::FString::FString(&local_98,L"None");
        }
        ::FString::PrintfImpl
                  (&local_88,L"Attempted add to set \'%s\' beyond the maximum supported capacity!");
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_88.Data.ArrayNum != 0) {
          FVar6.Data = local_88.Data.AllocatorInstance.Data;
        }
        FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,FVar3);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// GenericSet_AddItems @ 1476abb40

void __cdecl
UBlueprintSetLibrary::GenericSet_AddItems
          (void *param_1,FSetProperty *param_2,void *param_3,FArrayProperty *param_4)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  void *pvVar9;
  
  if ((param_1 != (void *)0x0) && (param_3 != (void *)0x0)) {
    EVar1 = param_4->ArrayFlags;
    (**(code **)(param_4->Inner->_padding_ + 0x168))();
    pFVar3 = param_4->Inner;
    iVar2 = pFVar3->ElementSize;
    if ((iVar2 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pFVar3 == (FProperty *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (0 < (int)*(uint *)((longlong)param_3 + 8)) {
      lVar8 = 0;
      uVar7 = (ulonglong)*(uint *)((longlong)param_3 + 8);
      do {
        if (*(int *)((longlong)param_3 + 8) == 0) {
          pvVar9 = (void *)0x0;
        }
        else {
          uVar6 = *(ulonglong *)param_3;
          if (((EVar1 & UsesMemoryImageAllocator) != None) && ((uVar6 & 1) != 0)) {
            uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)param_3;
          }
          pvVar9 = (void *)(iVar2 * lVar8 + uVar6);
        }
        GenericSet_Add(param_1,param_2,pvVar9);
        lVar8 = lVar8 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}

// GenericSet_Clear @ 1476abc70

void __cdecl UBlueprintSetLibrary::GenericSet_Clear(void *param_1,FSetProperty *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  FScriptSetHelper local_38;
  
  if (param_1 != (void *)0x0) {
    local_38.ElementProp = param_2->ElementProp;
    iVar1 = (param_2->SetLayout).SparseArrayLayout.Size;
    local_38.SetLayout.HashNextIdOffset = (param_2->SetLayout).HashNextIdOffset;
    local_38.SetLayout.HashIndexOffset = (param_2->SetLayout).HashIndexOffset;
    local_38.SetLayout.Size = (param_2->SetLayout).Size;
    local_38.SetLayout.SparseArrayLayout.Alignment =
         (param_2->SetLayout).SparseArrayLayout.Alignment;
    local_38.Set = param_1;
    local_38.SetLayout.SparseArrayLayout.Size = iVar1;
    if ((local_38.ElementProp == (FProperty *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = *(int *)((longlong)param_1 + 8) - *(int *)((longlong)param_1 + 0x34);
    if (iVar5 != 0) {
      FScriptSetHelper::DestructItems(&local_38,0,iVar5);
      iVar5 = 0;
      *(undefined4 *)((longlong)param_1 + 8) = 0;
      if (*(int *)((longlong)param_1 + 0xc) != 0) {
        TScriptArray<TSizedDefaultAllocator<32>_>::ResizeTo
                  (param_1,0,iVar1,local_38.SetLayout.SparseArrayLayout.Alignment);
      }
      *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0x34) = 0;
      *(undefined4 *)((longlong)param_1 + 0x28) = 0;
      if (*(int *)((longlong)param_1 + 0x2c) != 0) {
        *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
        TScriptBitArray<FDefaultBitArrayAllocator,void>::Realloc
                  ((TScriptBitArray<FDefaultBitArrayAllocator,void> *)((longlong)param_1 + 0x10),0);
      }
      puVar4 = *(undefined4 **)((longlong)param_1 + 0x40);
      if (*(undefined4 **)((longlong)param_1 + 0x40) == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)((longlong)param_1 + 0x38);
      }
      if (0 < *(int *)((longlong)param_1 + 0x48)) {
        do {
          *puVar4 = 0xffffffff;
          puVar4 = puVar4 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)((longlong)param_1 + 0x48));
      }
    }
  }
  return;
}

// GenericSet_Contains @ 1476abd80

bool __cdecl
UBlueprintSetLibrary::GenericSet_Contains(void *param_1,FSetProperty *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FProperty *local_res8;
  FProperty *local_res20;
  code *local_58;
  FProperty **local_50;
  code *local_48;
  FProperty **local_40;
  FProperty *local_38;
  void *local_30;
  FScriptSparseSetLayout local_28;
  
  if (param_1 == (void *)0x0) {
    return false;
  }
  local_28.HashNextIdOffset = (param_2->SetLayout).HashNextIdOffset;
  local_28.HashIndexOffset = (param_2->SetLayout).HashIndexOffset;
  local_28.Size = (param_2->SetLayout).Size;
  local_28.SparseArrayLayout.Alignment = (param_2->SetLayout).SparseArrayLayout.Alignment;
  pFVar1 = param_2->ElementProp;
  local_28.SparseArrayLayout.Size = (param_2->SetLayout).SparseArrayLayout.Size;
  local_38 = pFVar1;
  local_30 = param_1;
  if (pFVar1 == (FProperty *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1653,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_50 = &local_res8;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FScriptSetHelper::FindElementIndexFromHash'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
             ::Call;
  local_40 = &local_res20;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FScriptSetHelper::FindElementIndexFromHash'::__l2::<lambda_1>,unsigned_int,void_const_*>
             ::Call;
  local_res8 = pFVar1;
  local_res20 = pFVar1;
  iVar5 = TScriptSparseSet<FDefaultSetAllocator>::FindIndex
                    (param_1,param_3,&local_28,
                     (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_48,
                     (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_58);
  return iVar5 != -1;
}

// GenericSet_Difference @ 1476abe90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UBlueprintSetLibrary::GenericSet_Difference
          (void *param_1,FSetProperty *param_2,void *param_3,FSetProperty *param_4,void *param_5,
          FSetProperty *param_6)

{
  TScriptSparseSet<FDefaultSetAllocator> *pTVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  FScriptSetHelper *pFVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  void *pvVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStackY_118 [32];
  TScriptContainerIterator<FScriptSetHelper> local_e8;
  FProperty *local_d8;
  FProperty *local_d0;
  FScriptSetHelper local_c8;
  code *local_a0;
  FProperty **local_98;
  code *local_90;
  FProperty **local_88;
  FProperty *local_80;
  TScriptSparseSet<FDefaultSetAllocator> *local_78;
  FScriptSparseSetLayout local_70;
  FScriptSetHelper local_58;
  ulonglong local_30;
  
  if (((param_1 != (void *)0x0) &&
      (local_30 = __security_cookie.value ^ (ulonglong)auStackY_118, param_3 != (void *)0x0)) &&
     (param_5 != (void *)0x0)) {
    local_58.ElementProp = param_2->ElementProp;
    local_58.SetLayout.SparseArrayLayout.Size = (param_2->SetLayout).SparseArrayLayout.Size;
    local_58.SetLayout.HashNextIdOffset = (param_2->SetLayout).HashNextIdOffset;
    local_58.SetLayout.HashIndexOffset = (param_2->SetLayout).HashIndexOffset;
    local_58.SetLayout.Size = (param_2->SetLayout).Size;
    local_58.SetLayout.SparseArrayLayout.Alignment =
         (param_2->SetLayout).SparseArrayLayout.Alignment;
    local_58.Set = param_1;
    if ((local_58.ElementProp == (FProperty *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_80 = param_4->ElementProp;
    local_70.SparseArrayLayout.Size = (param_4->SetLayout).SparseArrayLayout.Size;
    local_70.HashNextIdOffset = (param_4->SetLayout).HashNextIdOffset;
    local_70.HashIndexOffset = (param_4->SetLayout).HashIndexOffset;
    local_70.Size = (param_4->SetLayout).Size;
    local_70.SparseArrayLayout.Alignment = (param_4->SetLayout).SparseArrayLayout.Alignment;
    local_78 = param_3;
    if ((local_80 == (FProperty *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_c8.Set = param_5;
    local_c8.ElementProp = param_6->ElementProp;
    iVar6 = (param_6->SetLayout).SparseArrayLayout.Size;
    local_c8.SetLayout.HashNextIdOffset = (param_6->SetLayout).HashNextIdOffset;
    local_c8.SetLayout.HashIndexOffset = (param_6->SetLayout).HashIndexOffset;
    local_c8.SetLayout.Size = (param_6->SetLayout).Size;
    local_c8.SetLayout.SparseArrayLayout.Alignment =
         (param_6->SetLayout).SparseArrayLayout.Alignment;
    local_c8.SetLayout.SparseArrayLayout.Size = iVar6;
    if ((local_c8.ElementProp == (FProperty *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar12 = *(int *)((longlong)param_5 + 8) - *(int *)((longlong)param_5 + 0x34);
    if (iVar12 != 0) {
      FScriptSetHelper::DestructItems(&local_c8,0,iVar12);
      iVar12 = 0;
      *(undefined4 *)((longlong)param_5 + 8) = 0;
      if (*(int *)((longlong)param_5 + 0xc) != 0) {
        TScriptArray<TSizedDefaultAllocator<32>_>::ResizeTo
                  (param_5,0,iVar6,local_c8.SetLayout.SparseArrayLayout.Alignment);
      }
      *(undefined4 *)((longlong)param_5 + 0x30) = 0xffffffff;
      *(undefined4 *)((longlong)param_5 + 0x34) = 0;
      *(undefined4 *)((longlong)param_5 + 0x28) = 0;
      if (*(int *)((longlong)param_5 + 0x2c) != 0) {
        *(undefined4 *)((longlong)param_5 + 0x2c) = 0;
        TScriptBitArray<FDefaultBitArrayAllocator,void>::Realloc
                  ((TScriptBitArray<FDefaultBitArrayAllocator,void> *)((longlong)param_5 + 0x10),0);
      }
      puVar7 = *(undefined4 **)((longlong)param_5 + 0x40);
      if (*(undefined4 **)((longlong)param_5 + 0x40) == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)((longlong)param_5 + 0x38);
      }
      if (0 < *(int *)((longlong)param_5 + 0x48)) {
        do {
          *puVar7 = 0xffffffff;
          puVar7 = puVar7 + 1;
          iVar12 = iVar12 + 1;
        } while (iVar12 < *(int *)((longlong)param_5 + 0x48));
      }
    }
    local_e8.Container = &local_58;
    local_e8.InternalIndex = -1;
    local_e8.LogicalIndex = -1;
    TScriptContainerIterator<FScriptSetHelper>::Advance(&local_e8);
    while( true ) {
      pFVar4 = local_e8.Container;
      uVar8 = local_e8.InternalIndex;
      pTVar1 = (local_e8.Container)->Set;
      if ((local_e8.InternalIndex < 0) ||
         ((pTVar1->Elements).AllocationFlags.NumBits <= local_e8.InternalIndex)) break;
      if (((pTVar1->Elements).AllocationFlags.NumBits <= local_e8.InternalIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x8c4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar2;
      }
      uVar11 = uVar8;
      if ((int)uVar8 < 0) {
        uVar11 = uVar8 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar10 + (longlong)((int)uVar11 >> 5) * 4) >> (uVar8 & 0x1f) & 1) ==
          0) {
        return;
      }
      iVar6 = local_e8.InternalIndex;
      pTVar1 = pFVar4->Set;
      if (((int)uVar8 < 0) || ((pTVar1->Elements).AllocationFlags.NumBits <= (int)uVar8)) {
LAB_1476ac167:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Iterator",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method.");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        if (((pTVar1->Elements).AllocationFlags.NumBits <= (int)uVar8) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x8c4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar2 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar2;
        }
        uVar11 = uVar8 & 0x1f;
        if ((int)uVar8 < 0) {
          uVar8 = uVar8 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar10 + (longlong)((int)uVar8 >> 5) * 4) >> uVar11 & 1) == 0)
        goto LAB_1476ac167;
      }
      local_a0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FScriptSetHelper::FindElementIndexFromHash'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
                 ::Call;
      local_90 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FScriptSetHelper::FindElementIndexFromHash'::__l2::<lambda_1>,unsigned_int,void_const_*>
                 ::Call;
      local_98 = &local_d8;
      pvVar9 = (void *)((longlong)(local_58.SetLayout.SparseArrayLayout.Size * iVar6) +
                       ((local_58.Set)->Elements).Data._padding_);
      local_d8 = local_80;
      local_d0 = local_80;
      local_88 = &local_d0;
      iVar6 = TScriptSparseSet<FDefaultSetAllocator>::FindIndex
                        (local_78,pvVar9,&local_70,
                         (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_90,
                         (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_a0);
      if (iVar6 == -1) {
        FScriptSetHelper::AddElement(&local_c8,pvVar9);
      }
      TScriptContainerIterator<FScriptSetHelper>::Advance(&local_e8);
    }
  }
  return;
}

// GenericSet_GetItemByIndex @ 1476ac260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintSetLibrary::GenericSet_GetItemByIndex
          (void *param_1,FSetProperty *param_2,int param_3,void *param_4)

{
  FName FVar1;
  code *pcVar2;
  longlong lVar3;
  FProperty *pFVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FName *pFVar8;
  FString *pFVar9;
  uint uVar10;
  uint uVar11;
  wchar_t *pwVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  ForAnyElementType FVar16;
  int iVar17;
  undefined1 auStack_f8 [32];
  int local_d8;
  FScriptContainerElement *local_d0;
  int local_c8;
  FString local_c0;
  FProperty *local_b0;
  void *local_a8;
  FFieldObjectUnion local_a0;
  FString local_98;
  FName local_88;
  FString local_80;
  FProperty *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_50;
  ulonglong local_48;
  
  if (param_1 != (void *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
    local_60._0_4_ = (param_2->SetLayout).HashNextIdOffset;
    local_60._4_4_ = (param_2->SetLayout).HashIndexOffset;
    uStack_58._0_4_ = (param_2->SetLayout).Size;
    uStack_58._4_4_ = (param_2->SetLayout).SparseArrayLayout.Alignment;
    local_50 = (param_2->SetLayout).SparseArrayLayout.Size;
    local_70 = param_2->ElementProp;
    local_a8 = param_4;
    local_68 = param_1;
    if ((local_70 == (FProperty *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar10 = 0xffffffff;
    local_b0 = param_2->ElementProp;
    iVar17 = -1;
    iVar6 = (int)local_68[1];
    plVar15 = local_68;
    uVar11 = param_3;
    local_c8 = iVar6;
    if (*(int *)((longlong)local_68 + 0x34) != 0) {
      do {
        lVar3 = plVar15[1];
        plVar14 = plVar15;
        do {
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
            plVar15 = plVar14;
            if ((int)lVar3 <= (int)uVar10) goto LAB_1476ac399;
            iVar6 = local_c8;
          } while (((int)uVar10 < 0) || ((int)plVar14[5] <= (int)uVar10));
          if (((int)plVar14[5] <= (int)uVar10) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x8c4,L""), plVar15 = local_68, bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          plVar13 = plVar14 + 2;
          if ((longlong *)plVar14[4] != (longlong *)0x0) {
            plVar13 = (longlong *)plVar14[4];
          }
          uVar7 = uVar10;
          if ((int)uVar10 < 0) {
            uVar7 = uVar11 + 0x20;
          }
          iVar6 = local_c8;
          plVar14 = plVar15;
        } while ((*(uint *)((longlong)plVar13 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar10 & 0x1f)
                 & 1) == 0);
LAB_1476ac399:
        iVar17 = iVar17 + 1;
        uVar11 = uVar10;
      } while ((iVar17 < param_3) && ((int)uVar10 < iVar6));
    }
    pFVar4 = local_b0;
    if ((-1 < (int)uVar11) && ((int)uVar11 < (int)plVar15[5])) {
      plVar14 = (longlong *)plVar15[4];
      if ((longlong *)plVar15[4] == (longlong *)0x0) {
        plVar14 = plVar15 + 2;
      }
      if ((*(uint *)((longlong)plVar14 +
                    (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           (uVar11 & 0x1f) & 1) != 0) {
        pcVar2 = *(code **)(local_b0->_padding_ + 0x100);
        if (((int)plVar15[5] <= (int)uVar11) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Iterator",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x16bb,
                               L"Invalid Iterator. Test Iterator before calling this method."),
           plVar15 = local_68, bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (*pcVar2)(pFVar4,local_a8,(longlong)(int)(local_50 * uVar11) + *plVar15);
        return;
      }
    }
    pFVar8 = ::FName::FName(&local_88,L"GetOutOfBoundsWarning");
    local_a0 = (FFieldObjectUnion)param_2->_padding_;
    FVar1 = *pFVar8;
    if ((((local_a0.Unknown & 1) != 0) &&
        ((UObject *)(local_a0.Unknown & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_a0.Unknown & 0xfffffffffffffffe));
    }
    pFVar9 = FFieldVariant::GetPathName((FFieldVariant *)&local_a0,&local_80);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    lVar3 = local_68[1];
    iVar6 = *(int *)((longlong)local_68 + 0x34);
    bVar5 = IsThisNotNull(param_2,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)&param_2->_padding_,&local_c0);
    }
    else {
      ::FString::FString(&local_c0,L"None");
    }
    local_d8 = (int)lVar3 - iVar6;
    local_d0 = (FScriptContainerElement *)pwVar12;
    ::FString::PrintfImpl
              (&local_98,
               L"Attempted to access invalid index %d from set \'%s\' of length %d in \'%s\'!");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar16.Data = local_98.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar16.Data,Warning,FVar1);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GenericSet_GetLastIndex @ 1476ac580

int __cdecl UBlueprintSetLibrary::GenericSet_GetLastIndex(void *param_1,FSetProperty *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if (param_2->ElementProp == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1653,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return (*(int *)((longlong)param_1 + 8) - *(int *)((longlong)param_1 + 0x34)) + -1;
}

// GenericSet_Intersect @ 1476ac5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UBlueprintSetLibrary::GenericSet_Intersect
          (void *param_1,FSetProperty *param_2,void *param_3,FSetProperty *param_4,void *param_5,
          FSetProperty *param_6)

{
  TScriptSparseSet<FDefaultSetAllocator> *pTVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  FScriptSetHelper *pFVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  void *pvVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStackY_118 [32];
  TScriptContainerIterator<FScriptSetHelper> local_e8;
  FProperty *local_d8;
  FProperty *local_d0;
  FScriptSetHelper local_c8;
  code *local_a0;
  FProperty **local_98;
  code *local_90;
  FProperty **local_88;
  FProperty *local_80;
  TScriptSparseSet<FDefaultSetAllocator> *local_78;
  FScriptSparseSetLayout local_70;
  FScriptSetHelper local_58;
  ulonglong local_30;
  
  if (((param_1 != (void *)0x0) &&
      (local_30 = __security_cookie.value ^ (ulonglong)auStackY_118, param_3 != (void *)0x0)) &&
     (param_5 != (void *)0x0)) {
    local_58.ElementProp = param_2->ElementProp;
    local_58.SetLayout.SparseArrayLayout.Size = (param_2->SetLayout).SparseArrayLayout.Size;
    local_58.SetLayout.HashNextIdOffset = (param_2->SetLayout).HashNextIdOffset;
    local_58.SetLayout.HashIndexOffset = (param_2->SetLayout).HashIndexOffset;
    local_58.SetLayout.Size = (param_2->SetLayout).Size;
    local_58.SetLayout.SparseArrayLayout.Alignment =
         (param_2->SetLayout).SparseArrayLayout.Alignment;
    local_58.Set = param_1;
    if ((local_58.ElementProp == (FProperty *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_80 = param_4->ElementProp;
    local_70.SparseArrayLayout.Size = (param_4->SetLayout).SparseArrayLayout.Size;
    local_70.HashNextIdOffset = (param_4->SetLayout).HashNextIdOffset;
    local_70.HashIndexOffset = (param_4->SetLayout).HashIndexOffset;
    local_70.Size = (param_4->SetLayout).Size;
    local_70.SparseArrayLayout.Alignment = (param_4->SetLayout).SparseArrayLayout.Alignment;
    local_78 = param_3;
    if ((local_80 == (FProperty *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_c8.Set = param_5;
    local_c8.ElementProp = param_6->ElementProp;
    iVar6 = (param_6->SetLayout).SparseArrayLayout.Size;
    local_c8.SetLayout.HashNextIdOffset = (param_6->SetLayout).HashNextIdOffset;
    local_c8.SetLayout.HashIndexOffset = (param_6->SetLayout).HashIndexOffset;
    local_c8.SetLayout.Size = (param_6->SetLayout).Size;
    local_c8.SetLayout.SparseArrayLayout.Alignment =
         (param_6->SetLayout).SparseArrayLayout.Alignment;
    local_c8.SetLayout.SparseArrayLayout.Size = iVar6;
    if ((local_c8.ElementProp == (FProperty *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar12 = *(int *)((longlong)param_5 + 8) - *(int *)((longlong)param_5 + 0x34);
    if (iVar12 != 0) {
      FScriptSetHelper::DestructItems(&local_c8,0,iVar12);
      iVar12 = 0;
      *(undefined4 *)((longlong)param_5 + 8) = 0;
      if (*(int *)((longlong)param_5 + 0xc) != 0) {
        TScriptArray<TSizedDefaultAllocator<32>_>::ResizeTo
                  (param_5,0,iVar6,local_c8.SetLayout.SparseArrayLayout.Alignment);
      }
      *(undefined4 *)((longlong)param_5 + 0x30) = 0xffffffff;
      *(undefined4 *)((longlong)param_5 + 0x34) = 0;
      *(undefined4 *)((longlong)param_5 + 0x28) = 0;
      if (*(int *)((longlong)param_5 + 0x2c) != 0) {
        *(undefined4 *)((longlong)param_5 + 0x2c) = 0;
        TScriptBitArray<FDefaultBitArrayAllocator,void>::Realloc
                  ((TScriptBitArray<FDefaultBitArrayAllocator,void> *)((longlong)param_5 + 0x10),0);
      }
      puVar7 = *(undefined4 **)((longlong)param_5 + 0x40);
      if (*(undefined4 **)((longlong)param_5 + 0x40) == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)((longlong)param_5 + 0x38);
      }
      if (0 < *(int *)((longlong)param_5 + 0x48)) {
        do {
          *puVar7 = 0xffffffff;
          puVar7 = puVar7 + 1;
          iVar12 = iVar12 + 1;
        } while (iVar12 < *(int *)((longlong)param_5 + 0x48));
      }
    }
    local_e8.Container = &local_58;
    local_e8.InternalIndex = -1;
    local_e8.LogicalIndex = -1;
    TScriptContainerIterator<FScriptSetHelper>::Advance(&local_e8);
    while( true ) {
      pFVar4 = local_e8.Container;
      uVar8 = local_e8.InternalIndex;
      pTVar1 = (local_e8.Container)->Set;
      if ((local_e8.InternalIndex < 0) ||
         ((pTVar1->Elements).AllocationFlags.NumBits <= local_e8.InternalIndex)) break;
      if (((pTVar1->Elements).AllocationFlags.NumBits <= local_e8.InternalIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x8c4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar2;
      }
      uVar11 = uVar8;
      if ((int)uVar8 < 0) {
        uVar11 = uVar8 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar10 + (longlong)((int)uVar11 >> 5) * 4) >> (uVar8 & 0x1f) & 1) ==
          0) {
        return;
      }
      iVar6 = local_e8.InternalIndex;
      pTVar1 = pFVar4->Set;
      if (((int)uVar8 < 0) || ((pTVar1->Elements).AllocationFlags.NumBits <= (int)uVar8)) {
LAB_1476ac8b7:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Iterator",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method.");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        if (((pTVar1->Elements).AllocationFlags.NumBits <= (int)uVar8) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x8c4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar2 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar2;
        }
        uVar11 = uVar8 & 0x1f;
        if ((int)uVar8 < 0) {
          uVar8 = uVar8 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar10 + (longlong)((int)uVar8 >> 5) * 4) >> uVar11 & 1) == 0)
        goto LAB_1476ac8b7;
      }
      local_a0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FScriptSetHelper::FindElementIndexFromHash'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
                 ::Call;
      local_90 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FScriptSetHelper::FindElementIndexFromHash'::__l2::<lambda_1>,unsigned_int,void_const_*>
                 ::Call;
      local_98 = &local_d8;
      pvVar9 = (void *)((longlong)(local_58.SetLayout.SparseArrayLayout.Size * iVar6) +
                       ((local_58.Set)->Elements).Data._padding_);
      local_d8 = local_80;
      local_d0 = local_80;
      local_88 = &local_d0;
      iVar6 = TScriptSparseSet<FDefaultSetAllocator>::FindIndex
                        (local_78,pvVar9,&local_70,
                         (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_90,
                         (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_a0);
      if (iVar6 != -1) {
        FScriptSetHelper::AddElement(&local_c8,pvVar9);
      }
      TScriptContainerIterator<FScriptSetHelper>::Advance(&local_e8);
    }
  }
  return;
}

// GenericSet_IsEmpty @ 1476ac9b0

bool __cdecl UBlueprintSetLibrary::GenericSet_IsEmpty(void *param_1,FSetProperty *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 == (void *)0x0) {
    return true;
  }
  if (param_2->ElementProp == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1653,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return *(int *)((longlong)param_1 + 8) == *(int *)((longlong)param_1 + 0x34);
}

// GenericSet_IsNotEmpty @ 1476aca10

bool __cdecl UBlueprintSetLibrary::GenericSet_IsNotEmpty(void *param_1,FSetProperty *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 == (void *)0x0) {
    return false;
  }
  if (param_2->ElementProp == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1653,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return 0 < *(int *)((longlong)param_1 + 8) - *(int *)((longlong)param_1 + 0x34);
}

// GenericSet_Length @ 1476aca70

int __cdecl UBlueprintSetLibrary::GenericSet_Length(void *param_1,FSetProperty *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if (param_2->ElementProp == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1653,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)((longlong)param_1 + 8) - *(int *)((longlong)param_1 + 0x34);
}

// GenericSet_Remove @ 1476acad0

bool __cdecl
UBlueprintSetLibrary::GenericSet_Remove(void *param_1,FSetProperty *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FScriptSetHelper local_38;
  
  if (param_1 == (void *)0x0) {
    return false;
  }
  local_38.ElementProp = param_2->ElementProp;
  local_38.SetLayout.SparseArrayLayout.Size = (param_2->SetLayout).SparseArrayLayout.Size;
  local_38.SetLayout.HashNextIdOffset = (param_2->SetLayout).HashNextIdOffset;
  local_38.SetLayout.HashIndexOffset = (param_2->SetLayout).HashIndexOffset;
  local_38.SetLayout.Size = (param_2->SetLayout).Size;
  local_38.SetLayout.SparseArrayLayout.Alignment = (param_2->SetLayout).SparseArrayLayout.Alignment;
  local_38.Set = param_1;
  if (local_38.ElementProp == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1653,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FScriptSetHelper::RemoveElement(&local_38,param_3);
  return bVar2;
}

// GenericSet_RemoveItems @ 1476acb50

void __cdecl
UBlueprintSetLibrary::GenericSet_RemoveItems
          (void *param_1,FSetProperty *param_2,void *param_3,FArrayProperty *param_4)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  void *pvVar8;
  ulonglong uVar9;
  FScriptSetHelper local_58;
  
  if ((param_1 != (void *)0x0) && (param_3 != (void *)0x0)) {
    EVar1 = param_4->ArrayFlags;
    (**(code **)(param_4->Inner->_padding_ + 0x168))();
    pFVar3 = param_4->Inner;
    iVar2 = pFVar3->ElementSize;
    if ((iVar2 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pFVar3 == (FProperty *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (0 < (int)*(uint *)((longlong)param_3 + 8)) {
      lVar7 = 0;
      uVar9 = (ulonglong)*(uint *)((longlong)param_3 + 8);
      do {
        if (*(int *)((longlong)param_3 + 8) == 0) {
          pvVar8 = (void *)0x0;
        }
        else {
          uVar6 = *(ulonglong *)param_3;
          if (((EVar1 & UsesMemoryImageAllocator) != None) && ((uVar6 & 1) != 0)) {
            uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)param_3;
          }
          pvVar8 = (void *)(iVar2 * lVar7 + uVar6);
        }
        local_58.ElementProp = param_2->ElementProp;
        local_58.SetLayout.SparseArrayLayout.Size = (param_2->SetLayout).SparseArrayLayout.Size;
        local_58.SetLayout.HashNextIdOffset = (param_2->SetLayout).HashNextIdOffset;
        local_58.SetLayout.HashIndexOffset = (param_2->SetLayout).HashIndexOffset;
        local_58.SetLayout.Size = (param_2->SetLayout).Size;
        local_58.SetLayout.SparseArrayLayout.Alignment =
             (param_2->SetLayout).SparseArrayLayout.Alignment;
        local_58.Set = param_1;
        if ((local_58.ElementProp == (FProperty *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ElementProp",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1653,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FScriptSetHelper::RemoveElement(&local_58,pvVar8);
        lVar7 = lVar7 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}

// GenericSet_SetSetPropertyByName @ 1476acce0

void __cdecl
UBlueprintSetLibrary::GenericSet_SetSetPropertyByName(UObject *param_1,FName param_2,void *param_3)

{
  FProperty *this;
  bool bVar1;
  FName FVar2;
  void *pvVar3;
  FName FVar4;
  TFieldIterator<FSetProperty> local_38;
  
  if ((param_1 != (UObject *)0x0) &&
     (local_38.Struct = *(UStruct **)&param_1->field_0x10, param_2 != (FName)0x0)) {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
    if (local_38.Struct == (UStruct *)0x0) {
      local_38.Field = (FField *)0x0;
    }
    else {
      local_38.Field = (local_38.Struct)->ChildProperties;
    }
    local_38.InterfaceIndex = -1;
    local_38.bIncludeSuper = true;
    local_38.bIncludeDeprecated = true;
    local_38.bIncludeInterface = false;
    TFieldIterator<FSetProperty>::IterateToNext(&local_38);
    this = (FProperty *)local_38.Field;
    while (this != (FProperty *)0x0) {
      local_38.Field = (FField *)this;
      bVar1 = IsThisNotNull(this,"FField::GetFName");
      FVar2 = FVar4;
      if (bVar1) {
        FVar2 = (FName)this->_padding_;
      }
      if (FVar2 == param_2) {
        if (this == (FProperty *)0x0) {
          return;
        }
        pvVar3 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,0);
        (**(code **)(this->_padding_ + 0xf0))(this,pvVar3,param_3,1);
        return;
      }
      local_38.Field = (FField *)this->_padding_;
      TFieldIterator<FSetProperty>::IterateToNext(&local_38);
      this = (FProperty *)local_38.Field;
    }
  }
  return;
}

// GenericSet_ToArray @ 1476ace00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UBlueprintSetLibrary::GenericSet_ToArray
          (void *param_1,FSetProperty *param_2,void *param_3,FArrayProperty *param_4)

{
  TScriptSparseSet<FDefaultSetAllocator> *pTVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  FScriptSetHelper *pFVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  TScriptContainerIterator<FScriptSetHelper> local_78;
  FScriptSetHelper local_68;
  ulonglong local_40;
  
  if ((param_1 != (void *)0x0) &&
     (local_40 = __security_cookie.value ^ (ulonglong)auStack_98, param_3 != (void *)0x0)) {
    local_68.ElementProp = param_2->ElementProp;
    local_68.SetLayout.SparseArrayLayout.Size = (param_2->SetLayout).SparseArrayLayout.Size;
    local_68.SetLayout.HashNextIdOffset = (param_2->SetLayout).HashNextIdOffset;
    local_68.SetLayout.HashIndexOffset = (param_2->SetLayout).HashIndexOffset;
    local_68.SetLayout.Size = (param_2->SetLayout).Size;
    local_68.SetLayout.SparseArrayLayout.Alignment =
         (param_2->SetLayout).SparseArrayLayout.Alignment;
    local_68.Set = param_1;
    if ((local_68.ElementProp == (FProperty *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_78.Container = &local_68;
    local_78.InternalIndex = -1;
    local_78.LogicalIndex = -1;
    TScriptContainerIterator<FScriptSetHelper>::Advance(&local_78);
    while( true ) {
      pFVar4 = local_78.Container;
      uVar7 = local_78.InternalIndex;
      pTVar1 = (local_78.Container)->Set;
      if ((local_78.InternalIndex < 0) ||
         ((pTVar1->Elements).AllocationFlags.NumBits <= local_78.InternalIndex)) break;
      if (((pTVar1->Elements).AllocationFlags.NumBits <= local_78.InternalIndex) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x8c4,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FVar8 = FVar2;
      }
      uVar9 = uVar7;
      if ((int)uVar7 < 0) {
        uVar9 = uVar7 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar8 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar7 & 0x1f) & 1) == 0)
      {
        return;
      }
      iVar5 = local_78.InternalIndex;
      pTVar1 = pFVar4->Set;
      if (((int)uVar7 < 0) || ((pTVar1->Elements).AllocationFlags.NumBits <= (int)uVar7)) {
LAB_1476acf98:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Iterator",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method.");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        if (((pTVar1->Elements).AllocationFlags.NumBits <= (int)uVar7) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x8c4,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar2 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar8 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar8 = FVar2;
        }
        uVar9 = uVar7 & 0x1f;
        if ((int)uVar7 < 0) {
          uVar7 = uVar7 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar8 + (longlong)((int)uVar7 >> 5) * 4) >> uVar9 & 1) == 0)
        goto LAB_1476acf98;
      }
      UKismetArrayLibrary::GenericArray_Add
                (param_3,param_4,
                 (void *)((longlong)(local_68.SetLayout.SparseArrayLayout.Size * iVar5) +
                         ((local_68.Set)->Elements).Data._padding_));
      TScriptContainerIterator<FScriptSetHelper>::Advance(&local_78);
    }
  }
  return;
}

// GenericSet_Union @ 1476ad040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UBlueprintSetLibrary::GenericSet_Union
          (void *param_1,FSetProperty *param_2,void *param_3,FSetProperty *param_4,void *param_5,
          FSetProperty *param_6)

{
  int iVar1;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  FScriptSetHelper *pFVar5;
  FProperty *pFVar6;
  bool bVar7;
  undefined4 *puVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStackY_198 [32];
  TScriptContainerIterator<FScriptSetHelper> local_158;
  TScriptContainerIterator<FScriptSetHelper> local_148;
  FScriptSetHelper local_138;
  FProperty *local_110;
  FProperty *local_108;
  FProperty *local_100;
  code *local_f8;
  FProperty **local_f0;
  code *local_e8;
  FProperty **local_e0;
  code *local_d8;
  FProperty **local_d0;
  code *local_c8;
  FProperty **local_c0;
  FScriptSetHelper local_b8;
  FScriptSetHelper local_90;
  FProperty *local_68;
  void *local_60;
  FScriptSparseSetLayout local_58;
  ulonglong local_40;
  
  if (((param_1 != (void *)0x0) &&
      (local_40 = __security_cookie.value ^ (ulonglong)auStackY_198, param_3 != (void *)0x0)) &&
     (param_5 != (void *)0x0)) {
    local_b8.ElementProp = param_2->ElementProp;
    local_b8.SetLayout.SparseArrayLayout.Size = (param_2->SetLayout).SparseArrayLayout.Size;
    local_b8.SetLayout.HashNextIdOffset = (param_2->SetLayout).HashNextIdOffset;
    local_b8.SetLayout.HashIndexOffset = (param_2->SetLayout).HashIndexOffset;
    local_b8.SetLayout.Size = (param_2->SetLayout).Size;
    local_b8.SetLayout.SparseArrayLayout.Alignment =
         (param_2->SetLayout).SparseArrayLayout.Alignment;
    local_b8.Set = param_1;
    if ((local_b8.ElementProp == (FProperty *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_90.ElementProp = param_4->ElementProp;
    local_90.SetLayout.SparseArrayLayout.Size = (param_4->SetLayout).SparseArrayLayout.Size;
    local_90.SetLayout.HashNextIdOffset = (param_4->SetLayout).HashNextIdOffset;
    local_90.SetLayout.HashIndexOffset = (param_4->SetLayout).HashIndexOffset;
    local_90.SetLayout.Size = (param_4->SetLayout).Size;
    local_90.SetLayout.SparseArrayLayout.Alignment =
         (param_4->SetLayout).SparseArrayLayout.Alignment;
    local_90.Set = param_3;
    if ((local_90.ElementProp == (FProperty *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_138.Set = param_5;
    local_138.ElementProp = param_6->ElementProp;
    iVar1 = (param_6->SetLayout).SparseArrayLayout.Size;
    local_138.SetLayout.HashNextIdOffset = (param_6->SetLayout).HashNextIdOffset;
    local_138.SetLayout.HashIndexOffset = (param_6->SetLayout).HashIndexOffset;
    local_138.SetLayout.Size = (param_6->SetLayout).Size;
    local_138.SetLayout.SparseArrayLayout.Alignment =
         (param_6->SetLayout).SparseArrayLayout.Alignment;
    local_138.SetLayout.SparseArrayLayout.Size = iVar1;
    if ((local_138.ElementProp == (FProperty *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar12 = *(int *)((longlong)param_5 + 8) - *(int *)((longlong)param_5 + 0x34);
    if (iVar12 != 0) {
      FScriptSetHelper::DestructItems(&local_138,0,iVar12);
      iVar12 = 0;
      *(undefined4 *)((longlong)param_5 + 8) = 0;
      if (*(int *)((longlong)param_5 + 0xc) != 0) {
        TScriptArray<TSizedDefaultAllocator<32>_>::ResizeTo
                  (param_5,0,iVar1,local_138.SetLayout.SparseArrayLayout.Alignment);
      }
      *(undefined4 *)((longlong)param_5 + 0x30) = 0xffffffff;
      *(undefined4 *)((longlong)param_5 + 0x34) = 0;
      *(undefined4 *)((longlong)param_5 + 0x28) = 0;
      if (*(int *)((longlong)param_5 + 0x2c) != 0) {
        *(undefined4 *)((longlong)param_5 + 0x2c) = 0;
        TScriptBitArray<FDefaultBitArrayAllocator,void>::Realloc
                  ((TScriptBitArray<FDefaultBitArrayAllocator,void> *)((longlong)param_5 + 0x10),0);
      }
      puVar8 = *(undefined4 **)((longlong)param_5 + 0x40);
      if (*(undefined4 **)((longlong)param_5 + 0x40) == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)((longlong)param_5 + 0x38);
      }
      if (0 < *(int *)((longlong)param_5 + 0x48)) {
        do {
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 1;
          iVar12 = iVar12 + 1;
        } while (iVar12 < *(int *)((longlong)param_5 + 0x48));
      }
    }
    local_158.Container = &local_b8;
    local_158.InternalIndex = -1;
    local_158.LogicalIndex = -1;
    TScriptContainerIterator<FScriptSetHelper>::Advance(&local_158);
    while( true ) {
      pFVar5 = local_158.Container;
      uVar9 = local_158.InternalIndex;
      pTVar2 = (local_158.Container)->Set;
      if ((local_158.InternalIndex < 0) ||
         ((pTVar2->Elements).AllocationFlags.NumBits <= local_158.InternalIndex)) break;
      if (((pTVar2->Elements).AllocationFlags.NumBits <= local_158.InternalIndex) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x8c4,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (pTVar2->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)&(pTVar2->Elements).AllocationFlags;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar3;
      }
      uVar11 = uVar9;
      if ((int)uVar9 < 0) {
        uVar11 = uVar9 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar10 + (longlong)((int)uVar11 >> 5) * 4) >> (uVar9 & 0x1f) & 1) ==
          0) break;
      iVar1 = local_158.InternalIndex;
      pTVar2 = pFVar5->Set;
      if (((int)uVar9 < 0) || ((pTVar2->Elements).AllocationFlags.NumBits <= (int)uVar9)) {
LAB_1476ad317:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Iterator",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method.");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        if (((pTVar2->Elements).AllocationFlags.NumBits <= (int)uVar9) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x8c4,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar3 = (pTVar2->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<unsigned_int>)&(pTVar2->Elements).AllocationFlags;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar3;
        }
        uVar11 = uVar9 & 0x1f;
        if ((int)uVar9 < 0) {
          uVar9 = uVar9 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar10 + (longlong)((int)uVar9 >> 5) * 4) >> uVar11 & 1) == 0)
        goto LAB_1476ad317;
      }
      FScriptSetHelper::AddElement
                (&local_138,
                 (void *)((longlong)(local_b8.SetLayout.SparseArrayLayout.Size * iVar1) +
                         ((local_b8.Set)->Elements).Data._padding_));
      TScriptContainerIterator<FScriptSetHelper>::Advance(&local_158);
    }
    local_148.Container = &local_90;
    local_148.InternalIndex = -1;
    local_148.LogicalIndex = -1;
    TScriptContainerIterator<FScriptSetHelper>::Advance(&local_148);
    pFVar6 = local_138.ElementProp;
    while( true ) {
      pFVar5 = local_148.Container;
      uVar9 = local_148.InternalIndex;
      pTVar2 = (local_148.Container)->Set;
      if ((local_148.InternalIndex < 0) ||
         ((pTVar2->Elements).AllocationFlags.NumBits <= local_148.InternalIndex)) break;
      if (((pTVar2->Elements).AllocationFlags.NumBits <= local_148.InternalIndex) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x8c4,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (pTVar2->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)&(pTVar2->Elements).AllocationFlags;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar3;
      }
      uVar11 = uVar9;
      if ((int)uVar9 < 0) {
        uVar11 = uVar9 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar10 + (longlong)((int)uVar11 >> 5) * 4) >> (uVar9 & 0x1f) & 1) ==
          0) {
        return;
      }
      iVar1 = local_148.InternalIndex;
      pTVar2 = pFVar5->Set;
      if (((int)uVar9 < 0) || ((pTVar2->Elements).AllocationFlags.NumBits <= (int)uVar9)) {
LAB_1476ad491:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Iterator",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method.");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        if (((pTVar2->Elements).AllocationFlags.NumBits <= (int)uVar9) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x8c4,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar3 = (pTVar2->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<unsigned_int>)&(pTVar2->Elements).AllocationFlags;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar3;
        }
        uVar11 = uVar9 & 0x1f;
        if ((int)uVar9 < 0) {
          uVar9 = uVar9 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar10 + (longlong)((int)uVar9 >> 5) * 4) >> uVar11 & 1) == 0)
        goto LAB_1476ad491;
      }
      local_110 = pFVar6;
      local_f8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FScriptSetHelper::AddElement'::__l2::<lambda_4>,void,void_*>::
                 Call;
      local_68 = pFVar6;
      local_58.HashNextIdOffset = local_138.SetLayout.HashNextIdOffset;
      local_58.HashIndexOffset = local_138.SetLayout.HashIndexOffset;
      local_58.Size = local_138.SetLayout.Size;
      local_58.SparseArrayLayout.Alignment = local_138.SetLayout.SparseArrayLayout.Alignment;
      local_e8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FScriptSetHelper::AddElement'::__l2::<lambda_3>,void,void_*>::
                 Call;
      local_60 = (void *)((longlong)(local_90.SetLayout.SparseArrayLayout.Size * iVar1) +
                         ((local_90.Set)->Elements).Data._padding_);
      local_f0 = &local_110;
      local_58.SparseArrayLayout.Size = local_138.SetLayout.SparseArrayLayout.Size;
      local_e0 = &local_68;
      local_d0 = &local_108;
      local_d8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FScriptSetHelper::AddElement'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
                 ::Call;
      local_c0 = &local_100;
      local_c8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FScriptSetHelper::AddElement'::__l2::<lambda_1>,unsigned_int,void_const_*>
                 ::Call;
      local_108 = pFVar6;
      local_100 = pFVar6;
      TScriptSparseSet<FDefaultSetAllocator>::Add
                (local_138.Set,local_60,&local_138.SetLayout,
                 (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_c8,
                 (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_d8,
                 (TFunctionRef<void___cdecl(void_*)> *)&local_e8,
                 (TFunctionRef<void___cdecl(void_*)> *)&local_f8);
      TScriptContainerIterator<FScriptSetHelper>::Advance(&local_148);
    }
  }
  return;
}

// GetPrivateStaticClass @ 1476b4180

UClass * __cdecl UBlueprintSetLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintSetLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintSetLibrary",
               &Z_Registration_Info_UClass_UBlueprintSetLibrary.InnerSingleton,
               StaticRegisterNativesUBlueprintSetLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintSetLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintSetLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintSetLibrary.InnerSingleton;
}

// StaticRegisterNativesUBlueprintSetLibrary @ 1476ca2e0

void __cdecl UBlueprintSetLibrary::StaticRegisterNativesUBlueprintSetLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x10;
  local_18.DataPtr = Z_Construct_UClass_UBlueprintSetLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetSetPropertyByName @ 1476d4a60

void __cdecl
UBlueprintSetLibrary::execSetSetPropertyByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  longlong lVar4;
  UObject *pUVar5;
  bool bVar6;
  void *pvVar7;
  longlong local_res10;
  UObject *local_res20;
  longlong lVar8;
  TFieldIterator<FSetProperty> local_30;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FSetProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pUVar5 = local_res20;
  lVar4 = local_res10;
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res20 != (UObject *)0x0) &&
     (local_30.Struct = *(UStruct **)&local_res20->field_0x10, local_res10 != 0)) {
    if (local_30.Struct == (UStruct *)0x0) {
      local_30.Field = (FField *)0x0;
    }
    else {
      local_30.Field = (local_30.Struct)->ChildProperties;
    }
    local_30.InterfaceIndex = -1;
    local_30.bIncludeSuper = true;
    local_30.bIncludeDeprecated = true;
    local_30.bIncludeInterface = false;
    TFieldIterator<FSetProperty>::IterateToNext(&local_30);
    pFVar2 = (FProperty *)local_30.Field;
    while (pFVar2 != (FProperty *)0x0) {
      local_30.Field = (FField *)pFVar2;
      bVar6 = IsThisNotNull(pFVar2,"FField::GetFName");
      if (bVar6) {
        lVar8 = pFVar2->_padding_;
      }
      else {
        lVar8 = 0;
      }
      if (lVar8 == lVar4) {
        if (pFVar2 == (FProperty *)0x0) {
          return;
        }
        pvVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal(pFVar2,pUVar5,0);
        (**(code **)(pFVar2->_padding_ + 0xf0))(pFVar2,pvVar7,puVar3,1,lVar8);
        return;
      }
      local_30.Field = (FField *)pFVar2->_padding_;
      TFieldIterator<FSetProperty>::IterateToNext(&local_30);
      pFVar2 = (FProperty *)local_30.Field;
    }
  }
  return;
}

// execSet_Add @ 1476d4fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl UBlueprintSetLibrary::execSet_Add(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FSetProperty *pFVar3;
  uchar *puVar4;
  FProperty *pFVar5;
  UObject *pUVar6;
  FProperty *pFVar7;
  code *pcVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *_Dst;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  undefined1 auStack_20 [8];
  
  puVar12 = auStack_48;
  local_28 = __security_cookie.value ^ (ulonglong)&local_28;
  _Dst = (undefined1 *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FSetProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar3 = (FSetProperty *)param_2->MostRecentProperty;
  puVar4 = param_2->MostRecentPropertyAddress;
  if ((pFVar3 == (FSetProperty *)0x0) ||
     ((*(ulonglong *)(pFVar3->_padding_ + 0x18) & 0x800000000000) == 0)) {
    param_2->bArrayContextFailed = true;
  }
  else {
    pFVar5 = pFVar3->ElementProp;
    iVar1 = pFVar5->ElementSize;
    iVar2 = pFVar5->ArrayDim;
    iVar9 = iVar1 * iVar2;
    puVar12 = auStack_48;
    if (iVar9 != 0) {
      uVar11 = (ulonglong)(iVar9 + 0xf);
      uVar10 = uVar11 + 0xf;
      if (uVar10 <= uVar11) {
        uVar10 = 0xffffffffffffff0;
      }
      _Dst = auStack_20 + -(uVar10 & 0xfffffffffffffff0);
      puVar12 = auStack_48 + -(uVar10 & 0xfffffffffffffff0);
    }
    if (((uint)(int)pFVar5->PropertyFlags >> 9 & 1) == 0) {
      pcVar8 = *(code **)(pFVar5->_padding_ + 0x150);
      *(undefined8 *)(puVar12 + -8) = 0x1476d50ab;
      (*pcVar8)(pFVar5,_Dst);
    }
    else {
      *(undefined8 *)(puVar12 + -8) = 0x1476d509a;
      memset(_Dst,0,(longlong)iVar1 * (longlong)iVar2);
    }
    param_2->MostRecentPropertyAddress = (uchar *)0x0;
    param_2->MostRecentPropertyContainer = (uchar *)0x0;
    *(undefined8 *)(puVar12 + -8) = 0x1476d50b8;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar7 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar7->_padding_;
      *(undefined8 *)(puVar12 + -8) = 0x1476d50e9;
      FFrame::StepExplicitProperty(param_2,_Dst,pFVar7);
    }
    else {
      pUVar6 = param_2->Object;
      *(undefined8 *)(puVar12 + -8) = 0x1476d50cd;
      FFrame::Step(param_2,pUVar6,_Dst);
    }
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    *(undefined8 *)(puVar12 + -8) = 0x1476d5109;
    GenericSet_Add(puVar4,pFVar3,_Dst);
    if ((pFVar5->PropertyFlags & CPF_NoDestructor) == CPF_None) {
      pcVar8 = *(code **)(pFVar5->_padding_ + 0x138);
      *(undefined8 *)(puVar12 + -8) = 0x1476d5128;
      (*pcVar8)(pFVar5,_Dst);
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x1476d513d;
  return;
}

// execSet_AddItems @ 1476d5160

void __cdecl UBlueprintSetLibrary::execSet_AddItems(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FSetProperty *pFVar2;
  uchar *puVar3;
  FProperty *pFVar4;
  ulonglong *puVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *pvVar12;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FSetProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar2 = (FSetProperty *)param_2->MostRecentProperty;
  puVar3 = param_2->MostRecentPropertyAddress;
  if ((pFVar2 != (FSetProperty *)0x0) &&
     ((*(ulonglong *)(pFVar2->_padding_ + 0x18) & 0x800000000000) != 0)) {
    param_2->MostRecentProperty = (FProperty *)0x0;
    FArrayProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
      FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar4);
    }
    else {
      FFrame::Step(param_2,param_2->Object,(void *)0x0);
    }
    pFVar4 = param_2->MostRecentProperty;
    puVar5 = (ulonglong *)param_2->MostRecentPropertyAddress;
    if ((pFVar4 != (FProperty *)0x0) && ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x15 & 1) != 0)) {
      param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
      if (puVar3 == (uchar *)0x0) {
        return;
      }
      if (puVar5 == (ulonglong *)0x0) {
        return;
      }
      lVar7 = pFVar4[1]._padding_;
      (**(code **)(*(longlong *)pFVar4[1]._padding_ + 0x168))();
      lVar10 = pFVar4[1]._padding_;
      iVar1 = *(int *)(lVar10 + 0x34);
      if ((iVar1 < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((lVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((int)(uint)puVar5[1] < 1) {
        return;
      }
      lVar10 = 0;
      uVar11 = (ulonglong)(uint)puVar5[1];
      do {
        if ((int)puVar5[1] == 0) {
          pvVar12 = (void *)0x0;
        }
        else {
          uVar9 = *puVar5;
          if (((lVar7 & 1) != 0) && ((uVar9 & 1) != 0)) {
            uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar5;
          }
          pvVar12 = (void *)(iVar1 * lVar10 + uVar9);
        }
        GenericSet_Add(puVar3,pFVar2,pvVar12);
        lVar10 = lVar10 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      return;
    }
  }
  param_2->bArrayContextFailed = true;
  return;
}

// execSet_Clear @ 1476d5360

void __cdecl UBlueprintSetLibrary::execSet_Clear(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TScriptSparseSet<FDefaultSetAllocator> *this;
  code *pcVar3;
  bool bVar4;
  ForElementType<FSetElementId> *pFVar5;
  int iVar6;
  int iVar7;
  FScriptSetHelper local_38;
  
  iVar6 = 0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FSetProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar2 = param_2->MostRecentProperty;
  this = (TScriptSparseSet<FDefaultSetAllocator> *)param_2->MostRecentPropertyAddress;
  if ((pFVar2 == (FProperty *)0x0) ||
     ((*(ulonglong *)(pFVar2->_padding_ + 0x18) & 0x800000000000) == 0)) {
    param_2->bArrayContextFailed = true;
  }
  else {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (this != (TScriptSparseSet<FDefaultSetAllocator> *)0x0) {
      local_38.ElementProp = (FProperty *)pFVar2[1]._padding_;
      iVar1 = (int)pFVar2[1]._padding_;
      local_38.SetLayout._0_8_ = pFVar2[1]._padding_;
      local_38.SetLayout._8_8_ = pFVar2[1]._padding_;
      local_38.Set = this;
      local_38.SetLayout.SparseArrayLayout.Size = iVar1;
      if (local_38.ElementProp == (FProperty *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar7 = (this->Elements).Data.ArrayNum - (this->Elements).NumFreeIndices;
      if (iVar7 != 0) {
        FScriptSetHelper::DestructItems(&local_38,0,iVar7);
        (this->Elements).Data.ArrayNum = 0;
        if ((this->Elements).Data.ArrayMax != 0) {
          TScriptArray<TSizedDefaultAllocator<32>_>::ResizeTo
                    ((TScriptArray<TSizedDefaultAllocator<32>_> *)this,0,iVar1,
                     local_38.SetLayout.SparseArrayLayout.Alignment);
        }
        (this->Elements).FirstFreeIndex = -1;
        (this->Elements).NumFreeIndices = 0;
        (this->Elements).AllocationFlags.NumBits = 0;
        if ((this->Elements).AllocationFlags.MaxBits != 0) {
          (this->Elements).AllocationFlags.MaxBits = 0;
          TScriptBitArray<FDefaultBitArrayAllocator,void>::Realloc
                    (&(this->Elements).AllocationFlags,0);
        }
        pFVar5 = *(ForElementType<FSetElementId> **)&(this->Hash).SecondaryData.field_0x0;
        if (pFVar5 == (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = &this->Hash;
        }
        if (0 < this->HashSize) {
          do {
            pFVar5->InlineData[0] = 0xff;
            pFVar5->InlineData[1] = 0xff;
            pFVar5->InlineData[2] = 0xff;
            pFVar5->InlineData[3] = 0xff;
            pFVar5 = (ForElementType<FSetElementId> *)&pFVar5->_padding_;
            iVar6 = iVar6 + 1;
          } while (iVar6 < this->HashSize);
          return;
        }
      }
    }
  }
  return;
}

// execSet_Contains @ 1476d54f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl UBlueprintSetLibrary::execSet_Contains(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TScriptSparseSet<FDefaultSetAllocator> *this;
  longlong *plVar2;
  UObject *pUVar3;
  FProperty *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  void *_Dst;
  undefined1 auStack_b8 [48];
  longlong local_88;
  longlong local_80;
  code *local_78;
  longlong *local_70;
  code *local_68;
  longlong *local_60;
  longlong local_58;
  TScriptSparseSet<FDefaultSetAllocator> *local_50;
  FScriptSparseSetLayout local_48;
  ulonglong local_30;
  
  puVar12 = auStack_b8;
  local_30 = __security_cookie.value ^ (ulonglong)&local_88;
  _Dst = (void *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FSetProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = param_2->MostRecentProperty;
  this = (TScriptSparseSet<FDefaultSetAllocator> *)param_2->MostRecentPropertyAddress;
  if ((pFVar1 == (FProperty *)0x0) ||
     ((*(ulonglong *)(pFVar1->_padding_ + 0x18) & 0x800000000000) == 0)) {
    param_2->bArrayContextFailed = true;
  }
  else {
    plVar2 = (longlong *)pFVar1[1]._padding_;
    iVar9 = *(int *)((longlong)plVar2 + 0x34);
    lVar6 = plVar2[6];
    iVar8 = iVar9 * (int)lVar6;
    puVar12 = auStack_b8;
    if (iVar8 != 0) {
      uVar11 = (ulonglong)(iVar8 + 0xf);
      uVar10 = uVar11 + 0xf;
      if (uVar10 <= uVar11) {
        uVar10 = 0xffffffffffffff0;
      }
      _Dst = (void *)((longlong)&local_80 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_b8 + -(uVar10 & 0xfffffffffffffff0);
    }
    if ((*(uint *)(plVar2 + 7) >> 9 & 1) == 0) {
      pcVar5 = *(code **)(*plVar2 + 0x150);
      *(undefined8 *)(puVar12 + -8) = 0x1476d560a;
      (*pcVar5)(plVar2,_Dst);
    }
    else {
      *(undefined8 *)(puVar12 + -8) = 0x1476d55f9;
      memset(_Dst,0,(longlong)iVar9 * (longlong)(int)lVar6);
    }
    param_2->MostRecentPropertyAddress = (uchar *)0x0;
    param_2->MostRecentPropertyContainer = (uchar *)0x0;
    *(undefined8 *)(puVar12 + -8) = 0x1476d5617;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
      *(undefined8 *)(puVar12 + -8) = 0x1476d5648;
      FFrame::StepExplicitProperty(param_2,_Dst,pFVar4);
    }
    else {
      pUVar3 = param_2->Object;
      *(undefined8 *)(puVar12 + -8) = 0x1476d562c;
      FFrame::Step(param_2,pUVar3,_Dst);
    }
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (this == (TScriptSparseSet<FDefaultSetAllocator> *)0x0) {
      bVar7 = false;
    }
    else {
      lVar6 = pFVar1[1]._padding_;
      local_58 = lVar6;
      local_50 = this;
      local_48.SparseArrayLayout.Size = (int)pFVar1[1]._padding_;
      local_48._0_8_ = pFVar1[1]._padding_;
      local_48._8_8_ = pFVar1[1]._padding_;
      if (lVar6 == 0) {
        *(undefined8 *)(puVar12 + -8) = 0x1476d56a7;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_88 = lVar6;
      local_70 = &local_88;
      local_80 = lVar6;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FScriptSetHelper::FindElementIndexFromHash'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
                 ::Call;
      local_60 = &local_80;
      local_68 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FScriptSetHelper::FindElementIndexFromHash'::__l2::<lambda_1>,unsigned_int,void_const_*>
                 ::Call;
      *(code ***)(puVar12 + 0x20) = &local_78;
      *(undefined8 *)(puVar12 + -8) = 0x1476d56ff;
      iVar9 = TScriptSparseSet<FDefaultSetAllocator>::FindIndex
                        (this,_Dst,&local_48,
                         (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_68,
                         *(TFunctionRef<bool___cdecl(void_const_*,void_const_*)> **)(puVar12 + 0x20)
                        );
      bVar7 = iVar9 != -1;
    }
    *(bool *)param_3 = bVar7;
    if ((plVar2[7] & 0x1000000000U) == 0) {
      pcVar5 = *(code **)(*plVar2 + 0x138);
      *(undefined8 *)(puVar12 + -8) = 0x1476d572c;
      (*pcVar5)(plVar2,_Dst);
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x1476d5741;
  return;
}

// execSet_Difference @ 1476d5770

void __cdecl
UBlueprintSetLibrary::execSet_Difference(UObject *param_1,FFrame *param_2,void *param_3)

{
  FSetProperty *pFVar1;
  uchar *puVar2;
  FSetProperty *pFVar3;
  uchar *puVar4;
  FProperty *pFVar5;
  FSetProperty *pFVar6;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FSetProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = (FSetProperty *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 != (FSetProperty *)0x0) &&
     ((*(ulonglong *)(pFVar1->_padding_ + 0x18) & 0x800000000000) != 0)) {
    param_2->MostRecentProperty = (FProperty *)0x0;
    FSetProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
      FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
    }
    else {
      FFrame::Step(param_2,param_2->Object,(void *)0x0);
    }
    pFVar3 = (FSetProperty *)param_2->MostRecentProperty;
    puVar4 = param_2->MostRecentPropertyAddress;
    if ((pFVar3 != (FSetProperty *)0x0) &&
       ((*(ulonglong *)(pFVar3->_padding_ + 0x18) & 0x800000000000) != 0)) {
      param_2->MostRecentProperty = (FProperty *)0x0;
      FSetProperty::StaticClass();
      if (param_2->Code == (uchar *)0x0) {
        pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
        param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
        FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
      }
      else {
        FFrame::Step(param_2,param_2->Object,(void *)0x0);
      }
      pFVar6 = (FSetProperty *)param_2->MostRecentProperty;
      if ((pFVar6 != (FSetProperty *)0x0) &&
         ((*(ulonglong *)(pFVar6->_padding_ + 0x18) & 0x800000000000) != 0)) {
        param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
        GenericSet_Difference(puVar2,pFVar1,puVar4,pFVar3,param_2->MostRecentPropertyAddress,pFVar6)
        ;
        return;
      }
    }
  }
  param_2->bArrayContextFailed = true;
  return;
}

// execSet_GetItemByIndex @ 1476d58f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
UBlueprintSetLibrary::execSet_GetItemByIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FSetProperty *pFVar3;
  uchar *puVar4;
  FProperty *pFVar5;
  UObject *pUVar6;
  FProperty *pFVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  uchar *_Dst;
  uchar *puVar15;
  int iVar16;
  undefined1 auStack_58 [32];
  int local_38 [2];
  ulonglong local_30;
  
  puVar14 = auStack_58;
  local_30 = __security_cookie.value ^ (ulonglong)local_38;
  _Dst = (uchar *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FSetProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar3 = (FSetProperty *)param_2->MostRecentProperty;
  puVar4 = param_2->MostRecentPropertyAddress;
  if ((pFVar3 == (FSetProperty *)0x0) ||
     ((*(ulonglong *)(pFVar3->_padding_ + 0x18) & 0x800000000000) == 0)) {
    param_2->bArrayContextFailed = true;
    goto LAB_1476d5b54;
  }
  local_38[0] = 0;
  FIntProperty::StaticClass();
  puVar14 = auStack_58;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  pFVar5 = pFVar3->ElementProp;
  iVar1 = pFVar5->ElementSize;
  iVar2 = pFVar5->ArrayDim;
  iVar16 = iVar1 * iVar2;
  if (iVar16 != 0) {
    uVar12 = (longlong)(iVar16 + 0xf) + 0xf;
    if (uVar12 <= (ulonglong)(longlong)(iVar16 + 0xf)) {
      uVar12 = 0xffffffffffffff0;
    }
    puVar14 = auStack_58 + -(uVar12 & 0xfffffffffffffff0);
    _Dst = (uchar *)((longlong)&local_30 + -(uVar12 & 0xfffffffffffffff0));
  }
  if (((uint)(int)pFVar5->PropertyFlags >> 9 & 1) == 0) {
    pcVar9 = *(code **)(pFVar5->_padding_ + 0x150);
    *(undefined8 *)(puVar14 + -8) = 0x1476d5a3d;
    (*pcVar9)(pFVar5,_Dst);
  }
  else {
    *(undefined8 *)(puVar14 + -8) = 0x1476d5a2b;
    memset(_Dst,0,(longlong)iVar1 * (longlong)iVar2);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  *(undefined8 *)(puVar14 + -8) = 0x1476d5a4a;
  FProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar7->_padding_;
    *(undefined8 *)(puVar14 + -8) = 0x1476d5a7b;
    FFrame::StepExplicitProperty(param_2,_Dst,pFVar7);
  }
  else {
    pUVar6 = param_2->Object;
    *(undefined8 *)(puVar14 + -8) = 0x1476d5a5f;
    FFrame::Step(param_2,pUVar6,_Dst);
  }
  iVar1 = local_38[0];
  pFVar7 = param_2->MostRecentProperty;
  puVar15 = param_2->MostRecentPropertyAddress;
  lVar13 = pFVar5->_padding_;
  lVar8 = pFVar7->_padding_;
  if ((puVar15 == (uchar *)0x0) || (iVar16 != pFVar7->ElementSize * pFVar7->ArrayDim)) {
LAB_1476d5b06:
    puVar15 = _Dst;
  }
  else {
    lVar11 = lVar8;
    if (*(ulonglong *)(lVar13 + 0x10) == 0) {
      for (; bVar10 = false, lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x20)) {
        if (lVar11 == lVar13) {
          bVar10 = true;
          break;
        }
      }
    }
    else {
      bVar10 = (*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar13 + 0x10)) != 0;
    }
    if (!bVar10) {
      if (*(ulonglong *)(lVar8 + 0x10) == 0) {
        do {
          bVar10 = true;
          if (lVar13 == lVar8) break;
          lVar13 = *(longlong *)(lVar13 + 0x20);
          bVar10 = false;
        } while (lVar13 != 0);
      }
      else {
        bVar10 = (*(ulonglong *)(lVar13 + 0x18) & *(ulonglong *)(lVar8 + 0x10)) != 0;
      }
      if (!bVar10) goto LAB_1476d5b06;
    }
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)(puVar14 + -8) = 0x1476d5b2a;
  GenericSet_GetItemByIndex(puVar4,pFVar3,iVar1,puVar15);
  if ((pFVar5->PropertyFlags & CPF_NoDestructor) == CPF_None) {
    pcVar9 = *(code **)(pFVar5->_padding_ + 0x138);
    *(undefined8 *)(puVar14 + -8) = 0x1476d5b4b;
    (*pcVar9)(pFVar5,_Dst);
  }
LAB_1476d5b54:
  *(undefined8 *)(puVar14 + -8) = 0x1476d5b60;
  return;
}

// execSet_GetLastIndex @ 1476d5b80

void __cdecl
UBlueprintSetLibrary::execSet_GetLastIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = 0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FSetProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 == (FProperty *)0x0) ||
     ((*(ulonglong *)(pFVar1->_padding_ + 0x18) & 0x800000000000) == 0)) {
    param_2->bArrayContextFailed = true;
  }
  else {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (puVar2 != (uchar *)0x0) {
      if (pFVar1[1]._padding_ == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (*(int *)(puVar2 + 8) - *(int *)(puVar2 + 0x34)) + -1;
    }
    *(int *)param_3 = iVar5;
  }
  return;
}

// execSet_Intersection @ 1476d5c70

void __cdecl
UBlueprintSetLibrary::execSet_Intersection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FSetProperty *pFVar1;
  uchar *puVar2;
  FSetProperty *pFVar3;
  uchar *puVar4;
  FProperty *pFVar5;
  FSetProperty *pFVar6;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FSetProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = (FSetProperty *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 != (FSetProperty *)0x0) &&
     ((*(ulonglong *)(pFVar1->_padding_ + 0x18) & 0x800000000000) != 0)) {
    param_2->MostRecentProperty = (FProperty *)0x0;
    FSetProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
      FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
    }
    else {
      FFrame::Step(param_2,param_2->Object,(void *)0x0);
    }
    pFVar3 = (FSetProperty *)param_2->MostRecentProperty;
    puVar4 = param_2->MostRecentPropertyAddress;
    if ((pFVar3 != (FSetProperty *)0x0) &&
       ((*(ulonglong *)(pFVar3->_padding_ + 0x18) & 0x800000000000) != 0)) {
      param_2->MostRecentProperty = (FProperty *)0x0;
      FSetProperty::StaticClass();
      if (param_2->Code == (uchar *)0x0) {
        pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
        param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
        FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
      }
      else {
        FFrame::Step(param_2,param_2->Object,(void *)0x0);
      }
      pFVar6 = (FSetProperty *)param_2->MostRecentProperty;
      if ((pFVar6 != (FSetProperty *)0x0) &&
         ((*(ulonglong *)(pFVar6->_padding_ + 0x18) & 0x800000000000) != 0)) {
        param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
        GenericSet_Intersect(puVar2,pFVar1,puVar4,pFVar3,param_2->MostRecentPropertyAddress,pFVar6);
        return;
      }
    }
  }
  param_2->bArrayContextFailed = true;
  return;
}

// execSet_IsEmpty @ 1476d5df0

void __cdecl UBlueprintSetLibrary::execSet_IsEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FSetProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 == (FProperty *)0x0) ||
     ((*(ulonglong *)(pFVar1->_padding_ + 0x18) & 0x800000000000) == 0)) {
    param_2->bArrayContextFailed = true;
  }
  else {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (puVar2 == (uchar *)0x0) {
      *(undefined1 *)param_3 = 1;
    }
    else {
      if (pFVar1[1]._padding_ == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(bool *)param_3 = *(int *)(puVar2 + 8) == *(int *)(puVar2 + 0x34);
    }
  }
  return;
}

// execSet_IsNotEmpty @ 1476d5ef0

void __cdecl
UBlueprintSetLibrary::execSet_IsNotEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FSetProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 == (FProperty *)0x0) ||
     ((*(ulonglong *)(pFVar1->_padding_ + 0x18) & 0x800000000000) == 0)) {
    param_2->bArrayContextFailed = true;
  }
  else {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (puVar2 == (uchar *)0x0) {
      *(undefined1 *)param_3 = 0;
    }
    else {
      if (pFVar1[1]._padding_ == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(bool *)param_3 = 0 < *(int *)(puVar2 + 8) - *(int *)(puVar2 + 0x34);
    }
  }
  return;
}

// execSet_Length @ 1476d5ff0

void __cdecl UBlueprintSetLibrary::execSet_Length(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = 0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FSetProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 == (FProperty *)0x0) ||
     ((*(ulonglong *)(pFVar1->_padding_ + 0x18) & 0x800000000000) == 0)) {
    param_2->bArrayContextFailed = true;
  }
  else {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (puVar2 != (uchar *)0x0) {
      if (pFVar1[1]._padding_ == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = *(int *)(puVar2 + 8) - *(int *)(puVar2 + 0x34);
    }
    *(int *)param_3 = iVar5;
  }
  return;
}

// execSet_Remove @ 1476d60e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl UBlueprintSetLibrary::execSet_Remove(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar3;
  longlong *plVar4;
  UObject *pUVar5;
  FProperty *pFVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  void *_Dst;
  undefined1 auStack_78 [32];
  FScriptSetHelper local_58;
  ulonglong local_30;
  
  puVar13 = auStack_78;
  local_30 = __security_cookie.value ^ (ulonglong)&local_58;
  _Dst = (void *)0x0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FSetProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar2 = param_2->MostRecentProperty;
  pTVar3 = (TScriptSparseSet<FDefaultSetAllocator> *)param_2->MostRecentPropertyAddress;
  if ((pFVar2 == (FProperty *)0x0) ||
     ((*(ulonglong *)(pFVar2->_padding_ + 0x18) & 0x800000000000) == 0)) {
    param_2->bArrayContextFailed = true;
  }
  else {
    plVar4 = (longlong *)pFVar2[1]._padding_;
    iVar1 = *(int *)((longlong)plVar4 + 0x34);
    lVar8 = plVar4[6];
    iVar10 = iVar1 * (int)lVar8;
    puVar13 = auStack_78;
    if (iVar10 != 0) {
      uVar12 = (ulonglong)(iVar10 + 0xf);
      uVar11 = uVar12 + 0xf;
      if (uVar11 <= uVar12) {
        uVar11 = 0xffffffffffffff0;
      }
      _Dst = (void *)((longlong)&local_58 + -(uVar11 & 0xfffffffffffffff0) + 8);
      puVar13 = auStack_78 + -(uVar11 & 0xfffffffffffffff0);
    }
    if ((*(uint *)(plVar4 + 7) >> 9 & 1) == 0) {
      pcVar7 = *(code **)(*plVar4 + 0x150);
      *(undefined8 *)(puVar13 + -8) = 0x1476d61ee;
      (*pcVar7)(plVar4,_Dst);
    }
    else {
      *(undefined8 *)(puVar13 + -8) = 0x1476d61dd;
      memset(_Dst,0,(longlong)iVar1 * (longlong)(int)lVar8);
    }
    param_2->MostRecentPropertyAddress = (uchar *)0x0;
    *(undefined8 *)(puVar13 + -8) = 0x1476d61f7;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
      *(undefined8 *)(puVar13 + -8) = 0x1476d6228;
      FFrame::StepExplicitProperty(param_2,_Dst,pFVar6);
    }
    else {
      pUVar5 = param_2->Object;
      *(undefined8 *)(puVar13 + -8) = 0x1476d620c;
      FFrame::Step(param_2,pUVar5,_Dst);
    }
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    if (pTVar3 == (TScriptSparseSet<FDefaultSetAllocator> *)0x0) {
      bVar9 = false;
    }
    else {
      local_58.ElementProp = (FProperty *)pFVar2[1]._padding_;
      local_58.SetLayout.SparseArrayLayout.Size = (int)pFVar2[1]._padding_;
      local_58.SetLayout._0_8_ = pFVar2[1]._padding_;
      local_58.SetLayout._8_8_ = pFVar2[1]._padding_;
      local_58.Set = pTVar3;
      if (local_58.ElementProp == (FProperty *)0x0) {
        *(undefined8 *)(puVar13 + -8) = 0x1476d6283;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      *(undefined8 *)(puVar13 + -8) = 0x1476d6295;
      bVar9 = FScriptSetHelper::RemoveElement(&local_58,_Dst);
    }
    *(bool *)param_3 = bVar9;
    if ((plVar4[7] & 0x1000000000U) == 0) {
      pcVar7 = *(code **)(*plVar4 + 0x138);
      *(undefined8 *)(puVar13 + -8) = 0x1476d62bc;
      (*pcVar7)(plVar4,_Dst);
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x1476d62d1;
  return;
}

// execSet_RemoveItems @ 1476d6300

void __cdecl
UBlueprintSetLibrary::execSet_RemoveItems(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar3;
  FProperty *pFVar4;
  ulonglong *puVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  ulonglong uVar10;
  void *pvVar11;
  longlong lVar12;
  ulonglong uVar13;
  FScriptSetHelper local_58;
  
  lVar12 = 0;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FSetProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar2 = param_2->MostRecentProperty;
  pTVar3 = (TScriptSparseSet<FDefaultSetAllocator> *)param_2->MostRecentPropertyAddress;
  if ((pFVar2 != (FProperty *)0x0) &&
     ((*(ulonglong *)(pFVar2->_padding_ + 0x18) & 0x800000000000) != 0)) {
    param_2->MostRecentProperty = (FProperty *)0x0;
    FArrayProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
      FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar4);
    }
    else {
      FFrame::Step(param_2,param_2->Object,(void *)0x0);
    }
    pFVar4 = param_2->MostRecentProperty;
    puVar5 = (ulonglong *)param_2->MostRecentPropertyAddress;
    if ((pFVar4 != (FProperty *)0x0) && ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x15 & 1) != 0)) {
      param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
      if (pTVar3 == (TScriptSparseSet<FDefaultSetAllocator> *)0x0) {
        return;
      }
      if (puVar5 == (ulonglong *)0x0) {
        return;
      }
      lVar8 = pFVar4[1]._padding_;
      (**(code **)(*(longlong *)pFVar4[1]._padding_ + 0x168))();
      lVar6 = pFVar4[1]._padding_;
      iVar1 = *(int *)(lVar6 + 0x34);
      if ((iVar1 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((lVar6 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((int)(uint)puVar5[1] < 1) {
        return;
      }
      uVar13 = (ulonglong)(uint)puVar5[1];
      while( true ) {
        if ((int)puVar5[1] == 0) {
          pvVar11 = (void *)0x0;
        }
        else {
          uVar10 = *puVar5;
          if (((lVar8 & 1) != 0) && ((uVar10 & 1) != 0)) {
            uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)puVar5;
          }
          pvVar11 = (void *)(iVar1 * lVar12 + uVar10);
        }
        local_58.ElementProp = (FProperty *)pFVar2[1]._padding_;
        local_58.SetLayout.SparseArrayLayout.Size = (int)pFVar2[1]._padding_;
        local_58.SetLayout._0_8_ = pFVar2[1]._padding_;
        local_58.SetLayout._8_8_ = pFVar2[1]._padding_;
        local_58.Set = pTVar3;
        if ((local_58.ElementProp == (FProperty *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ElementProp",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1653,L""), bVar9)) break;
        FScriptSetHelper::RemoveElement(&local_58,pvVar11);
        lVar12 = lVar12 + 1;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          return;
        }
      }
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  param_2->bArrayContextFailed = true;
  return;
}

// execSet_ToArray @ 1476d6560

void __cdecl UBlueprintSetLibrary::execSet_ToArray(UObject *param_1,FFrame *param_2,void *param_3)

{
  FSetProperty *pFVar1;
  uchar *puVar2;
  FProperty *pFVar3;
  FArrayProperty *pFVar4;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FSetProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = (FSetProperty *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 != (FSetProperty *)0x0) &&
     ((*(ulonglong *)(pFVar1->_padding_ + 0x18) & 0x800000000000) != 0)) {
    param_2->MostRecentProperty = (FProperty *)0x0;
    FArrayProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
      FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
    }
    else {
      FFrame::Step(param_2,param_2->Object,(void *)0x0);
    }
    pFVar4 = (FArrayProperty *)param_2->MostRecentProperty;
    if ((pFVar4 != (FArrayProperty *)0x0) &&
       ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x15 & 1) != 0)) {
      param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
      GenericSet_ToArray(puVar2,pFVar1,param_2->MostRecentPropertyAddress,pFVar4);
      return;
    }
  }
  param_2->bArrayContextFailed = true;
  return;
}

// execSet_Union @ 1476d6670

void __cdecl UBlueprintSetLibrary::execSet_Union(UObject *param_1,FFrame *param_2,void *param_3)

{
  FSetProperty *pFVar1;
  uchar *puVar2;
  FSetProperty *pFVar3;
  uchar *puVar4;
  FProperty *pFVar5;
  FSetProperty *pFVar6;
  
  param_2->MostRecentProperty = (FProperty *)0x0;
  FSetProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar1 = (FSetProperty *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar1 != (FSetProperty *)0x0) &&
     ((*(ulonglong *)(pFVar1->_padding_ + 0x18) & 0x800000000000) != 0)) {
    param_2->MostRecentProperty = (FProperty *)0x0;
    FSetProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
      param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
      FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
    }
    else {
      FFrame::Step(param_2,param_2->Object,(void *)0x0);
    }
    pFVar3 = (FSetProperty *)param_2->MostRecentProperty;
    puVar4 = param_2->MostRecentPropertyAddress;
    if ((pFVar3 != (FSetProperty *)0x0) &&
       ((*(ulonglong *)(pFVar3->_padding_ + 0x18) & 0x800000000000) != 0)) {
      param_2->MostRecentProperty = (FProperty *)0x0;
      FSetProperty::StaticClass();
      if (param_2->Code == (uchar *)0x0) {
        pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
        param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
        FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
      }
      else {
        FFrame::Step(param_2,param_2->Object,(void *)0x0);
      }
      pFVar6 = (FSetProperty *)param_2->MostRecentProperty;
      if ((pFVar6 != (FSetProperty *)0x0) &&
         ((*(ulonglong *)(pFVar6->_padding_ + 0x18) & 0x800000000000) != 0)) {
        param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
        GenericSet_Union(puVar2,pFVar1,puVar4,pFVar3,param_2->MostRecentPropertyAddress,pFVar6);
        return;
      }
    }
  }
  param_2->bArrayContextFailed = true;
  return;
}

