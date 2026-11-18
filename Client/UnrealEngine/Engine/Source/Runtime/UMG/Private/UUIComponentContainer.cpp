// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 20

// StaticClass @ 146a49600

UClass * __cdecl UUIComponentContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIComponentContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UIComponentContainer",
               &Z_Registration_Info_UClass_UUIComponentContainer.InnerSingleton,
               StaticRegisterNativesUUIComponentContainer,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UUIComponentContainer>,
               InternalVTableHelperCtorCaller<UUIComponentContainer>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIComponentContainer.InnerSingleton;
}

// UUIComponentContainer @ 146a56690

UUIComponentContainer * __thiscall
UUIComponentContainer::UUIComponentContainer(UUIComponentContainer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UUIComponentContainer__6B_;
  (this->Components).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Components).ArrayNum = 0;
  (this->Components).ArrayMax = 0;
  return this;
}

// UUIComponentContainer @ 146a566d0

UUIComponentContainer * __thiscall
UUIComponentContainer::UUIComponentContainer
          (UUIComponentContainer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UUIComponentContainer__6B_;
  (this->Components).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Components).ArrayNum = 0;
  (this->Components).ArrayMax = 0;
  return this;
}

// ~UUIComponentContainer @ 146a587d0

void __thiscall UUIComponentContainer::~UUIComponentContainer(UUIComponentContainer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UUIComponentContainer__6B_;
  pFVar1 = (this->Components).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 146a5a040

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UUIComponentContainer::CleanupUIComponents'::__l17::<lambda_2>::operator()
          (void *this,TObjectPtr<UWidget> param_1)

{
  ForElementType<FName> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<FName> FVar6;
  uint uVar7;
  longlong lVar8;
  ForElementType<FName> FVar9;
  uint uVar10;
  longlong lVar11;
  
  if ((*(longlong *)param_1.field0_0x0 != 0) &&
     (uVar10 = *(int *)(*(longlong *)this + 0x28) - 1, -1 < (int)uVar10)) {
    lVar11 = (longlong)(int)uVar10 * 8;
    do {
      lVar8 = *(longlong *)this;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)(lVar8 + 0x28)) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)(lVar8 + 0x20) != 0) {
        lVar8 = *(longlong *)(lVar8 + 0x20);
      }
      if (*(longlong *)(lVar11 + lVar8) == *(longlong *)(*(longlong *)param_1.field0_0x0 + 0x18)) {
        FVar1 = *(ForElementType<FName> *)this;
        FVar6 = FVar1;
        if (*(ForElementType<FName> *)((longlong)FVar1 + 0x20) != (ForElementType<FName>)0x0) {
          FVar6 = *(ForElementType<FName> *)((longlong)FVar1 + 0x20);
        }
        for (FVar9 = FVar6;
            FVar9 != (ForElementType<FName>)
                     ((longlong)FVar6 + (longlong)*(int *)((longlong)FVar1 + 0x28) * 8);
            FVar9 = (ForElementType<FName>)((longlong)FVar9 + 8)) {
          if (*(longlong *)FVar9 == *(longlong *)(lVar11 + lVar8)) {
            uVar7 = (uint)((longlong)FVar9 - (longlong)FVar6 >> 3);
            if (uVar7 != 0xffffffff) {
              uVar4 = 0;
              if ((int)(uVar7 + 1) <= *(int *)((longlong)FVar1 + 0x28)) {
                uVar4 = ~uVar7 >> 0x1f;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FVar6 = FVar1;
              if (*(ForElementType<FName> *)((longlong)FVar1 + 0x20) != (ForElementType<FName>)0x0)
              {
                FVar6 = *(ForElementType<FName> *)((longlong)FVar1 + 0x20);
              }
              iVar5 = *(int *)((longlong)FVar1 + 0x28) + ~uVar7;
              if (1 < iVar5) {
                iVar5 = 1;
              }
              if (iVar5 != 0) {
                memmove((void *)((longlong)FVar6 + (longlong)(int)uVar7 * 8),
                        (void *)((longlong)FVar6 +
                                (longlong)(*(int *)((longlong)FVar1 + 0x28) - iVar5) * 8),
                        (longlong)iVar5 << 3);
              }
              *(int *)((longlong)FVar1 + 0x28) = *(int *)((longlong)FVar1 + 0x28) + -1;
              UE::Core::Private::
              ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                        (8,4,(ForElementType<FName> *)FVar1,*(int *)((longlong)FVar1 + 0x28),
                         (int *)((longlong)FVar1 + 0x2c));
            }
            break;
          }
        }
      }
      lVar11 = lVar11 + -8;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  return;
}

