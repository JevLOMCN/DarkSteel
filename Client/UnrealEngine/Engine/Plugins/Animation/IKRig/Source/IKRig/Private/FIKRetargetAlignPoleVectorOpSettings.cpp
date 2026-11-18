// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// StaticStruct @ 14deffe30

UScriptStruct * __cdecl FIKRetargetAlignPoleVectorOpSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings,
                         (UObject *)pUVar1,L"IKRetargetAlignPoleVectorOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings.OuterSingleton;
}

// FIKRetargetAlignPoleVectorOpSettings @ 14df15f60

FIKRetargetAlignPoleVectorOpSettings * __thiscall
FIKRetargetAlignPoleVectorOpSettings::FIKRetargetAlignPoleVectorOpSettings
          (FIKRetargetAlignPoleVectorOpSettings *this,FIKRetargetAlignPoleVectorOpSettings *param_1)

{
  TArray<FRetargetPoleVectorSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UObjectBase *this_00;
  UIKRigDefinition *pUVar4;
  FScriptContainerElement *_Src;
  
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = 0;
  this_00 = (UObjectBase *)param_1->_padding_;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    this->_padding_ = (longlong)this_00;
  }
  this->_padding_ = (longlong)&___7FIKRetargetAlignPoleVectorOpSettings__6B_;
  pUVar4 = (param_1->IKRigAsset).field0_0x0.DebugPtr;
  (this->IKRigAsset).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UIKRigDefinition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pTVar1 = &this->ChainsToAlign;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ChainsToAlign).ArrayMax;
  iVar3 = (param_1->ChainsToAlign).ArrayNum;
  _Src = (param_1->ChainsToAlign).AllocatorInstance.Data;
  (this->ChainsToAlign).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x28);
  }
  return this;
}

// operator= @ 14df1d530

FIKRetargetAlignPoleVectorOpSettings * __thiscall
FIKRetargetAlignPoleVectorOpSettings::operator=
          (FIKRetargetAlignPoleVectorOpSettings *this,FIKRetargetAlignPoleVectorOpSettings *param_1)

{
  TArray<FRetargetPoleVectorSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UIKRigDefinition *pUVar4;
  FScriptContainerElement *_Src;
  
  FIKRetargetOpSettingsBase::operator=
            ((FIKRetargetOpSettingsBase *)this,(FIKRetargetOpSettingsBase *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->IKRigAsset).field0_0x0.DebugPtr, pUVar4 != (UIKRigDefinition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pTVar1 = &this->ChainsToAlign;
  (this->IKRigAsset).field0_0x0 = (param_1->IKRigAsset).field0_0x0;
  if (pTVar1 != &param_1->ChainsToAlign) {
    iVar3 = (param_1->ChainsToAlign).ArrayNum;
    piVar2 = &(this->ChainsToAlign).ArrayMax;
    _Src = (param_1->ChainsToAlign).AllocatorInstance.Data;
    (this->ChainsToAlign).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x28);
      }
    }
  }
  return this;
}

// CopySettingsAtRuntime @ 14df2d6e0

