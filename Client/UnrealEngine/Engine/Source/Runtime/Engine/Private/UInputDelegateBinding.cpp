// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 147cad270

UClass * __cdecl UInputDelegateBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputDelegateBinding",
               &Z_Registration_Info_UClass_UInputDelegateBinding.InnerSingleton,
               StaticRegisterNativesUInputDelegateBinding,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputDelegateBinding>,
               InternalVTableHelperCtorCaller<UInputDelegateBinding>,local_res8,
               UDynamicBlueprintBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDelegateBinding.InnerSingleton;
}

// UInputDelegateBinding @ 147cc6be0

UInputDelegateBinding * __thiscall
UInputDelegateBinding::UInputDelegateBinding(UInputDelegateBinding *this,FVTableHelper *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this,param_1);
  *(undefined ***)this = &___7UInputDelegateBinding__6B_;
  return this;
}

// UInputDelegateBinding @ 147cc6c10

UInputDelegateBinding * __thiscall
UInputDelegateBinding::UInputDelegateBinding
          (UInputDelegateBinding *this,FObjectInitializer *param_1)

{
  bool bVar1;
  UClass *local_res8 [2];
  undefined8 local_res18 [2];
  
  UDynamicBlueprintBinding::UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this,param_1);
  *(undefined ***)this = &___7UInputDelegateBinding__6B_;
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar1) {
    local_res18[0] = *(undefined8 *)&this->field_0x10;
    TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Emplace<UClass_*>
              (&InputBindingClasses,local_res8,(bool *)local_res18);
  }
  return this;
}

// ~UInputDelegateBinding @ 147cc9670

void __thiscall UInputDelegateBinding::~UInputDelegateBinding(UInputDelegateBinding *this)

{
  *(undefined ***)this = &___7UInputDelegateBinding__6B_;
  UDynamicBlueprintBinding::~UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this);
  return;
}

// BindInputDelegates @ 147cd89f0

