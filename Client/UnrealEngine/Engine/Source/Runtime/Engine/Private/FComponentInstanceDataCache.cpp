// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// operator= @ 14737dd10

FComponentInstanceDataCache * __thiscall
FComponentInstanceDataCache::operator=
          (FComponentInstanceDataCache *this,FComponentInstanceDataCache *param_1)

{
  TMap<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>_>
  *pTVar1;
  undefined1 *_Src;
  undefined1 *_Dst;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  TMap<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>_>
  *pTVar4;
  
  if (this != param_1) {
    DestructItems<TStructOnScope<FActorComponentInstanceData>,int>
              ((TStructOnScope<FActorComponentInstanceData> *)
               (this->ComponentsInstanceData).AllocatorInstance.Data,
               (this->ComponentsInstanceData).ArrayNum);
    pFVar2 = (this->ComponentsInstanceData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->ComponentsInstanceData).AllocatorInstance.Data =
         (param_1->ComponentsInstanceData).AllocatorInstance.Data;
    (param_1->ComponentsInstanceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ComponentsInstanceData).ArrayNum = (param_1->ComponentsInstanceData).ArrayNum;
    (this->ComponentsInstanceData).ArrayMax = (param_1->ComponentsInstanceData).ArrayMax;
    (param_1->ComponentsInstanceData).ArrayNum = 0;
    (param_1->ComponentsInstanceData).ArrayMax = 0;
  }
  pTVar4 = &param_1->InstanceComponentTransformToRootMap;
  pTVar1 = &this->InstanceComponentTransformToRootMap;
  if (pTVar1 != pTVar4) {
    if (*(void **)pTVar1 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar1);
    }
    _Src = &(param_1->InstanceComponentTransformToRootMap).field_0x10;
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar4;
    _Dst = &(this->InstanceComponentTransformToRootMap).field_0x10;
    *(undefined8 *)pTVar4 = 0;
    *(undefined4 *)&(this->InstanceComponentTransformToRootMap).field_0x8 =
         *(undefined4 *)&(param_1->InstanceComponentTransformToRootMap).field_0x8;
    *(undefined4 *)&(this->InstanceComponentTransformToRootMap).field_0xc =
         *(undefined4 *)&(param_1->InstanceComponentTransformToRootMap).field_0xc;
    *(undefined8 *)&(param_1->InstanceComponentTransformToRootMap).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->InstanceComponentTransformToRootMap).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->InstanceComponentTransformToRootMap).field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->InstanceComponentTransformToRootMap).field_0x20 =
           *(undefined8 *)&(param_1->InstanceComponentTransformToRootMap).field_0x20;
      *(undefined8 *)&(param_1->InstanceComponentTransformToRootMap).field_0x20 = 0;
      *(undefined4 *)&(this->InstanceComponentTransformToRootMap).field_0x28 =
           *(undefined4 *)&(param_1->InstanceComponentTransformToRootMap).field_0x28;
      *(undefined4 *)&(this->InstanceComponentTransformToRootMap).field_0x2c =
           *(undefined4 *)&(param_1->InstanceComponentTransformToRootMap).field_0x2c;
      *(undefined8 *)&(param_1->InstanceComponentTransformToRootMap).field_0x28 = 0;
    }
    *(undefined4 *)&(this->InstanceComponentTransformToRootMap).field_0x30 =
         *(undefined4 *)&(param_1->InstanceComponentTransformToRootMap).field_0x30;
    *(undefined4 *)&(this->InstanceComponentTransformToRootMap).field_0x34 =
         *(undefined4 *)&(param_1->InstanceComponentTransformToRootMap).field_0x34;
    *(undefined4 *)&(param_1->InstanceComponentTransformToRootMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->InstanceComponentTransformToRootMap).field_0x34 = 0;
    if (*(longlong *)&(param_1->InstanceComponentTransformToRootMap).field_0x40 == 0) {
      *(undefined4 *)&(this->InstanceComponentTransformToRootMap).field_0x38 =
           *(undefined4 *)&(param_1->InstanceComponentTransformToRootMap).field_0x38;
    }
    pvVar3 = *(void **)&(this->InstanceComponentTransformToRootMap).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    *(undefined8 *)&(this->InstanceComponentTransformToRootMap).field_0x40 =
         *(undefined8 *)&(param_1->InstanceComponentTransformToRootMap).field_0x40;
    *(undefined8 *)&(param_1->InstanceComponentTransformToRootMap).field_0x40 = 0;
    *(undefined4 *)&(this->InstanceComponentTransformToRootMap).field_0x48 =
         *(undefined4 *)&(param_1->InstanceComponentTransformToRootMap).field_0x48;
    *(undefined4 *)&(param_1->InstanceComponentTransformToRootMap).field_0x48 = 0;
  }
  return this;
}

// FComponentInstanceDataCache @ 1477eba00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FComponentInstanceDataCache * __thiscall
FComponentInstanceDataCache::FComponentInstanceDataCache
          (FComponentInstanceDataCache *this,AActor *param_1)

{
  char cVar1;
  USceneComponent *this_00;
  USceneComponent *pUVar2;
  FStructOnScope *pFVar3;
  code *pcVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  TTransform<double> *pTVar11;
  FComponentInstanceDataCache *pFVar12;
  ulonglong uVar13;
  UClass *pUVar14;
  USceneComponent *pUVar15;
  int *piVar16;
  undefined8 *puVar17;
  undefined1 auStackY_238 [32];
  undefined1 local_1e8;
  char local_1e7;
  uint local_1e4;
  TPairInitializer<TObjectPtr<USceneComponent>_&&,UE::Math::TTransform<double>_&&> local_1e0;
  UClass *local_1d0;
  USceneComponent *local_1c8;
  undefined8 *local_1c0;
  FStructOnScope local_1b8;
  USceneComponent **local_190;
  TTransform<double> *local_188;
  undefined8 local_180 [24];
  undefined8 *local_c0;
  uint local_b8;
  undefined4 local_b4;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pUVar10 = (UClass *)0x0;
  pUVar14 = (UClass *)0x0;
  piVar16 = &(this->ComponentsInstanceData).ArrayMax;
  (this->ComponentsInstanceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentsInstanceData).ArrayNum = 0;
  *piVar16 = 0;
  *(undefined8 *)&this->InstanceComponentTransformToRootMap = 0;
  *(undefined8 *)&(this->InstanceComponentTransformToRootMap).field_0x8 = 0;
  *(undefined8 *)&(this->InstanceComponentTransformToRootMap).field_0x20 = 0;
  *(undefined4 *)&(this->InstanceComponentTransformToRootMap).field_0x28 = 0;
  *(undefined4 *)&(this->InstanceComponentTransformToRootMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->InstanceComponentTransformToRootMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InstanceComponentTransformToRootMap).field_0x34 = 0;
  *(undefined8 *)&(this->InstanceComponentTransformToRootMap).field_0x40 = 0;
  *(undefined4 *)&(this->InstanceComponentTransformToRootMap).field_0x48 = 0;
  if (param_1 == (AActor *)0x0) {
    return this;
  }
  local_1e7 = AActor::IsChildActor(param_1);
  local_c0 = (undefined8 *)0x0;
  local_b4 = 0x18;
  local_b8 = 0;
  pUVar8 = UActorComponent::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar8 == (UClass *)0x0) goto LAB_1477ebae4;
  }
  else {
    pUVar14 = pUVar10;
    if (pUVar8 == (UClass *)0x0) goto LAB_1477ebae4;
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  pUVar9 = UActorComponent::StaticClass();
  pUVar14 = pUVar10;
  if (pUVar9 != (UClass *)0x0) {
    iVar7 = (int)pUVar9->_padding_;
    if (((int)pUVar8->_padding_ < iVar7) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar7 * 8) != &pUVar9->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar14 = pUVar8;
    }
  }
