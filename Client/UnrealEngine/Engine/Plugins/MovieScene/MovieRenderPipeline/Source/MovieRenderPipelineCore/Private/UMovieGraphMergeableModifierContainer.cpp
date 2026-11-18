// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 10

// StaticClass @ 14dcf7450

UClass * __cdecl UMovieGraphMergeableModifierContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphMergeableModifierContainer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphMergeableModifierContainer",
               &Z_Registration_Info_UClass_UMovieGraphMergeableModifierContainer.InnerSingleton,
               StaticRegisterNativesUMovieGraphMergeableModifierContainer,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphMergeableModifierContainer>,
               InternalVTableHelperCtorCaller<UMovieGraphMergeableModifierContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphMergeableModifierContainer.InnerSingleton;
}

// UMovieGraphMergeableModifierContainer @ 14dd0aba0

UMovieGraphMergeableModifierContainer * __thiscall
UMovieGraphMergeableModifierContainer::UMovieGraphMergeableModifierContainer
          (UMovieGraphMergeableModifierContainer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphTraversableObject__;
  (this->Modifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).ArrayNum = 0;
  (this->Modifiers).ArrayMax = 0;
  return this;
}

// UMovieGraphMergeableModifierContainer @ 14dd0abe0

UMovieGraphMergeableModifierContainer * __thiscall
UMovieGraphMergeableModifierContainer::UMovieGraphMergeableModifierContainer
          (UMovieGraphMergeableModifierContainer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphTraversableObject__;
  (this->Modifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).ArrayNum = 0;
  (this->Modifiers).ArrayMax = 0;
  return this;
}

// ~UMovieGraphMergeableModifierContainer @ 14dd0db70

