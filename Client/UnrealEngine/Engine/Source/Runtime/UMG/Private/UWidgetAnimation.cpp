// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 35

// StaticClass @ 1468dab30

UClass * __cdecl UWidgetAnimation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetAnimation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetAnimation",
               &Z_Registration_Info_UClass_UWidgetAnimation.InnerSingleton,
               StaticRegisterNativesUWidgetAnimation,0xa0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWidgetAnimation>,
               InternalVTableHelperCtorCaller<UWidgetAnimation>,local_res8,
               UMovieSceneSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetAnimation.InnerSingleton;
}

// UWidgetAnimation @ 146902710

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UWidgetAnimation * __thiscall
UWidgetAnimation::UWidgetAnimation(UWidgetAnimation *this,FVTableHelper *param_1)

{
  UMovieSceneSequence::UMovieSceneSequence((UMovieSceneSequence *)this,param_1);
  this->_padding_ = (longlong)&___7UWidgetAnimation__6B_;
  (this->MovieScene).field0_0x0.DebugPtr = (UMovieScene *)0x0;
  (this->AnimationBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationBindings).ArrayNum = 0;
  (this->AnimationBindings).ArrayMax = 0;
  (this->DisplayLabel).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayLabel).Data.ArrayNum = 0;
  (this->DisplayLabel).Data.ArrayMax = 0;
  return this;
}

// UWidgetAnimation @ 146902760

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UWidgetAnimation * __thiscall
UWidgetAnimation::UWidgetAnimation(UWidgetAnimation *this,FObjectInitializer *param_1)

{
  UMovieSceneSequence::UMovieSceneSequence((UMovieSceneSequence *)this,param_1);
  this->bLegacyFinishOnStop = true;
  this->_padding_ = (longlong)&___7UWidgetAnimation__6B_;
  (this->MovieScene).field0_0x0.DebugPtr = (UMovieScene *)0x0;
  (this->AnimationBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationBindings).ArrayNum = 0;
  (this->AnimationBindings).ArrayMax = 0;
  (this->DisplayLabel).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayLabel).Data.ArrayNum = 0;
  (this->DisplayLabel).Data.ArrayMax = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  return this;
}

// ~UWidgetAnimation @ 146904f50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UWidgetAnimation::~UWidgetAnimation(UWidgetAnimation *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWidgetAnimation__6B_;
  pFVar1 = (this->DisplayLabel).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWidgetAnimationBinding,int>
            ((FWidgetAnimationBinding *)(this->AnimationBindings).AllocatorInstance.Data,
             (this->AnimationBindings).ArrayNum);
  pFVar1 = (this->AnimationBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneSequence::~UMovieSceneSequence((UMovieSceneSequence *)this);
  return;
}