LAB_1477ebae4:
  pUVar10 = UActorComponent::StaticClass();
  if (pUVar14 == pUVar10) {
    local_1e0.Value = (TTransform<double> *)pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_1e0.Value,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_180);
  }
  else {
    local_1d0 = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_1d0,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_180);
  }
  if ((int)local_b8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_b8);
  }
  if (*piVar16 < (int)local_b8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,local_b8,(ForAnyElementType *)this,(this->ComponentsInstanceData).ArrayNum,
               piVar16);
  }
  uVar13 = (ulonglong)(int)local_b8;
  local_1e4 = local_b8;
  puVar17 = local_180;
  if (local_c0 != (undefined8 *)0x0) {
    puVar17 = local_c0;
  }
  local_1c0 = puVar17 + uVar13;
LAB_1477ebbb6:
  do {
    puVar5 = local_1c0;
    piVar16 = &(this->ComponentsInstanceData).ArrayMax;
    if (local_b8 != (uint)uVar13) {
      local_1e8 = 0;
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1e8);
    }
    if (puVar17 == puVar5) {
      if (local_c0 != (undefined8 *)0x0) {
        FMemory::Free(local_c0);
      }
      return this;
    }
    this_00 = (USceneComponent *)*puVar17;
    if (((local_1e7 == '\0') &&
        (cVar1 = *(char *)((longlong)&this_00->_padding_ + 1), cVar1 != '\x01')) &&
       (cVar1 != '\x02')) {
      if (cVar1 == '\x03') {
        pUVar14 = Z_Construct_UClass_USceneComponent_NoRegister();
        iVar7 = (int)pUVar14->_padding_;
        if (((((iVar7 <= *(int *)(this_00->_padding_ + 0x38)) &&
              ((longlong *)
               *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
               &pUVar14->_padding_)) && (this_00 != (USceneComponent *)0x0)) &&
            (pUVar2 = (this_00->AttachParent).field0_0x0.DebugPtr, pUVar2 != (USceneComponent *)0x0)
            ) && ((cVar1 = *(char *)((longlong)&pUVar2->_padding_ + 1), cVar1 == '\x01' ||
                  (cVar1 == '\x02')))) {
          pUVar15 = (param_1->RootComponent).field0_0x0.DebugPtr;
          if (pUVar15 == (USceneComponent *)0x0) {
            pUVar15 = pUVar2;
            for (pUVar2 = (pUVar2->AttachParent).field0_0x0.DebugPtr;
                (pUVar2 != (USceneComponent *)0x0 && ((AActor *)pUVar2->_padding_ == param_1));
                pUVar2 = (pUVar2->AttachParent).field0_0x0.DebugPtr) {
              pUVar15 = pUVar2;
            }
          }
          if (this_00->bComponentToWorldUpdated == 0) {
            USceneComponent::UpdateComponentToWorld(this_00,None,None);
          }
          pTVar11 = UE::Math::TTransform<double>::GetRelativeTransform
                              (&this_00->ComponentToWorld,&local_a8,&pUVar15->ComponentToWorld);
          local_1c8 = this_00;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          local_190 = &local_1c8;
          local_188 = pTVar11;
          TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<TObjectPtr<USceneComponent>_&&,UE::Math::TTransform<double>_&&>_>
                    ((TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                      *)&this->InstanceComponentTransformToRootMap,&local_1e0,(bool *)&local_190);
          uVar13 = (ulonglong)local_1e4;
          puVar17 = puVar17 + 1;
          goto LAB_1477ebbb6;
        }
      }
    }
    else {
      (**(code **)(this_00->_padding_ + 0x488))(this_00,&local_1b8);
      bVar6 = FWeakObjectPtr::IsValid(&local_1b8.ScriptStruct.WeakPtr);
      if ((bVar6) && (local_1b8.SampleStructMemory != (uchar *)0x0)) {
        pFVar3 = (FStructOnScope *)(this->ComponentsInstanceData).AllocatorInstance.Data;
        if ((pFVar3 <= &local_1b8) &&
           ((&local_1b8 < pFVar3 + *piVar16 &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)))) {
          pcVar4 = (code *)swi(3);
          pFVar12 = (FComponentInstanceDataCache *)(*pcVar4)();
          return pFVar12;
        }
        iVar7 = (this->ComponentsInstanceData).ArrayNum;
        if (iVar7 == *piVar16) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,(ForAnyElementType *)this,piVar16);
        }
        (this->ComponentsInstanceData).ArrayNum = iVar7 + 1;
        pFVar3 = (FStructOnScope *)
                 ((this->ComponentsInstanceData).AllocatorInstance.Data + (longlong)iVar7 * 0x28);
        FStructOnScope::FStructOnScope(pFVar3,&local_1b8);
        pFVar3->_padding_ = (longlong)&___7__TStructOnScope_UFActorComponentInstanceData____6B_;
      }
      FStructOnScope::~FStructOnScope(&local_1b8);
    }
    uVar13 = (ulonglong)local_1e4;
    puVar17 = puVar17 + 1;
  } while( true );
}

// operator() @ 1477f5cb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`FComponentInstanceDataCache::GetComponentHierarchy'::__l2::<lambda_1>::operator()
          (void *this,USceneComponent *param_1)

