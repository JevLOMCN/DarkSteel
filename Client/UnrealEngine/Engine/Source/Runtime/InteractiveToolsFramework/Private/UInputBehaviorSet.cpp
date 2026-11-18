// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 17

// StaticClass @ 14966c400

UClass * __cdecl UInputBehaviorSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputBehaviorSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InputBehaviorSet",
               &Z_Registration_Info_UClass_UInputBehaviorSet.InnerSingleton,
               StaticRegisterNativesUInputBehaviorSet,0x38,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputBehaviorSet>,
               InternalVTableHelperCtorCaller<UInputBehaviorSet>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputBehaviorSet.InnerSingleton;
}

// UInputBehaviorSet @ 149686e70

UInputBehaviorSet * __thiscall
UInputBehaviorSet::UInputBehaviorSet(UInputBehaviorSet *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInputBehaviorSet__6B_;
  (this->Behaviors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Behaviors).ArrayNum = 0;
  (this->Behaviors).ArrayMax = 0;
  return this;
}

// UInputBehaviorSet @ 149686eb0

UInputBehaviorSet * __thiscall UInputBehaviorSet::UInputBehaviorSet(UInputBehaviorSet *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UInputBehaviorSet__6B_;
  (this->Behaviors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Behaviors).ArrayNum = 0;
  (this->Behaviors).ArrayMax = 0;
  return this;
}

// ~UInputBehaviorSet @ 14968a3e0

void __thiscall UInputBehaviorSet::~UInputBehaviorSet(UInputBehaviorSet *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInputBehaviorSet__6B_;
  DestructItems<FBehaviorInfo,int>
            ((FBehaviorInfo *)(this->Behaviors).AllocatorInstance.Data,(this->Behaviors).ArrayNum);
  pFVar1 = (this->Behaviors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// Add @ 1496908e0

void __thiscall
UInputBehaviorSet::Add
          (UInputBehaviorSet *this,UInputBehavior *param_1,void *param_2,FString *param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  UInputBehavior *local_28;
  void *local_20;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  iVar5 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (iVar5 = 0, param_1 != (UInputBehavior *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
    iVar5 = local_18.Data.ArrayMax;
  }
  local_28 = param_1;
  local_20 = param_2;
  if (&local_18 != param_3) {
    iVar2 = (param_3->Data).ArrayNum;
    pFVar6 = (param_3->Data).AllocatorInstance.Data;
    local_18.Data.ArrayNum = iVar2;
    if ((iVar2 != 0) || (iVar5 != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar2,iVar5,(ForAnyElementType *)&local_18,iVar2,&local_18.Data.ArrayMax);
      if (iVar2 != 0) {
        memcpy(local_18.Data.AllocatorInstance.Data,pFVar6,(longlong)iVar2 * 2);
      }
    }
  }
  pFVar6 = (this->Behaviors).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar6 + (longlong)(this->Behaviors).ArrayMax * 0x20))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Behaviors).ArrayNum;
  piVar1 = &(this->Behaviors).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->Behaviors).AllocatorInstance,piVar1);
  }
  pFVar6 = (this->Behaviors).AllocatorInstance.Data;
  (this->Behaviors).ArrayNum = iVar5 + 1;
  pFVar6 = pFVar6 + (longlong)iVar5 * 0x20;
  *(UInputBehavior **)pFVar6 = local_28;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UInputBehavior *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28);
  }
  _Src.Data = local_18.Data.AllocatorInstance.Data;
  *(void **)(pFVar6 + 8) = local_20;
  pFVar7 = pFVar6 + 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  lVar8 = (longlong)local_18.Data.ArrayNum;
  *(int *)(pFVar6 + 0x18) = local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum == 0) {
    *(int *)(pFVar6 + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_18.Data.ArrayNum,
               (int *)(pFVar6 + 0x1c));
    memcpy(*(void **)&pFVar7->field_0x0,_Src.Data,lVar8 * 2);
  }
  (**(code **)(this->_padding_ + 0x300))(this);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Add @ 149690af0