// AddComponent @ 146a5cbf0

void __thiscall
UUIComponentContainer::AddComponent(UUIComponentContainer *this,FName param_1,UUIComponent *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UUIComponent *pUVar6;
  
  if ((param_1 == (FName)0x0) || (param_2 == (UUIComponent *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7114033960505573337>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentContainer.cpp"
                       ,0x27,"!TargetName.IsNone() && Component != nullptr");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pUVar6 = GetComponent(this,(UClass *)param_2->_padding_,param_1);
    if (pUVar6 == (UUIComponent *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      iVar5 = (this->Components).ArrayNum;
      piVar1 = &(this->Components).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->Components).AllocatorInstance,piVar1);
      }
      (this->Components).ArrayNum = iVar5 + 1;
      pFVar2 = (this->Components).AllocatorInstance.Data;
      *(FName *)(pFVar2 + (longlong)iVar5 * 0x10) = param_1;
      *(UUIComponent **)(pFVar2 + (longlong)iVar5 * 0x10 + 8) = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
        return;
      }
    }
  }
  return;
}

// CleanupUIComponents @ 146a60840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UUIComponentContainer::CleanupUIComponents(UUIComponentContainer *this,UWidgetTree *param_1)

{
  TArray<FUIComponentTarget,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  ForElementType<FName> FVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  UUIComponentContainer *pUVar11;
  UUIComponentContainer *pUVar12;
  longlong lVar13;
  uint uVar14;
  ForElementType<FName> FVar15;
  longlong lVar16;
  undefined1 auStackY_e8 [32];
  undefined1 local_b8 [4];
  uint local_b4;
  UUIComponentContainer *local_b0;
  FName local_a8;
  ForElementType<FName> local_a0;
  TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *local_98;
  UUIComponentContainer *local_90;
  code *local_88;
  TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> **local_80;
  TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_78;
  ulonglong local_48;
  
  if (param_1 != (UWidgetTree *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
    uVar14 = (this->Components).ArrayNum - 1;
    local_78.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 4;
    pUVar11 = this;
    local_b0 = this;
    if (-1 < (int)uVar14) {
      pTVar1 = &this->Components;
      lVar13 = (longlong)(int)uVar14 << 4;
      do {
        uVar10 = ~uVar14 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar14 < (this->Components).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = (this->Components).ArrayNum;
        if (*(longlong *)((pTVar1->AllocatorInstance).Data + lVar13 + 8) == 0) {
          uVar6 = 0;
          if ((int)uVar14 < iVar8) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar7 = (pTVar1->AllocatorInstance).Data + lVar13;
          iVar8 = (this->Components).ArrayNum + ~uVar14;
          if (iVar8 != 0) {
            memmove(pFVar7,pFVar7 + 0x10,(longlong)iVar8 << 4);
          }
          piVar2 = &(this->Components).ArrayNum;
          *piVar2 = *piVar2 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&pTVar1->AllocatorInstance,(this->Components).ArrayNum,
                     &(this->Components).ArrayMax);
        }
        else {
          uVar6 = 0;
          if ((int)uVar14 < iVar8) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(longlong *)((pTVar1->AllocatorInstance).Data + lVar13) != 0) {
            uVar6 = 0;
            if ((int)uVar14 < (this->Components).ArrayNum) {
              uVar6 = uVar10;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_a8 = *(FName *)((pTVar1->AllocatorInstance).Data + lVar13);
            TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
            AddUniqueImpl<FName>(&local_78,&local_a8);
          }
        }
        pUVar11 = local_b0;
        lVar13 = lVar13 + -0x10;
        uVar14 = uVar14 - 1;
      } while (-1 < (int)uVar14);
      if (0 < local_78.ArrayNum) {
        local_98 = &local_78;
        local_90 = local_b0;
        local_80 = &local_98;
        local_88 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UUIComponentContainer::CleanupUIComponents'::__l17::<lambda_2>,void,UWidget_*>
                   ::Call;
        UWidgetTree::ForEachWidget(param_1,(TFunctionRef<void___cdecl(UWidget_*)> *)&local_88);
      }
    }
    uVar9 = (ulonglong)local_78.ArrayNum;
    local_b4 = local_78.ArrayNum;
    if (0 < local_78.ArrayNum) {
      FVar15 = (ForElementType<FName>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
        FVar15 = local_78.AllocatorInstance.SecondaryData;
      }
      local_a0 = (ForElementType<FName>)((longlong)FVar15 + uVar9 * 8);
      while( true ) {
        FVar4 = local_a0;
        if (local_78.ArrayNum != (uint)uVar9) {
          local_b8[0] = 0;
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_b8)
          ;
        }
        if (FVar15 == FVar4) break;
        uVar14 = (pUVar11->Components).ArrayNum - 1;
        lVar13 = *(longlong *)FVar15;
        pUVar12 = pUVar11;
        if (-1 < (int)uVar14) {
          pTVar1 = &pUVar11->Components;
          lVar16 = (longlong)(int)uVar14 << 4;
          do {
            uVar10 = ~uVar14 >> 0x1f;
            uVar6 = 0;
            if ((int)uVar14 < (pUVar11->Components).ArrayNum) {
              uVar6 = uVar10;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(longlong *)((pTVar1->AllocatorInstance).Data + lVar16) == lVar13) {
              uVar6 = 0;
              if ((int)uVar14 < (pUVar11->Components).ArrayNum) {
                uVar6 = uVar10;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar7 = (pTVar1->AllocatorInstance).Data + lVar16;
              iVar8 = (pUVar11->Components).ArrayNum + ~uVar14;
              if (iVar8 != 0) {
                memmove(pFVar7,pFVar7 + 0x10,(longlong)iVar8 << 4);
              }
              piVar2 = &(pUVar11->Components).ArrayNum;
              *piVar2 = *piVar2 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&pTVar1->AllocatorInstance,(pUVar11->Components).ArrayNum,
                         &(pUVar11->Components).ArrayMax);
            }
            lVar16 = lVar16 + -0x10;
            uVar14 = uVar14 - 1;
            pUVar12 = local_b0;
          } while (-1 < (int)uVar14);
        }
        uVar9 = (ulonglong)local_b4;
        FVar15 = (ForElementType<FName>)((longlong)FVar15 + 8);
        pUVar11 = pUVar12;
      }
    }
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
      FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// ForEachComponent @ 146a72160

void __thiscall
UUIComponentContainer::ForEachComponent
          (UUIComponentContainer *this,TFunctionRef<void___cdecl(UUIComponent_*)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong local_res8;
  
  iVar1 = (this->Components).ArrayNum;
  pFVar2 = (this->Components).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Components).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FUIComponentTarget_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(longlong *)(pFVar2 + 8) != 0) {
      local_res8 = *(longlong *)(pFVar2 + 8);
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8);
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// ForEachComponentTarget @ 146a721e0

