// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 19

// StaticClass @ 14962aea0

UClass * __cdecl UKeyInputBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKeyInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"KeyInputBehavior",
               &Z_Registration_Info_UClass_UKeyInputBehavior.InnerSingleton,
               StaticRegisterNativesUKeyInputBehavior,0x120,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UKeyInputBehavior>,
               InternalVTableHelperCtorCaller<UKeyInputBehavior>,local_res8,
               UInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKeyInputBehavior.InnerSingleton;
}

// UKeyInputBehavior @ 14963b9f0

UKeyInputBehavior * __thiscall
UKeyInputBehavior::UKeyInputBehavior(UKeyInputBehavior *this,FVTableHelper *param_1)

{
  UInputBehavior::UInputBehavior((UInputBehavior *)this,param_1);
  *(undefined ***)this = &___7UKeyInputBehavior__6B_;
  *(undefined8 *)&this->ModifierCheckFunc = 0;
  *(undefined8 *)&(this->ModifierCheckFunc).field_0x28 = 0;
  (this->Modifiers).ModifierIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).ModifierIDs.ArrayNum = 0;
  (this->Modifiers).ModifierIDs.ArrayMax = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x8 = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x20 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x28 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x2c = 0x80;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x34 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x40 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x48 = 0;
  (this->TargetKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetKeys).ArrayNum = 0;
  (this->TargetKeys).ArrayMax = 0;
  (this->KeyActivations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyActivations).ArrayNum = 0;
  (this->KeyActivations).ArrayMax = 0;
  this->bAllKeysSeenPressed = false;
  this->bRequireAllKeys = true;
  return this;
}

// UKeyInputBehavior @ 14963baa0

UKeyInputBehavior * __thiscall UKeyInputBehavior::UKeyInputBehavior(UKeyInputBehavior *this)

{
  UInputBehavior::UInputBehavior((UInputBehavior *)this);
  *(undefined ***)this = &___7UKeyInputBehavior__6B_;
  *(undefined8 *)&this->ModifierCheckFunc = 0;
  *(undefined8 *)&(this->ModifierCheckFunc).field_0x28 = 0;
  (this->Modifiers).ModifierIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).ModifierIDs.ArrayNum = 0;
  (this->Modifiers).ModifierIDs.ArrayMax = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x8 = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x20 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x28 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x2c = 0x80;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x34 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x40 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x48 = 0;
  (this->TargetKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetKeys).ArrayNum = 0;
  (this->TargetKeys).ArrayMax = 0;
  (this->KeyActivations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyActivations).ArrayNum = 0;
  (this->KeyActivations).ArrayMax = 0;
  this->bAllKeysSeenPressed = false;
  this->bRequireAllKeys = true;
  return this;
}

// ~UKeyInputBehavior @ 14963ebe0

void __thiscall UKeyInputBehavior::~UKeyInputBehavior(UKeyInputBehavior *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *(undefined ***)this = &___7UKeyInputBehavior__6B_;
  pFVar1 = (this->KeyActivations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FKey,int>
            ((FKey *)(this->TargetKeys).AllocatorInstance.Data,(this->TargetKeys).ArrayNum);
  pFVar1 = (this->TargetKeys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x48 = 0;
  pvVar2 = *(void **)&(this->Modifiers).ModifierTests.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Modifiers).ModifierTests);
  pFVar1 = (this->Modifiers).ModifierIDs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->ModifierCheckFunc != 0) {
    plVar3 = *(longlong **)&(this->ModifierCheckFunc).field_0x28;
    plVar4 = (longlong *)&(this->ModifierCheckFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  UInputBehavior::~UInputBehavior((UInputBehavior *)this);
  return;
}

// AreAllKeysPressed @ 14964a8f0

bool __thiscall UKeyInputBehavior::AreAllKeysPressed(UKeyInputBehavior *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->KeyActivations).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->KeyActivations).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return true;
    }
    if (*pFVar1 == (FScriptContainerElement)0x0) break;
    pFVar1 = pFVar1 + 1;
  }
  return false;
}

// BeginCapture @ 14964ac10