{
  uint uVar1;
  ForElementType<UActorComponent_*> FVar2;
  USceneComponent *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  USceneComponent *pUVar9;
  ForElementType<UActorComponent_*> FVar10;
  FString *pFVar11;
  longlong lVar12;
  ForElementType<UActorComponent_*> FVar13;
  wchar_t *pwVar14;
  uint uVar15;
  int iVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  longlong lVar19;
  USceneComponent *local_68;
  USceneComponent *local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  
  FVar13 = *(ForElementType<UActorComponent_*> *)((longlong)this + 8);
  FVar2 = *(ForElementType<UActorComponent_*> *)((longlong)FVar13 + 0xc0);
  uVar15 = *(uint *)((longlong)FVar13 + 200);
  FVar10 = FVar2;
  if (FVar2 == (ForElementType<UActorComponent_*>)0x0) {
    FVar10 = FVar13;
  }
  local_68 = param_1;
  if ((ulonglong)FVar10 <= &local_68) {
    FVar10 = FVar13;
    if (FVar2 != (ForElementType<UActorComponent_*>)0x0) {
      FVar10 = FVar2;
    }
    if ((&local_68 <
         (USceneComponent **)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar13 + 0xcc) * 8))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)((longlong)FVar13 + 200);
  if (iVar5 == *(int *)((longlong)FVar13 + 0xcc)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
                      (0x808,(ForElementType<UActorComponent_*> *)FVar13,
                       (int *)((longlong)FVar13 + 0xcc));
  }
  *(int *)((longlong)FVar13 + 200) = iVar5 + 1;
  if (*(ForElementType<UActorComponent_*> *)((longlong)FVar13 + 0xc0) !=
      (ForElementType<UActorComponent_*>)0x0) {
    FVar13 = *(ForElementType<UActorComponent_*> *)((longlong)FVar13 + 0xc0);
  }
  *(USceneComponent **)((longlong)FVar13 + (longlong)iVar5 * 8) = local_68;
  iVar5 = 1;
  do {
    lVar19 = 0;
    uVar1 = *(uint *)(*(longlong *)((longlong)this + 8) + 200);
    if (0 < iVar5) {
      lVar18 = (longlong)(int)uVar15 * 8;
      do {
        lVar12 = *(longlong *)((longlong)this + 8);
        uVar6 = 0;
        if ((int)uVar15 < *(int *)(lVar12 + 200)) {
          uVar6 = ~uVar15 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(longlong *)(lVar12 + 0xc0) != 0) {
          lVar12 = *(longlong *)(lVar12 + 0xc0);
        }
        this_00 = *(USceneComponent **)(lVar12 + lVar18);
        if (this_00 == (USceneComponent *)0x0) {
          pFVar11 = GetTypeName<USceneComponent>(&local_38);
          if ((pFVar11->Data).ArrayNum == 0) {
            pwVar14 = L"";
          }
          else {
            pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar14);
        }
        pUVar8 = Z_Construct_UClass_USceneComponent_NoRegister();
        iVar7 = (int)pUVar8->_padding_;
        if ((*(int *)(this_00->_padding_ + 0x38) < iVar7) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar8->_padding_)) {
          pFVar11 = GetTypeName<USceneComponent>(&local_58);
          pwVar14 = L"";
          if ((pFVar11->Data).ArrayNum == 0) {
            pwVar17 = L"";
          }
          else {
            pwVar17 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
          pFVar11 = GetFullNameForCastLogError<UActorComponent>
                              (&local_48,(UActorComponent *)this_00);
          if ((pFVar11->Data).ArrayNum != 0) {
            pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar14,pwVar17);
        }
        iVar16 = 0;
        iVar7 = USceneComponent::GetNumChildrenComponents(this_00);
        if (0 < iVar7) {
          do {
            pUVar9 = USceneComponent::GetChildComponent(this_00,iVar16);
            if ((pUVar9 != (USceneComponent *)0x0) && (pUVar9->_padding_ == *(longlong *)this)) {
              FVar13 = *(ForElementType<UActorComponent_*> *)((longlong)this + 8);
              FVar2 = *(ForElementType<UActorComponent_*> *)((longlong)FVar13 + 0xc0);
              FVar10 = FVar13;
              if (FVar2 != (ForElementType<UActorComponent_*>)0x0) {
                FVar10 = FVar2;
              }
              local_60 = pUVar9;
              if ((ulonglong)FVar10 <= &local_60) {
                FVar10 = FVar13;
                if (FVar2 != (ForElementType<UActorComponent_*>)0x0) {
                  FVar10 = FVar2;
                }
                if ((&local_60 <
                     (USceneComponent **)
                     ((longlong)FVar10 + (longlong)*(int *)((longlong)FVar13 + 0xcc) * 8)) &&
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
              }
              iVar7 = *(int *)((longlong)FVar13 + 200);
              if (iVar7 == *(int *)((longlong)FVar13 + 0xcc)) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
                                  (0x808,(ForElementType<UActorComponent_*> *)FVar13,
                                   (int *)((longlong)FVar13 + 0xcc));
              }
              *(int *)((longlong)FVar13 + 200) = iVar7 + 1;
              if (*(ForElementType<UActorComponent_*> *)((longlong)FVar13 + 0xc0) !=
                  (ForElementType<UActorComponent_*>)0x0) {
                FVar13 = *(ForElementType<UActorComponent_*> *)((longlong)FVar13 + 0xc0);
              }
              *(USceneComponent **)((longlong)FVar13 + (longlong)iVar7 * 8) = local_60;
            }
            iVar16 = iVar16 + 1;
            iVar7 = USceneComponent::GetNumChildrenComponents(this_00);
          } while (iVar16 < iVar7);
        }
        uVar15 = uVar15 + 1;
        lVar19 = lVar19 + 1;
        lVar18 = lVar18 + 8;
      } while (lVar19 < iVar5);
    }
    iVar5 = *(int *)(*(longlong *)((longlong)this + 8) + 200) - uVar1;
    uVar15 = uVar1;
    if (iVar5 == 0) {
      return;
    }
  } while( true );
}

// AddReferencedObjects @ 147804f80

void __thiscall
FComponentInstanceDataCache::AddReferencedObjects
          (FComponentInstanceDataCache *this,FReferenceCollector *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  FReferenceCollector::
  AddReferencedObjects<USceneComponent,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>_>
            (param_1,(TMapBase<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>_>
                      *)&this->InstanceComponentTransformToRootMap,(UObject *)0x0,(FProperty *)0x0);
  iVar2 = (this->ComponentsInstanceData).ArrayNum;
  pFVar5 = (this->ComponentsInstanceData).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->ComponentsInstanceData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TStructOnScope<FActorComponentInstanceData>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pFVar5 + 8));
    if ((bVar4) && (plVar3 = *(longlong **)(pFVar5 + 0x10), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,param_1);
    }
    pFVar5 = pFVar5 + 0x28;
  }
  return;
}

// ApplyToActor @ 147809300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FComponentInstanceDataCache::ApplyToActor
          (FComponentInstanceDataCache *this,AActor *param_1,ECacheApplyPhase param_2)

