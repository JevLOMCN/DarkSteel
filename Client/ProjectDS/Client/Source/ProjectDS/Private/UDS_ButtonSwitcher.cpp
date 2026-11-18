// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b4316f0

UClass * __cdecl UDS_ButtonSwitcher::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ButtonSwitcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ButtonSwitcher",
               &Z_Registration_Info_UClass_UDS_ButtonSwitcher.InnerSingleton,
               StaticRegisterNativesUDS_ButtonSwitcher,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ButtonSwitcher>,
               InternalVTableHelperCtorCaller<UDS_ButtonSwitcher>,local_res8,
               UCanvasPanel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ButtonSwitcher.InnerSingleton;
}

// UDS_ButtonSwitcher @ 14b4343c0

UDS_ButtonSwitcher * __thiscall
UDS_ButtonSwitcher::UDS_ButtonSwitcher(UDS_ButtonSwitcher *this,FVTableHelper *param_1)

{
  UCanvasPanel::UCanvasPanel((UCanvasPanel *)this,param_1);
  this->bIsInitialized = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->ButtonCanvasPanelArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ButtonCanvasPanelArray).ArrayNum = 0;
  (this->ButtonCanvasPanelArray).ArrayMax = 0;
  return this;
}

// UDS_ButtonSwitcher @ 14b434410

UDS_ButtonSwitcher * __thiscall
UDS_ButtonSwitcher::UDS_ButtonSwitcher(UDS_ButtonSwitcher *this,FObjectInitializer *param_1)

{
  UCanvasPanel::UCanvasPanel((UCanvasPanel *)this,param_1);
  this->bIsInitialized = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->ButtonCanvasPanelArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ButtonCanvasPanelArray).ArrayNum = 0;
  (this->ButtonCanvasPanelArray).ArrayMax = 0;
  return this;
}

// ~UDS_ButtonSwitcher @ 14b434de0

void __thiscall UDS_ButtonSwitcher::~UDS_ButtonSwitcher(UDS_ButtonSwitcher *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  pFVar1 = (this->ButtonCanvasPanelArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCanvasPanel::~UCanvasPanel((UCanvasPanel *)this);
  return;
}

// GetPrivateStaticClass @ 14b436700

UClass * __cdecl UDS_ButtonSwitcher::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ButtonSwitcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ButtonSwitcher",
               &Z_Registration_Info_UClass_UDS_ButtonSwitcher.InnerSingleton,
               StaticRegisterNativesUDS_ButtonSwitcher,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ButtonSwitcher>,
               InternalVTableHelperCtorCaller<UDS_ButtonSwitcher>,local_res8,
               UCanvasPanel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ButtonSwitcher.InnerSingleton;
}

// StaticRegisterNativesUDS_ButtonSwitcher @ 14b437060

void __cdecl UDS_ButtonSwitcher::StaticRegisterNativesUDS_ButtonSwitcher(void)

{
  return;
}

// Initialize @ 14bca6900

