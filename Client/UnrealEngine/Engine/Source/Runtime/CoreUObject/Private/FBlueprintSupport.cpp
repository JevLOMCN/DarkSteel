// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 19

// DuplicateAllFields @ 141e971f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl FBlueprintSupport::DuplicateAllFields(UStruct *param_1,FDuplicateDataWriter *param_2)

{
  int iVar1;
  TObjectPtr<UField>_u_0 TVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  TObjectPtr<UField>_u_0 TVar5;
  TObjectPtr<UField>_u_0 local_38;
  UObject *local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  TFieldIterator<UField> local_20;
  
  if (param_1 != (UStruct *)0x0) {
    local_20.Field = (param_1->Children).field0_0x0.DebugPtr;
    local_20.InterfaceIndex = -1;
    local_20.bIncludeSuper = false;
    local_20.bIncludeDeprecated = true;
    local_20.bIncludeInterface = false;
    local_20.Struct = param_1;
    TFieldIterator<UField>::IterateToNext(&local_20);
    TVar2.DebugPtr = local_20.Field;
    while (TVar2.DebugPtr != (UField *)0x0) {
      local_20.Field = TVar2.DebugPtr;
      pUVar4 = Z_Construct_UClass_UFunction_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)((TVar2.DebugPtr)->_padding_ + 0x38) < iVar1) ||
         (TVar5 = TVar2,
         (longlong *)
         *(undefined1 **)(*(longlong *)((TVar2.DebugPtr)->_padding_ + 0x30) + (longlong)iVar1 * 8)
         != &pUVar4->_padding_)) {
        TVar5.DebugPtr = (UField *)0x0;
      }
      if (TVar5.DebugPtr != (UField *)0x0) {
        local_30 = (UObject *)TVar5.DebugPtr[1]._padding_;
        local_28 = 0xffffffff;
        local_24 = 0x100;
        local_22 = 0;
        local_38 = TVar5;
        TFieldIterator<UField>::IterateToNext((TFieldIterator<UField> *)&local_38.ObjectPtr);
        pUVar3 = local_30;
        while (local_30 = pUVar3, pUVar3 != (UObject *)0x0) {
          FDuplicateDataWriter::GetDuplicatedObject(param_2,pUVar3,true);
          local_30 = *(UObject **)(pUVar3 + 1);
          TFieldIterator<UField>::IterateToNext((TFieldIterator<UField> *)&local_38.ObjectPtr);
          pUVar3 = local_30;
        }
      }
      FDuplicateDataWriter::GetDuplicatedObject(param_2,(UObject *)TVar2.DebugPtr,true);
      local_20.Field = ((TVar2.DebugPtr)->Next).field0_0x0.DebugPtr;
      TFieldIterator<UField>::IterateToNext(&local_20);
      TVar2.DebugPtr = local_20.Field;
    }
  }
  return;
}

// FlushCompilationQueue @ 141e9e210

void __cdecl FBlueprintSupport::FlushCompilationQueue(FUObjectSerializeContext *param_1)

{
  if (FlushCompilationQueueFPtr != (_func___cdecl_void_FUObjectSerializeContext_ptr *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141e9e21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*FlushCompilationQueueFPtr)(param_1);
    return;
  }
  return;
}

// FlushReinstancingQueue @ 141e9e230

void __cdecl FBlueprintSupport::FlushReinstancingQueue(void)

{
  if (FlushReinstancingQueueFPtr != (_func___cdecl_void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141e9e23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*FlushReinstancingQueueFPtr)();
    return;
  }
  return;
}

// GetBlueprintWarnings @ 141e9f610

TArray<FBlueprintWarningDeclaration,TSizedDefaultAllocator<32>_> * __cdecl
FBlueprintSupport::GetBlueprintWarnings(void)

{
  return &BlueprintWarnings;
}

// IsClassPlaceholder @ 141ea8d90