{
  undefined1 *puVar1;
  TMap<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>_>
  *pTVar2;
  char cVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  UObject *pUVar6;
  longlong *plVar7;
  USceneComponent *this_00;
  code *pcVar8;
  TMap<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>_>
  *pTVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  ForElementType<UActorComponent_*> FVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  int iVar19;
  uint uVar20;
  ForElementType<UActorComponent_*> FVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  uint *puVar24;
  int iVar25;
  ulonglong uVar26;
  undefined1 auStack_248 [32];
  undefined1 local_217;
  undefined1 local_216 [2];
  uint local_214;
  ECacheApplyPhase local_210;
  uint local_20c;
  ulonglong local_208;
  FComponentInstanceDataCache *local_200;
  ForElementType<UActorComponent_*> local_1f8;
  undefined8 local_1f0;
  AActor *local_1e8;
  ForElementType<UActorComponent_*> local_1e0;
  undefined8 local_1d8;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  UObject *local_1c0;
  UObject *local_1b8;
  TMap<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>_>
  *local_1b0;
  int iStack_1a8;
  uint uStack_1a4;
  undefined1 *local_1a0;
  undefined4 uStack_198;
  int iStack_194;
  int local_190;
  undefined4 uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  TMap<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>_>
  *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  undefined4 local_134;
  ForElementType<unsigned_int> local_130;
  uint local_118;
  int local_114;
  TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> local_110;
  ulonglong local_40;
  
  if (param_1 != (AActor *)0x0) {
    local_40 = __security_cookie.value ^ (ulonglong)auStack_248;
    uVar22 = 0;
    local_110.AllocatorInstance.SecondaryData = (ForElementType<UActorComponent_*>)0x0;
    local_110.ArrayNum = 0;
    local_110.ArrayMax = 0x18;
    local_210 = param_2;
    local_200 = this;
    local_1e8 = param_1;
    GetComponentHierarchy(param_1,&local_110);
    local_118 = (this->ComponentsInstanceData).ArrayNum;
    local_130.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_114 = 0x80;
    uVar15 = local_118 + 0x1f >> 5;
    if (local_118 + 0x1f >> 5 != 0) {
      if (4 < uVar15) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&local_130,0,uVar15,4);
        local_114 = uVar15 << 5;
      }
      FVar14 = (ForElementType<unsigned_int>)&local_130;
      if (local_130.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_130.SecondaryData;
      }
      if (uVar15 < 9) {
        iVar19 = -1;
      }
      else {
        iVar19 = 0xff;
      }
      memset((void *)FVar14,iVar19,(ulonglong)uVar15 << 2);
      uVar15 = local_118 & 0x8000001f;
      if ((int)uVar15 < 0) {
        uVar15 = (uVar15 - 1 | 0xffffffe0) + 1;
      }
      if (uVar15 != 0) {
        FVar14 = (ForElementType<unsigned_int>)&local_130;
        if (local_130.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_130.SecondaryData;
        }
        puVar24 = (uint *)((longlong)FVar14 +
                          (longlong)((int)(local_118 + ((int)local_118 >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar24 = *puVar24 & 0xffffffffU >> (0x20U - (char)uVar15 & 0x1f);
      }
    }
    iVar19 = (this->ComponentsInstanceData).ArrayNum;
    local_1f0 = 1;
    if (0 < iVar19) {
      uVar15 = 1;
      uVar26 = uVar22;
      do {
        uVar20 = (uint)uVar22;
        uVar12 = 0;
        if ((int)uVar20 < iVar19) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar5 = (this->ComponentsInstanceData).AllocatorInstance.Data;
        bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pFVar5 + uVar26 + 8));
        if ((!bVar10) || (*(longlong *)(pFVar5 + uVar26 + 0x10) == 0)) {
          if ((((int)uVar20 < 0) || ((int)local_118 <= (int)uVar20)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar14 = (ForElementType<unsigned_int>)&local_130;
          if (local_130.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar14 = local_130.SecondaryData;
          }
          uVar12 = uVar20;
          if ((int)uVar20 < 0) {
            uVar12 = uVar20 + 0x1f;
          }
          puVar24 = (uint *)((longlong)FVar14 + (longlong)((int)uVar12 >> 5) * 4);
          *puVar24 = *puVar24 & ~uVar15;
        }
        iVar19 = (this->ComponentsInstanceData).ArrayNum;
        uVar22 = (ulonglong)(uVar20 + 1);
        uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
        uVar26 = uVar26 + 0x28;
      } while ((int)(uVar20 + 1) < iVar19);
    }
    uVar18 = local_1f0;
    bVar10 = AActor::IsChildActor(param_1);
    uVar22 = (ulonglong)local_110.ArrayNum;
    local_20c = local_110.ArrayNum;
    FVar16 = (ForElementType<UActorComponent_*>)&local_110;
    if (local_110.AllocatorInstance.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
      FVar16 = local_110.AllocatorInstance.SecondaryData;
    }
    FVar21 = (ForElementType<UActorComponent_*>)((longlong)FVar16 + uVar22 * 8);
    local_1f8 = FVar21;
    while( true ) {
      uVar15 = (uint)uVar18;
      local_1e0 = FVar16;
      if (local_110.ArrayNum != (uint)uVar22) {
        local_217 = 0;
        `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_217);
      }
      if (FVar16 == FVar21) break;
      local_1b8 = *(UObject **)FVar16;
      if ((local_1b8 != (UObject *)0x0) &&
         (((bVar10 || (local_1b8[4].field_0x19 == '\x01')) || (local_1b8[4].field_0x19 == '\x02'))))
      {
        local_1c0 = UObject::GetArchetype(local_1b8);
        iVar19 = 0;
        local_208 = CONCAT44(local_208._4_4_,uVar15);
        iVar25 = 0;
        uVar15 = 0;
        if (local_118 != 0) {
          FVar14 = (ForElementType<unsigned_int>)&local_130;
          if (local_130.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar14 = local_130.SecondaryData;
          }
          uVar15 = *(uint *)FVar14;
          while (uVar15 == 0) {
            lVar13 = (longlong)iVar19;
            iVar25 = iVar25 + 0x20;
            iVar19 = iVar19 + 1;
            uVar15 = local_118;
            if ((int)((local_118 - 1) + ((int)(local_118 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
            goto LAB_147809655;
            uVar15 = *(uint *)((uchar *)((longlong)FVar14 + 4) + lVar13 * 4);
          }
          local_208 = (ulonglong)(-uVar15 & uVar15);
          uVar22 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_1d0 = (int)lVar13;
          uVar15 = iVar25 + -1 + local_1d0;
          if ((int)local_118 < (int)uVar15) {
            uVar15 = local_118;
          }
        }
LAB_147809655:
        FVar21 = local_1f8;
        if ((int)uVar15 < (int)local_118) {
          local_214 = 0xffffffff;
          uVar12 = local_118;
          do {
            uVar20 = 0;
            if ((int)uVar15 < (this->ComponentsInstanceData).ArrayNum) {
              uVar20 = ~uVar15 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar12 = local_118, bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar5 = (this->ComponentsInstanceData).AllocatorInstance.Data;
            lVar13 = *(longlong *)(pFVar5 + (longlong)(int)uVar15 * 0x28 + 0x10);
            iVar4 = *(int *)(lVar13 + 100);
            cVar3 = *(char *)(lVar13 + 0x60);
            pUVar6 = *(UObject **)(lVar13 + 0x58);
            if (pUVar6 != (UObject *)0x0) {
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (UE::GC::MarkAsReachable(pUVar6), uVar12 = local_118,
                 UE::GC::GIsIncrementalReachabilityPending != false)) {
                UE::GC::MarkAsReachable(pUVar6);
                uVar12 = local_118;
              }
              if ((((*(longlong *)&pUVar6->field_0x10 == *(longlong *)&local_1c0->field_0x10) &&
                   ((pUVar6 == local_1c0 ||
                    ((uVar12 = local_118, GIsReinstancing != (atomic<bool>)0x0 &&
                     (*(longlong *)&pUVar6->field_0x18 == *(longlong *)&local_1c0->field_0x18))))))
                  && (cVar3 == local_1b8[4].field_0x19)) &&
                 ((cVar3 != '\x02' || ((-1 < iVar4 && (iVar4 == *(int *)&local_1b8[3].field_0x18))))
                 )) {
                plVar7 = *(longlong **)(pFVar5 + (longlong)(int)uVar15 * 0x28 + 0x10);
                (**(code **)(*plVar7 + 0x18))(plVar7,local_1b8,local_210);
                if ((((int)uVar15 < 0) || ((int)local_118 <= (int)uVar15)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar11)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                FVar14 = (ForElementType<unsigned_int>)&local_130;
                if (local_130.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                  FVar14 = local_130.SecondaryData;
                }
                uVar12 = uVar15;
                if ((int)uVar15 < 0) {
                  uVar12 = uVar15 + 0x1f;
                }
                puVar24 = (uint *)((longlong)FVar14 + (longlong)((int)uVar12 >> 5) * 4);
                *puVar24 = *puVar24 & ~((int)local_1f0 << ((byte)uVar15 & 0x1f));
                FVar21 = local_1f8;
                this = local_200;
                break;
              }
            }
            local_214 = ~(uint)local_208 & local_214;
            FVar14 = (ForElementType<unsigned_int>)&local_130;
            if (local_130.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar14 = local_130.SecondaryData;
            }
            uVar15 = local_214 & *(uint *)((longlong)FVar14 + (longlong)iVar19 * 4);
            while (uVar15 == 0) {
              lVar13 = (longlong)iVar19;
              iVar25 = iVar25 + 0x20;
              iVar19 = iVar19 + 1;
              uVar15 = uVar12;
              if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
              goto LAB_1478097e4;
              uVar15 = *(uint *)((uchar *)((longlong)FVar14 + 4) + lVar13 * 4);
              local_214 = 0xffffffff;
            }
            local_208 = CONCAT44(local_208._4_4_,-uVar15 & uVar15);
            uVar22 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
            lVar13 = 0x3f;
            if (uVar22 != 0) {
              for (; uVar22 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            local_1cc = (int)lVar13;
            uVar15 = iVar25 + -1 + local_1cc;
            if ((int)uVar12 < (int)uVar15) {
              uVar15 = uVar12;
            }
LAB_1478097e4:
            FVar21 = local_1f8;
            this = local_200;
          } while ((int)uVar15 < (int)uVar12);
        }
      }
      uVar22 = (ulonglong)local_20c;
      FVar16 = (ForElementType<UActorComponent_*>)((longlong)local_1e0 + 8);
      uVar18 = local_1f0;
    }
    iVar19 = *(int *)&(this->InstanceComponentTransformToRootMap).field_0x28;
    puVar1 = &(this->InstanceComponentTransformToRootMap).field_0x10;
    iStack_1a8 = 0;
    pTVar2 = &this->InstanceComponentTransformToRootMap;
    local_190 = 0;
    iStack_194 = 0;
    if (iVar19 != 0) {
      puVar24 = *(uint **)&(this->InstanceComponentTransformToRootMap).field_0x20;
      if (puVar24 == (uint *)0x0) {
        puVar24 = (uint *)puVar1;
      }
      uVar12 = *puVar24;
      while (uVar12 == 0) {
        lVar13 = (longlong)iStack_1a8;
        local_190 = local_190 + 0x20;
        iStack_1a8 = iStack_1a8 + 1;
        iStack_194 = iVar19;
        if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a8)
        goto LAB_14780992d;
        uVar12 = puVar24[lVar13 + 1];
      }
      uVar15 = -uVar12 & uVar12;
      uVar22 = (ulonglong)uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_1c8 = (int)lVar13;
      iStack_194 = local_190 + -1 + local_1c8;
      if (iVar19 < iStack_194) {
        iStack_194 = iVar19;
      }
    }
LAB_14780992d:
    uStack_18c = local_134;
    iStack_188 = *(int *)&(this->InstanceComponentTransformToRootMap).field_0x8 -
                 *(int *)&(this->InstanceComponentTransformToRootMap).field_0x34;
    uVar12 = *(uint *)&(this->InstanceComponentTransformToRootMap).field_0x28;
    uStack_198 = 0xffffffff;
    uVar20 = uVar12 & 0xffffffe0;
    TStack_178._padding_ = CONCAT44(uVar15,iStack_1a8);
    TStack_178.CurrentBitIndex = iStack_194;
    TStack_178.UnvisitedBitMask = 0xffffffff;
    iVar25 = (int)uVar12 >> 5;
    TStack_178._28_4_ = local_134;
    TStack_178.BaseBitIndex = local_190;
    uStack_158 = CONCAT44(uStack_184,iStack_188);
    local_1b0 = pTVar2;
    uStack_1a4 = uVar15;
    local_1a0 = puVar1;
    local_180 = pTVar2;
    TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar19 < (int)uVar12)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar15 = *(uint *)&(this->InstanceComponentTransformToRootMap).field_0x28;
    if (uVar12 != uVar15) {
      puVar23 = *(undefined1 **)&(this->InstanceComponentTransformToRootMap).field_0x20;
      if (puVar23 == (undefined1 *)0x0) {
        puVar23 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar25 * 4);
      while (uVar12 == 0) {
        lVar13 = (longlong)iVar25;
        uVar20 = uVar20 + 0x20;
        iVar25 = iVar25 + 1;
        uVar12 = uVar15;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
        goto LAB_147809a30;
        uVar12 = *(uint *)(puVar23 + lVar13 * 4 + 4);
      }
      uVar22 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_1c4 = (int)lVar13;
      uVar12 = local_1c4 + -1 + uVar20;
      if ((int)uVar15 < (int)uVar12) {
        uVar12 = uVar15;
      }
    }
LAB_147809a30:
    while( true ) {
      pTVar9 = local_180;
      if (*(int *)&local_180->field_0x8 - *(int *)&local_180->field_0x34 != (int)uStack_158) {
        local_216[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_216);
      }
      if (((TStack_178.CurrentBitIndex == uVar12) &&
          (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar9 == pTVar2)) break;
      puVar17 = (undefined8 *)((longlong)TStack_178.CurrentBitIndex * 0x80 + *(longlong *)pTVar9);
      if (((local_1e8->RootComponent).field0_0x0.DebugPtr == (USceneComponent *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Actor->GetRootComponent()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ComponentInstanceDataCache.cpp"
                              ,0x318,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      this_00 = (USceneComponent *)*puVar17;
      if ((this_00 != (USceneComponent *)0x0) && (((uint)this_00->_padding_ >> 0x1e & 1) != 0)) {
        local_1d8 = 0;
        (**(code **)(this_00->_padding_ + 0x508))
                  (this_00,(local_1e8->RootComponent).field0_0x0.DebugPtr);
        USceneComponent::SetRelativeTransform
                  (this_00,(TTransform<double> *)(puVar17 + 2),false,(FHitResult *)0x0,None);
      }
      TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
    }
    if (local_130.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_130.SecondaryData);
    }
    if (local_110.AllocatorInstance.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
      FMemory::Free((void *)local_110.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// CopySerializableProperties @ 147819600

void __thiscall
FComponentInstanceDataCache::CopySerializableProperties
          (FComponentInstanceDataCache *this,
          TArray<TStructOnScope<FActorComponentInstanceData>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  longlong lVar3;
  FStructOnScope *pFVar4;
  code *pcVar5;
  FField *pFVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  ulonglong uVar11;
  uchar *_Dst;
  int *piVar12;
  uchar *puVar13;
  FScriptContainerElement *pFVar14;
  FStructOnScope *pFVar15;
  undefined1 local_res10 [8];
  uint local_res18;
  FStructOnScope *local_res20;
  TFieldIterator<FProperty_const_> local_58;
  
  pFVar15 = (FStructOnScope *)(param_1->AllocatorInstance).Data;
  local_res18 = param_1->ArrayNum;
  uVar11 = (ulonglong)(int)local_res18;
  local_res20 = pFVar15 + uVar11;
LAB_147819640:
  do {
    pFVar4 = local_res20;
    if (param_1->ArrayNum != (int)uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TStructOnScope<FActorComponentInstanceData>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res10);
    }
    if (pFVar15 == pFVar4) {
      DestructItems<TStructOnScope<FActorComponentInstanceData>,int>
                ((TStructOnScope<FActorComponentInstanceData> *)(param_1->AllocatorInstance).Data,
                 param_1->ArrayNum);
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      return;
    }
    pFVar14 = (this->ComponentsInstanceData).AllocatorInstance.Data;
    pFVar1 = pFVar14 + (longlong)(this->ComponentsInstanceData).ArrayNum * 0x28;
    for (; pFVar14 != pFVar1; pFVar14 = pFVar14 + 0x28) {
      if (*(longlong *)(pFVar15->SampleStructMemory + 0x58) ==
          *(longlong *)(*(longlong *)(pFVar14 + 0x10) + 0x58)) {
        pUVar9 = FWeakObjectPtr::Get(&(pFVar15->ScriptStruct).WeakPtr);
        pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar14 + 8));
        if (pUVar9 == pUVar10) goto LAB_1478196bd;
      }
    }
    pFVar14 = (FScriptContainerElement *)0x0;
LAB_1478196bd:
    piVar12 = &(this->ComponentsInstanceData).ArrayNum;
    if (pFVar14 == (FScriptContainerElement *)0x0) {
      pFVar4 = (FStructOnScope *)(this->ComponentsInstanceData).AllocatorInstance.Data;
      if (((pFVar4 <= pFVar15) && (pFVar15 < pFVar4 + (this->ComponentsInstanceData).ArrayMax)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = *piVar12;
      piVar2 = &(this->ComponentsInstanceData).ArrayMax;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,(ForAnyElementType *)this,piVar2);
      }
      *piVar12 = iVar8 + 1;
      pFVar4 = (FStructOnScope *)
               ((this->ComponentsInstanceData).AllocatorInstance.Data + (longlong)iVar8 * 0x28);
      FStructOnScope::FStructOnScope(pFVar4,pFVar15);
      pFVar4->_padding_ = (longlong)&___7__TStructOnScope_UFActorComponentInstanceData____6B_;
    }
    else {
      local_58.Struct = (UStruct *)FWeakObjectPtr::Get(&(pFVar15->ScriptStruct).WeakPtr);
      if (local_58.Struct == (UStruct *)0x0) {
        local_58.Field = (FField *)0x0;
      }
      else {
        local_58.Field = (local_58.Struct)->ChildProperties;
      }
      local_58.InterfaceIndex = -1;
      local_58.bIncludeSuper = true;
      local_58.bIncludeDeprecated = true;
      local_58.bIncludeInterface = false;
      TFieldIterator<FProperty_const_>::IterateToNext(&local_58);
      if (local_58.Field != (FField *)0x0) {
        do {
          pFVar6 = local_58.Field;
          puVar13 = pFVar15->SampleStructMemory;
          if (((int)local_58.Field[1]._padding_ < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((puVar13 == (uchar *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar13 = puVar13 + *(int *)((longlong)&pFVar6[1].Owner.Container + 4);
          lVar3 = *(longlong *)(pFVar14 + 0x10);
          if (((int)pFVar6[1]._padding_ < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((lVar3 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          _Dst = (uchar *)(*(int *)((longlong)&pFVar6[1].Owner.Container + 4) + lVar3);
          if (_Dst != puVar13) {
            if ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1e & 1) == 0) {
              (**(code **)(pFVar6->_padding_ + 0xf0))(pFVar6,_Dst,puVar13,(int)pFVar6[1]._padding_);
            }
            else {
              memcpy(_Dst,puVar13,
                     (longlong)*(int *)((longlong)&pFVar6[1]._padding_ + 4) *
                     (longlong)(int)pFVar6[1]._padding_);
            }
          }
          local_58.Field = pFVar6->Next;
          TFieldIterator<FProperty_const_>::IterateToNext(&local_58);
        } while (local_58.Field != (FField *)0x0);
        uVar11 = (ulonglong)local_res18;
        pFVar15 = pFVar15 + 1;
        goto LAB_147819640;
      }
    }
    uVar11 = (ulonglong)local_res18;
    pFVar15 = pFVar15 + 1;
  } while( true );
}

// FindAndReplaceInstances @ 147822120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FComponentInstanceDataCache::FindAndReplaceInstances
          (FComponentInstanceDataCache *this,
          TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  TTransform<double> *pTVar3;
  longlong lVar4;
  UObject *pUVar5;
  undefined1 *puVar6;
  TTransform<double> *pTVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  TMap<USceneComponent_*,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USceneComponent_*,UE::Math::TTransform<double>,0>_>
  *this_00;
  UObject **ppUVar11;
  UClass *pUVar12;
  FString *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 *puVar17;
  FScriptContainerElement *pFVar18;
  undefined8 *puVar19;
  wchar_t *pwVar20;
  ForAnyElementType FVar21;
  wchar_t *pwVar22;
  TMap<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>_>
  *this_01;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_127 [3];
  uint local_124;
  FScriptContainerElement *local_120;
  TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
  *local_118;
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_110;
  TPairInitializer<TObjectPtr<USceneComponent>_&&,UE::Math::TTransform<double>_&&> local_100;
  UObject *local_f0;
  UObject **local_e8;
  undefined8 *local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  pFVar1 = (this->ComponentsInstanceData).AllocatorInstance.Data;
  iVar10 = (this->ComponentsInstanceData).ArrayNum;
  pFVar18 = pFVar1 + 0x10;
  local_118 = param_1;
  while( true ) {
    if ((this->ComponentsInstanceData).ArrayNum != iVar10) {
      local_128 = 0;
      `TCheckedPointerIterator<TStructOnScope<FActorComponentInstanceData>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_128);
    }
    if (pFVar18 + -0x10 == pFVar1 + (longlong)iVar10 * 0x28) break;
    bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pFVar18 + -8));
    if ((bVar9) && (plVar2 = *(longlong **)pFVar18, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
    }
    pFVar18 = pFVar18 + 0x28;
  }
  this_01 = &this->InstanceComponentTransformToRootMap;
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  this_00 = ObjectPtrDecay<TMap<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TMap<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>_>_>,TMap<USceneComponent_*,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USceneComponent_*,UE::Math::TTransform<double>,0>_>_>
                      (this_01);
  TMapBase<USceneComponent_*,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USceneComponent_*,UE::Math::TTransform<double>,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<USceneComponent_*,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USceneComponent_*,UE::Math::TTransform<double>,0>_>
              *)this_00,&local_110);
  uVar15 = (ulonglong)local_110.ArrayNum;
  pwVar22 = L"";
  local_124 = local_110.ArrayNum;
  local_120 = local_110.AllocatorInstance.Data + uVar15 * 8;
  pFVar18 = local_120;
  FVar21.Data = local_110.AllocatorInstance.Data;