FInputCaptureUpdate * __thiscall
UKeyInputBehavior::BeginCapture
          (UKeyInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,EInputCaptureSide param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  FInputBehaviorModifierStates::UpdateModifiers
            (&this->Modifiers,param_1,(IModifierToggleBehaviorTarget *)this->Target);
  UpdateActivations(this,param_1,this->bRequireAllKeys == false);
  if (this->bRequireAllKeys != false) {
    pFVar1 = (this->KeyActivations).AllocatorInstance.Data;
    pFVar2 = pFVar1 + (this->KeyActivations).ArrayNum;
    for (; pFVar1 != pFVar2; pFVar1 = pFVar1 + 1) {
      if (*pFVar1 == (FScriptContainerElement)0x0) goto LAB_14964ac95;
    }
    (**(code **)((longlong)*this->Target + 0x18))(this->Target,&param_1->Keyboard);
    this->bAllKeysSeenPressed = true;
  }
LAB_14964ac95:
  __return_storage_ptr__->State = Begin;
  __return_storage_ptr__->Source = (UInputBehavior *)this;
  (__return_storage_ptr__->Data).WhichSide = Any;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  return __return_storage_ptr__;
}

// ForceEndCapture @ 1496522e0

void __thiscall
UKeyInputBehavior::ForceEndCapture(UKeyInputBehavior *this,FInputCaptureData *param_1)