// BindPossessableObject @ 14690d2d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UWidgetAnimation::BindPossessableObject
          (UWidgetAnimation *this,FGuid *param_1,UObject *param_2,UObject *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  FFieldClass *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  int iVar8;
  UUserWidget *pUVar9;
  FFieldClass *pFVar10;
  FField *pFVar11;
  UClass *pUVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  FScriptContainerElement local_e8;
  UObject *local_e0;
  undefined1 local_d8 [16];
  ForAnyElementType local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  FScriptContainerElement local_98;
  UObject *local_90;
  undefined1 local_88 [16];
  ForAnyElementType local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  FScriptContainerElement local_48;
  UObject *local_40;
  undefined1 local_38 [16];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  pUVar9 = CastChecked<UUserWidget,UObject>(param_3);
  if ((UUserWidget *)param_2 != pUVar9) {
    if (param_2 != (UObject *)0x0) {
      pUVar12 = Z_Construct_UClass_UPanelSlot_NoRegister();
      iVar8 = (int)pUVar12->_padding_;
      if ((iVar8 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar12->_padding_)) {
        if (*(longlong *)&param_2[1].field_0x8 == 0) {
          return;
        }
        local_60 = *(undefined8 *)&param_2->field_0x18;
        local_58._0_4_ = param_1->A;
        local_58._4_4_ = param_1->B;
        uStack_50._0_4_ = param_1->C;
        uStack_50._4_4_ = param_1->D;
        pFVar14 = (this->AnimationBindings).AllocatorInstance.Data;
        local_40 = (UObject *)0x0;
        local_38._0_8_ = (FField *)0x0;
        local_38._8_4_ = 0;
        local_38._12_4_ = 0;
        local_28.Data = (FScriptContainerElement *)0x0;
        local_20._0_4_ = 0;
        local_20._4_4_ = 0;
        local_68 = *(undefined8 *)(*(longlong *)&param_2[1].field_0x8 + 0x18);
        local_48 = (FScriptContainerElement)0x0;
        if (((pFVar14 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 <
             pFVar14 + (longlong)(this->AnimationBindings).ArrayMax * 0x50)) &&
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
        iVar8 = (this->AnimationBindings).ArrayNum;
        piVar3 = &(this->AnimationBindings).ArrayMax;
        if (iVar8 == *piVar3) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&(this->AnimationBindings).AllocatorInstance,piVar3);
        }
        (this->AnimationBindings).ArrayNum = iVar8 + 1;
        pFVar14 = (this->AnimationBindings).AllocatorInstance.Data + (longlong)iVar8 * 0x50;
        *(undefined8 *)pFVar14 = local_68;
        *(undefined8 *)(pFVar14 + 8) = local_60;
        *(undefined8 *)(pFVar14 + 0x10) = local_58;
        *(undefined8 *)(pFVar14 + 0x18) = uStack_50;
        pFVar14[0x20] = local_48;
        *(UObject **)(pFVar14 + 0x28) = local_40;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_40);
        }
        *(undefined8 *)(pFVar14 + 0x30) = 0;
        pFVar1 = pFVar14 + 0x40;
        pFVar2 = pFVar14 + 0x4c;
        *(undefined8 *)(pFVar14 + 0x38) = 0;
        *(int *)pFVar2 = 0;
        *(FScriptContainerElement **)&pFVar1->field_0x0 = (FScriptContainerElement *)0x0;
        *(undefined4 *)(pFVar14 + 0x48) = 0;
        pFVar10 = FProperty::StaticClass();
        if ((((FField *)local_38._0_8_ == (FField *)0x0) ||
            (bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_38 + 8)),
            pFVar11 = (FField *)local_38._0_8_, !bVar7)) &&
           (pFVar11 = (FField *)local_38._0_8_, (int)local_20 != 0)) {
          pFVar11 = FFieldPath::TryToResolvePath
                              ((FFieldPath *)local_38,(UStruct *)0x0,UseStructIfOuterNotFound);
          if (pFVar11 != (FField *)0x0) {
            if ((pFVar10 == (FFieldClass *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("FieldType",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x2dd,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = pFVar11->ClassPrivate;
            if (pFVar10->Id == CASTCLASS_None) {
              for (; pFVar4 != (FFieldClass *)0x0; pFVar4 = pFVar4->SuperClass) {
                if (pFVar4 == pFVar10) {
                  bVar7 = true;
                  goto LAB_14690d788;
                }
              }
              bVar7 = false;
            }
            else {
              bVar7 = (pFVar4->CastFlags & pFVar10->Id) != CASTCLASS_None;
            }
LAB_14690d788:
            if (bVar7) goto LAB_14690d7a4;
          }
          pFVar11 = (FField *)local_38._0_8_;
          if ((FField *)local_38._0_8_ != (FField *)0x0) {
            local_38._8_4_ = 0;
            local_38._12_4_ = 0;
            local_38._0_8_ = (FField *)0x0;
            pFVar11 = (FField *)local_38._0_8_;
          }
        }
LAB_14690d7a4:
        local_38._0_8_ = pFVar11;
        FVar6.Data = local_28.Data;
        *(undefined8 *)(pFVar14 + 0x30) = local_38._0_8_;
        *(undefined4 *)(pFVar14 + 0x38) = local_38._8_4_;
        *(undefined4 *)(pFVar14 + 0x3c) = local_38._12_4_;
        FVar13.Data = local_28.Data;
        if (pFVar1 != (FScriptContainerElement *)(local_38 + 0x10)) {
          iVar8 = (int)local_20;
          lVar15 = (longlong)(int)local_20;
          *(int *)(pFVar14 + 0x48) = (int)local_20;
          if (((int)local_20 == 0) && (*(int *)pFVar2 == 0)) {
            *(int *)pFVar2 = 0;
            FVar13.Data = local_28.Data;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,(int)local_20,*(int *)pFVar2,(ForAnyElementType *)pFVar1,(int)local_20,
                       (int *)pFVar2);
            FVar13.Data = local_28.Data;
            if (iVar8 != 0) {
              memcpy(*(FScriptContainerElement **)&pFVar1->field_0x0,FVar6.Data,lVar15 << 3);
              FVar13.Data = local_28.Data;
            }
          }
        }
        goto LAB_14690da77;
      }
    }
    local_b8 = *(undefined8 *)&param_2->field_0x18;
    local_a8._0_4_ = param_1->A;
    local_a8._4_4_ = param_1->B;
    uStack_a0._0_4_ = param_1->C;
    uStack_a0._4_4_ = param_1->D;
    pFVar14 = (this->AnimationBindings).AllocatorInstance.Data;
    local_b0 = 0;
    local_90 = (UObject *)0x0;
    local_88._0_8_ = (FField *)0x0;
    local_88._8_4_ = 0;
    local_88._12_4_ = 0;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70._0_4_ = 0;
    local_70._4_4_ = 0;
    local_98 = (FScriptContainerElement)0x0;
    if (((pFVar14 <= (FScriptContainerElement *)&local_b8) &&
        ((FScriptContainerElement *)&local_b8 <
         pFVar14 + (longlong)(this->AnimationBindings).ArrayMax * 0x50)) &&
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
    iVar8 = (this->AnimationBindings).ArrayNum;
    piVar3 = &(this->AnimationBindings).ArrayMax;
    if (iVar8 == *piVar3) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(this->AnimationBindings).AllocatorInstance,piVar3);
    }
    (this->AnimationBindings).ArrayNum = iVar8 + 1;
    pFVar14 = (this->AnimationBindings).AllocatorInstance.Data + (longlong)iVar8 * 0x50;
    *(undefined8 *)pFVar14 = local_b8;
    *(undefined8 *)(pFVar14 + 8) = local_b0;
    *(undefined8 *)(pFVar14 + 0x10) = local_a8;
    *(undefined8 *)(pFVar14 + 0x18) = uStack_a0;
    pFVar14[0x20] = local_98;
    *(UObject **)(pFVar14 + 0x28) = local_90;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_90);
    }
    *(undefined8 *)(pFVar14 + 0x30) = 0;
    pFVar1 = pFVar14 + 0x40;
    pFVar2 = pFVar14 + 0x4c;
    *(undefined8 *)(pFVar14 + 0x38) = 0;
    *(int *)pFVar2 = 0;
    *(FScriptContainerElement **)&pFVar1->field_0x0 = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar14 + 0x48) = 0;
    pFVar10 = FProperty::StaticClass();
    if ((((FField *)local_88._0_8_ == (FField *)0x0) ||
        (bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_88 + 8)),
        pFVar11 = (FField *)local_88._0_8_, !bVar7)) &&
       (pFVar11 = (FField *)local_88._0_8_, (int)local_70 != 0)) {
      pFVar11 = FFieldPath::TryToResolvePath
                          ((FFieldPath *)local_88,(UStruct *)0x0,UseStructIfOuterNotFound);
      if (pFVar11 != (FField *)0x0) {
        if ((pFVar10 == (FFieldClass *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("FieldType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x2dd,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = pFVar11->ClassPrivate;
        if (pFVar10->Id == CASTCLASS_None) {
          for (; pFVar4 != (FFieldClass *)0x0; pFVar4 = pFVar4->SuperClass) {
            if (pFVar4 == pFVar10) {
              bVar7 = true;
              goto LAB_14690d9e8;
            }
          }
          bVar7 = false;
        }
        else {
          bVar7 = (pFVar4->CastFlags & pFVar10->Id) != CASTCLASS_None;
        }
LAB_14690d9e8:
        if (bVar7) goto LAB_14690da04;
      }
      pFVar11 = (FField *)local_88._0_8_;
      if ((FField *)local_88._0_8_ != (FField *)0x0) {
        local_88._8_4_ = 0;
        local_88._12_4_ = 0;
        local_88._0_8_ = (FField *)0x0;
        pFVar11 = (FField *)local_88._0_8_;
      }
    }
LAB_14690da04:
    local_88._0_8_ = pFVar11;
    FVar6.Data = local_78.Data;
    *(undefined8 *)(pFVar14 + 0x30) = local_88._0_8_;
    *(undefined4 *)(pFVar14 + 0x38) = local_88._8_4_;
    *(undefined4 *)(pFVar14 + 0x3c) = local_88._12_4_;
    FVar13.Data = local_78.Data;
    if (pFVar1 != (FScriptContainerElement *)(local_88 + 0x10)) {
      iVar8 = (int)local_70;
      lVar15 = (longlong)(int)local_70;
      *(int *)(pFVar14 + 0x48) = (int)local_70;
      if (((int)local_70 == 0) && (*(int *)pFVar2 == 0)) {
        *(int *)pFVar2 = 0;
        FVar13.Data = local_78.Data;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,(int)local_70,*(int *)pFVar2,(ForAnyElementType *)pFVar1,(int)local_70,
                   (int *)pFVar2);
        FVar13.Data = local_78.Data;
        if (iVar8 != 0) {
          memcpy(*(FScriptContainerElement **)&pFVar1->field_0x0,FVar6.Data,lVar15 << 3);
          FVar13.Data = local_78.Data;
        }
      }
    }
    goto LAB_14690da77;
  }
  local_108 = *(undefined8 *)&param_2->field_0x18;
  local_f8._0_4_ = param_1->A;
  local_f8._4_4_ = param_1->B;
  uStack_f0._0_4_ = param_1->C;
  uStack_f0._4_4_ = param_1->D;
  pFVar14 = (this->AnimationBindings).AllocatorInstance.Data;
  local_100 = 0;
  local_e0 = (UObject *)0x0;
  local_d8._0_8_ = (FField *)0x0;
  local_d8._8_4_ = 0;
  local_d8._12_4_ = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  local_e8 = (FScriptContainerElement)0x1;
  if (((pFVar14 <= (FScriptContainerElement *)&local_108) &&
      ((FScriptContainerElement *)&local_108 <
       pFVar14 + (longlong)(this->AnimationBindings).ArrayMax * 0x50)) &&
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
  iVar8 = (this->AnimationBindings).ArrayNum;
  piVar3 = &(this->AnimationBindings).ArrayMax;
  if (iVar8 == *piVar3) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&(this->AnimationBindings).AllocatorInstance,piVar3);
  }
  (this->AnimationBindings).ArrayNum = iVar8 + 1;
  pFVar14 = (this->AnimationBindings).AllocatorInstance.Data + (longlong)iVar8 * 0x50;
  *(undefined8 *)pFVar14 = local_108;
  *(undefined8 *)(pFVar14 + 8) = local_100;
  *(undefined8 *)(pFVar14 + 0x10) = local_f8;
  *(undefined8 *)(pFVar14 + 0x18) = uStack_f0;
  pFVar14[0x20] = local_e8;
  *(UObject **)(pFVar14 + 0x28) = local_e0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_e0);
  }
  *(undefined8 *)(pFVar14 + 0x30) = 0;
  pFVar1 = pFVar14 + 0x40;
  pFVar2 = pFVar14 + 0x4c;
  *(undefined8 *)(pFVar14 + 0x38) = 0;
  *(int *)pFVar2 = 0;
  *(FScriptContainerElement **)&pFVar1->field_0x0 = (FScriptContainerElement *)0x0;
  *(undefined4 *)(pFVar14 + 0x48) = 0;
  pFVar10 = FProperty::StaticClass();
  if ((((FField *)local_d8._0_8_ == (FField *)0x0) ||
      (bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_d8 + 8)),
      pFVar11 = (FField *)local_d8._0_8_, !bVar7)) &&
     (pFVar11 = (FField *)local_d8._0_8_, (int)local_c0 != 0)) {
    pFVar11 = FFieldPath::TryToResolvePath
                        ((FFieldPath *)local_d8,(UStruct *)0x0,UseStructIfOuterNotFound);
    if (pFVar11 != (FField *)0x0) {
      if ((pFVar10 == (FFieldClass *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = pFVar11->ClassPrivate;
      if (pFVar10->Id == CASTCLASS_None) {
        for (; pFVar4 != (FFieldClass *)0x0; pFVar4 = pFVar4->SuperClass) {
          if (pFVar4 == pFVar10) {
            bVar7 = true;
            goto LAB_14690d4e3;
          }
        }
        bVar7 = false;
      }
      else {
        bVar7 = (pFVar4->CastFlags & pFVar10->Id) != CASTCLASS_None;
      }
LAB_14690d4e3:
      if (bVar7) goto LAB_14690d4ff;
    }
    pFVar11 = (FField *)local_d8._0_8_;
    if ((FField *)local_d8._0_8_ != (FField *)0x0) {
      local_d8._8_4_ = 0;
      local_d8._12_4_ = 0;
      local_d8._0_8_ = (FField *)0x0;
      pFVar11 = (FField *)local_d8._0_8_;
    }
  }
LAB_14690d4ff:
  local_d8._0_8_ = pFVar11;
  FVar6.Data = local_c8.Data;
  *(undefined8 *)(pFVar14 + 0x30) = local_d8._0_8_;
  *(undefined4 *)(pFVar14 + 0x38) = local_d8._8_4_;
  *(undefined4 *)(pFVar14 + 0x3c) = local_d8._12_4_;
  FVar13.Data = local_c8.Data;
  if (pFVar1 != (FScriptContainerElement *)(local_d8 + 0x10)) {
    iVar8 = (int)local_c0;
    lVar15 = (longlong)(int)local_c0;
    *(int *)(pFVar14 + 0x48) = (int)local_c0;
    if (((int)local_c0 == 0) && (*(int *)pFVar2 == 0)) {
      *(int *)pFVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,(int)local_c0,*(int *)pFVar2,(ForAnyElementType *)pFVar1,(int)local_c0,
                 (int *)pFVar2);
      FVar13.Data = local_c8.Data;
      if (iVar8 != 0) {
        memcpy(*(FScriptContainerElement **)&pFVar1->field_0x0,FVar6.Data,lVar15 << 3);
        FVar13.Data = local_c8.Data;
      }
    }
  }
LAB_14690da77:
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  return;
}

// BindToAnimationFinished @ 14690dab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UWidgetAnimation::BindToAnimationFinished
          (UWidgetAnimation *this,UUserWidget *param_1,FWidgetAnimationDynamicEvent *param_2)

{
  code *pcVar1;
  bool bVar2;
  FWidgetAnimationDynamicEvent local_38;
  FReadAccessScope local_20;
  
  if (param_1 == (UUserWidget *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6268838667859525838>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimation.cpp"
                       ,0xce,"Widget");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_38._0_8_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_20);
    local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
    local_38._16_8_ = *(undefined8 *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    UUserWidget::BindToAnimationFinished(param_1,this,&local_38);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// BindToAnimationStarted @ 14690db60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UWidgetAnimation::BindToAnimationStarted
          (UWidgetAnimation *this,UUserWidget *param_1,FWidgetAnimationDynamicEvent *param_2)

{
  code *pcVar1;
  bool bVar2;
  FWidgetAnimationDynamicEvent local_38;
  FReadAccessScope local_20;
  
  if (param_1 == (UUserWidget *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6268838667859525814>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimation.cpp"
                       ,0xb6,"Widget");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_38._0_8_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_20);
    local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
    local_38._16_8_ = *(undefined8 *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    UUserWidget::BindToAnimationStarted(param_1,this,&local_38);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// CanPossessObject @ 14690ffd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UWidgetAnimation::CanPossessObject(UWidgetAnimation *this,UObject *param_1,UObject *param_2)

{
  int iVar1;
  bool bVar2;
  UUserWidget *pUVar3;
  UClass *pUVar4;
  
  if (param_2 == (UObject *)0x0) {
    return false;
  }
  pUVar3 = CastChecked<UUserWidget,UObject>(param_2);
  if ((UUserWidget *)param_1 != pUVar3) {
    if (param_1 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UPanelSlot_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar4->_padding_)) && (*(longlong *)&param_1[1].field_0x8 == 0)) {
        return false;
      }
    }
    pUVar4 = Z_Construct_UClass_UVisual_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) {
      return false;
    }
    if ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_) {
      return false;
    }
    bVar2 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)param_1,(UObject *)pUVar3);
    if (!bVar2) {
      return false;
    }
  }
  return true;
}