LAB_1478221f0:
  if (local_110.ArrayNum != (int)uVar15) {
    local_127[0] = 0;
    `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_127);
  }
  if (FVar21.Data == pFVar18) {
    if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.AllocatorInstance.Data);
    }
    return;
  }
  pTVar3 = *(TTransform<double> **)FVar21.Data;
  ppUVar11 = TMapBase<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
             ::Find((TMapBase<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
                     *)param_1,(UObject *)pTVar3);
  if (ppUVar11 != (UObject **)0x0) {
    if (*ppUVar11 != (UObject *)0x0) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pTVar3 != (TTransform<double> *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pTVar3);
      }
      local_100.Value = pTVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pTVar3 != (TTransform<double> *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pTVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pTVar3 != (TTransform<double> *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pTVar3);
        }
      }
      uVar14 = ((uint)((ulonglong)pTVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar3 >> 4)) *
               -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      iVar10 = TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TObjectPtr<USceneComponent_const_>_>
                         ((TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                           *)this_01,uVar14 >> 0x10 ^ uVar14,
                          (TObjectPtr<USceneComponent_const_> *)&local_100.Value);
      if ((iVar10 == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("PairId.IsValidId()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x556,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar4 = *(longlong *)&this_01->field_0x0;
      lVar16 = (longlong)iVar10 * 0x80;
      puVar19 = (undefined8 *)(lVar16 + 0x10 + lVar4);
      local_a8 = *puVar19;
      uStack_a0 = puVar19[1];
      puVar19 = (undefined8 *)(lVar16 + 0x20 + lVar4);
      local_98 = *puVar19;
      uStack_90 = puVar19[1];
      puVar19 = (undefined8 *)(lVar16 + 0x30 + lVar4);
      local_88 = *puVar19;
      uStack_80 = puVar19[1];
      puVar19 = (undefined8 *)(lVar16 + 0x40 + lVar4);
      local_78 = *puVar19;
      uStack_70 = puVar19[1];
      puVar19 = (undefined8 *)(lVar16 + 0x50 + lVar4);
      local_68 = *puVar19;
      uStack_60 = puVar19[1];
      puVar19 = (undefined8 *)(lVar16 + 0x60 + lVar4);
      local_58 = *puVar19;
      uStack_50 = puVar19[1];
      TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                       *)this_01,iVar10);
      pUVar5 = *ppUVar11;
      if (pUVar5 == (UObject *)0x0) {
        pFVar13 = GetTypeName<USceneComponent>(&local_b8);
        if ((pFVar13->Data).ArrayNum != 0) {
          pwVar22 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar22);
      }
      pUVar12 = Z_Construct_UClass_USceneComponent_NoRegister();
      iVar10 = (int)pUVar12->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar10) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
          &pUVar12->_padding_)) {
        pFVar13 = GetTypeName<USceneComponent>(&local_d8);
        if ((pFVar13->Data).ArrayNum == 0) {
          pwVar20 = L"";
        }
        else {
          pwVar20 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
        pFVar13 = GetFullNameForCastLogError<UObject>(&local_c8,pUVar5);
        if ((pFVar13->Data).ArrayNum != 0) {
          pwVar22 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar22,pwVar20);
      }
      local_f0 = pUVar5;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_e8 = &local_f0;
      local_e0 = &local_a8;
      TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<TObjectPtr<USceneComponent>_&&,UE::Math::TTransform<double>_&&>_>
                ((TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                  *)this_01,&local_100,(bool *)&local_e8);
      uVar15 = (ulonglong)local_124;
      FVar21.Data = FVar21.Data + 8;
      pFVar18 = local_120;
      goto LAB_1478221f0;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pTVar3 != (TTransform<double> *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pTVar3);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pTVar3 != (TTransform<double> *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pTVar3);
      }
    }
    if (*(int *)&(this->InstanceComponentTransformToRootMap).field_0x8 ==
        *(int *)&(this->InstanceComponentTransformToRootMap).field_0x34) goto LAB_1478224c4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pTVar3 != (TTransform<double> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pTVar3);
    }
    uVar14 = ((uint)((ulonglong)pTVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar3 >> 4)) *
             -0x7a143595;
    uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
    puVar6 = *(undefined1 **)&(this->InstanceComponentTransformToRootMap).field_0x40;
    puVar17 = &(this->InstanceComponentTransformToRootMap).field_0x38;
    if (puVar6 != (undefined1 *)0x0) {
      puVar17 = puVar6;
    }
    iVar10 = *(int *)(puVar17 +
                     ((longlong)*(int *)&(this->InstanceComponentTransformToRootMap).field_0x48 - 1U
                     & (longlong)(int)(uVar14 >> 0x10 ^ uVar14)) * 4);
    param_1 = local_118;
    if (iVar10 != -1) {
      do {
        puVar19 = (undefined8 *)((longlong)iVar10 * 0x80 + *(longlong *)&this_01->field_0x0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pTVar3 != (TTransform<double> *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pTVar3);
        }
        pTVar7 = (TTransform<double> *)*puVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pTVar7 != (TTransform<double> *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pTVar7);
        }
        if (pTVar7 == pTVar3) {
          TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                           *)this_01,iVar10);
          pFVar18 = local_120;
          param_1 = local_118;
          goto LAB_1478224c4;
        }
        iVar10 = *(int *)(puVar19 + 0xe);
      } while (iVar10 != -1);
      FVar21.Data = FVar21.Data + 8;
      uVar15 = (ulonglong)local_124;
      pFVar18 = local_120;
      param_1 = local_118;
      goto LAB_1478221f0;
    }
  }
LAB_1478224c4:
  uVar15 = (ulonglong)local_124;
  FVar21.Data = FVar21.Data + 8;
  goto LAB_1478221f0;
}

// GetComponentHierarchy @ 1478353a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FComponentInstanceDataCache::GetComponentHierarchy
          (AActor *param_1,
          TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  USceneComponent *pUVar7;
  undefined1 *puVar8;
  TObjectPtr<USceneComponent>_u_0 TVar9;
  ForElementType<UActorComponent_*> FVar10;
  longlong lVar11;
  code *pcVar12;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar13;
  bool bVar14;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar15;
  UClass *pUVar16;
  FScriptContainerElement *pFVar17;
  ForElementType<UActorComponent_*> FVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  uint uVar24;
  undefined1 local_res8 [8];
  TObjectPtr<USceneComponent>_u_0 local_e0;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_d8;
  AActor *local_d0;
  TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> *local_c8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  pTVar15 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                      (&param_1->OwnedComponents);
  uVar21 = *(int *)&(pTVar15->Elements).field_0x8 - *(int *)&(pTVar15->Elements).field_0x34;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  iVar19 = 0;
  piVar2 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar2 < (int)uVar21) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
              (8,8,uVar21,&param_2->AllocatorInstance,0,piVar2);
  }
  pUVar7 = (param_1->RootComponent).field0_0x0.DebugPtr;
  local_d0 = param_1;
  local_c8 = param_2;
  if (pUVar7 != (USceneComponent *)0x0) {
    `FComponentInstanceDataCache::GetComponentHierarchy'::__l2::<lambda_1>::operator()
              (&local_d0,pUVar7);
  }
  pTVar15 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                      (&param_1->OwnedComponents);
  iVar5 = *(int *)&(pTVar15->Elements).field_0x28;
  uStack_b4 = 1;
  local_a0 = 0;
  puVar1 = &(pTVar15->Elements).field_0x10;
  iStack_a4 = 0;
  if (iVar5 != 0) {
    puVar23 = *(uint **)&(pTVar15->Elements).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar21 = *puVar23;
    while (uVar21 == 0) {
      iVar19 = iVar19 + 1;
      local_a0 = local_a0 + 0x20;
      iStack_a4 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1478354d8;
      uVar21 = puVar23[iVar19];
    }
    uStack_b4 = ~(uVar21 - 1) & uVar21;
    uVar4 = (ulonglong)uStack_b4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStack_a4 = (int)lVar11 + -1 + local_a0;
    if (iVar5 < iStack_a4) {
      iStack_a4 = iVar5;
    }
  }