{
  IKeyInputBehaviorTarget *pIVar1;
  
  pIVar1 = this->Target;
  if ((pIVar1 != (IKeyInputBehaviorTarget *)0x0) &&
     ((this->bAllKeysSeenPressed != false || (this->bRequireAllKeys == false)))) {
                    /* WARNING: Could not recover jumptable at 0x000149652304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    return;
  }
  return;
}

// GetPrivateStaticClass @ 149657300

UClass * __cdecl UKeyInputBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKeyInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"KeyInputBehavior",
               &Z_Registration_Info_UClass_UKeyInputBehavior.InnerSingleton,
               StaticRegisterNativesUKeyInputBehavior,0x120,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UKeyInputBehavior>,
               InternalVTableHelperCtorCaller<UKeyInputBehavior>,local_res8,
               UInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKeyInputBehavior.InnerSingleton;
}

// GetSupportedDevices @ 149658850

EInputDevices __thiscall UKeyInputBehavior::GetSupportedDevices(UKeyInputBehavior *this)

{
  return Keyboard;
}

// Initialize @ 149659030

void __thiscall
UKeyInputBehavior::Initialize
          (UKeyInputBehavior *this,IKeyInputBehaviorTarget *param_1,FKey *param_2)

{
  int *piVar1;
  TArray<FKey,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  FKey *pFVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  
  pTVar2 = &this->TargetKeys;
  this->Target = param_1;
  pFVar4 = (FKey *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= param_2) && (param_2 < pFVar4 + (this->TargetKeys).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (this->TargetKeys).ArrayNum;
  piVar1 = &(this->TargetKeys).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TargetKeys).ArrayNum = iVar8 + 1;
  pFVar3 = (FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x18);
  *pFVar3 = param_2->KeyName;
  pFVar3[1] = (FName)(param_2->KeyDetails).Object;
  FVar5 = (FName)(param_2->KeyDetails).SharedReferenceCount.ReferenceController;
  pFVar3[2] = FVar5;
  if (FVar5 != (FName)0x0) {
    LOCK();
    *(int *)((longlong)FVar5 + 8) = *(int *)((longlong)FVar5 + 8) + 1;
    UNLOCK();
  }
  InitializeKeyActivations(this);
  return;
}

// Initialize @ 149659120

void __thiscall
UKeyInputBehavior::Initialize
          (UKeyInputBehavior *this,IKeyInputBehaviorTarget *param_1,
          TArray<FKey,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<FKey,TSizedDefaultAllocator<32>_> *this_00;
  FKey *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FIdentityFunctor local_res8 [8];
  
  this_00 = &this->TargetKeys;
  this->Target = param_1;
  if (this_00 != param_2) {
    DestructItems<FKey,int>((FKey *)(this_00->AllocatorInstance).Data,(this->TargetKeys).ArrayNum);
    iVar6 = param_2->ArrayNum;
    piVar1 = &(this->TargetKeys).ArrayMax;
    pFVar2 = (FKey *)(param_2->AllocatorInstance).Data;
    (this->TargetKeys).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar6,*piVar1,&this_00->AllocatorInstance,iVar6,piVar1);
      ConstructItems<FKey,FKey,int>((this_00->AllocatorInstance).Data,pFVar2,iVar6);
    }
  }
  piVar1 = &(this->TargetKeys).ArrayNum;
  AlgoImpl::IntroSortInternal<FKey,int,FIdentityFunctor,TDereferenceWrapper<FKey,TLess<void>_>_>
            ((FKey *)(this_00->AllocatorInstance).Data,(this->TargetKeys).ArrayNum,local_res8[0],
             (TLess<void> *)local_res8);
  uVar8 = *piVar1;
  pFVar3 = (this_00->AllocatorInstance).Data;
  uVar12 = uVar8;
  if (1 < (int)uVar8) {
    pFVar9 = pFVar3 + 0x18;
    pFVar11 = pFVar3;
    if (pFVar9 != pFVar3 + (longlong)(int)uVar8 * 0x18) {
      pFVar13 = pFVar3 + 0x20;
      pFVar10 = pFVar3;
      do {
        pFVar11 = pFVar10;
        if ((*(longlong *)pFVar10 != *(longlong *)pFVar9) &&
           (pFVar11 = pFVar10 + 0x18, pFVar11 != pFVar9)) {
          *(longlong *)pFVar11 = *(longlong *)pFVar9;
          if (pFVar10 + 0x20 != pFVar13) {
            *(longlong *)(pFVar10 + 0x20) = *(longlong *)pFVar13;
            *(longlong *)pFVar13 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)(pFVar10 + 0x28),
                       (FSharedReferencer<1> *)(pFVar13 + 8));
          }
        }
        pFVar9 = pFVar9 + 0x18;
        pFVar13 = pFVar13 + 0x18;
        pFVar10 = pFVar11;
      } while (pFVar9 != pFVar3 + (longlong)(int)uVar8 * 0x18);
      uVar8 = *piVar1;
    }
    lVar7 = (longlong)(pFVar11 + (0x18 - (longlong)pFVar3)) / 6 +
            ((longlong)(pFVar11 + (0x18 - (longlong)pFVar3)) >> 0x3f);
    uVar12 = (int)(lVar7 >> 2) - (int)(lVar7 >> 0x3f);
    if ((int)uVar8 < (int)uVar12) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,uVar12 - uVar8,&this_00->AllocatorInstance,piVar1,
                         &(this->TargetKeys).ArrayMax);
      DefaultConstructItems<FKey,int>
                ((this_00->AllocatorInstance).Data + (longlong)iVar6 * 0x18,uVar12 - uVar8);
      goto LAB_14965933d;
    }
  }
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if ((int)uVar12 < (int)uVar8) {
    uVar8 = uVar8 - uVar12;
    if ((int)(uVar8 | uVar12) < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (uVar8 != 0) {
      TArray<FKey,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar12,uVar8);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,&this_00->AllocatorInstance,*piVar1,&(this->TargetKeys).ArrayMax);
    }
  }
LAB_14965933d:
  InitializeKeyActivations(this);
  return;
}

// InitializeKeyActivations @ 149659f70

void __thiscall UKeyInputBehavior::InitializeKeyActivations(UKeyInputBehavior *this)

{
  int *piVar1;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  
  uVar3 = (this->TargetKeys).ArrayNum;
  pTVar2 = &this->KeyActivations;
  iVar7 = (this->KeyActivations).ArrayNum;
  piVar1 = &(this->KeyActivations).ArrayNum;
  if (iVar7 < (int)uVar3) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar3 - iVar7,&pTVar2->AllocatorInstance,piVar1,
                       &(this->KeyActivations).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + iVar6,0,(longlong)(int)(uVar3 - iVar7));
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if ((int)uVar3 < iVar7) {
      uVar10 = iVar7 - uVar3;
      if ((int)(uVar10 | uVar3) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (uVar10 != 0) {
        pFVar8 = (pTVar2->AllocatorInstance).Data + (int)uVar3;
        iVar7 = (*piVar1 - uVar3) - uVar10;
        if (iVar7 != 0) {
          memmove(pFVar8,pFVar8 + (int)uVar10,(longlong)iVar7);
        }
        *piVar1 = *piVar1 - uVar10;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&pTVar2->AllocatorInstance,*piVar1,&(this->KeyActivations).ArrayMax);
      }
    }
  }
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  iVar7 = *piVar1;
  pFVar8 = pFVar9 + iVar7;
  while( true ) {
    if (*piVar1 != iVar7) {
      `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar8) break;
    *pFVar9 = (FScriptContainerElement)0x0;
    pFVar9 = pFVar9 + 1;
  }
  return;
}

// IsAnyKeyPressed @ 14965a0b0

bool __thiscall UKeyInputBehavior::IsAnyKeyPressed(UKeyInputBehavior *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->KeyActivations).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->KeyActivations).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return false;
    }
    if (*pFVar1 == (FScriptContainerElement)0x1) break;
    pFVar1 = pFVar1 + 1;
  }
  return true;
}

// IsKeyPressed @ 14965a360

bool __thiscall UKeyInputBehavior::IsKeyPressed(UKeyInputBehavior *this,FKey *param_1)

{
  FScriptContainerElement FVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  FName *pFVar9;
  
  pFVar2 = (FName *)(this->TargetKeys).AllocatorInstance.Data;
  if (pFVar2 != pFVar2 + (longlong)(this->TargetKeys).ArrayNum * 3) {
    pFVar9 = pFVar2;
    do {
      if (*pFVar9 == param_1->KeyName) {
        lVar7 = ((longlong)pFVar9 - (longlong)pFVar2) / 6 +
                ((longlong)pFVar9 - (longlong)pFVar2 >> 0x3f);
        uVar8 = (int)(lVar7 >> 2) - (int)(lVar7 >> 0x3f);
        if (-1 < (int)uVar8) {
          uVar6 = 0;
          if ((int)uVar8 < (this->KeyActivations).ArrayNum) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
          }
          FVar1 = (this->KeyActivations).AllocatorInstance.Data[(int)uVar8];
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
          return (bool)FVar1;
        }
        break;
      }
      pFVar9 = pFVar9 + 3;
    } while (pFVar9 != pFVar2 + (longlong)(this->TargetKeys).ArrayNum * 3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

// IsTargetedKey @ 14965a680

bool __thiscall UKeyInputBehavior::IsTargetedKey(UKeyInputBehavior *this,FInputDeviceState *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  if ((param_1->InputDevice == Keyboard) && ((param_1->Keyboard).ActiveKey.bPressed != false)) {
    pFVar2 = (FName *)(this->TargetKeys).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (longlong)(this->TargetKeys).ArrayNum * 3;
    if (pFVar2 != pFVar1) {
      do {
        if (*pFVar2 == (param_1->Keyboard).ActiveKey.Button.KeyName) {
          return true;
        }
        pFVar2 = pFVar2 + 3;
      } while (pFVar2 != pFVar1);
    }
  }
  return false;
}

// StaticRegisterNativesUKeyInputBehavior @ 149664c30

void __cdecl UKeyInputBehavior::StaticRegisterNativesUKeyInputBehavior(void)

{
  return;
}

// UpdateActivations @ 149665bf0

bool __thiscall
UKeyInputBehavior::UpdateActivations
          (UKeyInputBehavior *this,FInputDeviceState *param_1,bool param_2)

{
  FKeyboardInputDeviceState *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1->InputDevice == Keyboard) {
    pFVar1 = &param_1->Keyboard;
    if ((param_1->Keyboard).ActiveKey.bPressed != false) {
      uVar5 = TArray<FKey,TSizedDefaultAllocator<32>_>::Find(&this->TargetKeys,(FKey *)pFVar1);
      if (-1 < (int)uVar5) {
        uVar6 = 0;
        if ((int)uVar5 < (this->KeyActivations).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        (this->KeyActivations).AllocatorInstance.Data[(int)uVar5] = (FScriptContainerElement)0x1;
        if (!param_2) {
          return true;
        }
        (**(code **)((longlong)*this->Target + 0x18))(this->Target,pFVar1);
        return true;
      }
    }
    if ((param_1->Keyboard).ActiveKey.bReleased != false) {
      uVar5 = TArray<FKey,TSizedDefaultAllocator<32>_>::Find(&this->TargetKeys,(FKey *)pFVar1);
      if (-1 < (int)uVar5) {
        uVar6 = 0;
        if ((int)uVar5 < (this->KeyActivations).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        (this->KeyActivations).AllocatorInstance.Data[(int)uVar5] = (FScriptContainerElement)0x0;
        if (param_2) {
          (**(code **)((longlong)*this->Target + 0x20))(this->Target,pFVar1);
        }
        return true;
      }
    }
  }
  return false;
}

// UpdateCapture @ 149666100

FInputCaptureUpdate * __thiscall
UKeyInputBehavior::UpdateCapture
          (UKeyInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,FInputCaptureData *param_2)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  
  FInputBehaviorModifierStates::UpdateModifiers
            (&this->Modifiers,param_1,(IModifierToggleBehaviorTarget *)this->Target);
  bVar2 = UpdateActivations(this,param_1,this->bRequireAllKeys == false);
  if (bVar2) {
    pFVar3 = (this->KeyActivations).AllocatorInstance.Data;
    iVar1 = (this->KeyActivations).ArrayNum;
    if (this->bRequireAllKeys == false) {
      pFVar4 = pFVar3 + iVar1;
      for (; pFVar3 != pFVar4; pFVar3 = pFVar3 + 1) {
        if (*pFVar3 == (FScriptContainerElement)0x1) goto LAB_14966618d;
      }
LAB_1496661e2:
      __return_storage_ptr__->State = End;
      goto LAB_1496661e8;
    }
    pFVar4 = pFVar3 + iVar1;
    for (pFVar5 = pFVar3; pFVar5 != pFVar4; pFVar5 = pFVar5 + 1) {
      if (*pFVar5 == (FScriptContainerElement)0x0) goto LAB_149666195;
    }
    (**(code **)((longlong)*this->Target + 0x18))(this->Target,&param_1->Keyboard);
    this->bAllKeysSeenPressed = true;
  }
LAB_14966618d:
  __return_storage_ptr__->State = Continue;
  goto LAB_1496661e8;
  while (pFVar3 = pFVar3 + 1, pFVar3 != pFVar4) {
LAB_149666195:
    if (*pFVar3 == (FScriptContainerElement)0x0) {
      if (this->bAllKeysSeenPressed == false) goto LAB_14966618d;
      (**(code **)((longlong)*this->Target + 0x20))(this->Target,&param_1->Keyboard);
      this->bAllKeysSeenPressed = false;
      goto LAB_1496661e2;
    }
  }
  __return_storage_ptr__->State = Continue;
LAB_1496661e8:
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  (__return_storage_ptr__->Data).WhichSide = Any;
  return __return_storage_ptr__;
}

// WantsCapture @ 149667570

FInputCaptureRequest * __thiscall
UKeyInputBehavior::WantsCapture
          (UKeyInputBehavior *this,FInputCaptureRequest *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  FName *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  FName *pFVar7;
  
  InitializeKeyActivations(this);
  if ((param_1->InputDevice == Keyboard) && ((param_1->Keyboard).ActiveKey.bPressed != false)) {
    pFVar7 = (FName *)(this->TargetKeys).AllocatorInstance.Data;
    pFVar1 = pFVar7 + (longlong)(this->TargetKeys).ArrayNum * 3;
    if (pFVar7 != pFVar1) {
      do {
        if (*pFVar7 == (param_1->Keyboard).ActiveKey.Button.KeyName) {
          if (*(void **)&this->ModifierCheckFunc != (void *)0x0) {
            UE::Core::Private::Function::CheckCallable(*(void **)&this->ModifierCheckFunc);
            plVar2 = *(longlong **)&(this->ModifierCheckFunc).field_0x28;
            pcVar3 = *(code **)&this->ModifierCheckFunc;
            plVar6 = (longlong *)&(this->ModifierCheckFunc).field_0x10;
            if (plVar2 != (longlong *)0x0) {
              plVar6 = plVar2;
            }
            uVar5 = (**(code **)(*plVar6 + 8))();
            cVar4 = (*pcVar3)(uVar5,param_1);
            if (cVar4 == '\0') break;
          }
          __return_storage_ptr__->Type = Begin;
          __return_storage_ptr__->Source = (UInputBehavior *)this;
          goto LAB_1496675d2;
        }
        pFVar7 = pFVar7 + 3;
      } while (pFVar7 != pFVar1);
    }
  }
  __return_storage_ptr__->Type = Ignore;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
LAB_1496675d2:
  __return_storage_ptr__->Owner = (void *)0x0;
  __return_storage_ptr__->HitDepth = 1.7976931348623157e+308;
  __return_storage_ptr__->Side = Any;
  return __return_storage_ptr__;
}