void __thiscall
UInputBehaviorSet::Add
          (UInputBehaviorSet *this,UInputBehaviorSet *param_1,void *param_2,FString *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  void *_Src;
  code *pcVar4;
  ForAnyElementType _Src_00;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_68 [4];
  uint local_64;
  FScriptContainerElement *local_60;
  UObject *local_58;
  void *pvStack_50;
  FString local_48;
  
  local_64 = (param_1->Behaviors).ArrayNum;
  uVar7 = (ulonglong)(int)local_64;
  pFVar10 = (param_1->Behaviors).AllocatorInstance.Data;
  local_60 = pFVar10 + uVar7 * 0x20;
  while( true ) {
    pFVar9 = local_60;
    if ((param_1->Behaviors).ArrayNum != (int)uVar7) {
      local_68[0] = 0;
      `TCheckedPointerIterator<FBehaviorInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_68);
    }
    if (pFVar10 == pFVar9) {
      if (0 < (param_1->Behaviors).ArrayNum) {
        (**(code **)(this->_padding_ + 0x300))(this);
      }
      return;
    }
    local_58 = (UObject *)0x0;
    pvStack_50 = (void *)0x0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    iVar6 = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)pFVar10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)pFVar10);
      iVar6 = local_48.Data.ArrayMax;
    }
    local_58 = *(UObject **)pFVar10;
    pvStack_50 = param_2;
    if (param_2 == (void *)0x0) {
      pvStack_50 = *(void **)(pFVar10 + 8);
    }
    pFVar9 = pFVar10 + 0x10;
    if (1 < (param_3->Data).ArrayNum) {
      pFVar9 = (FScriptContainerElement *)param_3;
    }
    if ((FScriptContainerElement *)&local_48 != pFVar9) {
      iVar3 = *(int *)(pFVar9 + 8);
      _Src = *(void **)&pFVar9->field_0x0;
      local_48.Data.ArrayNum = iVar3;
      if ((iVar3 == 0) && (iVar6 == 0)) {
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar3,iVar6,(ForAnyElementType *)&local_48,iVar3,&local_48.Data.ArrayMax);
        if (iVar3 != 0) {
          memcpy(local_48.Data.AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
        }
      }
    }
    pFVar9 = (this->Behaviors).AllocatorInstance.Data;
    if (((pFVar9 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < pFVar9 + (longlong)(this->Behaviors).ArrayMax * 0x20
        )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) break;
    iVar6 = (this->Behaviors).ArrayNum;
    piVar1 = &(this->Behaviors).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->Behaviors).AllocatorInstance,piVar1);
    }
    pFVar9 = (this->Behaviors).AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    (this->Behaviors).ArrayNum = iVar6 + 1;
    *(UObject **)pFVar9 = local_58;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_58);
    }
    _Src_00.Data = local_48.Data.AllocatorInstance.Data;
    pFVar2 = pFVar9 + 0x10;
    *(void **)(pFVar9 + 8) = pvStack_50;
    *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
    lVar8 = (longlong)local_48.Data.ArrayNum;
    *(int *)(pFVar9 + 0x18) = local_48.Data.ArrayNum;
    if (local_48.Data.ArrayNum == 0) {
      *(undefined4 *)(pFVar9 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)pFVar2,local_48.Data.ArrayNum,
                 (int *)(pFVar9 + 0x1c));
      memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,_Src_00.Data,lVar8 * 2);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar10 = pFVar10 + 0x20;
    uVar7 = (ulonglong)local_64;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// BehaviorsModified @ 149693770

void __thiscall UInputBehaviorSet::BehaviorsModified(UInputBehaviorSet *this)

{
  FIdentityFunctor local_res8 [32];
  
  AlgoImpl::
  StableSortInternal<FBehaviorInfo,FIdentityFunctor,TDereferenceWrapper<FBehaviorInfo,TLess<void>_>_>
            ((FBehaviorInfo *)(this->Behaviors).AllocatorInstance.Data,(this->Behaviors).ArrayNum,
             local_res8[0],(TLess<void> *)local_res8);
  return;
}

// CollectWantsCapture @ 149698790

void __thiscall
UInputBehaviorSet::CollectWantsCapture
          (UInputBehaviorSet *this,FInputDeviceState *param_1,
          TArray<FInputCaptureRequest,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  EInputDevices EVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  EInputDevices EVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar1 = (this->Behaviors).ArrayNum;
  pFVar10 = (this->Behaviors).AllocatorInstance.Data;
  pFVar9 = pFVar10 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->Behaviors).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FBehaviorInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar9) break;
    EVar2 = param_1->InputDevice;
    EVar7 = (**(code **)(**(longlong **)pFVar10 + 0x2c0))();
    if ((EVar2 & EVar7) != None) {
      (**(code **)(**(longlong **)pFVar10 + 0x2c8))(*(longlong **)pFVar10,&local_48,param_1);
      if (iStack_40 != 2) {
        uStack_30 = *(undefined8 *)(pFVar10 + 8);
        pFVar3 = (param_2->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
           ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)param_2->ArrayMax * 0x20)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar8 = param_2->ArrayNum;
        if (iVar8 == param_2->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar8 + 1;
        pFVar4 = (param_2->AllocatorInstance).Data;
        pFVar3 = pFVar4 + (longlong)iVar8 * 0x20;
        *(undefined8 *)pFVar3 = local_48;
        *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_3c,iStack_40);
        pFVar4 = pFVar4 + (longlong)iVar8 * 0x20 + 0x10;
        *(undefined8 *)pFVar4 = local_38;
        *(undefined8 *)(pFVar4 + 8) = uStack_30;
      }
    }
    pFVar10 = pFVar10 + 0x20;
  }
  return;
}

// CollectWantsForceEndCapture @ 149698900

void __thiscall
UInputBehaviorSet::CollectWantsForceEndCapture
          (UInputBehaviorSet *this,TArray<UInputBehavior_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  longlong *local_28 [2];
  
  iVar1 = (this->Behaviors).ArrayNum;
  pFVar8 = (this->Behaviors).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->Behaviors).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FBehaviorInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar7) break;
    local_28[0] = *(longlong **)pFVar8;
    if (local_28[0] != (longlong *)0x0) {
      cVar4 = (**(code **)(*local_28[0] + 0x310))();
      if (cVar4 != '\0') {
        pFVar2 = (param_1->AllocatorInstance).Data;
        if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
           ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_1->ArrayMax * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar6 + 1;
        *(longlong **)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28[0];
      }
    }
    pFVar8 = pFVar8 + 0x20;
  }
  return;
}

// CollectWantsHoverCapture @ 149698a40

void __thiscall
UInputBehaviorSet::CollectWantsHoverCapture
          (UInputBehaviorSet *this,FInputDeviceState *param_1,
          TArray<FInputCaptureRequest,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  EInputDevices EVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  EInputDevices EVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar1 = (this->Behaviors).ArrayNum;
  pFVar11 = (this->Behaviors).AllocatorInstance.Data;
  pFVar10 = pFVar11 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->Behaviors).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FBehaviorInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar10) break;
    cVar6 = (**(code **)(**(longlong **)pFVar11 + 0x2e8))();
    if (cVar6 != '\0') {
      EVar2 = param_1->InputDevice;
      EVar8 = (**(code **)(**(longlong **)pFVar11 + 0x2c0))();
      if ((EVar2 & EVar8) != None) {
        (**(code **)(**(longlong **)pFVar11 + 0x2f0))(*(longlong **)pFVar11,&local_48,param_1);
        if (iStack_40 != 2) {
          uStack_30 = *(undefined8 *)(pFVar11 + 8);
          pFVar3 = (param_2->AllocatorInstance).Data;
          if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
             ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)param_2->ArrayMax * 0x20)) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar9 = param_2->ArrayNum;
          if (iVar9 == param_2->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar9 + 1;
          pFVar4 = (param_2->AllocatorInstance).Data;
          pFVar3 = pFVar4 + (longlong)iVar9 * 0x20;
          *(undefined8 *)pFVar3 = local_48;
          *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_3c,iStack_40);
          pFVar4 = pFVar4 + (longlong)iVar9 * 0x20 + 0x10;
          *(undefined8 *)pFVar4 = local_38;
          *(undefined8 *)(pFVar4 + 8) = uStack_30;
        }
      }
    }
    pFVar11 = pFVar11 + 0x20;
  }
  return;
}

// GetPrivateStaticClass @ 1496a6960

UClass * __cdecl UInputBehaviorSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputBehaviorSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InputBehaviorSet",
               &Z_Registration_Info_UClass_UInputBehaviorSet.InnerSingleton,
               StaticRegisterNativesUInputBehaviorSet,0x38,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputBehaviorSet>,
               InternalVTableHelperCtorCaller<UInputBehaviorSet>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputBehaviorSet.InnerSingleton;
}

// IsEmpty @ 1496ad380

bool __thiscall UInputBehaviorSet::IsEmpty(UInputBehaviorSet *this)

{
  return (this->Behaviors).ArrayNum == 0;
}

// Remove @ 1496b8130

bool __thiscall UInputBehaviorSet::Remove(UInputBehaviorSet *this,UInputBehavior *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  
  pFVar8 = (this->Behaviors).AllocatorInstance.Data;
  iVar5 = (this->Behaviors).ArrayNum;
  pFVar7 = pFVar8;
  while( true ) {
    if (pFVar7 == pFVar8 + (longlong)iVar5 * 0x20) {
      return false;
    }
    if (*(UInputBehavior **)pFVar7 == (UInputBehavior *)0x0) {
      bVar9 = param_1 == (UInputBehavior *)0x0;
    }
    else {
      bVar9 = *(UInputBehavior **)pFVar7 == param_1;
    }
    if (bVar9) break;
    pFVar7 = pFVar7 + 0x20;
  }
  uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar8 >> 5);
  if (uVar6 == 0xffffffff) {
    return false;
  }
  uVar4 = 0;
  if ((int)uVar6 < iVar5) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return (bool)uVar3;
  }
  pFVar8 = (this->Behaviors).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
  if (*(void **)(pFVar8 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar8 + 0x10));
  }
  iVar5 = (this->Behaviors).ArrayNum + ~uVar6;
  if (iVar5 != 0) {
    memmove(pFVar8,pFVar8 + 0x20,(longlong)iVar5 << 5);
  }
  piVar1 = &(this->Behaviors).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,&(this->Behaviors).AllocatorInstance,(this->Behaviors).ArrayNum,
             &(this->Behaviors).ArrayMax);
  (**(code **)(this->_padding_ + 0x300))(this);
  return true;
}

// RemoveAll @ 1496b8270

void __thiscall UInputBehaviorSet::RemoveAll(UInputBehaviorSet *this)

{
  int *piVar1;
  int iVar2;
  FBehaviorInfo *pFVar3;
  
  piVar1 = &(this->Behaviors).ArrayMax;
  pFVar3 = (FBehaviorInfo *)(this->Behaviors).AllocatorInstance.Data;
  iVar2 = (this->Behaviors).ArrayNum;
  if ((this->Behaviors).ArrayMax < 0) {
    DestructItems<FBehaviorInfo,int>(pFVar3,iVar2);
    (this->Behaviors).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->Behaviors).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FBehaviorInfo,int>(pFVar3,iVar2);
    (this->Behaviors).ArrayNum = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001496b82e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x300))(this);
  return;
}

// RemoveByGroup @ 1496b8310

bool __thiscall UInputBehaviorSet::RemoveByGroup(UInputBehaviorSet *this,FString *param_1)

{
  int iVar1;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  iVar1 = TArray<FBehaviorInfo,TSizedDefaultAllocator<32>_>::
          RemoveAll<_UInputBehaviorSet::RemoveByGroup_::__l2::<lambda_1>_>
                    (&this->Behaviors,(<lambda_1> *)&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (0 < iVar1) {
    (**(code **)(this->_padding_ + 0x300))(this);
  }
  return 0 < iVar1;
}

// RemoveBySource @ 1496b8370

bool __thiscall UInputBehaviorSet::RemoveBySource(UInputBehaviorSet *this,void *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  
  iVar1 = (this->Behaviors).ArrayNum;
  lVar4 = (longlong)iVar1;
  uVar6 = 0;
  iVar3 = 0;
  if (iVar1 != 0) {
    pFVar2 = (this->Behaviors).AllocatorInstance.Data;
    bVar11 = *(void **)(pFVar2 + 8) != param_1;
    uVar8 = uVar6;
    uVar10 = uVar6;
    do {
      iVar3 = (int)uVar8;
      uVar6 = uVar6 + 1;
      uVar8 = (ulonglong)(iVar3 + 1);
      if ((longlong)uVar6 < lVar4) {
        pFVar5 = pFVar2 + uVar6 * 0x20 + 8;
        do {
          if (bVar11 != (*(void **)pFVar5 != param_1)) break;
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar6 = uVar6 + 1;
          pFVar5 = pFVar5 + 0x20;
        } while ((longlong)uVar6 < lVar4);
      }
      iVar7 = (int)uVar8 - iVar3;
      if (bVar11 == false) {
        DestructItems<FBehaviorInfo,int>((FBehaviorInfo *)(pFVar2 + (longlong)iVar3 * 0x20),iVar7);
      }
      else {
        iVar9 = (int)uVar10;
        if (iVar9 != iVar3) {
          memmove(pFVar2 + (longlong)iVar9 * 0x20,pFVar2 + (longlong)iVar3 * 0x20,
                  (longlong)iVar7 << 5);
        }
        uVar10 = (ulonglong)(uint)(iVar9 + iVar7);
      }
      bVar11 = (bool)(bVar11 ^ 1);
    } while ((longlong)uVar6 < lVar4);
    iVar3 = iVar1 - (int)uVar10;
    (this->Behaviors).ArrayNum = (int)uVar10;
    if (0 < iVar3) {
      (**(code **)(this->_padding_ + 0x300))();
    }
  }
  return 0 < iVar3;
}

// StaticRegisterNativesUInputBehaviorSet @ 1496c2c50

void __cdecl UInputBehaviorSet::StaticRegisterNativesUInputBehaviorSet(void)

{
  return;
}