void __cdecl
UInputDelegateBinding::BindInputDelegates(UClass *param_1,UInputComponent *param_2,UObject *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *pTVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UDynamicBlueprintBinding *pUVar7;
  FString *pFVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  wchar_t *pwVar12;
  uint uVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  FString local_b8;
  FString local_a8;
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((param_1 != (UClass *)0x0) && (param_2 != (UInputComponent *)0x0)) {
    if (!bAlwaysAllowInputDelegateBindings) {
      pUVar6 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
      iVar5 = (int)pUVar6->_padding_;
      if (*(int *)(param_1->_padding_ + 0x38) < iVar5) {
        return;
      }
      if ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar6->_padding_) {
        return;
      }
    }
    if (param_3 == (UObject *)0x0) {
      param_3 = (UObject *)param_2->_padding_;
    }
    BindInputDelegates((UClass *)param_1->_padding_,param_2,param_3);
    iVar5 = InputBindingClasses.Elements._40_4_;
    iStack_90 = 0;
    uStack_8c = 1;
    local_78 = 0;
    iStack_7c = 0;
    if (InputBindingClasses.Elements._40_4_ != 0) {
      puVar16 = (uint *)&InputBindingClasses.Elements.field_0x10;
      if (InputBindingClasses.Elements._32_8_ != 0) {
        puVar16 = (uint *)InputBindingClasses.Elements._32_8_;
      }
      uVar11 = *puVar16;
      while (uVar11 == 0) {
        iStack_90 = iStack_90 + 1;
        local_78 = local_78 + 0x20;
        iStack_7c = InputBindingClasses.Elements._40_4_;
        if ((int)(InputBindingClasses.Elements._40_4_ + -1 +
                 (InputBindingClasses.Elements._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90)
        goto LAB_147cd8b1c;
        uVar11 = puVar16[iStack_90];
      }
      uStack_8c = ~(uVar11 - 1) & uVar11;
      uVar1 = (ulonglong)uStack_8c * 2 + 1;
      lVar15 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iStack_7c = (int)lVar15 + -1 + local_78;
      if ((int)InputBindingClasses.Elements._40_4_ < iStack_7c) {
        iStack_7c = InputBindingClasses.Elements._40_4_;
      }
    }
LAB_147cd8b1c:
    local_98 = &InputBindingClasses;
    iStack_70 = InputBindingClasses.Elements._8_4_ - InputBindingClasses.Elements._52_4_;
    local_88 = 0x154c44ca0;
    uStack_80 = 0xffffffff;
    uVar11 = InputBindingClasses.Elements._40_4_ & 0xffffffe0;
    TStack_60.CurrentBitIndex = iStack_7c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
    local_68 = &InputBindingClasses;
    iVar10 = (int)InputBindingClasses.Elements._40_4_ >> 5;
    TStack_60._28_4_ = iStack_7c;
    TStack_60.BaseBitIndex = local_78;
    uStack_40 = CONCAT44(uStack_6c,iStack_70);
    bVar9 = InputBindingClasses.Elements._40_1_;
    TStack_60.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&InputBindingClasses.Elements.field_0x10;
    iStack_74 = iStack_7c;
    if (((int)InputBindingClasses.Elements._40_4_ < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iVar5 != InputBindingClasses.Elements._40_4_) {
      lVar15 = 0x154c44ca0;
      if (InputBindingClasses.Elements._32_8_ != 0) {
        lVar15 = InputBindingClasses.Elements._32_8_;
      }
      uVar13 = -1 << (bVar9 & 0x1f) & *(uint *)(lVar15 + (longlong)iVar10 * 4);
      while (uVar13 == 0) {
        iVar10 = iVar10 + 1;
        uVar11 = uVar11 + 0x20;
        iVar5 = InputBindingClasses.Elements._40_4_;
        if ((int)((InputBindingClasses.Elements._40_4_ + -1 >> 0x1f & 0x1fU) +
                 InputBindingClasses.Elements._40_4_ + -1) >> 5 < iVar10) goto LAB_147cd8c30;
        uVar13 = *(uint *)(lVar15 + (longlong)iVar10 * 4);
      }
      uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar5 = (int)lVar15 + -1 + uVar11;
      if ((int)InputBindingClasses.Elements._40_4_ < iVar5) {
        iVar5 = InputBindingClasses.Elements._40_4_;
      }
    }
LAB_147cd8c30:
    while( true ) {
      pTVar3 = local_68;
      if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
          (int)uStack_40) {
        `TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_60.CurrentBitIndex == iVar5) &&
          (TStack_60.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&InputBindingClasses.Elements.field_0x10)) &&
         (pTVar3 == &InputBindingClasses)) break;
      pUVar7 = UBlueprintGeneratedClass::GetDynamicBindingObject
                         (param_1,*(UClass **)
                                   (*(longlong *)&pTVar3->Elements +
                                   (longlong)TStack_60.CurrentBitIndex * 0x10));
      if (pUVar7 != (UDynamicBlueprintBinding *)0x0) {
        pUVar6 = StaticClass();
        iVar10 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar10) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
            &pUVar6->_padding_)) {
          pFVar8 = GetTypeName<UInputDelegateBinding>(&local_b8);
          pwVar12 = L"";
          if ((pFVar8->Data).ArrayNum == 0) {
            pwVar14 = L"";
          }
          else {
            pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
          pFVar8 = GetFullNameForCastLogError<UDynamicBlueprintBinding>(&local_a8,pUVar7);
          if ((pFVar8->Data).ArrayNum != 0) {
            pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar12,pwVar14);
        }
        (**(code **)(*(longlong *)pUVar7 + 0x2c8))(pUVar7,param_2,param_3);
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// BindInputDelegatesWithSubojects @ 147cd8d40

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

void __cdecl
UInputDelegateBinding::BindInputDelegatesWithSubojects(AActor *param_1,UInputComponent *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  UInputComponent *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  undefined8 *puVar8;
  UClass *pUVar9;
  bool bVar10;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  UClass *local_100;
  undefined8 local_f8 [24];
  undefined8 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId67,"UInputDelegateBinding::BindInputDelegatesWithSubojects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InputDelegateBinding.cpp"
               ,0x43);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId67);
  }
  if ((((param_1 == (AActor *)0x0) || (param_2 == (UInputComponent *)0x0)) &&
      (`UInputDelegateBinding::BindInputDelegatesWithSubojects'::__l2::<lambda_1>::operator()
                 (local_108), param_1 == (AActor *)0x0)) ||
     ((pUVar9 = (UClass *)param_1->_padding_, pUVar9 == (UClass *)0x0 ||
      (param_2 == (UInputComponent *)0x0)))) goto LAB_147cd8f92;
  if (bAlwaysAllowInputDelegateBindings == false) {
    pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar5->_padding_)) goto LAB_147cd8f92;
  }
  BindInputDelegates(pUVar9,param_2,(UObject *)param_2->_padding_);
  pUVar7 = (UClass *)0x0;
  pUVar9 = (UClass *)0x0;
  local_2c = 0x18;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 != (UClass *)0x0) goto LAB_147cd8e79;
  }
  else {
    pUVar9 = pUVar7;
    if (pUVar5 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_147cd8e79:
      pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
      pUVar9 = pUVar7;
      if (pUVar6 != (UClass *)0x0) {
        iVar2 = (int)pUVar6->_padding_;
        if (((int)pUVar5->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar9 = pUVar5;
        }
      }
    }
  }
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_100 = pUVar5;
  if (pUVar9 == pUVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f8);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f8);
  }
  iVar2 = local_30;
  puVar8 = local_f8;
  if (local_38 != (undefined8 *)0x0) {
    puVar8 = local_38;
  }
  puVar1 = puVar8 + local_30;
  while( true ) {
    if (local_30 != iVar2) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_108);
    }
    if (puVar8 == puVar1) break;
    pUVar3 = (UInputComponent *)*puVar8;
    if (((pUVar3 != (UInputComponent *)0x0) && ((UClass *)pUVar3->_padding_ != (UClass *)0x0)) &&
       (pUVar3 != param_2)) {
      BindInputDelegates((UClass *)pUVar3->_padding_,param_2,(UObject *)pUVar3);
    }
    puVar8 = puVar8 + 1;
  }
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free(local_38);
  }