void __thiscall UDS_ButtonSwitcher::Initialize(UDS_ButtonSwitcher *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  ulonglong uVar7;
  UObject *pUVar8;
  ForAnyElementType FVar9;
  UObject *local_res10;
  FWeakObjectPtr local_res18 [2];
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> local_38;
  
  UPanelWidget::GetAllChildren((UPanelWidget *)this,&local_38);
  iVar3 = local_38.ArrayNum;
  uVar7 = (ulonglong)local_38.ArrayNum;
  pFVar2 = local_38.AllocatorInstance.Data + uVar7 * 8;
  FVar9.Data = local_38.AllocatorInstance.Data;
  do {
    if ((uint)uVar7 != iVar3) {
      `TCheckedPointerIterator<UWidget_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (FVar9.Data == pFVar2) {
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return;
    }
    pUVar8 = *(UObject **)FVar9.Data;
    if (pUVar8 == (UObject *)0x0) {
LAB_14bca6985:
      pUVar8 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_ButtonCanvasPanel_NoRegister();
      iVar5 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar6->_padding_)) goto LAB_14bca6985;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    local_res18[0].ObjectIndex = 0;
    local_res18[0].ObjectSerialNumber = 0;
    local_res10 = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    FWeakObjectPtr::operator=(local_res18,(FObjectPtr)&local_res10);
    bVar4 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar4) {
      iVar5 = (this->ButtonCanvasPanelArray).ArrayNum;
      piVar1 = &(this->ButtonCanvasPanelArray).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->ButtonCanvasPanelArray).AllocatorInstance,piVar1);
      }
      (this->ButtonCanvasPanelArray).ArrayNum = iVar5 + 1;
      *(FWeakObjectPtr *)
       ((this->ButtonCanvasPanelArray).AllocatorInstance.Data + (longlong)iVar5 * 8) =
           local_res18[0];
    }
    uVar7 = (ulonglong)(uint)local_38.ArrayNum;
    FVar9.Data = FVar9.Data + 8;
  } while( true );
}

// SetButtonEvent @ 14bcc5090

void __thiscall
UDS_ButtonSwitcher::SetButtonEvent(UDS_ButtonSwitcher *this,EDS_ButtonStateType *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FWeakObjectPtr *pFVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  undefined8 uVar9;
  FWeakObjectPtr *this_00;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  UObject *local_res8;
  FWeakObjectPtr local_res18;
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> local_38;
  
  if (this->bIsInitialized == false) {
    UPanelWidget::GetAllChildren((UPanelWidget *)this,&local_38);
    iVar4 = local_38.ArrayNum;
    uVar11 = (ulonglong)local_38.ArrayNum;
    pFVar2 = local_38.AllocatorInstance.Data + uVar11 * 8;
    FVar10.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar11 != iVar4) {
        `TCheckedPointerIterator<UWidget_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (FVar10.Data == pFVar2) break;
      pUVar8 = *(UObject **)FVar10.Data;
      if (pUVar8 == (UObject *)0x0) {
LAB_14bcc5119:
        pUVar8 = (UObject *)0x0;
      }
      else {
        pUVar7 = Z_Construct_UClass_UDS_ButtonCanvasPanel_NoRegister();
        iVar6 = (int)pUVar7->_padding_;
        if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar6) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar7->_padding_)) goto LAB_14bcc5119;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_res8 = pUVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res8);
      bVar5 = FWeakObjectPtr::IsValid(&local_res18);
      if (bVar5) {
        iVar6 = (this->ButtonCanvasPanelArray).ArrayNum;
        piVar1 = &(this->ButtonCanvasPanelArray).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&(this->ButtonCanvasPanelArray).AllocatorInstance,piVar1);
        }
        (this->ButtonCanvasPanelArray).ArrayNum = iVar6 + 1;
        *(FWeakObjectPtr *)
         ((this->ButtonCanvasPanelArray).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_res18
        ;
      }
      uVar11 = (ulonglong)(uint)local_38.ArrayNum;
      FVar10.Data = FVar10.Data + 8;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    this->bIsInitialized = true;
  }
  this_00 = (FWeakObjectPtr *)(this->ButtonCanvasPanelArray).AllocatorInstance.Data;
  iVar4 = (this->ButtonCanvasPanelArray).ArrayNum;
  pFVar3 = this_00 + iVar4;
  while( true ) {
    if ((this->ButtonCanvasPanelArray).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_ButtonCanvasPanel,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (this_00 == pFVar3) break;
    bVar5 = FWeakObjectPtr::IsValid(this_00);
    if (bVar5) {
      pUVar8 = FWeakObjectPtr::Get(this_00);
      uVar9 = 4;
      if ((*(EDS_ButtonStateType *)&pUVar8[0xb].field_0x20 & *param_1) != *param_1) {
        uVar9 = 1;
      }
      (**(code **)(*(longlong *)pUVar8 + 0x2c0))(pUVar8,uVar9);
    }
    this_00 = this_00 + 1;
  }
  return;
}

// SynchronizeProperties @ 14bcca2b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ButtonSwitcher::SynchronizeProperties(UDS_ButtonSwitcher *this)

{
  byte *pbVar1;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 1;
  return;
}

