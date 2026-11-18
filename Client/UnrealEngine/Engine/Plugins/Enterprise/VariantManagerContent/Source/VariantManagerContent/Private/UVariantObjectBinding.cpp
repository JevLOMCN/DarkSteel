// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 22

// StaticClass @ 14e2d0cb0

UClass * __cdecl UVariantObjectBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVariantObjectBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"VariantObjectBinding",
               &Z_Registration_Info_UClass_UVariantObjectBinding.InnerSingleton,
               StaticRegisterNativesUVariantObjectBinding,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVariantObjectBinding>,
               InternalVTableHelperCtorCaller<UVariantObjectBinding>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVariantObjectBinding.InnerSingleton;
}

// UVariantObjectBinding @ 14e2d4cb0

UVariantObjectBinding * __thiscall
UVariantObjectBinding::UVariantObjectBinding(UVariantObjectBinding *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UVariantObjectBinding__6B_;
  (this->CachedActorLabel).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedActorLabel).Data.ArrayNum = 0;
  (this->CachedActorLabel).Data.ArrayMax = 0;
  (this->ObjectPtr).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ObjectPtr).AssetPath.PackageName.Number = 0;
  (this->ObjectPtr).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ObjectPtr).AssetPath.AssetName.Number = 0;
  (this->ObjectPtr).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectPtr).SubPathString.Data.ArrayNum = 0;
  (this->ObjectPtr).SubPathString.Data.ArrayMax = 0;
  *(undefined8 *)&this->LazyObjectPtr = 0;
  *(undefined8 *)&(this->LazyObjectPtr).field_0x10 = 0;
  *(undefined8 *)&(this->LazyObjectPtr).field_0x8 = 0;
  (this->CapturedProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CapturedProperties).ArrayNum = 0;
  (this->CapturedProperties).ArrayMax = 0;
  (this->FunctionCallers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FunctionCallers).ArrayNum = 0;
  (this->FunctionCallers).ArrayMax = 0;
  return this;
}

// UVariantObjectBinding @ 14e2d4d20

UVariantObjectBinding * __thiscall
UVariantObjectBinding::UVariantObjectBinding
          (UVariantObjectBinding *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UVariantObjectBinding__6B_;
  (this->CachedActorLabel).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedActorLabel).Data.ArrayNum = 0;
  (this->CachedActorLabel).Data.ArrayMax = 0;
  (this->ObjectPtr).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ObjectPtr).AssetPath.PackageName.Number = 0;
  (this->ObjectPtr).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ObjectPtr).AssetPath.AssetName.Number = 0;
  (this->ObjectPtr).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectPtr).SubPathString.Data.ArrayNum = 0;
  (this->ObjectPtr).SubPathString.Data.ArrayMax = 0;
  *(undefined8 *)&this->LazyObjectPtr = 0;
  *(undefined8 *)&(this->LazyObjectPtr).field_0x10 = 0;
  *(undefined8 *)&(this->LazyObjectPtr).field_0x8 = 0;
  (this->CapturedProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CapturedProperties).ArrayNum = 0;
  (this->CapturedProperties).ArrayMax = 0;
  (this->FunctionCallers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FunctionCallers).ArrayNum = 0;
  (this->FunctionCallers).ArrayMax = 0;
  return this;
}

// ~UVariantObjectBinding @ 14e2d5600

void __thiscall UVariantObjectBinding::~UVariantObjectBinding(UVariantObjectBinding *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UVariantObjectBinding__6B_;
  pFVar1 = (this->FunctionCallers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CapturedProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectPtr).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedActorLabel).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddCapturedProperties @ 14e2d6d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UVariantObjectBinding::AddCapturedProperties
          (UVariantObjectBinding *this,TArray<UPropertyValue_*,TSizedDefaultAllocator<32>_> *param_1
          )

