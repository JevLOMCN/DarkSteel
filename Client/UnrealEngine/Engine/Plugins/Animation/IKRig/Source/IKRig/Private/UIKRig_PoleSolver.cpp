// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// StaticClass @ 14df08a40

UClass * __cdecl UIKRig_PoleSolver::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_PoleSolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_PoleSolver",
               &Z_Registration_Info_UClass_UIKRig_PoleSolver.InnerSingleton,
               StaticRegisterNativesUIKRig_PoleSolver,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRig_PoleSolver>,
               InternalVTableHelperCtorCaller<UIKRig_PoleSolver>,local_res8,
               UIKRigSolver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_PoleSolver.InnerSingleton;
}

// UIKRig_PoleSolver @ 14df1a900

UIKRig_PoleSolver * __thiscall
UIKRig_PoleSolver::UIKRig_PoleSolver(UIKRig_PoleSolver *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UIKRig_PoleSolver__6B_;
  (this->RootName).ComparisonIndex = 0;
  (this->RootName).Number = 0;
  (this->EndName).ComparisonIndex = 0;
  (this->EndName).Number = 0;
  (this->Effector_DEPRECATED).field0_0x0.DebugPtr = (UIKRig_PoleSolverEffector *)0x0;
  return this;
}

// ~UIKRig_PoleSolver @ 14df1c900

void __thiscall UIKRig_PoleSolver::~UIKRig_PoleSolver(UIKRig_PoleSolver *this)

{
  this->_padding_ = (longlong)&___7UIKRigSolver__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertToInstancedStruct @ 14df2bd10

void __thiscall
UIKRig_PoleSolver::ConvertToInstancedStruct(UIKRig_PoleSolver *this,FInstancedStruct *param_1)

{
  int iVar1;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigPoleSolver.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigPoleSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigPoleSolver,(UObject *)pUVar6,
                         L"IKRigPoleSolver");
  }
  FInstancedStruct::InitializeAs
            (param_1,Z_Registration_Info_UScriptStruct_FIKRigPoleSolver.OuterSingleton,(uchar *)0x0)
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
  if (Z_Registration_Info_UScriptStruct_FIKRigPoleSolver.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigPoleSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigPoleSolver,(UObject *)pUVar6,
                         L"IKRigPoleSolver");
    if (Z_Registration_Info_UScriptStruct_FIKRigPoleSolver.OuterSingleton != (UScriptStruct *)0x0)
    goto LAB_14df2bdf1;
  }
  else {
LAB_14df2bdf1:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIKRigPoleSolver.OuterSingleton)->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FIKRigPoleSolver.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_14df2be3b;
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
LAB_14df2be3b:
  puVar2[8] = (uchar)this->_padding_;
  *(FName *)(puVar2 + 0x18) = this->RootName;
  *(FName *)(puVar2 + 0x20) = this->EndName;
  *(FName *)(puVar2 + 0x28) = ((this->Effector_DEPRECATED).field0_0x0.DebugPtr)->GoalName;
  *(float *)(puVar2 + 0x30) = ((this->Effector_DEPRECATED).field0_0x0.DebugPtr)->Alpha;
  return;
}

// GetPrivateStaticClass @ 14df3dbf0

UClass * __cdecl UIKRig_PoleSolver::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_PoleSolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_PoleSolver",
               &Z_Registration_Info_UClass_UIKRig_PoleSolver.InnerSingleton,
               StaticRegisterNativesUIKRig_PoleSolver,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRig_PoleSolver>,
               InternalVTableHelperCtorCaller<UIKRig_PoleSolver>,local_res8,
               UIKRigSolver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_PoleSolver.InnerSingleton;
}

// StaticRegisterNativesUIKRig_PoleSolver @ 14df5a320

void __cdecl UIKRig_PoleSolver::StaticRegisterNativesUIKRig_PoleSolver(void)

{
  return;
}

