// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 25

// StaticClass @ 14dc99430

UClass * __cdecl UMovieGraphRenderLayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRenderLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRenderLayer",
               &Z_Registration_Info_UClass_UMovieGraphRenderLayer.InnerSingleton,
               StaticRegisterNativesUMovieGraphRenderLayer,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphRenderLayer>,
               InternalVTableHelperCtorCaller<UMovieGraphRenderLayer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderLayer.InnerSingleton;
}

// UMovieGraphRenderLayer @ 14dcb0fc0

UMovieGraphRenderLayer * __thiscall
UMovieGraphRenderLayer::UMovieGraphRenderLayer(UMovieGraphRenderLayer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphRenderLayer__6B_;
  (this->RenderLayerName).ComparisonIndex = 0;
  (this->RenderLayerName).Number = 0;
  (this->Modifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).ArrayNum = 0;
  (this->Modifiers).ArrayMax = 0;
  return this;
}

// ~UMovieGraphRenderLayer @ 14dcb3290

void __thiscall UMovieGraphRenderLayer::~UMovieGraphRenderLayer(UMovieGraphRenderLayer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphRenderLayer__6B_;
  pFVar1 = (this->Modifiers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddLayerModifier @ 14dcb9780

void __thiscall
UMovieGraphRenderLayer::AddLayerModifier
          (UMovieGraphRenderLayer *this,UMovieGraphModifierBase *param_1)

{
  TArray<TObjectPtr<UMovieGraphModifierBase>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  UMovieGraphModifierBase *local_18 [2];
  
  pTVar1 = &this->Modifiers;
  pFVar6 = (this->Modifiers).AllocatorInstance.Data;
  pFVar3 = pFVar6 + (longlong)(this->Modifiers).ArrayNum * 8;
  for (; pFVar6 != pFVar3; pFVar6 = pFVar6 + 8) {
    if (*(UMovieGraphModifierBase **)pFVar6 == (UMovieGraphModifierBase *)0x0) {
      bVar7 = param_1 == (UMovieGraphModifierBase *)0x0;
    }
    else {
      bVar7 = *(UMovieGraphModifierBase **)pFVar6 == param_1;
    }
    if (bVar7) {
      return;
    }
  }
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieGraphModifierBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Modifiers).ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar5 = (this->Modifiers).ArrayNum;
  piVar2 = &(this->Modifiers).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Modifiers).ArrayNum = iVar5 + 1;
  *(UMovieGraphModifierBase **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
       local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UMovieGraphModifierBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// AddModifier @ 14dcb98a0

void __thiscall
UMovieGraphRenderLayer::AddModifier
          (UMovieGraphRenderLayer *this,UMovieGraphCollectionModifier *param_1)

{
  TArray<TObjectPtr<UMovieGraphModifierBase>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  UMovieGraphCollectionModifier *local_18 [2];
  
  pTVar1 = &this->Modifiers;
  pFVar6 = (this->Modifiers).AllocatorInstance.Data;
  pFVar3 = pFVar6 + (longlong)(this->Modifiers).ArrayNum * 8;
  for (; pFVar6 != pFVar3; pFVar6 = pFVar6 + 8) {
    if (*(UMovieGraphCollectionModifier **)pFVar6 == (UMovieGraphCollectionModifier *)0x0) {
      bVar7 = param_1 == (UMovieGraphCollectionModifier *)0x0;
    }
    else {
      bVar7 = *(UMovieGraphCollectionModifier **)pFVar6 == param_1;
    }
    if (bVar7) {
      return;
    }
  }
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UMovieGraphCollectionModifier *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Modifiers).ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar5 = (this->Modifiers).ArrayNum;
  piVar2 = &(this->Modifiers).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Modifiers).ArrayNum = iVar5 + 1;
  *(UMovieGraphCollectionModifier **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
       local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UMovieGraphCollectionModifier *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// Apply @ 14dcba7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieGraphRenderLayer::Apply(UMovieGraphRenderLayer *this,UWorld *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  if (param_1 != (UWorld *)0x0) {
    pFVar3 = (this->Modifiers).AllocatorInstance.Data;
    iVar2 = (this->Modifiers).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Modifiers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UMovieGraphModifierBase>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar3 == pFVar1) break;
      (**(code **)(**(longlong **)pFVar3 + 0x2b0))(*(longlong **)pFVar3,param_1);
      pFVar3 = pFVar3 + 8;
    }
  }
  return;
}

// GetCollectionByName @ 14dccbb80