{
  TArray<TObjectPtr<UPropertyValue>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStack_148 [32];
  UObject **local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined1 local_f8;
  undefined1 local_f7 [7];
  UObject *local_f0;
  undefined1 local_e8 [16];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_d8;
  TSparseArray<TSparseSetElement<UVariantObjectBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  pFVar13 = (this->CapturedProperties).AllocatorInstance.Data;
  pTVar1 = &this->CapturedProperties;
  iVar4 = (this->CapturedProperties).ArrayNum;
  local_d8.Elements._0_8_ = 0;
  local_d8.Elements._8_8_ = 0;
  pFVar3 = pFVar13 + (longlong)iVar4 * 8;
  local_d8.Elements._32_8_ = 0;
  local_d8.Elements._40_4_ = 0;
  local_d8.Elements._44_4_ = 0x80;
  local_d8.Elements._48_4_ = 0xffffffff;
  local_d8.Elements._52_4_ = 0;
  local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_d8.HashSize = 0;
  local_e8._8_8_ = this;
  while( true ) {
    if ((this->CapturedProperties).ArrayNum != iVar4) {
      local_f8 = 0;
      `TCheckedPointerIterator<TObjectPtr<UPropertyValue>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_f8);
    }
    if (pFVar13 == pFVar3) break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&local_d8,(FString *)local_e8,(bool *)(*(longlong *)pFVar13 + 200));
    pFVar13 = pFVar13 + 8;
  }
  pFVar13 = (param_1->AllocatorInstance).Data;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_88._32_8_ = 0;
  local_88._40_4_ = 0;
  local_88._52_4_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  iVar4 = param_1->ArrayNum;
  local_88._44_4_ = 0x80;
  local_88._48_4_ = 0xffffffff;
  pFVar3 = pFVar13 + (longlong)iVar4 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_f7[0] = 0;
      `TCheckedPointerIterator<UPropertyValue_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_f7);
    }
    if (pFVar13 == pFVar3) break;
    pUVar5 = *(UObject **)pFVar13;
    if (pUVar5 != (UObject *)0x0) {
      if (*(int *)&pUVar5[5].field_0x8 == 0) {
        pwVar11 = L"";
        iVar10 = 0;
      }
      else {
        pwVar11 = *(wchar_t **)(pUVar5 + 5);
        iVar10 = *(int *)&pUVar5[5].field_0x8 + -1;
      }
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar11);
      iVar10 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
               FindIndexByHash<FString>(&local_d8,uVar9,(FString *)(pUVar5 + 5));
      if (iVar10 == -1) {
        (**(code **)(*(longlong *)pUVar5 + 0x170))(pUVar5,0,local_e8._8_8_,0x10);
        local_f0 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        pFVar6 = (pTVar1->AllocatorInstance).Data;
        if ((pFVar6 <= (FScriptContainerElement *)&local_f0) &&
           (lVar12 = (longlong)(this->CapturedProperties).ArrayMax,
           (FScriptContainerElement *)&local_f0 < pFVar6 + lVar12 * 8)) {
          local_110 = (longlong)(this->CapturedProperties).ArrayNum;
          local_108 = 8;
          local_128 = &local_f0;
          local_120 = pFVar6;
          local_118 = lVar12;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar10 = (this->CapturedProperties).ArrayNum;
        piVar2 = &(this->CapturedProperties).ArrayMax;
        if (iVar10 == *piVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->CapturedProperties).ArrayNum = iVar10 + 1;
        *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_f0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_f0);
        }
      }
    }
    pFVar13 = pFVar13 + 8;
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<UVariantObjectBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UVariantObjectBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88);
  local_d8.HashSize = 0;
  if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d8.Elements);
  return;
}

// AddFunctionCallers @ 14e2d7270

void __thiscall
UVariantObjectBinding::AddFunctionCallers
          (UVariantObjectBinding *this,TArray<FFunctionCaller,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FFunctionCaller,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pTVar1 = &this->FunctionCallers;
  if (pTVar1 == param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = param_1->ArrayNum;
  if (iVar2 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar2,&pTVar1->AllocatorInstance,&(this->FunctionCallers).ArrayNum,
                       &(this->FunctionCallers).ArrayMax);
    memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8,(param_1->AllocatorInstance).Data,
           (longlong)iVar2 << 3);
  }
  return;
}

// ExecuteAllTargetFunctions @ 14e2db520

void __thiscall UVariantObjectBinding::ExecuteAllTargetFunctions(UVariantObjectBinding *this)