bool __cdecl FBlueprintSupport::IsClassPlaceholder(UClass *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  while( true ) {
    if (param_1 == (UClass *)0x0) {
      return false;
    }
    pUVar2 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) break;
    param_1 = (UClass *)param_1->_padding_;
  }
  return true;
}

// IsDeferredCDOInitializationDisabled @ 141ea8df0

bool __cdecl FBlueprintSupport::IsDeferredCDOInitializationDisabled(void)

{
  bool bVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FBoolConfigValueHelper::FBoolConfigValueHelper
                (&NoDeferredCDOInit,L"Kismet",L"bForceDisableDeferredCDOInitialization",&GEngineIni)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  bVar1 = UseDeferredDependencyLoading();
  if ((bVar1) && (NoDeferredCDOInit.bValue == false)) {
    return false;
  }
  return true;
}

// IsDeferredDependencyPlaceholder @ 141ea8e90

bool __cdecl FBlueprintSupport::IsDeferredDependencyPlaceholder(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 == (UObject *)0x0) {
    return false;
  }
  pUVar2 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar2->_padding_)) {
    pUVar2 = Z_Construct_UClass_ULinkerPlaceholderFunction_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) {
      pUVar2 = Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) {
        return false;
      }
      if ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_) {
        return false;
      }
    }
  }
  return true;
}

// IsDeferredExportCreationDisabled @ 141ea8f20

bool __cdecl FBlueprintSupport::IsDeferredExportCreationDisabled(void)

{
  bool bVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FBoolConfigValueHelper::FBoolConfigValueHelper
                (&NoDeferredExports,L"Kismet",L"bForceDisableDeferredExportCreation",&GEngineIni);
      _Init_thread_footer(&::_TSS0);
    }
  }
  bVar1 = UseDeferredDependencyLoading();
  if ((bVar1) && (NoDeferredExports.bValue == false)) {
    return false;
  }
  return true;
}

// IsInBlueprintPackage @ 141ea9700

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __cdecl FBlueprintSupport::IsInBlueprintPackage(UObject *param_1)

{
  UPackage *pUVar1;
  undefined1 local_res10 [8];
  undefined1 *local_res18 [2];
  code *local_18;
  undefined1 **local_10;
  
  local_res10[0] = 0;
  pUVar1 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  if ((pUVar1 != (UPackage *)0x0) && (((uint)pUVar1->PackageFlagsPrivate & 0x10) == 0)) {
    local_res18[0] = local_res10;
    local_10 = local_res18;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBlueprintSupport::IsInBlueprintPackage'::__l5::<lambda_1>,bool,UObject_*>
               ::Call;
    ForEachObjectWithOuterBreakable
              ((UObjectBase *)pUVar1,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_18,false,
               RF_NoFlags,Borrowed);
  }
  return (bool)local_res10[0];
}

// RegisterBlueprintWarning @ 141eb1860

void __cdecl FBlueprintSupport::RegisterBlueprintWarning(FBlueprintWarningDeclaration *param_1)