// CreateDirectorInstance @ 146912d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UObject * __thiscall
UWidgetAnimation::CreateDirectorInstance
          (UWidgetAnimation *this,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1
          ,FMovieSceneSequenceID param_2)

{
  UObject *pUVar1;
  UUserWidget *pUVar2;
  
  pUVar1 = FWeakObjectPtr::Get(&(param_1->Object->WeakPlaybackContext).WeakPtr);
  pUVar2 = CastChecked<UUserWidget,UObject>(pUVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (UObject *)pUVar2;
}

// GetEndTime @ 14691e190

float __thiscall UWidgetAnimation::GetEndTime(UWidgetAnimation *this)

{
  UMovieScene *pUVar1;
  FFrameRate FVar2;
  code *pcVar3;
  TRangeBound<FFrameNumber> TVar4;
  bool bVar5;
  int iVar6;
  float fVar7;
  FFrameNumber FStack_c;
  
  pUVar1 = (this->MovieScene).field0_0x0.DebugPtr;
  TVar4 = (pUVar1->PlaybackRange).Value.UpperBound;
  FVar2 = pUVar1->TickResolution;
  if ((pUVar1->PlaybackRange).Value.UpperBound.Type.Value == '\x02') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar7 = (float)(*pcVar3)();
      return fVar7;
    }
  }
  FStack_c = TVar4.Value.Value;
  iVar6 = FVar2.Denominator;
  return ((float)((longlong)iVar6 * (longlong)FStack_c.Value) + (float)iVar6 * 0.0) /
         (float)FVar2.Numerator;
}