void __thiscall
UMovieGraphMergeableModifierContainer::~UMovieGraphMergeableModifierContainer
          (UMovieGraphMergeableModifierContainer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphTraversableObject__;
  pFVar1 = (this->Modifiers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieGraphTraversableObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetMergedProperties @ 14dd281b0

/* WARNING: Removing unreachable block (ram,0x00014dd28457) */
/* WARNING: Removing unreachable block (ram,0x00014dd28465) */

TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphMergeableModifierContainer::GetMergedProperties
          (UMovieGraphMergeableModifierContainer *this,
          TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FProperty *pFVar4;
  ForAnyElementType _Src;
  bool bVar5;
  int iVar6;
  FBoolProperty *pFVar7;
  TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 local_res10 [8];
  uint local_res18;
  FName local_res20;
  int *in_stack_ffffffffffffff28;
  FString local_b0;
  FString local_a0;
  FString local_90;
  TFieldIterator<FProperty> local_80;
  ForAnyElementType local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res18 = (uint)this->_padding_;
  uVar10 = (ulonglong)(int)local_res18;
  plVar13 = (longlong *)this->_padding_;
  plVar1 = plVar13 + uVar10;
  do {
    if ((int)this->_padding_ != (int)uVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphCollectionModifier>_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res10);
    }
    if (plVar13 == plVar1) {
      return __return_storage_ptr__;
    }
    local_80.Struct = *(UStruct **)(*plVar13 + 0x10);
    if (local_80.Struct == (UStruct *)0x0) {
      local_80.Field = (FField *)0x0;
    }
    else {
      local_80.Field = (local_80.Struct)->ChildProperties;
    }
    local_80.InterfaceIndex = -1;
    local_80.bIncludeSuper = true;
    local_80.bIncludeDeprecated = true;
    local_80.bIncludeInterface = false;
    TFieldIterator<FProperty>::IterateToNext(&local_80);
    pFVar4 = (FProperty *)local_80.Field;
    while (pFVar4 != (FProperty *)0x0) {
      local_80.Field = (FField *)pFVar4;
      pFVar7 = UMovieGraphConfig::FindOverridePropertyForRealProperty
                         (*(UClass **)(*plVar13 + 0x10),pFVar4);
      if (pFVar7 != (FBoolProperty *)0x0) {
        local_res20 = *(FName *)(*(longlong *)(*plVar13 + 0x10) + 0x18);
        ::FName::ToString(&local_res20,&local_90);
        bVar5 = IsThisNotNull(pFVar4,"FField::GetName");
        if (bVar5) {
          ::FName::ToString((FName *)&pFVar4->_padding_,&local_b0);
        }
        else {
          ::FString::FString(&local_b0,L"None");
        }
        ::FString::PrintfImpl(&local_a0,L"%s / %s");
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        _Src.Data = local_a0.Data.AllocatorInstance.Data;
        lVar12 = (longlong)local_a0.Data.ArrayNum;
        local_68.Data = (FScriptContainerElement *)0x0;
        local_60 = CONCAT44(local_60._4_4_,local_a0.Data.ArrayNum);
        if (local_a0.Data.ArrayNum == 0) {
          local_60 = 0;
        }
        else {
          in_stack_ffffffffffffff28 = (int *)((longlong)&local_60 + 4);
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_a0.Data.ArrayNum,0,&local_68,local_a0.Data.ArrayNum,
                     in_stack_ffffffffffffff28);
          memcpy(local_68.Data,_Src.Data,lVar12 * 2);
        }
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_58 = 0;
        local_50 = 0;
        if (((pFVar2 <= (FScriptContainerElement *)&local_68) &&
            (piVar11 = (int *)(longlong)__return_storage_ptr__->ArrayMax,
            (FScriptContainerElement *)&local_68 < pFVar2 + (longlong)piVar11 * 0x20)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), in_stack_ffffffffffffff28 = piVar11, bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
          __return_storage_ptr__->ArrayNum = iVar6 + 1;
        }
        else {
          __return_storage_ptr__->ArrayNum = iVar6 + 1;
        }
        pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x20;
        pFVar2 = pFVar9 + 0x10;
        *(undefined8 *)pFVar9 = 0;
        *(FScriptContainerElement **)pFVar9 = local_68.Data;
        *(undefined4 *)(pFVar9 + 8) = (undefined4)local_60;
        *(undefined4 *)(pFVar9 + 0xc) = local_60._4_4_;
        *(undefined8 *)pFVar2 = 0;
        *(undefined8 *)pFVar2 = local_58;
        *(undefined4 *)(pFVar9 + 0x18) = (undefined4)local_50;
        *(undefined4 *)(pFVar9 + 0x1c) = local_50._4_4_;
        local_50 = 0;
        local_58 = 0;
        local_60 = 0;
        local_68.Data = (FScriptContainerElement *)0x0;
        in_stack_ffffffffffffff28 =
             (int *)((ulonglong)in_stack_ffffffffffffff28 & 0xffffffff00000000);
        (**(code **)(pFVar4->_padding_ + 0xe0))
                  (pFVar4,pFVar2,*plVar13,1,0,0,in_stack_ffffffffffffff28,0);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
      }
      local_80.Field = (FField *)pFVar4->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_80);
      pFVar4 = (FProperty *)local_80.Field;
    }
    plVar13 = plVar13 + 1;
    uVar10 = (ulonglong)local_res18;
    local_80.Field = (FField *)0x0;
  } while( true );
}

// GetPrivateStaticClass @ 14dd2ca50

UClass * __cdecl UMovieGraphMergeableModifierContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphMergeableModifierContainer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphMergeableModifierContainer",
               &Z_Registration_Info_UClass_UMovieGraphMergeableModifierContainer.InnerSingleton,
               StaticRegisterNativesUMovieGraphMergeableModifierContainer,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphMergeableModifierContainer>,
               InternalVTableHelperCtorCaller<UMovieGraphMergeableModifierContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphMergeableModifierContainer.InnerSingleton;
}

// Merge @ 14dd362a0

void __thiscall
UMovieGraphMergeableModifierContainer::Merge
          (UMovieGraphMergeableModifierContainer *this,IMovieGraphTraversableObject *param_1)