LAB_1478354d8:
  uVar21 = *(uint *)&(pTVar15->Elements).field_0x28;
  uStack_9c = local_44;
  iStack_98 = *(int *)&(pTVar15->Elements).field_0x8 - *(int *)&(pTVar15->Elements).field_0x34;
  uVar24 = uVar21 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uStack_b4,iVar19);
  uStack_a8 = 0xffffffff;
  TStack_88.CurrentBitIndex = iStack_a4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar21 >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = local_a0;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  local_d8 = pTVar15;
  local_c0 = pTVar15;
  iStack_b8 = iVar19;
  local_b0 = puVar1;
  local_90 = pTVar15;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar5 < (int)uVar21)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pTVar13 = local_d8;
  uVar6 = *(uint *)&(pTVar15->Elements).field_0x28;
  if (uVar21 != uVar6) {
    puVar8 = *(undefined1 **)&(pTVar15->Elements).field_0x20;
    puVar22 = puVar1;
    if (puVar8 != (undefined1 *)0x0) {
      puVar22 = puVar8;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar20 * 4);
    while (uVar21 == 0) {
      iVar20 = iVar20 + 1;
      uVar24 = uVar24 + 0x20;
      uVar21 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar20) goto LAB_1478355f0;
      uVar21 = *(uint *)(puVar22 + (longlong)iVar20 * 4);
    }
    uVar4 = (ulonglong)(~(uVar21 - 1) & uVar21) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar21 = (int)lVar11 + -1 + uVar24;
    if ((int)uVar6 < (int)uVar21) {
      uVar21 = uVar6;
    }
  }