{
  FName *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  
  if (((BlueprintWarnings.AllocatorInstance.Data <= param_1) &&
      (param_1 < (FBlueprintWarningDeclaration *)
                 (BlueprintWarnings.AllocatorInstance.Data +
                 (longlong)BlueprintWarnings.ArrayMax * 0x18))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (BlueprintWarnings.ArrayNum == BlueprintWarnings.ArrayMax) {
    BlueprintWarnings.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&BlueprintWarnings.AllocatorInstance,&BlueprintWarnings.ArrayMax);
  }
  pFVar1 = (FName *)(BlueprintWarnings.AllocatorInstance.Data +
                    (longlong)BlueprintWarnings.ArrayNum * 0x18);
  BlueprintWarnings.ArrayNum = BlueprintWarnings.ArrayNum + 1;
  *pFVar1 = param_1->WarningIdentifier;
  pFVar1[1].ComparisonIndex = 0;
  pFVar1[1].Number = 0;
  FVar2 = (FName)(param_1->WarningDescription).TextData.Reference;
  pFVar1[1] = FVar2;
  if (FVar2 != (FName)0x0) {
    (**(code **)(*(longlong *)FVar2 + 8))(FVar2,local_res8);
  }
  pFVar1[2].ComparisonIndex.Value = (param_1->WarningDescription).Flags;
  return;
}

// RepairDeferredDependenciesInObject @ 141eb5e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FBlueprintSupport::RepairDeferredDependenciesInObject(UObject *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  FObjectPropertyBase *this;
  undefined8 *puVar3;
  UObjectBaseUtility *this_00;
  FAdditionalInfo *pFVar4;
  FLinkerLoad *pFVar5;
  UObject *pUVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FFieldClass *pFVar10;
  TTuple<FProperty_const_*,void_const_*> *pTVar11;
  UClass *pUVar12;
  UPackage *pUVar13;
  ForAnyElementType FVar14;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar15;
  uint uVar16;
  longlong lVar17;
  UObjectBaseUtility *pUVar18;
  undefined1 auStackY_868 [32];
  FString local_830;
  FName local_820;
  FName local_818;
  FName local_810;
  FName local_808;
  FName local_800;
  FName local_7f8;
  FName local_7f0;
  FName local_7e8;
  FString local_7e0;
  FString local_7d0;
  FString local_7c0;
  FString local_7b0;
  FString local_7a0;
  FString local_790;
  FString local_780;
  FString local_770;
  FPropertyValueIterator local_760;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_868;
  pUVar2 = *(UStruct **)&param_1->field_0x10;
  pFVar10 = FObjectProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_760,pFVar10,pUVar2,param_1,FullRecursion,IncludeDeprecated);
  do {
    if (local_760.PropertyIteratorStack.ArrayNum < 1) {
      FVar15 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_760;
      if (local_760.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar15 = local_760.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar15,local_760.PropertyIteratorStack.ArrayNum);
      if (local_760.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_760.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
      return;
    }
    pTVar11 = FPropertyValueIterator::operator->(&local_760);
    this = *(FObjectPropertyBase **)pTVar11;
    pTVar11 = FPropertyValueIterator::operator->(&local_760);
    puVar3 = *(undefined8 **)&pTVar11->field_0x8;
    this_00 = (UObjectBaseUtility *)*puVar3;
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar12 = Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister();
      iVar1 = (int)pUVar12->_padding_;
      if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar12->_padding_)) {
        if (this_00 != (UObjectBaseUtility *)0x0) {
          pUVar12 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
          iVar1 = (int)pUVar12->_padding_;
          if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar12->_padding_)) {
            pUVar18 = this_00 + 0xd;
            goto LAB_141eb5f1b;
          }
        }
      }
      else {
        pUVar18 = this_00 + 1;
LAB_141eb5f1b:
        if (pUVar18 != (UObjectBaseUtility *)0x0) {
          if (2 < (byte)LogBlueprintSupport._0_1_) {
            bVar8 = IsThisNotNull(this,"FField::GetName");
            if (bVar8) {
              ::FName::ToString((FName *)&this->_padding_,&local_830);
            }
            else {
              ::FString::FString(&local_830,L"None");
            }
            local_820.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
            local_820.Number = *(uint *)&this_00->field_0x1c;
            ::FName::ToString(&local_820,&local_7c0);
            local_818 = *(FName *)(*(longlong *)&this_00->field_0x10 + 0x18);
            ::FName::ToString(&local_818,&local_7d0);
            local_810.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
            local_810.Number = *(uint *)&param_1->field_0x1c;
            ::FName::ToString(&local_810,&local_7e0);
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogBlueprintSupport);
            if (local_7e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7e0.Data.AllocatorInstance.Data);
            }
            if (local_7d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7d0.Data.AllocatorInstance.Data);
            }
            if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
            }
            if (local_830.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_830.Data.AllocatorInstance.Data);
            }
          }
          if ((((*(int *)&pUVar18->field_0x8 == 0) ||
               (pUVar13 = UObjectBaseUtility::GetPackage(this_00), pUVar13 == (UPackage *)0x0)) ||
              (pFVar4 = (pUVar13->AdditionalInfo).Ptr, pFVar4 == (FAdditionalInfo *)0x0)) ||
             (pFVar5 = pFVar4->LinkerLoad, pFVar5 == (FLinkerLoad *)0x0)) {
LAB_141eb61f8:
            if ((byte)LogBlueprintSupport._0_1_ < 2) goto LAB_141eb6283;
            local_7f0.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
            local_7f0.Number = *(uint *)&this_00->field_0x1c;
            ::FName::ToString(&local_7f0,&local_770);
            local_7e8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
            local_7e8.Number = *(uint *)&param_1->field_0x1c;
            ::FName::ToString(&local_7e8,&local_780);
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogBlueprintSupport);
            FVar14.Data = local_770.Data.AllocatorInstance.Data;
            if (local_780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_780.Data.AllocatorInstance.Data);
              FVar14.Data = local_770.Data.AllocatorInstance.Data;
            }
          }
          else {
            if ((-1 < *(int *)&pUVar18->field_0x8) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsImport()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                   ,0x55,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar16 = ~*(uint *)&pUVar18->field_0x8;
            uVar9 = 0;
            if ((int)uVar16 < (int)pFVar5->_padding_) {
              uVar9 = *(uint *)&pUVar18->field_0x8 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar17 = (longlong)(int)uVar16 * 0x38 + pFVar5->_padding_;
            pUVar6 = *(UObject **)(lVar17 + 0x28);
            if ((pUVar6 == (UObject *)0x0) || (pUVar6 == (UObject *)this_00)) goto LAB_141eb61f8;
            FObjectPropertyBase::SetObjectPropertyValue(this,(void *)*puVar3,pUVar6);
            if ((byte)LogBlueprintSupport._0_1_ < 4) goto LAB_141eb6283;
            local_808 = *(FName *)(*(longlong *)(lVar17 + 0x28) + 0x18);
            ::FName::ToString(&local_808,&local_790);
            local_800.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
            local_800.Number = *(uint *)&this_00->field_0x1c;
            ::FName::ToString(&local_800,&local_7a0);
            local_7f8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
            local_7f8.Number = *(uint *)&param_1->field_0x1c;
            ::FName::ToString(&local_7f8,&local_7b0);
            UE::Logging::Private::BasicLog<4>
                      (&::LOG_Static,(FLogCategoryBase *)&LogBlueprintSupport);
            if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
            }
            FVar14.Data = local_790.Data.AllocatorInstance.Data;
            if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
              FVar14.Data = local_790.Data.AllocatorInstance.Data;
            }
          }
          if (FVar14.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar14.Data);
          }
        }
      }
    }
