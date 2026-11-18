// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// StaticClass @ 14df01da0

UClass * __cdecl UIKRig_LimbSolver::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_LimbSolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_LimbSolver",
               &Z_Registration_Info_UClass_UIKRig_LimbSolver.InnerSingleton,
               StaticRegisterNativesUIKRig_LimbSolver,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRig_LimbSolver>,
               InternalVTableHelperCtorCaller<UIKRig_LimbSolver>,local_res8,
               UIKRigSolver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_LimbSolver.InnerSingleton;
}

// UIKRig_LimbSolver @ 14df1a890

UIKRig_LimbSolver * __thiscall
UIKRig_LimbSolver::UIKRig_LimbSolver(UIKRig_LimbSolver *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UIKRig_LimbSolver__6B_;
  (this->RootName).ComparisonIndex = 0;
  (this->RootName).Number = 0;
  (this->HingeRotationAxis).Value = '\0';
  this->bEnableLimit = false;
  (this->Effector_DEPRECATED).field0_0x0.DebugPtr = (UIKRig_LimbEffector *)0x0;
  this->ReachPrecision = 0.01;
  this->MaxIterations = 0xc;
  this->MinRotationAngle = 15.0;
  this->bAveragePull = true;
  this->PullDistribution = 0.5;
  this->ReachStepAlpha = 0.7;
  this->bEnableTwistCorrection = false;
  this->EndBoneForwardAxis = '\x02';
  return this;
}

// ~UIKRig_LimbSolver @ 14df1c8e0

void __thiscall UIKRig_LimbSolver::~UIKRig_LimbSolver(UIKRig_LimbSolver *this)

{
  this->_padding_ = (longlong)&___7UIKRigSolver__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertToInstancedStruct @ 14df2bb60

void __thiscall
UIKRig_LimbSolver::ConvertToInstancedStruct(UIKRig_LimbSolver *this,FInstancedStruct *param_1)

{
  int iVar1;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigLimbSolver.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigLimbSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigLimbSolver,(UObject *)pUVar6,
                         L"IKRigLimbSolver");
  }
  FInstancedStruct::InitializeAs
            (param_1,Z_Registration_Info_UScriptStruct_FIKRigLimbSolver.OuterSingleton,(uchar *)0x0)
  ;
  puVar2 = param_1->StructMemory;
  pUVar3 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
  if (puVar2 == (uchar *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pUVar3 == (UScriptStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigLimbSolver.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigLimbSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigLimbSolver,(UObject *)pUVar6,
                         L"IKRigLimbSolver");
    if (Z_Registration_Info_UScriptStruct_FIKRigLimbSolver.OuterSingleton != (UScriptStruct *)0x0)
    goto LAB_14df2bc41;
  }
  else {
LAB_14df2bc41:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIKRigLimbSolver.OuterSingleton)->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FIKRigLimbSolver.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_14df2bc8b;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14df2bc8b:
  puVar2[8] = (uchar)this->_padding_;
  *(FName *)(puVar2 + 0x40) = this->RootName;
  *(FName *)(puVar2 + 0x48) = ((this->Effector_DEPRECATED).field0_0x0.DebugPtr)->GoalName;
  *(FName *)(puVar2 + 0x50) = ((this->Effector_DEPRECATED).field0_0x0.DebugPtr)->BoneName;
  *(float *)(puVar2 + 0x18) = this->ReachPrecision;
  puVar2[0x1c] = (this->HingeRotationAxis).Value;
  *(int *)(puVar2 + 0x20) = this->MaxIterations;
  puVar2[0x24] = this->bEnableLimit;
  *(float *)(puVar2 + 0x28) = this->MinRotationAngle;
  puVar2[0x2c] = this->bAveragePull;
  *(float *)(puVar2 + 0x30) = this->PullDistribution;
  *(float *)(puVar2 + 0x34) = this->ReachStepAlpha;
  puVar2[0x38] = this->bEnableTwistCorrection;
  puVar2[0x39] = (this->EndBoneForwardAxis).Value;
  return;
}

// GetPrivateStaticClass @ 14df3db30

UClass * __cdecl UIKRig_LimbSolver::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_LimbSolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_LimbSolver",
               &Z_Registration_Info_UClass_UIKRig_LimbSolver.InnerSingleton,
               StaticRegisterNativesUIKRig_LimbSolver,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRig_LimbSolver>,
               InternalVTableHelperCtorCaller<UIKRig_LimbSolver>,local_res8,
               UIKRigSolver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_LimbSolver.InnerSingleton;
}

// StaticRegisterNativesUIKRig_LimbSolver @ 14df5a310

void __cdecl UIKRig_LimbSolver::StaticRegisterNativesUIKRig_LimbSolver(void)

{
  return;
}