{
  TObjectPtr<UMovieGraphCollectionModifier>_u_0 *pTVar1;
  TObjectPtr<UMovieGraphCollectionModifier>_u_0 *pTVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  UClass *pUVar8;
  TObjectPtr<UMovieGraphCollectionModifier>_u_0 *pTVar9;
  TObjectPtr<UMovieGraphCollectionModifier>_u_0 *pTVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if (param_1 != (IMovieGraphTraversableObject *)0x0) {
    lVar7 = (**(code **)((longlong)*param_1 + 8))(param_1);
    if (lVar7 != 0) {
      pUVar8 = StaticClass();
      iVar3 = (int)pUVar8->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar3 * 8)
          == &pUVar8->_padding_)) goto LAB_14dd36318;
    }
  }
  lVar7 = 0;
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("InSourceModifiers",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\Nodes\\MovieGraphModifierNode.cpp"
                     ,0xf,
                     L"UMovieGraphMergeableModifierContainer cannot merge with null or an object of another type."
                    );
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14dd36318:
  pTVar10 = (TObjectPtr<UMovieGraphCollectionModifier>_u_0 *)this->_padding_;
  iVar3 = (int)this->_padding_;
  pTVar1 = pTVar10 + iVar3;
  do {
    if ((int)this->_padding_ != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphCollectionModifier>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pTVar10 == pTVar1) {
      return;
    }
    pTVar9 = *(TObjectPtr<UMovieGraphCollectionModifier>_u_0 **)(lVar7 + 0x30);
    iVar4 = *(int *)(lVar7 + 0x38);
    pTVar2 = pTVar9 + iVar4;
    while( true ) {
      if (*(int *)(lVar7 + 0x38) != iVar4) {
        `TCheckedPointerIterator<TObjectPtr<UMovieGraphCollectionModifier>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pTVar9 == pTVar2) goto LAB_14dd36388;
      if (((pTVar10->DebugPtr != (UMovieGraphCollectionModifier *)0x0) &&
          (pTVar9->DebugPtr != (UMovieGraphCollectionModifier *)0x0)) &&
         (*(longlong *)((longlong)pTVar10->DebugPtr + 0x10) ==
          *(longlong *)((longlong)pTVar9->DebugPtr + 0x10))) break;
      pTVar9 = pTVar9 + 1;
    }
    MergeProperties((UMovieGraphMergeableModifierContainer *)&this[-1]._padding_,
                    (TObjectPtr<UMovieGraphCollectionModifier> *)&pTVar10->ObjectPtr,
                    (TObjectPtr<UMovieGraphCollectionModifier> *)&pTVar9->ObjectPtr);
LAB_14dd36388:
    pTVar10 = pTVar10 + 1;
  } while( true );
}

// MergeProperties @ 14dd36ce0

void __thiscall
UMovieGraphMergeableModifierContainer::MergeProperties
          (UMovieGraphMergeableModifierContainer *this,
          TObjectPtr<UMovieGraphCollectionModifier> *param_1,
          TObjectPtr<UMovieGraphCollectionModifier> *param_2)

{
  int iVar1;
  UMovieGraphCollectionModifier *pUVar2;
  UMovieGraphCollectionModifier *pUVar3;
  code *pcVar4;
  FProperty *pFVar5;
  bool bVar6;
  FBoolProperty *pFVar7;
  void *_Dst;
  void *_Src;
  TFieldIterator<FProperty> local_48;
  
  local_48.Struct = (UStruct *)((param_1->field0_0x0).DebugPtr)->_padding_;
  if (local_48.Struct == (UStruct *)0x0) {
    local_48.Field = (FField *)0x0;
  }
  else {
    local_48.Field = (local_48.Struct)->ChildProperties;
  }
  local_48.InterfaceIndex = -1;
  local_48.bIncludeSuper = true;
  local_48.bIncludeDeprecated = true;
  local_48.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_48);
  pFVar5 = (FProperty *)local_48.Field;
  do {
    if (pFVar5 == (FProperty *)0x0) {
      return;
    }
    local_48.Field = (FField *)pFVar5;
    pFVar7 = UMovieGraphConfig::FindOverridePropertyForRealProperty
                       ((UClass *)((param_2->field0_0x0).DebugPtr)->_padding_,pFVar5);
    if (pFVar7 != (FBoolProperty *)0x0) {
      pUVar2 = (param_1->field0_0x0).DebugPtr;
      if (((int)pFVar7->_padding_ < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((pUVar2 == (UMovieGraphCollectionModifier *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar1 = *(int *)((longlong)&pFVar7->_padding_ + 4);
      if ((pFVar7->FieldSize == '\0') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldSize != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0xa4b,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((pFVar7->FieldMask &
          *(byte *)((longlong)&pUVar2->_padding_ + (ulonglong)pFVar7->ByteOffset + (longlong)iVar1))
          == 0) {
        pUVar2 = (param_2->field0_0x0).DebugPtr;
        if (((int)pFVar7->_padding_ < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pUVar2 == (UMovieGraphCollectionModifier *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar1 = *(int *)((longlong)&pFVar7->_padding_ + 4);
        if ((pFVar7->FieldSize == '\0') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("FieldSize != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0xa4b,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pFVar7->FieldMask &
            *(byte *)((longlong)&pUVar2->_padding_ + (ulonglong)pFVar7->ByteOffset + (longlong)iVar1
                     )) != 0) {
          pUVar2 = (param_2->field0_0x0).DebugPtr;
          pUVar3 = (param_1->field0_0x0).DebugPtr;
          if ((pFVar5->ArrayDim < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((pUVar2 == (UMovieGraphCollectionModifier *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          _Src = (void *)((longlong)&pUVar2->_padding_ + (longlong)pFVar5->Offset_Internal);
          if ((pFVar5->ArrayDim < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((pUVar3 == (UMovieGraphCollectionModifier *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          _Dst = (void *)((longlong)&pUVar3->_padding_ + (longlong)pFVar5->Offset_Internal);
          if (_Dst != _Src) {
            if (((uint)(int)pFVar5->PropertyFlags >> 0x1e & 1) == 0) {
              (**(code **)(pFVar5->_padding_ + 0xf0))(pFVar5,_Dst,_Src,pFVar5->ArrayDim);
            }
            else {
              memcpy(_Dst,_Src,(longlong)pFVar5->ElementSize * (longlong)pFVar5->ArrayDim);
            }
          }
          pUVar2 = (param_1->field0_0x0).DebugPtr;
          if (((int)pFVar7->_padding_ < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((pUVar2 == (UMovieGraphCollectionModifier *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar1 = *(int *)((longlong)&pFVar7->_padding_ + 4);
          if ((pFVar7->FieldSize == '\0') &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("FieldSize != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0xa61,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(byte *)((longlong)&pUVar2->_padding_ + (ulonglong)pFVar7->ByteOffset + (longlong)iVar1)
               = ~pFVar7->FieldMask &
                 *(byte *)((longlong)&pUVar2->_padding_ +
                          (ulonglong)pFVar7->ByteOffset + (longlong)iVar1) | pFVar7->ByteMask;
        }
      }
    }
    local_48.Field = (local_48.Field)->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_48);
    pFVar5 = (FProperty *)local_48.Field;
  } while( true );
}

// StaticRegisterNativesUMovieGraphMergeableModifierContainer @ 14dd45250

void __cdecl
UMovieGraphMergeableModifierContainer::StaticRegisterNativesUMovieGraphMergeableModifierContainer
          (void)

{
  return;
}

// _getUObject @ 14dd4dea0

UObject * __thiscall
UMovieGraphMergeableModifierContainer::_getUObject(UMovieGraphMergeableModifierContainer *this)

{
  return (UObject *)&this[-1]._padding_;
}