LAB_141eb6283:
    FPropertyValueIterator::IterateToNext(&local_760);
  } while( true );
}

// ReparentHierarchies @ 141eb6310

void __cdecl
FBlueprintSupport::ReparentHierarchies
          (TMap<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
           *param_1)

{
  if (ClassReparentingFPtr !=
      (_func___cdecl_void_TMap<UClass_ptr,UClass_ptr,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_ptr,UClass_ptr,0>_>_ptr
       *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141eb631c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*ClassReparentingFPtr)(param_1);
    return;
  }
  return;
}

// SetClassReparentingFPtr @ 141ebc200

void __cdecl
FBlueprintSupport::SetClassReparentingFPtr
          (_func___cdecl_void_TMap<UClass_ptr,UClass_ptr,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_ptr,UClass_ptr,0>_>_ptr
           *param_1)

{
  ClassReparentingFPtr = param_1;
  return;
}

// SetFlushCompilationQueueFPtr @ 141ebc210

void __cdecl
FBlueprintSupport::SetFlushCompilationQueueFPtr
          (_func___cdecl_void_FUObjectSerializeContext_ptr *param_1)

{
  FlushCompilationQueueFPtr = param_1;
  return;
}

// SetFlushReinstancingQueueFPtr @ 141ebc220

void __cdecl FBlueprintSupport::SetFlushReinstancingQueueFPtr(_func___cdecl_void *param_1)