void __thiscall
UUIComponentContainer::ForEachComponentTarget
          (UUIComponentContainer *this,
          TFunctionRef<void___cdecl(FUIComponentTarget_const_&)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Components).ArrayNum;
  pFVar2 = (this->Components).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Components).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FUIComponentTarget_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar2);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// GetComponent @ 146a73cd0

UUIComponent * __thiscall
UUIComponentContainer::GetComponent(UUIComponentContainer *this,UClass *param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UUIComponent *pUVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = (this->Components).ArrayNum - 1;
  if (-1 < (int)uVar7) {
    lVar6 = (longlong)(int)uVar7 << 4;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->Components).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UUIComponent *)(*pcVar2)();
        return pUVar5;
      }
      pFVar1 = (this->Components).AllocatorInstance.Data;
      if ((*(FName *)(pFVar1 + lVar6) == param_2) &&
         (pUVar5 = *(UUIComponent **)(pFVar1 + lVar6 + 8), (UClass *)pUVar5->_padding_ == param_1))
      {
        return pUVar5;
      }
      lVar6 = lVar6 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  return (UUIComponent *)0x0;
}

// GetPrivateStaticClass @ 146a77e60

UClass * __cdecl UUIComponentContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIComponentContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UIComponentContainer",
               &Z_Registration_Info_UClass_UUIComponentContainer.InnerSingleton,
               StaticRegisterNativesUUIComponentContainer,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UUIComponentContainer>,
               InternalVTableHelperCtorCaller<UUIComponentContainer>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIComponentContainer.InnerSingleton;
}