// GetMovieScene @ 14691ff20

UMovieScene * __thiscall UWidgetAnimation::GetMovieScene(UWidgetAnimation *this)

{
  return (this->MovieScene).field0_0x0.DebugPtr;
}

// GetParentObject @ 146920ae0

UObject * __thiscall UWidgetAnimation::GetParentObject(UWidgetAnimation *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UPanelSlot_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return *(UObject **)&param_1[1].field_0x8;
    }
  }
  return (UObject *)0x0;
}

// GetPrivateStaticClass @ 146923270

UClass * __cdecl UWidgetAnimation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetAnimation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetAnimation",
               &Z_Registration_Info_UClass_UWidgetAnimation.InnerSingleton,
               StaticRegisterNativesUWidgetAnimation,0xa0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWidgetAnimation>,
               InternalVTableHelperCtorCaller<UWidgetAnimation>,local_res8,
               UMovieSceneSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetAnimation.InnerSingleton;
}

// GetStartTime @ 146924480

/* WARNING: Type propagation algorithm not settling */

float __thiscall UWidgetAnimation::GetStartTime(UWidgetAnimation *this)

{
  UMovieScene *pUVar1;
  FFrameRate FVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  float fVar7;
  
  pUVar1 = (this->MovieScene).field0_0x0.DebugPtr;
  iVar4 = (pUVar1->PlaybackRange).Value.LowerBound.Value.Value;
  FVar2 = pUVar1->TickResolution;
  if ((pUVar1->PlaybackRange).Value.LowerBound.Type.Value == '\x02') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar7 = (float)(*pcVar3)();
      return fVar7;
    }
  }
  iVar6 = FVar2.Denominator;
  return ((float)((longlong)iVar6 * (longlong)iVar4) + (float)iVar6 * 0.0) / (float)FVar2.Numerator;
}