{
  FlushReinstancingQueueFPtr = param_1;
  return;
}

// ShouldSuppressWarning @ 141ebc8e0

bool __cdecl FBlueprintSupport::ShouldSuppressWarning(FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (BlueprintWarningsToSuppress.Elements._8_4_ != BlueprintWarningsToSuppress.Elements._52_4_) {
    FVar3 = (ForElementType<FSetElementId>)0x154b87fd8;
    if (BlueprintWarningsToSuppress.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar3 = BlueprintWarningsToSuppress.Hash.SecondaryData;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)(BlueprintWarningsToSuppress.HashSize - 1U & param_1.Number + uVar1)
                     * 4);
    while (uVar1 != 0xffffffff) {
      pFVar2 = (FName *)((longlong)(int)uVar1 * 0x10 + BlueprintWarningsToSuppress.Elements._0_8_);
      if (*pFVar2 == param_1) goto LAB_141ebc958;
      uVar1 = pFVar2[1].ComparisonIndex.Value;
    }
  }
  pFVar2 = (FName *)0x0;
LAB_141ebc958:
  return pFVar2 != (FName *)0x0;
}

// ShouldTreatWarningAsError @ 141ebc970

bool __cdecl FBlueprintSupport::ShouldTreatWarningAsError(FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (BlueprintWarningsToTreatAsError.Elements._8_4_ !=
      BlueprintWarningsToTreatAsError.Elements._52_4_) {
    FVar3 = (ForElementType<FSetElementId>)0x154b87f88;
    if (BlueprintWarningsToTreatAsError.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar3 = BlueprintWarningsToTreatAsError.Hash.SecondaryData;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)
                     (BlueprintWarningsToTreatAsError.HashSize - 1U & param_1.Number + uVar1) * 4);
    while (uVar1 != 0xffffffff) {
      pFVar2 = (FName *)((longlong)(int)uVar1 * 0x10 +
                        BlueprintWarningsToTreatAsError.Elements._0_8_);
      if (*pFVar2 == param_1) goto LAB_141ebc9e8;
      uVar1 = pFVar2[1].ComparisonIndex.Value;
    }
  }
  pFVar2 = (FName *)0x0;
LAB_141ebc9e8:
  return pFVar2 != (FName *)0x0;
}