// GetPropertyNameForComponent @ 146a78b50

FName __cdecl
UUIComponentContainer::GetPropertyNameForComponent(UUIComponent *param_1,FName *param_2)

{
  FString *pFVar1;
  FName *pFVar2;
  int iVar3;
  FName *in_R8;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar1 = ::FName::ToString(in_R8,&local_18);
  ::FString::FString(&local_28,"_");
  local_res8 = param_2[3];
  ::FName::ToString(&local_res8,&local_38);
  ::FString::ConcatFF(&local_48,&local_38,&local_28);
  ::FString::ConcatFF(&local_58,&local_48,pFVar1);
  iVar3 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  pFVar2 = ::FName::FName(&local_res8,iVar3,(wchar_t *)local_58.Data.AllocatorInstance.Data,
                          FNAME_Add);
  param_1->_padding_ = (longlong)*pFVar2;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// InitializeComponents @ 146a7abd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUIComponentContainer::InitializeComponents(UUIComponentContainer *this,UUserWidget *param_1)

{
  int iVar1;
  FName FVar2;
  UWidgetTree *this_00;
  code *pcVar3;
  bool bVar4;
  UWidget *this_01;
  UObject *pUVar5;
  FName *pFVar6;
  FName *pFVar7;
  undefined1 local_res8 [8];
  UWidget *local_res18 [2];
  
  iVar1 = (this->Components).ArrayNum;
  pFVar6 = (FName *)(this->Components).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 2;
LAB_146a7ac07:
  do {
    if ((this->Components).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FUIComponentTarget,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar7) {
      return;
    }
    FVar2 = pFVar6[1];
    if (FVar2 != (FName)0x0) {
      if ((*pFVar6 != (FName)0x0) &&
         (this_00 = (param_1->WidgetTree).field0_0x0.DebugPtr, this_00 != (UWidgetTree *)0x0)) {
        this_01 = UWidgetTree::FindWidget(this_00,pFVar6);
        if (this_01 != (UWidget *)0x0) {
          if (*(char *)((longlong)FVar2 + 0x50) != '\0') {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<9109232056897896462>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponent.cpp"
                               ,0xe,"!bInitialized");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          bVar4 = UWidget::IsConstructed(this_01);
          if (bVar4) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<9109232056897896463>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponent.cpp"
                               ,0xf,"!Target->IsConstructed()");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if ((*(int *)((longlong)FVar2 + 0x30) != 0) || (*(int *)((longlong)FVar2 + 0x34) != 0)) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<9109232056897896465>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponent.cpp"
                               ,0x11,"Owner.IsExplicitlyNull()");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          local_res18[0] = this_01;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          FWeakObjectPtr::operator=
                    ((FWeakObjectPtr *)((longlong)FVar2 + 0x30),(FObjectPtr)local_res18);
          pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar2 + 0x30));
          pUVar5[6].field_0xa = pUVar5[6].field_0xa | 1;
          (**(code **)(*(longlong *)FVar2 + 0x2c0))(FVar2);
          pFVar6 = pFVar6 + 2;
          *(undefined1 *)((longlong)FVar2 + 0x50) = 1;
          goto LAB_146a7ac07;
        }
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7114033960505573168>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentContainer.cpp"
                         ,0xd0,"Widget");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar6 = pFVar6 + 2;
  } while( true );
}

