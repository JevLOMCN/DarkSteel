// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 87

// StaticClass @ 14a203d00

UClass * __cdecl UModularRigController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModularRigController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ModularRigController",
               &Z_Registration_Info_UClass_UModularRigController.InnerSingleton,
               StaticRegisterNativesUModularRigController,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UModularRigController>,
               InternalVTableHelperCtorCaller<UModularRigController>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModularRigController.InnerSingleton;
}

// <lambda_1> @ 14a21cea0

<lambda_1> * __thiscall
`UModularRigController::ReorderModule'::__l2::<lambda_1>::<lambda_1>(void *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->AllModuleNames).ArrayNum;
  _Src = (param_1->AllModuleNames).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
  memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  return this;
}

// UModularRigController @ 14a2232a0

UModularRigController * __thiscall
UModularRigController::UModularRigController(UModularRigController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UModularRigController__6B_;
  *(undefined8 *)&this->ModifiedEvent = 0;
  *(undefined8 *)&(this->ModifiedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->ModifiedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->ModifiedEvent).field_0x18 = 2;
  return this;
}

// UModularRigController @ 14a2232e0

UModularRigController * __thiscall
UModularRigController::UModularRigController
          (UModularRigController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bSuspendNotifications = false;
  this->bAutomaticReparenting = true;
  this->_padding_ = (longlong)&___7UModularRigController__6B_;
  this->Model = (FModularRigModel *)0x0;
  *(undefined8 *)&this->ModifiedEvent = 0;
  *(undefined8 *)&(this->ModifiedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->ModifiedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->ModifiedEvent).field_0x18 = 2;
  return this;
}

// ~UModularRigController @ 14a227070

void __thiscall UModularRigController::~UModularRigController(UModularRigController *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UModularRigController__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ModifiedEvent).field_0x8,*(int *)&(this->ModifiedEvent).field_0x10);
  pvVar1 = *(void **)&(this->ModifiedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ModifiedEvent);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14a22a7c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
`UModularRigController::ConnectConnectorToElements'::__l2::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__)

{
  FRigElementKey *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  FName this_00;
  uint uVar7;
  longlong lVar8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pFVar1 = *(FRigElementKey **)this;
  if ((*(int *)(pFVar1 + 2) < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  this_00 = pFVar1[1].Name;
  if (pFVar1[1].Name == (FName)0x0) {
    this_00 = (FName)pFVar1;
  }
  FRigElementKey::ToString((FRigElementKey *)this_00,__return_storage_ptr__);
  lVar8 = *(longlong *)this;
  if (1 < *(int *)(lVar8 + 0x18)) {
    uVar7 = 1;
    do {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)(lVar8 + 0x18)) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      if (*(longlong *)(lVar8 + 0x10) != 0) {
        lVar8 = *(longlong *)(lVar8 + 0x10);
      }
      pFVar6 = FRigElementKey::ToString
                         ((FRigElementKey *)(lVar8 + (longlong)(int)uVar7 * 0xc),&local_28);
      ::FString::ConcatFC(&local_48,__return_storage_ptr__,L", ");
      ::FString::ConcatFF(&local_68,&local_48,pFVar6);
      if (__return_storage_ptr__ != &local_68) {
        pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data
        ;
        (__return_storage_ptr__->Data).ArrayNum = local_68.Data.ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = local_68.Data.ArrayMax;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      lVar8 = *(longlong *)this;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < *(int *)(lVar8 + 0x18));
    ::FString::ConcatCF(&local_38,L"{",__return_storage_ptr__);
    ::FString::ConcatFC(&local_58,&local_38,L"}");
    if (__return_storage_ptr__ != &local_58) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 14a22acf0

bool __thiscall
`UModularRigController::GetAllModules'::__l2::<lambda_1>::operator()
          (void *this,FRigModuleReference *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((FRigModuleReference *)pFVar2->Data <= param_1) &&
     (param_1 < (FRigModuleReference *)
                (&((FRigModuleReference *)pFVar2->Data)->Name +
                *(int *)((longlong)&pFVar2[1].Data + 4)))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(FName *)(pFVar2->Data + (longlong)iVar6 * 8) = param_1->Name;
  return true;
}

// operator() @ 14a22b470

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UModularRigController::GetPossibleBindings'::__l2::<lambda_1>::operator()
          (void *this,FRigModuleReference *param_1)

{
  TSoftClassPtr<UControlRig> *this_00;
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  UControlRig *this_01;
  int iVar8;
  FName *pFVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  FName local_res10;
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> local_78;
  FText local_68;
  FRigHierarchyModulePath local_58;
  
  local_res10 = param_1->Name;
  if (**(FName **)((longlong)this + 0x10) == local_res10) {
    return true;
  }
  this_00 = &param_1->Class;
  pUVar7 = TSoftClassPtr<UControlRig>::Get(this_00);
  if (pUVar7 == (UClass *)0x0) {
    TSoftClassPtr<UControlRig>::LoadSynchronous(this_00);
  }
  pUVar7 = TSoftClassPtr<UControlRig>::Get(this_00);
  if (pUVar7 != (UClass *)0x0) {
    pUVar7 = TSoftClassPtr<UControlRig>::Get(this_00);
    this_01 = UClass::GetDefaultObject<UControlRig>(pUVar7);
    URigVMHost::GetExternalVariables((URigVMHost *)this_01,&local_78);
    iVar8 = local_78.ArrayNum;
    pFVar9 = (FName *)(local_78.AllocatorInstance.Data + (longlong)iVar8 * 0x30);
    FVar10.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      if (local_78.ArrayNum != iVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRigVMExternalVariable,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if ((FName *)FVar10.Data == pFVar9) break;
      FText::FText(&local_68);
      FRigHierarchyModulePath::FRigHierarchyModulePath<FName,FName>
                (&local_58,&local_res10,(FName *)FVar10.Data);
      bVar4 = UModularRigController::CanBindModuleVariable
                        (*(UModularRigController **)this,*(FName **)((longlong)this + 0x10),
                         *(FName **)((longlong)this + 0x18),&local_58.ModulePath,&local_68);
      if (bVar4) {
        pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
        if (((FRigHierarchyModulePath *)pFVar2->Data <= &local_58) &&
           (&local_58 <
            (FRigHierarchyModulePath *)
            (&((FRigHierarchyModulePath *)pFVar2->Data)->ModulePath +
            *(int *)((longlong)&pFVar2[1].Data + 4)))) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        iVar6 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,pFVar2,piVar1);
        }
        *(int *)&pFVar2[1].Data = iVar6 + 1;
        ::FString::FString((FString *)(pFVar2->Data + (longlong)iVar6 * 0x10),&local_58.ModulePath);
      }
      if ((local_58.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_58.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_58.CachedElementNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if ((local_58.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_58.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_58.CachedModuleNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if (local_58.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.ModulePath.Data.AllocatorInstance.Data);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      FVar10.Data = FVar10.Data + 0x30;
    }
    if ((FName *)local_78.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  return true;
}

// operator() @ 14a22b7f0

bool __thiscall
`UModularRigController::RefreshModuleVariables'::__l2::<lambda_1>::operator()
          (void *this,FRigModuleReference *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  UStruct *this_00;
  EPropertyFlags EVar4;
  code *pcVar5;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FName *pFVar10;
  FName *pFVar11;
  FProperty *pFVar12;
  longlong lVar13;
  int iVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  uint uVar17;
  FName *pFVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  ForAnyElementType local_108;
  undefined8 local_100;
  FRigHierarchyModulePath local_f8;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FText local_58;
  
  if (*(FRigModuleReference **)((longlong)this + 8) != param_1) {
    iStack_b0 = 0;
    local_b8 = &param_1->Bindings;
    uStack_ac = 1;
    puVar1 = &(param_1->Bindings).field_0x10;
    local_108.Data = (FScriptContainerElement *)0x0;
    local_100 = 0;
    iVar9 = *(int *)&(param_1->Bindings).field_0x28;
    iStack_9c = 0;
    local_98 = iStack_b0;
    if (iVar9 != 0) {
      puVar20 = *(uint **)&(param_1->Bindings).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)puVar1;
      }
      uVar17 = *puVar20;
      local_98 = 0;
      iStack_b0 = 0;
      while (uVar17 == 0) {
        lVar13 = (longlong)iStack_b0;
        local_98 = local_98 + 0x20;
        iStack_b0 = iStack_b0 + 1;
        iStack_9c = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14a22b8bd;
        uVar17 = puVar20[lVar13 + 1];
      }
      uStack_ac = -uVar17 & uVar17;
      uVar2 = (ulonglong)uStack_ac * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res18 = (int)lVar13;
      iStack_9c = local_98 + -1 + local_res18;
      if (iVar9 < iStack_9c) {
        iStack_9c = iVar9;
      }
    }
LAB_14a22b8bd:
    uVar17 = *(uint *)&(param_1->Bindings).field_0x28;
    iStack_90 = *(int *)&(param_1->Bindings).field_0x8 - *(int *)&(param_1->Bindings).field_0x34;
    uVar16 = uVar17 & 0xffffffe0;
    TStack_80._padding_ = CONCAT44(uStack_ac,iStack_b0);
    uStack_a0 = 0xffffffff;
    TStack_80.CurrentBitIndex = iStack_9c;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar17 >> 5;
    TStack_80._28_4_ = iStack_9c;
    TStack_80.BaseBitIndex = local_98;
    uStack_60 = CONCAT44(uStack_8c,iStack_90);
    local_a8 = puVar1;
    iStack_94 = iStack_9c;
    local_88 = local_b8;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar17 < 0) || (iVar9 < (int)uVar17)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    uVar3 = *(uint *)&(param_1->Bindings).field_0x28;
    if (uVar17 != uVar3) {
      puVar19 = *(undefined1 **)&(param_1->Bindings).field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = puVar1;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
      while (uVar17 == 0) {
        lVar13 = (longlong)iVar14;
        uVar16 = uVar16 + 0x20;
        iVar14 = iVar14 + 1;
        uVar17 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14a22b9c0;
        uVar17 = *(uint *)(puVar19 + lVar13 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res20 = (int)lVar13;
      uVar17 = local_res20 + -1 + uVar16;
      if ((int)uVar3 < (int)uVar17) {
        uVar17 = uVar3;
      }
    }
LAB_14a22b9c0:
    while( true ) {
      pTVar6 = local_88;
      if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_80.CurrentBitIndex == uVar17) &&
          (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar6 == &param_1->Bindings)) break;
      pFVar18 = (FName *)((longlong)TStack_80.CurrentBitIndex * 0x20 + *(longlong *)pTVar6);
      ::FString::FString(&local_f8.ModulePath,(FString *)(pFVar18 + 1));
      pFVar11 = *(FName **)((longlong)this + 0x10);
      local_f8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      local_f8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
      local_f8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
      local_f8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      local_f8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
      local_f8._44_8_ = 0xffffffffffffffff;
      local_f8.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
      local_f8.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value =
           (FNameEntryId)0xffffffff;
      local_f8.CachedElementFName.field0_0x0.TypedValue.Number = 0;
      if ((*pFVar11 != (FName)0x0) &&
         (pFVar10 = FRigHierarchyModulePath::GetModuleFName(&local_f8), *pFVar10 == *pFVar11)) {
        this_00 = *(UStruct **)((longlong)this + 0x18);
        pFVar11 = FRigHierarchyModulePath::GetElementFName(&local_f8);
        pFVar12 = UStruct::FindPropertyByName(this_00,*pFVar11);
        if (pFVar12 != (FProperty *)0x0) {
          EVar4 = pFVar12->PropertyFlags;
          if ((((EVar4 >> 0x2a & 1) == 0) && ((EVar4 & (CPF_EditConst|CPF_Edit)) != CPF_None)) &&
             ((EVar4 & CPF_DisableEditOnInstance) == CPF_None)) {
            FText::FText(&local_58);
            bVar7 = UModularRigController::CanBindModuleVariable
                              (*(UModularRigController **)this,&param_1->Name,pFVar18,
                               (FString *)(pFVar18 + 1),&local_58);
            if (!bVar7) {
              if (((local_108.Data <= pFVar18) &&
                  (pFVar18 < (FName *)(local_108.Data + (longlong)local_100._4_4_ * 8))) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar5 = (code *)swi(3);
                uVar8 = (*pcVar5)();
                return (bool)uVar8;
              }
              iVar9 = (int)local_100;
              if ((int)local_100 == local_100._4_4_) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&local_108,(int *)((longlong)&local_100 + 4));
              }
              local_100 = CONCAT44(local_100._4_4_,iVar9 + 1);
              *(FName *)(local_108.Data + (longlong)iVar9 * 8) = *pFVar18;
            }
            if (local_58.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
            }
          }
          else {
            if (((local_108.Data <= pFVar18) &&
                (pFVar18 < (FName *)(local_108.Data + (longlong)local_100._4_4_ * 8))) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            iVar9 = (int)local_100;
            if ((int)local_100 == local_100._4_4_) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&local_108,(int *)((longlong)&local_100 + 4));
            }
            local_100 = CONCAT44(local_100._4_4_,iVar9 + 1);
            *(FName *)(local_108.Data + (longlong)iVar9 * 8) = *pFVar18;
          }
        }
      }
      if ((local_f8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_f8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_f8.CachedElementNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if ((local_f8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_f8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_f8.CachedModuleNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if (local_f8.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.ModulePath.Data.AllocatorInstance.Data);
      }
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
    iVar9 = (int)local_100;
    pFVar11 = (FName *)(local_108.Data + (longlong)(int)local_100 * 8);
    FVar15.Data = local_108.Data;
    while( true ) {
      if ((int)local_100 != iVar9) {
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if ((FName *)FVar15.Data == pFVar11) break;
      UModularRigController::UnBindModuleVariable
                (*(UModularRigController **)this,&param_1->Name,(FName *)FVar15.Data,true);
      FVar15.Data = FVar15.Data + 8;
    }
    if ((FName *)local_108.Data != (FName *)0x0) {
      FMemory::Free(local_108.Data);
    }
  }
  return true;
}

// operator() @ 14a22c840

bool __thiscall
`UModularRigController::SwapModulesOfClass'::__l2::<lambda_1>::operator()
          (void *this,FRigModuleReference *param_1)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  UModularRigController *this_00;
  UClass *pUVar5;
  UClass *pUVar6;
  UObject *local_res8;
  
  plVar3 = *(longlong **)((longlong)this + 8);
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    pUVar5 = UControlRig::StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar2 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar5->_padding_)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        pUVar5 = (UClass *)*plVar3;
        goto LAB_14a22c89b;
      }
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14a22c89b:
  pUVar6 = TSoftClassPtr<UControlRig>::Get(&param_1->Class);
  if (pUVar6 == pUVar5) {
    this_00 = *(UModularRigController **)this;
    bVar1 = *(bool *)((longlong)this + 0x18);
    local_res8 = (UObject *)**(undefined8 **)((longlong)this + 0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UModularRigController::SwapModuleClass
              (this_00,&param_1->Name,(TSubclassOf<UControlRig>)&local_res8,bVar1);
  }
  return true;
}

// AddModule @ 14a23b800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a23b9fd) */
/* WARNING: Removing unreachable block (ram,0x00014a23ba02) */
/* WARNING: Removing unreachable block (ram,0x00014a23ba0a) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
UModularRigController::AddModule
          (UModularRigController *this,FName *param_1,TSubclassOf<UControlRig> param_2,
          FName *param_3,bool param_4)

{
  int *piVar1;
  FModularRigModel *pFVar2;
  FRigModuleReference *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UControlRig *this_00;
  FRigModuleSettings *pFVar9;
  FName FVar10;
  FRigName *this_01;
  FName *pFVar11;
  FRigModuleReference *pFVar12;
  uint uVar13;
  FName this_02;
  FName this_03;
  uint uVar14;
  undefined7 in_stack_00000029;
  undefined1 auStackY_3d8 [32];
  EModularRigNotification local_388 [8];
  TOptional<FName>_u_0 local_380;
  void *local_378;
  undefined4 local_370;
  int local_36c;
  FName *local_368;
  FName local_360;
  FName local_358;
  FTopLevelAssetPath local_350;
  FString local_340;
  FRigName local_330;
  FRigModuleReference local_318;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  FVar10 = *param_3;
  this_03.ComparisonIndex.Value = 0;
  this_03.Number = 0;
  local_368 = (FName *)CONCAT71(in_stack_00000029,param_4);
  if ((FVar10 != (FName)0x0) && (pUVar8 = UControlRig::StaticClass(), pUVar8 != (UClass *)0x0)) {
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)((longlong)FVar10 + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)((longlong)FVar10 + 0x30) + (longlong)iVar7 * 8)
        != &pUVar8->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (FVar10 = *param_3, FVar10 != (FName)0x0)) {
      pUVar8 = UControlRig::StaticClass();
      this_02 = this_03;
      if (pUVar8 != (UClass *)0x0) {
        iVar7 = (int)pUVar8->_padding_;
        if ((*(int *)((longlong)FVar10 + 0x38) < iVar7) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)((longlong)FVar10 + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar8->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          this_02 = *param_3;
        }
      }
      this_00 = UClass::GetDefaultObject<UControlRig>((UClass *)this_02);
      pFVar9 = UControlRig::GetRigModuleSettings(this_00);
      if (1 < (pFVar9->Identifier).Name.Data.ArrayNum) {
        local_36c = -1;
        local_380 = (TOptional<FName>_u_0)0xffffffff;
        local_378 = (void *)0x0;
        local_370 = 0;
        if (((param_2.Class.field0_0x0 != (TObjectPtr<UClass>)&local_380) &&
            (local_380 = *(TOptional<FName>_u_0 *)param_2.Class.field0_0x0,
            local_380.TypedValue.ComparisonIndex.Value.Value == 0xffffffff)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          FVar10 = (FName)(*pcVar5)();
          return FVar10;
        }
        this_01 = GetSafeNewName(this,&local_330,(FRigName *)&local_380.TypedValue,
                                 (FRigModuleReference *)0x0);
        pFVar11 = FRigName::GetFName(this_01);
        local_358 = *pFVar11;
        if ((local_330.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
           (local_330.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_330.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                                Data);
        }
        if ((local_36c != -1) && (local_378 != (void *)0x0)) {
          FMemory::Free(local_378);
        }
        local_360 = *param_3;
        pFVar2 = this->Model;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_360 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_360);
        }
        pFVar12 = FRigModuleReference::FRigModuleReference
                            (&local_318,&local_358,(TSubclassOf<UControlRig>)&local_360,local_368,
                             pFVar2);
        pFVar3 = (FRigModuleReference *)(pFVar2->Modules).AllocatorInstance.Data;
        if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + (pFVar2->Modules).ArrayMax)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          FVar10 = (FName)(*pcVar5)();
          return FVar10;
        }
        iVar7 = (pFVar2->Modules).ArrayNum;
        piVar1 = &(pFVar2->Modules).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x2d0,8,(ForAnyElementType *)pFVar2,piVar1);
        }
        (pFVar2->Modules).ArrayNum = iVar7 + 1;
        FRigModuleReference::FRigModuleReference
                  ((FRigModuleReference *)
                   ((pFVar2->Modules).AllocatorInstance.Data + (longlong)iVar7 * 0x2d0),pFVar12);
        FRigModuleReference::~FRigModuleReference(&local_318);
        pFVar2 = this->Model;
        iVar7 = (pFVar2->Modules).ArrayNum;
        uVar13 = iVar7 - 1;
        uVar14 = 0;
        if ((int)uVar13 < iVar7) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          FVar10 = (FName)(*pcVar5)();
          return FVar10;
        }
        iVar7 = (pFVar2->Modules).ArrayNum;
        pFVar4 = (pFVar2->Modules).AllocatorInstance.Data;
        FModularRigModel::UpdateCachedChildren(this->Model);
        local_388[0] = ModuleAdded;
        Notify(this,local_388,(FRigModuleReference *)(pFVar4 + (longlong)iVar7 * 0x2d0 + -0x2d0));
        *param_1 = *(FName *)(pFVar4 + (longlong)iVar7 * 0x2d0 + -0x2d0);
        return (FName)param_1;
      }
      if (1 < (byte)LogControlRig._0_1_) {
        FVar10 = *param_3;
        if ((FVar10 != (FName)0x0) && (pUVar8 = UControlRig::StaticClass(), pUVar8 != (UClass *)0x0)
           ) {
          iVar7 = (int)pUVar8->_padding_;
          if ((*(int *)((longlong)FVar10 + 0x38) < iVar7) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)((longlong)FVar10 + 0x30) + (longlong)iVar7 * 8) !=
              &pUVar8->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            this_03 = *param_3;
          }
        }
        UStruct::GetStructPathName((UStruct *)this_03,&local_350);
        FTopLevelAssetPath::ToString(&local_350,&local_340);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14a23bbf3;
    }
  }
  if (1 < (byte)LogControlRig._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
  }
LAB_14a23bbf3:
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  return (FName)param_1;
}

// AddTargetToArrayConnector @ 14a23d500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UModularRigController::AddTargetToArrayConnector
          (UModularRigController *this,FRigElementKey *param_1,FRigElementKey *param_2,bool param_3,
          bool param_4,bool param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FName *pFVar5;
  FRigModuleReference *pFVar6;
  ForElementType<FRigElementKey> FVar7;
  longlong lVar8;
  undefined1 auStackY_108 [32];
  EModularRigNotification local_b8 [8];
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_b0;
  FRigHierarchyModulePath local_98;
  TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  FModularRigConnections::FindTargetsFromConnector(&this->Model->Connections,&local_b0,param_1);
  if (((local_b0.AllocatorInstance.Data <= param_2) &&
      (param_2 < (FRigElementKey *)
                 (local_b0.AllocatorInstance.Data + (longlong)local_b0.ArrayMax * 0xc))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (local_b0.ArrayNum == local_b0.ArrayMax) {
    local_b0.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,&local_b0.AllocatorInstance,&local_b0.ArrayMax);
  }
  *(undefined8 *)(local_b0.AllocatorInstance.Data + (longlong)local_b0.ArrayNum * 0xc) =
       *(undefined8 *)param_2;
  *(uint *)(local_b0.AllocatorInstance.Data + (longlong)local_b0.ArrayNum * 0xc + 8) =
       (param_2->Name).Number;
  if (param_5) {
    local_b0.ArrayNum = local_b0.ArrayNum + 1;
    bVar2 = ConnectConnectorToElements(this,param_1,&local_b0,param_3,param_4,param_5);
  }
  else {
    local_b0.ArrayNum = local_b0.ArrayNum + 1;
    FRigHierarchyModulePath::FRigHierarchyModulePath(&local_98,&param_1->Name);
    pFVar5 = FRigHierarchyModulePath::GetModuleFName(&local_98);
    pFVar6 = FModularRigModel::FindModule(this->Model,pFVar5);
    if (pFVar6 == (FRigModuleReference *)0x0) {
      bVar2 = false;
    }
    else {
      lVar8 = (longlong)local_b0.ArrayNum;
      local_58.AllocatorInstance.SecondaryData = (ForElementType<FRigElementKey>)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 1;
      if (local_b0.ArrayNum != 0) {
        iVar4 = UE::Core::Private::
                ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigElementKey>_>
                          (0xc,4,local_b0.ArrayNum,&local_58.AllocatorInstance,&local_58.ArrayNum,
                           &local_58.ArrayMax);
        FVar7 = (ForElementType<FRigElementKey>)&local_58;
        if (local_58.AllocatorInstance.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
          FVar7 = local_58.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)((longlong)FVar7 + (longlong)iVar4 * 0xc),local_b0.AllocatorInstance.Data,
               lVar8 * 0xc);
      }
      if (this->_padding_ != 0) {
        Z_Construct_UClass_UBlueprint_NoRegister();
      }
      FModularRigConnections::RemoveConnection(&this->Model->Connections,param_1);
      FModularRigConnections::AddConnection(&this->Model->Connections,param_1,&local_58);
      local_b8[0] = ConnectionChanged;
      Notify(this,local_b8,pFVar6);
      bVar2 = true;
      if (local_58.AllocatorInstance.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
        FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
      }
    }
    if ((local_98.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_98.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_98.CachedElementNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data);
    }
    if ((local_98.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_98.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_98.CachedModuleNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data);
    }
    if (local_98.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.ModulePath.Data.AllocatorInstance.Data);
    }
  }
  if ((FRigElementKey *)local_b0.AllocatorInstance.Data != (FRigElementKey *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  return bVar2;
}

// AutoConnectModules @ 14a2411f0

bool __thiscall
UModularRigController::AutoConnectModules
          (UModularRigController *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2,bool param_3)

{
  return false;
}

// AutoConnectSecondaryConnectors @ 14a241200

bool __thiscall
UModularRigController::AutoConnectSecondaryConnectors
          (UModularRigController *this,TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2,bool param_3)

{
  return false;
}

// BindModuleVariable @ 14a241a00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UModularRigController::BindModuleVariable
          (UModularRigController *this,FName *param_1,FName *param_2,FString *param_3,bool param_4)

{
  int iVar1;
  FModularRigModel *this_00;
  longlong lVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  FString *pFVar7;
  FRigModuleReference *pFVar8;
  FName *pFVar9;
  FRigHierarchyModulePath *pFVar10;
  undefined8 uVar11;
  FRigModuleReference *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  EModularRigNotification local_d8 [8];
  undefined1 local_d0 [16];
  TOptional<FString>_u_0 local_c0;
  TOptional<FString>_u_0 local_b0;
  TOptional<FName>_u_0 local_a0;
  TOptional<FName>_u_0 local_98;
  void *local_88;
  undefined4 local_80;
  int local_7c;
  void *local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  FRigModuleReference *local_58;
  FName local_50;
  FText local_48;
  FString local_38;
  
  iVar15 = 0;
  local_a0.TypedValue.ComparisonIndex.Value = (FNameEntryId)0;
  FText::FText(&local_48);
  bVar4 = CanBindModuleVariable(this,param_1,param_2,param_3,&local_48);
  if (!bVar4) {
    if (1 < (byte)LogControlRig._0_1_) {
      FText::ToString(&local_48);
      FRigHierarchyModulePath::FRigHierarchyModulePath<FName,FName>
                ((FRigHierarchyModulePath *)(local_d0 + 0x38),param_1,param_2);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      if (((int)local_6c != -1) && (local_78 != (void *)0x0)) {
        FMemory::Free(local_78);
      }
      if ((local_7c != -1) && (local_88 != (void *)0x0)) {
        FMemory::Free(local_88);
      }
      if (local_98 != (TOptional<FName>_u_0)0x0) {
        FMemory::Free((void *)local_98);
      }
    }
    bVar4 = false;
    goto LAB_14a241e76;
  }
  local_58 = FModularRigModel::FindModule(this->Model,param_1);
  pUVar6 = TSoftClassPtr<UControlRig>::Get(&local_58->Class);
  UStruct::FindPropertyByName((UStruct *)pUVar6,*param_2);
  local_d0._8_4_ = (param_3->Data).ArrayNum;
  lVar13 = (longlong)(int)local_d0._8_4_;
  pFVar14 = (param_3->Data).AllocatorInstance.Data;
  local_b0.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_b0._8_8_ = 0;
  local_d0._0_8_ = (FScriptContainerElement *)0x0;
  if (local_d0._8_4_ == 0) {
    local_d0._12_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_d0._8_4_,0,(ForAnyElementType *)local_d0,local_d0._8_4_,
               (int *)(local_d0 + 0xc));
    memcpy((void *)local_d0._0_8_,pFVar14,lVar13 * 2);
  }
  ::FString::FString((FString *)(local_d0 + 0x38),param_3);
  local_88 = (void *)0x0;
  local_80 = 0;
  local_7c = -1;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0xffffffffffffffff;
  local_64 = 0;
  local_60 = 0xffffffff;
  local_5c = 0;
  FRigHierarchyModulePath::Split
            ((FRigHierarchyModulePath *)(local_d0 + 0x38),(FString *)(local_d0 + 0x20),
             (FString *)local_d0);
  if (((int)local_6c != -1) && (local_78 != (void *)0x0)) {
    FMemory::Free(local_78);
  }
  if ((local_7c != -1) && (local_88 != (void *)0x0)) {
    FMemory::Free(local_88);
  }
  if (local_98 != (TOptional<FName>_u_0)0x0) {
    FMemory::Free((void *)local_98);
  }
  if (local_b0.TypedValue.Data.ArrayNum < 2) {
LAB_14a241ca6:
    lVar13 = this->_padding_;
    if (lVar13 != 0) {
      pUVar6 = Z_Construct_UClass_UBlueprint_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          == &pUVar6->_padding_)) {
        lVar2 = *(longlong *)(lVar13 + 0x30);
        if ((lVar2 != 0) &&
           (pUVar6 = Z_Construct_UClass_UObject_NoRegister(), pUVar6 != (UClass *)0x0)) {
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)(lVar2 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar6->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            pUVar6 = *(UClass **)(lVar13 + 0x30);
            goto LAB_14a241d17;
          }
        }
        pUVar6 = (UClass *)0x0;
        goto LAB_14a241d17;
      }
    }
  }
  else {
    uVar11 = L"";
    if (local_b0.TypedValue.Data.ArrayNum != 0) {
      uVar11 = local_b0.TypedValue.Data.AllocatorInstance.Data;
    }
    ::FName::FName((FName *)(local_d0 + 0x30),(wchar_t *)uVar11);
    FVar3.Number = local_a0.TypedValue.Number;
    FVar3.ComparisonIndex.Value = (uint)local_a0.TypedValue.ComparisonIndex.Value;
    this_00 = this->Model;
    if (FVar3 == (FName)0x0) goto LAB_14a241ca6;
    pFVar8 = (FRigModuleReference *)(this_00->Modules).AllocatorInstance.Data;
    pFVar12 = pFVar8 + (this_00->Modules).ArrayNum;
    for (; pFVar8 != pFVar12; pFVar8 = pFVar8 + 1) {
      if (pFVar8->Name == FVar3) {
        if (pFVar8 != (FRigModuleReference *)0x0) goto LAB_14a241c98;
        break;
      }
    }
    pFVar7 = ::FName::ToString((FName *)(local_d0 + 0x30),&local_38);
    pFVar8 = FModularRigModel::FindModuleByPath(this_00,pFVar7);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (pFVar8 == (FRigModuleReference *)0x0) goto LAB_14a241ca6;
LAB_14a241c98:
    pUVar6 = TSoftClassPtr<UControlRig>::Get(&pFVar8->Class);
LAB_14a241d17:
    pFVar14 = (FScriptContainerElement *)L"";
    if (local_d0._8_4_ != 0) {
      pFVar14 = (FScriptContainerElement *)local_d0._0_8_;
    }
    pFVar9 = ::FName::FName(&local_50,(wchar_t *)pFVar14);
    UStruct::FindPropertyByName((UStruct *)pUVar6,*pFVar9);
  }
  bVar4 = 1 < local_b0.TypedValue.Data.ArrayNum;
  if (bVar4) {
    pFVar10 = FRigHierarchyModulePath::FRigHierarchyModulePath<FString,FString>
                        ((FRigHierarchyModulePath *)(local_d0 + 0x38),(FString *)(local_d0 + 0x20),
                         (FString *)local_d0);
  }
  else {
    pFVar10 = (FRigHierarchyModulePath *)local_d0;
  }
  local_c0.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_c0.TypedValue.Data.ArrayNum = (pFVar10->ModulePath).Data.ArrayNum;
  lVar13 = (longlong)local_c0.TypedValue.Data.ArrayNum;
  pFVar14 = (pFVar10->ModulePath).Data.AllocatorInstance.Data;
  if (local_c0.TypedValue.Data.ArrayNum == 0) {
    local_c0.TypedValue.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_c0.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)(local_d0 + 0x10),
               local_c0.TypedValue.Data.ArrayNum,(int *)(local_d0 + 0x1c));
    memcpy((void *)local_c0.TypedValue.Data.AllocatorInstance.Data,pFVar14,lVar13 * 2);
  }
  if (bVar4) {
    if (((int)local_6c != -1) && (local_78 != (void *)0x0)) {
      FMemory::Free(local_78);
    }
    if ((local_7c != -1) && (local_88 != (void *)0x0)) {
      FMemory::Free(local_88);
    }
    if (local_98 != (TOptional<FName>_u_0)0x0) {
      FMemory::Free((void *)local_98);
    }
  }
  FVar3 = *param_2;
  uVar5 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  pFVar8 = local_58;
  pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&local_58->Bindings,FVar3.Number + uVar5,param_2);
  if (local_c0.TypedValue.Data.ArrayNum != 0) {
    iVar15 = local_c0.TypedValue.Data.ArrayNum + -1;
  }
  ::FString::AssignRange(pFVar7,(wchar_t *)local_c0.TypedValue.Data.AllocatorInstance.Data,iVar15);
  local_d8[0] = ModuleConfigValueChanged;
  Notify(this,local_d8,pFVar8);
  bVar4 = true;
  if (local_c0.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c0.TypedValue.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_d0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d0._0_8_);
  }
  if (local_b0.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b0.TypedValue.Data.AllocatorInstance.Data);
  }
LAB_14a241e76:
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return bVar4;
}

// CanBindModuleVariable @ 14a244580

/* WARNING: Removing unreachable block (ram,0x00014a244aac) */

bool __thiscall
UModularRigController::CanBindModuleVariable
          (UModularRigController *this,FName *param_1,FName *param_2,FString *param_3,FText *param_4
          )

{
  int iVar1;
  FModularRigModel *this_00;
  longlong lVar2;
  longlong lVar3;
  FName FVar4;
  bool bVar5;
  FRigModuleReference *pFVar6;
  FText *pFVar7;
  UClass *pUVar8;
  FString *pFVar9;
  FProperty *pFVar10;
  FName *pFVar11;
  FProperty *pFVar12;
  FRigHierarchyModulePath *pFVar13;
  wchar_t *pwVar14;
  FRigModuleReference *pFVar15;
  ForAnyElementType FVar16;
  UStruct *this_01;
  FName local_res8;
  FString local_108;
  FText local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FRigHierarchyModulePath local_b8;
  FString local_78;
  FText local_68;
  FText local_58;
  void *local_48 [2];
  
  local_res8.ComparisonIndex.Value = 0;
  pFVar6 = FModularRigModel::FindModule(this->Model,param_1);
  if (pFVar6 == (FRigModuleReference *)0x0) {
    ::FName::ToString(param_1,&local_e8);
    pwVar14 = L"Could not find module %s";
  }
  else {
    pUVar8 = TSoftClassPtr<UControlRig>::Get(&pFVar6->Class);
    if (pUVar8 != (UClass *)0x0) {
      pUVar8 = TSoftClassPtr<UControlRig>::Get(&pFVar6->Class);
      pFVar10 = UStruct::FindPropertyByName((UStruct *)pUVar8,*param_2);
      if (pFVar10 == (FProperty *)0x0) {
        ::FName::ToString(param_1,&local_78);
        ::FName::ToString(param_2,&local_e8);
        pwVar14 = L"Could not find variable %s in module %s";
      }
      else {
        if ((pFVar10->PropertyFlags & (CPF_DisableEditOnInstance|CPF_BlueprintReadOnly)) == CPF_None
           ) {
          local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.Data.ArrayNum = 0;
          local_d8.Data.ArrayMax = 0;
          ::FString::FString(&local_c8,param_3);
          ::FString::FString(&local_b8.ModulePath,param_3);
          local_b8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_b8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
          local_b8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
          local_b8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_b8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
          local_b8._44_8_ = 0xffffffffffffffff;
          local_b8.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
          local_b8.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value =
               (FNameEntryId)0xffffffff;
          local_b8.CachedElementFName.field0_0x0.TypedValue.Number = 0;
          FRigHierarchyModulePath::Split(&local_b8,&local_d8,&local_c8);
          if ((local_b8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
             (local_b8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_b8.CachedElementNameString.field0_0x0.TypedValue.Data.
                                  AllocatorInstance.Data);
          }
          if ((local_b8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
             (local_b8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_b8.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                  AllocatorInstance.Data);
          }
          if (local_b8.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.ModulePath.Data.AllocatorInstance.Data);
          }
          if (local_d8.Data.ArrayNum < 2) {
            lVar2 = this->_padding_;
            if (lVar2 != 0) {
              pUVar8 = Z_Construct_UClass_UBlueprint_NoRegister();
              iVar1 = (int)pUVar8->_padding_;
              if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
                  &pUVar8->_padding_)) {
                lVar3 = *(longlong *)(lVar2 + 0x30);
                if ((lVar3 == 0) ||
                   (pUVar8 = Z_Construct_UClass_UObject_NoRegister(), pUVar8 == (UClass *)0x0)) {
LAB_14a244a4d:
                  this_01 = (UStruct *)0x0;
                }
                else {
                  iVar1 = (int)pUVar8->_padding_;
                  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
                     ((longlong *)
                      *(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
                      &pUVar8->_padding_)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  if (!bVar5) goto LAB_14a244a4d;
                  this_01 = *(UStruct **)(lVar2 + 0x30);
                }
                FVar16.Data = (FScriptContainerElement *)L"";
                if (local_c8.Data.ArrayNum != 0) {
                  FVar16.Data = local_c8.Data.AllocatorInstance.Data;
                }
                pFVar11 = ::FName::FName(&local_res8,(wchar_t *)FVar16.Data);
                pFVar12 = UStruct::FindPropertyByName(this_01,*pFVar11);
LAB_14a244a73:
                if (pFVar12 != (FProperty *)0x0) {
                  bVar5 = RigVMTypeUtils::AreCompatible(pFVar12,pFVar10);
                  if (bVar5) {
                    bVar5 = true;
                    goto LAB_14a244c9f;
                  }
                  if (local_d8.Data.ArrayNum < 2) {
                    ::FString::FString(&local_e8,&local_c8);
                  }
                  else {
                    pFVar13 = FRigHierarchyModulePath::FRigHierarchyModulePath<FString,FString>
                                        (&local_b8,&local_d8,&local_c8);
                    ::FString::FString(&local_e8,&pFVar13->ModulePath);
                    if ((local_b8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1)
                       && (local_b8.CachedElementNameString.field0_0x0.TypedValue.Data.
                           AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                      FMemory::Free((void *)local_b8.CachedElementNameString.field0_0x0.TypedValue.
                                            Data.AllocatorInstance.Data);
                    }
                    if ((local_b8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1)
                       && (local_b8.CachedModuleNameString.field0_0x0.TypedValue.Data.
                           AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                      FMemory::Free((void *)local_b8.CachedModuleNameString.field0_0x0.TypedValue.
                                            Data.AllocatorInstance.Data);
                    }
                    if (local_b8.ModulePath.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_b8.ModulePath.Data.AllocatorInstance.Data);
                    }
                  }
                  ::FName::ToString(param_2,(FString *)&local_68);
                  ::FName::ToString(param_1,(FString *)&local_f8);
                  ::FString::PrintfImpl(&local_108,L"%s.%s");
                  if ((FName)local_f8.TextData.Reference != (FName)0x0) {
                    FMemory::Free(local_f8.TextData.Reference);
                  }
                  if (local_68.TextData.Reference != (ITextData *)0x0) {
                    FMemory::Free(local_68.TextData.Reference);
                  }
                  (**(code **)(pFVar10->_padding_ + 0x68))(pFVar10,&local_58,0,0);
                  (**(code **)(pFVar12->_padding_ + 0x68))(pFVar12,local_48,0,0);
                  ::FString::PrintfImpl
                            ((FString *)&local_f8,
                             L"Property %s of type %s and %s of type %s are not compatible");
                  pFVar7 = FText::FromString(&local_68,(FString *)&local_f8);
                  FText::operator=(param_4,pFVar7);
                  if (local_68.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
                  }
                  if ((FName)local_f8.TextData.Reference != (FName)0x0) {
                    FMemory::Free(local_f8.TextData.Reference);
                  }
                  if (local_48[0] != (void *)0x0) {
                    FMemory::Free(local_48[0]);
                  }
                  if (local_58.TextData.Reference != (ITextData *)0x0) {
                    FMemory::Free(local_58.TextData.Reference);
                  }
                  goto LAB_14a244934;
                }
              }
            }
            ::FString::PrintfImpl((FString *)&local_f8,L"Could not find source variable %s");
            pFVar7 = FText::FromString(&local_58,(FString *)&local_f8);
            FText::operator=(param_4,pFVar7);
            local_e8.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)local_f8.TextData.Reference;
            if (local_58.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
              local_e8.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)local_f8.TextData.Reference;
            }
          }
          else {
            FVar16.Data = (FScriptContainerElement *)L"";
            if (local_d8.Data.ArrayNum != 0) {
              FVar16.Data = local_d8.Data.AllocatorInstance.Data;
            }
            ::FName::FName(&local_res8,(wchar_t *)FVar16.Data);
            FVar4.Number = local_res8.Number;
            FVar4.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
            this_00 = this->Model;
            if (FVar4 != (FName)0x0) {
              pFVar6 = (FRigModuleReference *)(this_00->Modules).AllocatorInstance.Data;
              pFVar15 = pFVar6 + (this_00->Modules).ArrayNum;
              for (; pFVar6 != pFVar15; pFVar6 = pFVar6 + 1) {
                if (pFVar6->Name == FVar4) {
                  if (pFVar6 != (FRigModuleReference *)0x0) goto LAB_14a2448bc;
                  break;
                }
              }
              pFVar9 = ::FName::ToString(&local_res8,(FString *)&local_f8);
              pFVar6 = FModularRigModel::FindModuleByPath(this_00,pFVar9);
              if ((FName)local_f8.TextData.Reference != (FName)0x0) {
                FMemory::Free(local_f8.TextData.Reference);
              }
              if (pFVar6 != (FRigModuleReference *)0x0) {
LAB_14a2448bc:
                bVar5 = FModularRigModel::IsModuleParentedTo(this->Model,&pFVar6->Name,param_1);
                if (!bVar5) {
                  pUVar8 = TSoftClassPtr<UControlRig>::Get(&pFVar6->Class);
                  FVar16.Data = (FScriptContainerElement *)L"";
                  if (local_c8.Data.ArrayNum != 0) {
                    FVar16.Data = local_c8.Data.AllocatorInstance.Data;
                  }
                  pFVar11 = ::FName::FName((FName *)&local_78,(wchar_t *)FVar16.Data);
                  pFVar12 = UStruct::FindPropertyByName((UStruct *)pUVar8,*pFVar11);
                  goto LAB_14a244a73;
                }
                ::FName::ToString(param_1,&local_e8);
                ::FString::PrintfImpl
                          (&local_108,
                           L"Cannot bind variable of module %s to a variable of module %s because the source module is a child of the target module"
                          );
                pFVar7 = FText::FromString(&local_f8,&local_108);
                FText::operator=(param_4,pFVar7);
                if ((FName)local_f8.TextData.Reference != (FName)0x0) {
                  (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
                }
LAB_14a244934:
                if ((FName)local_108.Data.AllocatorInstance.Data != (FName)0x0) {
                  FMemory::Free(local_108.Data.AllocatorInstance.Data);
                }
                goto LAB_14a244c93;
              }
            }
            ::FString::PrintfImpl(&local_108,L"Could not find source module %s");
            pFVar7 = FText::FromString(&local_f8,&local_108);
            FText::operator=(param_4,pFVar7);
            local_e8.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
            if ((FName)local_f8.TextData.Reference != (FName)0x0) {
              (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
              local_e8.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
            }
          }
LAB_14a244c93:
          if ((FName)local_e8.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
LAB_14a244c9f:
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if (local_d8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return bVar5;
          }
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          return bVar5;
        }
        ::FName::ToString(param_1,&local_78);
        ::FName::ToString(param_2,&local_e8);
        pwVar14 = L"The target variable %s in module %s is read only";
      }
      ::FString::PrintfImpl(&local_108,pwVar14);
      pFVar7 = FText::FromString(&local_f8,&local_108);
      FText::operator=(param_4,pFVar7);
      if ((FName)local_f8.TextData.Reference != (FName)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      if ((FName)local_108.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if ((FName)local_e8.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      goto LAB_14a24477d;
    }
    pFVar9 = ::FName::ToString(param_1,&local_e8);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar14 = L"Class defined in module %s is not valid";
    }
    else {
      pwVar14 = L"Class defined in module %s is not valid";
    }
  }
  ::FString::PrintfImpl(&local_108,pwVar14);
  pFVar7 = FText::FromString(&local_f8,&local_108);
  FText::operator=(param_4,pFVar7);
  if ((FName)local_f8.TextData.Reference != (FName)0x0) {
    (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
  }
  local_78.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
  if ((FName)local_108.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
    local_78.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
  }
LAB_14a24477d:
  if ((FName)local_78.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return false;
}

// CanConnectConnectorToElement @ 14a244ce0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UModularRigController::CanConnectConnectorToElement
          (UModularRigController *this,FRigElementKey *param_1,FRigElementKey *param_2,
          FText *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_18;
  
  uVar2 = (param_2->Name).Number;
  uVar1 = *(undefined8 *)param_2;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
  *(undefined8 *)local_18.AllocatorInstance.Data = uVar1;
  *(uint *)(local_18.AllocatorInstance.Data + 8) = uVar2;
  bVar3 = CanConnectConnectorToElements(this,param_1,&local_18,param_3);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar3;
}

// CanConnectConnectorToElements @ 14a244db0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UModularRigController::CanConnectConnectorToElements
          (UModularRigController *this,FRigElementKey *param_1,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_2,FText *param_3)

{
  TSoftClassPtr<UControlRig> *this_00;
  TOptional<FString> *pTVar1;
  TOptional<FName> *pTVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  FRigElementKey *pFVar6;
  FName FVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  FText *pFVar11;
  FName *pFVar12;
  UClass *pUVar13;
  FRigModuleSettings *pFVar14;
  TStringView<wchar_t> *pTVar15;
  FString *pFVar16;
  FRigHierarchyModulePath *pFVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  FRigElementKey *this_01;
  undefined1 local_res10 [8];
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *local_res18;
  FRigHierarchyModulePath local_2d8;
  FRigModuleReference *local_298;
  FRigHierarchyModulePath local_288;
  FRigModuleConnector *local_248;
  UControlRig *local_240;
  FRigElementKey *local_238;
  FRigElementKey local_230;
  FRigElementKey local_220;
  FRigElementKey local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FText local_180;
  FText local_170;
  FString local_160;
  FText local_150;
  FString local_140;
  FText local_130;
  FText local_120;
  FString local_110;
  FString local_100;
  FText local_f0;
  FString local_e0;
  FText local_d0;
  FString local_c0;
  FString local_b0;
  FText local_98;
  FRigHierarchyModulePath local_88;
  TStringView<wchar_t> local_48;
  
  local_res18 = param_2;
  FRigHierarchyModulePath::FRigHierarchyModulePath(&local_288,&param_1->Name);
  bVar8 = FRigHierarchyModulePath::IsValid(&local_288);
  if (bVar8) {
    pFVar12 = FRigHierarchyModulePath::GetModuleFName(&local_288);
    local_298 = FModularRigModel::FindModule(this->Model,pFVar12);
    if (local_298 == (FRigModuleReference *)0x0) {
      FRigHierarchyModulePath::GetModuleNameString(&local_288);
      ::FString::PrintfImpl(&local_1e0,L"Could not find module %s");
      pFVar11 = FText::FromString(&local_180,&local_1e0);
      FText::operator=(param_3,pFVar11);
      if (local_180.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
      }
      goto LAB_14a245737;
    }
    this_00 = &local_298->Class;
    pUVar13 = TSoftClassPtr<UControlRig>::Get(this_00);
    local_240 = UClass::GetDefaultObject<UControlRig>(pUVar13);
    if (local_240 == (UControlRig *)0x0) {
      pUVar13 = TSoftClassPtr<UControlRig>::Get(this_00);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar13,&local_160,(UObject *)0x0);
      ::FString::PrintfImpl(&local_1d0,L"Invalid rig module class %s");
      pFVar11 = FText::FromString(&local_170,&local_1d0);
      FText::operator=(param_3,pFVar11);
      if (local_170.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
      }
      local_1e0.Data.AllocatorInstance.Data = local_160.Data.AllocatorInstance.Data;
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        local_1e0.Data.AllocatorInstance.Data = local_160.Data.AllocatorInstance.Data;
      }
      goto LAB_14a245737;
    }
    pFVar14 = UControlRig::GetRigModuleSettings(local_240);
    local_248 = TArray<FRigModuleConnector,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_UModularRigController::CanConnectConnectorToElements_::__l2::<lambda_1>_>
                          (&pFVar14->ExposedConnectors,&local_288);
    if (local_248 == (FRigModuleConnector *)0x0) {
      pUVar13 = TSoftClassPtr<UControlRig>::Get(this_00);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar13,&local_140,(UObject *)0x0);
      FRigHierarchyModulePath::GetElementNameString(&local_288);
      ::FString::PrintfImpl(&local_1c0,L"Could not find connector %s in class %s");
      pFVar11 = FText::FromString(&local_150,&local_1c0);
      FText::operator=(param_3,pFVar11);
      if (local_150.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
      }
      local_1e0.Data.AllocatorInstance.Data = local_140.Data.AllocatorInstance.Data;
      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        local_1e0.Data.AllocatorInstance.Data = local_140.Data.AllocatorInstance.Data;
      }
      goto LAB_14a245737;
    }
    iVar3 = param_2->ArrayNum;
    if (iVar3 != 0) {
      this_01 = (FRigElementKey *)(param_2->AllocatorInstance).Data;
      local_238 = this_01 + iVar3;
      while( true ) {
        pFVar6 = local_238;
        if (param_2->ArrayNum != iVar3) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (this_01 == pFVar6) break;
        bVar8 = ::FName::IsWithinBounds((FNameEntryId)(this_01->Name).ComparisonIndex.Value);
        if (((!bVar8) || (this_01->Name == (FName)0x0)) || (this_01->Type == None)) {
          pUVar13 = TSoftClassPtr<UControlRig>::Get(&local_298->Class);
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar13,&local_b0,(UObject *)0x0);
          FRigElementKey::ToString(this_01,&local_c0);
          ::FString::PrintfImpl(&local_200,L"Invalid target %s in class %s");
          pFVar11 = FText::FromString(&local_d0,&local_200);
          FText::operator=(param_3,pFVar11);
          if (local_d0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
          }
          if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_200.Data.AllocatorInstance.Data);
          }
          local_1e0.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
            local_1e0.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
          }
          goto LAB_14a245737;
        }
        if ((this_01->Name == param_1->Name) && (this_01->Type == param_1->Type)) {
          pUVar13 = TSoftClassPtr<UControlRig>::Get(&local_298->Class);
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar13,&local_100,(UObject *)0x0);
          FRigElementKey::ToString(this_01,&local_110);
          ::FString::PrintfImpl(&local_1b0,L"Cannot resolve connector %s to itself in class %s");
          pFVar11 = FText::FromString(&local_120,&local_1b0);
          FText::operator=(param_3,pFVar11);
          if (local_120.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
          }
          if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
          }
          local_1e0.Data.AllocatorInstance.Data = local_100.Data.AllocatorInstance.Data;
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
            local_1e0.Data.AllocatorInstance.Data = local_100.Data.AllocatorInstance.Data;
          }
          goto LAB_14a245737;
        }
        FModularRigConnections::FindTargetFromConnector
                  (&this->Model->Connections,&local_230,param_1);
        FVar7 = local_230.Name;
        bVar8 = ::FName::IsWithinBounds(local_230.Name.ComparisonIndex.Value);
        if (((bVar8) && (FVar7 != (FName)0x0)) &&
           ((local_230.Type != None &&
            ((this_01->Name == FVar7 && (this_01->Type == local_230.Type)))))) break;
        if ((local_248->Settings).Type != Primary) {
          pFVar14 = UControlRig::GetRigModuleSettings(local_240);
          pFVar19 = (pFVar14->ExposedConnectors).AllocatorInstance.Data;
          pFVar18 = pFVar19 + (longlong)(pFVar14->ExposedConnectors).ArrayNum * 0x38;
          for (; pFVar19 != pFVar18; pFVar19 = pFVar19 + 0x38) {
            if (pFVar19[0x20].field_0x0 == '\0') goto LAB_14a2451a7;
          }
          pFVar19 = (FScriptContainerElement *)0x0;
LAB_14a2451a7:
          ::FString::FString(&local_2d8.ModulePath,&local_288.ModulePath);
          local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
          local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
          if (local_288.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) {
            ::FString::FString((FString *)&local_2d8.CachedModuleNameString,
                               (FString *)&local_288.CachedModuleNameString);
          }
          local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
          local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
          if (local_288.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) {
            ::FString::FString((FString *)&local_2d8.CachedElementNameString,
                               (FString *)&local_288.CachedElementNameString);
          }
          local_2d8.CachedModuleFName.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
          if (local_288.CachedModuleFName.field0_0x0._0_4_ != 0xffffffff) {
            local_2d8.CachedModuleFName.field0_0x0.TypedValue =
                 local_288.CachedModuleFName.field0_0x0;
          }
          local_2d8.CachedElementFName.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
          if (local_288.CachedElementFName.field0_0x0._0_4_ != 0xffffffff) {
            local_2d8.CachedElementFName.field0_0x0.TypedValue =
                 local_288.CachedElementFName.field0_0x0;
          }
          pTVar15 = FRigHierarchyModulePath::GetElementName(&local_2d8,&local_48);
          iVar20 = *(int *)(pFVar19 + 8) + -1;
          if (*(int *)(pFVar19 + 8) == 0) {
            iVar20 = 0;
          }
          iVar4 = pTVar15->Size;
          if ((iVar4 != iVar20) ||
             ((((iVar4 != 0 && (iVar20 != 0)) &&
               (iVar10 = FGenericPlatformStricmp::Strnicmp
                                   (pTVar15->DataPtr,*(wchar_t **)pFVar19,(longlong)iVar20),
               iVar10 != 0)) || (iVar4 != iVar20)))) {
            pFVar16 = FRigHierarchyModulePath::GetModuleNameString(&local_2d8);
            pFVar17 = FRigHierarchyModulePath::Join(&local_88,pFVar16,(FString *)pFVar19);
            if (&local_2d8 != pFVar17) {
              if (local_2d8.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 ) {
                FMemory::Free(local_2d8.ModulePath.Data.AllocatorInstance.Data);
              }
              local_2d8.ModulePath.Data.AllocatorInstance.Data =
                   (pFVar17->ModulePath).Data.AllocatorInstance.Data;
              (pFVar17->ModulePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_2d8.ModulePath.Data.ArrayNum = (pFVar17->ModulePath).Data.ArrayNum;
              local_2d8.ModulePath.Data.ArrayMax = (pFVar17->ModulePath).Data.ArrayMax;
              (pFVar17->ModulePath).Data.ArrayNum = 0;
              (pFVar17->ModulePath).Data.ArrayMax = 0;
            }
            pTVar1 = &pFVar17->CachedModuleNameString;
            if (pTVar1 != &local_2d8.CachedModuleNameString) {
              if (*(int *)((longlong)&(pFVar17->CachedModuleNameString).field0_0x0 + 0xc) == -1) {
                if (local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) {
                  if (local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                      Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free((void *)local_2d8.CachedModuleNameString.field0_0x0.TypedValue.
                                          Data.AllocatorInstance.Data);
                  }
                  local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                       = (ForAnyElementType)(FScriptContainerElement *)0x0;
                  local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
                  local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
                }
              }
              else {
                if (local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                    Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free((void *)local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                        AllocatorInstance.Data);
                }
                local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
                     (ForAnyElementType)(pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
                (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                     (FScriptContainerElement *)0x0;
                local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum =
                     *(int *)((longlong)&(pFVar17->CachedModuleNameString).field0_0x0 + 8);
                local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax =
                     *(int *)((longlong)&(pFVar17->CachedModuleNameString).field0_0x0 + 0xc);
                *(int *)((longlong)&(pFVar17->CachedModuleNameString).field0_0x0 + 8) = 0;
                *(int *)((longlong)&(pFVar17->CachedModuleNameString).field0_0x0 + 0xc) = 0;
                if ((local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax == -1) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsSet()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                       ,0x171,
                                       L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  uVar9 = (*pcVar5)();
                  return (bool)uVar9;
                }
              }
            }
            pTVar1 = &pFVar17->CachedElementNameString;
            if (pTVar1 != &local_2d8.CachedElementNameString) {
              if (*(int *)((longlong)&(pFVar17->CachedElementNameString).field0_0x0 + 0xc) == -1) {
                if (local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) {
                  if (local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance
                      .Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free((void *)local_2d8.CachedElementNameString.field0_0x0.TypedValue.
                                          Data.AllocatorInstance.Data);
                  }
                  local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                  Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
                  local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
                  local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
                }
              }
              else {
                if (local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                    Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free((void *)local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data
                                        .AllocatorInstance.Data);
                }
                local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                     = (ForAnyElementType)
                       (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
                (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                     (FScriptContainerElement *)0x0;
                local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum =
                     *(int *)((longlong)&(pFVar17->CachedElementNameString).field0_0x0 + 8);
                local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax =
                     *(int *)((longlong)&(pFVar17->CachedElementNameString).field0_0x0 + 0xc);
                *(int *)((longlong)&(pFVar17->CachedElementNameString).field0_0x0 + 8) = 0;
                *(int *)((longlong)&(pFVar17->CachedElementNameString).field0_0x0 + 0xc) = 0;
                if ((local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax == -1) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsSet()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                       ,0x171,
                                       L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  uVar9 = (*pcVar5)();
                  return (bool)uVar9;
                }
              }
            }
            pTVar2 = &pFVar17->CachedModuleFName;
            if (pTVar2 != &local_2d8.CachedModuleFName) {
              if ((pTVar2->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
                if (local_2d8.CachedModuleFName.field0_0x0.TypedValue.ComparisonIndex.Value !=
                    0xffffffff) {
                  local_2d8.CachedModuleFName.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
                }
              }
              else {
                local_2d8.CachedModuleFName.field0_0x0 =
                     (TOptional<FName>_u_0)*(TOptional<FName>_u_0 *)&(pTVar2->field0_0x0).TypedValue
                ;
                if ((local_2d8.CachedModuleFName.field0_0x0._0_4_ == 0xffffffff) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsSet()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                       ,0x171,
                                       L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  uVar9 = (*pcVar5)();
                  return (bool)uVar9;
                }
              }
            }
            pTVar2 = &pFVar17->CachedElementFName;
            if (pTVar2 != &local_2d8.CachedElementFName) {
              if ((pTVar2->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
                if (local_2d8.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value !=
                    0xffffffff) {
                  local_2d8.CachedElementFName.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
                }
              }
              else {
                local_2d8.CachedElementFName.field0_0x0 =
                     (TOptional<FName>_u_0)*(TOptional<FName>_u_0 *)&(pTVar2->field0_0x0).TypedValue
                ;
                if ((local_2d8.CachedElementFName.field0_0x0._0_4_ == 0xffffffff) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsSet()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                       ,0x171,
                                       L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  uVar9 = (*pcVar5)();
                  return (bool)uVar9;
                }
              }
            }
            if ((local_88.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
               (local_88.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                != (FScriptContainerElement *)0x0)) {
              FMemory::Free((void *)local_88.CachedElementNameString.field0_0x0.TypedValue.Data.
                                    AllocatorInstance.Data);
            }
            if ((local_88.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
               (local_88.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0)) {
              FMemory::Free((void *)local_88.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                    AllocatorInstance.Data);
            }
            if (local_88.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.ModulePath.Data.AllocatorInstance.Data);
            }
          }
          local_220.Name = FRigHierarchyModulePath::GetPathFName(&local_2d8);
          local_220.Type = Connector;
          local_220.Name = *(FName *)local_220.Name;
          FModularRigConnections::FindTargetFromConnector
                    (&this->Model->Connections,&local_210,&local_220);
          FVar7 = local_210.Name;
          bVar8 = ::FName::IsWithinBounds(local_210.Name.ComparisonIndex.Value);
          if (((!bVar8) || (FVar7 == (FName)0x0)) || (local_210.Type == None)) {
            FRigElementKey::ToString(param_1,&local_e0);
            ::FString::PrintfImpl
                      (&local_1a0,
                       L"Cannot resolve connector %s because primary connector is not resolved");
            pFVar11 = FText::FromString(&local_f0,&local_1a0);
            FText::operator=(param_3,pFVar11);
            if (local_f0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
            }
            if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
            }
            if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
            }
            if ((local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
               (local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                != (FScriptContainerElement *)0x0)) {
              FMemory::Free((void *)local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data.
                                    AllocatorInstance.Data);
            }
            local_1e0.Data.AllocatorInstance.Data = local_2d8.ModulePath.Data.AllocatorInstance.Data
            ;
            if ((local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
               (local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                != (FScriptContainerElement *)0x0)) {
              FMemory::Free((void *)local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                    AllocatorInstance.Data);
              local_1e0.Data.AllocatorInstance.Data =
                   local_2d8.ModulePath.Data.AllocatorInstance.Data;
            }
            goto LAB_14a245737;
          }
          if ((local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
             (local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_2d8.CachedElementNameString.field0_0x0.TypedValue.Data.
                                  AllocatorInstance.Data);
          }
          if ((local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
             (local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_2d8.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                  AllocatorInstance.Data);
          }
          param_2 = local_res18;
          if (local_2d8.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d8.ModulePath.Data.AllocatorInstance.Data);
            param_2 = local_res18;
          }
        }
        this_01 = this_01 + 1;
      }
      bVar8 = true;
      goto LAB_14a245805;
    }
    pFVar11 = FText::FromString(&local_130,L"Invalid empty target array");
    FText::operator=(param_3,pFVar11);
    if (local_130.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
      bVar8 = false;
      goto LAB_14a245805;
    }
  }
  else {
    FRigElementKey::ToString(param_1,&local_190);
    ::FString::PrintfImpl(&local_1f0,L"Connector %s does not contain a module / namespace");
    pFVar11 = FText::FromString(&local_98,&local_1f0);
    FText::operator=(param_3,pFVar11);
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    local_1e0.Data.AllocatorInstance.Data = local_190.Data.AllocatorInstance.Data;
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      local_1e0.Data.AllocatorInstance.Data = local_190.Data.AllocatorInstance.Data;
    }
LAB_14a245737:
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
  }
  bVar8 = false;
LAB_14a245805:
  if ((local_288.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_288.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_288.CachedElementNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if ((local_288.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_288.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_288.CachedModuleNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if (local_288.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.ModulePath.Data.AllocatorInstance.Data);
  }
  return bVar8;
}

// CanRenameModule @ 14a245980

bool __thiscall
UModularRigController::CanRenameModule
          (UModularRigController *this,FName *param_1,FName *param_2,FText *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  FText *pFVar6;
  size_t sVar7;
  FRigModuleReference *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FString local_78;
  FText local_68;
  FText local_58;
  TOptional<FName>_u_0 local_48;
  void *local_40;
  int local_34;
  
  bVar2 = false;
  if (*param_2 != (FName)0x0) {
    bVar2 = true;
    pFVar5 = ::FName::ToString(param_2,(FString *)&local_68);
    if (1 < (pFVar5->Data).ArrayNum) {
      bVar1 = false;
      goto LAB_14a2459d0;
    }
  }
  bVar1 = true;
LAB_14a2459d0:
  if ((bVar2) && (local_68.TextData.Reference != (ITextData *)0x0)) {
    FMemory::Free(local_68.TextData.Reference);
  }
  if (bVar1) {
    pFVar6 = FText::FromString(&local_68,L"Name is empty.");
  }
  else {
    pFVar5 = ::FName::ToString(param_2,(FString *)&local_68);
    pwVar9 = FRigHierarchyModulePath::NamespaceSeparator_Deprecated;
    if (FRigHierarchyModulePath::NamespaceSeparator_Deprecated == (wchar_t *)0x0) {
      iVar3 = -1;
    }
    else {
      sVar7 = wcslen(FRigHierarchyModulePath::NamespaceSeparator_Deprecated);
      iVar3 = ::FString::Find(pFVar5,pwVar9,(int)sVar7,IgnoreCase,FromStart,-1);
    }
    iVar4 = -1;
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_68.TextData.Reference);
    }
    if (iVar3 == -1) {
      pFVar5 = ::FName::ToString(param_2,(FString *)&local_68);
      pwVar9 = FRigHierarchyModulePath::ModuleNameSuffix;
      if (FRigHierarchyModulePath::ModuleNameSuffix != (wchar_t *)0x0) {
        sVar7 = wcslen(FRigHierarchyModulePath::ModuleNameSuffix);
        iVar4 = ::FString::Find(pFVar5,pwVar9,(int)sVar7,IgnoreCase,FromStart,-1);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_68.TextData.Reference);
      }
      if (iVar4 == -1) {
        pFVar8 = FModularRigModel::FindModule(this->Model,param_1);
        if (pFVar8 == (FRigModuleReference *)0x0) {
          ::FName::ToString(param_1,(FString *)&local_48.TypedValue);
          ::FString::PrintfImpl((FString *)&local_68,L"Module %s not found.");
          pFVar6 = FText::FromString(&local_58,(FString *)&local_68);
          FText::operator=(param_3,pFVar6);
          if (local_58.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
          }
          if (local_68.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_68.TextData.Reference);
          }
          if (local_48 == (TOptional<FName>_u_0)0x0) {
            return false;
          }
          FMemory::Free((void *)local_48);
          return false;
        }
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        FRigName::FRigName((FRigName *)&local_48.TypedValue,param_2);
        bVar2 = IsNameAvailable(this,(FRigName *)&local_48.TypedValue,&local_78,
                                (FRigModuleReference *)0x0);
        if ((local_34 != -1) && (local_40 != (void *)0x0)) {
          FMemory::Free(local_40);
        }
        if (bVar2) {
          bVar2 = true;
        }
        else {
          pFVar6 = FText::FromString((FText *)&local_48.TypedValue,&local_78);
          FText::operator=(param_3,pFVar6);
          if (local_48 != (TOptional<FName>_u_0)0x0) {
            (**(code **)(*(longlong *)local_48 + 0x10))();
          }
          bVar2 = false;
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
          return bVar2;
        }
        return bVar2;
      }
      pwVar10 = L"Name contains module suffix \'/\'.";
      pwVar9 = L"NameContainsModuleSuffix";
    }
    else {
      pwVar10 = L"Name contains namespace separator \':\'.";
      pwVar9 = L"NameContainsNamespaceSeparator";
    }
    pFVar6 = FText::AsLocalizable_Advanced_LocText(&local_68,L"ModularRigController",pwVar9,pwVar10)
    ;
  }
  FText::operator=(param_3,pFVar6);
  if (local_68.TextData.Reference == (ITextData *)0x0) {
    return false;
  }
  (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  return false;
}

// ConnectConnectorToElement @ 14a246f00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UModularRigController::ConnectConnectorToElement
          (UModularRigController *this,FRigElementKey *param_1,FRigElementKey *param_2,bool param_3,
          bool param_4,bool param_5)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_18;
  
  uVar2 = (param_2->Name).Number;
  uVar1 = *(undefined8 *)param_2;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
  *(undefined8 *)local_18.AllocatorInstance.Data = uVar1;
  *(uint *)(local_18.AllocatorInstance.Data + 8) = uVar2;
  bVar3 = ConnectConnectorToElements(this,param_1,&local_18,param_3,param_4,param_5);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar3;
}

// ConnectConnectorToElements @ 14a246fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UModularRigController::ConnectConnectorToElements
          (UModularRigController *this,FRigElementKey *param_1,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_2,bool param_3,bool param_4,
          bool param_5)

{
  FRigElementKey *pFVar1;
  ulonglong uVar2;
  FScriptContainerElement *_Src;
  FModularRigModel *pFVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  FName *pFVar10;
  byte bVar11;
  ForElementType<FRigElementKey> _Dst;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStackY_238 [32];
  EModularRigNotification local_1f7 [3];
  undefined8 local_1f4;
  longlong *local_1e8;
  uint uStack_1e0;
  uint uStack_1dc;
  TBitArray<FDefaultBitArrayAllocator> *local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  uint local_1c8;
  uint uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  int local_1b8;
  TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *local_1b0;
  FRigModuleReference *local_1a8;
  FRigElementKey local_1a0;
  FString local_190;
  FText local_180;
  longlong *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  FText local_140;
  FString local_130;
  FString local_120;
  FRigHierarchyModulePath local_108;
  undefined1 local_c8 [32];
  uint *local_a8;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  void *local_88;
  undefined4 local_80;
  TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_78.ArrayNum = param_2->ArrayNum;
  lVar13 = (longlong)local_78.ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<FRigElementKey>)0x0;
  uVar9 = 1;
  if (local_78.ArrayNum == 0) {
    local_78.ArrayMax = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigElementKey>_>
              (0xc,4,local_78.ArrayNum,0,&local_78.AllocatorInstance,local_78.ArrayNum,
               &local_78.ArrayMax);
    _Dst = (ForElementType<FRigElementKey>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
      _Dst = local_78.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)_Dst,_Src,lVar13 * 0xc);
  }
  if (local_78.ArrayNum == 0) {
    if (1 < (byte)LogControlRig._0_1_) {
      FRigElementKey::ToString(param_1,&local_130);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
    }
    bVar6 = false;
  }
  else {
    FText::FText(&local_180);
    local_1b0 = &local_78;
    if ((!param_5) ||
       (bVar6 = CanConnectConnectorToElements(this,param_1,param_2,&local_180), bVar6)) {
      FRigHierarchyModulePath::FRigHierarchyModulePath(&local_108,&param_1->Name);
      pFVar10 = FRigHierarchyModulePath::GetModuleFName(&local_108);
      local_1a8 = FModularRigModel::FindModule(this->Model,pFVar10);
      FModularRigConnections::FindTargetFromConnector(&this->Model->Connections,&local_1a0,param_1);
      if (this->_padding_ != 0) {
        Z_Construct_UClass_UBlueprint_NoRegister();
      }
      bVar6 = this->bSuspendNotifications;
      local_c8._0_8_ = 0;
      local_c8._8_8_ = 0;
      local_a8 = (uint *)0x0;
      uVar14 = 0;
      local_a0 = 0;
      local_9c = 0x80;
      local_98 = 0xffffffff;
      local_94 = 0;
      local_88 = (void *)0x0;
      local_80 = 0;
      this->bSuspendNotifications = true;
      bVar7 = ::FName::IsWithinBounds(local_1a0.Name.ComparisonIndex.Value);
      if (((bVar7) && (local_1f4 = 0, local_1a0.Name != (FName)0x0)) && (local_1a0.Type != None)) {
        bVar7 = this->bAutomaticReparenting;
        this->bAutomaticReparenting = false;
        DisconnectConnector_Internal
                  (this,param_1,false,
                   (TMap<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
                    *)local_c8,param_3);
        this->bAutomaticReparenting = bVar7;
      }
      FModularRigConnections::AddConnection(&this->Model->Connections,param_1,&local_78);
      uVar16 = local_a0;
      local_1c8 = 0;
      uStack_1cc = local_1c8;
      if (local_a0 != 0) {
        puVar15 = (uint *)(local_c8 + 0x10);
        if (local_a8 != (uint *)0x0) {
          puVar15 = local_a8;
        }
        uVar17 = *puVar15;
        uVar14 = 0;
        local_1c8 = 0;
        while (uVar17 == 0) {
          uVar14 = uVar14 + 1;
          local_1c8 = local_1c8 + 0x20;
          uStack_1cc = local_a0;
          if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
          goto LAB_14a247330;
          uVar17 = puVar15[(int)uVar14];
        }
        uVar9 = -uVar17 & uVar17;
        uVar2 = (ulonglong)uVar9 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_1b8 = (int)lVar13;
        uStack_1cc = local_1b8 + -1 + local_1c8;
        if ((int)local_a0 < (int)uStack_1cc) {
          uStack_1cc = local_a0;
        }
      }
LAB_14a247330:
      local_1e8 = (longlong *)local_c8;
      local_1d8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
      iStack_1c0 = local_c8._8_4_ - local_94;
      uVar17 = local_a0 & 0xffffffe0;
      uStack_1d0 = 0xffffffff;
      TStack_168.CurrentBitIndex = uStack_1cc;
      TStack_168.UnvisitedBitMask = 0xffffffff;
      TStack_168._padding_ = CONCAT44(uVar9,uVar14);
      iVar12 = (int)local_a0 >> 5;
      TStack_168._28_4_ = uStack_1cc;
      TStack_168.BaseBitIndex = local_1c8;
      uStack_148 = CONCAT44(uStack_1bc,iStack_1c0);
      bVar11 = (byte)local_a0;
      uStack_1e0 = uVar14;
      uStack_1dc = uVar9;
      uStack_1c4 = uStack_1cc;
      local_170 = local_1e8;
      TStack_168.Array = local_1d8;
      if (((int)local_a0 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      if (uVar16 != local_a0) {
        puVar15 = (uint *)(local_c8 + 0x10);
        if (local_a8 != (uint *)0x0) {
          puVar15 = local_a8;
        }
        uVar9 = -1 << (bVar11 & 0x1f) & puVar15[iVar12];
        while (uVar9 == 0) {
          iVar12 = iVar12 + 1;
          uVar17 = uVar17 + 0x20;
          uVar16 = local_a0;
          if ((int)(((int)(local_a0 - 1) >> 0x1f & 0x1fU) + (local_a0 - 1)) >> 5 < iVar12)
          goto LAB_14a247450;
          uVar9 = puVar15[iVar12];
        }
        uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar16 = (int)lVar13 + -1 + uVar17;
        if ((int)local_a0 < (int)uVar16) {
          uVar16 = local_a0;
        }
      }
LAB_14a247450:
      while( true ) {
        plVar5 = local_170;
        if ((int)local_170[1] - *(int *)((longlong)local_170 + 0x34) != (int)uStack_148) {
          `TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1f7 + 2);
        }
        if (((TStack_168.CurrentBitIndex == uVar16) &&
            (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10))) &&
           (plVar5 == (longlong *)local_c8)) break;
        pFVar3 = this->Model;
        pFVar1 = (FRigElementKey *)(*plVar5 + (longlong)TStack_168.CurrentBitIndex * 0x28);
        iVar12 = FModularRigConnections::FindConnectionIndex(&pFVar3->Connections,pFVar1);
        if ((iVar12 < 0) || ((pFVar3->Connections).ConnectionList.ArrayNum <= iVar12)) {
          FText::FText(&local_140);
          bVar7 = CanConnectConnectorToElements
                            (this,pFVar1,
                             (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)&pFVar1[1].Name,
                             &local_140);
          if (bVar7) {
            ConnectConnectorToElements
                      (this,pFVar1,
                       (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)&pFVar1[1].Name,param_3
                       ,false,false);
          }
          if (local_140.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
          }
        }
        TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
      }
      this->bSuspendNotifications = bVar6;
      local_1f7[0] = ConnectionChanged;
      Notify(this,local_1f7,local_1a8);
      local_1f7[1] = 5;
      Notify(this,local_1f7 + 1,local_1a8);
      bVar6 = true;
      local_80 = 0;
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_c8);
      if ((local_108.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_108.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_108.CachedElementNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if ((local_108.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_108.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_108.CachedModuleNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if (local_108.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.ModulePath.Data.AllocatorInstance.Data);
      }
    }
    else {
      `UModularRigController::ConnectConnectorToElements'::__l2::<lambda_1>::operator()
                (&local_1b0,&local_190);
      if (1 < (byte)LogControlRig._0_1_) {
        FText::ToString(&local_180);
        FRigElementKey::ToString(param_1,&local_120);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
      }
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      bVar6 = false;
    }
    if (local_180.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
    }
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return bVar6;
}

// DeselectModule @ 14a24eaf0

bool __thiscall UModularRigController::DeselectModule(UModularRigController *this,FName *param_1)

{
  bool bVar1;
  
  bVar1 = SelectModule(this,param_1,false);
  return bVar1;
}

// DisconnectConnector @ 14a24fb20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UModularRigController::DisconnectConnector
          (UModularRigController *this,FRigElementKey *param_1,bool param_2,bool param_3)

{
  bool bVar1;
  
  bVar1 = DisconnectConnector_Internal
                    (this,param_1,param_2,
                     (TMap<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
                      *)0x0,param_3);
  return bVar1;
}

// DisconnectConnector_Internal @ 14a24fb40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UModularRigController::DisconnectConnector_Internal
          (UModularRigController *this,FRigElementKey *param_1,bool param_2,
          TMap<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
          *param_3,bool param_4)

{
  FRigElementKey *pFVar1;
  EConnectorType EVar2;
  int iVar3;
  FModularRigModel *pFVar4;
  FModularRigModel *this_00;
  code *pcVar5;
  TMap<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FName *pFVar11;
  FRigModuleReference *pFVar12;
  UClass *pUVar13;
  UControlRig *this_02;
  FRigModuleSettings *pFVar14;
  FRigModuleConnector *pFVar15;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar16;
  FRigHierarchyModulePath *this_03;
  TStringView<wchar_t> *pTVar17;
  TStringView<wchar_t> *pTVar18;
  ForAnyElementType FVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  FRigElementKey *pFVar22;
  undefined1 local_res10 [16];
  TMap<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
  *local_res20;
  undefined1 local_208;
  EModularRigNotification local_207 [7];
  ForAnyElementType local_200;
  undefined8 local_1f8;
  ForAnyElementType local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0;
  undefined1 local_1df [7];
  FRigModuleReference *local_1d8;
  FRigModuleConnector *local_1d0;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8 [2];
  FRigHierarchyModulePath local_1a8;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_128;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_118;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_108;
  FRigHierarchyModulePath local_f8;
  FRigHierarchyModulePath local_b8;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  wchar_t *local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  
  local_res20 = param_3;
  FRigHierarchyModulePath::FRigHierarchyModulePath(&local_1a8,&param_1->Name);
  bVar6 = FRigHierarchyModulePath::IsValid(&local_1a8);
  if (bVar6) {
    pFVar11 = FRigHierarchyModulePath::GetModuleFName(&local_1a8);
    pFVar12 = FModularRigModel::FindModule(this->Model,pFVar11);
    local_1d8 = pFVar12;
    if (pFVar12 == (FRigModuleReference *)0x0) {
      if (1 < (byte)LogControlRig._0_1_) {
        FRigHierarchyModulePath::GetModuleNameString(&local_1a8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      }
    }
    else {
      pUVar13 = TSoftClassPtr<UControlRig>::Get(&pFVar12->Class);
      this_02 = UClass::GetDefaultObject<UControlRig>(pUVar13);
      if (this_02 == (UControlRig *)0x0) {
        if (1 < (byte)LogControlRig._0_1_) {
          pUVar13 = TSoftClassPtr<UControlRig>::Get(&pFVar12->Class);
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar13,&local_158,(UObject *)0x0);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
          local_168.Data.AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
LAB_14a24fbdb:
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pFVar11 = FRigHierarchyModulePath::GetElementFName(&local_1a8);
        local_1c8 = *pFVar11;
        pFVar14 = UControlRig::GetRigModuleSettings(this_02);
        pFVar15 = TArray<FRigModuleConnector,TSizedDefaultAllocator<32>_>::
                  FindByPredicate<_UModularRigController::DisconnectConnector_Internal_::__l2::<lambda_1>_>
                            (&pFVar14->ExposedConnectors,(<lambda_1>)local_1c8);
        local_1d0 = pFVar15;
        if (pFVar15 == (FRigModuleConnector *)0x0) {
          if (1 < (byte)LogControlRig._0_1_) {
            pUVar13 = TSoftClassPtr<UControlRig>::Get(&pFVar12->Class);
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar13,&local_138,(UObject *)0x0)
            ;
            ::FName::ToString(&local_1c8,&local_148);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
            local_168.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
              local_168.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
            }
            goto LAB_14a24fbdb;
          }
        }
        else {
          if (this->_padding_ != 0) {
            Z_Construct_UClass_UBlueprint_NoRegister();
          }
          pFVar4 = this->Model;
          iVar8 = FModularRigConnections::FindConnectionIndex(&pFVar4->Connections,param_1);
          if ((-1 < iVar8) && (iVar8 < (pFVar4->Connections).ConnectionList.ArrayNum)) {
            if (param_3 !=
                (TMap<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
                 *)0x0) {
              pTVar16 = FModularRigConnections::FindTargetsFromConnector
                                  (&pFVar4->Connections,&local_128,param_1);
              TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
              ::Emplace<FRigElementKey_const_&,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>
                        ((TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
                          *)param_3,param_1,pTVar16);
              if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.AllocatorInstance.Data);
              }
            }
            FModularRigConnections::RemoveConnection(&this->Model->Connections,param_1);
            EVar2 = (pFVar15->Settings).Type;
            if (EVar2 == Primary) {
              pFVar4 = this->Model;
              local_200.Data = (FScriptContainerElement *)0x0;
              local_1f8 = 0;
              iVar8 = (pFVar4->Connections).ConnectionList.ArrayNum;
              pFVar22 = (FRigElementKey *)
                        (pFVar4->Connections).ConnectionList.AllocatorInstance.Data;
              pFVar1 = (FRigElementKey *)((longlong)pFVar22 + (longlong)iVar8 * 0x28);
              while( true ) {
                if ((pFVar4->Connections).ConnectionList.ArrayNum != iVar8) {
                  local_res10[0] = 0;
                  `TCheckedPointerIterator<FModularRigSingleConnection,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_res10);
                }
                this_01 = local_res20;
                if (pFVar22 == pFVar1) break;
                this_03 = FRigHierarchyModulePath::FRigHierarchyModulePath(&local_b8,&pFVar22->Name)
                ;
                pTVar17 = FRigHierarchyModulePath::GetModuleName(&local_1a8,&local_78);
                pTVar18 = FRigHierarchyModulePath::GetModuleName(this_03,&local_68);
                local_58 = pTVar17->DataPtr;
                uStack_50 = *(undefined8 *)&pTVar17->Size;
                iVar10 = pTVar17->Size;
                iVar3 = pTVar18->Size;
                if (iVar3 == iVar10) {
                  local_48 = local_58;
                  uStack_40 = uStack_50;
                  if ((iVar3 != 0) && (iVar10 != 0)) {
                    iVar9 = iVar10;
                    if (iVar3 < iVar10) {
                      iVar9 = iVar3;
                    }
                    iVar9 = FGenericPlatformStricmp::Strnicmp
                                      (pTVar18->DataPtr,local_58,(longlong)iVar9);
                    if (iVar9 != 0) goto LAB_14a24ff24;
                  }
                  if (iVar3 != iVar10) goto LAB_14a24ff24;
                  bVar6 = true;
                }
                else {
LAB_14a24ff24:
                  bVar6 = false;
                }
                if ((local_b8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
                   (local_b8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                    Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free((void *)local_b8.CachedElementNameString.field0_0x0.TypedValue.Data.
                                        AllocatorInstance.Data);
                }
                if ((local_b8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
                   (local_b8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                    Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free((void *)local_b8.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                        AllocatorInstance.Data);
                }
                if (local_b8.ModulePath.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b8.ModulePath.Data.AllocatorInstance.Data);
                }
                if (bVar6) {
                  if (((local_200.Data <= pFVar22) &&
                      (pFVar22 < (FRigElementKey *)
                                 (local_200.Data + (longlong)local_1f8._4_4_ * 0xc))) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    uVar7 = (*pcVar5)();
                    return (bool)uVar7;
                  }
                  iVar10 = (int)local_1f8;
                  if ((int)local_1f8 == local_1f8._4_4_) {
                    iVar10 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&local_200,(int *)((longlong)&local_1f8 + 4));
                  }
                  local_1f8 = CONCAT44(local_1f8._4_4_,iVar10 + 1);
                  *(undefined8 *)(local_200.Data + (longlong)iVar10 * 0xc) = *(undefined8 *)pFVar22;
                  *(uint *)(local_200.Data + (longlong)iVar10 * 0xc + 8) = (pFVar22->Name).Number;
                }
                pFVar22 = (FRigElementKey *)&pFVar22[3].Name;
              }
              iVar8 = (int)local_1f8;
              pFVar1 = (FRigElementKey *)(local_200.Data + (longlong)(int)local_1f8 * 0xc);
              FVar21.Data = local_200.Data;
              while( true ) {
                if ((int)local_1f8 != iVar8) {
                  `TCheckedPointerIterator<FRigElementKey,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_1e0);
                }
                FVar19.Data = local_200.Data;
                if ((FRigElementKey *)FVar21.Data == pFVar1) break;
                if (this_01 !=
                    (TMap<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
                     *)0x0) {
                  pTVar16 = FModularRigConnections::FindTargetsFromConnector
                                      (&this->Model->Connections,&local_118,
                                       (FRigElementKey *)FVar21.Data);
                  TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
                  ::
                  Emplace<FRigElementKey_const_&,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>
                            ((TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
                              *)this_01,(FRigElementKey *)FVar21.Data,pTVar16);
                  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_118.AllocatorInstance.Data);
                  }
                }
                FModularRigConnections::RemoveConnection
                          (&this->Model->Connections,(FRigElementKey *)FVar21.Data);
                FVar21.Data = FVar21.Data + 0xc;
              }
LAB_14a2502a9:
              pFVar15 = local_1d0;
              pFVar12 = local_1d8;
              if ((FRigElementKey *)FVar19.Data != (FRigElementKey *)0x0) {
                FMemory::Free(FVar19.Data);
                pFVar15 = local_1d0;
                pFVar12 = local_1d8;
              }
            }
            else if (((EVar2 != Secondary) || ((pFVar15->Settings).bOptional == false)) && (param_2)
                    ) {
              local_1f0.Data = (FScriptContainerElement *)0x0;
              local_1e8 = 0;
              pFVar11 = FRigHierarchyModulePath::GetModuleFName(&local_1a8);
              pFVar4 = this->Model;
              local_1b8[0] = *pFVar11;
              iVar8 = (pFVar4->Connections).ConnectionList.ArrayNum;
              pFVar22 = (FRigElementKey *)
                        (pFVar4->Connections).ConnectionList.AllocatorInstance.Data;
              pFVar1 = (FRigElementKey *)((longlong)pFVar22 + (longlong)iVar8 * 0x28);
              while( true ) {
                if ((pFVar4->Connections).ConnectionList.ArrayNum != iVar8) {
                  local_208 = 0;
                  `TCheckedPointerIterator<FModularRigSingleConnection,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_208);
                }
                if (pFVar22 == pFVar1) break;
                FRigHierarchyModulePath::FRigHierarchyModulePath(&local_f8,&pFVar22->Name);
                this_00 = this->Model;
                pFVar11 = FRigHierarchyModulePath::GetModuleFName(&local_f8);
                bVar6 = FModularRigModel::IsModuleParentedTo(this_00,pFVar11,local_1b8);
                if (bVar6) {
                  if (((local_1f0.Data <= pFVar22) &&
                      (pFVar22 < (FRigElementKey *)
                                 (local_1f0.Data + (longlong)local_1e8._4_4_ * 0xc))) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    uVar7 = (*pcVar5)();
                    return (bool)uVar7;
                  }
                  iVar10 = (int)local_1e8;
                  if ((int)local_1e8 == local_1e8._4_4_) {
                    iVar10 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&local_1f0,(int *)((longlong)&local_1e8 + 4));
                  }
                  local_1e8 = CONCAT44(local_1e8._4_4_,iVar10 + 1);
                  *(undefined8 *)(local_1f0.Data + (longlong)iVar10 * 0xc) = *(undefined8 *)pFVar22;
                  *(uint *)(local_1f0.Data + (longlong)iVar10 * 0xc + 8) = (pFVar22->Name).Number;
                }
                if ((local_f8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
                   (local_f8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                    Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free((void *)local_f8.CachedElementNameString.field0_0x0.TypedValue.Data.
                                        AllocatorInstance.Data);
                }
                if ((local_f8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
                   (local_f8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                    Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free((void *)local_f8.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                        AllocatorInstance.Data);
                }
                if (local_f8.ModulePath.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_f8.ModulePath.Data.AllocatorInstance.Data);
                }
                pFVar22 = (FRigElementKey *)&pFVar22[3].Name;
              }
              iVar8 = (int)local_1e8;
              uVar20 = (ulonglong)(int)local_1e8;
              pFVar1 = (FRigElementKey *)(local_1f0.Data + uVar20 * 0xc);
              FVar21.Data = local_1f0.Data;
              while( true ) {
                if ((int)uVar20 != iVar8) {
                  `TCheckedPointerIterator<FRigElementKey,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_1df);
                }
                FVar19.Data = local_1f0.Data;
                if ((FRigElementKey *)FVar21.Data == pFVar1) break;
                if (param_3 !=
                    (TMap<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
                     *)0x0) {
                  pTVar16 = FModularRigConnections::FindTargetsFromConnector
                                      (&this->Model->Connections,&local_108,
                                       (FRigElementKey *)FVar21.Data);
                  TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
                  ::
                  Emplace<FRigElementKey_const_&,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>
                            ((TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
                              *)param_3,(FRigElementKey *)FVar21.Data,pTVar16);
                  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_108.AllocatorInstance.Data);
                  }
                }
                FModularRigConnections::RemoveConnection
                          (&this->Model->Connections,(FRigElementKey *)FVar21.Data);
                uVar20 = local_1e8 & 0xffffffff;
                FVar21.Data = FVar21.Data + 0xc;
              }
              goto LAB_14a2502a9;
            }
            if (((this->bAutomaticReparenting != false) && ((pFVar15->Settings).Type == Primary)) &&
               ((pFVar12->ParentModuleName != (FName)0x0 ||
                (1 < (pFVar12->ParentPath_DEPRECATED).Data.ArrayNum)))) {
              local_1c0.ComparisonIndex.Value = 0;
              local_1c0.Number = 0;
              ReparentModule(this,&pFVar12->Name,&local_1c0,param_4);
            }
            local_207[0] = ConnectionChanged;
            Notify(this,local_207,pFVar12);
            bVar6 = true;
            goto LAB_14a24fbe7;
          }
        }
      }
    }
  }
  else if (1 < (byte)LogControlRig._0_1_) {
    FRigElementKey::ToString(param_1,&local_168);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
    goto LAB_14a24fbdb;
  }
  bVar6 = false;
LAB_14a24fbe7:
  if ((local_1a8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_1a8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_1a8.CachedElementNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if ((local_1a8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_1a8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_1a8.CachedModuleNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if (local_1a8.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.ModulePath.Data.AllocatorInstance.Data);
  }
  return bVar6;
}

// DisconnectCyclicConnectors @ 14a250320

TArray<FRigElementKey,TSizedDefaultAllocator<32>_> * __thiscall
UModularRigController::DisconnectCyclicConnectors
          (UModularRigController *this,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,bool param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// ExportModuleSettingsToString @ 14a259710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UModularRigController::ExportModuleSettingsToString
          (UModularRigController *this,FString *__return_storage_ptr__,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FControlRigOverrideValue *this_00;
  FName FVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  longlong lVar4;
  code *pcVar5;
  FField *this_01;
  ForAnyElementType FVar6;
  int iVar7;
  FName *pFVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FRigModuleReference *pFVar13;
  UClass *this_02;
  UClass *pUVar14;
  FProperty *pFVar15;
  FString *pFVar16;
  UPackage *pUVar17;
  ulonglong uVar18;
  ForElementType<FSetElementId> FVar19;
  FScriptContainerElement *pFVar20;
  int *piVar21;
  FName *this_03;
  undefined1 auStackY_218 [32];
  undefined1 local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6 [6];
  FString local_1d0;
  TKeyInitializer<FName_const_&> local_1c0;
  FString *local_1b8;
  TFieldIterator<FProperty> local_1b0;
  TOptional<FString>_u_0 local_198;
  TOptional<FString>_u_0 local_188;
  undefined8 local_178;
  undefined4 local_170;
  FPropertyInfo *local_168;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  uint local_148;
  undefined8 local_138;
  FRigModuleReference *local_130;
  FName *local_128;
  UModularRigController *local_120;
  FString local_118;
  undefined1 local_108 [8];
  FName *local_100;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_f8;
  FName *local_f0;
  FString local_e8;
  FString *local_d8;
  FString *local_d0;
  TOptional<FString>_u_0 *local_c8;
  TOptional<FString>_u_0 *local_c0;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_1c0.Key._4_4_ = param_1->ArrayNum;
  uVar18 = (ulonglong)(int)local_1c0.Key._4_4_;
  this_03 = (FName *)(param_1->AllocatorInstance).Data;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_f0 = this_03 + uVar18;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_1b8 = __return_storage_ptr__;
  local_120 = this;
  local_f8 = param_1;
  while( true ) {
    pFVar8 = local_f0;
    local_128 = this_03;
    if (param_1->ArrayNum != (int)uVar18) {
      local_1d8 = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_1d8);
    }
    if (this_03 == pFVar8) break;
    pFVar13 = FModularRigModel::FindModule(local_120->Model,this_03);
    local_130 = pFVar13;
    if (pFVar13 == (FRigModuleReference *)0x0) {
      if (1 < (byte)LogControlRig._0_1_) {
        ::FName::ToString(this_03,&local_a8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      (local_1b8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (local_1b8->Data).ArrayNum = 0;
      (local_1b8->Data).ArrayMax = 0;
      goto LAB_14a259f2a;
    }
    FVar1 = *this_03;
    uVar11 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    if (local_98._8_4_ != local_64) {
      FVar19 = (ForElementType<FSetElementId>)local_60;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FVar19 = local_58;
      }
      for (iVar12 = *(int *)((longlong)FVar19 +
                            (ulonglong)(local_50 - 1U & uVar11 + FVar1.Number) * 4); iVar12 != -1;
          iVar12 = *(int *)(local_98._0_8_ + (longlong)iVar12 * 0x120 + 0x118)) {
        if (*(FName *)(local_98._0_8_ + (longlong)iVar12 * 0x120) == FVar1) goto LAB_14a259ce1;
      }
    }
    this_02 = (UClass *)
              TPersistentObjectPtr<FSoftObjectPath>::Get
                        ((TPersistentObjectPtr<FSoftObjectPath> *)&pFVar13->Class);
    if (this_02 == (UClass *)0x0) {
LAB_14a259cf6:
      if (1 < (byte)LogControlRig._0_1_) {
        FSoftObjectPath::ToString
                  ((FSoftObjectPath *)&(pFVar13->Class).SoftObjectPtr.field_0x8,&local_e8);
        ::FName::ToString(this_03,&local_b8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
      }
      pFVar16 = local_1b8;
      local_50 = 0;
      (local_1b8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (local_1b8->Data).ArrayNum = 0;
      (local_1b8->Data).ArrayMax = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FModularRigModuleSettingsForClipboard>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FModularRigModuleSettingsForClipboard>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_98,0,local_98._8_4_);
      iVar12 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x120,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      goto LAB_14a259f4d;
    }
    pUVar14 = Z_Construct_UClass_UClass_NoRegister();
    iVar12 = (int)pUVar14->_padding_;
    if (((*(int *)(this_02->_padding_ + 0x38) < iVar12) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
         &pUVar14->_padding_)) || (pUVar14 = UControlRig::StaticClass(), pUVar14 == (UClass *)0x0))
    goto LAB_14a259cf6;
    iVar12 = (int)pUVar14->_padding_;
    if (((int)this_02->_padding_ < iVar12) ||
       ((longlong *)*(undefined1 **)(this_02->_padding_ + (longlong)iVar12 * 8) !=
        &pUVar14->_padding_)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (!bVar10) goto LAB_14a259cf6;
    local_100 = this_03;
    TSet<TTuple<FName,FModularRigModuleSettingsForClipboard>,TDefaultMapHashableKeyFuncs<FName,FModularRigModuleSettingsForClipboard,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FName_const_&>_>
              ((TSet<TTuple<FName,FModularRigModuleSettingsForClipboard>,TDefaultMapHashableKeyFuncs<FName,FModularRigModuleSettingsForClipboard,0>,FDefaultSetAllocator>
                *)local_98,&local_1c0,(bool *)&local_100);
    uVar9 = local_98._0_8_;
    iVar7 = (int)local_1c0.Key;
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)(local_98._0_8_ + (longlong)(int)local_1c0.Key * 0x120 + 8),
               (FSoftObjectPath *)&(pFVar13->Class).SoftObjectPtr.field_0x8);
    pFVar2 = (pFVar13->ConfigOverrides).Values.AllocatorInstance.Data;
    iVar12 = (pFVar13->ConfigOverrides).Values.ArrayNum;
    pFVar20 = pFVar2 + 0x1c;
    while( true ) {
      if ((pFVar13->ConfigOverrides).Values.ArrayNum != iVar12) {
        local_1d7 = 0;
        `TCheckedPointerIterator<FControlRigOverrideValue_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1d7);
      }
      this_00 = (FControlRigOverrideValue *)(pFVar20 + -0x1c);
      if (this_00 == (FControlRigOverrideValue *)(pFVar2 + (longlong)iVar12 * 0x58)) break;
      if ((((*(int *)(pFVar20 + -0x10) != -1) && (*(int *)pFVar20 != -1)) &&
          (*(int *)(pFVar20 + 0x2c) != 0)) &&
         (((*(longlong *)(pFVar20 + 0x24) != 0 &&
           (pFVar15 = FControlRigOverrideValue::GetLeafProperty(this_00),
           pFVar15 != (FProperty *)0x0)) &&
          (bVar10 = FControlRigOverrideValue::IsDataValid
                              (this_00,(TArray<unsigned_char,TAlignedHeapAllocator<16>_> *)
                                       (pFVar20 + 0x24),(uint *)(pFVar20 + 0x34)), bVar10)))) {
        pFVar16 = FControlRigOverrideValue::ToString(this_00);
        local_d8 = FControlRigOverrideValue::GetPath(this_00);
        local_d0 = pFVar16;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                  ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)(uVar9 + (longlong)iVar7 * 0x120 + 0x78),
                   (TPairInitializer<FString_const_&,FString_const_&> *)local_108,(bool *)&local_d8)
        ;
      }
      pFVar20 = pFVar20 + 0x58;
      pFVar13 = local_130;
    }
    if ((this_02->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_02);
    }
    pUVar3 = (this_02->ClassDefaultObject).field0_0x0.DebugPtr;
    pUVar14 = UControlRig::StaticClass();
    lVar4 = *(longlong *)&pUVar3->field_0x10;
    iVar12 = (int)pUVar14->_padding_;
    if (((*(int *)(lVar4 + 0x38) < iVar12) ||
        ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar12 * 8) !=
         &pUVar14->_padding_)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ret->IsA(T::StaticClass())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                            ,0x1181,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FString *)(*pcVar5)();
      return pFVar16;
    }
    local_1b0.Field = (FField *)this_02->_padding_;
    local_1b0.InterfaceIndex = -1;
    local_1b0.bIncludeSuper = true;
    local_1b0.bIncludeDeprecated = true;
    local_1b0.bIncludeInterface = false;
    local_1b0.Struct = (UStruct *)this_02;
    TFieldIterator<FProperty>::IterateToNext(&local_1b0);
    this_01 = local_1b0.Field;
    while (local_1b0.Field = this_01, this_01 != (FField *)0x0) {
      bVar10 = FField::IsNative(this_01);
      if (!bVar10) {
        bVar10 = IsThisNotNull(this_01,"FField::GetName");
        if (bVar10) {
          ::FName::ToString(&this_01->NamePrivate,&local_118);
        }
        else {
          ::FString::FString(&local_118,L"None");
        }
        local_138 = 0;
        local_198.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_198.TypedValue.Data.ArrayNum = 0;
        local_188.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_188.TypedValue.Data.ArrayNum = 0;
        local_178 = 0;
        local_170 = 0;
        local_168 = (FPropertyInfo *)0x0;
        local_160 = 0;
        local_158 = (void *)0x0;
        local_150 = 0;
        local_148 = 0;
        local_198.TypedValue.Data.ArrayMax = -1;
        local_188.TypedValue.Data.ArrayMax = -1;
        iVar12 = ::FString::Find(&local_118,L".",1,IgnoreCase,FromStart,-1);
        if (iVar12 != -1) {
          local_1d6[0] = 0;
          `FControlRigOverrideValue::FControlRigOverrideValue'::__l2::<lambda_1>::operator()
                    (local_1d6);
        }
        bVar10 = FControlRigOverrideValue::SetPropertiesFromPath
                           ((FControlRigOverrideValue *)&local_198.TypedValue,&local_118,
                            (UStruct *)this_02);
        if (bVar10) {
          FControlRigOverrideValue::SetFromSubject
                    ((FControlRigOverrideValue *)&local_198.TypedValue,pUVar3,(UStruct *)0x0);
        }
        if ((((local_198.TypedValue.Data.ArrayMax != -1) &&
             (local_188.TypedValue.Data.ArrayMax != -1)) && ((int)local_150 != 0)) &&
           ((local_158 != (void *)0x0 &&
            (pFVar15 = FControlRigOverrideValue::GetLeafProperty
                                 ((FControlRigOverrideValue *)&local_198.TypedValue),
            pFVar15 != (FProperty *)0x0)))) {
          pFVar15 = FControlRigOverrideValue::GetLeafProperty
                              ((FControlRigOverrideValue *)&local_198.TypedValue);
          if ((pFVar15 == (FProperty *)0x0) ||
             (((int)local_150 != pFVar15->ElementSize * pFVar15->ArrayDim ||
              (uVar11 = FControlRigOverrideValue::GetPropertyHash
                                  ((FControlRigOverrideValue *)&local_198.TypedValue),
              uVar11 != local_148)))) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          if (bVar10) {
            piVar21 = (int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c);
            if ((*piVar21 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              atexit(`FControlRigOverrideValue::ToString'::__l2::
                     _dynamic_atexit_destructor_for__EmptyPath__);
              _Init_thread_footer(&::_TSS0);
            }
            pFVar16 = (FString *)&local_188;
            if (local_188.TypedValue.Data.ArrayMax == -1) {
              pFVar16 = &EmptyPath;
            }
            if ((*piVar21 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              atexit(`FControlRigOverrideValue::GetPath'::__l2::
                     _dynamic_atexit_destructor_for__EmptyPath__);
              _Init_thread_footer(&::_TSS0);
            }
            local_c8 = &local_198;
            if (local_198.TypedValue.Data.ArrayMax == -1) {
              local_c8 = (TOptional<FString>_u_0 *)&EmptyPath;
            }
            local_c0 = (TOptional<FString>_u_0 *)pFVar16;
            TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                      ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)(uVar9 + (longlong)iVar7 * 0x120 + 0x28),
                       (TPairInitializer<FString_const_&,FString_const_&> *)(local_108 + 4),
                       (bool *)&local_c8);
          }
        }
        FControlRigOverrideValue::Reset((FControlRigOverrideValue *)&local_198.TypedValue);
        if (local_158 != (void *)0x0) {
          FMemory::Free(local_158);
        }
        DestructItems<FControlRigOverrideValue::FPropertyInfo,int>(local_168,(int)local_160);
        if (local_168 != (FPropertyInfo *)0x0) {
          FMemory::Free(local_168);
        }
        if ((local_188.TypedValue.Data.ArrayMax != -1) &&
           (local_188.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_188.TypedValue.Data.AllocatorInstance.Data);
        }
        if ((local_198.TypedValue.Data.ArrayMax != -1) &&
           (local_198.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_198.TypedValue.Data.AllocatorInstance.Data);
        }
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
      local_1b0.Field = this_01->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_1b0);
      this_01 = local_1b0.Field;
    }
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
               *)(uVar9 + (longlong)iVar7 * 0x120 + 200),
              (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
               *)&local_130->Bindings);
    this_03 = local_128;
    param_1 = local_f8;
LAB_14a259ce1:
    uVar18 = (ulonglong)local_1c0.Key._4_4_;
    this_03 = this_03 + 1;
  }
  local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.Data.ArrayNum = 0;
  local_1d0.Data.ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FModularRigModuleSettingsSetForClipboard.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar17 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FModularRigModuleSettingsSetForClipboard.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FModularRigModuleSettingsSetForClipboard,
                         (UObject *)pUVar17,L"ModularRigModuleSettingsSetForClipboard");
  }
  UScriptStruct::ExportText
            (Z_Registration_Info_UScriptStruct_FModularRigModuleSettingsSetForClipboard.
             OuterSingleton,&local_1d0,local_98,local_98,(UObject *)0x0,0,(UObject *)0x0,true);
  FVar6.Data = local_1d0.Data.AllocatorInstance.Data;
  local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (local_1b8->Data).AllocatorInstance.Data = FVar6.Data;
  (local_1b8->Data).ArrayNum = local_1d0.Data.ArrayNum;
  (local_1b8->Data).ArrayMax = local_1d0.Data.ArrayMax;
  local_1d0.Data.ArrayNum = 0;
  local_1d0.Data.ArrayMax = 0;
LAB_14a259f2a:
  pFVar16 = local_1b8;
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FModularRigModuleSettingsForClipboard>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FModularRigModuleSettingsForClipboard>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FModularRigModuleSettingsForClipboard>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
LAB_14a259f4d:
  pFVar20 = (param_1->AllocatorInstance).Data;
  if (pFVar20 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar20);
  }
  return pFVar16;
}

// FindModule @ 14a25b950

FRigModuleReference * __thiscall
UModularRigController::FindModule(UModularRigController *this,FName *param_1)

{
  FRigModuleReference *pFVar1;
  
  pFVar1 = FModularRigModel::FindModule(this->Model,param_1);
  return pFVar1;
}

// FindModule @ 14a25b960

FRigModuleReference * __thiscall
UModularRigController::FindModule(UModularRigController *this,FName *param_1)

{
  FRigModuleReference *pFVar1;
  
  pFVar1 = FModularRigModel::FindModule(this->Model,param_1);
  return pFVar1;
}

// GetAllModules @ 14a25ddd0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UModularRigController::GetAllModules
          (UModularRigController *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *local_38 [2];
  undefined **local_28;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_20;
  undefined8 local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularRigController::GetAllModules'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularRigController::GetAllModules'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
                ::Call;
  local_20 = __return_storage_ptr__;
  FModularRigModel::ForEachModule
            (this->Model,(TFunction<bool___cdecl(FRigModuleReference_const_*)> *)local_38,true);
  return __return_storage_ptr__;
}

// GetConnectorsForModule @ 14a25fe60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FRigElementKey,TSizedDefaultAllocator<32>_> * __thiscall
UModularRigController::GetConnectorsForModule
          (UModularRigController *this,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FRigModuleReference *pFVar4;
  UClass *pUVar5;
  UControlRig *this_00;
  FRigModuleSettings *pFVar6;
  FRigHierarchyModulePath *this_01;
  FName FVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [16];
  FName local_res18 [2];
  FString local_98;
  FString local_88;
  FRigHierarchyModulePath local_78;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res18[0] = param_1;
  ::FName::ToString(local_res18,&local_98);
  pFVar4 = FModularRigModel::FindModule(this->Model,local_res18);
  if (pFVar4 == (FRigModuleReference *)0x0) {
    if (1 < (byte)LogControlRig._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
    }
  }
  else {
    pUVar5 = TSoftClassPtr<UControlRig>::Get(&pFVar4->Class);
    this_00 = UClass::GetDefaultObject<UControlRig>(pUVar5);
    if (this_00 == (UControlRig *)0x0) {
      if (1 < (byte)LogControlRig._0_1_) {
        pUVar5 = TSoftClassPtr<UControlRig>::Get(&pFVar4->Class);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_88,(UObject *)0x0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      pFVar6 = UControlRig::GetRigModuleSettings(this_00);
      iVar1 = (pFVar6->ExposedConnectors).ArrayNum;
      pFVar8 = (pFVar6->ExposedConnectors).AllocatorInstance.Data;
      pFVar9 = pFVar8 + (longlong)iVar1 * 0x38;
      while( true ) {
        if ((pFVar6->ExposedConnectors).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FRigModuleConnector_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (pFVar8 == pFVar9) break;
        this_01 = FRigHierarchyModulePath::FRigHierarchyModulePath<FString,FString>
                            (&local_78,&local_98,(FString *)pFVar8);
        FVar7 = FRigHierarchyModulePath::GetPathFName(this_01);
        iVar3 = __return_storage_ptr__->ArrayNum;
        if (iVar3 == __return_storage_ptr__->ArrayMax) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar3 + 1;
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        pFVar2[(longlong)iVar3 * 0xc] = (FScriptContainerElement)0x40;
        *(undefined8 *)(pFVar2 + (longlong)iVar3 * 0xc + 4) = *(undefined8 *)FVar7;
        if ((local_78.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
           (local_78.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_78.CachedElementNameString.field0_0x0.TypedValue.Data.
                                AllocatorInstance.Data);
        }
        if ((local_78.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
           (local_78.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_78.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                AllocatorInstance.Data);
        }
        if (local_78.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.ModulePath.Data.AllocatorInstance.Data);
        }
        pFVar8 = pFVar8 + 0x38;
      }
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDebuggedModularRig @ 14a2621a0

UModularRig * __thiscall UModularRigController::GetDebuggedModularRig(UModularRigController *this)

{
  return (UModularRig *)0x0;
}

// GetDebuggedModularRig @ 14a2621b0

UModularRig * __thiscall UModularRigController::GetDebuggedModularRig(UModularRigController *this)

{
  return (UModularRig *)0x0;
}

// GetModuleReference @ 14a266000

FRigModuleReference * __thiscall
UModularRigController::GetModuleReference
          (UModularRigController *this,FRigModuleReference *__return_storage_ptr__,FName param_1)

{
  FRigModuleReference *pFVar1;
  FName local_res18 [2];
  
  local_res18[0] = param_1;
  pFVar1 = FModularRigModel::FindModule(this->Model,local_res18);
  if (pFVar1 != (FRigModuleReference *)0x0) {
    FRigModuleReference::FRigModuleReference(__return_storage_ptr__,pFVar1);
    return __return_storage_ptr__;
  }
  FRigModuleReference::FRigModuleReference(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPossibleBindings @ 14a267360

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UModularRigController::GetPossibleBindings
          (UModularRigController *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName *param_1,
          FName *param_2)

{
  longlong lVar1;
  FModularRigModel *this_00;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  FRigModuleReference *pFVar5;
  UClass *pUVar6;
  FProperty *pFVar7;
  UControlRig *this_01;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FName *pFVar13;
  ForAnyElementType this_02;
  undefined1 local_res10 [8];
  FName *local_res18;
  FName *local_res20;
  FString local_d8;
  uint local_c8;
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> local_c0;
  FText local_b0;
  UModularRigController *local_a0;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTStack_98;
  FName *local_90;
  FName *pFStack_88;
  code *local_78 [5];
  undefined8 *local_50;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res18 = param_1;
  local_res20 = param_2;
  pFVar5 = FModularRigModel::FindModule(this->Model,param_1);
  if (pFVar5 == (FRigModuleReference *)0x0) {
    return __return_storage_ptr__;
  }
  pUVar6 = TSoftClassPtr<UControlRig>::Get(&pFVar5->Class);
  if (pUVar6 == (UClass *)0x0) {
    return __return_storage_ptr__;
  }
  pUVar6 = TSoftClassPtr<UControlRig>::Get(&pFVar5->Class);
  pFVar7 = UStruct::FindPropertyByName((UStruct *)pUVar6,*local_res20);
  if (pFVar7 == (FProperty *)0x0) {
    return __return_storage_ptr__;
  }
  if ((pFVar7->PropertyFlags & (CPF_DisableEditOnInstance|CPF_BlueprintReadOnly)) != CPF_None) {
    return __return_storage_ptr__;
  }
  lVar11 = this->_padding_;
  if (lVar11 == 0) goto LAB_14a26762b;
  pUVar6 = Z_Construct_UClass_UBlueprint_NoRegister();
  iVar4 = (int)pUVar6->_padding_;
  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < iVar4) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar6->_padding_)) goto LAB_14a26762b;
  lVar1 = *(longlong *)(lVar11 + 0x30);
  if ((lVar1 == 0) || (pUVar6 = Z_Construct_UClass_UObject_NoRegister(), pUVar6 == (UClass *)0x0)) {
LAB_14a267472:
    pUVar6 = (UClass *)0x0;
  }
  else {
    iVar4 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar6->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14a267472;
    pUVar6 = *(UClass **)(lVar11 + 0x30);
  }
  this_01 = UClass::GetDefaultObject<UControlRig>(pUVar6);
  URigVMHost::GetExternalVariables((URigVMHost *)this_01,&local_c0);
  uVar9 = (ulonglong)local_c0.ArrayNum;
  local_c8 = local_c0.ArrayNum;
  pFVar13 = (FName *)(local_c0.AllocatorInstance.Data + uVar9 * 0x30);
  uVar10 = uVar9;
  this_02.Data = local_c0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar9 != (int)uVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FRigVMExternalVariable,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if ((FName *)this_02.Data == pFVar13) break;
    FText::FText(&local_b0);
    ::FName::ToString((FName *)this_02.Data,&local_d8);
    bVar3 = CanBindModuleVariable(this,local_res18,local_res20,&local_d8,&local_b0);
    if (bVar3) {
      pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar12 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 <
           pFVar12 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      _Src.Data = local_d8.Data.AllocatorInstance.Data;
      pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      *(undefined8 *)&pFVar12->field_0x0 = 0;
      lVar11 = (longlong)local_d8.Data.ArrayNum;
      *(int *)&pFVar12[8].field_0x0 = local_d8.Data.ArrayNum;
      if (local_d8.Data.ArrayNum == 0) {
        *(int *)(pFVar12 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_d8.Data.ArrayNum,0,(ForAnyElementType *)pFVar12,local_d8.Data.ArrayNum,
                   (int *)(pFVar12 + 0xc));
        memcpy(*(void **)&pFVar12->field_0x0,_Src.Data,lVar11 * 2);
      }
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
    }
    uVar9 = (ulonglong)(uint)local_c0.ArrayNum;
    this_02.Data = this_02.Data + 0x30;
    uVar10 = (ulonglong)local_c8;
  }
  if ((FName *)local_c0.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
LAB_14a26762b:
  this_00 = this->Model;
  local_90 = local_res18;
  pFStack_88 = local_res20;
  local_78[0] = (code *)0x0;
  local_a0 = this;
  pTStack_98 = __return_storage_ptr__;
  local_50 = FMemory::Malloc(0x28,8);
  *local_50 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UModularRigController::GetPossibleBindings'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_50[1] = local_a0;
  local_50[2] = pTStack_98;
  local_50[3] = local_90;
  local_50[4] = pFStack_88;
  if (local_50 + 1 != (undefined8 *)0x0) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UModularRigController::GetPossibleBindings'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
                  ::Call;
  }
  FModularRigModel::ForEachModule
            (this_00,(TFunction<bool___cdecl(FRigModuleReference_const_*)> *)local_78,true);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a268300

UClass * __cdecl UModularRigController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModularRigController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ModularRigController",
               &Z_Registration_Info_UClass_UModularRigController.InnerSingleton,
               StaticRegisterNativesUModularRigController,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UModularRigController>,
               InternalVTableHelperCtorCaller<UModularRigController>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModularRigController.InnerSingleton;
}

// GetSafeNewName @ 14a26a080

FRigName * __thiscall
UModularRigController::GetSafeNewName
          (UModularRigController *this,FRigName *__return_storage_ptr__,FRigName *param_1,
          FRigModuleReference *param_2)

{
  TOptional<FString> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  undefined8 _Src_00;
  bool bVar5;
  int iVar6;
  FRigName *pFVar7;
  int iVar8;
  longlong lVar9;
  FString local_68;
  undefined8 local_58;
  undefined8 local_50;
  TOptional<FName>_u_0 local_48;
  TOptional<FString>_u_0 local_40;
  
  local_48 = (TOptional<FName>_u_0)0xffffffff;
  if ((param_1->Name).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    local_48.TypedValue = (param_1->Name).field0_0x0.TypedValue;
  }
  local_40.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_40.TypedValue.Data.ArrayNum = 0;
  local_40.TypedValue.Data.ArrayMax = -1;
  if (*(int *)((longlong)&(param_1->NameString).field0_0x0 + 0xc) != -1) {
    ::FString::FString(&local_40.TypedValue,(FString *)&param_1->NameString);
  }
  SanitizeName((FRigName *)&local_48.TypedValue,false);
  _Src_00 = local_40.TypedValue.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Name).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (__return_storage_ptr__->Name).field0_0x0.TypedValue.Number = 0;
  if (local_48.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    (__return_storage_ptr__->Name).field0_0x0.TypedValue = (FName)local_48;
  }
  pTVar1 = &__return_storage_ptr__->NameString;
  piVar2 = (int *)((longlong)&(__return_storage_ptr__->NameString).field0_0x0 + 0xc);
  (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = -1;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->NameString).field0_0x0 + 8) = 0;
  if (local_40.TypedValue.Data.ArrayMax != -1) {
    lVar9 = (longlong)local_40.TypedValue.Data.ArrayNum;
    *(int *)((longlong)&(__return_storage_ptr__->NameString).field0_0x0 + 8) =
         local_40.TypedValue.Data.ArrayNum;
    if (local_40.TypedValue.Data.ArrayNum == 0) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)pTVar1,
                 local_40.TypedValue.Data.ArrayNum,piVar2);
      memcpy((pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src_00,lVar9 * 2);
    }
  }
  do {
    bVar5 = IsNameAvailable(this,__return_storage_ptr__,(FString *)0x0,param_2);
    if (bVar5) {
      if ((local_40.TypedValue.Data.ArrayMax != -1) &&
         (local_40.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_40.TypedValue.Data.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    if ((local_40.TypedValue.Data.ArrayMax == -1) &&
       (local_48.TypedValue.ComparisonIndex.Value != 0xffffffff)) {
      if (local_40.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_40.TypedValue.Data.AllocatorInstance.Data);
      }
      local_40.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      local_58 = 0;
      local_40.TypedValue.Data.ArrayNum = 0;
      local_40.TypedValue.Data.ArrayMax = 0;
      local_50 = 0;
      if ((local_48.TypedValue.ComparisonIndex.Value == 0xffffffff) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FRigName *)(*pcVar4)();
        return pFVar7;
      }
      ::FName::ToString(&local_48.TypedValue,&local_40.TypedValue);
    }
    ::FString::PrintfImpl(&local_68,L"%s_%d");
    iVar8 = local_68.Data.ArrayNum;
    if (*(int *)((longlong)&(__return_storage_ptr__->NameString).field0_0x0 + 0xc) == -1) {
LAB_14a26a284:
      if ((__return_storage_ptr__->Name).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff)
      {
        (__return_storage_ptr__->Name).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
        (__return_storage_ptr__->Name).field0_0x0.TypedValue.Number = 0;
      }
      if (&local_68 != (FString *)pTVar1) {
        pFVar3 = (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
          iVar8 = local_68.Data.ArrayNum;
        }
        _Src.Data = local_68.Data.AllocatorInstance.Data;
        (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
        ;
        *(int *)((longlong)&(__return_storage_ptr__->NameString).field0_0x0 + 8) = iVar8;
        if (iVar8 == 0) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar8,0,(ForAnyElementType *)pTVar1,iVar8,piVar2);
          memcpy((pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data,_Src.Data,
                 (longlong)iVar8 * 2);
        }
        if ((*piVar2 == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FRigName *)(*pcVar4)();
          return pFVar7;
        }
      }
    }
    else {
      iVar6 = *(int *)((longlong)&(__return_storage_ptr__->NameString).field0_0x0 + 8);
      if (iVar6 == iVar8) {
        if (1 < iVar6) {
          iVar6 = wcscmp((wchar_t *)(pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
                         (wchar_t *)local_68.Data.AllocatorInstance.Data);
          bVar5 = iVar6 == 0;
          goto LAB_14a26a279;
        }
      }
      else {
        bVar5 = iVar6 + iVar8 == 1;
LAB_14a26a279:
        if (!bVar5) goto LAB_14a26a284;
      }
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  } while( true );
}

// GetSanitizedName @ 14a26a7d0

FRigName * __cdecl
UModularRigController::GetSanitizedName
          (FRigName *__return_storage_ptr__,FRigName *param_1,bool param_2)

{
  (__return_storage_ptr__->Name).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (__return_storage_ptr__->Name).field0_0x0.TypedValue.Number = 0;
  if ((param_1->Name).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    (__return_storage_ptr__->Name).field0_0x0 = (param_1->Name).field0_0x0;
  }
  (__return_storage_ptr__->NameString).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->NameString).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->NameString).field0_0x0 + 0xc) = 0xffffffff;
  if (*(int *)((longlong)&(param_1->NameString).field0_0x0 + 0xc) != -1) {
    ::FString::FString((FString *)&__return_storage_ptr__->NameString,
                       (FString *)&param_1->NameString);
  }
  SanitizeName(__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetSelectedModules @ 14a26a880

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UModularRigController::GetSelectedModules
          (UModularRigController *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FModularRigModel *pFVar2;
  FScriptContainerElement *_Src;
  
  pFVar2 = this->Model;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar2->SelectedModuleNames).ArrayNum;
  _Src = (pFVar2->SelectedModuleNames).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// ImportModuleSettingsFromString @ 14a2701f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UModularRigController::ImportModuleSettingsFromString
          (UModularRigController *this,FString *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar1
  ;
  TOptional<FString> *pTVar2;
  TOptional<FName> *pTVar3;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  undefined1 *puVar8;
  code *pcVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  undefined8 uVar11;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *pTVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  UScriptStruct *this_00;
  UPackage *pUVar17;
  FRigModuleReference *pFVar18;
  TTuple<FName,FName> *pTVar19;
  UClass *pUVar20;
  UClass *pUVar21;
  FModularRigModuleSettingsForClipboard *pFVar22;
  UControlRig *pUVar23;
  UControlRig *pUVar24;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar25;
  code **ppcVar26;
  FProperty *pFVar27;
  FString *pFVar28;
  FString *pFVar29;
  FName *pFVar30;
  FName *pFVar31;
  FRigHierarchyModulePath *pFVar32;
  byte bVar33;
  longlong *plVar34;
  FScriptContainerElement *pFVar35;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar36;
  ulonglong uVar37;
  wchar_t *pwVar38;
  ForAnyElementType FVar39;
  uint uVar40;
  ForAnyElementType FVar41;
  uint uVar42;
  longlong lVar43;
  FName *this_01;
  uint uVar44;
  undefined1 *puVar45;
  undefined1 auStackY_8d8 [32];
  EModularRigNotification local_898 [4];
  bool local_894;
  EModularRigNotification local_893 [3];
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_890;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_888;
  undefined8 local_868;
  undefined1 local_860 [8];
  FModularRigModuleSettingsForClipboard *local_858;
  FRigHierarchyModulePath local_848;
  TArray<FName,TSizedDefaultAllocator<32>_> local_808;
  TArray<FName,TSizedDefaultAllocator<32>_> local_7f8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_7e8;
  FName *local_7d8;
  FName *local_7d0;
  uint local_7c8;
  UClass *local_7c0;
  FRigModuleReference *local_7b8;
  undefined8 local_7b0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  int local_788;
  undefined4 uStack_784;
  FName local_780;
  UModularRigController *local_778;
  FName *local_770;
  FString *local_768;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_760;
  TOptional<FString>_u_0 local_758;
  void *local_748;
  int local_73c;
  FPropertyInfo *local_728;
  int local_720;
  void *local_718;
  int local_710;
  uint local_708;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_698;
  undefined1 local_678 [8];
  int local_670;
  FName local_66c;
  FName local_660;
  FString local_658;
  undefined1 local_648 [12];
  uint uStack_63c;
  TBitArray<FDefaultBitArrayAllocator> *local_638;
  undefined8 uStack_630;
  longlong local_628;
  int iStack_620;
  undefined4 uStack_61c;
  undefined1 local_618 [12];
  uint uStack_60c;
  TBitArray<FDefaultBitArrayAllocator> *local_608;
  undefined8 uStack_600;
  longlong local_5f8;
  int iStack_5f0;
  undefined4 uStack_5ec;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_5e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5e0;
  undefined8 uStack_5c0;
  FControlRigOverrideValue local_5b8;
  FName local_558;
  FString local_550;
  FString local_540;
  FName local_530;
  FString local_528;
  FString local_518;
  FString local_508;
  FName *local_4f8;
  FScriptContainerElement *local_4f0;
  FScriptContainerElement *local_4e8;
  FScriptContainerElement *local_4e0;
  FControlRigOverrideValue local_4d8;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  code *local_408 [2];
  undefined **local_3f8;
  UModularRigController *local_3f0;
  undefined8 local_3e0;
  TRangedForIterator local_3d8;
  TRangedForIterator local_3a8;
  FRigHierarchyModulePath local_378;
  undefined8 local_330;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_328;
  undefined8 local_320;
  ulonglong uStack_318;
  FControlRigOverrideValue local_308;
  FControlRigOverrideValue local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_228;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_208;
  code *local_1e8 [2];
  code *local_1d8 [3];
  code **local_1c0;
  TSet<TTuple<FName,FModularRigModuleSettingsForClipboard>,TDefaultMapHashableKeyFuncs<FName,FModularRigModuleSettingsForClipboard,0>,FDefaultSetAllocator>
  local_1b8;
  code *local_168 [2];
  code *local_158 [3];
  code **local_140;
  undefined1 local_138 [80];
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> local_e8
  ;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> local_98
  ;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_8d8;
  local_3f8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::`2'::<lambda_1>,0,0>
               ::_vftable_;
  local_408[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UModularRigController::ImportModuleSettingsFromString'::__l2::<lambda_1>,void,wchar_t_const_*,enum_ELogVerbosity::Type>
                 ::Call;
  local_3e0 = 0;
  local_894 = param_3;
  local_778 = this;
  local_768 = param_1;
  local_760 = param_2;
  local_3f0 = this;
  FControlRigOverrideValueErrorPipe::FControlRigOverrideValueErrorPipe
            ((FControlRigOverrideValueErrorPipe *)local_138,Warning,
             (TFunction<void___cdecl(wchar_t_const_*,ELogVerbosity::Type)> *)local_408);
  local_1b8.Elements._0_8_ = 0;
  local_1b8.Elements._8_8_ = 0;
  local_1b8.Elements._32_8_ = 0;
  local_1b8.Elements._40_4_ = 0;
  local_1b8.Elements._44_4_ = 0x80;
  local_1b8.Elements._48_4_ = 0xffffffff;
  local_1b8.Elements._52_4_ = 0;
  local_1b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1b8.HashSize = 0;
  this_00 = FModularRigModuleSettingsSetForClipboard::StaticStruct();
  if (Z_Registration_Info_UScriptStruct_FModularRigModuleSettingsForClipboard.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar17 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FModularRigModuleSettingsForClipboard.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FModularRigModuleSettingsForClipboard,
                         (UObject *)pUVar17,L"ModularRigModuleSettingsForClipboard");
  }
  local_66c = (FName)(Z_Registration_Info_UScriptStruct_FModularRigModuleSettingsForClipboard.
                     OuterSingleton)->_padding_;
  ::FName::ToString(&local_66c,&local_508);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar38 = L"";
  }
  else {
    pwVar38 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  UScriptStruct::ImportText
            (this_00,pwVar38,&local_1b8,(UObject *)0x0,0,(FOutputDevice *)local_138,&local_508,true)
  ;
  if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.Data.AllocatorInstance.Data);
  }
  if ((int)local_138._16_4_ < 1) {
    local_7f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7f8.ArrayNum = 0;
    local_7f8.ArrayMax = 0;
    TMapBase<FName,FModularRigModuleSettingsForClipboard,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FModularRigModuleSettingsForClipboard,0>_>
    ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<FName,FModularRigModuleSettingsForClipboard,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FModularRigModuleSettingsForClipboard,0>_>
                *)&local_1b8,&local_7f8);
    local_808.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar36 = &local_7f8;
    if (param_2->ArrayNum != 0) {
      pTVar36 = param_2;
    }
    TArray<FName,TSizedDefaultAllocator<32>_>::CopyToEmpty<FName,int>
              (&local_808,(FName *)(pTVar36->AllocatorInstance).Data,pTVar36->ArrayNum,0);
    if (local_808.ArrayNum == local_7f8.ArrayNum) {
      uVar40 = 0;
      local_98.Elements._44_4_ = 0x80;
      local_98.Elements._0_8_ = 0;
      local_98.Elements._8_8_ = 0;
      local_98.Elements._32_8_ = 0;
      local_98.Elements._40_4_ = 0;
      local_98.Elements._48_4_ = 0xffffffff;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      local_e8.Elements._0_8_ = 0;
      local_e8.Elements._8_8_ = 0;
      local_e8.Elements._32_8_ = 0;
      local_e8.Elements._40_4_ = 0;
      local_e8.Elements._44_4_ = 0x80;
      local_e8.Elements._48_4_ = 0xffffffff;
      local_e8.Elements._52_4_ = 0;
      local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_e8.HashSize = 0;
      if (0 < local_808.ArrayNum) {
        while( true ) {
          iVar16 = local_808.ArrayNum;
          uVar44 = ~uVar40 >> 0x1f;
          uVar42 = 0;
          if ((int)uVar40 < local_7f8.ArrayNum) {
            uVar42 = uVar44;
          }
          if (uVar42 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              uVar14 = (*pcVar9)();
              return (bool)uVar14;
            }
            iVar16 = local_808.ArrayNum;
          }
          lVar43 = (longlong)(int)uVar40;
          pFVar35 = local_7f8.AllocatorInstance.Data + lVar43 * 8;
          uVar15 = 0;
          uVar42 = uVar15;
          if ((int)uVar40 < iVar16) {
            uVar42 = uVar44;
          }
          if ((uVar42 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          local_4f8 = (FName *)(local_808.AllocatorInstance.Data + lVar43 * 8);
          local_4f0 = pFVar35;
          TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
                    (&local_98,(TPairInitializer<FName_const_&,FName_const_&> *)local_678,
                     (bool *)&local_4f8);
          uVar42 = uVar15;
          if ((int)uVar40 < local_808.ArrayNum) {
            uVar42 = uVar44;
          }
          if ((uVar42 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          pFVar35 = local_808.AllocatorInstance.Data + lVar43 * 8;
          if ((int)uVar40 < local_7f8.ArrayNum) {
            uVar15 = uVar44;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          local_4e8 = local_7f8.AllocatorInstance.Data + lVar43 * 8;
          local_4e0 = pFVar35;
          TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
                    (&local_e8,(TPairInitializer<FName_const_&,FName_const_&> *)(local_678 + 4),
                     (bool *)&local_4e8);
          uVar40 = uVar40 + 1;
          if (local_808.ArrayNum <= (int)uVar40) break;
        }
      }
      local_7e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7e8.ArrayNum = 0;
      local_7e8.ArrayMax = 0;
      local_898[0] = InteractionBracketOpened;
      Notify(this,local_898,(FRigModuleReference *)0x0);
      local_7c8 = local_808.ArrayNum;
      uVar37 = (ulonglong)(int)local_7c8;
      pFVar30 = (FName *)(local_808.AllocatorInstance.Data + uVar37 * 8);
      FVar41.Data = local_808.AllocatorInstance.Data;
      local_7d0 = pFVar30;
      do {
        local_770 = (FName *)FVar41.Data;
        if (local_808.ArrayNum != (int)uVar37) {
          local_898[1] = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_898 + 1);
        }
        if ((FName *)FVar41.Data == pFVar30) {
          iVar16 = local_7e8.ArrayNum;
          uVar37 = (ulonglong)local_7e8.ArrayNum;
          if (local_7e8.ArrayNum != 0) {
            pFVar30 = (FName *)(local_7e8.AllocatorInstance.Data + uVar37 * 8);
            FVar41.Data = local_7e8.AllocatorInstance.Data;
            while( true ) {
              if ((int)uVar37 != iVar16) {
                `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_860);
              }
              if ((FName *)FVar41.Data == pFVar30) break;
              pFVar18 = FModularRigModel::FindModule(this->Model,(FName *)FVar41.Data);
              if (pFVar18 != (FRigModuleReference *)0x0) {
                local_893[0] = ModuleConfigValueChanged;
                Notify(this,local_893,pFVar18);
              }
              uVar37 = local_7e8._8_8_ & 0xffffffff;
              FVar41.Data = FVar41.Data + 8;
            }
          }
          local_893[1] = 9;
          Notify(this,local_893 + 1,(FRigModuleReference *)0x0);
          bVar13 = local_7e8.ArrayNum != 0;
          if ((FName *)local_7e8.AllocatorInstance.Data != (FName *)0x0) {
            FMemory::Free(local_7e8.AllocatorInstance.Data);
          }
          local_e8.HashSize = 0;
          if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_e8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_e8.Elements);
          local_98.HashSize = 0;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_98.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_98.Elements);
          if ((FName *)local_808.AllocatorInstance.Data != (FName *)0x0) {
            FMemory::Free(local_808.AllocatorInstance.Data);
          }
          if (local_7f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7f8.AllocatorInstance.Data);
          }
          local_1b8.HashSize = 0;
          if (local_1b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_1b8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,FModularRigModuleSettingsForClipboard>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,FModularRigModuleSettingsForClipboard>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_1b8.Elements);
          if (local_138._32_8_ != 0) {
            plVar34 = (longlong *)(local_138 + 0x30);
            if ((longlong *)local_138._72_8_ != (longlong *)0x0) {
              plVar34 = (longlong *)local_138._72_8_;
            }
            (**(code **)(*plVar34 + 0x10))();
          }
          FOutputDevice::~FOutputDevice((FOutputDevice *)local_138);
          pFVar35 = (local_768->Data).AllocatorInstance.Data;
          if (pFVar35 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar35);
          }
          pFVar35 = (local_760->AllocatorInstance).Data;
          if (pFVar35 == (FScriptContainerElement *)0x0) {
            return bVar13;
          }
          FMemory::Free(pFVar35);
          return bVar13;
        }
        pFVar18 = FModularRigModel::FindModule(this->Model,(FName *)FVar41.Data);
        local_7b8 = pFVar18;
        if (pFVar18 != (FRigModuleReference *)0x0) {
          pTVar19 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                    ::Find(&local_98,*(FName *)FVar41.Data);
          if ((pTVar19 == (TTuple<FName,FName> *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x288,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          puVar45 = &pTVar19->field_0x8;
          FVar5.ComparisonIndex.Value = *(uint *)&pTVar19->field_0x8;
          FVar5.Number = *(uint *)&pTVar19->field_0xc;
          local_7d8 = (FName *)puVar45;
          local_660 = FVar5;
          uVar40 = ::GetTypeHash(FVar5.ComparisonIndex);
          iVar16 = TSet<TTuple<FName,FModularRigModuleSettingsForClipboard>,TDefaultMapHashableKeyFuncs<FName,FModularRigModuleSettingsForClipboard,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FName>(&local_1b8,FVar5.Number + uVar40,&local_660);
          if (iVar16 != -1) {
            pUVar20 = (UClass *)
                      TPersistentObjectPtr<FSoftObjectPath>::Get
                                ((TPersistentObjectPtr<FSoftObjectPath> *)&pFVar18->Class);
            local_7c0 = pUVar20;
            if (((pUVar20 != (UClass *)0x0) &&
                (bVar13 = UObjectBaseUtility::IsA<UClass>((UObjectBaseUtility *)pUVar20), bVar13))
               && (pUVar21 = UControlRig::StaticClass(), pUVar21 != (UClass *)0x0)) {
              iVar16 = (int)pUVar21->_padding_;
              if (((int)pUVar20->_padding_ < iVar16) ||
                 ((longlong *)*(undefined1 **)(pUVar20->_padding_ + (longlong)iVar16 * 8) !=
                  &pUVar21->_padding_)) {
                bVar13 = false;
              }
              else {
                bVar13 = true;
              }
              if (bVar13) {
                FVar6.ComparisonIndex.Value = *(uint *)&pTVar19->field_0x8;
                FVar6.Number = *(uint *)&pTVar19->field_0xc;
                pFVar22 = TMapBase<FName,FModularRigModuleSettingsForClipboard,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FModularRigModuleSettingsForClipboard,0>_>
                          ::FindChecked((TMapBase<FName,FModularRigModuleSettingsForClipboard,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FModularRigModuleSettingsForClipboard,0>_>
                                         *)&local_1b8,FVar6);
                bVar13 = FSoftObjectPath::operator==
                                   ((FSoftObjectPath *)&(pFVar18->Class).SoftObjectPtr.field_0x8,
                                    &pFVar22->ModuleClass);
                if ((!bVar13) && (2 < (byte)LogControlRig._0_1_)) {
                  ::FName::ToString((FName *)puVar45,&local_438);
                  UE::Logging::Private::BasicLog<3>
                            (&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
                  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_438.Data.AllocatorInstance.Data);
                  }
                }
                if ((pFVar18->ConfigOverrides).Values.ArrayNum != 0) {
                  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                            (&local_7e8,&pFVar18->Name);
                  FControlRigOverrideContainer::Reset(&pFVar18->ConfigOverrides);
                }
                FVar7.ComparisonIndex.Value = *(uint *)&pTVar19->field_0x8;
                FVar7.Number = *(uint *)&pTVar19->field_0xc;
                pFVar22 = TMapBase<FName,FModularRigModuleSettingsForClipboard,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FModularRigModuleSettingsForClipboard,0>_>
                          ::FindChecked((TMapBase<FName,FModularRigModuleSettingsForClipboard,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FModularRigModuleSettingsForClipboard,0>_>
                                         *)&local_1b8,FVar7);
                local_858 = pFVar22;
                if ((pUVar20->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                  UClass::InternalCreateDefaultObjectWrapper(pUVar20);
                }
                pUVar23 = CastChecked<UControlRig,UObject>
                                    ((pUVar20->ClassDefaultObject).field0_0x0.DebugPtr);
                local_780.ComparisonIndex.Value = 0;
                local_780.Number = 0;
                pUVar17 = GetTransientPackage();
                pUVar24 = NewObject<UControlRig>
                                    ((UObject *)pUVar17,pUVar20,local_780,RF_NoFlags,(UObject *)0x0,
                                     false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
                puVar45 = &(pFVar22->Defaults).field_0x10;
                pTVar1 = &pFVar22->Defaults;
                local_6d8._padding_._0_4_ = 0;
                local_6d8._padding_._4_4_ = 1;
                local_6d8.UnvisitedBitMask = 0xffffffff;
                local_6d8.CurrentBitIndex = 0;
                local_6d8.BaseBitIndex = 0;
                local_6d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar45;
                if (*(int *)&(pFVar22->Defaults).field_0x28 != 0) {
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6d8);
                }
                TStack_888._padding_ =
                     CONCAT44(local_6d8._padding_._4_4_,(undefined4)local_6d8._padding_);
                TStack_888._16_8_ = CONCAT44(local_6d8.CurrentBitIndex,local_6d8.UnvisitedBitMask);
                TStack_888._24_8_ = CONCAT44(local_6d8._28_4_,local_6d8.BaseBitIndex);
                iStack_620 = *(int *)&(pFVar22->Defaults).field_0x8 -
                             *(int *)&(pFVar22->Defaults).field_0x34;
                TStack_888.Array = local_6d8.Array;
                local_868._0_4_ = iStack_620;
                local_638 = local_6d8.Array;
                uStack_61c = local_868._4_4_;
                local_890 = pTVar1;
                local_648._0_8_ = pTVar1;
                unique0x100030fd = TStack_888._padding_;
                uStack_630 = TStack_888._16_8_;
                local_628 = TStack_888._24_8_;
                pTVar25 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                          TConstSetBitIterator<FDefaultBitArrayAllocator>
                                    (&local_208,(TBitArray<FDefaultBitArrayAllocator> *)puVar45,
                                     *(int *)&(pFVar22->Defaults).field_0x28);
                TStack_888._padding_ = pTVar25->_padding_;
                TStack_888.Array = pTVar25->Array;
                TStack_888.UnvisitedBitMask = pTVar25->UnvisitedBitMask;
                TStack_888.CurrentBitIndex = pTVar25->CurrentBitIndex;
                TStack_888._24_8_ = *(undefined8 *)&pTVar25->BaseBitIndex;
                local_3a8.InitialNum =
                     *(int *)&(pFVar22->Defaults).field_0x8 -
                     *(int *)&(pFVar22->Defaults).field_0x34;
                local_868._0_4_ = local_3a8.InitialNum;
                local_3a8._44_4_ = local_868._4_4_;
                local_890 = pTVar1;
                local_3a8._padding_ = (longlong)pTVar1;
                local_3a8._padding_ = TStack_888._padding_;
                local_3a8._padding_ = (longlong)TStack_888.Array;
                local_3a8._padding_ = TStack_888._16_8_;
                local_3a8._padding_ = TStack_888._24_8_;
                bVar13 = TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         ::TRangedForIterator::operator!=
                                   ((TRangedForIterator *)local_648,&local_3a8);
                if (bVar13) {
                  pTVar1 = &pFVar22->Overrides;
                  do {
                    pFVar28 = (FString *)
                              (*(longlong *)(undefined1 *)local_648._0_8_ +
                              (longlong)uStack_630._4_4_ * 0x28);
                    iVar16 = *(int *)(*(longlong *)(undefined1 *)local_648._0_8_ + 8 +
                                     (longlong)uStack_630._4_4_ * 0x28);
                    if (iVar16 == 0) {
                      pwVar38 = L"";
                      iVar16 = 0;
                    }
                    else {
                      pwVar38 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
                      iVar16 = iVar16 + -1;
                    }
                    uVar40 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,pwVar38);
                    iVar16 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                             ::FindIndexByHash<FString>
                                       ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                                         *)pTVar1,uVar40,pFVar28);
                    pFVar22 = local_858;
                    if (iVar16 == -1) {
                      local_558 = *local_7d8;
                      ::FString::FString(&local_550,pFVar28);
                      ::FString::FString(&local_540,pFVar28 + 1);
                      local_1e8[0] = (code *)0x0;
                      local_1c0 = (code **)0x0;
                      ppcVar26 = FMemory::Malloc(0x30,8);
                      *ppcVar26 = (code *)&UE::Core::Private::Function::
                                           TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::`105'::<lambda_3>,0,1>
                                           ::_vftable_;
                      *(FName *)(ppcVar26 + 1) = local_558;
                      local_1c0 = ppcVar26;
                      ::FString::FString((FString *)(ppcVar26 + 2),&local_550);
                      ::FString::FString((FString *)(ppcVar26 + 4),&local_540);
                      if ((FName *)(ppcVar26 + 1) != (FName *)0x0) {
                        local_1e8[0] = UE::Core::Private::Function::
                                       TFunctionRefCaller<`UModularRigController::ImportModuleSettingsFromString'::__l105::<lambda_3>,void,wchar_t_const_*,enum_ELogVerbosity::Type>
                                       ::Call;
                      }
                      if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_540.Data.AllocatorInstance.Data);
                      }
                      if (local_550.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_550.Data.AllocatorInstance.Data);
                      }
                      pFVar18 = local_7b8;
                      pUVar20 = local_7c0;
                      FControlRigOverrideValue::FControlRigOverrideValue
                                (&local_5b8,pFVar28,(UStruct *)local_7c0,pFVar28 + 1,
                                 &local_7b8->Name,
                                 (TFunction<void___cdecl(wchar_t_const_*,ELogVerbosity::Type)> *)
                                 local_1e8);
                      if (((((local_5b8.Path.field0_0x0.TypedValue.Data.ArrayMax == -1) ||
                            (local_5b8.CachedStringValue.field0_0x0.TypedValue.Data.ArrayMax == -1))
                           || (local_5b8.DataArray.ArrayNum == 0)) ||
                          ((local_5b8.DataArray.AllocatorInstance.Data ==
                            (FScriptContainerElement *)0x0 ||
                           (pFVar27 = FControlRigOverrideValue::GetLeafProperty(&local_5b8),
                           pFVar27 == (FProperty *)0x0)))) ||
                         (bVar13 = FControlRigOverrideValue::IsDataValid
                                             (&local_5b8,&local_5b8.DataArray,
                                              &local_5b8.DataPropertyHash), !bVar13)) {
                        if (2 < (byte)LogControlRig._0_1_) {
                          ::FName::ToString(local_7d8,&local_478);
                          UE::Logging::Private::BasicLog<3>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
                          if (local_478.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_478.Data.AllocatorInstance.Data);
                          }
                        }
LAB_14a270fea:
                        FControlRigOverrideValue::~FControlRigOverrideValue(&local_5b8);
                        pFVar22 = local_858;
                        if (local_1e8[0] != (code *)0x0) {
                          ppcVar26 = local_1e8 + 2;
                          if (local_1c0 != (code **)0x0) {
                            ppcVar26 = local_1c0;
                          }
                          (**(code **)(*ppcVar26 + 0x10))();
                          pFVar22 = local_858;
                        }
                      }
                      else {
                        pFVar28 = FControlRigOverrideValue::GetPath(&local_5b8);
                        FControlRigOverrideValue::FControlRigOverrideValue
                                  (&local_308,pFVar28,(UStruct *)pUVar20,pUVar23,&pFVar18->Name);
                        if (local_308.Hash == local_5b8.Hash) {
                          FVar39.Data = local_5b8.DataArray.AllocatorInstance.Data;
                          if (local_5b8.DataArray.ArrayNum == 0) {
                            FVar39.Data = (FScriptContainerElement *)0x0;
                          }
                          bVar13 = FControlRigOverrideValue::IdenticalValue(&local_308,FVar39.Data);
                          if (bVar13) {
                            FControlRigOverrideValue::~FControlRigOverrideValue(&local_308);
                            goto LAB_14a270fea;
                          }
                        }
                        FControlRigOverrideValue::CopyToUObject(&local_5b8,(UObject *)pUVar24);
                        pFVar22 = local_858;
                        local_6b8._padding_._0_4_ = 0;
                        local_6b8._padding_._4_4_ = 1;
                        local_6b8.UnvisitedBitMask = 0xffffffff;
                        puVar45 = &(local_858->Overrides).field_0x10;
                        local_6b8.CurrentBitIndex = 0;
                        local_6b8.BaseBitIndex = 0;
                        local_6b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar45;
                        if (*(int *)&(local_858->Overrides).field_0x28 != 0) {
                          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                                    (&local_6b8);
                        }
                        TStack_888._padding_ =
                             CONCAT44(local_6b8._padding_._4_4_,(undefined4)local_6b8._padding_);
                        TStack_888._16_8_ =
                             CONCAT44(local_6b8.CurrentBitIndex,local_6b8.UnvisitedBitMask);
                        TStack_888._24_8_ = CONCAT44(local_6b8._28_4_,local_6b8.BaseBitIndex);
                        iStack_5f0 = *(int *)&(pFVar22->Overrides).field_0x8 -
                                     *(int *)&(pFVar22->Overrides).field_0x34;
                        TStack_888.Array = local_6b8.Array;
                        local_868._0_4_ = iStack_5f0;
                        local_608 = local_6b8.Array;
                        uStack_5ec = local_868._4_4_;
                        local_890 = pTVar1;
                        local_618._0_8_ = pTVar1;
                        unique0x1000311d = TStack_888._padding_;
                        uStack_600 = TStack_888._16_8_;
                        local_5f8 = TStack_888._24_8_;
                        pTVar25 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                                            (&local_228,
                                             (TBitArray<FDefaultBitArrayAllocator> *)puVar45,
                                             *(int *)&(pFVar22->Overrides).field_0x28);
                        TStack_888._padding_ = pTVar25->_padding_;
                        TStack_888.Array = pTVar25->Array;
                        TStack_888.UnvisitedBitMask = pTVar25->UnvisitedBitMask;
                        TStack_888.CurrentBitIndex = pTVar25->CurrentBitIndex;
                        TStack_888._24_8_ = *(undefined8 *)&pTVar25->BaseBitIndex;
                        local_3d8.InitialNum =
                             *(int *)&(pFVar22->Overrides).field_0x8 -
                             *(int *)&(pFVar22->Overrides).field_0x34;
                        local_868._0_4_ = local_3d8.InitialNum;
                        local_3d8._44_4_ = local_868._4_4_;
                        local_890 = pTVar1;
                        local_3d8._padding_ = (longlong)pTVar1;
                        local_3d8._padding_ = TStack_888._padding_;
                        local_3d8._padding_ = (longlong)TStack_888.Array;
                        local_3d8._padding_ = TStack_888._16_8_;
                        local_3d8._padding_ = TStack_888._24_8_;
                        bVar13 = TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 ::TRangedForIterator::operator!=
                                           ((TRangedForIterator *)local_618,&local_3d8);
                        if (bVar13) {
                          do {
                            pFVar28 = (FString *)
                                      (*(longlong *)(undefined1 *)local_618._0_8_ +
                                      (longlong)uStack_600._4_4_ * 0x28);
                            pFVar29 = FControlRigOverrideValue::GetPath(&local_308);
                            bVar13 = FControlRigOverrideContainer::IsChildPathOf(pFVar28,pFVar29);
                            if (bVar13) {
                              FControlRigOverrideValue::FControlRigOverrideValue
                                        (&local_2a8,pFVar28,(UStruct *)pUVar20,pFVar28 + 1,
                                         &pFVar18->Name,
                                         (TFunction<void___cdecl(wchar_t_const_*,ELogVerbosity::Type)>
                                          *)local_1e8);
                              bVar13 = FControlRigOverrideValue::IsValid(&local_2a8);
                              if (bVar13) {
                                FControlRigOverrideValue::CopyToUObject
                                          (&local_2a8,(UObject *)pUVar24);
                              }
                              FControlRigOverrideValue::~FControlRigOverrideValue(&local_2a8);
                            }
                            uStack_600 = CONCAT44(uStack_600._4_4_,(uint)uStack_600 & ~uStack_60c);
                            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)
                                       (local_618 + 8));
                            bVar13 = TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                     ::TRangedForIterator::operator!=
                                               ((TRangedForIterator *)local_618,&local_3d8);
                          } while (bVar13);
                        }
                        pFVar28 = FControlRigOverrideValue::GetPath(&local_5b8);
                        FControlRigOverrideValue::FControlRigOverrideValue
                                  (&local_4d8,pFVar28,(UStruct *)pUVar20,pUVar24,&pFVar18->Name);
                        if (((local_4d8.Path.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
                            (local_4d8.CachedStringValue.field0_0x0.TypedValue.Data.ArrayMax != -1))
                           && ((local_4d8.DataArray.ArrayNum != 0 &&
                               (((local_4d8.DataArray.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0 &&
                                 (pFVar27 = FControlRigOverrideValue::GetLeafProperty(&local_4d8),
                                 pFVar27 != (FProperty *)0x0)) &&
                                (bVar13 = FControlRigOverrideValue::IsDataValid
                                                    (&local_4d8,&local_4d8.DataArray,
                                                     &local_4d8.DataPropertyHash), bVar13)))))) {
                          TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                                    (&local_7e8,&pFVar18->Name);
                          FControlRigOverrideContainer::Add(&pFVar18->ConfigOverrides,&local_4d8);
                        }
                        FControlRigOverrideValue::~FControlRigOverrideValue(&local_4d8);
                        FControlRigOverrideValue::~FControlRigOverrideValue(&local_308);
                        FControlRigOverrideValue::~FControlRigOverrideValue(&local_5b8);
                        if (local_1e8[0] != (code *)0x0) {
                          ppcVar26 = local_1e8 + 2;
                          if (local_1c0 != (code **)0x0) {
                            ppcVar26 = local_1c0;
                          }
                          (**(code **)(*ppcVar26 + 0x10))();
                        }
                      }
                    }
                    uStack_630 = CONCAT44(uStack_630._4_4_,(uint)uStack_630 & ~uStack_63c);
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_648 + 8));
                    bVar13 = TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             ::TRangedForIterator::operator!=
                                       ((TRangedForIterator *)local_648,&local_3a8);
                    pUVar20 = local_7c0;
                  } while (bVar13);
                }
                local_7c0 = pUVar20;
                puVar45 = &(pFVar22->Overrides).field_0x10;
                pTVar1 = &pFVar22->Overrides;
                local_698._padding_._0_4_ = 0;
                local_698._padding_._4_4_ = 1;
                local_698.UnvisitedBitMask = 0xffffffff;
                local_698.CurrentBitIndex = 0;
                local_698.BaseBitIndex = 0;
                local_698.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar45;
                if (*(int *)&(pFVar22->Overrides).field_0x28 != 0) {
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_698);
                }
                TStack_888._padding_ =
                     CONCAT44(local_698._padding_._4_4_,(undefined4)local_698._padding_);
                TStack_888.CurrentBitIndex = local_698.CurrentBitIndex;
                TStack_888.UnvisitedBitMask = local_698.UnvisitedBitMask;
                TStack_888._28_4_ = local_698._28_4_;
                TStack_888.BaseBitIndex = local_698.BaseBitIndex;
                TStack_888.Array = local_698.Array;
                local_868 = CONCAT44(local_868._4_4_,
                                     *(int *)&(pFVar22->Overrides).field_0x8 -
                                     *(int *)&(pFVar22->Overrides).field_0x34);
                TStack_5e0.Array = local_698.Array;
                uStack_5c0 = local_868;
                local_890 = pTVar1;
                local_5e8 = pTVar1;
                TStack_5e0._padding_ = TStack_888._padding_;
                TStack_5e0._16_8_ = TStack_888._16_8_;
                TStack_5e0._24_8_ = TStack_888._24_8_;
                pTVar25 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                          TConstSetBitIterator<FDefaultBitArrayAllocator>
                                    (&local_248,(TBitArray<FDefaultBitArrayAllocator> *)puVar45,
                                     *(int *)&(pFVar22->Overrides).field_0x28);
                TStack_888._padding_ = pTVar25->_padding_;
                pTVar10 = pTVar25->Array;
                uVar11._0_4_ = pTVar25->UnvisitedBitMask;
                uVar11._4_4_ = pTVar25->CurrentBitIndex;
                TStack_888.BaseBitIndex = pTVar25->BaseBitIndex;
                TStack_888._28_4_ = *(undefined4 *)&pTVar25->field_0x1c;
                TStack_888.Array = pTVar10;
                TStack_888._16_8_ = uVar11;
                while( true ) {
                  pTVar12 = local_5e8;
                  if (*(int *)&local_5e8->field_0x8 - *(int *)&local_5e8->field_0x34 !=
                      (int)uStack_5c0) {
                    local_898[2] = 0;
                    `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_898 + 2);
                  }
                  pFVar18 = local_7b8;
                  if (((TStack_5e0.CurrentBitIndex == uVar11._4_4_) && (TStack_5e0.Array == pTVar10)
                      ) && (pTVar12 == pTVar1)) break;
                  pFVar28 = (FString *)
                            (*(longlong *)pTVar12 + (longlong)TStack_5e0.CurrentBitIndex * 0x28);
                  local_530 = *local_7d8;
                  ::FString::FString(&local_528,pFVar28);
                  ::FString::FString(&local_518,pFVar28 + 1);
                  local_168[0] = (code *)0x0;
                  local_140 = (code **)0x0;
                  ppcVar26 = FMemory::Malloc(0x30,8);
                  *ppcVar26 = (code *)&UE::Core::Private::Function::
                                       TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::`149'::<lambda_4>,0,1>
                                       ::_vftable_;
                  *(FName *)(ppcVar26 + 1) = local_530;
                  local_140 = ppcVar26;
                  ::FString::FString((FString *)(ppcVar26 + 2),&local_528);
                  ::FString::FString((FString *)(ppcVar26 + 4),&local_518);
                  if ((FName *)(ppcVar26 + 1) != (FName *)0x0) {
                    local_168[0] = UE::Core::Private::Function::
                                   TFunctionRefCaller<`UModularRigController::ImportModuleSettingsFromString'::__l149::<lambda_4>,void,wchar_t_const_*,enum_ELogVerbosity::Type>
                                   ::Call;
                  }
                  if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_518.Data.AllocatorInstance.Data);
                  }
                  if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_528.Data.AllocatorInstance.Data);
                  }
                  pFVar18 = local_7b8;
                  FControlRigOverrideValue::FControlRigOverrideValue
                            ((FControlRigOverrideValue *)&local_758.TypedValue,pFVar28,
                             (UStruct *)local_7c0,pFVar28 + 1,&local_7b8->Name,
                             (TFunction<void___cdecl(wchar_t_const_*,ELogVerbosity::Type)> *)
                             local_168);
                  if ((((local_758.TypedValue.Data.ArrayMax == -1) || (local_73c == -1)) ||
                      (local_710 == 0)) ||
                     ((local_718 == (void *)0x0 ||
                      (pFVar27 = FControlRigOverrideValue::GetLeafProperty
                                           ((FControlRigOverrideValue *)&local_758.TypedValue),
                      pFVar27 == (FProperty *)0x0)))) {
LAB_14a271312:
                    if (2 < (byte)LogControlRig._0_1_) {
                      ::FName::ToString(local_7d8,&local_418);
                      UE::Logging::Private::BasicLog<3>
                                (&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
                      if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_418.Data.AllocatorInstance.Data);
                      }
                    }
                  }
                  else {
                    pFVar27 = FControlRigOverrideValue::GetLeafProperty
                                        ((FControlRigOverrideValue *)&local_758.TypedValue);
                    if ((pFVar27 == (FProperty *)0x0) ||
                       ((local_710 != pFVar27->ElementSize * pFVar27->ArrayDim ||
                        (uVar40 = FControlRigOverrideValue::GetPropertyHash
                                            ((FControlRigOverrideValue *)&local_758.TypedValue),
                        uVar40 != local_708)))) {
                      bVar13 = false;
                    }
                    else {
                      bVar13 = true;
                    }
                    if (!bVar13) goto LAB_14a271312;
                    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                              (&local_7e8,&pFVar18->Name);
                    FControlRigOverrideContainer::Add
                              (&pFVar18->ConfigOverrides,
                               (FControlRigOverrideValue *)&local_758.TypedValue);
                  }
                  FControlRigOverrideValue::Reset((FControlRigOverrideValue *)&local_758.TypedValue)
                  ;
                  if (local_718 != (void *)0x0) {
                    FMemory::Free(local_718);
                  }
                  DestructItems<FControlRigOverrideValue::FPropertyInfo,int>(local_728,local_720);
                  if (local_728 != (FPropertyInfo *)0x0) {
                    FMemory::Free(local_728);
                  }
                  if ((local_73c != -1) && (local_748 != (void *)0x0)) {
                    FMemory::Free(local_748);
                  }
                  if ((local_758.TypedValue.Data.ArrayMax != -1) &&
                     (local_758.TypedValue.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0)) {
                    FMemory::Free((void *)local_758.TypedValue.Data.AllocatorInstance.Data);
                  }
                  if (local_168[0] != (code *)0x0) {
                    ppcVar26 = local_168 + 2;
                    if (local_140 != (code **)0x0) {
                      ppcVar26 = local_140;
                    }
                    (**(code **)(*ppcVar26 + 0x10))();
                  }
                  TStack_5e0.UnvisitedBitMask =
                       TStack_5e0.UnvisitedBitMask & ~TStack_5e0._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5e0);
                }
                TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                ::Reset((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                         *)&local_7b8->Bindings);
                pFVar22 = local_858;
                local_6f8._padding_._0_4_ = 0;
                local_6f8._padding_._4_4_ = 1;
                local_6f8.UnvisitedBitMask = 0xffffffff;
                puVar45 = &(local_858->Bindings).field_0x10;
                local_6f8.CurrentBitIndex = 0;
                local_6f8.BaseBitIndex = 0;
                pTVar4 = &local_858->Bindings;
                local_6f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar45;
                if (*(int *)&(local_858->Bindings).field_0x28 != 0) {
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6f8);
                }
                uVar40 = *(uint *)&(pFVar22->Bindings).field_0x28;
                local_788 = *(int *)&(pFVar22->Bindings).field_0x8 -
                            *(int *)&(pFVar22->Bindings).field_0x34;
                bVar33 = (byte)uVar40 & 0x1f;
                TStack_888._padding_ =
                     CONCAT44(local_6f8._padding_._4_4_,(undefined4)local_6f8._padding_);
                TStack_888.CurrentBitIndex = local_6f8.CurrentBitIndex;
                TStack_888.UnvisitedBitMask = local_6f8.UnvisitedBitMask;
                TStack_888._28_4_ = local_6f8._28_4_;
                TStack_888.BaseBitIndex = local_6f8.BaseBitIndex;
                iVar16 = (int)uVar40 >> 5;
                uVar44 = uVar40 & 0xffffffe0;
                uVar42 = -1 << bVar33;
                local_7b0 = CONCAT44(1 << bVar33,iVar16);
                uStack_7a0 = CONCAT44(uVar40,uVar42);
                uStack_798 = CONCAT44(local_6f8.CurrentBitIndex,uVar40) & 0xffffffffffffffe0;
                local_868 = CONCAT44(uStack_784,local_788);
                TStack_888.Array = local_6f8.Array;
                local_890 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                             *)pTVar4;
                pTStack_7a8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar45;
                uStack_790 = TStack_888._24_8_;
                if (((int)uVar40 < 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x7af,L""), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  uVar14 = (*pcVar9)();
                  return (bool)uVar14;
                }
                pTVar10 = pTStack_7a8;
                uVar15 = *(uint *)&(pFVar22->Bindings).field_0x28;
                if (uVar40 != uVar15) {
                  puVar8 = *(undefined1 **)&(pFVar22->Bindings).field_0x20;
                  if (puVar8 != (undefined1 *)0x0) {
                    puVar45 = puVar8;
                  }
                  uVar42 = uVar42 & *(uint *)(puVar45 + (longlong)iVar16 * 4);
                  while (uVar42 == 0) {
                    uVar44 = uVar44 + 0x20;
                    lVar43 = (longlong)iVar16;
                    uVar37 = uStack_798 >> 0x20;
                    uStack_798 = CONCAT44((int)uVar37,uVar44);
                    iVar16 = iVar16 + 1;
                    uVar37 = (ulonglong)local_7b0 >> 0x20;
                    local_7b0 = CONCAT44((int)uVar37,iVar16);
                    if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
                    goto LAB_14a2715bb;
                    uVar42 = *(uint *)(puVar45 + lVar43 * 4 + 4);
                    uStack_7a0 = 0xffffffff;
                  }
                  local_7b0 = CONCAT44(-uVar42 & uVar42,(undefined4)local_7b0);
                  uVar37 = (ulonglong)(-uVar42 & uVar42) * 2 + 1;
                  lVar43 = 0x3f;
                  if (uVar37 != 0) {
                    for (; uVar37 >> lVar43 == 0; lVar43 = lVar43 + -1) {
                    }
                  }
                  local_670 = (int)lVar43;
                  iVar16 = (uVar44 - 1) + local_670;
                  uStack_7a0 = CONCAT44(iVar16,(undefined4)uStack_7a0);
                  if ((int)uVar15 < iVar16) {
LAB_14a2715bb:
                    uStack_7a0 = CONCAT44(uVar15,(undefined4)uStack_7a0);
                  }
                }
                local_330 = local_7b0;
                pTStack_328 = pTStack_7a8;
                local_320 = uStack_7a0;
                uVar11 = local_320;
                uStack_318 = uStack_798;
                local_320._4_4_ = (int)((ulonglong)uStack_7a0 >> 0x20);
                iVar16 = local_320._4_4_;
                local_320 = uVar11;
                while( true ) {
                  pTVar1 = local_890;
                  if (*(int *)&local_890->field_0x8 - *(int *)&local_890->field_0x34 !=
                      (int)local_868) {
                    local_898[3] = 0;
                    `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_898 + 3);
                  }
                  if (((TStack_888.CurrentBitIndex == iVar16) && (TStack_888.Array == pTVar10)) &&
                     (pFVar30 = local_7d0, this = local_778,
                     FVar41.Data = (FScriptContainerElement *)local_770,
                     pTVar1 == (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                                *)pTVar4)) break;
                  this_01 = (FName *)((longlong)TStack_888.CurrentBitIndex * 0x20 +
                                     *(longlong *)pTVar1);
                  ::FString::FString(&local_848.ModulePath,(FString *)(this_01 + 1));
                  local_848.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
                  local_848.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                       = (ForAnyElementType)(FScriptContainerElement *)0x0;
                  local_848.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
                  local_848.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                  Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
                  local_848.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
                  local_848.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
                  local_848.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
                  local_848.CachedModuleFName.field0_0x0.TypedValue.ComparisonIndex.Value =
                       (FNameEntryId)0xffffffff;
                  local_848.CachedElementFName.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
                  pFVar30 = FRigHierarchyModulePath::GetModuleFName(&local_848);
                  pTVar19 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                            ::Find(&local_e8,*pFVar30);
                  pFVar30 = (FName *)&pTVar19->field_0x8;
                  if (pTVar19 == (TTuple<FName,FName> *)0x0) {
                    pFVar30 = (FName *)0x0;
                  }
                  if ((pFVar30 != (FName *)0x0) &&
                     ((*pFVar30 == (FName)0x0 ||
                      (pFVar31 = FRigHierarchyModulePath::GetModuleFName(&local_848),
                      *pFVar31 != *pFVar30)))) {
                    pFVar31 = FRigHierarchyModulePath::GetElementFName(&local_848);
                    pFVar32 = FRigHierarchyModulePath::Join(&local_378,pFVar30,pFVar31);
                    if (&local_848 != pFVar32) {
                      if (local_848.ModulePath.Data.AllocatorInstance.Data !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_848.ModulePath.Data.AllocatorInstance.Data);
                      }
                      local_848.ModulePath.Data.AllocatorInstance.Data =
                           (pFVar32->ModulePath).Data.AllocatorInstance.Data;
                      (pFVar32->ModulePath).Data.AllocatorInstance.Data =
                           (FScriptContainerElement *)0x0;
                      local_848.ModulePath.Data.ArrayNum = (pFVar32->ModulePath).Data.ArrayNum;
                      local_848.ModulePath.Data.ArrayMax = (pFVar32->ModulePath).Data.ArrayMax;
                      (pFVar32->ModulePath).Data.ArrayNum = 0;
                      (pFVar32->ModulePath).Data.ArrayMax = 0;
                    }
                    pTVar2 = &pFVar32->CachedModuleNameString;
                    if (pTVar2 != &local_848.CachedModuleNameString) {
                      if (*(int *)((longlong)&(pFVar32->CachedModuleNameString).field0_0x0 + 0xc) ==
                          -1) {
                        if (local_848.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax !=
                            -1) {
                          if (local_848.CachedModuleNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                            FMemory::Free((void *)local_848.CachedModuleNameString.field0_0x0.
                                                  TypedValue.Data.AllocatorInstance.Data);
                          }
                          local_848.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
                          local_848.CachedModuleNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0
                          ;
                          local_848.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
                        }
                      }
                      else {
                        if (local_848.CachedModuleNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free((void *)local_848.CachedModuleNameString.field0_0x0.
                                                TypedValue.Data.AllocatorInstance.Data);
                        }
                        local_848.CachedModuleNameString.field0_0x0.TypedValue.Data.
                        AllocatorInstance.Data =
                             (ForAnyElementType)
                             (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
                        (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                             (FScriptContainerElement *)0x0;
                        local_848.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum =
                             *(int *)((longlong)&(pFVar32->CachedModuleNameString).field0_0x0 + 8);
                        local_848.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax =
                             *(int *)((longlong)&(pFVar32->CachedModuleNameString).field0_0x0 + 0xc)
                        ;
                        *(int *)((longlong)&(pFVar32->CachedModuleNameString).field0_0x0 + 8) = 0;
                        *(int *)((longlong)&(pFVar32->CachedModuleNameString).field0_0x0 + 0xc) = 0;
                        if ((local_848.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax ==
                             -1) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                        ("IsSet()",
                                                                                                                  
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                                  ,0x171,
                                                  L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                                  ), bVar13)) {
                          pcVar9 = (code *)swi(3);
                          uVar14 = (*pcVar9)();
                          return (bool)uVar14;
                        }
                      }
                    }
                    pTVar2 = &pFVar32->CachedElementNameString;
                    if (pTVar2 != &local_848.CachedElementNameString) {
                      if (*(int *)((longlong)&(pFVar32->CachedElementNameString).field0_0x0 + 0xc)
                          == -1) {
                        if (local_848.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax !=
                            -1) {
                          if (local_848.CachedElementNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                            FMemory::Free((void *)local_848.CachedElementNameString.field0_0x0.
                                                  TypedValue.Data.AllocatorInstance.Data);
                          }
                          local_848.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax = -1
                          ;
                          local_848.CachedElementNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0
                          ;
                          local_848.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
                        }
                      }
                      else {
                        if (local_848.CachedElementNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free((void *)local_848.CachedElementNameString.field0_0x0.
                                                TypedValue.Data.AllocatorInstance.Data);
                        }
                        local_848.CachedElementNameString.field0_0x0.TypedValue.Data.
                        AllocatorInstance.Data =
                             (ForAnyElementType)
                             (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
                        (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                             (FScriptContainerElement *)0x0;
                        local_848.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum =
                             *(int *)((longlong)&(pFVar32->CachedElementNameString).field0_0x0 + 8);
                        local_848.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax =
                             *(int *)((longlong)&(pFVar32->CachedElementNameString).field0_0x0 + 0xc
                                     );
                        *(int *)((longlong)&(pFVar32->CachedElementNameString).field0_0x0 + 8) = 0;
                        *(int *)((longlong)&(pFVar32->CachedElementNameString).field0_0x0 + 0xc) = 0
                        ;
                        if ((local_848.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax
                             == -1) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsSet()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                                ,0x171,
                                                L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                               ), bVar13)) {
                          pcVar9 = (code *)swi(3);
                          uVar14 = (*pcVar9)();
                          return (bool)uVar14;
                        }
                      }
                    }
                    pTVar3 = &pFVar32->CachedModuleFName;
                    if (pTVar3 != &local_848.CachedModuleFName) {
                      if ((pTVar3->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
                        if (local_848.CachedModuleFName.field0_0x0.TypedValue.ComparisonIndex.Value
                            != 0xffffffff) {
                          local_848.CachedModuleFName.field0_0x0.TypedValue.ComparisonIndex.Value =
                               (FNameEntryId)0xffffffff;
                          local_848.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
                        }
                      }
                      else {
                        local_848.CachedModuleFName.field0_0x0.TypedValue.ComparisonIndex.Value =
                             (pTVar3->field0_0x0).TypedValue.ComparisonIndex;
                        local_848.CachedModuleFName.field0_0x0.TypedValue.Number =
                             (pTVar3->field0_0x0).TypedValue.Number;
                        if ((local_848.CachedModuleFName.field0_0x0.TypedValue.ComparisonIndex.Value
                             == 0xffffffff) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsSet()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                                ,0x171,
                                                L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                               ), bVar13)) {
                          pcVar9 = (code *)swi(3);
                          uVar14 = (*pcVar9)();
                          return (bool)uVar14;
                        }
                      }
                    }
                    pTVar3 = &pFVar32->CachedElementFName;
                    if (pTVar3 != &local_848.CachedElementFName) {
                      if ((pTVar3->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
                        if (local_848.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value
                            != 0xffffffff) {
                          local_848.CachedElementFName.field0_0x0 = (TOptional<FName>_u_0)0xffffffff
                          ;
                        }
                      }
                      else {
                        local_848.CachedElementFName.field0_0x0 =
                             (TOptional<FName>_u_0)
                             *(TOptional<FName>_u_0 *)&(pTVar3->field0_0x0).TypedValue;
                        if ((local_848.CachedElementFName.field0_0x0._0_4_ == 0xffffffff) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsSet()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                                ,0x171,
                                                L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                               ), bVar13)) {
                          pcVar9 = (code *)swi(3);
                          uVar14 = (*pcVar9)();
                          return (bool)uVar14;
                        }
                      }
                    }
                    if ((local_378.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1
                        ) && (local_378.CachedElementNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                      FMemory::Free((void *)local_378.CachedElementNameString.field0_0x0.TypedValue.
                                            Data.AllocatorInstance.Data);
                    }
                    if ((local_378.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1)
                       && (local_378.CachedModuleNameString.field0_0x0.TypedValue.Data.
                           AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                      FMemory::Free((void *)local_378.CachedModuleNameString.field0_0x0.TypedValue.
                                            Data.AllocatorInstance.Data);
                    }
                    if (local_378.ModulePath.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_378.ModulePath.Data.AllocatorInstance.Data);
                    }
                  }
                  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                            (&local_7e8,&pFVar18->Name);
                  bVar13 = BindModuleVariable(local_778,&pFVar18->Name,this_01,&local_848.ModulePath
                                              ,local_894);
                  if ((!bVar13) && (2 < (byte)LogControlRig._0_1_)) {
                    ::FName::ToString(this_01,&local_458);
                    ::FName::ToString(&pFVar18->Name,&local_468);
                    UE::Logging::Private::BasicLog<3>
                              (&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
                    if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_468.Data.AllocatorInstance.Data);
                    }
                    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_458.Data.AllocatorInstance.Data);
                    }
                  }
                  if ((local_848.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1)
                     && (local_848.CachedElementNameString.field0_0x0.TypedValue.Data.
                         AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free((void *)local_848.CachedElementNameString.field0_0x0.TypedValue.
                                          Data.AllocatorInstance.Data);
                  }
                  if ((local_848.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1)
                     && (local_848.CachedModuleNameString.field0_0x0.TypedValue.Data.
                         AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free((void *)local_848.CachedModuleNameString.field0_0x0.TypedValue.
                                          Data.AllocatorInstance.Data);
                  }
                  if (local_848.ModulePath.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_848.ModulePath.Data.AllocatorInstance.Data);
                  }
                  TStack_888.UnvisitedBitMask =
                       TStack_888.UnvisitedBitMask & ~TStack_888._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_888);
                }
                goto LAB_14a271a52;
              }
            }
            if (1 < (byte)LogControlRig._0_1_) {
              FSoftObjectPath::ToString
                        ((FSoftObjectPath *)&(pFVar18->Class).SoftObjectPtr.field_0x8,&local_658);
              ::FName::ToString((FName *)puVar45,&local_448);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
              if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_448.Data.AllocatorInstance.Data);
              }
              if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_658.Data.AllocatorInstance.Data);
              }
            }
            if ((FName *)local_7e8.AllocatorInstance.Data != (FName *)0x0) {
              FMemory::Free(local_7e8.AllocatorInstance.Data);
            }
            local_e8.HashSize = 0;
            if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_e8.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_e8.Elements);
            local_98.HashSize = 0;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_98.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_98.Elements);
            if ((FName *)local_808.AllocatorInstance.Data != (FName *)0x0) {
              FMemory::Free(local_808.AllocatorInstance.Data);
            }
            if (local_7f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7f8.AllocatorInstance.Data);
            }
            local_1b8.HashSize = 0;
            if (local_1b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_1b8.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<FName,FModularRigModuleSettingsForClipboard>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FName,FModularRigModuleSettingsForClipboard>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_1b8.Elements);
            if (local_138._32_8_ != 0) {
              plVar34 = (longlong *)(local_138 + 0x30);
              if ((longlong *)local_138._72_8_ != (longlong *)0x0) {
                plVar34 = (longlong *)local_138._72_8_;
              }
              (**(code **)(*plVar34 + 0x10))();
            }
            FOutputDevice::~FOutputDevice((FOutputDevice *)local_138);
            pFVar35 = (local_768->Data).AllocatorInstance.Data;
            if (pFVar35 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar35);
            }
            pFVar35 = (local_760->AllocatorInstance).Data;
            goto LAB_14a271bbf;
          }
          pFVar30 = local_7d0;
          if (1 < (byte)LogControlRig._0_1_) {
            ::FName::ToString((FName *)puVar45,&local_428);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
            pFVar30 = local_7d0;
            if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_428.Data.AllocatorInstance.Data);
              pFVar30 = local_7d0;
            }
          }
        }
LAB_14a271a52:
        FVar41.Data = FVar41.Data + 8;
        uVar37 = (ulonglong)local_7c8;
      } while( true );
    }
    if (1 < (byte)LogControlRig._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
    }
    if ((FName *)local_808.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_808.AllocatorInstance.Data);
    }
    if (local_7f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7f8.AllocatorInstance.Data);
    }
    local_1b8.HashSize = 0;
    if (local_1b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1b8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FModularRigModuleSettingsForClipboard>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FModularRigModuleSettingsForClipboard>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1b8.Elements);
    if (local_138._32_8_ != 0) {
      plVar34 = (longlong *)(local_138 + 0x30);
      if ((longlong *)local_138._72_8_ != (longlong *)0x0) {
        plVar34 = (longlong *)local_138._72_8_;
      }
      (**(code **)(*plVar34 + 0x10))();
    }
    FOutputDevice::~FOutputDevice((FOutputDevice *)local_138);
    pFVar35 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
      pFVar35 = (param_2->AllocatorInstance).Data;
      goto LAB_14a271bbf;
    }
  }
  else {
    local_1b8.HashSize = 0;
    if (local_1b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1b8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FModularRigModuleSettingsForClipboard>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FModularRigModuleSettingsForClipboard>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1b8.Elements);
    if (local_138._32_8_ != 0) {
      plVar34 = (longlong *)(local_138 + 0x30);
      if ((longlong *)local_138._72_8_ != (longlong *)0x0) {
        plVar34 = (longlong *)local_138._72_8_;
      }
      (**(code **)(*plVar34 + 0x10))();
    }
    FOutputDevice::~FOutputDevice((FOutputDevice *)local_138);
    pFVar35 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
    }
  }
  pFVar35 = (param_2->AllocatorInstance).Data;
LAB_14a271bbf:
  if (pFVar35 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar35);
  }
  return false;
}

// IsNameAvailable @ 14a274c00

/* WARNING: Removing unreachable block (ram,0x00014a274ca2) */
/* WARNING: Removing unreachable block (ram,0x00014a274cac) */
/* WARNING: Removing unreachable block (ram,0x00014a274d30) */
/* WARNING: Removing unreachable block (ram,0x00014a274cb4) */
/* WARNING: Removing unreachable block (ram,0x00014a274cc1) */
/* WARNING: Removing unreachable block (ram,0x00014a274cc6) */
/* WARNING: Removing unreachable block (ram,0x00014a274cd8) */
/* WARNING: Removing unreachable block (ram,0x00014a274cfd) */
/* WARNING: Removing unreachable block (ram,0x00014a274cfe) */
/* WARNING: Removing unreachable block (ram,0x00014a274d04) */
/* WARNING: Removing unreachable block (ram,0x00014a274d29) */
/* WARNING: Removing unreachable block (ram,0x00014a274d2a) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffb8 : 0x00014a274d41 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool __thiscall
UModularRigController::IsNameAvailable
          (UModularRigController *this,FRigName *param_1,FString *param_2,
          FRigModuleReference *param_3)

{
  int *piVar1;
  FModularRigModel *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FName *pFVar7;
  FString *pFVar8;
  TOptional<FName>_u_0 TVar9;
  TOptional<FName>_u_0 TVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  FRigModuleReference *pFVar13;
  FRigModuleReference *pFVar14;
  bool bVar15;
  undefined1 local_res10 [8];
  FName local_60;
  undefined8 local_58;
  undefined8 local_50;
  TOptional<FName>_u_0 local_48;
  TOptional<FString>_u_0 local_40;
  
  local_48 = (TOptional<FName>_u_0)0xffffffff;
  if ((param_1->Name).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    local_48 = (TOptional<FName>_u_0)*(TOptional<FName>_u_0 *)&(param_1->Name).field0_0x0.TypedValue
    ;
  }
  local_40.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_40.TypedValue.Data.ArrayNum = 0;
  local_40.TypedValue.Data.ArrayMax = -1;
  if (*(int *)((longlong)&(param_1->NameString).field0_0x0 + 0xc) != -1) {
    ::FString::FString(&local_40.TypedValue,(FString *)&param_1->NameString);
  }
  SanitizeName((FRigName *)&local_48.TypedValue,false);
  if ((local_48.TypedValue.ComparisonIndex.Value == 0xffffffff) ||
     ((param_1->Name).field0_0x0.TypedValue.ComparisonIndex.Value == 0xffffffff)) {
    piVar1 = (int *)((longlong)&(param_1->NameString).field0_0x0 + 0xc);
    if ((local_40.TypedValue.Data.ArrayMax == -1) || (*piVar1 == -1)) {
      if ((local_48.TypedValue.ComparisonIndex.Value == 0xffffffff) || (*piVar1 == -1)) {
        if ((local_40.TypedValue.Data.ArrayMax == -1) ||
           ((param_1->Name).field0_0x0.TypedValue.ComparisonIndex.Value == 0xffffffff)) {
          if (local_48.TypedValue.ComparisonIndex.Value == 0xffffffff) {
            if (local_40.TypedValue.Data.ArrayMax == -1) {
              bVar4 = true;
            }
            else {
              uVar12 = FRigName::EmptyString.Data.ArrayNum;
              if (local_40.TypedValue.Data.ArrayMax != -1) {
                uVar12 = local_40.TypedValue.Data.ArrayNum;
              }
              bVar4 = (int)uVar12 < 2;
            }
          }
          else {
            bVar4 = local_48 == (TOptional<FName>_u_0)0x0;
          }
          if ((param_1->Name).field0_0x0.TypedValue.ComparisonIndex.Value == 0xffffffff) {
            if (*(int *)((longlong)&(param_1->NameString).field0_0x0 + 0xc) == -1) {
              bVar15 = true;
            }
            else {
              pFVar8 = FRigName::GetName(param_1);
              bVar15 = (pFVar8->Data).ArrayNum < 2;
            }
          }
          else {
            bVar15 = (param_1->Name).field0_0x0 == (TOptional<FName>_u_0)0x0;
          }
          bVar4 = bVar4 == bVar15;
          uVar12 = local_40.TypedValue.Data.ArrayNum;
          goto LAB_14a274eb4;
        }
      }
      else if (local_40.TypedValue.Data.ArrayMax == -1) {
        if (local_40.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_40.TypedValue.Data.AllocatorInstance.Data);
        }
        local_40.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_58 = 0;
        local_40.TypedValue.Data.ArrayNum = 0;
        local_40.TypedValue.Data.ArrayMax = 0;
        local_50 = 0;
        if ((local_48.TypedValue.ComparisonIndex.Value == 0xffffffff) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        ::FName::ToString(&local_48.TypedValue,&local_40.TypedValue);
      }
      pFVar8 = FRigName::GetName(param_1);
      iVar6 = (pFVar8->Data).ArrayNum;
      if (local_40.TypedValue.Data.ArrayNum == iVar6) goto LAB_14a274d8d;
      bVar4 = local_40.TypedValue.Data.ArrayNum + iVar6 == 1;
      uVar12 = local_40.TypedValue.Data.ArrayNum;
    }
    else {
      pFVar8 = FRigName::GetName(param_1);
      iVar6 = (pFVar8->Data).ArrayNum;
      if (local_40.TypedValue.Data.ArrayNum == iVar6) {
LAB_14a274d8d:
        uVar12 = local_40.TypedValue.Data.ArrayNum;
        if (local_40.TypedValue.Data.ArrayNum < 2) {
          bVar4 = true;
        }
        else {
          iVar6 = wcscmp((wchar_t *)local_40.TypedValue.Data.AllocatorInstance.Data,
                         (wchar_t *)(pFVar8->Data).AllocatorInstance.Data);
          bVar4 = iVar6 == 0;
        }
      }
      else {
        bVar4 = iVar6 + local_40.TypedValue.Data.ArrayNum == 1;
        uVar12 = local_40.TypedValue.Data.ArrayNum;
      }
    }
  }
  else {
    pFVar7 = FRigName::GetFName(param_1);
    uVar12 = local_40.TypedValue.Data.ArrayNum;
    if ((local_48.TypedValue.ComparisonIndex.Value == (FNameEntryId)(pFVar7->ComparisonIndex).Value)
       && (local_48.TypedValue.Number == pFVar7->Number)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
  }
LAB_14a274eb4:
  if (bVar4) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) &&
       (_Init_thread_header(&::_TSS1), uVar12 = local_40.TypedValue.Data.ArrayNum, ::_TSS1 == -1)) {
      ::FString::FString(&NameAlreadyInUse,L"This name is already in use.");
      atexit(`UModularRigController::IsNameAvailable'::__l2::
             _dynamic_atexit_destructor_for__NameAlreadyInUse__);
      _Init_thread_footer(&::_TSS1);
      uVar12 = local_40.TypedValue.Data.ArrayNum;
    }
    pFVar2 = this->Model;
    iVar6 = (pFVar2->Modules).ArrayNum;
    pFVar13 = (FRigModuleReference *)(pFVar2->Modules).AllocatorInstance.Data;
    pFVar14 = pFVar13 + iVar6;
    TVar10.TypedValue = FRigName::EmptyName;
    do {
      if ((pFVar2->Modules).ArrayNum != iVar6) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FRigModuleReference,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
        TVar10.TypedValue = FRigName::EmptyName;
        uVar12 = local_40.TypedValue.Data.ArrayNum;
      }
      if (pFVar13 == pFVar14) {
        bVar4 = true;
        goto LAB_14a275051;
      }
      if (pFVar13 != param_3) {
        TVar9 = local_48;
        if (((local_48.TypedValue.ComparisonIndex.Value == 0xffffffff) &&
            (TVar9 = TVar10, local_40.TypedValue.Data.ArrayMax != -1)) && (1 < (int)uVar12)) {
          uVar11 = L"";
          if (uVar12 != 0) {
            uVar11 = local_40.TypedValue.Data.AllocatorInstance.Data;
          }
          ::FName::FName(&local_60,(wchar_t *)uVar11);
          local_48.TypedValue = local_60;
          if ((local_60.ComparisonIndex.Value.Value == 0xffffffff) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x171,
                                 L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          TVar9 = local_48;
          TVar10.TypedValue = FRigName::EmptyName;
          uVar12 = local_40.TypedValue.Data.ArrayNum;
          if ((local_48.TypedValue.ComparisonIndex.Value.Value == 0xffffffff) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), TVar9 = local_48, TVar10.TypedValue = FRigName::EmptyName,
             uVar12 = local_40.TypedValue.Data.ArrayNum, bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        if (*(TOptional<FName>_u_0 *)&pFVar13->Name == TVar9) goto LAB_14a275037;
      }
      pFVar13 = pFVar13 + 1;
    } while( true );
  }
  if (param_2 != (FString *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FString::FString(&ContainsInvalidCharactersMessage,L"Name contains invalid characters.");
      atexit(`UModularRigController::IsNameAvailable'::__l8::
             _dynamic_atexit_destructor_for__ContainsInvalidCharactersMessage__);
      _Init_thread_footer(&::_TSS0);
    }
    ::FString::operator=(param_2,&ContainsInvalidCharactersMessage);
    bVar4 = false;
    goto LAB_14a275051;
  }
LAB_14a27504b:
  bVar4 = false;
LAB_14a275051:
  if ((local_40.TypedValue.Data.ArrayMax != -1) &&
     (local_40.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_40.TypedValue.Data.AllocatorInstance.Data);
  }
  return bVar4;
LAB_14a275037:
  if (param_2 != (FString *)0x0) {
    ::FString::operator=(param_2,&NameAlreadyInUse);
  }
  goto LAB_14a27504b;
}

// MirrorModule @ 14a275f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FName __thiscall
UModularRigController::MirrorModule
          (UModularRigController *this,FName *param_1,FRigVMMirrorSettings *param_2,bool param_3)

{
  TOptional<FString> *pTVar1;
  TOptional<FName> *pTVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  FRigModuleReference *pFVar10;
  UClass *pUVar11;
  FString *pFVar12;
  FName FVar13;
  FRigName *this_00;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar14;
  FString *pFVar15;
  FRigHierarchyModulePath *pFVar16;
  byte bVar17;
  longlong lVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  FControlRigOverrideValue *pFVar21;
  int iVar22;
  UModularRigController *pUVar23;
  FName *pFVar24;
  wchar_t *pwVar25;
  undefined7 in_register_00000089;
  longlong lVar26;
  wchar_t *pwVar27;
  uint uVar28;
  undefined1 *puVar29;
  bool in_stack_00000028;
  undefined1 auStackY_5b8 [32];
  EModularRigNotification local_578 [5];
  EModularRigNotification local_573;
  undefined1 local_572;
  undefined1 local_571;
  UModularRigController *local_570;
  FRigHierarchyModulePath local_568;
  FString local_528;
  FName local_518;
  int local_510;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_508;
  TOptional<FName>_u_0 local_4f8;
  TOptional<FString>_u_0 local_4f0;
  int *local_4e0;
  TBitArray<FDefaultBitArrayAllocator> *local_4d8;
  FName local_4d0;
  undefined4 local_4c8;
  FNameEntryId FStack_4c4;
  uint uStack_4c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_498;
  FName local_478;
  FName local_470;
  FName local_468;
  FName local_460;
  FString local_458;
  longlong local_448;
  undefined8 local_440;
  uint local_438;
  undefined1 *local_430;
  FRigElementKey local_428;
  longlong *local_418;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_410;
  undefined8 uStack_3f0;
  longlong *local_3e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3e0;
  undefined8 uStack_3c0;
  longlong *local_3b8;
  longlong lStack_3b0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  int local_390;
  undefined4 uStack_38c;
  FString local_388;
  FString local_378;
  undefined1 local_368 [40];
  int local_340;
  undefined4 uStack_33c;
  FString local_330;
  FString local_320;
  FString local_310;
  FRigName local_300;
  FRigHierarchyModulePath local_2e8;
  undefined1 local_2a8 [32];
  undefined1 *local_288;
  uint local_280;
  undefined4 local_27c;
  undefined4 local_278;
  int local_274;
  ForElementType<FSetElementId> local_268;
  int local_260;
  undefined1 local_258 [40];
  int local_230;
  int local_224;
  void *local_218;
  undefined4 local_210;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_208;
  FControlRigOverrideContainer local_1b8;
  ulonglong local_58;
  
  lVar26 = CONCAT71(in_register_00000089,param_3);
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  local_570 = this;
  local_4d0 = (FName)param_1;
  pFVar10 = FModularRigModel::FindModule(this->Model,(FName *)param_2);
  if ((pFVar10 == (FRigModuleReference *)0x0) ||
     (pUVar11 = TSoftClassPtr<UControlRig>::Get(&pFVar10->Class), pUVar11 == (UClass *)0x0)) {
    param_1->ComparisonIndex = 0;
    param_1->Number = 0;
  }
  else {
    ::FName::ToString(&pFVar10->Name,&local_528);
    pUVar23 = local_570;
    if (1 < *(int *)(lVar26 + 0x10)) {
      if (*(int *)(lVar26 + 0x20) == 0) {
        pwVar27 = L"";
      }
      else {
        pwVar27 = *(wchar_t **)(lVar26 + 0x18);
      }
      pFVar12 = ::FString::Replace(&local_528,&local_330,*(wchar_t **)(lVar26 + 8),pwVar27,
                                   CaseSensitive);
      if (&local_528 != pFVar12) {
        if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_528.Data.AllocatorInstance.Data);
        }
        local_528.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
        (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_528.Data.ArrayNum = (pFVar12->Data).ArrayNum;
        local_528.Data.ArrayMax = (pFVar12->Data).ArrayMax;
        (pFVar12->Data).ArrayNum = 0;
        (pFVar12->Data).ArrayMax = 0;
      }
      if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_330.Data.AllocatorInstance.Data);
      }
      local_4f8.TypedValue.ComparisonIndex.Value = (FNameEntryId)0xffffffff;
      local_4f8.TypedValue.Number = 0;
      local_4f0.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      local_4f0.TypedValue.Data.ArrayNum = 0;
      local_4f0.TypedValue.Data.ArrayMax = -1;
      ::FString::FString(&local_4f0.TypedValue,&local_528);
      if ((local_4f0.TypedValue.Data.ArrayMax == -1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        FVar13 = (FName)(*pcVar6)();
        return FVar13;
      }
      pUVar23 = local_570;
      this_00 = GetSafeNewName(local_570,&local_300,(FRigName *)&local_4f8.TypedValue,
                               (FRigModuleReference *)0x0);
      pFVar12 = FRigName::GetName(this_00);
      ::FString::operator=(&local_528,pFVar12);
      if ((local_300.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_300.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_300.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                     );
      }
      if ((local_4f0.TypedValue.Data.ArrayMax != -1) &&
         (local_4f0.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_4f0.TypedValue.Data.AllocatorInstance.Data);
      }
    }
    FModularRigConnections::GetModuleConnectionMap
              (&pUVar23->Model->Connections,
               (TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
                *)local_258,(FName *)param_2);
    local_2a8._0_8_ = (void *)0x0;
    local_2a8._8_8_ = 0;
    local_288 = (undefined1 *)0x0;
    local_280 = 0;
    local_27c = 0x80;
    local_278 = 0xffffffff;
    local_274 = 0;
    local_268 = (ForElementType<FSetElementId>)0x0;
    local_260 = 0;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
               *)local_2a8,
              (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
               *)&pFVar10->Bindings);
    FVar13 = (FName)TSoftClassPtr<UControlRig>::Get(&pFVar10->Class);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar13 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar13);
    }
    local_478 = pFVar10->ParentModuleName;
    FControlRigOverrideContainer::FControlRigOverrideContainer(&local_1b8,&pFVar10->ConfigOverrides)
    ;
    pUVar23 = local_570;
    bVar8 = local_570->bSuspendNotifications;
    local_578[4] = bVar8;
    if (bVar8 == false) {
      local_578[0] = InteractionBracketOpened;
      Notify(local_570,local_578,(FRigModuleReference *)0x0);
    }
    local_470 = FVar13;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar13 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar13);
    }
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_528.Data.ArrayNum != 0) {
      FVar19.Data = local_528.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_468,(wchar_t *)FVar19.Data);
    AddModule(pUVar23,&local_518,(TSubclassOf<UControlRig>)&local_468,&local_470,SUB81(&local_478,0)
             );
    pFVar10 = FModularRigModel::FindModule(pUVar23->Model,&local_518);
    param_1 = (FName *)local_4d0;
    if (pFVar10 == (FRigModuleReference *)0x0) {
      *(undefined8 *)local_4d0 = 0;
      if (bVar8 == false) {
        local_578[1] = 9;
        Notify(pUVar23,local_578 + 1,(FRigModuleReference *)0x0);
      }
      FControlRigOverrideContainer::~FControlRigOverrideContainer(&local_1b8);
      local_260 = 0;
      if (local_268 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_268);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_2a8,0);
      if (local_288 != (undefined1 *)0x0) {
        FMemory::Free(local_288);
      }
      if ((void *)local_2a8._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_2a8._0_8_);
      }
    }
    else {
      local_498.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_258 + 0x10);
      local_498._padding_._0_4_ = 0;
      local_498._padding_._4_4_ = 1;
      local_498.UnvisitedBitMask = 0xffffffff;
      local_498.CurrentBitIndex = 0;
      local_498.BaseBitIndex = 0;
      if (local_230 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_498);
      }
      TStack_410._padding_ = CONCAT44(local_498._padding_._4_4_,(undefined4)local_498._padding_);
      local_418 = (longlong *)local_258;
      TStack_410.CurrentBitIndex = local_498.CurrentBitIndex;
      TStack_410.UnvisitedBitMask = local_498.UnvisitedBitMask;
      TStack_410._28_4_ = local_498._28_4_;
      TStack_410.BaseBitIndex = local_498.BaseBitIndex;
      local_340 = local_258._8_4_ - local_224;
      local_368._16_8_ = local_498.Array;
      uStack_3f0 = CONCAT44(uStack_33c,local_340);
      TStack_410.Array = local_498.Array;
      local_368._0_8_ = local_418;
      local_368._8_8_ = TStack_410._padding_;
      local_368._24_8_ = TStack_410._16_8_;
      local_368._32_8_ = TStack_410._24_8_;
      pTVar14 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_368,
                           (TBitArray<FDefaultBitArrayAllocator> *)(local_258 + 0x10),local_230);
      lStack_3b0 = pTVar14->_padding_;
      local_4d8 = pTVar14->Array;
      uStack_3a0._0_4_ = pTVar14->UnvisitedBitMask;
      uStack_3a0._4_4_ = pTVar14->CurrentBitIndex;
      uStack_398 = *(undefined8 *)&pTVar14->BaseBitIndex;
      local_510 = uStack_3a0._4_4_;
      pTStack_3a8 = local_4d8;
      while( true ) {
        plVar3 = local_418;
        iVar22 = local_510;
        if ((int)local_418[1] - *(int *)((longlong)local_418 + 0x34) != (int)uStack_3f0) {
          local_578[2] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_578 + 2);
        }
        if (((TStack_410.CurrentBitIndex == iVar22) && (TStack_410.Array == local_4d8)) &&
           (plVar3 == (longlong *)local_258)) break;
        local_448 = (longlong)TStack_410.CurrentBitIndex * 0x38 + *plVar3;
        local_4e0 = (int *)(local_448 + 0x28);
        iVar22 = *local_4e0;
        puVar29 = (undefined1 *)(local_448 + 0x10);
        if (*(undefined1 **)(local_448 + 0x20) != (undefined1 *)0x0) {
          puVar29 = *(undefined1 **)(local_448 + 0x20);
        }
        local_430 = puVar29 + (longlong)iVar22 * 0xc;
        while( true ) {
          puVar7 = local_430;
          lVar18 = local_448;
          if (*local_4e0 != iVar22) {
            local_578[3] = 0;
            `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_578 + 3);
          }
          if (puVar29 == puVar7) break;
          ::FName::ToString((FName *)(puVar29 + 4),&local_388);
          if (*(int *)(lVar26 + 0x20) == 0) {
            pwVar27 = L"";
          }
          else {
            pwVar27 = *(wchar_t **)(lVar26 + 0x18);
          }
          if (*(int *)(lVar26 + 0x10) == 0) {
            pwVar25 = L"";
          }
          else {
            pwVar25 = *(wchar_t **)(lVar26 + 8);
          }
          ::FString::Replace(&local_388,&local_458,pwVar25,pwVar27,CaseSensitive);
          uVar5 = *puVar29;
          FVar19.Data = (FScriptContainerElement *)L"";
          if (local_458.Data.ArrayNum != 0) {
            FVar19.Data = local_458.Data.AllocatorInstance.Data;
          }
          ::FName::FName(&local_460,(wchar_t *)FVar19.Data);
          FStack_4c4 = local_460.ComparisonIndex.Value;
          uStack_4c0 = local_460.Number;
          local_4c8 = CONCAT31(local_4c8._1_3_,uVar5);
          pFVar12 = ::FName::ToString((FName *)(lVar18 + 4),&local_310);
          pFVar15 = ::FName::ToString(&local_518,&local_320);
          local_568.ModulePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_568.ModulePath.Data.ArrayNum = 0;
          local_568.ModulePath.Data.ArrayMax = 0;
          local_568.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_568.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
          local_568.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
          local_568.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_568.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
          local_568.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
          local_568.CachedModuleFName.field0_0x0.TypedValue.ComparisonIndex.Value =
               (FNameEntryId)0xffffffff;
          local_568.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
          local_568.CachedElementFName.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
          pFVar16 = FRigHierarchyModulePath::Join(&local_2e8,pFVar15,pFVar12);
          if (&local_568 != pFVar16) {
            if (local_568.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_568.ModulePath.Data.AllocatorInstance.Data);
            }
            local_568.ModulePath.Data.AllocatorInstance.Data =
                 (pFVar16->ModulePath).Data.AllocatorInstance.Data;
            (pFVar16->ModulePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_568.ModulePath.Data.ArrayNum = (pFVar16->ModulePath).Data.ArrayNum;
            local_568.ModulePath.Data.ArrayMax = (pFVar16->ModulePath).Data.ArrayMax;
            (pFVar16->ModulePath).Data.ArrayNum = 0;
            (pFVar16->ModulePath).Data.ArrayMax = 0;
          }
          pTVar1 = &pFVar16->CachedModuleNameString;
          if (pTVar1 != &local_568.CachedModuleNameString) {
            if (*(int *)((longlong)&(pFVar16->CachedModuleNameString).field0_0x0 + 0xc) == -1) {
              if (local_568.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) {
                if (local_568.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                    Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free((void *)local_568.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                        AllocatorInstance.Data);
                }
                local_568.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
                     (ForAnyElementType)(FScriptContainerElement *)0x0;
                local_568.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
                local_568.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
              }
            }
            else {
              if (local_568.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                  != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_568.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                      AllocatorInstance.Data);
              }
              local_568.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
                   (ForAnyElementType)(pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              local_568.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum =
                   *(int *)((longlong)&(pFVar16->CachedModuleNameString).field0_0x0 + 8);
              local_568.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax =
                   *(int *)((longlong)&(pFVar16->CachedModuleNameString).field0_0x0 + 0xc);
              *(int *)((longlong)&(pFVar16->CachedModuleNameString).field0_0x0 + 8) = 0;
              *(int *)((longlong)&(pFVar16->CachedModuleNameString).field0_0x0 + 0xc) = 0;
              if ((local_568.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax == -1) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x171,
                                     L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                    ), bVar8)) {
                pcVar6 = (code *)swi(3);
                FVar13 = (FName)(*pcVar6)();
                return FVar13;
              }
            }
          }
          pTVar1 = &pFVar16->CachedElementNameString;
          if (pTVar1 != &local_568.CachedElementNameString) {
            if (*(int *)((longlong)&(pFVar16->CachedElementNameString).field0_0x0 + 0xc) == -1) {
              if (local_568.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) {
                if (local_568.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                    Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free((void *)local_568.CachedElementNameString.field0_0x0.TypedValue.Data
                                        .AllocatorInstance.Data);
                }
                local_568.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                     = (ForAnyElementType)(FScriptContainerElement *)0x0;
                local_568.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
                local_568.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
              }
            }
            else {
              if (local_568.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                  Data != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_568.CachedElementNameString.field0_0x0.TypedValue.Data.
                                      AllocatorInstance.Data);
              }
              local_568.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
                   (ForAnyElementType)(pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              local_568.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum =
                   *(int *)((longlong)&(pFVar16->CachedElementNameString).field0_0x0 + 8);
              local_568.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax =
                   *(int *)((longlong)&(pFVar16->CachedElementNameString).field0_0x0 + 0xc);
              *(int *)((longlong)&(pFVar16->CachedElementNameString).field0_0x0 + 8) = 0;
              *(int *)((longlong)&(pFVar16->CachedElementNameString).field0_0x0 + 0xc) = 0;
              if ((local_568.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax == -1) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x171,
                                     L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                    ), bVar8)) {
                pcVar6 = (code *)swi(3);
                FVar13 = (FName)(*pcVar6)();
                return FVar13;
              }
            }
          }
          pTVar2 = &pFVar16->CachedModuleFName;
          if (pTVar2 != &local_568.CachedModuleFName) {
            if ((pTVar2->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
              if (local_568.CachedModuleFName.field0_0x0.TypedValue.ComparisonIndex.Value !=
                  0xffffffff) {
                local_568.CachedModuleFName.field0_0x0.TypedValue.ComparisonIndex.Value =
                     (FNameEntryId)0xffffffff;
                local_568.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
              }
            }
            else {
              local_568.CachedModuleFName.field0_0x0.TypedValue.ComparisonIndex.Value =
                   (pTVar2->field0_0x0).TypedValue.ComparisonIndex;
              local_568.CachedModuleFName.field0_0x0.TypedValue.Number =
                   (pTVar2->field0_0x0).TypedValue.Number;
              if ((local_568.CachedModuleFName.field0_0x0.TypedValue.ComparisonIndex.Value ==
                   0xffffffff) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x171,
                                     L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                    ), bVar8)) {
                pcVar6 = (code *)swi(3);
                FVar13 = (FName)(*pcVar6)();
                return FVar13;
              }
            }
          }
          pTVar2 = &pFVar16->CachedElementFName;
          if (pTVar2 != &local_568.CachedElementFName) {
            if ((pTVar2->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
              if (local_568.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value !=
                  0xffffffff) {
                local_568.CachedElementFName.field0_0x0 = (TOptional<FName>_u_0)0xffffffff;
              }
            }
            else {
              local_568.CachedElementFName.field0_0x0 =
                   (TOptional<FName>_u_0)*(TOptional<FName>_u_0 *)&(pTVar2->field0_0x0).TypedValue;
              if ((local_568.CachedElementFName.field0_0x0._0_4_ == 0xffffffff) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x171,
                                     L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                    ), bVar8)) {
                pcVar6 = (code *)swi(3);
                FVar13 = (FName)(*pcVar6)();
                return FVar13;
              }
            }
          }
          if ((local_2e8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
             (local_2e8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_2e8.CachedElementNameString.field0_0x0.TypedValue.Data.
                                  AllocatorInstance.Data);
          }
          if ((local_2e8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
             (local_2e8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_2e8.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                  AllocatorInstance.Data);
          }
          if (local_2e8.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.ModulePath.Data.AllocatorInstance.Data);
          }
          if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_320.Data.AllocatorInstance.Data);
          }
          if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_310.Data.AllocatorInstance.Data);
          }
          local_428.Name = FRigHierarchyModulePath::GetPathFName(&local_568);
          local_428.Type = Connector;
          local_508.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_508.ArrayNum = 1;
          local_428.Name = *(FName *)local_428.Name;
          local_438 = uStack_4c0;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,1,0,&local_508.AllocatorInstance,1,&local_508.ArrayMax);
          local_440 = CONCAT44(FStack_4c4.Value,local_4c8);
          *(undefined8 *)local_508.AllocatorInstance.Data = local_440;
          *(uint *)(local_508.AllocatorInstance.Data + 8) = local_438;
          ConnectConnectorToElements(local_570,&local_428,&local_508,in_stack_00000028,false,false);
          if (local_508.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_508.AllocatorInstance.Data);
          }
          if ((local_568.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
             (local_568.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_568.CachedElementNameString.field0_0x0.TypedValue.Data.
                                  AllocatorInstance.Data);
          }
          if ((local_568.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
             (local_568.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_568.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                  AllocatorInstance.Data);
          }
          if (local_568.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_568.ModulePath.Data.AllocatorInstance.Data);
          }
          if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_458.Data.AllocatorInstance.Data);
          }
          if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_388.Data.AllocatorInstance.Data);
          }
          puVar29 = puVar29 + 0xc;
        }
        TStack_410.UnvisitedBitMask = TStack_410.UnvisitedBitMask & ~TStack_410._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_410);
      }
      local_4b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_2a8 + 0x10);
      local_4b8._padding_._0_4_ = 0;
      local_4b8._padding_._4_4_ = 1;
      local_4b8.UnvisitedBitMask = 0xffffffff;
      local_4b8.CurrentBitIndex = 0;
      local_4b8.BaseBitIndex = 0;
      if (local_280 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4b8);
      }
      uVar28 = local_280;
      TStack_3e0._padding_ = CONCAT44(local_4b8._padding_._4_4_,(undefined4)local_4b8._padding_);
      local_3e8 = (longlong *)local_2a8;
      TStack_3e0.CurrentBitIndex = local_4b8.CurrentBitIndex;
      TStack_3e0.UnvisitedBitMask = local_4b8.UnvisitedBitMask;
      TStack_3e0._28_4_ = local_4b8._28_4_;
      TStack_3e0.BaseBitIndex = local_4b8.BaseBitIndex;
      local_390 = local_2a8._8_4_ - local_274;
      uVar20 = local_280 & 0xffffffe0;
      pTStack_3a8 = local_4b8.Array;
      iVar22 = (int)local_280 >> 5;
      bVar17 = (byte)local_280;
      uStack_3c0 = CONCAT44(uStack_38c,local_390);
      TStack_3e0.Array = local_4b8.Array;
      local_3b8 = local_3e8;
      lStack_3b0 = TStack_3e0._padding_;
      uStack_3a0 = TStack_3e0._16_8_;
      uStack_398 = TStack_3e0._24_8_;
      if (((int)local_280 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        FVar13 = (FName)(*pcVar6)();
        return FVar13;
      }
      pUVar23 = local_570;
      if (uVar28 != local_280) {
        puVar29 = local_2a8 + 0x10;
        if (local_288 != (undefined1 *)0x0) {
          puVar29 = local_288;
        }
        uVar28 = -1 << (bVar17 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar22 * 4);
        while (uVar28 == 0) {
          lVar18 = (longlong)iVar22;
          uVar20 = uVar20 + 0x20;
          iVar22 = iVar22 + 1;
          uVar28 = local_280;
          if ((int)((local_280 - 1) + ((int)(local_280 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
          goto LAB_14a276a11;
          uVar28 = *(uint *)(puVar29 + lVar18 * 4 + 4);
        }
        uVar4 = (ulonglong)(~(uVar28 - 1) & uVar28) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar28 = (int)lVar18 + -1 + uVar20;
        if ((int)local_280 < (int)uVar28) {
          uVar28 = local_280;
        }
      }
LAB_14a276a11:
      while( true ) {
        plVar3 = local_3e8;
        if ((int)local_3e8[1] - *(int *)((longlong)local_3e8 + 0x34) != (int)uStack_3c0) {
          `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_572);
        }
        if (((TStack_3e0.CurrentBitIndex == uVar28) &&
            (TStack_3e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_2a8 + 0x10))) &&
           (plVar3 == (longlong *)local_2a8)) break;
        pFVar24 = (FName *)((longlong)TStack_3e0.CurrentBitIndex * 0x20 + *plVar3);
        if (*(int *)(lVar26 + 0x20) == 0) {
          pwVar27 = L"";
        }
        else {
          pwVar27 = *(wchar_t **)(lVar26 + 0x18);
        }
        if (*(int *)(lVar26 + 0x10) == 0) {
          pwVar25 = L"";
        }
        else {
          pwVar25 = *(wchar_t **)(lVar26 + 8);
        }
        ::FString::Replace((FString *)(pFVar24 + 1),&local_378,pwVar25,pwVar27,CaseSensitive);
        BindModuleVariable(pUVar23,&local_518,pFVar24,&local_378,in_stack_00000028);
        if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_378.Data.AllocatorInstance.Data);
        }
        TStack_3e0.UnvisitedBitMask = TStack_3e0.UnvisitedBitMask & ~TStack_3e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3e0);
      }
      iVar22 = local_1b8.Values.ArrayNum;
      local_208.Elements._0_8_ = 0;
      plVar3 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      local_208.Elements._8_8_ = 0;
      local_208.Elements._32_8_ = 0;
      local_208.Elements._40_4_ = 0;
      local_208.Elements._44_4_ = 0x80;
      local_208.Elements._48_4_ = 0xffffffff;
      local_208.Elements._52_4_ = 0;
      local_208.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_208.HashSize = 0;
      FVar19.Data = local_1b8.Values.AllocatorInstance.Data;
      while( true ) {
        if (local_1b8.Values.ArrayNum != iVar22) {
          `TCheckedPointerIterator<FControlRigOverrideValue_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_571);
        }
        param_1 = (FName *)local_4d0;
        if ((FControlRigOverrideValue *)FVar19.Data ==
            (FControlRigOverrideValue *)
            (local_1b8.Values.AllocatorInstance.Data + (longlong)iVar22 * 0x58)) break;
        if ((*(int *)(*plVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)
           ) {
          atexit(`FControlRigOverrideValue::GetPath'::__l2::
                 _dynamic_atexit_destructor_for__EmptyPath__);
          _Init_thread_footer(&::_TSS0);
        }
        pFVar21 = (FControlRigOverrideValue *)&EmptyPath;
        if (*(int *)((longlong)&(((FControlRigOverrideValue *)FVar19.Data)->Path).field0_0x0 + 0xc)
            != -1) {
          pFVar21 = (FControlRigOverrideValue *)FVar19.Data;
        }
        iVar9 = ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar21->Path)->ArrayNum;
        if (iVar9 == 0) {
          pwVar27 = L"";
          iVar9 = 0;
        }
        else {
          pwVar27 = (wchar_t *)
                    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar21->Path)->
                    AllocatorInstance).Data;
          iVar9 = iVar9 + -1;
        }
        uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar27);
        iVar9 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                FindIndexByHash<FString>(&local_208,uVar20,(FString *)pFVar21);
        if (iVar9 == -1) {
          SetConfigValueInModule
                    (local_570,&local_518,(FControlRigOverrideValue *)FVar19.Data,in_stack_00000028)
          ;
        }
        FVar19.Data = FVar19.Data + 0x58;
      }
      local_208.HashSize = 0;
      *(FName *)local_4d0 = local_518;
      if (local_208.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_208.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_208.Elements);
      if (local_578[4] == '\0') {
        local_573 = InteractionBracketClosed;
        Notify(local_570,&local_573,(FRigModuleReference *)0x0);
      }
      FControlRigOverrideContainer::~FControlRigOverrideContainer(&local_1b8);
      local_260 = 0;
      if (local_268 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_268);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_2a8);
    }
    local_210 = 0;
    if (local_218 != (void *)0x0) {
      FMemory::Free(local_218);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_258);
    if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_528.Data.AllocatorInstance.Data);
    }
  }
  return (FName)param_1;
}

// Notify @ 14a276d40

void __thiscall
UModularRigController::Notify
          (UModularRigController *this,EModularRigNotification *param_1,FRigModuleReference *param_2
          )

{
  undefined1 *puVar1;
  EModularRigNotification EVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  if (this->bSuspendNotifications == false) {
    EVar2 = *param_1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ModifiedEvent,
               (FWriteAccessScope *)&local_38);
    puVar1 = &(this->ModifiedEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar6 = false;
    uVar10 = *(int *)&(this->ModifiedEvent).field_0x10 - 1;
    if (-1 < (int)uVar10) {
      lVar11 = (longlong)(int)uVar10 << 4;
      bVar6 = false;
      do {
        uVar9 = 0;
        if ((int)uVar10 < *(int *)&(this->ModifiedEvent).field_0x10) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&(this->ModifiedEvent).field_0x8;
        if (((*(int *)(lVar3 + 8 + lVar11) == 0) ||
            (plVar4 = *(longlong **)(lVar3 + lVar11), plVar4 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,EVar2,param_2), cVar8 == '\0')) {
          bVar6 = true;
        }
        lVar11 = lVar11 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    puVar1 = &(this->ModifiedEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ModifiedEvent,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// RefreshModuleVariables @ 14a27e890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UModularRigController::RefreshModuleVariables
          (UModularRigController *this,FRigModuleReference *param_1,bool param_2)

{
  undefined1 *puVar1;
  TFieldPath<FProperty> *pTVar2;
  FFieldPath *this_00;
  uint uVar3;
  undefined1 *puVar4;
  FName FVar5;
  FModularRigModel *this_01;
  code *pcVar6;
  FRigModuleReference *pFVar7;
  FControlRigOverrideContainer *this_02;
  UModularRigController *this_03;
  FControlRigOverrideValue *pFVar8;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar9;
  longlong *plVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FRigModuleReference *pFVar14;
  UObject *pUVar15;
  FFieldClass *pFVar16;
  FField *pFVar17;
  FProperty *pFVar18;
  FProperty *pFVar19;
  UClass *pUVar20;
  UClass *pUVar21;
  byte bVar22;
  longlong lVar23;
  ulonglong uVar24;
  ForAnyElementType FVar25;
  FScriptContainerElement *this_04;
  FName *pFVar26;
  ForAnyElementType FVar27;
  FWeakObjectPtr *pFVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  uint uVar32;
  FScriptContainerElement *pFVar33;
  undefined1 *puVar34;
  uint *puVar35;
  uint *puVar36;
  ulonglong uVar37;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *this_05;
  TSoftClassPtr<UControlRig> *this_06;
  undefined1 auStack_4f8 [32];
  undefined1 local_4a8;
  undefined1 local_4a7;
  undefined1 local_4a6;
  undefined1 local_4a5;
  undefined1 local_4a4 [4];
  ForAnyElementType local_4a0;
  undefined8 local_498;
  ForAnyElementType local_490;
  undefined8 local_488;
  undefined1 local_480 [8];
  FName local_478;
  FRigModuleReference *local_470;
  ulonglong local_468;
  TOptional<FString>_u_0 local_458;
  void *local_448;
  undefined4 local_440;
  undefined8 local_43c;
  undefined4 local_434;
  FPropertyInfo *local_428;
  undefined8 local_420;
  void *local_418;
  undefined8 local_410;
  TFieldIterator<FProperty> local_3f8;
  FControlRigOverrideContainer *local_3e0;
  FName local_3d8;
  FString local_3d0;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_3c0;
  uint uStack_3b8;
  uint uStack_3b4;
  TBitArray<FDefaultBitArrayAllocator> *local_3b0;
  undefined4 uStack_3a8;
  uint uStack_3a4;
  uint local_3a0;
  undefined4 uStack_39c;
  int iStack_398;
  undefined4 uStack_394;
  UModularRigController *local_390;
  FString local_388;
  FString local_378;
  UClass *local_368;
  int local_360;
  int local_35c;
  int local_358;
  FName local_350;
  UObject *local_348;
  FString local_340;
  FString local_330;
  FString local_320;
  TSoftClassPtr<UControlRig> *local_310;
  FControlRigOverrideValue *local_308;
  FRigModuleReference *local_300;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_2f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2f0;
  undefined8 uStack_2d0;
  longlong *local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c0;
  undefined8 uStack_2a0;
  UModularRigController *local_298;
  FRigModuleReference *pFStack_290;
  FName *local_288;
  UClass *pUStack_280;
  FString local_278;
  code *local_268 [5];
  undefined8 *local_240;
  undefined4 local_21c;
  undefined4 local_1fc;
  undefined1 local_1f8 [32];
  uint *local_1d8;
  uint local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  int local_1c4;
  ForElementType<FSetElementId> local_1b8;
  int local_1b0;
  FControlRigOverrideContainer local_1a8;
  ulonglong local_48;
  
  if (param_1 != (FRigModuleReference *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_4f8;
    local_390 = this;
    local_300 = param_1;
    local_3f8.Struct = (UStruct *)TSoftClassPtr<UControlRig>::Get(&param_1->Class);
    if ((UClass *)local_3f8.Struct != (UClass *)0x0) {
      local_478 = param_1->Name;
      local_368 = (UClass *)local_3f8.Struct;
      pFVar14 = FModularRigModel::FindModule(this->Model,&local_478);
      if (pFVar14 == param_1) {
        local_3f8.Field = (FField *)((UClass *)local_3f8.Struct)->_padding_;
        local_3f8.InterfaceIndex = -1;
        local_3f8.bIncludeSuper = true;
        local_3f8.bIncludeDeprecated = true;
        local_3f8.bIncludeInterface = false;
        local_470 = pFVar14;
        TFieldIterator<FProperty>::IterateToNext(&local_3f8);
        uVar37 = 1;
        local_468 = 1;
        if (local_3f8.Field != (FField *)0x0) {
LAB_14a27e990:
          pFVar17 = local_3f8.Field;
          pFVar16 = local_3f8.Field[1].ClassPrivate;
          if (((((ulonglong)pFVar16 & 0x40000000000) != 0) || (((ulonglong)pFVar16 & 0x20001) == 0))
             || (((ulonglong)pFVar16 & 0x10000) != 0)) {
            bVar11 = IsThisNotNull(local_3f8.Field,"FField::GetName");
            if (bVar11) {
              ::FName::ToString(&pFVar17->NamePrivate,&local_3d0);
            }
            else {
              ::FString::FString(&local_3d0,L"None");
            }
            ::FString::ConcatFC(&local_388,&local_3d0,L"->");
            local_3e0 = &pFVar14->ConfigOverrides;
            local_4a0.Data = (FScriptContainerElement *)0x0;
            iVar13 = (pFVar14->ConfigOverrides).Values.ArrayNum;
            pFVar33 = (local_3e0->Values).AllocatorInstance.Data;
            local_490.Data = (FScriptContainerElement *)0x0;
            local_498 = 0;
            pFVar30 = pFVar33 + (longlong)iVar13 * 0x58;
            local_488 = 0;
            while( true ) {
              if ((pFVar14->ConfigOverrides).Values.ArrayNum != iVar13) {
                local_4a8 = 0;
                `TCheckedPointerIterator<FControlRigOverrideValue,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_4a8);
              }
              pFVar7 = local_470;
              if (pFVar33 == pFVar30) break;
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                atexit(`FControlRigOverrideValue::GetPath'::__l2::
                       _dynamic_atexit_destructor_for__EmptyPath__);
                _Init_thread_footer(&::_TSS0);
              }
              this_04 = (FScriptContainerElement *)&EmptyPath;
              if (*(int *)(pFVar33 + 0xc) != -1) {
                this_04 = pFVar33;
              }
              iVar12 = *(int *)(this_04 + 8);
              if (iVar12 == local_3d0.Data.ArrayNum) {
                if (1 < iVar12) {
                  iVar12 = FGenericPlatformStricmp::Stricmp
                                     (*(wchar_t **)this_04,
                                      (wchar_t *)local_3d0.Data.AllocatorInstance.Data);
                  bVar11 = iVar12 == 0;
                  goto LAB_14a27eab5;
                }
LAB_14a27eaed:
                if (((local_4a0.Data <= this_04) &&
                    (this_04 < local_4a0.Data + (longlong)local_498._4_4_ * 0x10)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if ((int)local_498 == local_498._4_4_) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&local_4a0,(int *)((longlong)&local_498 + 4));
                  local_498 = CONCAT44(local_498._4_4_,iVar12);
                }
                lVar23 = (longlong)(int)local_498;
                local_498 = CONCAT44(local_498._4_4_,(int)local_498 + 1);
                ::FString::FString((FString *)(local_4a0.Data + lVar23 * 0x10),(FString *)this_04);
              }
              else {
                bVar11 = iVar12 + local_3d0.Data.ArrayNum == 1;
LAB_14a27eab5:
                if (bVar11) goto LAB_14a27eaed;
                if (local_388.Data.ArrayNum == 0) {
                  iVar12 = 0;
                }
                else {
                  iVar12 = local_388.Data.ArrayNum + -1;
                }
                FVar27.Data = (FScriptContainerElement *)L"";
                if (local_388.Data.ArrayNum != 0) {
                  FVar27.Data = local_388.Data.AllocatorInstance.Data;
                }
                bVar11 = ::FString::StartsWith
                                   ((FString *)this_04,(wchar_t *)FVar27.Data,iVar12,(Type)uVar37);
                if (bVar11) goto LAB_14a27eaed;
              }
              pFVar33 = pFVar33 + 0x58;
            }
            uStack_3b8 = 0;
            uStack_3b4 = (uint)local_468;
            this_05 = &local_470->Bindings;
            iVar13 = *(int *)&(local_470->Bindings).field_0x28;
            puVar1 = &(local_470->Bindings).field_0x10;
            local_3a0 = 0;
            uStack_3a4 = 0;
            if (iVar13 != 0) {
              puVar35 = *(uint **)&(local_470->Bindings).field_0x20;
              puVar36 = (uint *)puVar1;
              if (puVar35 != (uint *)0x0) {
                puVar36 = puVar35;
              }
              uVar31 = *puVar36;
              while (uVar31 == 0) {
                uStack_3b8 = uStack_3b8 + 1;
                local_3a0 = local_3a0 + 0x20;
                uStack_3a4 = iVar13;
                if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_3b8)
                goto LAB_14a27ec23;
                uVar31 = puVar36[(int)uStack_3b8];
              }
              uStack_3b4 = ~(uVar31 - 1) & uVar31;
              uVar37 = (ulonglong)uStack_3b4 * 2 + 1;
              lVar23 = 0x3f;
              if (uVar37 != 0) {
                for (; uVar37 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                }
              }
              local_360 = (int)lVar23;
              uStack_3a4 = local_360 + -1 + local_3a0;
              if (iVar13 < (int)uStack_3a4) {
                uStack_3a4 = iVar13;
              }
            }
LAB_14a27ec23:
            uVar31 = *(uint *)&(local_470->Bindings).field_0x28;
            uStack_39c = local_21c;
            uVar29 = uVar31 & 0xffffffe0;
            iStack_398 = *(int *)&(local_470->Bindings).field_0x8 -
                         *(int *)&(local_470->Bindings).field_0x34;
            TStack_2f0._padding_ = CONCAT44(uStack_3b4,uStack_3b8);
            uStack_3a8 = 0xffffffff;
            TStack_2f0.CurrentBitIndex = uStack_3a4;
            TStack_2f0.UnvisitedBitMask = 0xffffffff;
            iVar12 = (int)uVar31 >> 5;
            TStack_2f0._28_4_ = local_21c;
            TStack_2f0.BaseBitIndex = local_3a0;
            uStack_2d0 = CONCAT44(uStack_394,iStack_398);
            local_3c0 = this_05;
            local_3b0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
            local_2f8 = this_05;
            TStack_2f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
            if ((((int)uVar31 < 0) || (iVar13 < (int)uVar31)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar37 = local_468;
            uVar32 = *(uint *)&(pFVar7->Bindings).field_0x28;
            if (uVar31 != uVar32) {
              puVar4 = *(undefined1 **)&(pFVar7->Bindings).field_0x20;
              puVar34 = puVar1;
              if (puVar4 != (undefined1 *)0x0) {
                puVar34 = puVar4;
              }
              uVar31 = -1 << ((byte)uVar31 & 0x1f) & *(uint *)(puVar34 + (longlong)iVar12 * 4);
              while (uVar31 == 0) {
                iVar12 = iVar12 + 1;
                uVar29 = uVar29 + 0x20;
                uVar31 = uVar32;
                if ((int)(((int)(uVar32 - 1) >> 0x1f & 0x1fU) + (uVar32 - 1)) >> 5 < iVar12)
                goto LAB_14a27ed33;
                uVar31 = *(uint *)(puVar34 + (longlong)iVar12 * 4);
              }
              uVar24 = (ulonglong)(~(uVar31 - 1) & uVar31) * 2 + 1;
              lVar23 = 0x3f;
              if (uVar24 != 0) {
                for (; uVar24 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                }
              }
              local_35c = (int)lVar23;
              uVar31 = (uVar29 - 1) + local_35c;
              if ((int)uVar32 < (int)uVar31) {
                uVar31 = uVar32;
              }
            }
LAB_14a27ed33:
            do {
              pTVar9 = local_2f8;
              if (*(int *)(&local_2f8->field_0x0 + 8) - *(int *)(&local_2f8->field_0x0 + 0x34) !=
                  (int)uStack_2d0) {
                local_4a7 = 0;
                `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4a7);
              }
              this_02 = local_3e0;
              if (((TStack_2f0.CurrentBitIndex == uVar31) &&
                  (TStack_2f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
                 (pTVar9 == this_05)) goto LAB_14a27eec1;
              pFVar26 = (FName *)(*(longlong *)&pTVar9->field_0x0 +
                                 (longlong)TStack_2f0.CurrentBitIndex * 0x20);
              ::FName::ToString(pFVar26,&local_378);
              if (local_378.Data.ArrayNum == local_3d0.Data.ArrayNum) {
                if (1 < local_378.Data.ArrayNum) {
                  iVar13 = FGenericPlatformStricmp::Stricmp
                                     ((wchar_t *)local_378.Data.AllocatorInstance.Data,
                                      (wchar_t *)local_3d0.Data.AllocatorInstance.Data);
                  bVar11 = iVar13 == 0;
                  goto LAB_14a27edbc;
                }
LAB_14a27edf8:
                if (((local_490.Data <= pFVar26) &&
                    (pFVar26 < (FName *)(local_490.Data + (longlong)local_488._4_4_ * 8))) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar13 = (int)local_488;
                if ((int)local_488 == local_488._4_4_) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x408,&local_490,(int *)((longlong)&local_488 + 4));
                }
                local_488 = CONCAT44(local_488._4_4_,iVar13 + 1);
                *(FName *)(local_490.Data + (longlong)iVar13 * 8) = *pFVar26;
              }
              else {
                bVar11 = local_378.Data.ArrayNum + local_3d0.Data.ArrayNum == 1;
LAB_14a27edbc:
                if (bVar11) goto LAB_14a27edf8;
                if (local_388.Data.ArrayNum == 0) {
                  iVar13 = 0;
                }
                else {
                  iVar13 = local_388.Data.ArrayNum + -1;
                }
                FVar27.Data = (FScriptContainerElement *)L"";
                if (local_388.Data.ArrayNum != 0) {
                  FVar27.Data = local_388.Data.AllocatorInstance.Data;
                }
                bVar11 = ::FString::StartsWith
                                   (&local_378,(wchar_t *)FVar27.Data,iVar13,(Type)uVar37);
                if (bVar11) goto LAB_14a27edf8;
              }
              if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_378.Data.AllocatorInstance.Data);
              }
              TStack_2f0.UnvisitedBitMask =
                   TStack_2f0.UnvisitedBitMask & ~TStack_2f0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2f0);
            } while( true );
          }
          goto LAB_14a27f008;
        }
LAB_14a27f03c:
        FControlRigOverrideContainer::FControlRigOverrideContainer
                  (&local_1a8,&pFVar14->ConfigOverrides);
        local_1f8._0_8_ = 0;
        local_1f8._8_8_ = 0;
        local_1d8 = (uint *)0x0;
        local_1d0 = 0;
        local_1cc = 0x80;
        local_1c8 = 0xffffffff;
        local_1c4 = 0;
        local_1b8 = (ForElementType<FSetElementId>)0x0;
        local_1b0 = 0;
        TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                     *)local_1f8,
                    (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                     *)&pFVar14->Bindings);
        FControlRigOverrideContainer::Reset(&pFVar14->ConfigOverrides);
        TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                 *)&pFVar14->Bindings);
        uVar24 = (ulonglong)local_1a8.Values.ArrayNum;
        local_3e0 = (FControlRigOverrideContainer *)
                    CONCAT44(local_3e0._4_4_,local_1a8.Values.ArrayNum);
        local_308 = (FControlRigOverrideValue *)
                    (local_1a8.Values.AllocatorInstance.Data + uVar24 * 0x58);
        uVar37 = uVar24;
        FVar27.Data = local_1a8.Values.AllocatorInstance.Data;
        while( true ) {
          pFVar8 = local_308;
          uVar31 = 0;
          if ((int)uVar24 != (int)uVar37) {
            local_4a4[0] = 0;
            `TCheckedPointerIterator<FControlRigOverrideValue_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_4a4);
          }
          uVar32 = local_1d0;
          uVar29 = 0;
          if ((FControlRigOverrideValue *)FVar27.Data == pFVar8) break;
          local_458.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_458.TypedValue.Data.ArrayNum = 0;
          local_458.TypedValue.Data.ArrayMax = -1;
          local_448 = (void *)0x0;
          local_440 = 0;
          local_43c = 0xffffffffffffffff;
          local_434 = 0;
          local_428 = (FPropertyInfo *)0x0;
          local_420 = 0;
          local_418 = (void *)0x0;
          local_410 = 0;
          FControlRigOverrideValue::operator=
                    ((FControlRigOverrideValue *)&local_458.TypedValue,
                     (FControlRigOverrideValue *)FVar27.Data);
          if ((int)local_420 == 0) {
LAB_14a27f61a:
            if (3 < (byte)LogControlRig._0_1_) {
              FSoftObjectPath::ToString
                        ((FSoftObjectPath *)&(pFVar14->Class).SoftObjectPtr.field_0x8,&local_320);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                atexit(`FControlRigOverrideValue::GetPath'::__l2::
                       _dynamic_atexit_destructor_for__EmptyPath__);
                _Init_thread_footer(&::_TSS0);
              }
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
              FVar25.Data = local_320.Data.AllocatorInstance.Data;
LAB_14a27f6b7:
              if (FVar25.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar25.Data);
              }
            }
          }
          else {
            if (((int)local_420 < 1) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar2 = &(local_428->Property).Field;
            pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_428);
            if (pUVar15 == (UObject *)0x0) {
              *(undefined8 *)&pTVar2->field_0x0 = 0;
              goto LAB_14a27f61a;
            }
            pFVar16 = FProperty::StaticClass();
            pFVar17 = FFieldPath::GetTyped((FFieldPath *)pTVar2,pFVar16,(UStruct *)0x0);
            if (pFVar17 == (FField *)0x0) goto LAB_14a27f61a;
            if ((int)local_420 == 0) {
LAB_14a27f575:
              if ((byte)LogControlRig._0_1_ < 4) goto LAB_14a27f6c1;
              FSoftObjectPath::ToString
                        ((FSoftObjectPath *)&(pFVar14->Class).SoftObjectPtr.field_0x8,&local_330);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                atexit(`FControlRigOverrideValue::GetPath'::__l2::
                       _dynamic_atexit_destructor_for__EmptyPath__);
                _Init_thread_footer(&::_TSS0);
              }
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
              FVar25.Data = local_330.Data.AllocatorInstance.Data;
              goto LAB_14a27f6b7;
            }
            uVar32 = uVar29;
            if ((int)((int)local_420 - 1U) < (int)local_420) {
              uVar32 = ~((int)local_420 - 1U) >> 0x1f;
            }
            if (uVar32 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            pTVar2 = &local_428[(int)local_420 + -1].Property.Field;
            pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_428 + ((int)local_420 + -1)));
            if (pUVar15 == (UObject *)0x0) {
              *(undefined8 *)&pTVar2->field_0x0 = 0;
              goto LAB_14a27f575;
            }
            pFVar16 = FProperty::StaticClass();
            pFVar18 = (FProperty *)FFieldPath::GetTyped((FFieldPath *)pTVar2,pFVar16,(UStruct *)0x0)
            ;
            if (pFVar18 == (FProperty *)0x0) goto LAB_14a27f575;
            if ((int)((int)local_420 - 1U) < (int)local_420) {
              uVar29 = ~((int)local_420 - 1U) >> 0x1f;
            }
            if (uVar29 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            if (local_428[(int)local_420 + -1].ArrayIndex == -1) {
              pFVar19 = FProperty::GetOwnerProperty(pFVar18);
              if ((pFVar19 != (FProperty *)0x0) &&
                 ((*(uint *)(pFVar19->_padding_ + 0x18) >> 0x15 & 1) != 0)) {
                pFVar18 = pFVar19;
              }
            }
            else if ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0x15 & 1) != 0) {
              pFVar18 = (FProperty *)pFVar18[1]._padding_;
            }
            if (pFVar18 == (FProperty *)0x0) goto LAB_14a27f575;
            pFVar18 = FControlRigOverrideValue::GetRootProperty
                                ((FControlRigOverrideValue *)FVar27.Data);
            pUVar20 = (UClass *)FField::GetOwnerUObject((FField *)pFVar18);
            this_06 = &pFVar14->Class;
            local_310 = this_06;
            pUVar21 = TSoftClassPtr<UControlRig>::Get(this_06);
            if ((pUVar20 != pUVar21) &&
               (0 < (((FControlRigOverrideValue *)FVar27.Data)->Properties).ArrayNum)) {
              lVar23 = 0;
              do {
                uVar29 = 0;
                if ((int)uVar31 < (((FControlRigOverrideValue *)FVar27.Data)->Properties).ArrayNum)
                {
                  uVar29 = ~uVar31 >> 0x1f;
                }
                if ((uVar29 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar28 = (FWeakObjectPtr *)
                          ((((FControlRigOverrideValue *)FVar27.Data)->Properties).AllocatorInstance
                           .Data + lVar23);
                pUVar20 = TSoftClassPtr<UControlRig>::Get(this_06);
                pUVar15 = FWeakObjectPtr::Get(pFVar28);
                if (pUVar15 == (UObject *)0x0) {
                  pFVar28[1].ObjectIndex = 0;
                  pFVar28[1].ObjectSerialNumber = 0;
                  pFVar17 = (FField *)0x0;
                }
                else {
                  pFVar16 = FProperty::StaticClass();
                  pFVar17 = FFieldPath::GetTyped((FFieldPath *)(pFVar28 + 1),pFVar16,(UStruct *)0x0)
                  ;
                }
                bVar11 = IsThisNotNull(pFVar17,"FField::GetFName");
                if (bVar11) {
                  local_3d8 = pFVar17->NamePrivate;
                }
                else {
                  local_3d8.ComparisonIndex.Value = 0;
                  local_3d8.Number = 0;
                }
                pFVar18 = UStruct::FindPropertyByName((UStruct *)pUVar20,local_3d8);
                pFVar14 = local_470;
                if (pFVar18 == (FProperty *)0x0) {
                  if (1 < (byte)LogControlRig._0_1_) {
                    FSoftObjectPath::ToString
                              ((FSoftObjectPath *)&(local_470->Class).SoftObjectPtr.field_0x8,
                               &local_340);
                    ::FName::ToString(&local_478,&local_278);
                    UE::Logging::Private::BasicLog<2>
                              (&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
                    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_278.Data.AllocatorInstance.Data);
                    }
                    if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_340.Data.AllocatorInstance.Data);
                    }
                  }
                }
                else {
                  uVar29 = 0;
                  if ((int)uVar31 < (int)local_420) {
                    uVar29 = ~uVar31 >> 0x1f;
                  }
                  if ((uVar29 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pFVar28 = (FWeakObjectPtr *)
                            ((longlong)&(local_428->Property).Owner.WeakPtr.ObjectIndex + lVar23);
                  local_348 = FField::GetOwnerUObject((FField *)pFVar18);
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (local_348 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(local_348);
                  }
                  FWeakObjectPtr::operator=(pFVar28,(FObjectPtr)&local_348);
                  this_00 = (FFieldPath *)(pFVar28 + 1);
                  this_00->ResolvedField = (FField *)pFVar18;
                  FFieldPath::Generate(this_00,(FField *)pFVar18);
                  pFVar14 = local_470;
                }
                uVar31 = uVar31 + 1;
                lVar23 = lVar23 + 0x30;
                this_06 = local_310;
              } while ((int)uVar31 <
                       (((FControlRigOverrideValue *)FVar27.Data)->Properties).ArrayNum);
            }
            SetConfigValueInModule
                      (local_390,&local_478,(FControlRigOverrideValue *)&local_458.TypedValue,false)
            ;
          }
LAB_14a27f6c1:
          FControlRigOverrideValue::Reset((FControlRigOverrideValue *)&local_458.TypedValue);
          if (local_418 != (void *)0x0) {
            FMemory::Free(local_418);
          }
          DestructItems<FControlRigOverrideValue::FPropertyInfo,int>(local_428,(int)local_420);
          if (local_428 != (FPropertyInfo *)0x0) {
            FMemory::Free(local_428);
          }
          if (((int)local_43c != -1) && (local_448 != (void *)0x0)) {
            FMemory::Free(local_448);
          }
          if ((local_458.TypedValue.Data.ArrayMax != -1) &&
             (local_458.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_458.TypedValue.Data.AllocatorInstance.Data);
          }
          uVar24 = (ulonglong)(uint)local_1a8.Values.ArrayNum;
          FVar27.Data = FVar27.Data + 0x58;
          uVar37 = (ulonglong)local_3e0 & 0xffffffff;
        }
        uStack_3a4 = uVar29;
        local_3a0 = uVar29;
        if (local_1d0 != 0) {
          puVar35 = (uint *)(local_1f8 + 0x10);
          if (local_1d8 != (uint *)0x0) {
            puVar35 = local_1d8;
          }
          uVar3 = *puVar35;
          uVar29 = uVar31;
          local_3a0 = uVar31;
          while (uVar3 == 0) {
            uVar29 = uVar29 + 1;
            local_3a0 = local_3a0 + 0x20;
            uStack_3a4 = local_1d0;
            if ((int)((local_1d0 - 1) + ((int)(local_1d0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar29)
            goto LAB_14a27f7c4;
            uVar3 = puVar35[(int)uVar29];
          }
          local_468 = (ulonglong)(-uVar3 & uVar3);
          uVar37 = local_468 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          local_358 = (int)lVar23;
          uStack_3a4 = (int)lVar23 + -1 + local_3a0;
          if ((int)local_1d0 < (int)uStack_3a4) {
            uStack_3a4 = local_1d0;
          }
        }
LAB_14a27f7c4:
        local_3c0 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                     *)local_1f8;
        uVar31 = local_1d0 & 0xffffffe0;
        uStack_3b4 = (int)local_468;
        uStack_39c = local_1fc;
        local_3b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1f8 + 0x10);
        uStack_3a8 = 0xffffffff;
        uStack_3b8 = uVar29;
        iStack_398 = local_1f8._8_4_ - local_1c4;
        local_2c8 = (longlong *)local_1f8;
        TStack_2c0._padding_ = CONCAT44((int)local_468,uVar29);
        iVar13 = (int)local_1d0 >> 5;
        bVar22 = (byte)local_1d0;
        TStack_2c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_1f8 + 0x10);
        TStack_2c0.UnvisitedBitMask = 0xffffffff;
        TStack_2c0.CurrentBitIndex = uStack_3a4;
        TStack_2c0.BaseBitIndex = local_3a0;
        TStack_2c0._28_4_ = local_1fc;
        uStack_2a0 = CONCAT44(uStack_394,local_1f8._8_4_ - local_1c4);
        if (((int)local_1d0 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_03 = local_390;
        if (uVar32 != local_1d0) {
          puVar35 = (uint *)(local_1f8 + 0x10);
          if (local_1d8 != (uint *)0x0) {
            puVar35 = local_1d8;
          }
          uVar29 = -1 << (bVar22 & 0x1f) & puVar35[iVar13];
          while (uVar29 == 0) {
            iVar13 = iVar13 + 1;
            uVar31 = uVar31 + 0x20;
            uVar32 = local_1d0;
            if ((int)(((int)(local_1d0 - 1) >> 0x1f & 0x1fU) + (local_1d0 - 1)) >> 5 < iVar13)
            goto LAB_14a27f8f0;
            uVar29 = puVar35[iVar13];
          }
          uVar37 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
          lVar23 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          uVar32 = (int)lVar23 + -1 + uVar31;
          if ((int)local_1d0 < (int)uVar32) {
            uVar32 = local_1d0;
          }
        }
LAB_14a27f8f0:
        while( true ) {
          plVar10 = local_2c8;
          if ((int)local_2c8[1] - *(int *)((longlong)local_2c8 + 0x34) != (int)uStack_2a0) {
            `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_480);
          }
          if (((TStack_2c0.CurrentBitIndex == uVar32) &&
              (TStack_2c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1f8 + 0x10))) &&
             (plVar10 == (longlong *)local_1f8)) break;
          pFVar26 = (FName *)((longlong)TStack_2c0.CurrentBitIndex * 0x20 + *plVar10);
          BindModuleVariable(this_03,&local_478,pFVar26,(FString *)(pFVar26 + 1),false);
          TStack_2c0.UnvisitedBitMask = TStack_2c0.UnvisitedBitMask & ~TStack_2c0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c0);
        }
        this_01 = this_03->Model;
        pFStack_290 = local_300;
        local_288 = &local_478;
        local_298 = this_03;
        pUStack_280 = local_368;
        local_268[0] = (code *)0x0;
        local_240 = FMemory::Malloc(0x28,8);
        *local_240 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
        local_240[1] = local_298;
        local_240[2] = pFStack_290;
        local_240[3] = local_288;
        local_240[4] = pUStack_280;
        if (local_240 + 1 != (undefined8 *)0x0) {
          local_268[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`UModularRigController::RefreshModuleVariables'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
                         ::Call;
        }
        FModularRigModel::ForEachModule
                  (this_01,(TFunction<bool___cdecl(FRigModuleReference_const_*)> *)local_268,true);
        local_1b0 = 0;
        if (local_1b8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_1b8);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_1f8);
        FControlRigOverrideContainer::~FControlRigOverrideContainer(&local_1a8);
      }
    }
  }
  return;
LAB_14a27eec1:
  iVar13 = (int)local_498;
  uVar37 = (ulonglong)(int)local_498;
  pFVar33 = local_4a0.Data + uVar37 * 0x10;
  FVar27.Data = local_4a0.Data;
  while( true ) {
    if ((int)uVar37 != iVar13) {
      local_4a6 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_4a6)
      ;
    }
    if (FVar27.Data == pFVar33) break;
    iVar12 = FControlRigOverrideContainer::GetIndex(this_02,(FString *)FVar27.Data,&local_478);
    if ((-1 < iVar12) && (iVar12 < (this_02->Values).ArrayNum)) {
      TArray<FControlRigOverrideValue,TSizedDefaultAllocator<32>_>::RemoveAt
                (&this_02->Values,iVar12,Default);
      FControlRigOverrideContainer::RebuildLookup(this_02);
      TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
               *)&this_02->ContainsParentPathCache);
      TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
               *)&this_02->ContainsChildPathCache);
    }
    uVar37 = local_498 & 0xffffffff;
    FVar27.Data = FVar27.Data + 0x10;
  }
  iVar13 = (int)local_488;
  pFVar26 = (FName *)(local_490.Data + (longlong)(int)local_488 * 8);
  FVar27.Data = local_490.Data;
  while( true ) {
    if ((int)local_488 != iVar13) {
      local_4a5 = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_4a5);
    }
    if ((FName *)FVar27.Data == pFVar26) break;
    FVar5 = *(FName *)FVar27.Data;
    local_350 = FVar5;
    if (*(int *)&(pFVar7->Bindings).field_0x8 != *(int *)&(pFVar7->Bindings).field_0x34) {
      uVar31 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                           *)this_05,FVar5.Number + uVar31,&local_350);
    }
    FVar27.Data = FVar27.Data + 8;
  }
  if ((FName *)local_490.Data != (FName *)0x0) {
    FMemory::Free(local_490.Data);
  }
  DestructItems<FString,int>((FString *)local_4a0.Data,(int)local_498);
  if (local_4a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data);
  }
  if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.Data.AllocatorInstance.Data);
  }
  uVar37 = local_468;
  pFVar14 = local_470;
  if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
    uVar37 = local_468;
    pFVar14 = local_470;
  }
LAB_14a27f008:
  local_3f8.Field = (local_3f8.Field)->Next;
  TFieldIterator<FProperty>::IterateToNext(&local_3f8);
  if (local_3f8.Field == (FField *)0x0) goto LAB_14a27f03c;
  goto LAB_14a27e990;
}

// RefreshModuleVariables @ 14a27fb20

void __thiscall
UModularRigController::RefreshModuleVariables(UModularRigController *this,bool param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularRigController *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularRigController::RefreshModuleVariables'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  FModularRigModel::ForEachModule
            (this->Model,(TFunction<bool___cdecl(FRigModuleReference_const_*)> *)local_38,true);
  return;
}

// RenameModule @ 14a286a10

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
UModularRigController::RenameModule
          (UModularRigController *this,FName *param_1,FName *param_2,bool param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  TMap<FRigHierarchyModulePath,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>_>
  *pTVar4;
  int iVar5;
  FName *pFVar6;
  FModularRigModel *pFVar7;
  code *pcVar8;
  ForAnyElementType _Src;
  TMap<FRigHierarchyModulePath,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>_>
  *pTVar9;
  bool bVar10;
  FRigModuleReference *pFVar11;
  FName FVar12;
  FName *pFVar13;
  FRigHierarchyModulePath *pFVar14;
  FString *pFVar15;
  FRigHierarchyModulePath *pFVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  FRigModuleReference *pFVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  undefined1 *puVar27;
  undefined7 in_register_00000089;
  uint *puVar28;
  FName *pFVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  uint uVar32;
  FScriptContainerElement *pFVar33;
  EModularRigNotification local_388 [12];
  uint local_37c;
  FName local_378;
  FRigModuleReference *local_370;
  FModularRigModel *local_368;
  FName local_360;
  ulonglong local_358;
  FScriptContainerElement *local_350;
  TArray<FRigModuleReference_*,TSizedDefaultAllocator<32>_> local_348;
  FScriptContainerElement *local_338;
  uint uStack_330;
  uint uStack_32c;
  TBitArray<FDefaultBitArrayAllocator> *local_328;
  undefined4 uStack_320;
  uint uStack_31c;
  uint local_318;
  undefined4 uStack_314;
  int iStack_310;
  undefined4 uStack_30c;
  FRigHierarchyModulePath local_308;
  longlong local_2c8;
  FModularRigModel *local_2c0;
  FRigHierarchyModulePath local_2b8;
  FRigHierarchyModulePath local_278;
  FString local_238;
  FText local_228;
  FString local_218;
  FScriptContainerElement *local_208;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  FScriptContainerElement *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e8;
  undefined8 uStack_1c8;
  TMap<FRigHierarchyModulePath,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>_>
  *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 uStack_198;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FRigHierarchyModulePath local_140;
  FRigHierarchyModulePath local_100;
  FRigHierarchyModulePath local_c0;
  undefined4 local_64;
  undefined4 local_44;
  
  pFVar13 = (FName *)CONCAT71(in_register_00000089,param_3);
  uVar24 = 0;
  uVar31 = 0;
  local_37c = 0;
  pFVar11 = FModularRigModel::FindModule(this->Model,param_2);
  local_370 = pFVar11;
  if (pFVar11 == (FRigModuleReference *)0x0) {
    if (1 < (byte)LogControlRig._0_1_) {
      ::FName::ToString(param_2,&local_180);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
    }
    param_1->ComparisonIndex = 0;
    param_1->Number = 0;
  }
  else {
    FVar12 = pFVar11->Name;
    local_378 = *pFVar13;
    if (FVar12 == local_378) {
      *param_1 = pFVar11->Name;
    }
    else {
      local_360 = FVar12;
      FText::FText(&local_228);
      bVar10 = CanRenameModule(this,param_2,pFVar13,&local_228);
      if (bVar10) {
        pFVar6 = (FName *)(this->Model->SelectedModuleNames).AllocatorInstance.Data;
        for (pFVar29 = pFVar6; pFVar29 != pFVar6 + (this->Model->SelectedModuleNames).ArrayNum;
            pFVar29 = pFVar29 + 1) {
          if (*pFVar29 == FVar12) {
            lVar17 = (longlong)pFVar29 - (longlong)pFVar6 >> 3;
            local_2c8 = lVar17;
            if ((int)lVar17 != -1) {
              local_388[0] = ModuleDeselected;
              Notify(this,local_388,pFVar11);
              local_2c8 = lVar17;
            }
            goto LAB_14a286bbb;
          }
        }
        local_2c8 = CONCAT44(local_2c8._4_4_,0xffffffff);
LAB_14a286bbb:
        pFVar11->PreviousName = pFVar11->Name;
        pFVar11->Name = *pFVar13;
        local_348.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_348.ArrayNum = 0;
        local_348.ArrayMax = 0;
        TArray<FRigModuleReference_*,TSizedDefaultAllocator<32>_>::
        Append<FRigModuleReference_*,TSizedDefaultAllocator<32>_>
                  (&local_348,&pFVar11->CachedChildren);
        uVar18 = uVar24;
        uVar25 = uVar24;
        if (0 < local_348.ArrayNum) {
          do {
            uVar23 = (uint)uVar18;
            uVar22 = 0;
            if ((int)uVar23 < local_348.ArrayNum) {
              uVar22 = ~uVar23 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              FVar12 = (FName)(*pcVar8)();
              return FVar12;
            }
            lVar17 = *(longlong *)(local_348.AllocatorInstance.Data + uVar25);
            if (*(FName *)(lVar17 + 0x30) == FVar12) {
              *(FName *)(lVar17 + 0x30) = local_378;
            }
            TArray<FRigModuleReference_*,TSizedDefaultAllocator<32>_>::
            Append<FRigModuleReference_*,TSizedDefaultAllocator<32>_>
                      (&local_348,
                       (TArray<FRigModuleReference_*,TSizedDefaultAllocator<32>_> *)(lVar17 + 0x2b8)
                      );
            uVar18 = (ulonglong)(uVar23 + 1);
            uVar25 = uVar25 + 8;
          } while ((int)(uVar23 + 1) < local_348.ArrayNum);
        }
        local_358 = CONCAT44(local_358._4_4_,1);
        local_368 = this->Model;
        local_37c = (local_368->Connections).ConnectionList.ArrayNum;
        uVar25 = (ulonglong)(int)local_37c;
        pFVar30 = (local_368->Connections).ConnectionList.AllocatorInstance.Data;
        local_2c0 = (FModularRigModel *)(pFVar30 + uVar25 * 0x28);
        uVar18 = uVar24;
        while( true ) {
          pFVar7 = local_2c0;
          if ((local_368->Connections).ConnectionList.ArrayNum != (int)uVar25) {
            local_388[1] = 0;
            `TCheckedPointerIterator<FModularRigSingleConnection,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_388 + 1);
          }
          if ((FModularRigModel *)pFVar30 == pFVar7) break;
          if (*(longlong *)(pFVar30 + 4) == 0) {
            uVar22 = (uint)uVar18 | 4;
            local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_238.Data.ArrayNum = 0;
            local_238.Data.ArrayMax = 0;
            pFVar15 = &local_238;
          }
          else {
            uVar22 = (uint)uVar18 | 8;
            pFVar15 = ::FName::ToString((FName *)(pFVar30 + 4),&local_160);
          }
          uVar18 = (ulonglong)uVar22;
          local_278.ModulePath.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
          (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_278.ModulePath.Data.ArrayNum = (pFVar15->Data).ArrayNum;
          local_278.ModulePath.Data.ArrayMax = (pFVar15->Data).ArrayMax;
          (pFVar15->Data).ArrayNum = 0;
          (pFVar15->Data).ArrayMax = 0;
          if (((uVar22 & 8) != 0) &&
             (uVar18 = (ulonglong)(uVar22 & 0xfffffff7),
             local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_160.Data.AllocatorInstance.Data);
          }
          if (((uVar18 & 4) != 0) &&
             (uVar18 = (ulonglong)((uint)uVar18 & 0xfffffffb),
             local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
          local_278.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_278.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
          local_278.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
          local_278.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_278.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
          local_278._44_8_ = 0xffffffffffffffff;
          local_278.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
          local_278.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value =
               (FNameEntryId)0xffffffff;
          local_278.CachedElementFName.field0_0x0.TypedValue.Number = 0;
          if ((FVar12 != (FName)0x0) &&
             (pFVar13 = FRigHierarchyModulePath::GetModuleFName(&local_278), *pFVar13 == FVar12)) {
            pFVar13 = FRigHierarchyModulePath::GetElementFName(&local_278);
            pFVar14 = FRigHierarchyModulePath::Join(&local_100,&local_378,pFVar13);
            FRigHierarchyModulePath::operator=(&local_278,pFVar14);
            if ((local_100.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
               (local_100.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                != (FScriptContainerElement *)0x0)) {
              FMemory::Free((void *)local_100.CachedElementNameString.field0_0x0.TypedValue.Data.
                                    AllocatorInstance.Data);
            }
            if ((local_100.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
               (local_100.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                != (FScriptContainerElement *)0x0)) {
              FMemory::Free((void *)local_100.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                    AllocatorInstance.Data);
            }
            if (local_100.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_100.ModulePath.Data.AllocatorInstance.Data);
            }
            FVar12 = FRigHierarchyModulePath::GetPathFName(&local_278);
            *(undefined8 *)(pFVar30 + 4) = *(undefined8 *)FVar12;
          }
          iVar19 = *(int *)(pFVar30 + 0x20);
          pFVar33 = *(FScriptContainerElement **)(pFVar30 + 0x18);
          pFVar20 = pFVar33 + (longlong)iVar19 * 0xc;
          local_350 = pFVar20;
          while( true ) {
            if (*(int *)(pFVar30 + 0x20) != iVar19) {
              local_388[2] = 0;
              `TCheckedPointerIterator<FRigElementKey,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_388 + 2);
            }
            if (pFVar33 == pFVar20) break;
            if (*(longlong *)(pFVar33 + 4) == 0) {
              pFVar15 = &local_218;
              local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_218.Data.ArrayNum = 0;
              local_218.Data.ArrayMax = 0;
              uVar22 = (uint)local_358;
            }
            else {
              pFVar15 = ::FName::ToString((FName *)(pFVar33 + 4),&local_150);
              uVar22 = 2;
            }
            uVar22 = (uint)uVar18 | uVar22;
            uVar18 = (ulonglong)uVar22;
            local_308.ModulePath.Data.AllocatorInstance.Data =
                 (pFVar15->Data).AllocatorInstance.Data;
            (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_308.ModulePath.Data.ArrayNum = (pFVar15->Data).ArrayNum;
            local_308.ModulePath.Data.ArrayMax = (pFVar15->Data).ArrayMax;
            (pFVar15->Data).ArrayNum = 0;
            (pFVar15->Data).ArrayMax = 0;
            if (((uVar22 & 2) != 0) &&
               (uVar18 = (ulonglong)(uVar22 & 0xfffffffd),
               local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_150.Data.AllocatorInstance.Data);
            }
            if (((uVar18 & 1) != 0) &&
               (uVar18 = (ulonglong)((uint)uVar18 & 0xfffffffe),
               local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_218.Data.AllocatorInstance.Data);
            }
            local_308.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
                 (ForAnyElementType)(FScriptContainerElement *)0x0;
            local_308.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value =
                 (FNameEntryId)0xffffffff;
            local_308.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
                 (ForAnyElementType)(FScriptContainerElement *)0x0;
            local_308.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
            local_308.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
            local_308.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
            local_308._44_8_ = 0xffffffffffffffff;
            local_308.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
            local_308.CachedElementFName.field0_0x0.TypedValue.Number = 0;
            if ((local_360 != (FName)0x0) &&
               (pFVar13 = FRigHierarchyModulePath::GetModuleFName(&local_308), *pFVar13 == local_360
               )) {
              pFVar13 = FRigHierarchyModulePath::GetElementFName(&local_308);
              pFVar14 = FRigHierarchyModulePath::Join(&local_c0,&local_378,pFVar13);
              if (&local_308 != pFVar14) {
                if (local_308.ModulePath.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_308.ModulePath.Data.AllocatorInstance.Data);
                }
                local_308.ModulePath.Data.AllocatorInstance.Data =
                     (pFVar14->ModulePath).Data.AllocatorInstance.Data;
                (pFVar14->ModulePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_308.ModulePath.Data.ArrayNum = (pFVar14->ModulePath).Data.ArrayNum;
                local_308.ModulePath.Data.ArrayMax = (pFVar14->ModulePath).Data.ArrayMax;
                (pFVar14->ModulePath).Data.ArrayNum = 0;
                (pFVar14->ModulePath).Data.ArrayMax = 0;
              }
              TOptional<FString>::operator=
                        (&local_308.CachedModuleNameString,&pFVar14->CachedModuleNameString);
              TOptional<FString>::operator=
                        (&local_308.CachedElementNameString,&pFVar14->CachedElementNameString);
              TOptional<FName>::operator=(&local_308.CachedModuleFName,&pFVar14->CachedModuleFName);
              TOptional<FName>::operator=
                        (&local_308.CachedElementFName,&pFVar14->CachedElementFName);
              if ((local_c0.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
                 (local_c0.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                  != (FScriptContainerElement *)0x0)) {
                FMemory::Free((void *)local_c0.CachedElementNameString.field0_0x0.TypedValue.Data.
                                      AllocatorInstance.Data);
              }
              if ((local_c0.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
                 (local_c0.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                  != (FScriptContainerElement *)0x0)) {
                FMemory::Free((void *)local_c0.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                      AllocatorInstance.Data);
              }
              if (local_c0.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              {
                FMemory::Free(local_c0.ModulePath.Data.AllocatorInstance.Data);
              }
              FVar12 = FRigHierarchyModulePath::GetPathFName(&local_308);
              *(undefined8 *)(pFVar33 + 4) = *(undefined8 *)FVar12;
              pFVar20 = local_350;
            }
            if ((local_308.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
               (local_308.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                != (FScriptContainerElement *)0x0)) {
              FMemory::Free((void *)local_308.CachedElementNameString.field0_0x0.TypedValue.Data.
                                    AllocatorInstance.Data);
            }
            if ((local_308.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
               (local_308.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                != (FScriptContainerElement *)0x0)) {
              FMemory::Free((void *)local_308.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                    AllocatorInstance.Data);
            }
            if (local_308.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_308.ModulePath.Data.AllocatorInstance.Data);
            }
            pFVar33 = pFVar33 + 0xc;
          }
          if ((local_278.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
             (local_278.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_278.CachedElementNameString.field0_0x0.TypedValue.Data.
                                  AllocatorInstance.Data);
          }
          if ((local_278.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
             (local_278.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_278.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                  AllocatorInstance.Data);
          }
          if (local_278.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.ModulePath.Data.AllocatorInstance.Data);
          }
          pFVar30 = pFVar30 + 0x28;
          uVar25 = (ulonglong)local_37c;
          FVar12 = local_360;
        }
        FModularRigConnections::UpdateFromConnectionList(&this->Model->Connections);
        local_2c0 = this->Model;
        local_37c = (local_2c0->Modules).ArrayNum;
        uVar18 = (ulonglong)(int)local_37c;
        pFVar20 = (local_2c0->Modules).AllocatorInstance.Data;
        pFVar30 = pFVar20 + 0x278;
        local_208 = pFVar20 + uVar18 * 0x2d0;
        while( true ) {
          pFVar33 = local_208;
          local_368 = (FModularRigModel *)pFVar30;
          local_350 = pFVar20;
          if ((local_2c0->Modules).ArrayNum != (int)uVar18) {
            local_388[3] = 0;
            `TCheckedPointerIterator<FRigModuleReference,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_388 + 3);
          }
          uVar22 = 0;
          if (pFVar20 == pFVar33) break;
          uVar23 = *(uint *)(pFVar30 + 8);
          uStack_32c = (uint)local_358;
          uStack_330 = 0;
          uStack_31c = uVar22;
          if (uVar23 != 0) {
            pFVar20 = *(FScriptContainerElement **)pFVar30;
            if (pFVar20 == (FScriptContainerElement *)0x0) {
              pFVar20 = pFVar30 + -0x10;
            }
            uVar32 = *(uint *)pFVar20;
            uVar18 = uVar24;
            uVar25 = uVar24;
            uVar22 = uVar31;
            uStack_330 = uVar31;
            while (uVar32 == 0) {
              iVar19 = (int)uVar18;
              uVar22 = (int)uVar25 + 0x20;
              uVar25 = (ulonglong)uVar22;
              uStack_330 = iVar19 + 1;
              uVar18 = (ulonglong)uStack_330;
              uStack_31c = uVar23;
              if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_330)
              goto LAB_14a2871d2;
              uVar32 = *(uint *)(pFVar20 + ((longlong)iVar19 + 1) * 4);
            }
            uStack_32c = -uVar32 & uVar32;
            uVar18 = (ulonglong)uStack_32c * 2 + 1;
            lVar17 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            local_1f8 = (int)lVar17;
            uStack_31c = (uVar22 - 1) + local_1f8;
            if ((int)uVar23 < (int)uStack_31c) {
              uStack_31c = uVar23;
            }
          }
LAB_14a2871d2:
          pFVar20 = pFVar30 + -0x20;
          pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar30 + -0x10);
          uStack_314 = local_44;
          iStack_310 = *(int *)(pFVar30 + -0x18) - *(int *)(pFVar30 + 0x14);
          TStack_1e8._padding_ = CONCAT44(uStack_32c,uStack_330);
          uVar32 = uVar23 & 0xffffffe0;
          uStack_320 = 0xffffffff;
          TStack_1e8.CurrentBitIndex = uStack_31c;
          TStack_1e8.UnvisitedBitMask = 0xffffffff;
          TStack_1e8._28_4_ = local_44;
          TStack_1e8.BaseBitIndex = uVar22;
          uStack_1c8 = CONCAT44(uStack_30c,iStack_310);
          iVar19 = (int)uVar23 >> 5;
          local_338 = pFVar20;
          local_328 = pTVar1;
          local_318 = uVar22;
          local_1f0 = pFVar20;
          TStack_1e8.Array = pTVar1;
          if (((int)uVar23 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            FVar12 = (FName)(*pcVar8)();
            return FVar12;
          }
          uVar22 = *(uint *)((longlong)local_368 + 8);
          if (uVar23 != uVar22) {
            pTVar26 = pTVar1;
            if (*(TBitArray<FDefaultBitArrayAllocator> **)local_368 !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar26 = *(TBitArray<FDefaultBitArrayAllocator> **)local_368;
            }
            uVar23 = -1 << ((byte)uVar23 & 0x1f) &
                     *(uint *)((pTVar26->AllocatorInstance).InlineData + (longlong)iVar19 * 4);
            while (uVar23 == 0) {
              lVar17 = (longlong)iVar19;
              uVar32 = uVar32 + 0x20;
              iVar19 = iVar19 + 1;
              uVar23 = uVar22;
              if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
              goto LAB_14a2872e2;
              uVar23 = *(uint *)((pTVar26->AllocatorInstance).InlineData + lVar17 * 4 + 4);
            }
            uVar18 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
            lVar17 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            local_1fc = (int)lVar17;
            uVar23 = (uVar32 - 1) + local_1fc;
            if ((int)uVar22 < (int)uVar23) {
              uVar23 = uVar22;
            }
          }
LAB_14a2872e2:
          while( true ) {
            pFVar30 = local_1f0;
            if (*(int *)(local_1f0 + 8) - *(int *)(local_1f0 + 0x34) != (int)uStack_1c8) {
              local_388[4] = 0;
              `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_388 + 4);
            }
            if (((TStack_1e8.CurrentBitIndex == uVar23) && (TStack_1e8.Array == pTVar1)) &&
               (pFVar30 == pFVar20)) break;
            pFVar14 = (FRigHierarchyModulePath *)
                      (*(longlong *)pFVar30 + 8 + (longlong)TStack_1e8.CurrentBitIndex * 0x20);
            ::FString::FString(&local_2b8.ModulePath,(FString *)pFVar14);
            FVar12 = local_360;
            local_2b8.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value =
                 (FNameEntryId)0xffffffff;
            local_2b8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
                 (ForAnyElementType)(FScriptContainerElement *)0x0;
            local_2b8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
            local_2b8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
            local_2b8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
                 (ForAnyElementType)(FScriptContainerElement *)0x0;
            local_2b8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
            local_2b8._44_8_ = 0xffffffffffffffff;
            local_2b8.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
            local_2b8.CachedElementFName.field0_0x0.TypedValue.Number = 0;
            if ((local_360 != (FName)0x0) &&
               (pFVar13 = FRigHierarchyModulePath::GetModuleFName(&local_2b8), *pFVar13 == FVar12))
            {
              pFVar13 = FRigHierarchyModulePath::GetElementFName(&local_2b8);
              pFVar16 = FRigHierarchyModulePath::Join(&local_140,&local_378,pFVar13);
              if (&local_2b8 != pFVar16) {
                if (local_2b8.ModulePath.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2b8.ModulePath.Data.AllocatorInstance.Data);
                }
                local_2b8.ModulePath.Data.AllocatorInstance.Data =
                     (pFVar16->ModulePath).Data.AllocatorInstance.Data;
                (pFVar16->ModulePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_2b8.ModulePath.Data.ArrayNum = (pFVar16->ModulePath).Data.ArrayNum;
                local_2b8.ModulePath.Data.ArrayMax = (pFVar16->ModulePath).Data.ArrayMax;
                (pFVar16->ModulePath).Data.ArrayNum = 0;
                (pFVar16->ModulePath).Data.ArrayMax = 0;
              }
              TOptional<FString>::operator=
                        (&local_2b8.CachedModuleNameString,&pFVar16->CachedModuleNameString);
              TOptional<FString>::operator=
                        (&local_2b8.CachedElementNameString,&pFVar16->CachedElementNameString);
              TOptional<FName>::operator=(&local_2b8.CachedModuleFName,&pFVar16->CachedModuleFName);
              TOptional<FName>::operator=
                        (&local_2b8.CachedElementFName,&pFVar16->CachedElementFName);
              if ((local_140.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
                 (local_140.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                  Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free((void *)local_140.CachedElementNameString.field0_0x0.TypedValue.Data.
                                      AllocatorInstance.Data);
              }
              if ((local_140.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
                 (local_140.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                  != (FScriptContainerElement *)0x0)) {
                FMemory::Free((void *)local_140.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                      AllocatorInstance.Data);
              }
              if (local_140.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 ) {
                FMemory::Free(local_140.ModulePath.Data.AllocatorInstance.Data);
              }
              iVar19 = local_2b8.ModulePath.Data.ArrayNum;
              _Src.Data = local_2b8.ModulePath.Data.AllocatorInstance.Data;
              if (pFVar14 != &local_2b8) {
                lVar17 = (longlong)local_2b8.ModulePath.Data.ArrayNum;
                piVar2 = &(pFVar14->ModulePath).Data.ArrayMax;
                iVar5 = *piVar2;
                (pFVar14->ModulePath).Data.ArrayNum = local_2b8.ModulePath.Data.ArrayNum;
                if ((local_2b8.ModulePath.Data.ArrayNum == 0) && (iVar5 == 0)) {
                  *piVar2 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_2b8.ModulePath.Data.ArrayNum,iVar5,
                             (ForAnyElementType *)pFVar14,local_2b8.ModulePath.Data.ArrayNum,piVar2)
                  ;
                  if (iVar19 != 0) {
                    memcpy((pFVar14->ModulePath).Data.AllocatorInstance.Data,_Src.Data,lVar17 * 2);
                  }
                }
              }
            }
            if ((local_2b8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
               (local_2b8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                != (FScriptContainerElement *)0x0)) {
              FMemory::Free((void *)local_2b8.CachedElementNameString.field0_0x0.TypedValue.Data.
                                    AllocatorInstance.Data);
            }
            if ((local_2b8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
               (local_2b8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                != (FScriptContainerElement *)0x0)) {
              FMemory::Free((void *)local_2b8.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                    AllocatorInstance.Data);
            }
            if (local_2b8.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_2b8.ModulePath.Data.AllocatorInstance.Data);
            }
            TStack_1e8.UnvisitedBitMask = TStack_1e8.UnvisitedBitMask & ~TStack_1e8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e8);
          }
          pFVar20 = local_350 + 0x2d0;
          pFVar30 = (FScriptContainerElement *)((longlong)local_368 + 0x2d0);
          uVar18 = (ulonglong)local_37c;
        }
        pFVar30 = (local_370->ConfigOverrides).Values.AllocatorInstance.Data;
        iVar19 = (local_370->ConfigOverrides).Values.ArrayNum;
        pFVar33 = pFVar30 + (longlong)iVar19 * 0x58;
        pFVar11 = local_370;
        pFVar20 = pFVar30;
        while( true ) {
          pFVar21 = (FRigModuleReference *)(pFVar20 + 0x20);
          if ((pFVar11->ConfigOverrides).Values.ArrayNum != iVar19) {
            local_388[5] = 0;
            `TCheckedPointerIterator<FControlRigOverrideValue,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_388 + 5);
            pFVar11 = local_370;
          }
          if (pFVar30 == pFVar33) break;
          if (((pFVar11 != pFVar21) &&
              (FVar12 = pFVar11->Name, pFVar21->Name = FVar12,
              FVar12.ComparisonIndex.Value.Value == 0xffffffff)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x171,
                                  L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                 ), pFVar11 = local_370, bVar10)) {
            pcVar8 = (code *)swi(3);
            FVar12 = (FName)(*pcVar8)();
            return FVar12;
          }
          pFVar30 = pFVar30 + 0x58;
          pFVar20 = (FScriptContainerElement *)&pFVar21->Class;
        }
        pFVar7 = this->Model;
        puVar3 = &(pFVar7->PreviousModulePaths).field_0x10;
        uVar23 = *(uint *)&(pFVar7->PreviousModulePaths).field_0x28;
        pTVar4 = &pFVar7->PreviousModulePaths;
        uStack_31c = uVar22;
        uStack_330 = uVar22;
        local_318 = uVar22;
        if (uVar23 != 0) {
          puVar28 = *(uint **)&(pFVar7->PreviousModulePaths).field_0x20;
          if (puVar28 == (uint *)0x0) {
            puVar28 = (uint *)puVar3;
          }
          uVar32 = *puVar28;
          uVar18 = uVar24;
          local_318 = uVar31;
          uStack_330 = uVar31;
          while (uVar32 == 0) {
            iVar19 = (int)uVar24;
            local_318 = (int)uVar18 + 0x20;
            uVar18 = (ulonglong)local_318;
            uStack_330 = iVar19 + 1;
            uVar24 = (ulonglong)uStack_330;
            uStack_31c = uVar23;
            if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_330)
            goto LAB_14a287653;
            uVar32 = puVar28[(longlong)iVar19 + 1];
          }
          local_358 = (ulonglong)(-uVar32 & uVar32);
          uVar24 = local_358 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_200 = (int)lVar17;
          uStack_31c = (local_318 - 1) + local_200;
          if ((int)uVar23 < (int)uStack_31c) {
            uStack_31c = uVar23;
          }
        }
LAB_14a287653:
        uStack_32c = (uint)local_358;
        uStack_314 = local_64;
        iStack_310 = *(int *)&(pFVar7->PreviousModulePaths).field_0x8 -
                     *(int *)&(pFVar7->PreviousModulePaths).field_0x34;
        uVar31 = *(uint *)&(pFVar7->PreviousModulePaths).field_0x28;
        uStack_320 = 0xffffffff;
        uVar32 = uVar31 & 0xffffffe0;
        TStack_1b8._padding_ = CONCAT44(uStack_32c,uStack_330);
        TStack_1b8.CurrentBitIndex = uStack_31c;
        TStack_1b8.UnvisitedBitMask = 0xffffffff;
        iVar19 = (int)uVar31 >> 5;
        TStack_1b8._28_4_ = local_64;
        TStack_1b8.BaseBitIndex = local_318;
        uStack_198 = CONCAT44(uStack_30c,iStack_310);
        local_338 = (FScriptContainerElement *)pTVar4;
        local_328 = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
        local_1c0 = pTVar4;
        TStack_1b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
        if ((((int)uVar31 < 0) || ((int)uVar23 < (int)uVar31)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          FVar12 = (FName)(*pcVar8)();
          return FVar12;
        }
        pFVar11 = local_370;
        uVar23 = *(uint *)&(pFVar7->PreviousModulePaths).field_0x28;
        if (uVar31 != uVar23) {
          puVar27 = *(undefined1 **)&(pFVar7->PreviousModulePaths).field_0x20;
          if (puVar27 == (undefined1 *)0x0) {
            puVar27 = puVar3;
          }
          uVar31 = -1 << ((byte)uVar31 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar19 * 4);
          while (uVar31 == 0) {
            lVar17 = (longlong)iVar19;
            uVar32 = uVar32 + 0x20;
            iVar19 = iVar19 + 1;
            uVar31 = uVar23;
            if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
            goto LAB_14a287770;
            uVar31 = *(uint *)(puVar27 + lVar17 * 4 + 4);
          }
          uVar24 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
          lVar17 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_1f4 = (int)lVar17;
          uVar31 = local_1f4 + -1 + uVar32;
          if ((int)uVar23 < (int)uVar31) {
            uVar31 = uVar23;
          }
        }
LAB_14a287770:
        while( true ) {
          pTVar9 = local_1c0;
          if (*(int *)&local_1c0->field_0x8 - *(int *)&local_1c0->field_0x34 != (int)uStack_198) {
            local_388[6] = 0;
            `TSparseArray<TSparseSetElement<TTuple<FRigHierarchyModulePath,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_388 + 6);
          }
          if (((TStack_1b8.CurrentBitIndex == uVar31) &&
              (TStack_1b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
             (pTVar9 == pTVar4)) break;
          lVar17 = (longlong)TStack_1b8.CurrentBitIndex * 0x50 + *(longlong *)pTVar9;
          if (*(FName *)(lVar17 + 0x40) == pFVar11->PreviousName) {
            *(FName *)(lVar17 + 0x40) = pFVar11->Name;
          }
          TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
        }
        local_388[7] = 1;
        Notify(this,local_388 + 7,pFVar11);
        FVar12 = local_378;
        uVar31 = (uint)local_2c8;
        if (uVar31 != 0xffffffff) {
          pFVar7 = this->Model;
          if ((int)uVar31 < (pFVar7->SelectedModuleNames).ArrayNum) {
            uVar22 = ~uVar31 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            FVar12 = (FName)(*pcVar8)();
            return FVar12;
          }
          local_388[8] = 0xc;
          *(FName *)((pFVar7->SelectedModuleNames).AllocatorInstance.Data +
                    (longlong)(int)uVar31 * 8) = FVar12;
          Notify(this,local_388 + 8,pFVar11);
        }
        *param_1 = local_378;
        if (local_348.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_348.AllocatorInstance.Data);
        }
      }
      else {
        if (1 < (byte)LogControlRig._0_1_) {
          FText::ToString(&local_228);
          ::FName::ToString(param_2,&local_170);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
          if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
        }
        param_1->ComparisonIndex = 0;
        param_1->Number = 0;
      }
      if (local_228.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
      }
    }
  }
  return (FName)param_1;
}

// ReorderModule @ 14a2878e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UModularRigController::ReorderModule
          (UModularRigController *this,FName *param_1,int param_2,bool param_3)

{
  FModularRigModel *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  FRigModuleReference *this_00;
  FRigModuleReference *pFVar8;
  TArray<FRigModuleReference_*,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  TLess<void> local_res8;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 local_c7;
  EModularRigNotification local_c6 [6];
  ForAnyElementType local_c0;
  undefined8 local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  FRigModuleReference *local_90;
  <lambda_1> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  this_00 = FModularRigModel::FindModule(this->Model,param_1);
  local_90 = this_00;
  if (this_00 == (FRigModuleReference *)0x0) {
    if (1 < (byte)LogControlRig._0_1_) {
      ::FName::ToString(param_1,&local_78);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  pFVar8 = FRigModuleReference::GetParentModule(this_00);
  if (pFVar8 == (FRigModuleReference *)0x0) {
    pTVar9 = &this->Model->RootModules;
    if ((TArray<FRigModuleReference_*,TSizedDefaultAllocator<32>_> *)&local_c0 != pTVar9) {
      iVar19 = (this->Model->RootModules).ArrayNum;
      pFVar14 = (pTVar9->AllocatorInstance).Data;
      local_b8 = CONCAT44(local_b8._4_4_,iVar19);
      if (iVar19 == 0) {
        iVar13 = 0;
        if (local_b8._4_4_ == 0) goto LAB_14a287a7d;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,local_b8._4_4_,&local_c0,0,(int *)((longlong)&local_b8 + 4));
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar19,local_b8._4_4_,&local_c0,iVar19,(int *)((longlong)&local_b8 + 4));
LAB_14a287a67:
        memcpy(local_c0.Data,pFVar14,(longlong)iVar19 << 3);
      }
    }
LAB_14a287a7a:
    iVar13 = (int)local_b8;
  }
  else {
    if ((TArray<FRigModuleReference_*,TSizedDefaultAllocator<32>_> *)&local_c0 ==
        &pFVar8->CachedChildren) goto LAB_14a287a7a;
    iVar19 = (pFVar8->CachedChildren).ArrayNum;
    pFVar14 = (pFVar8->CachedChildren).AllocatorInstance.Data;
    local_b8 = CONCAT44(local_b8._4_4_,iVar19);
    if ((iVar19 != 0) || (iVar13 = 0, local_b8._4_4_ != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar19,local_b8._4_4_,&local_c0,iVar19,(int *)((longlong)&local_b8 + 4));
      if (iVar19 != 0) goto LAB_14a287a67;
      goto LAB_14a287a7a;
    }
  }
LAB_14a287a7d:
  if (iVar13 == 1) {
    if (1 < (byte)LogControlRig._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
LAB_14a2882f5:
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if ((-1 < param_2) && (param_2 < iVar13)) {
      for (FVar16.Data = local_c0.Data; FVar16.Data != local_c0.Data + (longlong)iVar13 * 8;
          FVar16.Data = FVar16.Data + 8) {
        if (*(FRigModuleReference **)FVar16.Data == this_00) {
          uVar17 = (longlong)FVar16.Data - (longlong)local_c0.Data >> 3;
          iVar19 = (int)uVar17;
          if (iVar19 != param_2) goto LAB_14a287b13;
          if ((byte)LogControlRig._0_1_ < 2) goto LAB_14a2882ff;
          ::FName::ToString(param_1,&local_58);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
          local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
          goto LAB_14a2882f5;
        }
      }
      uVar17 = 0xffffffff;
      iVar19 = -1;
LAB_14a287b13:
      iVar10 = 0;
      local_d8.Data = (FScriptContainerElement *)0x0;
      local_d0 = 0;
      pFVar1 = this->Model;
      iVar13 = (pFVar1->Modules).ArrayNum;
      pFVar14 = (pFVar1->Modules).AllocatorInstance.Data;
      pFVar20 = pFVar14 + (longlong)iVar13 * 0x2d0;
      while( true ) {
        if ((pFVar1->Modules).ArrayNum != iVar13) {
          local_c8 = 0;
          `TCheckedPointerIterator<FRigModuleReference,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_c8);
          iVar10 = (int)local_d0;
        }
        if (pFVar14 == pFVar20) break;
        iVar6 = iVar10;
        if ((local_d8.Data <= pFVar14) && (pFVar14 < local_d8.Data + (longlong)local_d0._4_4_ * 8))
        {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar6 = (int)local_d0;
        }
        if (iVar6 == local_d0._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_d8,(int *)((longlong)&local_d0 + 4));
        }
        iVar10 = iVar6 + 1;
        local_d0 = CONCAT44(local_d0._4_4_,iVar10);
        lVar12 = *(longlong *)pFVar14;
        pFVar14 = pFVar14 + 0x2d0;
        *(longlong *)(local_d8.Data + (longlong)iVar6 * 8) = lVar12;
      }
      iVar13 = (int)local_b8;
      uVar11 = (ulonglong)(int)local_b8;
      local_b0.Data = (FScriptContainerElement *)0x0;
      local_a8 = 0;
      pFVar14 = local_c0.Data + uVar11 * 8;
      FVar16.Data = local_c0.Data;
      while( true ) {
        if ((int)uVar11 != iVar13) {
          local_c7 = 0;
          `TCheckedPointerIterator<FRigModuleReference_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_c7);
        }
        if (FVar16.Data == pFVar14) break;
                    /* WARNING: Load size is inaccurate */
        pFVar20 = *FVar16.Data;
        if (((local_b0.Data <= pFVar20) && (pFVar20 < local_b0.Data + (longlong)local_a8._4_4_ * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if ((int)local_a8 == local_a8._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_b0,(int *)((longlong)&local_a8 + 4));
          local_a8 = CONCAT44(local_a8._4_4_,iVar10);
        }
        lVar12 = (longlong)(int)local_a8;
        FVar16.Data = FVar16.Data + 8;
        local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + 1);
        *(undefined8 *)(local_b0.Data + lVar12 * 8) = *(undefined8 *)pFVar20;
        uVar11 = local_b8 & 0xffffffff;
      }
      if (param_2 < iVar19) {
        lVar12 = (longlong)iVar19 * 8;
        do {
          iVar19 = iVar19 + -1;
          uVar15 = (uint)uVar17;
          if ((((int)uVar15 < 0) || (iVar19 < 0)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0xce6,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if ((((int)local_a8 <= (int)uVar15) || ((int)local_a8 <= (int)(uVar15 - 1))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0xce7,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (uVar15 != uVar15 - 1) {
            pFVar14 = local_b0.Data + lVar12;
            uVar2 = *(undefined8 *)pFVar14;
            *(undefined8 *)pFVar14 = *(undefined8 *)(pFVar14 + -8);
            *(undefined8 *)(pFVar14 + -8) = uVar2;
          }
          uVar18 = 0;
          if ((int)(uVar15 - 1) < (int)local_a8) {
            uVar18 = -uVar15 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (local_d8.Data != local_d8.Data + (longlong)(int)local_d0 * 8) {
            FVar16.Data = local_d8.Data;
            do {
              if (*(longlong *)FVar16.Data == *(longlong *)(local_b0.Data + lVar12 + -8)) {
                iVar13 = (int)((longlong)FVar16.Data - (longlong)local_d8.Data >> 3);
                goto LAB_14a287e47;
              }
              FVar16.Data = FVar16.Data + 8;
            } while (FVar16.Data != local_d8.Data + (longlong)(int)local_d0 * 8);
          }
          iVar13 = -1;
LAB_14a287e47:
          uVar18 = 0;
          if ((int)uVar15 < (int)local_a8) {
            uVar18 = ~uVar15 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (local_d8.Data != local_d8.Data + (longlong)(int)local_d0 * 8) {
            FVar16.Data = local_d8.Data;
            do {
              if (*(longlong *)FVar16.Data == *(longlong *)(local_b0.Data + lVar12)) {
                iVar10 = (int)((longlong)FVar16.Data - (longlong)local_d8.Data >> 3);
                if ((iVar10 < 0) || (iVar13 < 0)) goto LAB_14a287ec3;
                goto LAB_14a287f12;
              }
              FVar16.Data = FVar16.Data + 8;
            } while (FVar16.Data != local_d8.Data + (longlong)(int)local_d0 * 8);
          }
          iVar10 = -1;
LAB_14a287ec3:
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0xce6,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
LAB_14a287f12:
          if ((((int)local_d0 <= iVar10) || ((int)local_d0 <= iVar13)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0xce7,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (iVar10 != iVar13) {
            uVar2 = *(undefined8 *)(local_d8.Data + (longlong)iVar10 * 8);
            *(undefined8 *)(local_d8.Data + (longlong)iVar10 * 8) =
                 *(undefined8 *)(local_d8.Data + (longlong)iVar13 * 8);
            *(undefined8 *)(local_d8.Data + (longlong)iVar13 * 8) = uVar2;
          }
          uVar17 = (ulonglong)(uVar15 - 1);
          lVar12 = lVar12 + -8;
        } while (param_2 < (int)(uVar15 - 1));
      }
      iVar19 = (int)uVar17;
      if (iVar19 < param_2) {
        lVar12 = (longlong)iVar19 * 8;
        do {
          iVar19 = iVar19 + 1;
          uVar15 = (uint)uVar17;
          if ((((int)uVar15 < 0) || (iVar19 < 0)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0xce6,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if ((((int)local_a8 <= (int)uVar15) || ((int)local_a8 <= (int)(uVar15 + 1))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0xce7,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          uVar18 = uVar15 + 1;
          if (uVar15 != uVar18) {
            pFVar14 = local_b0.Data + lVar12;
            uVar2 = *(undefined8 *)pFVar14;
            *(undefined8 *)pFVar14 = *(undefined8 *)(pFVar14 + 8);
            *(undefined8 *)(pFVar14 + 8) = uVar2;
          }
          uVar7 = 0;
          if ((int)uVar18 < (int)local_a8) {
            uVar7 = ~uVar18 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (local_d8.Data != local_d8.Data + (longlong)(int)local_d0 * 8) {
            FVar16.Data = local_d8.Data;
            do {
              if (*(longlong *)FVar16.Data == *(longlong *)(local_b0.Data + lVar12 + 8)) {
                iVar13 = (int)((longlong)FVar16.Data - (longlong)local_d8.Data >> 3);
                goto LAB_14a288097;
              }
              FVar16.Data = FVar16.Data + 8;
            } while (FVar16.Data != local_d8.Data + (longlong)(int)local_d0 * 8);
          }
          iVar13 = -1;
LAB_14a288097:
          uVar18 = 0;
          if ((int)uVar15 < (int)local_a8) {
            uVar18 = ~uVar15 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (local_d8.Data != local_d8.Data + (longlong)(int)local_d0 * 8) {
            FVar16.Data = local_d8.Data;
            do {
              if (*(longlong *)FVar16.Data == *(longlong *)(local_b0.Data + lVar12)) {
                iVar10 = (int)((longlong)FVar16.Data - (longlong)local_d8.Data >> 3);
                if ((iVar10 < 0) || (iVar13 < 0)) goto LAB_14a288113;
                goto LAB_14a288162;
              }
              FVar16.Data = FVar16.Data + 8;
            } while (FVar16.Data != local_d8.Data + (longlong)(int)local_d0 * 8);
          }
          iVar10 = -1;
LAB_14a288113:
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0xce6,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
LAB_14a288162:
          if ((((int)local_d0 <= iVar10) || ((int)local_d0 <= iVar13)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0xce7,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (iVar10 != iVar13) {
            uVar2 = *(undefined8 *)(local_d8.Data + (longlong)iVar10 * 8);
            *(undefined8 *)(local_d8.Data + (longlong)iVar10 * 8) =
                 *(undefined8 *)(local_d8.Data + (longlong)iVar13 * 8);
            *(undefined8 *)(local_d8.Data + (longlong)iVar13 * 8) = uVar2;
          }
          uVar17 = (ulonglong)(uVar15 + 1);
          lVar12 = lVar12 + 8;
        } while ((int)(uVar15 + 1) < param_2);
      }
      FVar16.Data = local_d8.Data;
      lVar12 = (longlong)(int)local_d0;
      local_a0.Data = (FScriptContainerElement *)0x0;
      local_98._0_4_ = (int)local_d0;
      if ((int)local_d0 == 0) {
        local_88.AllModuleNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.AllModuleNames.ArrayMax = 0;
        local_88.AllModuleNames.ArrayNum = (int)local_d0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,(int)local_d0,0,&local_a0,(int)local_d0,(int *)((longlong)&local_98 + 4));
        memcpy(local_a0.Data,FVar16.Data,lVar12 << 3);
        local_88.AllModuleNames.AllocatorInstance.Data = local_a0.Data;
        local_88.AllModuleNames.ArrayMax = local_98._4_4_;
        local_88.AllModuleNames.ArrayNum = (int)local_98;
      }
      local_res8 = SUB81(this,0);
      local_a0.Data = (FScriptContainerElement *)0x0;
      local_98 = 0;
      AlgoImpl::
      IntroSortInternal<FRigModuleReference,int,_UModularRigController::ReorderModule_::__l2::<lambda_1>,TLess<void>_>
                ((FRigModuleReference *)(this->Model->Modules).AllocatorInstance.Data,
                 (this->Model->Modules).ArrayNum,&local_88,local_res8);
      if (local_a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data);
      }
      FModularRigModel::UpdateCachedChildren(this->Model);
      local_c6[0] = ModuleReordered;
      Notify(this,local_c6,local_90);
      bVar4 = true;
      if (local_b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data);
      }
      if (local_d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data);
      }
      goto LAB_14a288301;
    }
    if (1 < (byte)LogControlRig._0_1_) {
      ::FName::ToString(param_1,&local_48);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      goto LAB_14a2882f5;
    }
  }
LAB_14a2882ff:
  bVar4 = false;
LAB_14a288301:
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  return bVar4;
}

// ReparentModule @ 14a288340

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UModularRigController::ReparentModule
          (UModularRigController *this,FName *param_1,FName *param_2,bool param_3)

{
  FRigModuleReference *pFVar1;
  FRigModuleReference *pFVar2;
  FName FVar3;
  EModularRigNotification local_res8 [8];
  FString local_18;
  
  pFVar1 = FModularRigModel::FindModule(this->Model,param_1);
  if (pFVar1 == (FRigModuleReference *)0x0) {
    if (1 < (byte)LogControlRig._0_1_) {
      ::FName::ToString(param_1,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return false;
      }
    }
  }
  else {
    pFVar2 = FModularRigModel::FindModule(this->Model,param_2);
    if (pFVar1->ParentModuleName != *param_2) {
      pFVar1->PreviousParentName = pFVar1->ParentModuleName;
      FVar3.ComparisonIndex.Value = 0;
      FVar3.Number = 0;
      if (pFVar2 != (FRigModuleReference *)0x0) {
        FVar3 = pFVar2->Name;
      }
      pFVar1->ParentModuleName = FVar3;
      FModularRigModel::UpdateCachedChildren(this->Model);
      local_res8[0] = ModuleReparented;
      Notify(this,local_res8,pFVar1);
      return true;
    }
  }
  return false;
}

// ResetConfigValueInModule @ 14a289360

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UModularRigController::ResetConfigValueInModule
          (UModularRigController *this,FName *param_1,FString *param_2,bool param_3,bool param_4)

{
  FControlRigOverrideContainer *this_00;
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FRigModuleReference *pFVar8;
  UClass *pUVar9;
  FProperty *pFVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  FControlRigOverrideValue *this_01;
  FControlRigOverrideValue *pFVar13;
  undefined1 local_e8;
  EModularRigNotification local_e7 [7];
  ForAnyElementType local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  TOptional<FString>_u_0 local_c8;
  void *local_b8;
  undefined4 local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  FPropertyInfo *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  uint local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar8 = FModularRigModel::FindModule(this->Model,param_1);
  if (pFVar8 == (FRigModuleReference *)0x0) {
    if (1 < (byte)LogControlRig._0_1_) {
      ::FName::ToString(param_1,&local_58);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        return false;
      }
    }
    return false;
  }
  pUVar9 = TSoftClassPtr<UControlRig>::Get(&pFVar8->Class);
  if (pUVar9 == (UClass *)0x0) {
    if ((byte)LogControlRig._0_1_ < 2) {
      return false;
    }
    ::FName::ToString(param_1,&local_48);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
    if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return false;
    }
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
    return false;
  }
  if ((param_2->Data).ArrayNum < 2) {
    if ((byte)LogControlRig._0_1_ < 2) {
      return false;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
    return false;
  }
  pUVar9 = TSoftClassPtr<UControlRig>::Get(&pFVar8->Class);
  if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar9);
  }
  pUVar2 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
  local_a8 = 0;
  local_c8.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_c8.TypedValue.Data.ArrayNum = 0;
  local_c8.TypedValue.Data.ArrayMax = -1;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_ac = -1;
  if (pUVar2 != (UObject *)0x0) {
    local_a8 = *(undefined8 *)&pUVar2->field_0x18;
  }
  if (((int)local_a8 == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_a0 = 0;
  local_98 = (FPropertyInfo *)0x0;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = 0;
  if ((pUVar2 != (UObject *)0x0) &&
     (bVar4 = FControlRigOverrideValue::SetPropertiesFromPath
                        ((FControlRigOverrideValue *)&local_c8.TypedValue,param_2,
                         *(UStruct **)&pUVar2->field_0x10), bVar4)) {
    FControlRigOverrideValue::SetFromSubject
              ((FControlRigOverrideValue *)&local_c8.TypedValue,pUVar2,(UStruct *)0x0);
  }
  if ((((local_c8.TypedValue.Data.ArrayMax != -1) && (local_ac != -1)) && ((int)local_80 != 0)) &&
     ((local_88 != (void *)0x0 &&
      (pFVar10 = FControlRigOverrideValue::GetLeafProperty
                           ((FControlRigOverrideValue *)&local_c8.TypedValue),
      pFVar10 != (FProperty *)0x0)))) {
    pFVar10 = FControlRigOverrideValue::GetLeafProperty
                        ((FControlRigOverrideValue *)&local_c8.TypedValue);
    if ((pFVar10 == (FProperty *)0x0) ||
       (((int)local_80 != pFVar10->ElementSize * pFVar10->ArrayDim ||
        (uVar6 = FControlRigOverrideValue::GetPropertyHash
                           ((FControlRigOverrideValue *)&local_c8.TypedValue), uVar6 != local_78))))
    {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if (param_3) {
        ::FString::ConcatFC(&local_38,param_2,L"->");
        this_00 = &pFVar8->ConfigOverrides;
        iVar1 = (pFVar8->ConfigOverrides).Values.ArrayNum;
        this_01 = (FControlRigOverrideValue *)(this_00->Values).AllocatorInstance.Data;
        local_e0.Data = (FScriptContainerElement *)0x0;
        pFVar13 = this_01 + iVar1;
        local_d8 = 0;
        do {
          if ((pFVar8->ConfigOverrides).Values.ArrayNum != iVar1) {
            local_e8 = 0;
            `TCheckedPointerIterator<FControlRigOverrideValue,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_e8);
          }
          if (this_01 == pFVar13) {
            iVar1 = (int)local_d8;
            pFVar11 = local_e0.Data + (longlong)(int)local_d8 * 0x10;
            FVar12.Data = local_e0.Data;
            while( true ) {
              if ((int)local_d8 != iVar1) {
                `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_d0);
              }
              if (FVar12.Data == pFVar11) break;
              iVar7 = FControlRigOverrideContainer::GetIndex
                                (this_00,(FString *)FVar12.Data,&pFVar8->Name);
              if ((-1 < iVar7) && (iVar7 < (pFVar8->ConfigOverrides).Values.ArrayNum)) {
                TArray<FControlRigOverrideValue,TSizedDefaultAllocator<32>_>::RemoveAt
                          (&this_00->Values,iVar7,Default);
                FControlRigOverrideContainer::RebuildLookup(this_00);
                TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                         *)&(pFVar8->ConfigOverrides).ContainsParentPathCache);
                TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                         *)&(pFVar8->ConfigOverrides).ContainsChildPathCache);
              }
              FVar12.Data = FVar12.Data + 0x10;
            }
            DestructItems<FString,int>((FString *)local_e0.Data,(int)local_d8);
            if (local_e0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Data);
            }
            local_e7[0] = ModuleConfigValueChanged;
            Notify(this,local_e7,pFVar8);
            bVar4 = true;
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
            goto LAB_14a28984b;
          }
          pFVar11 = (FScriptContainerElement *)FControlRigOverrideValue::GetPath(this_01);
          iVar7 = (param_2->Data).ArrayNum;
          if (iVar7 == *(int *)(pFVar11 + 8)) {
            if (1 < iVar7) {
              iVar7 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                                 *(wchar_t **)pFVar11);
              bVar4 = iVar7 == 0;
              goto LAB_14a28966d;
            }
LAB_14a289687:
            if ((local_e0.Data <= pFVar11) &&
               ((pFVar11 < local_e0.Data + (longlong)local_d8._4_4_ * 0x10 &&
                (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar4)))) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            iVar7 = (int)local_d8;
            if ((int)local_d8 == local_d8._4_4_) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_e0,(int *)((longlong)&local_d8 + 4));
            }
            local_d8 = CONCAT44(local_d8._4_4_,iVar7 + 1);
            ::FString::FString((FString *)(local_e0.Data + (longlong)iVar7 * 0x10),
                               (FString *)pFVar11);
          }
          else {
            bVar4 = *(int *)(pFVar11 + 8) + iVar7 == 1;
LAB_14a28966d:
            if ((bVar4) ||
               (bVar4 = FControlRigOverrideContainer::IsChildPathOf((FString *)pFVar11,param_2),
               bVar4)) goto LAB_14a289687;
          }
          this_01 = this_01 + 1;
        } while( true );
      }
      SetConfigValueInModule(this,param_1,(FControlRigOverrideValue *)&local_c8.TypedValue,param_4);
      bVar4 = true;
      goto LAB_14a28984b;
    }
  }
  if (1 < (byte)LogControlRig._0_1_) {
    FSoftObjectPath::ToString((FSoftObjectPath *)&(pFVar8->Class).SoftObjectPtr.field_0x8,&local_68)
    ;
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = false;
LAB_14a28984b:
  FControlRigOverrideValue::Reset((FControlRigOverrideValue *)&local_c8.TypedValue);
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  DestructItems<FControlRigOverrideValue::FPropertyInfo,int>(local_98,(int)local_90);
  if (local_98 != (FPropertyInfo *)0x0) {
    FMemory::Free(local_98);
  }
  if ((local_ac != -1) && (local_b8 != (void *)0x0)) {
    FMemory::Free(local_b8);
  }
  if (local_c8.TypedValue.Data.ArrayMax != -1) {
    if (local_c8.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8.TypedValue.Data.AllocatorInstance.Data);
      return bVar4;
    }
    return bVar4;
  }
  return bVar4;
}

// SanitizeName @ 14a28d2c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl UModularRigController::SanitizeName(FRigName *param_1,bool param_2)

{
  TOptional<FString> *pTVar1;
  int *piVar2;
  wint_t _C;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  bool bVar13;
  FString local_38;
  
  pFVar7 = FRigName::GetName(param_1);
  uVar10 = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  lVar8 = (longlong)local_38.Data.ArrayNum;
  pFVar9 = (pFVar7->Data).AllocatorInstance.Data;
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,pFVar9,lVar8 * 2);
    iVar5 = local_38.Data.ArrayNum;
  }
  bVar13 = false;
  uVar12 = uVar10;
  while( true ) {
    iVar6 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    iVar11 = (int)uVar12;
    if (iVar6 <= iVar11) break;
    if ((((iVar11 < 0) || (iVar5 == 0)) || (iVar5 + -1 <= iVar11)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar9 = local_38.Data.AllocatorInstance.Data + uVar10;
    iVar5 = iswalpha(*(wint_t *)pFVar9);
    if (((((iVar5 == 0) && (_C = *(wint_t *)pFVar9, _C != 0x5f)) &&
         ((1 < (ushort)(_C - 0x2d) && ((_C != 0x7c && (iVar5 = iswdigit(_C), iVar5 == 0)))))) &&
        ((iVar11 < 1 || (*(wint_t *)pFVar9 != 0x20)))) &&
       ((!param_2 || (*(wint_t *)pFVar9 != 0x2f)))) {
      *(wint_t *)pFVar9 = 0x5f;
      bVar13 = true;
    }
    uVar12 = (ulonglong)(iVar11 + 1);
    uVar10 = uVar10 + 2;
    iVar5 = local_38.Data.ArrayNum;
  }
  if (iVar6 < 0x65) {
    if (!bVar13) goto LAB_14a28d52f;
  }
  else {
    iVar11 = iVar5 + -0x65;
    if (iVar5 == 0) {
      iVar11 = -100;
    }
    if (iVar6 - iVar11 < iVar6) {
      iVar6 = iVar6 - iVar11;
    }
    iVar5 = 0;
    if (0 < iVar6) {
      iVar5 = iVar6;
    }
    ::FString::RemoveAt(&local_38,iVar5,iVar11,Default);
    iVar5 = local_38.Data.ArrayNum;
  }
  pTVar1 = &param_1->NameString;
  if (*(int *)((longlong)&(param_1->NameString).field0_0x0 + 0xc) != -1) {
    iVar6 = *(int *)((longlong)&(param_1->NameString).field0_0x0 + 8);
    if (iVar6 == iVar5) {
      if (iVar6 < 2) goto LAB_14a28d52f;
      iVar6 = wcscmp((wchar_t *)(pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar13 = iVar6 == 0;
    }
    else {
      bVar13 = iVar6 + iVar5 == 1;
    }
    if (bVar13) goto LAB_14a28d52f;
  }
  if ((param_1->Name).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    (param_1->Name).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
    (param_1->Name).field0_0x0.TypedValue.Number = 0;
  }
  if (&local_38 != (FString *)pTVar1) {
    pFVar9 = (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
      iVar5 = local_38.Data.ArrayNum;
    }
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    piVar2 = (int *)((longlong)&(param_1->NameString).field0_0x0 + 0xc);
    (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&(param_1->NameString).field0_0x0 + 8) = iVar5;
    if (iVar5 == 0) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,(ForAnyElementType *)pTVar1,iVar5,piVar2);
      memcpy((pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data,_Src.Data,
             (longlong)iVar5 * 2);
    }
    if ((*piVar2 == -1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           ), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
LAB_14a28d52f:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// SelectModule @ 14a28d600

bool __thiscall
UModularRigController::SelectModule(UModularRigController *this,FName *param_1,bool param_2)

{
  int *piVar1;
  FModularRigModel *pFVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FRigModuleReference *pFVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  FName *pFVar9;
  EModularRigNotification local_res18 [16];
  
  pFVar2 = this->Model;
  pFVar9 = (FName *)(pFVar2->SelectedModuleNames).AllocatorInstance.Data;
  pFVar3 = pFVar9 + (pFVar2->SelectedModuleNames).ArrayNum;
  if (pFVar9 != pFVar3) {
    do {
      if (*pFVar9 == *param_1) {
        bVar5 = true;
        goto LAB_14a28d645;
      }
      pFVar9 = pFVar9 + 1;
    } while (pFVar9 != pFVar3);
  }
  bVar5 = false;
LAB_14a28d645:
  if (bVar5 != param_2) {
    pFVar8 = FModularRigModel::FindModule(pFVar2,param_1);
    if (pFVar8 != (FRigModuleReference *)0x0) {
      pFVar2 = this->Model;
      this_00 = &pFVar2->SelectedModuleNames;
      if (param_2) {
        pFVar3 = (FName *)(this_00->AllocatorInstance).Data;
        if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (pFVar2->SelectedModuleNames).ArrayMax)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        iVar7 = (pFVar2->SelectedModuleNames).ArrayNum;
        piVar1 = &(pFVar2->SelectedModuleNames).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&this_00->AllocatorInstance,piVar1);
        }
        (pFVar2->SelectedModuleNames).ArrayNum = iVar7 + 1;
        *(FName *)((this_00->AllocatorInstance).Data + (longlong)iVar7 * 8) = *param_1;
      }
      else {
        TArray<FName,TSizedDefaultAllocator<32>_>::Remove(this_00,param_1);
      }
      local_res18[0] = !param_2 + ModuleSelected;
      Notify(this,local_res18,pFVar8);
      return true;
    }
  }
  return false;
}

// SetConfigValueInModule @ 14a28ff80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UModularRigController::SetConfigValueInModule
          (UModularRigController *this,FName *param_1,FName *param_2,FString *param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FRigModuleReference *pFVar4;
  UClass *pUVar5;
  FString *pFVar6;
  longlong *plVar7;
  undefined1 auStack_138 [32];
  TOptional<FString>_u_0 local_118;
  void *local_108;
  undefined4 local_100;
  int local_fc;
  FName local_f8;
  undefined4 local_f0;
  FPropertyInfo *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  undefined1 local_88 [40];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_138;
  pFVar4 = FModularRigModel::FindModule(this->Model,param_1);
  if (pFVar4 == (FRigModuleReference *)0x0) {
    if ((byte)LogControlRig._0_1_ < 2) {
      return false;
    }
    ::FName::ToString(param_1,&local_b8);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
  }
  else {
    pUVar5 = TSoftClassPtr<UControlRig>::Get(&pFVar4->Class);
    if (pUVar5 != (UClass *)0x0) {
      local_88._0_8_ = 0;
      local_60 = (longlong *)0x0;
      pUVar5 = TSoftClassPtr<UControlRig>::Get(&pFVar4->Class);
      pFVar6 = ::FName::ToString(param_2,&local_98);
      local_118.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      local_118.TypedValue.Data.ArrayNum = 0;
      local_118.TypedValue.Data.ArrayMax = -1;
      local_108 = (void *)0x0;
      local_100 = 0;
      local_fc = -1;
      local_f8 = pFVar4->Name;
      if ((local_f8.ComparisonIndex.Value.Value == 0xffffffff) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_f0 = 0;
      local_e8 = (FPropertyInfo *)0x0;
      local_e0 = 0;
      local_d8 = (void *)0x0;
      local_d0 = 0;
      local_c8 = 0;
      bVar2 = FControlRigOverrideValue::SetPropertiesFromPath
                        ((FControlRigOverrideValue *)&local_118.TypedValue,pFVar6,(UStruct *)pUVar5)
      ;
      if (bVar2) {
        FControlRigOverrideValue::SetFromString
                  ((FControlRigOverrideValue *)&local_118.TypedValue,param_3,
                   (TFunction<void___cdecl(wchar_t_const_*,ELogVerbosity::Type)> *)local_88);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88._0_8_ != 0) {
        plVar7 = (longlong *)(local_88 + 0x10);
        if (local_60 != (longlong *)0x0) {
          plVar7 = local_60;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      bVar2 = SetConfigValueInModule
                        (this,param_1,(FControlRigOverrideValue *)&local_118.TypedValue,param_4);
      FControlRigOverrideValue::Reset((FControlRigOverrideValue *)&local_118.TypedValue);
      if (local_d8 != (void *)0x0) {
        FMemory::Free(local_d8);
      }
      DestructItems<FControlRigOverrideValue::FPropertyInfo,int>(local_e8,(int)local_e0);
      if (local_e8 != (FPropertyInfo *)0x0) {
        FMemory::Free(local_e8);
      }
      if ((local_fc != -1) && (local_108 != (void *)0x0)) {
        FMemory::Free(local_108);
      }
      if (local_118.TypedValue.Data.ArrayMax != -1) {
        if (local_118.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_118.TypedValue.Data.AllocatorInstance.Data);
          return bVar2;
        }
        return bVar2;
      }
      return bVar2;
    }
    if ((byte)LogControlRig._0_1_ < 2) {
      return false;
    }
    ::FName::ToString(param_1,&local_a8);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
    local_b8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return false;
}

// SetConfigValueInModule @ 14a290200

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UModularRigController::SetConfigValueInModule
          (UModularRigController *this,FName *param_1,FControlRigOverrideValue *param_2,bool param_3
          )

{
  FControlRigOverrideContainer *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  FRigModuleReference *pFVar6;
  UClass *pUVar7;
  FString *pFVar8;
  FString *pFVar9;
  FProperty *pFVar10;
  UClass *pUVar11;
  FScriptContainerElement *pFVar12;
  FControlRigOverrideValue *pFVar13;
  FName *pFVar14;
  ForAnyElementType FVar15;
  FControlRigOverrideValue *pFVar16;
  undefined1 local_b8;
  undefined1 local_b7;
  EModularRigNotification local_b6 [6];
  ForAnyElementType local_b0;
  undefined8 local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  pFVar6 = FModularRigModel::FindModule(this->Model,param_1);
  if (pFVar6 == (FRigModuleReference *)0x0) {
    if ((byte)LogControlRig._0_1_ < 2) {
      return false;
    }
    ::FName::ToString(param_1,&local_70);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
  }
  else {
    pUVar7 = TSoftClassPtr<UControlRig>::Get(&pFVar6->Class);
    if (pUVar7 == (UClass *)0x0) {
      if ((byte)LogControlRig._0_1_ < 2) {
        return false;
      }
      ::FName::ToString(param_1,&local_60);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      local_70.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
    }
    else {
      bVar2 = FControlRigOverrideValue::IsValid(param_2);
      if (!bVar2) {
        if ((byte)LogControlRig._0_1_ < 2) {
          return false;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        return false;
      }
      pFVar8 = FControlRigOverrideValue::GetPath(param_2);
      pFVar14 = &InvalidName;
      if ((param_2->SubjectKey).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
        pFVar14 = (FName *)&param_2->SubjectKey;
      }
      pFVar9 = FControlRigOverrideValue::GetPath(param_2);
      this_00 = &pFVar6->ConfigOverrides;
      bVar2 = FControlRigOverrideContainer::ContainsParentPathOf(this_00,pFVar9,pFVar14);
      if (bVar2) {
        if ((byte)LogControlRig._0_1_ < 2) {
          return false;
        }
        FSoftObjectPath::ToString
                  ((FSoftObjectPath *)&(pFVar6->Class).SoftObjectPtr.field_0x8,&local_90);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        local_70.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
      }
      else {
        pFVar10 = FControlRigOverrideValue::GetRootProperty(param_2);
        pUVar7 = (UClass *)FField::GetOwnerUObject((FField *)pFVar10);
        pUVar11 = TSoftClassPtr<UControlRig>::Get(&pFVar6->Class);
        if (pUVar7 == pUVar11) {
          pFVar10 = FControlRigOverrideValue::GetRootProperty(param_2);
          if ((pFVar10->PropertyFlags & CPF_BlueprintReadOnly) == CPF_None) {
            iVar5 = (pFVar6->ConfigOverrides).Values.ArrayNum;
            pFVar13 = (FControlRigOverrideValue *)(this_00->Values).AllocatorInstance.Data;
            local_b0.Data = (FScriptContainerElement *)0x0;
            pFVar16 = pFVar13 + iVar5;
            local_a8 = 0;
            while( true ) {
              if ((pFVar6->ConfigOverrides).Values.ArrayNum != iVar5) {
                local_b8 = 0;
                `TCheckedPointerIterator<FControlRigOverrideValue,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_b8);
              }
              if (pFVar13 == pFVar16) break;
              pFVar12 = (FScriptContainerElement *)FControlRigOverrideValue::GetPath(pFVar13);
              bVar2 = FControlRigOverrideContainer::IsChildPathOf((FString *)pFVar12,pFVar8);
              if (bVar2) {
                if (((local_b0.Data <= pFVar12) &&
                    (pFVar12 < local_b0.Data + (longlong)local_a8._4_4_ * 0x10)) &&
                   (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar2)) {
                  pcVar1 = (code *)swi(3);
                  uVar3 = (*pcVar1)();
                  return (bool)uVar3;
                }
                iVar4 = (int)local_a8;
                if ((int)local_a8 == local_a8._4_4_) {
                  iVar4 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x810,&local_b0,(int *)((longlong)&local_a8 + 4));
                }
                local_a8 = CONCAT44(local_a8._4_4_,iVar4 + 1);
                ::FString::FString((FString *)(local_b0.Data + (longlong)iVar4 * 0x10),
                                   (FString *)pFVar12);
              }
              pFVar13 = pFVar13 + 1;
            }
            iVar5 = (int)local_a8;
            pFVar12 = local_b0.Data + (longlong)(int)local_a8 * 0x10;
            FVar15.Data = local_b0.Data;
            while( true ) {
              if ((int)local_a8 != iVar5) {
                local_b7 = 0;
                `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_b7);
              }
              if (FVar15.Data == pFVar12) break;
              iVar4 = FControlRigOverrideContainer::GetIndex
                                (this_00,(FString *)FVar15.Data,&pFVar6->Name);
              if ((-1 < iVar4) && (iVar4 < (pFVar6->ConfigOverrides).Values.ArrayNum)) {
                TArray<FControlRigOverrideValue,TSizedDefaultAllocator<32>_>::RemoveAt
                          (&this_00->Values,iVar4,Default);
                FControlRigOverrideContainer::RebuildLookup(this_00);
                TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                         *)&(pFVar6->ConfigOverrides).ContainsParentPathCache);
                TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                         *)&(pFVar6->ConfigOverrides).ContainsChildPathCache);
              }
              FVar15.Data = FVar15.Data + 0x10;
            }
            DestructItems<FString,int>((FString *)local_b0.Data,(int)local_a8);
            if (local_b0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data);
            }
            pFVar8 = FControlRigOverrideValue::GetPath(param_2);
            if (1 < (pFVar8->Data).ArrayNum) {
              pFVar14 = &InvalidName;
              if ((param_2->SubjectKey).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
                pFVar14 = (FName *)&param_2->SubjectKey;
              }
              iVar5 = FControlRigOverrideContainer::GetIndex(this_00,pFVar8,pFVar14);
              if ((-1 < iVar5) && (iVar5 < (pFVar6->ConfigOverrides).Values.ArrayNum)) {
                if ((iVar5 < 0) &&
                   (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar2)) {
                  pcVar1 = (code *)swi(3);
                  uVar3 = (*pcVar1)();
                  return (bool)uVar3;
                }
                pFVar13 = (FControlRigOverrideValue *)
                          ((this_00->Values).AllocatorInstance.Data + (longlong)iVar5 * 0x58);
                if (pFVar13 != (FControlRigOverrideValue *)0x0) {
                  FControlRigOverrideValue::operator=(pFVar13,param_2);
                  goto LAB_14a290753;
                }
              }
              iVar5 = FControlRigOverrideContainer::Add(this_00,param_2);
              if ((((-1 < iVar5) && (iVar5 < (pFVar6->ConfigOverrides).Values.ArrayNum)) &&
                  (iVar5 < 0)) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
            }
LAB_14a290753:
            local_b6[0] = ModuleConfigValueChanged;
            Notify(this,local_b6,pFVar6);
            return true;
          }
          if ((byte)LogControlRig._0_1_ < 2) {
            return false;
          }
          ::FName::ToString(param_1,&local_50);
          pFVar10 = FControlRigOverrideValue::GetRootProperty(param_2);
          bVar2 = IsThisNotNull(pFVar10,"FField::GetName");
          if (bVar2) {
            ::FName::ToString((FName *)&pFVar10->_padding_,&local_a0);
          }
          else {
            ::FString::FString(&local_a0,L"None");
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
          local_70.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            local_70.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
          }
        }
        else {
          if ((byte)LogControlRig._0_1_ < 2) {
            return false;
          }
          FSoftObjectPath::ToString
                    ((FSoftObjectPath *)&(pFVar6->Class).SoftObjectPtr.field_0x8,&local_80);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
          local_70.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
        }
      }
    }
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return false;
}

// SetModuleSelection @ 14a294840

bool __thiscall
UModularRigController::SetModuleSelection
          (UModularRigController *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  int iVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  FName *pFVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  local_38.Data = (FScriptContainerElement *)0x0;
  bVar5 = false;
  bVar10 = false;
  local_30 = (this->Model->SelectedModuleNames).ArrayNum;
  lVar8 = (longlong)local_30;
  _Src = (this->Model->SelectedModuleNames).AllocatorInstance.Data;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,_Src,lVar8 << 3);
  }
  iVar3 = local_30;
  pFVar1 = (FName *)(local_38.Data + (longlong)local_30 * 8);
  FVar7.Data = local_38.Data;
  do {
    if (local_30 != iVar3) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    iVar2 = param_1->ArrayNum;
    pFVar9 = (FName *)(param_1->AllocatorInstance).Data;
    if ((FName *)FVar7.Data == pFVar1) {
      pFVar1 = pFVar9 + iVar2;
      do {
        if (param_1->ArrayNum != iVar2) {
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar9 == pFVar1) {
          if ((FName *)local_38.Data != (FName *)0x0) {
            FMemory::Free(local_38.Data);
          }
          return bVar10;
        }
        if ((FName *)local_38.Data != (FName *)(local_38.Data + (longlong)local_30 * 8)) {
          FVar7.Data = local_38.Data;
          do {
            if (*(FName *)FVar7.Data == *pFVar9) goto LAB_14a2949a7;
            FVar7.Data = FVar7.Data + 8;
          } while ((FName *)FVar7.Data != (FName *)(local_38.Data + (longlong)local_30 * 8));
        }
        bVar5 = SelectModule(this,pFVar9,true);
        if (bVar5) {
          bVar10 = true;
        }
LAB_14a2949a7:
        pFVar9 = pFVar9 + 1;
      } while( true );
    }
    pFVar6 = pFVar9 + iVar2;
    if (pFVar9 != pFVar6) {
      do {
        if (*pFVar9 == *(FName *)FVar7.Data) goto LAB_14a29493e;
        pFVar9 = pFVar9 + 1;
      } while (pFVar9 != pFVar6);
    }
    bVar4 = SelectModule(this,(FName *)FVar7.Data,false);
    bVar10 = bVar5;
    if (bVar4) {
      bVar5 = true;
      bVar10 = true;
    }
LAB_14a29493e:
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// StaticRegisterNativesUModularRigController @ 14a298150

void __cdecl UModularRigController::StaticRegisterNativesUModularRigController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1e;
  local_18.DataPtr = Z_Construct_UClass_UModularRigController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SwapModuleClass @ 14a29b5f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UModularRigController::SwapModuleClass
          (UModularRigController *this,FName *param_1,TSubclassOf<UControlRig> param_2,bool param_3)

{
  FRigElementKey *pFVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  FModularRigModel *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FRigModuleReference *pFVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UControlRig *pUVar13;
  FRigModuleSettings *pFVar14;
  UClass *pUVar15;
  FName *pFVar16;
  FRigModuleConnector *pFVar17;
  FRigElementKey *pFVar18;
  FRigElementKey *pFVar19;
  ForAnyElementType FVar20;
  FModularRigConnections *pFVar21;
  FRigElementKey *pFVar22;
  uint *puVar23;
  undefined1 local_res8 [8];
  FName *local_res10;
  undefined1 local_148;
  EModularRigNotification local_147 [7];
  ForAnyElementType local_140;
  undefined8 local_138;
  undefined1 local_130 [8];
  FModularRigConnections *local_128;
  FRigElementKey *local_120;
  UClass *local_118;
  TArray<FRigModuleConnector,TSizedDefaultAllocator<32>_> *local_110;
  FRigModuleReference *local_108;
  FText local_100;
  FRigHierarchyModulePath local_e8;
  undefined4 local_9f;
  undefined2 local_9b;
  undefined1 local_99;
  code *local_98 [2];
  undefined **local_88;
  UModularRigController *local_80;
  undefined1 local_78;
  undefined4 local_77;
  undefined2 local_73;
  undefined1 local_71;
  undefined8 local_70;
  FString local_68;
  FTopLevelAssetPath local_58;
  FString local_48;
  
  local_res10 = param_1;
  pFVar10 = FModularRigModel::FindModule(this->Model,param_1);
  local_108 = pFVar10;
  if (pFVar10 == (FRigModuleReference *)0x0) {
    if (1 < (byte)LogControlRig._0_1_) {
      ::FName::ToString(param_1,&local_68);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    lVar4 = *(longlong *)param_2.Class.field0_0x0;
    if ((lVar4 != 0) && (pUVar11 = UControlRig::StaticClass(), pUVar11 != (UClass *)0x0)) {
      iVar2 = (int)pUVar11->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar11->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((bVar7) && (lVar4 = *(longlong *)param_2.Class.field0_0x0, lVar4 != 0)) {
        pUVar12 = UControlRig::StaticClass();
        pUVar11 = (UClass *)0x0;
        pUVar15 = pUVar11;
        if (pUVar12 != (UClass *)0x0) {
          iVar2 = (int)pUVar12->_padding_;
          if ((*(int *)(lVar4 + 0x38) < iVar2) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar12->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (bVar7) {
            pUVar15 = *(UClass **)param_2.Class.field0_0x0;
          }
        }
        pUVar13 = UClass::GetDefaultObject<UControlRig>(pUVar15);
        pFVar14 = UControlRig::GetRigModuleSettings(pUVar13);
        if ((pFVar14->Identifier).Name.Data.ArrayNum < 2) {
          if ((byte)LogControlRig._0_1_ < 2) {
            return false;
          }
          lVar4 = *(longlong *)param_2.Class.field0_0x0;
          if ((lVar4 != 0) && (pUVar15 = UControlRig::StaticClass(), pUVar15 != (UClass *)0x0)) {
            iVar2 = (int)pUVar15->_padding_;
            if ((*(int *)(lVar4 + 0x38) < iVar2) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar15->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (bVar7) {
              pUVar11 = *(UClass **)param_2.Class.field0_0x0;
            }
          }
          UStruct::GetStructPathName((UStruct *)pUVar11,&local_58);
          FTopLevelAssetPath::ToString(&local_58,&local_48);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
          if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return false;
          }
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
          return false;
        }
        lVar4 = *(longlong *)param_2.Class.field0_0x0;
        pUVar15 = pUVar11;
        if ((lVar4 != 0) && (pUVar12 = UControlRig::StaticClass(), pUVar12 != (UClass *)0x0)) {
          iVar2 = (int)pUVar12->_padding_;
          if ((*(int *)(lVar4 + 0x38) < iVar2) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar12->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (bVar7) {
            pUVar15 = *(UClass **)param_2.Class.field0_0x0;
          }
        }
        pUVar12 = TSoftClassPtr<UControlRig>::Get(&pFVar10->Class);
        if (pUVar12 != pUVar15) {
          lVar4 = *(longlong *)param_2.Class.field0_0x0;
          local_118 = pUVar11;
          if ((lVar4 != 0) && (pUVar15 = UControlRig::StaticClass(), pUVar15 != (UClass *)0x0)) {
            iVar2 = (int)pUVar15->_padding_;
            if ((*(int *)(lVar4 + 0x38) < iVar2) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar15->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (bVar7) {
              local_118 = *(UClass **)param_2.Class.field0_0x0;
            }
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_118 != (UClass *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)local_118);
          }
          FSoftObjectPtr::operator=(&(pFVar10->Class).SoftObjectPtr,(FObjectPtr)&local_118);
          pFVar5 = this->Model;
          lVar4 = *(longlong *)param_2.Class.field0_0x0;
          pFVar21 = &pFVar5->Connections;
          local_128 = pFVar21;
          if ((lVar4 != 0) && (pUVar15 = UControlRig::StaticClass(), pUVar15 != (UClass *)0x0)) {
            iVar2 = (int)pUVar15->_padding_;
            if ((*(int *)(lVar4 + 0x38) < iVar2) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar15->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (bVar7) {
              pUVar11 = *(UClass **)param_2.Class.field0_0x0;
            }
          }
          pUVar13 = UClass::GetDefaultObject<UControlRig>(pUVar11);
          pFVar14 = UControlRig::GetRigModuleSettings(pUVar13);
          local_140.Data = (FScriptContainerElement *)0x0;
          local_110 = &pFVar14->ExposedConnectors;
          local_138 = 0;
          pFVar22 = (FRigElementKey *)(pFVar21->ConnectionList).AllocatorInstance.Data;
          iVar2 = (pFVar5->Connections).ConnectionList.ArrayNum;
          puVar23 = &pFVar22[2].Name.Number;
          pFVar19 = (FRigElementKey *)((longlong)pFVar22 + (longlong)iVar2 * 0x28);
          local_120 = pFVar19;
          while( true ) {
            if ((pFVar21->ConnectionList).ArrayNum != iVar2) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<FModularRigSingleConnection_const_,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(local_res8);
            }
            if (pFVar22 == pFVar19) break;
            FRigHierarchyModulePath::FRigHierarchyModulePath(&local_e8,(FName *)(puVar23 + -7));
            if ((*param_1 != (FName)0x0) &&
               (pFVar16 = FRigHierarchyModulePath::GetModuleFName(&local_e8), *pFVar16 == *param_1))
            {
              pFVar17 = TArray<FRigModuleConnector,TSizedDefaultAllocator<32>_>::
                        FindByPredicate<_UModularRigController::SwapModuleClass_::__l77::<lambda_1>_>
                                  (local_110,&local_e8);
              if (pFVar17 == (FRigModuleConnector *)0x0) {
                if (((local_140.Data <= pFVar22) &&
                    (pFVar22 < (FRigElementKey *)(local_140.Data + (longlong)local_138._4_4_ * 0xc))
                    ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  uVar8 = (*pcVar6)();
                  return (bool)uVar8;
                }
                iVar9 = (int)local_138;
                if ((int)local_138 == local_138._4_4_) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x40c,&local_140,(int *)((longlong)&local_138 + 4));
                }
                local_138 = CONCAT44(local_138._4_4_,iVar9 + 1);
                *(undefined8 *)(local_140.Data + (longlong)iVar9 * 0xc) = *(undefined8 *)pFVar22;
                *(uint *)(local_140.Data + (longlong)iVar9 * 0xc + 8) = (pFVar22->Name).Number;
              }
              else {
                uVar3 = *puVar23;
                pFVar18 = *(FRigElementKey **)(puVar23 + -2);
                pFVar1 = pFVar18 + (int)uVar3;
                while( true ) {
                  if (*puVar23 != uVar3) {
                    local_148 = 0;
                    `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&local_148);
                  }
                  pFVar19 = local_120;
                  pFVar21 = local_128;
                  param_1 = local_res10;
                  if (pFVar18 == pFVar1) goto LAB_14a29ba9b;
                  FText::FText(&local_100);
                  bVar7 = CanConnectConnectorToElement(this,pFVar22,pFVar18,&local_100);
                  if (!bVar7) break;
                  if (local_100.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
                  }
                  pFVar18 = pFVar18 + 1;
                }
                if (((local_140.Data <= pFVar22) &&
                    (pFVar22 < (FRigElementKey *)(local_140.Data + (longlong)local_138._4_4_ * 0xc))
                    ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  uVar8 = (*pcVar6)();
                  return (bool)uVar8;
                }
                iVar9 = (int)local_138;
                if ((int)local_138 == local_138._4_4_) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x40c,&local_140,(int *)((longlong)&local_138 + 4));
                }
                local_138 = CONCAT44(local_138._4_4_,iVar9 + 1);
                *(undefined8 *)(local_140.Data + (longlong)iVar9 * 0xc) = *(undefined8 *)pFVar22;
                *(uint *)(local_140.Data + (longlong)iVar9 * 0xc + 8) = (pFVar22->Name).Number;
                pFVar19 = local_120;
                pFVar21 = local_128;
                param_1 = local_res10;
                if (local_100.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
                  pFVar19 = local_120;
                  pFVar21 = local_128;
                  param_1 = local_res10;
                }
              }
            }
LAB_14a29ba9b:
            if ((local_e8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
               (local_e8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                != (FScriptContainerElement *)0x0)) {
              FMemory::Free((void *)local_e8.CachedElementNameString.field0_0x0.TypedValue.Data.
                                    AllocatorInstance.Data);
            }
            if ((local_e8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
               (local_e8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0)) {
              FMemory::Free((void *)local_e8.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                    AllocatorInstance.Data);
            }
            if (local_e8.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.ModulePath.Data.AllocatorInstance.Data);
            }
            pFVar22 = (FRigElementKey *)&pFVar22[3].Name;
            puVar23 = puVar23 + 10;
          }
          iVar2 = (int)local_138;
          pFVar19 = (FRigElementKey *)(local_140.Data + (longlong)(int)local_138 * 0xc);
          FVar20.Data = local_140.Data;
          while( true ) {
            if ((int)local_138 != iVar2) {
              `TCheckedPointerIterator<FRigElementKey,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_130);
            }
            if ((FRigElementKey *)FVar20.Data == pFVar19) break;
            DisconnectConnector_Internal
                      (this,(FRigElementKey *)FVar20.Data,false,
                       (TMap<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
                        *)0x0,param_3);
            FVar20.Data = FVar20.Data + 0xc;
          }
          if ((FRigElementKey *)local_140.Data != (FRigElementKey *)0x0) {
            FMemory::Free(local_140.Data);
          }
          local_88 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::`2'::<lambda_1>,0,0>
                      ::_vftable_;
          local_77 = local_9f;
          local_73 = local_9b;
          local_71 = local_99;
          local_98[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`UModularRigController::RefreshModuleVariables'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
                        ::Call;
          local_70 = 0;
          local_78 = 1;
          local_80 = this;
          FModularRigModel::ForEachModule
                    (this->Model,(TFunction<bool___cdecl(FRigModuleReference_const_*)> *)local_98,
                     true);
          local_147[0] = ModuleClassChanged;
          Notify(this,local_147,local_108);
        }
        return true;
      }
    }
    if (1 < (byte)LogControlRig._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
    }
  }
  return false;
}

// SwapModulesOfClass @ 14a29bc80

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UModularRigController::SwapModulesOfClass
          (UModularRigController *this,TSubclassOf<UControlRig> param_1,
          TSubclassOf<UControlRig> param_2,bool param_3)

{
  FModularRigModel *this_00;
  undefined7 uStack_3f;
  code *local_38 [5];
  undefined8 *local_10;
  
  this_00 = this->Model;
  local_38[0] = (code *)0x0;
  local_10 = FMemory::Malloc(0x28,8);
  *local_10 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UModularRigController::SwapModulesOfClass'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_10[1] = this;
  ((TObjectPtr<UClass> *)(local_10 + 2))->field0_0x0 =
       (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  ((TObjectPtr<UClass> *)(local_10 + 3))->field0_0x0 =
       (TObjectPtr<UClass>_u_0)param_2.Class.field0_0x0;
  local_10[4] = CONCAT71(uStack_3f,param_3);
  if (local_10 + 1 != (undefined8 *)0x0) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UModularRigController::SwapModulesOfClass'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
                  ::Call;
  }
  FModularRigModel::ForEachModule
            (this_00,(TFunction<bool___cdecl(FRigModuleReference_const_*)> *)local_38,true);
  return true;
}

// UnBindModuleVariable @ 14a29ee70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UModularRigController::UnBindModuleVariable
          (UModularRigController *this,FName *param_1,FName *param_2,bool param_3)

{
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FRigModuleReference *pFVar5;
  undefined1 *puVar6;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  pFVar5 = FModularRigModel::FindModule(this->Model,param_1);
  if (pFVar5 == (FRigModuleReference *)0x0) {
    if ((byte)LogControlRig._0_1_ < 2) {
      return false;
    }
    ::FName::ToString(param_1,&local_38);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
    local_28.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  }
  else {
    FVar1 = *param_2;
    uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    if (*(int *)&(pFVar5->Bindings).field_0x8 != *(int *)&(pFVar5->Bindings).field_0x34) {
      puVar6 = *(undefined1 **)&(pFVar5->Bindings).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(pFVar5->Bindings).field_0x38;
      }
      iVar4 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(pFVar5->Bindings).field_0x48 - 1U & FVar1.Number + uVar3)
                                * 4);
      if (iVar4 != -1) {
        lVar2 = *(longlong *)&(pFVar5->Bindings).field_0x0;
        do {
          if (*(FName *)((longlong)iVar4 * 0x20 + lVar2) == FVar1) {
            FVar1 = *param_2;
            local_res8 = FVar1;
            uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
            TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                                 *)&pFVar5->Bindings,FVar1.Number + uVar3,&local_res8);
            local_res8.ComparisonIndex.Value._0_1_ = 6;
            Notify(this,(EModularRigNotification *)&local_res8,pFVar5);
            return true;
          }
          iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar2);
        } while (iVar4 != -1);
      }
    }
    if ((byte)LogControlRig._0_1_ < 2) {
      return false;
    }
    ::FName::ToString(param_1,&local_28);
    ::FName::ToString(param_2,&local_38);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// execAddModule @ 14a2aeaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a2aeda1) */
/* WARNING: Removing unreachable block (ram,0x00014a2aeda6) */
/* WARNING: Removing unreachable block (ram,0x00014a2aedae) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UModularRigController::execAddModule(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  FModularRigModel *pFVar4;
  FRigModuleReference *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  UControlRig *this;
  FRigModuleSettings *pFVar11;
  FRigName *this_00;
  FName *pFVar12;
  FRigModuleReference *pFVar13;
  uint uVar14;
  UClass *this_01;
  longlong lVar15;
  uint uVar16;
  FName *pFVar17;
  TOptional<FName>_u_0 *pTVar18;
  undefined1 auStackY_3f8 [32];
  EModularRigNotification local_3a8 [4];
  undefined4 local_3a4;
  TOptional<FName>_u_0 local_3a0;
  FName local_398;
  TOptional<FName>_u_0 local_390;
  void *local_388;
  undefined4 local_380;
  int local_37c;
  UClass *local_378;
  undefined8 *local_370;
  UClass *local_368;
  FName local_360;
  FTopLevelAssetPath local_358;
  FString local_348;
  FRigName local_338;
  FRigModuleReference local_318;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  local_3a0 = (TOptional<FName>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_370 = param_3;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3a0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3a0);
  }
  local_378 = (UClass *)0x0;
  pTVar18 = &local_3a0;
  if ((TOptional<FName>_u_0 *)param_2->MostRecentPropertyAddress != (TOptional<FName>_u_0 *)0x0) {
    pTVar18 = (TOptional<FName>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_378,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_378);
  }
  local_398.ComparisonIndex.Value = 0;
  local_398.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_398,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_398);
  }
  local_3a4 = 0;
  pFVar17 = &local_398;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar17 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3a4,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3a4);
  }
  this_01 = local_378;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (local_378 != (UClass *)0x0) goto LAB_14a2aec1e;
  }
  else if (local_378 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)local_378);
LAB_14a2aec1e:
    pUVar10 = UControlRig::StaticClass();
    if (pUVar10 != (UClass *)0x0) {
      iVar9 = (int)pUVar10->_padding_;
      if (((int)this_01->_padding_ < iVar9) ||
         ((longlong *)*(undefined1 **)(this_01->_padding_ + (longlong)iVar9 * 8) !=
          &pUVar10->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        pUVar10 = UControlRig::StaticClass();
        if (pUVar10 == (UClass *)0x0) {
LAB_14a2aec85:
          pUVar10 = (UClass *)0x0;
        }
        else {
          iVar9 = (int)pUVar10->_padding_;
          if (((int)this_01->_padding_ < iVar9) ||
             ((longlong *)*(undefined1 **)(this_01->_padding_ + (longlong)iVar9 * 8) !=
              &pUVar10->_padding_)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          pUVar10 = this_01;
          if (!bVar8) goto LAB_14a2aec85;
        }
        this = UClass::GetDefaultObject<UControlRig>(pUVar10);
        pFVar11 = UControlRig::GetRigModuleSettings(this);
        if (1 < (pFVar11->Identifier).Name.Data.ArrayNum) {
          local_390 = (TOptional<FName>_u_0)0xffffffff;
          local_388 = (void *)0x0;
          local_380 = 0;
          local_37c = -1;
          if (((pTVar18 != &local_390) &&
              (local_390 = (TOptional<FName>_u_0)*(TOptional<FName>_u_0 *)&pTVar18->TypedValue,
              local_390.TypedValue.ComparisonIndex.Value.Value == 0xffffffff)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x171,
                                 L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          this_00 = GetSafeNewName((UModularRigController *)param_1,&local_338,
                                   (FRigName *)&local_390.TypedValue,(FRigModuleReference *)0x0);
          pFVar12 = FRigName::GetFName(this_00);
          local_360 = *pFVar12;
          if ((local_338.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
             (local_338.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_338.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                                  Data);
          }
          if ((local_37c != -1) && (local_388 != (void *)0x0)) {
            FMemory::Free(local_388);
          }
          pFVar4 = *(FModularRigModel **)(param_1 + 1);
          local_368 = this_01;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          pFVar13 = FRigModuleReference::FRigModuleReference
                              (&local_318,&local_360,(TSubclassOf<UControlRig>)&local_368,pFVar17,
                               pFVar4);
          pFVar5 = (FRigModuleReference *)(pFVar4->Modules).AllocatorInstance.Data;
          if (((pFVar5 <= pFVar13) && (pFVar13 < pFVar5 + (pFVar4->Modules).ArrayMax)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar9 = (pFVar4->Modules).ArrayNum;
          piVar1 = &(pFVar4->Modules).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x2d0,8,(ForAnyElementType *)pFVar4,piVar1);
          }
          (pFVar4->Modules).ArrayNum = iVar9 + 1;
          FRigModuleReference::FRigModuleReference
                    ((FRigModuleReference *)
                     ((pFVar4->Modules).AllocatorInstance.Data + (longlong)iVar9 * 0x2d0),pFVar13);
          FRigModuleReference::~FRigModuleReference(&local_318);
          plVar6 = *(longlong **)(param_1 + 1);
          uVar14 = (int)plVar6[1] - 1;
          uVar16 = 0;
          if ((int)uVar14 < (int)plVar6[1]) {
            uVar16 = ~uVar14 >> 0x1f;
          }
          if ((uVar16 == 0) &&
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
          lVar15 = *plVar6 + (longlong)(int)plVar6[1] * 0x2d0;
          FModularRigModel::UpdateCachedChildren(*(FModularRigModel **)(param_1 + 1));
          local_3a8[0] = ModuleAdded;
          Notify((UModularRigController *)param_1,local_3a8,(FRigModuleReference *)(lVar15 + -0x2d0)
                );
          *local_370 = *(undefined8 *)(lVar15 + -0x2d0);
          return;
        }
        if ((byte)LogControlRig._0_1_ < 2) goto LAB_14a2aef93;
        pUVar10 = UControlRig::StaticClass();
        if (pUVar10 == (UClass *)0x0) {
LAB_14a2aecda:
          this_01 = (UClass *)0x0;
        }
        else {
          iVar9 = (int)pUVar10->_padding_;
          if (((int)this_01->_padding_ < iVar9) ||
             ((longlong *)*(undefined1 **)(this_01->_padding_ + (longlong)iVar9 * 8) !=
              &pUVar10->_padding_)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (!bVar8) goto LAB_14a2aecda;
        }
        UStruct::GetStructPathName((UStruct *)this_01,&local_358);
        FTopLevelAssetPath::ToString(&local_358,&local_348);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_348.Data.AllocatorInstance.Data);
        }
        goto LAB_14a2aef93;
      }
    }
  }
  if (1 < (byte)LogControlRig._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
  }
LAB_14a2aef93:
  *local_370 = 0;
  return;
}

// execAddTargetToArrayConnector @ 14a2aefd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UModularRigController::execAddTargetToArrayConnector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FRigElementKey *pFVar2;
  FRigElementKey *pFVar3;
  bool bVar4;
  bool bVar5;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  FRigElementKey local_68;
  FRigElementKey local_58 [2];
  
  local_68.Type = None;
  local_68.Name.ComparisonIndex.Value = 0;
  local_68.Name.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_58[0].Type = None;
  local_58[0].Name.ComparisonIndex.Value = 0;
  local_58[0].Name.Number = 0;
  pFVar2 = &local_68;
  if ((FRigElementKey *)param_2->MostRecentPropertyAddress != (FRigElementKey *)0x0) {
    pFVar2 = (FRigElementKey *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  local_res10[0] = 0;
  pFVar3 = local_58;
  if ((FRigElementKey *)param_2->MostRecentPropertyAddress != (FRigElementKey *)0x0) {
    pFVar3 = (FRigElementKey *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar5 = local_res18[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar4 = AddTargetToArrayConnector
                    ((UModularRigController *)param_1,pFVar2,pFVar3,bVar4,bVar5,local_res20[0] != 0)
  ;
  *(bool *)param_3 = bVar4;
  return;
}

// execAutoConnectModules @ 14a2af1b0

void __cdecl
UModularRigController::execAutoConnectModules(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execAutoConnectSecondaryConnectors @ 14a2af2d0

void __cdecl
UModularRigController::execAutoConnectSecondaryConnectors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execBindModuleVariable @ 14a2af3f0

void __cdecl
UModularRigController::execBindModuleVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName *pFVar3;
  FName *pFVar4;
  int local_res10 [2];
  FName local_res18;
  FName local_res20;
  FString local_38;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar3 = &local_res18;
  if (pFVar4 != (FName *)0x0) {
    pFVar3 = pFVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pFVar4 = &local_res20;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = BindModuleVariable((UModularRigController *)param_1,pFVar3,pFVar4,&local_38,
                             local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execCanConnectConnectorToElement @ 14a2af5a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UModularRigController::execCanConnectConnectorToElement
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FRigElementKey *pFVar3;
  FRigElementKey *pFVar4;
  FText *pFVar5;
  FRigElementKey local_48;
  FRigElementKey local_38;
  FText local_28;
  
  local_48.Type = None;
  local_48.Name.ComparisonIndex.Value = 0;
  local_48.Name.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_38.Type = None;
  local_38.Name.ComparisonIndex.Value = 0;
  local_38.Name.Number = 0;
  pFVar3 = &local_48;
  if ((FRigElementKey *)param_2->MostRecentPropertyAddress != (FRigElementKey *)0x0) {
    pFVar3 = (FRigElementKey *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar4 = &local_38;
  if ((FRigElementKey *)param_2->MostRecentPropertyAddress != (FRigElementKey *)0x0) {
    pFVar4 = (FRigElementKey *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar5 = &local_28;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar5 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = CanConnectConnectorToElement((UModularRigController *)param_1,pFVar3,pFVar4,pFVar5);
  *(bool *)param_3 = bVar2;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execCanConnectConnectorToElements @ 14a2af720

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UModularRigController::execCanConnectConnectorToElements
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FRigElementKey *pFVar3;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar4;
  FText *pFVar5;
  FRigElementKey local_48;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_38;
  FText local_28;
  
  local_48.Type = None;
  local_48.Name.ComparisonIndex.Value = 0;
  local_48.Name.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  pFVar3 = &local_48;
  if ((FRigElementKey *)param_2->MostRecentPropertyAddress != (FRigElementKey *)0x0) {
    pFVar3 = (FRigElementKey *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar4 = &local_38;
  if ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar5 = &local_28;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar5 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = CanConnectConnectorToElements((UModularRigController *)param_1,pFVar3,pTVar4,pFVar5);
  *(bool *)param_3 = bVar2;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execConnectConnectorToElement @ 14a2afa20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UModularRigController::execConnectConnectorToElement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FRigElementKey *pFVar2;
  FRigElementKey *pFVar3;
  bool bVar4;
  bool bVar5;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  FRigElementKey local_68;
  FRigElementKey local_58 [2];
  
  local_68.Type = None;
  local_68.Name.ComparisonIndex.Value = 0;
  local_68.Name.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_58[0].Type = None;
  local_58[0].Name.ComparisonIndex.Value = 0;
  local_58[0].Name.Number = 0;
  pFVar2 = &local_68;
  if ((FRigElementKey *)param_2->MostRecentPropertyAddress != (FRigElementKey *)0x0) {
    pFVar2 = (FRigElementKey *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  local_res10[0] = 0;
  pFVar3 = local_58;
  if ((FRigElementKey *)param_2->MostRecentPropertyAddress != (FRigElementKey *)0x0) {
    pFVar3 = (FRigElementKey *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar5 = local_res18[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar4 = ConnectConnectorToElement
                    ((UModularRigController *)param_1,pFVar2,pFVar3,bVar4,bVar5,local_res20[0] != 0)
  ;
  *(bool *)param_3 = bVar4;
  return;
}

// execConnectConnectorToElements @ 14a2afc00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UModularRigController::execConnectConnectorToElements
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FRigElementKey *pFVar2;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  bool bVar5;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  FRigElementKey local_68;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_58;
  
  local_68.Type = None;
  local_68.Name.ComparisonIndex.Value = 0;
  local_68.Name.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  pFVar2 = &local_68;
  if ((FRigElementKey *)param_2->MostRecentPropertyAddress != (FRigElementKey *)0x0) {
    pFVar2 = (FRigElementKey *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  pTVar3 = &local_58;
  if ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar5 = local_res18[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar4 = ConnectConnectorToElements
                    ((UModularRigController *)param_1,pFVar2,pTVar3,bVar4,bVar5,local_res20[0] != 0)
  ;
  *(bool *)param_3 = bVar4;
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// execDeleteModule @ 14a2b0400

void __cdecl UModularRigController::execDeleteModule(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName *pFVar3;
  int local_res10 [2];
  FName local_res18;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  pFVar3 = &local_res18;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = DeleteModule((UModularRigController *)param_1,pFVar3,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execDeselectModule @ 14a2b04f0

void __cdecl
UModularRigController::execDeselectModule(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName *pFVar3;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SelectModule((UModularRigController *)param_1,pFVar3,false);
  *(bool *)param_3 = bVar2;
  return;
}

// execDisconnectConnector @ 14a2b05a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UModularRigController::execDisconnectConnector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FRigElementKey *pFVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res18 [4];
  FRigElementKey local_38;
  
  local_38.Type = None;
  local_38.Name.ComparisonIndex.Value = 0;
  local_38.Name.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  pFVar2 = &local_38;
  if ((FRigElementKey *)param_2->MostRecentPropertyAddress != (FRigElementKey *)0x0) {
    pFVar2 = (FRigElementKey *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = DisconnectConnector_Internal
                    ((UModularRigController *)param_1,pFVar2,bVar3,
                     (TMap<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
                      *)0x0,local_res18[0] != 0);
  *(bool *)param_3 = bVar3;
  return;
}

// execDisconnectCyclicConnectors @ 14a2b06f0

void __cdecl
UModularRigController::execDisconnectCyclicConnectors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  undefined1 local_18 [16];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
  }
  return;
}

// execExportModuleSettingsToString @ 14a2b0bc0

void __cdecl
UModularRigController::execExportModuleSettingsToString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  FString *pFVar2;
  longlong lVar3;
  void *local_38;
  undefined8 local_30;
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38 = (void *)0x0;
  local_30 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  _Src = local_38;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_30;
  local_28.ArrayNum = (int)local_30;
  if ((int)local_30 == 0) {
    local_28.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_30,0,&local_28.AllocatorInstance,(int)local_30,&local_28.ArrayMax);
    memcpy(local_28.AllocatorInstance.Data,_Src,lVar3 << 3);
  }
  pFVar2 = ExportModuleSettingsToString((UModularRigController *)param_1,&local_18,&local_28);
  if (param_3 != pFVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar2->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execGetAllModules @ 14a2b1200

void __cdecl
UModularRigController::execGetAllModules(UObject *param_1,FFrame *param_2,void *param_3)

{
  void *local_48;
  undefined8 local_40;
  code *local_38 [2];
  undefined **local_28;
  void **local_20;
  undefined8 local_10;
  
  local_48 = (void *)0x0;
  local_40 = 0;
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularRigController::GetAllModules'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_20 = &local_48;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularRigController::GetAllModules'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
                ::Call;
  FModularRigModel::ForEachModule
            (*(FModularRigModel **)(param_1 + 1),
             (TFunction<bool___cdecl(FRigModuleReference_const_*)> *)local_38,true);
  if (param_3 != &local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(void **)param_3 = local_48;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_40._4_4_;
    local_40 = 0;
    local_48 = (void *)0x0;
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execGetConnectorsForModule @ 14a2b14b0

void __cdecl
UModularRigController::execGetConnectorsForModule(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar2;
  FName local_res10;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetConnectorsForModule((UModularRigController *)param_1,&local_18,local_res10);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetModuleReference @ 14a2b3070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UModularRigController::execGetModuleReference(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FModularRigModel *this;
  FString *pFVar2;
  FRigModuleReference *pFVar3;
  FRigModuleReference *pFVar4;
  undefined1 auStack_338 [32];
  FName local_318;
  FName local_310;
  FString local_308;
  FRigModuleReference local_2f8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_318.ComparisonIndex.Value = 0;
  local_318.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_318,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_318);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_310 = local_318;
  if (local_318 != (FName)0x0) {
    this = *(FModularRigModel **)(param_1 + 1);
    pFVar3 = (FRigModuleReference *)(this->Modules).AllocatorInstance.Data;
    pFVar4 = pFVar3 + (this->Modules).ArrayNum;
    for (; pFVar3 != pFVar4; pFVar3 = pFVar3 + 1) {
      if (pFVar3->Name == local_318) {
        if (pFVar3 != (FRigModuleReference *)0x0) goto LAB_14a2b315f;
        break;
      }
    }
    pFVar2 = ::FName::ToString(&local_310,&local_308);
    pFVar3 = FModularRigModel::FindModuleByPath(this,pFVar2);
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
    if (pFVar3 != (FRigModuleReference *)0x0) {
LAB_14a2b315f:
      FRigModuleReference::FRigModuleReference(&local_2f8,pFVar3);
      goto LAB_14a2b3178;
    }
  }
  FRigModuleReference::FRigModuleReference(&local_2f8);
LAB_14a2b3178:
  FRigModuleReference::operator=(param_3,&local_2f8);
  FRigModuleReference::~FRigModuleReference(&local_2f8);
  return;
}

// execGetSelectedModules @ 14a2b3770

void __cdecl
UModularRigController::execGetSelectedModules(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18.Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)(*(longlong *)(param_1 + 1) + 0xf8);
  _Src = *(void **)(*(longlong *)(param_1 + 1) + 0xf0);
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 << 3);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execImportModuleSettingsFromString @ 14a2b3b00

void __cdecl
UModularRigController::execImportModuleSettingsFromString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *pvVar2;
  longlong lVar3;
  bool bVar4;
  int local_res10 [2];
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pvVar2 = local_68;
  bVar4 = local_res10[0] != 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_60;
  local_48.ArrayNum = (int)local_60;
  if ((int)local_60 == 0) {
    local_48.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_60,0,&local_48.AllocatorInstance,(int)local_60,&local_48.ArrayMax);
    memcpy(local_48.AllocatorInstance.Data,pvVar2,lVar3 << 3);
  }
  pvVar2 = local_58;
  lVar3 = (longlong)(int)local_50;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = (int)local_50;
  if ((int)local_50 == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,(ForAnyElementType *)&local_38,(int)local_50,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,pvVar2,lVar3 * 2);
  }
  bVar4 = ImportModuleSettingsFromString((UModularRigController *)param_1,&local_38,&local_48,bVar4)
  ;
  *(bool *)param_3 = bVar4;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execMirrorModule @ 14a2b3f50

void __cdecl UModularRigController::execMirrorModule(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FRigVMMirrorSettings *pFVar3;
  uchar *puVar4;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  FName local_res20;
  uchar local_58 [8];
  void *local_50;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  
  local_res18._0_1_ = '\0';
  local_res18._1_1_ = '\0';
  local_res18._2_6_ = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_58[0] = '\x01';
  local_58[1] = '\x03';
  local_50 = (void *)0x0;
  pFVar3 = (FRigVMMirrorSettings *)&local_res18;
  if ((FRigVMMirrorSettings *)param_2->MostRecentPropertyAddress != (FRigVMMirrorSettings *)0x0) {
    pFVar3 = (FRigVMMirrorSettings *)param_2->MostRecentPropertyAddress;
  }
  local_48 = 0;
  local_40 = (void *)0x0;
  local_38 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  local_res10[0] = 0;
  puVar4 = local_58;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2 = MirrorModule((UModularRigController *)param_1,&local_res20,pFVar3,SUB81(puVar4,0));
  *(undefined8 *)param_3 = *(undefined8 *)FVar2;
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// execRenameModule @ 14a2b44b0

void __cdecl UModularRigController::execRenameModule(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName *pFVar1;
  FProperty *pFVar2;
  FName FVar3;
  FName *pFVar4;
  uchar *puVar5;
  undefined4 local_res10 [2];
  FName local_res18;
  uchar local_res20 [8];
  FName local_38 [2];
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pFVar1 = (FName *)param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar4 = &local_res18;
  if (pFVar1 != (FName *)0x0) {
    pFVar4 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  puVar5 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = RenameModule((UModularRigController *)param_1,local_38,pFVar4,SUB81(puVar5,0));
  *(undefined8 *)param_3 = *(undefined8 *)FVar3;
  return;
}

// execReorderModule @ 14a2b4610

void __cdecl
UModularRigController::execReorderModule(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName *pFVar3;
  int local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  pFVar3 = &local_res20;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = ReorderModule((UModularRigController *)param_1,pFVar3,local_res18[0],local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execReparentModule @ 14a2b4740

void __cdecl
UModularRigController::execReparentModule(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName *pFVar3;
  FName *pFVar4;
  int local_res10 [2];
  FName local_res18;
  FName local_res20;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar3 = &local_res18;
  if (pFVar4 != (FName *)0x0) {
    pFVar3 = pFVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  pFVar4 = &local_res20;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = ReparentModule((UModularRigController *)param_1,pFVar3,pFVar4,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execResetConfigValueInModule @ 14a2b48a0

void __cdecl
UModularRigController::execResetConfigValueInModule(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  FString local_38;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pFVar2 = &local_res20;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar2 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = ResetConfigValueInModule
                    ((UModularRigController *)param_1,pFVar2,&local_38,bVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar3;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSelectModule @ 14a2b4bd0

void __cdecl UModularRigController::execSelectModule(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName *pFVar3;
  int local_res10 [2];
  FName local_res18;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  pFVar3 = &local_res18;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SelectModule((UModularRigController *)param_1,pFVar3,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetConfigValueInModule @ 14a2b50d0

void __cdecl
UModularRigController::execSetConfigValueInModule(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName *pFVar3;
  FName *pFVar4;
  int local_res10 [2];
  FName local_res18;
  FName local_res20;
  FString local_38;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar3 = &local_res18;
  if (pFVar4 != (FName *)0x0) {
    pFVar3 = pFVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pFVar4 = &local_res20;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetConfigValueInModule
                    ((UModularRigController *)param_1,pFVar3,pFVar4,&local_38,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetModuleSelection @ 14a2b7420

void __cdecl
UModularRigController::execSetModuleSelection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetModuleSelection((UModularRigController *)param_1,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSwapModuleClass @ 14a2b7bf0

void __cdecl
UModularRigController::execSwapModuleClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  bool bVar3;
  int local_res10 [2];
  FName local_res18;
  UObject *local_res20;
  UObject *local_38 [2];
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res20 = (UObject *)0x0;
  pFVar2 = &local_res18;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar2 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_38[0] = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  bVar3 = SwapModuleClass((UModularRigController *)param_1,pFVar2,(TSubclassOf<UControlRig>)local_38
                          ,bVar3);
  *(bool *)param_3 = bVar3;
  return;
}

// execSwapModulesOfClass @ 14a2b7d40

void __cdecl
UModularRigController::execSwapModulesOfClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FModularRigModel *this;
  bool bVar2;
  int local_res8 [2];
  UObject *local_res10;
  UObject *local_res18;
  UObject *local_res20;
  UObject *local_98;
  UObject *local_90;
  UObject **ppUStack_88;
  UObject **local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  code *local_68 [5];
  undefined8 *local_40;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98 = local_res10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  local_res20 = local_res18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  this = *(FModularRigModel **)(param_1 + 1);
  ppUStack_88 = &local_res20;
  local_80 = &local_98;
  local_68[0] = (code *)0x0;
  local_90 = param_1;
  uStack_78 = bVar2;
  local_40 = FMemory::Malloc(0x28,8);
  *local_40 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UModularRigController::SwapModulesOfClass'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_40[1] = local_90;
  local_40[2] = ppUStack_88;
  local_40[3] = local_80;
  local_40[4] = CONCAT71(uStack_77,uStack_78);
  if (local_40 + 1 != (undefined8 *)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UModularRigController::SwapModulesOfClass'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
                  ::Call;
  }
  FModularRigModel::ForEachModule
            (this,(TFunction<bool___cdecl(FRigModuleReference_const_*)> *)local_68,true);
  *(undefined1 *)param_3 = 1;
  return;
}

// execUnBindModuleVariable @ 14a2b7ef0

void __cdecl
UModularRigController::execUnBindModuleVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName *pFVar3;
  FName *pFVar4;
  int local_res10 [2];
  FName local_res18;
  FName local_res20;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar3 = &local_res18;
  if (pFVar4 != (FName *)0x0) {
    pFVar3 = pFVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  pFVar4 = &local_res20;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UnBindModuleVariable((UModularRigController *)param_1,pFVar3,pFVar4,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