LAB_1478355f0:
  do {
    pTVar15 = local_90;
    if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
        (int)uStack_68) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_88.CurrentBitIndex == uVar21) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar15 == pTVar13)
       ) {
      return;
    }
    TVar9 = (TObjectPtr<USceneComponent>_u_0)
            ((TObjectPtr<USceneComponent>_u_0 *)
            (*(longlong *)&pTVar15->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10))->
            DebugPtr;
    local_e0 = TVar9;
    if (TVar9.DebugPtr == (USceneComponent *)0x0) {
LAB_1478356e7:
      if (local_e0.DebugPtr != (USceneComponent *)0x0) {
        FVar10 = (param_2->AllocatorInstance).SecondaryData;
        FVar18 = (ForElementType<UActorComponent_*>)param_2;
        if (FVar10 != (ForElementType<UActorComponent_*>)0x0) {
          FVar18 = FVar10;
        }
        if ((ulonglong)FVar18 <= &local_e0) {
          FVar18 = (ForElementType<UActorComponent_*>)param_2;
          if (FVar10 != (ForElementType<UActorComponent_*>)0x0) {
            FVar18 = FVar10;
          }
          if ((&local_e0 <
               (TObjectPtr<USceneComponent>_u_0 *)((longlong)FVar18 + (longlong)*piVar2 * 8)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        iVar19 = param_2->ArrayNum;
        if (iVar19 == *piVar2) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
                             (0x808,&param_2->AllocatorInstance,piVar2);
        }
        param_2->ArrayNum = iVar19 + 1;
        FVar10 = (param_2->AllocatorInstance).SecondaryData;
        FVar18 = (ForElementType<UActorComponent_*>)param_2;
        if (FVar10 != (ForElementType<UActorComponent_*>)0x0) {
          FVar18 = FVar10;
        }
        ((TObjectPtr<USceneComponent>_u_0 *)((longlong)FVar18 + (longlong)iVar19 * 8))->DebugPtr =
             (USceneComponent *)local_e0;
      }
    }
    else {
      pUVar16 = Z_Construct_UClass_USceneComponent_NoRegister();
      iVar19 = (int)pUVar16->_padding_;
      if ((*(int *)((TVar9.DebugPtr)->_padding_ + 0x38) < iVar19) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar9.DebugPtr)->_padding_ + 0x30) + (longlong)iVar19 * 8)
          != &pUVar16->_padding_)) goto LAB_1478356e7;
      if (TVar9.DebugPtr != (param_1->RootComponent).field0_0x0.DebugPtr) {
        pUVar7 = ((TVar9.DebugPtr)->AttachParent).field0_0x0.DebugPtr;
        if ((pUVar7 != (USceneComponent *)0x0) && ((AActor *)pUVar7->_padding_ == param_1)) {
          if (((TVar9.DebugPtr)->_padding_ & 1) != 0) goto LAB_1478357c3;
          pFVar17 = (pUVar7->AttachChildren).AllocatorInstance.Data;
          pFVar3 = pFVar17 + (longlong)(pUVar7->AttachChildren).ArrayNum * 8;
          for (; pFVar17 != pFVar3; pFVar17 = pFVar17 + 8) {
            if (*(USceneComponent **)pFVar17 == (USceneComponent *)0x0) {
              bVar14 = TVar9.DebugPtr == (USceneComponent *)0x0;
            }
            else {
              bVar14 = *(USceneComponent **)pFVar17 == TVar9.DebugPtr;
            }
            if (bVar14) goto LAB_1478357c3;
          }
        }
        `FComponentInstanceDataCache::GetComponentHierarchy'::__l2::<lambda_1>::operator()
                  (&local_d0,TVar9.DebugPtr);
      }
    }
LAB_1478357c3:
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  } while( true );
}

// Serialize @ 147863df0

void __thiscall
FComponentInstanceDataCache::Serialize(FComponentInstanceDataCache *this,FArchive *param_1)

{
  longlong *plVar1;
  char local_res10 [8];
  TArray<TStructOnScope<FActorComponentInstanceData>,TSizedDefaultAllocator<32>_> local_28;
  TArray<TStructOnScope<FActorComponentInstanceData>,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0] = '\0';
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
  }
  else {
    local_res10[0] = *(char *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if (local_res10[0] != '\0') {
    FArchiveState::SetError((FArchiveState *)param_1);
    return;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    TArrayPrivateFriend::
    Serialize<TStructOnScope<FActorComponentInstanceData>,TSizedDefaultAllocator<32>_>
              (param_1,&this->ComponentsInstanceData);
  }
  else {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    TArrayPrivateFriend::
    Serialize<TStructOnScope<FActorComponentInstanceData>,TSizedDefaultAllocator<32>_>
              (param_1,&local_28);
    local_18.AllocatorInstance.Data = local_28.AllocatorInstance.Data;
    local_18.ArrayNum = local_28.ArrayNum;
    local_18.ArrayMax = local_28.ArrayMax;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    CopySerializableProperties(this,&local_18);
    DestructItems<TStructOnScope<FActorComponentInstanceData>,int>
              ((TStructOnScope<FActorComponentInstanceData> *)local_28.AllocatorInstance.Data,
               local_28.ArrayNum);
    if ((TStructOnScope<FActorComponentInstanceData> *)local_28.AllocatorInstance.Data !=
        (TStructOnScope<FActorComponentInstanceData> *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  TSetPrivateFriend::
  Serialize<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                      *)&this->InstanceComponentTransformToRootMap);
  return;
}