{
  FName *pFVar1;
  int iVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (FName *)(this->FunctionCallers).AllocatorInstance.Data;
  iVar2 = (this->FunctionCallers).ArrayNum;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->FunctionCallers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FFunctionCaller,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ExecuteTargetFunction(this,*pFVar3);
    pFVar3 = pFVar3 + 1;
  }
  return;
}

// ExecuteTargetFunction @ 14e2db5c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UVariantObjectBinding::ExecuteTargetFunction(UVariantObjectBinding *this,FName param_1)

{
  uchar uVar1;
  longlong lVar2;
  UObject *pUVar3;
  longlong lVar4;
  FField *pFVar5;
  bool bVar6;
  UClass *pUVar7;
  ULevelVariantSets *this_00;
  UObject *this_01;
  UFunction *pUVar8;
  FField *pFVar9;
  UObject *local_res18;
  FName local_res20;
  FString local_a8;
  FString local_98;
  FString local_88;
  TFieldIterator<FObjectProperty> local_78;
  UObject *local_60;
  ULevelVariantSets *local_58;
  UVariantSet *local_50;
  UVariant *pUStack_48;
  
  pFVar9 = (FField *)0x0;
  local_res18 = (UObject *)((ulonglong)local_res18 & 0xffffffff00000000);
  pUVar7 = ULevelVariantSets::StaticClass();
  this_00 = (ULevelVariantSets *)
            UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
  local_res18 = GetObject(this);
  this_01 = ULevelVariantSets::GetDirectorInstance(this_00,local_res18);
  if (this_01 == (UObject *)0x0) {
    return;
  }
  pUVar8 = UObject::FindFunction(this_01,param_1);
  if (pUVar8 == (UFunction *)0x0) {
    return;
  }
  uVar1 = pUVar8->NumParms;
  if (uVar1 == '\0') {
    (**(code **)(*(longlong *)this_01 + 0x260))(this_01,pUVar8,0);
    return;
  }
  if (uVar1 == '\x01') {
    lVar2 = pUVar8->_padding_;
    if (lVar2 == 0) {
      return;
    }
    if ((*(uint *)(*(longlong *)(lVar2 + 8) + 0x18) >> 0x10 & 1) == 0) {
      return;
    }
    pUVar3 = *(UObject **)(lVar2 + 0x70);
    if (pUVar3 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      lVar4 = *(longlong *)&local_res18->field_0x10;
      if ((*(int *)(lVar4 + 0x38) < *(int *)&pUVar3[1].field_0x10) ||
         (*(undefined1 **)
           (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)&pUVar3[1].field_0x10 * 8) !=
          &pUVar3[1].field_0x8)) {
        if ((byte)LogVariantContent._0_1_ < 2) {
          return;
        }
        local_res20 = *(FName *)(lVar4 + 0x18);
        ::FName::ToString(&local_res20,(FString *)&local_78);
        local_res20 = *(FName *)(*(longlong *)(lVar2 + 0x70) + 0x18);
        ::FName::ToString(&local_res20,&local_88);
        local_res20.ComparisonIndex.Value = *(uint *)&local_res18->field_0x18;
        local_res20.Number = *(uint *)&local_res18->field_0x1c;
        ::FName::ToString(&local_res20,&local_98);
        local_res20 = (FName)pUVar8->_padding_;
        ::FName::ToString(&local_res20,&local_a8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
        if ((UFunction *)local_a8.Data.AllocatorInstance.Data != (UFunction *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_78.Struct;
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
          local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_78.Struct;
        }
        goto LAB_14e2dba19;
      }
    }
    (**(code **)(*(longlong *)this_01 + 0x260))(this_01,pUVar8,&local_res18);
  }
  else {
    if (uVar1 != '\x04') {
      return;
    }
    local_60 = local_res18;
    local_50 = (UVariantSet *)0x0;
    pUStack_48 = (UVariant *)0x0;
    pUStack_48 = GetParent(this);
    if ((pUStack_48 == (UVariant *)0x0) ||
       (local_50 = UVariant::GetParent(pUStack_48), local_50 == (UVariantSet *)0x0)) {
      local_58 = (ULevelVariantSets *)0x0;
    }
    else {
      local_58 = UVariantSet::GetParent(local_50);
    }
    local_78.Field = (FField *)pUVar8->_padding_;
    local_78.InterfaceIndex = -1;
    local_78.bIncludeSuper = true;
    local_78.bIncludeDeprecated = true;
    local_78.bIncludeInterface = false;
    local_78.Struct = (UStruct *)pUVar8;
    TFieldIterator<FObjectProperty>::IterateToNext(&local_78);
    pFVar5 = local_78.Field;
    while (local_78.Field = pFVar5, pFVar5 != (FField *)0x0) {
      bVar6 = IsThisNotNull(pFVar5,"FField::GetFName");
      if (bVar6) {
        local_res20 = pFVar5->NamePrivate;
      }
      else {
        local_res20.ComparisonIndex.Value = 0;
        local_res20.Number = 0;
      }
      bVar6 = ::FName::Equals(local_res20,L"Target");
      if ((bVar6) && ((*(uint *)&pFVar5[1].ClassPrivate >> 0x1b & 1) == 0)) {
        pFVar9 = pFVar5[2].Owner.Container.Field;
        if ((*(int *)&pFVar9[1].ClassPrivate <=
             *(int *)(*(longlong *)&local_res18->field_0x10 + 0x38)) &&
           (*(FField **)
             (*(longlong *)(*(longlong *)&local_res18->field_0x10 + 0x30) +
             (longlong)*(int *)&pFVar9[1].ClassPrivate * 8) == pFVar9 + 1)) {
          (**(code **)(*(longlong *)this_01 + 0x260))(this_01,pUVar8,&local_60);
          return;
        }
        break;
      }
      local_78.Field = pFVar5->Next;
      TFieldIterator<FObjectProperty>::IterateToNext(&local_78);
      pFVar5 = local_78.Field;
    }
    if ((byte)LogVariantContent._0_1_ < 2) {
      return;
    }
    local_res20 = *(FName *)(*(longlong *)&local_res18->field_0x10 + 0x18);
    ::FName::ToString(&local_res20,&local_a8);
    if (pFVar9 != (FField *)0x0) {
      local_res20 = (FName)pFVar9->Next;
      ::FName::ToString(&local_res20,&local_98);
    }
    local_res20.ComparisonIndex.Value = *(uint *)&local_res18->field_0x18;
    local_res20.Number = *(uint *)&local_res18->field_0x1c;
    ::FName::ToString(&local_res20,&local_88);
    local_res20 = (FName)pUVar8->_padding_;
    ::FName::ToString(&local_res20,(FString *)&local_78);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
    if ((UFunction *)local_78.Struct != (UFunction *)0x0) {
      FMemory::Free(local_78.Struct);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if ((pFVar9 != (FField *)0x0) &&
       (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
LAB_14e2dba19:
    if ((UFunction *)local_a8.Data.AllocatorInstance.Data != (UFunction *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetCapturedProperties @ 14e2dc480

TArray<UPropertyValue_*,TSizedDefaultAllocator<32>_> * __thiscall
UVariantObjectBinding::GetCapturedProperties(UVariantObjectBinding *this)

{
  return (TArray<UPropertyValue_*,TSizedDefaultAllocator<32>_> *)&this->CapturedProperties;
}

// GetDisplayText @ 14e2dd850

FText * __thiscall
UVariantObjectBinding::GetDisplayText(UVariantObjectBinding *this,FText *__return_storage_ptr__)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FName local_res18 [2];
  FString local_18;
  
  pUVar2 = GetObject(this);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      local_res18[0].ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_res18[0].Number = *(uint *)&pUVar2->field_0x1c;
      ::FName::ToString(local_res18,&local_18);
      ::FString::operator=(&this->CachedActorLabel,&local_18);
      FText::FromString(__return_storage_ptr__,&local_18);
      if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  if ((this->CachedActorLabel).Data.ArrayNum < 2) {
    FText::FromString(__return_storage_ptr__,L"<Unloaded binding>");
    return __return_storage_ptr__;
  }
  FText::FromString(__return_storage_ptr__,&this->CachedActorLabel);
  return __return_storage_ptr__;
}

// GetFunctionCallers @ 14e2dda20

TArray<FFunctionCaller,TSizedDefaultAllocator<32>_> * __thiscall
UVariantObjectBinding::GetFunctionCallers(UVariantObjectBinding *this)

{
  return &this->FunctionCallers;
}

// GetObject @ 14e2ddd40

UObject * __thiscall UVariantObjectBinding::GetObject(UVariantObjectBinding *this)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  FUObjectItem *pFVar3;
  FUtf8String *pFVar4;
  size_t _Size;
  UObject *local_res8;
  FSoftObjectPath local_58;
  FSoftObjectPath local_38;
  
  if ((this->ObjectPtr).AssetPath.PackageName == (FName)0x0) {
LAB_14e2dded6:
    pUVar2 = (UObject *)0x0;
  }
  else {
    local_38.SubPathString.Data.ArrayNum = (this->ObjectPtr).SubPathString.Data.ArrayNum;
    _Size = (size_t)local_38.SubPathString.Data.ArrayNum;
    pFVar1 = (this->ObjectPtr).SubPathString.Data.AllocatorInstance.Data;
    local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.AssetPath.PackageName = (this->ObjectPtr).AssetPath.PackageName;
    local_38.AssetPath.AssetName = (this->ObjectPtr).AssetPath.AssetName;
    if (local_38.SubPathString.Data.ArrayNum == 0) {
      local_38.SubPathString.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_38.SubPathString.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_38.SubPathString,local_38.SubPathString.Data.ArrayNum,
                 &local_38.SubPathString.Data.ArrayMax);
      memcpy(local_38.SubPathString.Data.AllocatorInstance.Data,pFVar1,_Size);
    }
    pUVar2 = FSoftObjectPath::ResolveObject(&local_38);
    if (((pUVar2 == (UObject *)0x0) || ((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) != 0)) ||
       (pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc),
       ((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0)) {
      pUVar2 = TPersistentObjectPtr<FUniqueObjectGuid>::Get
                         ((TPersistentObjectPtr<FUniqueObjectGuid> *)&this->LazyObjectPtr);
      if (pUVar2 == (UObject *)0x0) {
        if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
        }
        goto LAB_14e2dded6;
      }
      local_58.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_58.AssetPath.PackageName.Number = 0;
      local_58.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_58.AssetPath.AssetName.Number = 0;
      local_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.SubPathString.Data.ArrayNum = 0;
      local_58.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_58,pUVar2);
      (this->ObjectPtr).AssetPath.PackageName = local_58.AssetPath.PackageName;
      (this->ObjectPtr).AssetPath.AssetName = local_58.AssetPath.AssetName;
      pFVar4 = &(this->ObjectPtr).SubPathString;
      if (pFVar4 != &local_58.SubPathString) {
        pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar4->Data).AllocatorInstance.Data = local_58.SubPathString.Data.AllocatorInstance.Data;
        (this->ObjectPtr).SubPathString.Data.ArrayNum = local_58.SubPathString.Data.ArrayNum;
        (this->ObjectPtr).SubPathString.Data.ArrayMax = local_58.SubPathString.Data.ArrayMax;
        local_58.SubPathString.Data.ArrayNum = 0;
        local_58.SubPathString.Data.ArrayMax = 0;
        local_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
      }
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      local_res8 = pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      TPersistentObjectPtr<FUniqueObjectGuid>::operator=
                ((TPersistentObjectPtr<FUniqueObjectGuid> *)&this->LazyObjectPtr,
                 (FObjectPtr)&local_res8);
    }
    if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return pUVar2;
}

// GetObjectPath @ 14e2ddf10

FString * __thiscall
UVariantObjectBinding::GetObjectPath(UVariantObjectBinding *this,FString *__return_storage_ptr__)

{
  FSoftObjectPath::ToString(&this->ObjectPtr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetParent @ 14e2de0a0

UVariant * __thiscall UVariantObjectBinding::GetParent(UVariantObjectBinding *this)

{
  int iVar1;
  UVariant *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UVariant *)this->_padding_;
  if (pUVar2 != (UVariant *)0x0) {
    pUVar3 = UVariant::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UVariant *)0x0;
}

// GetPrivateStaticClass @ 14e2dea00

UClass * __cdecl UVariantObjectBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVariantObjectBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"VariantObjectBinding",
               &Z_Registration_Info_UClass_UVariantObjectBinding.InnerSingleton,
               StaticRegisterNativesUVariantObjectBinding,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVariantObjectBinding>,
               InternalVTableHelperCtorCaller<UVariantObjectBinding>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVariantObjectBinding.InnerSingleton;
}

// RemoveCapturedProperties @ 14e2e21c0

void __thiscall
UVariantObjectBinding::RemoveCapturedProperties
          (UVariantObjectBinding *this,TArray<UPropertyValue_*,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  
  pFVar9 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar3 * 8;
  do {
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        `TCheckedPointerIterator<UPropertyValue_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar9 == pFVar2) {
        return;
      }
      pUVar5 = *(UObject **)pFVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      pFVar6 = (this->CapturedProperties).AllocatorInstance.Data;
      iVar4 = (this->CapturedProperties).ArrayNum;
      pFVar8 = pFVar6;
      if (pFVar6 != pFVar6 + (longlong)iVar4 * 8) break;
LAB_14e2e2272:
      pFVar9 = pFVar9 + 8;
    }
    do {
      if (*(UObject **)pFVar8 == pUVar5) {
        iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar6 >> 3);
        if (iVar7 != -1) {
          memmove(pFVar6 + (longlong)iVar7 * 8,pFVar6 + (longlong)iVar7 * 8 + 8,
                  (longlong)((iVar4 - iVar7) + -1) << 3);
          piVar1 = &(this->CapturedProperties).ArrayNum;
          *piVar1 = *piVar1 + -1;
        }
        goto LAB_14e2e2272;
      }
      pFVar8 = pFVar8 + 8;
    } while (pFVar8 != pFVar6 + (longlong)iVar4 * 8);
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// RemoveFunctionCallers @ 14e2e22a0

void __thiscall
UVariantObjectBinding::RemoveFunctionCallers
          (UVariantObjectBinding *this,
          TArray<FFunctionCaller_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// Serialize @ 14e2e5cf0

void __thiscall UVariantObjectBinding::Serialize(UVariantObjectBinding *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FVariantManagerObjectVersion::GUID);
  FArchiveState::CustomVer((FArchiveState *)param_1,&FVariantManagerObjectVersion::GUID);
  return;
}

// Serialize @ 14e2e5d30

void __thiscall
UVariantObjectBinding::Serialize(UVariantObjectBinding *this,FStructuredArchiveRecord param_1)

{
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FVariantManagerObjectVersion::GUID);
  FArchiveState::CustomVer(this_00,&FVariantManagerObjectVersion::GUID);
  return;
}

// SetObject @ 14e2e6390

void __thiscall UVariantObjectBinding::SetObject(UVariantObjectBinding *this,UObject *param_1)

{
  FUtf8String *pFVar1;
  FScriptContainerElement *pFVar2;
  UObject *local_res8;
  FSoftObjectPath local_28;
  
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,param_1);
  pFVar1 = &(this->ObjectPtr).SubPathString;
  (this->ObjectPtr).AssetPath.PackageName = local_28.AssetPath.PackageName;
  (this->ObjectPtr).AssetPath.AssetName = local_28.AssetPath.AssetName;
  if (pFVar1 != &local_28.SubPathString) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.SubPathString.Data.AllocatorInstance.Data;
    (this->ObjectPtr).SubPathString.Data.ArrayNum = local_28.SubPathString.Data.ArrayNum;
    (this->ObjectPtr).SubPathString.Data.ArrayMax = local_28.SubPathString.Data.ArrayMax;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  TPersistentObjectPtr<FUniqueObjectGuid>::operator=
            ((TPersistentObjectPtr<FUniqueObjectGuid> *)&this->LazyObjectPtr,(FObjectPtr)&local_res8
            );
  return;
}

// SortCapturedProperties @ 14e2e6f60

void __thiscall UVariantObjectBinding::SortCapturedProperties(UVariantObjectBinding *this)

{
  return;
}

// StaticRegisterNativesUVariantObjectBinding @ 14e2e7120

void __cdecl UVariantObjectBinding::StaticRegisterNativesUVariantObjectBinding(void)

{
  return;
}