// IsEmpty @ 146a7c240

bool __thiscall UUIComponentContainer::IsEmpty(UUIComponentContainer *this)

{
  return (this->Components).ArrayNum == 0;
}

// MoveComponent @ 146a7d1f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UUIComponentContainer::MoveComponent
          (UUIComponentContainer *this,FName param_1,UClass *param_2,UClass *param_3,bool param_4)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FName *pFVar13;
  uint uVar14;
  FName local_38;
  FName local_30;
  
  if (((param_1 == (FName)0x0) || (param_2 == (UClass *)0x0)) || (param_2 == param_3)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7114033960505573249>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentContainer.cpp"
                       ,0x7f,
                       "!TargetName.IsNone() && ComponentClassToMove != nullptr && ComponentClassToMove != RelativeToComponentClass"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    uVar9 = 0;
    uVar14 = 0;
    local_38.ComparisonIndex.Value = 0;
    local_38.Number = 0;
    local_30.ComparisonIndex.Value = 0;
    local_30.Number = 0;
    uVar11 = uVar9;
    uVar12 = uVar9;
    if (0 < (this->Components).ArrayNum) {
      do {
        uVar10 = (uint)uVar11;
        uVar5 = 0;
        if ((int)uVar10 < (this->Components).ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar13 = (FName *)((this->Components).AllocatorInstance.Data + uVar12);
        FVar2 = *pFVar13;
        if ((FVar2 == param_1) && (*(UClass **)((longlong)pFVar13[1] + 0x10) == param_2)) {
          local_38 = FVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pFVar13[1] != (FName)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pFVar13[1]);
          }
          local_30 = pFVar13[1];
          TArray<FUIComponentTarget,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->Components,uVar10,No);
          break;
        }
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar12 = uVar12 + 0x10;
      } while ((int)(uVar10 + 1) < (this->Components).ArrayNum);
    }
    if ((local_38 != (FName)0x0) && (local_30 != (FName)0x0)) {
      if ((param_3 != (UClass *)0x0) && (uVar11 = uVar9, 0 < (this->Components).ArrayNum)) {
        do {
          uVar10 = (uint)uVar11;
          uVar5 = 0;
          if ((int)uVar10 < (this->Components).ArrayNum) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar7 = (this->Components).AllocatorInstance.Data;
          if ((*(FName *)(pFVar7 + uVar9) == param_1) &&
             (*(UClass **)(*(longlong *)(pFVar7 + uVar9 + 8) + 0x10) == param_3)) {
            uVar14 = uVar10 + 1;
            if (!param_4) {
              uVar14 = uVar10;
            }
            break;
          }
          uVar9 = uVar9 + 0x10;
          uVar11 = (ulonglong)(uVar10 + 1);
        } while ((int)(uVar10 + 1) < (this->Components).ArrayNum);
      }
      pFVar13 = (FName *)(this->Components).AllocatorInstance.Data;
      if (((pFVar13 <= &local_38) &&
          (&local_38 < pFVar13 + (longlong)(this->Components).ArrayMax * 2)) &&
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
      iVar6 = (this->Components).ArrayNum;
      piVar1 = &(this->Components).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->Components).AllocatorInstance,piVar1);
      }
      pFVar7 = (this->Components).AllocatorInstance.Data;
      (this->Components).ArrayNum = iVar6 + 1;
      lVar8 = (longlong)(int)uVar14 * 0x10;
      pFVar7 = pFVar7 + lVar8;
      memmove(pFVar7 + 0x10,pFVar7,(longlong)(int)(iVar6 - uVar14) << 4);
      pFVar7 = (this->Components).AllocatorInstance.Data;
      *(FName *)(pFVar7 + lVar8) = local_38;
      *(FName *)(pFVar7 + lVar8 + 8) = local_30;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_30);
      }
    }
  }
  return;
}