UMovieGraphCollection * __thiscall
UMovieGraphRenderLayer::GetCollectionByName(UMovieGraphRenderLayer *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  void *_Src;
  UMovieGraphCollection *pUVar6;
  int iVar7;
  UClass *pUVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  undefined1 local_res8 [8];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  pFVar14 = (this->Modifiers).AllocatorInstance.Data;
  uVar3 = (this->Modifiers).ArrayNum;
  uVar9 = (ulonglong)(int)uVar3;
  pFVar1 = pFVar14 + uVar9 * 8;
  do {
    if ((this->Modifiers).ArrayNum != (int)uVar9) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphModifierBase>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar1) {
      return (UMovieGraphCollection *)0x0;
    }
    lVar5 = *(longlong *)pFVar14;
    if (lVar5 != 0) {
      pUVar8 = UMovieGraphCollectionModifier::StaticClass();
      iVar11 = (int)pUVar8->_padding_;
      if ((iVar11 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar11 * 8)
          == &pUVar8->_padding_)) {
        local_40 = *(int *)(lVar5 + 0x30);
        lVar13 = (longlong)local_40;
        _Src = *(void **)(lVar5 + 0x28);
        local_48.Data = (FScriptContainerElement *)0x0;
        if (local_40 == 0) {
          local_3c = 0;
          iVar11 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_40,0,&local_48,local_40,&local_3c);
          memcpy(local_48.Data,_Src,lVar13 << 3);
          iVar11 = local_40;
        }
        pFVar2 = local_48.Data + (longlong)iVar11 * 8;
        FVar10.Data = local_48.Data;
        iVar12 = iVar11;
        while( true ) {
          if (iVar12 != iVar11) {
            `TCheckedPointerIterator<UMovieGraphCollection_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
            iVar12 = local_40;
          }
          if (FVar10.Data == pFVar2) break;
          pUVar6 = *(UMovieGraphCollection **)FVar10.Data;
          if (pUVar6 != (UMovieGraphCollection *)0x0) {
            iVar7 = (pUVar6->CollectionName).Data.ArrayNum;
            iVar4 = (param_1->Data).ArrayNum;
            if (iVar7 == iVar4) {
              if (iVar7 < 2) goto LAB_14dccbcf0;
              iVar7 = wcscmp((wchar_t *)(pUVar6->CollectionName).Data.AllocatorInstance.Data,
                             (wchar_t *)(param_1->Data).AllocatorInstance.Data);
              bVar15 = iVar7 == 0;
            }
            else {
              bVar15 = iVar7 + iVar4 == 1;
            }
            if (bVar15) {
LAB_14dccbcf0:
              if (local_48.Data == (FScriptContainerElement *)0x0) {
                return pUVar6;
              }
              FMemory::Free(local_48.Data);
              return pUVar6;
            }
          }
          FVar10.Data = FVar10.Data + 8;
        }
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data);
        }
      }
    }
    uVar9 = (ulonglong)uVar3;
    pFVar14 = pFVar14 + 8;
  } while( true );
}

// GetLayerModifiers @ 14dcce7d0

TArray<UMovieGraphModifierBase_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphRenderLayer::GetLayerModifiers
          (UMovieGraphRenderLayer *this,
          TArray<UMovieGraphModifierBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->Modifiers).ArrayNum;
  _Src = (this->Modifiers).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// GetModifiers @ 14dccebb0

TArray<UMovieGraphCollectionModifier_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphRenderLayer::GetModifiers
          (UMovieGraphRenderLayer *this,
          TArray<UMovieGraphCollectionModifier_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  TArray<UMovieGraphCollectionModifier_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *this_00;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (this->Modifiers).AllocatorInstance.Data;
  iVar2 = (this->Modifiers).ArrayNum;
  pFVar1 = this_00 + (longlong)iVar2 * 8;
LAB_14dccebe2:
  do {
    if ((this->Modifiers).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphModifierBase>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar1) {
      return __return_storage_ptr__;
    }
    if (*(longlong *)this_00 == 0) {
LAB_14dccecda:
      local_38[0] = 0;
    }
    else {
      pUVar7 = UMovieGraphCollectionModifier::StaticClass();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar7);
      if (!bVar5) goto LAB_14dccecda;
      local_38[0] = *(longlong *)this_00;
      if (local_38[0] != 0) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
           ((FScriptContainerElement *)local_38 <
            pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<UMovieGraphCollectionModifier_*,TSizedDefaultAllocator<32>_> *)
                     (*pcVar4)();
            return pTVar8;
          }
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        this_00 = this_00 + 8;
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             local_38[0];
        goto LAB_14dccebe2;
      }
    }
    this_00 = this_00 + 8;
  } while( true );
}

// GetPrivateStaticClass @ 14dcd3010

UClass * __cdecl UMovieGraphRenderLayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRenderLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRenderLayer",
               &Z_Registration_Info_UClass_UMovieGraphRenderLayer.InnerSingleton,
               StaticRegisterNativesUMovieGraphRenderLayer,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphRenderLayer>,
               InternalVTableHelperCtorCaller<UMovieGraphRenderLayer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderLayer.InnerSingleton;
}

// RemoveLayerModifier @ 14dcdf170

void __thiscall
UMovieGraphRenderLayer::RemoveLayerModifier
          (UMovieGraphRenderLayer *this,UMovieGraphModifierBase *param_1)

{
  TObjectPtr<UMovieGraphModifierBase>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieGraphModifierBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UMovieGraphModifierBase>,TSizedDefaultAllocator<32>_>::Remove
            (&this->Modifiers,(TObjectPtr<UMovieGraphModifierBase> *)&local_res8[0].ObjectPtr);
  return;
}

// RemoveModifier @ 14dcdf1b0

void __thiscall
UMovieGraphRenderLayer::RemoveModifier
          (UMovieGraphRenderLayer *this,UMovieGraphCollectionModifier *param_1)

{
  TObjectPtr<UMovieGraphModifierBase>_u_0 local_res8 [4];
  
  local_res8[0] = (TObjectPtr<UMovieGraphModifierBase>_u_0)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UMovieGraphCollectionModifier *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UMovieGraphModifierBase>,TSizedDefaultAllocator<32>_>::Remove
            (&this->Modifiers,(TObjectPtr<UMovieGraphModifierBase> *)&local_res8[0].ObjectPtr);
  return;
}

// Revert @ 14dce20a0

void __thiscall UMovieGraphRenderLayer::Revert(UMovieGraphRenderLayer *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (this->Modifiers).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 8;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Modifiers).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->Modifiers).AllocatorInstance.Data + lVar6);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2b8))();
      }
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return;
}

// StaticRegisterNativesUMovieGraphRenderLayer @ 14dce6770

void __cdecl UMovieGraphRenderLayer::StaticRegisterNativesUMovieGraphRenderLayer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphRenderLayer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddLayerModifier @ 14dceef00

void __cdecl
UMovieGraphRenderLayer::execAddLayerModifier(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphModifierBase *local_res10;
  
  local_res10 = (UMovieGraphModifierBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddLayerModifier((UMovieGraphRenderLayer *)param_1,local_res10);
  return;
}

// execAddModifier @ 14dceef90

void __cdecl UMovieGraphRenderLayer::execAddModifier(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  FProperty *pFVar2;
  code *pcVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  UObject *local_res8;
  UObject *local_18 [2];
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar5 = *(longlong **)&param_1[1].field_0x8;
  plVar1 = plVar5 + *(int *)&param_1[1].field_0x10;
  while( true ) {
    if (plVar5 == plVar1) {
      local_18[0] = local_res8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      if (((*(UObject ***)&param_1[1].field_0x8 <= local_18) &&
          (local_18 < *(UObject ***)&param_1[1].field_0x8 + *(int *)&param_1[1].field_0x14)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar4 = *(int *)&param_1[1].field_0x10;
      if (iVar4 == *(int *)&param_1[1].field_0x14) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)&param_1[1].field_0x8,
                           (int *)&param_1[1].field_0x14);
      }
      *(int *)&param_1[1].field_0x10 = iVar4 + 1;
      *(UObject **)(*(longlong *)&param_1[1].field_0x8 + (longlong)iVar4 * 8) = local_18[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_18[0]);
      }
      return;
    }
    if ((UObject *)*plVar5 == (UObject *)0x0) {
      bVar6 = local_res8 == (UObject *)0x0;
    }
    else {
      bVar6 = (UObject *)*plVar5 == local_res8;
    }
    if (bVar6) break;
    plVar5 = plVar5 + 1;
  }
  return;
}

// execApply @ 14dcef4c0

void __cdecl UMovieGraphRenderLayer::execApply(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [8];
  longlong local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  lVar4 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != 0) {
    puVar5 = *(undefined8 **)&param_1[1].field_0x8;
    iVar2 = *(int *)&param_1[1].field_0x10;
    puVar1 = puVar5 + iVar2;
    while( true ) {
      if (*(int *)&param_1[1].field_0x10 != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UMovieGraphModifierBase>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (puVar5 == puVar1) break;
      (**(code **)(*(longlong *)*puVar5 + 0x2b0))((longlong *)*puVar5,lVar4);
      puVar5 = puVar5 + 1;
    }
  }
  return;
}

// execGetCollectionByName @ 14dcf0710

void __cdecl
UMovieGraphRenderLayer::execGetCollectionByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphCollection *pUVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetCollectionByName((UMovieGraphRenderLayer *)param_1,&local_18);
  *(UMovieGraphCollection **)param_3 = pUVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetLayerModifiers @ 14dcf1090

void __cdecl
UMovieGraphRenderLayer::execGetLayerModifiers(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[1].field_0x10;
  _Src = *(void **)&param_1[1].field_0x8;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
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

// execGetModifiers @ 14dcf11e0

void __cdecl
UMovieGraphRenderLayer::execGetModifiers(UObject *param_1,FFrame *param_2,void *param_3)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FObjectPtr_u_0 *this;
  undefined1 local_res8 [8];
  UObject *local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FObjectPtr_u_0 **)&param_1[1].field_0x8;
  iVar2 = *(int *)&param_1[1].field_0x10;
  pFVar1 = this + iVar2;
  do {
    while( true ) {
      if (*(int *)&param_1[1].field_0x10 != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UMovieGraphModifierBase>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (this == pFVar1) {
        if (param_3 != &local_40) {
          if (*(void **)param_3 != (void *)0x0) {
            FMemory::Free(*(void **)param_3);
          }
          *(FScriptContainerElement **)param_3 = local_40.Data;
          *(int *)((longlong)param_3 + 8) = (int)local_38;
          *(int *)((longlong)param_3 + 0xc) = local_38._4_4_;
          local_38 = 0;
          local_40.Data = (FScriptContainerElement *)0x0;
        }
        if (local_40.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data);
        }
        return;
      }
      if (this->Handle != (UObject *)0x0) break;
LAB_14dcf1322:
      local_48 = (UObject *)0x0;
LAB_14dcf1326:
      this = this + 1;
    }
    pUVar6 = UMovieGraphCollectionModifier::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)this,pUVar6);
    if (!bVar4) goto LAB_14dcf1322;
    local_48 = this->Handle;
    if (local_48 == (UObject *)0x0) goto LAB_14dcf1326;
    if (((local_40.Data <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < local_40.Data + (longlong)local_38._4_4_ * 8)) &&
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
    iVar5 = (int)local_38;
    if ((int)local_38 == local_38._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_40,(int *)((longlong)&local_38 + 4));
    }
    this = this + 1;
    local_38 = CONCAT44(local_38._4_4_,iVar5 + 1);
    *(UObject **)(local_40.Data + (longlong)iVar5 * 8) = local_48;
  } while( true );
}

// execGetRenderLayerName @ 14dcf18f0

void __cdecl
UMovieGraphRenderLayer::execGetRenderLayerName(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 1);
  return;
}

// execRemoveLayerModifier @ 14dcf2da0

void __cdecl
UMovieGraphRenderLayer::execRemoveLayerModifier(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res8;
  TObjectPtr<UMovieGraphModifierBase>_u_0 local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10.DebugPtr = (UMovieGraphModifierBase *)local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  TArray<TObjectPtr<UMovieGraphModifierBase>,TSizedDefaultAllocator<32>_>::Remove
            ((TArray<TObjectPtr<UMovieGraphModifierBase>,TSizedDefaultAllocator<32>_> *)
             &param_1[1].field_0x8,(TObjectPtr<UMovieGraphModifierBase> *)&local_res10.ObjectPtr);
  return;
}

// execRemoveModifier @ 14dcf2e50

void __cdecl
UMovieGraphRenderLayer::execRemoveModifier(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res8;
  TObjectPtr<UMovieGraphModifierBase>_u_0 local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10.DebugPtr = (UMovieGraphModifierBase *)local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  TArray<TObjectPtr<UMovieGraphModifierBase>,TSizedDefaultAllocator<32>_>::Remove
            ((TArray<TObjectPtr<UMovieGraphModifierBase>,TSizedDefaultAllocator<32>_> *)
             &param_1[1].field_0x8,(TObjectPtr<UMovieGraphModifierBase> *)&local_res10.ObjectPtr);
  return;
}

// execRevert @ 14dcf31a0

void __cdecl UMovieGraphRenderLayer::execRevert(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Revert((UMovieGraphRenderLayer *)param_1);
  return;
}

// execSetRenderLayerName @ 14dcf3c50

void __cdecl
UMovieGraphRenderLayer::execSetRenderLayerName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar *puVar9;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar9 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  uVar5 = puVar9[4];
  uVar6 = puVar9[5];
  uVar7 = puVar9[6];
  uVar8 = puVar9[7];
  param_1[1].field_0x0 = puVar9[0];
  param_1[1].field_0x1 = uVar2;
  param_1[1].field_0x2 = uVar3;
  param_1[1].field_0x3 = uVar4;
  param_1[1].field_0x4 = uVar5;
  param_1[1].field_0x5 = uVar6;
  param_1[1].field_0x6 = uVar7;
  param_1[1].field_0x7 = uVar8;
  return;
}