// UpdateWarningBehavior @ 141ec44e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FBlueprintSupport::UpdateWarningBehavior
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  int iVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ForElementType<unsigned_int> FVar17;
  undefined1 auStackY_1a8 [32];
  uint local_178;
  uint uStack_174;
  uint uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  uint local_158;
  uint uStack_154;
  uint uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  undefined1 local_130 [8];
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_120;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f8;
  undefined1 local_d8 [32];
  ForElementType<unsigned_int> local_b8;
  uint local_b0;
  uint local_ac;
  int local_a8;
  int local_a4;
  FScriptContainerElement local_a0 [8];
  ForAnyElementType local_98;
  uint local_90;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  uVar2 = param_1->ArrayNum;
  pFVar12 = (param_1->AllocatorInstance).Data;
  if (((int)uVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar10 = 0;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (ForElementType<unsigned_int>)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = -1;
  local_a4 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar2);
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_d8,uVar2);
    uVar11 = 1;
    if (3 < uVar2) {
      uVar15 = (ulonglong)((uVar2 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uVar11 = 1 << ((byte)lVar4 & 0x1f);
    }
    if ((local_90 == 0) || ((int)local_90 < (int)uVar11)) {
      local_90 = uVar11;
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,4);
      }
      if (uVar11 != 0) {
        uVar14 = uVar11;
        if (uVar11 < 2) {
          if (local_98.Data != (FScriptContainerElement *)0x0) {
            uVar14 = 0;
            goto LAB_141ec4606;
          }
        }
        else {
LAB_141ec4606:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,uVar14,4)
          ;
        }
        if (0 < (int)uVar11) {
          uVar16 = (ulonglong)uVar11;
          uVar15 = uVar10;
          do {
            FVar9.Data = local_a0;
            if (local_98.Data != (FScriptContainerElement *)0x0) {
              FVar9.Data = local_98.Data;
            }
            uVar7 = uVar15 & (longlong)(int)uVar11 - 1U;
            uVar15 = uVar15 + 1;
            *(undefined4 *)(FVar9.Data + uVar7 * 4) = 0xffffffff;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
      }
      if (local_90 != 0) {
        local_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
        local_178 = 0;
        uStack_174 = 1;
        uStack_164 = 0;
        uStack_160 = 0;
        uVar15 = uVar10;
        if (local_b0 != 0) {
          FVar17 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
          if (local_b8 != (ForElementType<unsigned_int>)0x0) {
            FVar17 = local_b8;
          }
          uVar11 = *(uint *)FVar17;
          uVar16 = uVar10;
          while (uVar11 == 0) {
            uStack_160 = (int)uVar16 + 0x20;
            uVar16 = (ulonglong)uStack_160;
            iVar8 = (int)uVar15;
            local_178 = iVar8 + 1;
            uVar15 = (ulonglong)local_178;
            if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_178)
            goto LAB_141ec4713;
            uVar11 = ((uint *)((longlong)FVar17 + 4))[iVar8];
          }
          uStack_174 = -uVar11 & uVar11;
          uVar15 = (ulonglong)uStack_174 * 2 + 1;
          lVar4 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          uStack_164 = (int)lVar4 + -1 + uStack_160;
          uVar15 = (ulonglong)uStack_164;
          if ((int)local_b0 < (int)uStack_164) {
LAB_141ec4713:
            uVar15 = (ulonglong)local_b0;
            uStack_164 = local_b0;
          }
        }
        local_128 = (longlong *)local_d8;
        local_120._padding_ = CONCAT44(uStack_174,local_178);
        local_120.CurrentBitIndex = uStack_164;
        local_120.UnvisitedBitMask = 0xffffffff;
        local_120._28_4_ = uStack_15c;
        local_120.BaseBitIndex = uStack_160;
        if ((int)uVar15 < (int)local_b0) {
          do {
            puVar13 = (undefined8 *)((longlong)(int)uVar15 * 0x10 + *local_128);
            uVar3 = *puVar13;
            uVar11 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
            uVar11 = local_90 - 1 & uVar11 + (int)((ulonglong)uVar3 >> 0x20);
            *(uint *)((longlong)puVar13 + 0xc) = uVar11;
            FVar9.Data = local_a0;
            if (local_98.Data != (FScriptContainerElement *)0x0) {
              FVar9.Data = local_98.Data;
            }
            uVar16 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar11;
            *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(FVar9.Data + uVar16 * 4);
            *(int *)(FVar9.Data + uVar16 * 4) = (int)uVar15;
            local_120.UnvisitedBitMask = local_120.UnvisitedBitMask & ~local_120._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_120);
            uVar15 = (ulonglong)(uint)local_120.CurrentBitIndex;
          } while (local_120.CurrentBitIndex < (local_120.Array)->NumBits);
        }
      }
    }
  }
  pFVar1 = pFVar12 + (longlong)(int)uVar2 * 8;
  for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 8) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_d8,
               (FName *)local_130,(bool *)pFVar12);
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
            (&BlueprintWarningsToTreatAsError,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_d8);
  local_90 = 0;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  iVar8 = SUB84(local_d8._8_8_,4);
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  local_a8 = -1;
  local_a4 = 0;
  local_b0 = 0;
  if (0x80 < local_ac) {
    local_ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  uVar2 = param_2->ArrayNum;
  pFVar12 = (param_2->AllocatorInstance).Data;
  if (((int)uVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (uVar2 == 0) goto LAB_141ec4b04;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar2);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar2);
  uVar11 = 1;
  if (3 < uVar2) {
    uVar15 = (ulonglong)((uVar2 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar11 <= (int)local_40)) goto LAB_141ec4b04;
  local_40 = uVar11;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar11 != 0) {
    uVar14 = uVar11;
    if (uVar11 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar14 = 0;
        goto LAB_141ec4956;
      }
    }
    else {
LAB_141ec4956:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar14,4);
    }
    if (0 < (int)uVar11) {
      uVar16 = (ulonglong)uVar11;
      uVar15 = uVar10;
      do {
        FVar9.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_48.Data;
        }
        uVar7 = uVar15 & (longlong)(int)uVar11 - 1U;
        uVar15 = uVar15 + 1;
        *(undefined4 *)(FVar9.Data + uVar7 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_40 != 0) {
    local_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    local_158 = 0;
    uStack_154 = 1;
    uStack_144 = 0;
    uStack_140 = 0;
    if (local_60 != 0) {
      FVar17 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_68;
      }
      uVar11 = *(uint *)FVar17;
      uVar15 = uVar10;
      while (uVar11 == 0) {
        uStack_140 = (int)uVar15 + 0x20;
        uVar15 = (ulonglong)uStack_140;
        iVar8 = (int)uVar10;
        local_158 = iVar8 + 1;
        uVar10 = (ulonglong)local_158;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_158)
        goto LAB_141ec4a5e;
        uVar11 = ((uint *)((longlong)FVar17 + 4))[iVar8];
      }
      uStack_154 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_154 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_144 = (int)lVar4 + -1 + uStack_140;
      uVar10 = (ulonglong)uStack_144;
      if ((int)local_60 < (int)uStack_144) {
LAB_141ec4a5e:
        uVar10 = (ulonglong)local_60;
        uStack_144 = local_60;
      }
    }
    local_100 = (longlong *)local_88;
    local_f8._padding_ = CONCAT44(uStack_154,local_158);
    local_f8.CurrentBitIndex = uStack_144;
    local_f8.UnvisitedBitMask = 0xffffffff;
    local_f8._28_4_ = uStack_13c;
    local_f8.BaseBitIndex = uStack_140;
    if ((int)uVar10 < (int)local_60) {
      do {
        puVar13 = (undefined8 *)((longlong)(int)uVar10 * 0x10 + *local_100);
        uVar3 = *puVar13;
        uVar11 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar11 = local_40 - 1 & uVar11 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar13 + 0xc) = uVar11;
        FVar9.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_48.Data;
        }
        uVar15 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(FVar9.Data + uVar15 * 4);
        *(int *)(FVar9.Data + uVar15 * 4) = (int)uVar10;
        local_f8.UnvisitedBitMask = local_f8.UnvisitedBitMask & ~local_f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f8);
        uVar10 = (ulonglong)(uint)local_f8.CurrentBitIndex;
      } while (local_f8.CurrentBitIndex < (local_f8.Array)->NumBits);
    }
  }
LAB_141ec4b04:
  pFVar1 = pFVar12 + (longlong)(int)uVar2 * 8;
  for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 8) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_88,
               (FName *)(local_130 + 4),(bool *)pFVar12);
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
            (&BlueprintWarningsToSuppress,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_88);
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  iVar8 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = -1;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// UseDeferredDependencyLoading @ 141ec4c10

bool __cdecl FBlueprintSupport::UseDeferredDependencyLoading(void)

{
  FBoolConfigValueHelper FVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FBoolConfigValueHelper::FBoolConfigValueHelper
                (&DeferDependencyLoads,L"Kismet",L"bDeferDependencyLoads",&GEngineIni);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar1.bValue = DeferDependencyLoads.bValue;
  if (*piVar2 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FBoolConfigValueHelper::FBoolConfigValueHelper
                (&DisableCookedBuildDefering,L"Kismet",L"bForceDisableCookedDependencyDeferring",
                 &GEngineIni);
      _Init_thread_footer(&::_TSS1);
    }
  }
  return (bool)(DisableCookedBuildDefering.bValue == false & FVar1.bValue);
}