// RemoveAllComponentsFor @ 146a8eee0

void __thiscall
UUIComponentContainer::RemoveAllComponentsFor(UUIComponentContainer *this,FName param_1)

{
  TArray<FUIComponentTarget,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *_Dst;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar7 = (this->Components).ArrayNum - 1;
  if (-1 < (int)uVar7) {
    pTVar1 = &this->Components;
    lVar8 = (longlong)(int)uVar7 << 4;
    do {
      uVar9 = ~uVar7 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar7 < (this->Components).ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(FName *)((pTVar1->AllocatorInstance).Data + lVar8) == param_1) {
        uVar5 = 0;
        if ((int)uVar7 < (this->Components).ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (pTVar1->AllocatorInstance).Data + lVar8;
        iVar6 = (this->Components).ArrayNum + ~uVar7;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + 0x10,(longlong)iVar6 << 4);
        }
        piVar2 = &(this->Components).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&pTVar1->AllocatorInstance,(this->Components).ArrayNum,
                   &(this->Components).ArrayMax);
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  return;
}

// RemoveAllComponentsOfType @ 146a8f030

void __thiscall
UUIComponentContainer::RemoveAllComponentsOfType
          (UUIComponentContainer *this,UClass *param_1,FName param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  if ((param_2 == (FName)0x0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7114033960505573297>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentContainer.cpp"
                         ,0x4f,"!TargetName.IsNone()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar7 = (this->Components).ArrayNum - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    do {
      uVar9 = ~uVar7 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar7 < (this->Components).ArrayNum) {
        uVar4 = uVar9;
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
      pFVar5 = (this->Components).AllocatorInstance.Data;
      if ((*(UClass **)(*(longlong *)(pFVar5 + lVar8 + 8) + 0x10) == param_1) &&
         (*(FName *)(pFVar5 + lVar8) == param_2)) {
        uVar4 = 0;
        if ((int)uVar7 < (this->Components).ArrayNum) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar5 = (this->Components).AllocatorInstance.Data + lVar8;
        iVar6 = (this->Components).ArrayNum + ~uVar7;
        if (iVar6 != 0) {
          memmove(pFVar5,pFVar5 + 0x10,(longlong)iVar6 << 4);
        }
        piVar1 = &(this->Components).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Components).AllocatorInstance,(this->Components).ArrayNum,
                   &(this->Components).ArrayMax);
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  return;
}

// RemoveComponent @ 146a8f8e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UUIComponentContainer::RemoveComponent
          (UUIComponentContainer *this,FName param_1,UUIComponent *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  if ((param_1 == (FName)0x0) || (param_2 == (UUIComponent *)0x0)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7114033960505573315>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentContainer.cpp"
                       ,0x3d,"!TargetName.IsNone() && Component != nullptr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar6 = 0;
    if (0 < (this->Components).ArrayNum) {
      lVar5 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->Components).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->Components).AllocatorInstance.Data;
        if (*(UUIComponent **)(pFVar1 + lVar5 + 8) == param_2) {
          if ((*(FName *)(pFVar1 + lVar5) != param_1) &&
             (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_7114033960505573308>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentContainer.cpp"
                                 ,0x44,"Target.GetTargetName() == TargetName"), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          TArray<FUIComponentTarget,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->Components,uVar6,Default);
          return;
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x10;
      } while ((int)uVar6 < (this->Components).ArrayNum);
    }
  }
  return;
}

// RenameWidget @ 146a907a0

void __thiscall
UUIComponentContainer::RenameWidget(UUIComponentContainer *this,FName *param_1,FName *param_2)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Components).ArrayNum;
  pFVar2 = (FName *)(this->Components).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 2;
  while( true ) {
    if ((this->Components).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FUIComponentTarget,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*pFVar2 == *param_1) {
      *pFVar2 = *param_2;
    }
    pFVar2 = pFVar2 + 2;
  }
  return;
}

// StaticRegisterNativesUUIComponentContainer @ 146a96810

void __cdecl UUIComponentContainer::StaticRegisterNativesUUIComponentContainer(void)

{
  return;
}