LAB_147cd8f92:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BindToInputComponent @ 147cda820

void __thiscall
UInputDelegateBinding::BindToInputComponent
          (UInputDelegateBinding *this,UInputComponent *param_1,UObject *param_2)

{
  return;
}

// GetPrivateStaticClass @ 147d0c860

UClass * __cdecl UInputDelegateBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputDelegateBinding",
               &Z_Registration_Info_UClass_UInputDelegateBinding.InnerSingleton,
               StaticRegisterNativesUInputDelegateBinding,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputDelegateBinding>,
               InternalVTableHelperCtorCaller<UInputDelegateBinding>,local_res8,
               UDynamicBlueprintBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDelegateBinding.InnerSingleton;
}

// StaticRegisterNativesUInputDelegateBinding @ 147d32940

void __cdecl UInputDelegateBinding::StaticRegisterNativesUInputDelegateBinding(void)

{
  return;
}

// SupportsInputDelegate @ 147d329c0

bool __cdecl UInputDelegateBinding::SupportsInputDelegate(UClass *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (bAlwaysAllowInputDelegateBindings) {
    return true;
  }
  if (param_1 != (UClass *)0x0) {
    pUVar2 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return true;
    }
  }
  return false;
}

// operator() @ 15051b510

bool __thiscall
`UInputDelegateBinding::BindInputDelegatesWithSubojects'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6211255942537805755>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6211255942537805755>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

