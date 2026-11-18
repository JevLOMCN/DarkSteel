// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 4

// StaticStruct @ 14def92f0

UScriptStruct * __cdecl FIKRetargetFloorConstraintOpSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetFloorConstraintOpSettings,
                         (UObject *)pUVar1,L"IKRetargetFloorConstraintOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOpSettings.OuterSingleton;
}

// GetControllerType @ 14defbfe0

UClass * __thiscall
FIKRetargetFloorConstraintOpSettings::GetControllerType(FIKRetargetFloorConstraintOpSettings *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetFloorGoalsController.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetFloorGoalsController",
               &Z_Registration_Info_UClass_UIKRetargetFloorGoalsController.InnerSingleton,
               UIKRetargetFloorGoalsController::StaticRegisterNativesUIKRetargetFloorGoalsController
               ,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargetFloorGoalsController>,
               InternalVTableHelperCtorCaller<UIKRetargetFloorGoalsController>,aFStackX_8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetFloorGoalsController.InnerSingleton;
}

// CopySettingsAtRuntime @ 14defbff0

void __thiscall
FIKRetargetFloorConstraintOpSettings::CopySettingsAtRuntime
          (FIKRetargetFloorConstraintOpSettings *this,FIKRetargetOpSettingsBase *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  UPackage *pUVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  longlong *plVar8;
  FName local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  
  ::FName::FName(&local_res10,"ChainsToAffect");
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_38.AllocatorInstance,1,&local_38.ArrayMax);
  *(FName *)local_38.AllocatorInstance.Data = local_res10;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetFloorConstraintOpSettings,
                         (UObject *)pUVar4,L"IKRetargetFloorConstraintOpSettings");
  }
  FIKRetargetOpBase::CopyStructProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOpSettings.OuterSingleton,
             param_1,this,&local_38);
  iVar1 = param_1[1].LODThreshold;
  plVar7 = (longlong *)param_1[1]._padding_;
  plVar8 = plVar7 + (longlong)iVar1 * 4;
  while( true ) {
    if (param_1[1].LODThreshold != iVar1) {
      `TCheckedPointerIterator<FFloorConstraintChainSettings_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res10);
    }
    if (plVar7 == plVar8) break;
    iVar2 = (this->ChainsToAffect).ArrayNum;
    pFVar5 = (this->ChainsToAffect).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar2 * 0x20;
    while( true ) {
      if ((this->ChainsToAffect).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FFloorConstraintChainSettings,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res10);
      }
      if (pFVar5 == pFVar6) break;
      if (*(longlong *)pFVar5 == *plVar7) {
        lVar3 = plVar7[1];
        *(longlong *)pFVar5 = *plVar7;
        *(longlong *)(pFVar5 + 8) = lVar3;
        lVar3 = plVar7[3];
        *(longlong *)(pFVar5 + 0x10) = plVar7[2];
        *(longlong *)(pFVar5 + 0x18) = lVar3;
      }
      pFVar5 = pFVar5 + 0x20;
    }
    plVar7 = plVar7 + 4;
  }
  if ((FName *)local_38.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator= @ 14df1d8b0

FIKRetargetFloorConstraintOpSettings * __thiscall
FIKRetargetFloorConstraintOpSettings::operator=
          (FIKRetargetFloorConstraintOpSettings *this,FIKRetargetFloorConstraintOpSettings *param_1)

{
  TArray<FFloorConstraintChainSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  FIKRetargetOpSettingsBase::operator=
            ((FIKRetargetOpSettingsBase *)this,(FIKRetargetOpSettingsBase *)param_1);
  pTVar1 = &this->ChainsToAffect;
  if (pTVar1 != &param_1->ChainsToAffect) {
    iVar3 = (this->ChainsToAffect).ArrayMax;
    piVar2 = &(this->ChainsToAffect).ArrayMax;
    _Src = (param_1->ChainsToAffect).AllocatorInstance.Data;
    iVar4 = (param_1->ChainsToAffect).ArrayNum;
    (this->ChainsToAffect).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 5);
      }
    }
  }
  this->HeightFalloffOffset = param_1->HeightFalloffOffset;
  this->HeightFalloffDistance = param_1->HeightFalloffDistance;
  return this;
}