// IsPostLoadThreadSafe @ 14692cbe0

bool __thiscall UWidgetAnimation::IsPostLoadThreadSafe(UWidgetAnimation *this)

{
  return true;
}

// LocateBoundObjects @ 14692d700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UWidgetAnimation::LocateBoundObjects
          (UWidgetAnimation *this,FGuid *param_1,FResolveParams *param_2,
          TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_4)

{
  int iVar1;
  ForElementType<UObject_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UUserWidget *pUVar6;
  ForElementType<UObject_*> FVar7;
  FWidgetAnimationBinding *this_00;
  FWidgetAnimationBinding *pFVar8;
  undefined1 local_res18 [8];
  UObject *local_48;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> local_40;
  
  if ((param_2->Context != (UObject *)0x0) &&
     (pUVar6 = CastChecked<UUserWidget,UObject>(param_2->Context),
     (pUVar6->WidgetTree).field0_0x0.DebugPtr != (UWidgetTree *)0x0)) {
    this_00 = (FWidgetAnimationBinding *)(this->AnimationBindings).AllocatorInstance.Data;
    iVar1 = (this->AnimationBindings).ArrayNum;
    pFVar8 = this_00 + iVar1;
    while( true ) {
      if ((this->AnimationBindings).ArrayNum != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FWidgetAnimationBinding_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (this_00 == pFVar8) break;
      if ((((this_00->AnimationGuid).D == param_1->D && (this_00->AnimationGuid).C == param_1->C) &&
          (this_00->AnimationGuid).B == param_1->B) && (this_00->AnimationGuid).A == param_1->A) {
        local_40.Object = param_3->Object;
        local_40.SharedReferenceCount.ReferenceController =
             (param_3->SharedReferenceCount).ReferenceController;
        if (local_40.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_40.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_40.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_48 = FWidgetAnimationBinding::FindRuntimeObject
                             (this_00,(pUVar6->WidgetTree).field0_0x0.DebugPtr,pUVar6,
                              (UMovieSceneSequence *)this,&local_40);
        if (local_48 != (UObject *)0x0) {
          FVar2 = (param_4->AllocatorInstance).SecondaryData;
          FVar7 = (ForElementType<UObject_*>)param_4;
          if (FVar2 != (ForElementType<UObject_*>)0x0) {
            FVar7 = FVar2;
          }
          if ((ulonglong)FVar7 <= &local_48) {
            FVar7 = (ForElementType<UObject_*>)param_4;
            if (FVar2 != (ForElementType<UObject_*>)0x0) {
              FVar7 = FVar2;
            }
            if ((&local_48 < (UObject **)((longlong)FVar7 + (longlong)param_4->ArrayMax * 8)) &&
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
          iVar5 = param_4->ArrayNum;
          if (iVar5 == param_4->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                              (0x808,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar5 + 1;
          FVar2 = (param_4->AllocatorInstance).SecondaryData;
          FVar7 = (ForElementType<UObject_*>)param_4;
          if (FVar2 != (ForElementType<UObject_*>)0x0) {
            FVar7 = FVar2;
          }
          *(UObject **)((longlong)FVar7 + (longlong)iVar5 * 8) = local_48;
        }
      }
      this_00 = this_00 + 1;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// PostLoad @ 146933320

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UWidgetAnimation::PostLoad(UWidgetAnimation *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  UFunction *pUVar4;
  FFieldClass *pFVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  bool bVar7;
  int iVar8;
  FMovieScenePossessable *pFVar9;
  FFieldClass *pFVar10;
  FField *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 local_res10 [8];
  FGuid local_78;
  FGuid local_68;
  undefined8 local_58;
  FFieldPath FStack_50;
  
  local_78 = FSequencerObjectVersion::GUID;
  iVar8 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_78);
  if (iVar8 < 9) {
    this->bLegacyFinishOnStop = false;
  }
  local_68 = FFortniteMainBranchObjectVersion::GUID;
  iVar8 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_68);
  if (iVar8 < 0xa2) {
    iVar14 = 0;
    iVar8 = UMovieScene::GetPossessableCount((this->MovieScene).field0_0x0.DebugPtr);
    if (0 < iVar8) {
      do {
        pFVar9 = UMovieScene::GetPossessable((this->MovieScene).field0_0x0.DebugPtr,iVar14);
        if ((pFVar9->DynamicBinding_DEPRECATED).Function.field0_0x0.DebugPtr != (UFunction *)0x0) {
          iVar8 = (this->AnimationBindings).ArrayNum;
          pFVar12 = (this->AnimationBindings).AllocatorInstance.Data;
          pFVar13 = pFVar12 + (longlong)iVar8 * 0x50;
          while( true ) {
            if ((this->AnimationBindings).ArrayNum != iVar8) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<FWidgetAnimationBinding,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(local_res10);
            }
            if (pFVar12 == pFVar13) goto LAB_1469335e8;
            if (((*(uint *)(pFVar12 + 0x1c) == (pFVar9->Guid).D &&
                 *(uint *)(pFVar12 + 0x18) == (pFVar9->Guid).C) &&
                *(uint *)(pFVar12 + 0x14) == (pFVar9->Guid).B) &&
                *(uint *)(pFVar12 + 0x10) == (pFVar9->Guid).A) break;
            pFVar12 = pFVar12 + 0x50;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar4 = (pFVar9->DynamicBinding_DEPRECATED).Function.field0_0x0.DebugPtr,
             pUVar4 != (UFunction *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          *(TObjectPtr<UFunction>_u_0 *)(pFVar12 + 0x28) =
               (pFVar9->DynamicBinding_DEPRECATED).Function.field0_0x0;
          pFVar10 = FProperty::StaticClass();
          FFieldPath::GetTyped
                    ((FFieldPath *)&(pFVar9->DynamicBinding_DEPRECATED).ResolveParamsProperty,
                     pFVar10,(UStruct *)0x0);
          puVar1 = &(pFVar9->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
          *(undefined8 *)(pFVar12 + 0x30) =
               *(undefined8 *)&(pFVar9->DynamicBinding_DEPRECATED).ResolveParamsProperty;
          *(undefined8 *)(pFVar12 + 0x38) =
               *(undefined8 *)&(pFVar9->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
          TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar12 + 0x40),
                     (TArray<FName,TSizedDefaultAllocator<32>_> *)puVar1);
          local_58 = 0;
          FStack_50.ResolvedField = (FField *)0x0;
          FStack_50.ResolvedOwner.WeakPtr.ObjectIndex = 0;
          FStack_50.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
          FStack_50.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FStack_50.Path.ArrayNum = 0;
          FStack_50.Path.ArrayMax = 0;
          (pFVar9->DynamicBinding_DEPRECATED).Function.field0_0x0.DebugPtr = (UFunction *)0x0;
          pFVar10 = FProperty::StaticClass();
          if ((FStack_50.ResolvedField == (FField *)0x0) ||
             (bVar7 = FWeakObjectPtr::IsValid(&FStack_50.ResolvedOwner.WeakPtr),
             pFVar11 = FStack_50.ResolvedField, !bVar7)) {
            iVar8 = 0;
            if (FStack_50.Path.ArrayNum != 0) {
              pFVar11 = FFieldPath::TryToResolvePath
                                  (&FStack_50,(UStruct *)0x0,UseStructIfOuterNotFound);
              if (pFVar11 != (FField *)0x0) {
                if ((pFVar10 == (FFieldClass *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("FieldType",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                       ,0x2dd,L""), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar5 = pFVar11->ClassPrivate;
                if (pFVar10->Id == CASTCLASS_None) {
                  for (; pFVar5 != (FFieldClass *)0x0; pFVar5 = pFVar5->SuperClass) {
                    if (pFVar5 == pFVar10) {
                      bVar7 = true;
                      goto LAB_146933540;
                    }
                  }
                  bVar7 = false;
                }
                else {
                  bVar7 = (pFVar5->CastFlags & pFVar10->Id) != CASTCLASS_None;
                }
LAB_146933540:
                if (bVar7) goto LAB_146933568;
              }
              pFVar11 = FStack_50.ResolvedField;
              if (FStack_50.ResolvedField != (FField *)0x0) {
                FStack_50.ResolvedOwner.WeakPtr.ObjectIndex = 0;
                FStack_50.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
                FStack_50.ResolvedField = (FField *)0x0;
                pFVar11 = FStack_50.ResolvedField;
              }
              goto LAB_146933568;
            }
          }
          else {
LAB_146933568:
            FStack_50.ResolvedField = pFVar11;
            iVar8 = FStack_50.Path.ArrayNum;
          }
          _Src.Data = FStack_50.Path.AllocatorInstance.Data;
          *(FField **)&(pFVar9->DynamicBinding_DEPRECATED).ResolveParamsProperty =
               FStack_50.ResolvedField;
          *(int *)&(pFVar9->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 =
               FStack_50.ResolvedOwner.WeakPtr.ObjectIndex;
          *(int *)&(pFVar9->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0xc =
               FStack_50.ResolvedOwner.WeakPtr.ObjectSerialNumber;
          if ((TArray<FName,TSizedDefaultAllocator<32>_> *)puVar1 != &FStack_50.Path) {
            iVar3 = *(int *)&(pFVar9->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x1c;
            puVar2 = &(pFVar9->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x1c;
            *(int *)&(pFVar9->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 = iVar8;
            if ((iVar8 == 0) && (iVar3 == 0)) {
              *(undefined4 *)puVar2 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,iVar8,iVar3,(ForAnyElementType *)puVar1,iVar8,(int *)puVar2);
              if (iVar8 != 0) {
                memcpy(*(void **)puVar1,_Src.Data,(longlong)iVar8 << 3);
              }
            }
          }
          if (FStack_50.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_50.Path.AllocatorInstance.Data);
          }
        }
LAB_1469335e8:
        iVar14 = iVar14 + 1;
        iVar8 = UMovieScene::GetPossessableCount((this->MovieScene).field0_0x0.DebugPtr);
      } while (iVar14 < iVar8);
    }
  }
  UMovieSceneSequence::PostLoad((UMovieSceneSequence *)this);
  return;
}

// RemoveBinding @ 14693b9f0

void __thiscall
UWidgetAnimation::RemoveBinding(UWidgetAnimation *this,FWidgetAnimationBinding *param_1)

{
  FWidgetAnimationBinding *pFVar1;
  code *pcVar2;
  bool bVar3;
  FWidgetAnimationBinding *local_res8;
  
  pFVar1 = (FWidgetAnimationBinding *)(this->AnimationBindings).AllocatorInstance.Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (this->AnimationBindings).ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res8 = param_1;
  TArray<FWidgetAnimationBinding,TSizedDefaultAllocator<32>_>::
  RemoveAll<_TArray<FWidgetAnimationBinding,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
            (&this->AnimationBindings,(<lambda_1> *)&local_res8);
  return;
}

// RemoveBinding @ 14693ba90

void __thiscall UWidgetAnimation::RemoveBinding(UWidgetAnimation *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FName local_res8;
  FName local_res10;
  <lambda_1> local_18;
  
  local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
  local_res10.Number = *(uint *)&param_1->field_0x1c;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pUVar2 = Z_Construct_UClass_UPanelSlot_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) && (param_1 != (UObject *)0x0)) &&
     (*(longlong *)&param_1[1].field_0x8 != 0)) {
    local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res8.Number = *(uint *)&param_1->field_0x1c;
    local_res10 = *(FName *)(*(longlong *)&param_1[1].field_0x8 + 0x18);
  }
  local_18.WidgetName = &local_res10;
  local_18.SlotWidgetName = &local_res8;
  TArray<FWidgetAnimationBinding,TSizedDefaultAllocator<32>_>::
  RemoveAll<_UWidgetAnimation::RemoveBinding_::__l2::<lambda_1>_>
            (&this->AnimationBindings,&local_18);
  return;
}

// StaticRegisterNativesUWidgetAnimation @ 146945bb0

void __cdecl UWidgetAnimation::StaticRegisterNativesUWidgetAnimation(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UWidgetAnimation_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnbindAllFromAnimationFinished @ 146949540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UWidgetAnimation::UnbindAllFromAnimationFinished(UWidgetAnimation *this,UUserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (UUserWidget *)0x0) {
    UUserWidget::UnbindAllFromAnimationFinished(param_1,this);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6268838667859525854>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimation.cpp"
                     ,0xde,"Widget");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// UnbindAllFromAnimationStarted @ 1469495a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UWidgetAnimation::UnbindAllFromAnimationStarted(UWidgetAnimation *this,UUserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (UUserWidget *)0x0) {
    UUserWidget::UnbindAllFromAnimationStarted(param_1,this);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6268838667859525830>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimation.cpp"
                     ,0xc6,"Widget");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// UnbindFromAnimationFinished @ 146949620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UWidgetAnimation::UnbindFromAnimationFinished
          (UWidgetAnimation *this,UUserWidget *param_1,FWidgetAnimationDynamicEvent *param_2)

{
  code *pcVar1;
  bool bVar2;
  FWidgetAnimationDynamicEvent local_38;
  FReadAccessScope local_20;
  
  if (param_1 == (UUserWidget *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6268838667859525846>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimation.cpp"
                       ,0xd6,"Widget");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_38._0_8_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_20);
    local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
    local_38._16_8_ = *(undefined8 *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    UUserWidget::UnbindFromAnimationFinished(param_1,this,&local_38);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// UnbindFromAnimationStarted @ 1469496d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UWidgetAnimation::UnbindFromAnimationStarted
          (UWidgetAnimation *this,UUserWidget *param_1,FWidgetAnimationDynamicEvent *param_2)

{
  code *pcVar1;
  bool bVar2;
  FWidgetAnimationDynamicEvent local_38;
  FReadAccessScope local_20;
  
  if (param_1 == (UUserWidget *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6268838667859525822>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimation.cpp"
                       ,0xbe,"Widget");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_38._0_8_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_20);
    local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
    local_38._16_8_ = *(undefined8 *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    UUserWidget::UnbindFromAnimationStarted(param_1,this,&local_38);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// UnbindInvalidObjects @ 146949780

void __thiscall
UWidgetAnimation::UnbindInvalidObjects(UWidgetAnimation *this,FGuid *param_1,UObject *param_2)

{
  return;
}

// UnbindObjects @ 146949790

void __thiscall
UWidgetAnimation::UnbindObjects
          (UWidgetAnimation *this,FGuid *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,UObject *param_3)

{
  return;
}

// UnbindPossessableObjects @ 1469497a0

void __thiscall UWidgetAnimation::UnbindPossessableObjects(UWidgetAnimation *this,FGuid *param_1)

{
  <lambda_1> local_res8 [4];
  
  local_res8[0].ObjectId = param_1;
  TArray<FWidgetAnimationBinding,TSizedDefaultAllocator<32>_>::
  RemoveAll<_UWidgetAnimation::UnbindPossessableObjects_::__l2::<lambda_1>_>
            (&this->AnimationBindings,local_res8);
  return;
}

// execBindToAnimationFinished @ 146950a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetAnimation::execBindToAnimationFinished(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UUserWidget *this;
  bool bVar3;
  UUserWidget *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  undefined8 local_80;
  undefined8 local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70 [3];
  FWidgetAnimationDynamicEvent local_58;
  FReadAccessScope local_40;
  FReadAccessScope local_28;
  
  local_res10 = (UUserWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_80 = 0;
  local_78 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_70[0].AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_88,&local_40);
  local_70[1].AccessDetector.State =
       (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)local_80;
  local_70[2].AccessDetector.State =
       (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  this = local_res10;
  if (local_res10 == (UUserWidget *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6268838667859525838>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimation.cpp"
                       ,0xce,"Widget");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    local_58._0_8_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(local_70,&local_28);
    local_58._8_8_ = local_70[1].AccessDetector.State;
    local_58._16_8_ = local_70[2].AccessDetector.State;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    UUserWidget::BindToAnimationFinished(this,(UWidgetAnimation *)param_1,&local_58);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70[0].AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  return;
}

// execBindToAnimationStarted @ 146950c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetAnimation::execBindToAnimationStarted(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UUserWidget *this;
  bool bVar3;
  UUserWidget *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  undefined8 local_80;
  undefined8 local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70 [3];
  FWidgetAnimationDynamicEvent local_58;
  FReadAccessScope local_40;
  FReadAccessScope local_28;
  
  local_res10 = (UUserWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_80 = 0;
  local_78 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_70[0].AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_88,&local_40);
  local_70[1].AccessDetector.State =
       (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)local_80;
  local_70[2].AccessDetector.State =
       (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  this = local_res10;
  if (local_res10 == (UUserWidget *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6268838667859525814>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimation.cpp"
                       ,0xb6,"Widget");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    local_58._0_8_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(local_70,&local_28);
    local_58._8_8_ = local_70[1].AccessDetector.State;
    local_58._16_8_ = local_70[2].AccessDetector.State;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    UUserWidget::BindToAnimationStarted(this,(UWidgetAnimation *)param_1,&local_58);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70[0].AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  return;
}

// execGetEndTime @ 146951a00

void __cdecl UWidgetAnimation::execGetEndTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  int iStack_c;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[2].field_0x20;
  uVar5 = *(undefined8 *)(lVar1 + 0x130);
  uVar2 = *(undefined8 *)(lVar1 + 0x138);
  if ((char)*(undefined8 *)(lVar1 + 0x130) == '\x02') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iStack_c = (int)((ulonglong)uVar5 >> 0x20);
  iVar4 = (int)((ulonglong)uVar2 >> 0x20);
  *(float *)param_3 =
       ((float)iVar4 * 0.0 + (float)((longlong)iVar4 * (longlong)iStack_c)) / (float)(int)uVar2;
  return;
}

// execGetStartTime @ 1469525e0

void __cdecl UWidgetAnimation::execGetStartTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[2].field_0x20;
  iVar5 = *(int *)(lVar1 + 300);
  uVar2 = *(undefined8 *)(lVar1 + 0x138);
  if (*(char *)(lVar1 + 0x128) == '\x02') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar4 = (int)((ulonglong)uVar2 >> 0x20);
  *(float *)param_3 =
       ((float)iVar4 * 0.0 + (float)((longlong)iVar4 * (longlong)iVar5)) / (float)(int)uVar2;
  return;
}

// execUnbindAllFromAnimationFinished @ 146957550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetAnimation::execUnbindAllFromAnimationFinished(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  UUserWidget *local_res10;
  
  local_res10 = (UUserWidget *)0x0;
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
  if (local_res10 == (UUserWidget *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6268838667859525854>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimation.cpp"
                       ,0xde,"Widget");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    UUserWidget::UnbindAllFromAnimationFinished(local_res10,(UWidgetAnimation *)param_1);
  }
  return;
}

// execUnbindAllFromAnimationStarted @ 146957620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetAnimation::execUnbindAllFromAnimationStarted(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  UUserWidget *local_res10;
  
  local_res10 = (UUserWidget *)0x0;
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
  if (local_res10 == (UUserWidget *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6268838667859525830>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimation.cpp"
                       ,0xc6,"Widget");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    UUserWidget::UnbindAllFromAnimationStarted(local_res10,(UWidgetAnimation *)param_1);
  }
  return;
}

// execUnbindFromAnimationFinished @ 1469576f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetAnimation::execUnbindFromAnimationFinished(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UUserWidget *this;
  bool bVar3;
  UUserWidget *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  undefined8 local_80;
  undefined8 local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70 [3];
  FWidgetAnimationDynamicEvent local_58;
  FReadAccessScope local_40;
  FReadAccessScope local_28;
  
  local_res10 = (UUserWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_80 = 0;
  local_78 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_70[0].AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_88,&local_40);
  local_70[1].AccessDetector.State =
       (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)local_80;
  local_70[2].AccessDetector.State =
       (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  this = local_res10;
  if (local_res10 == (UUserWidget *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6268838667859525846>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimation.cpp"
                       ,0xd6,"Widget");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    local_58._0_8_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(local_70,&local_28);
    local_58._8_8_ = local_70[1].AccessDetector.State;
    local_58._16_8_ = local_70[2].AccessDetector.State;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    UUserWidget::UnbindFromAnimationFinished(this,(UWidgetAnimation *)param_1,&local_58);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70[0].AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  return;
}

// execUnbindFromAnimationStarted @ 146957880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetAnimation::execUnbindFromAnimationStarted(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UUserWidget *this;
  bool bVar3;
  UUserWidget *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  undefined8 local_80;
  undefined8 local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70 [3];
  FWidgetAnimationDynamicEvent local_58;
  FReadAccessScope local_40;
  FReadAccessScope local_28;
  
  local_res10 = (UUserWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_80 = 0;
  local_78 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_70[0].AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_88,&local_40);
  local_70[1].AccessDetector.State =
       (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)local_80;
  local_70[2].AccessDetector.State =
       (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  this = local_res10;
  if (local_res10 == (UUserWidget *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6268838667859525822>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimation.cpp"
                       ,0xbe,"Widget");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    local_58._0_8_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(local_70,&local_28);
    local_58._8_8_ = local_70[1].AccessDetector.State;
    local_58._16_8_ = local_70[2].AccessDetector.State;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    UUserWidget::UnbindFromAnimationStarted(this,(UWidgetAnimation *)param_1,&local_58);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70[0].AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  return;
}