void __thiscall
FIKRetargetAlignPoleVectorOpSettings::CopySettingsAtRuntime
          (FIKRetargetAlignPoleVectorOpSettings *this,FIKRetargetOpSettingsBase *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  undefined1 local_res10 [8];
  
  iVar3 = *(int *)&param_1[1].Controller.Object;
  plVar7 = *(longlong **)&param_1[1].LODThreshold;
  plVar1 = plVar7 + (longlong)iVar3 * 5;
  while( true ) {
    if (*(int *)&param_1[1].Controller.Object != iVar3) {
      `TCheckedPointerIterator<FRetargetPoleVectorSettings_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (plVar7 == plVar1) break;
    iVar4 = (this->ChainsToAlign).ArrayNum;
    pFVar6 = (this->ChainsToAlign).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)iVar4 * 0x28;
    while( true ) {
      if ((this->ChainsToAlign).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FRetargetPoleVectorSettings,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar6 == pFVar2) break;
      if (*(longlong *)pFVar6 == *plVar7) {
        lVar5 = plVar7[1];
        *(longlong *)pFVar6 = *plVar7;
        *(longlong *)(pFVar6 + 8) = lVar5;
        lVar5 = plVar7[3];
        *(longlong *)(pFVar6 + 0x10) = plVar7[2];
        *(longlong *)(pFVar6 + 0x18) = lVar5;
        *(longlong *)(pFVar6 + 0x20) = plVar7[4];
      }
      pFVar6 = pFVar6 + 0x28;
    }
    plVar7 = plVar7 + 5;
  }
  return;
}

// GetControllerType @ 14df37d60

UClass * __thiscall
FIKRetargetAlignPoleVectorOpSettings::GetControllerType(FIKRetargetAlignPoleVectorOpSettings *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetAlignPoleVectorController.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetAlignPoleVectorController",
               &Z_Registration_Info_UClass_UIKRetargetAlignPoleVectorController.InnerSingleton,
               UIKRetargetAlignPoleVectorController::
               StaticRegisterNativesUIKRetargetAlignPoleVectorController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetAlignPoleVectorController>,
               InternalVTableHelperCtorCaller<UIKRetargetAlignPoleVectorController>,aFStackX_8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetAlignPoleVectorController.InnerSingleton;
}

// MergePoleVectorSettings @ 14df4a4b0

void __thiscall
FIKRetargetAlignPoleVectorOpSettings::MergePoleVectorSettings
          (FIKRetargetAlignPoleVectorOpSettings *this,FRetargetPoleVectorSettings *param_1)

{
  TArray<FRetargetPoleVectorSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FName *pFVar3;
  FRetargetPoleVectorSettings *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  FName *pFVar12;
  undefined1 local_res8 [8];
  
  iVar10 = (this->ChainsToAlign).ArrayNum;
  pTVar1 = &this->ChainsToAlign;
  pFVar12 = (FName *)(pTVar1->AllocatorInstance).Data;
  pFVar3 = pFVar12 + (longlong)iVar10 * 5;
  while( true ) {
    if ((this->ChainsToAlign).ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRetargetPoleVectorSettings,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar12 == pFVar3) break;
    if (*pFVar12 == param_1->TargetChainName) {
      FVar7 = *(FName *)&param_1->bEnabled;
      *pFVar12 = param_1->TargetChainName;
      pFVar12[1] = FVar7;
      FVar7 = (FName)param_1->StaticAngularOffset;
      pFVar12[2] = (FName)param_1->AlignAlpha;
      pFVar12[3] = FVar7;
      pFVar12[4] = *(FName *)&param_1->MaintainOffset;
      return;
    }
    pFVar12 = pFVar12 + 5;
  }
  pFVar4 = (FRetargetPoleVectorSettings *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar4 <= param_1) && (param_1 < pFVar4 + (this->ChainsToAlign).ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = (this->ChainsToAlign).ArrayNum;
  piVar2 = &(this->ChainsToAlign).ArrayMax;
  if (iVar10 == *piVar2) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  lVar11 = (longlong)iVar10;
  (this->ChainsToAlign).ArrayNum = iVar10 + 1;
  FVar7 = *(FName *)&param_1->bEnabled;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  *(FName *)(pFVar5 + lVar11 * 0x28) = param_1->TargetChainName;
  ((FName *)(pFVar5 + lVar11 * 0x28))[1] = FVar7;
  dVar8 = param_1->StaticAngularOffset;
  *(double *)(pFVar5 + lVar11 * 0x28 + 0x10) = param_1->AlignAlpha;
  *(double *)(pFVar5 + lVar11 * 0x28 + 0x10 + 8) = dVar8;
  *(undefined8 *)(pFVar5 + lVar11 * 0x28 + 0x20) = *(undefined8 *)&param_1->MaintainOffset;
  return;
}

