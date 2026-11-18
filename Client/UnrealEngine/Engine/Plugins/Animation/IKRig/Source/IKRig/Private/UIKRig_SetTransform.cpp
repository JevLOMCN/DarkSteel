// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// StaticClass @ 14deecfb0

UClass * __cdecl UIKRig_SetTransform::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_SetTransform.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_SetTransform",
               &Z_Registration_Info_UClass_UIKRig_SetTransform.InnerSingleton,
               StaticRegisterNativesUIKRig_SetTransform,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRig_SetTransform>,
               InternalVTableHelperCtorCaller<UIKRig_SetTransform>,local_res8,
               UIKRigSolver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_SetTransform.InnerSingleton;
}

// UIKRig_SetTransform @ 14df1a9c0

UIKRig_SetTransform * __thiscall
UIKRig_SetTransform::UIKRig_SetTransform(UIKRig_SetTransform *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UIKRig_SetTransform__6B_;
  (this->Goal).ComparisonIndex = 0;
  (this->Goal).Number = 0;
  (this->RootBone).ComparisonIndex = 0;
  (this->RootBone).Number = 0;
  (this->Effector_DEPRECATED).field0_0x0.DebugPtr = (UIKRig_SetTransformEffector *)0x0;
  return this;
}

// ~UIKRig_SetTransform @ 14df1c940

void __thiscall UIKRig_SetTransform::~UIKRig_SetTransform(UIKRig_SetTransform *this)

{
  this->_padding_ = (longlong)&___7UIKRigSolver__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertToInstancedStruct @ 14df2be80

void __thiscall
UIKRig_SetTransform::ConvertToInstancedStruct(UIKRig_SetTransform *this,FInstancedStruct *param_1)

{
  int iVar1;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  UPackage *pUVar7;
  undefined4 uVar8;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigSetTransform.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigSetTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSetTransform,(UObject *)pUVar7,
                         L"IKRigSetTransform");
  }
  FInstancedStruct::InitializeAs
            (param_1,Z_Registration_Info_UScriptStruct_FIKRigSetTransform.OuterSingleton,
             (uchar *)0x0);
  puVar2 = param_1->StructMemory;
  pUVar3 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
  if ((puVar2 == (uchar *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd1,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pUVar3 == (UScriptStruct *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd2,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigSetTransform.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigSetTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSetTransform,(UObject *)pUVar7,
                         L"IKRigSetTransform");
    if (Z_Registration_Info_UScriptStruct_FIKRigSetTransform.OuterSingleton != (UScriptStruct *)0x0)
    goto LAB_14df2bf61;
  }
  else {
LAB_14df2bf61:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIKRigSetTransform.OuterSingleton)->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FIKRigSetTransform.OuterSingleton)->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14df2bfab;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14df2bfab:
  uVar5 = __real_3f800000;
  puVar2[8] = (uchar)this->_padding_;
  *(FName *)(puVar2 + 0x18) = this->Goal;
  *(FName *)(puVar2 + 0x20) = this->RootBone;
  *(float *)(puVar2 + 0x30) = ((this->Effector_DEPRECATED).field0_0x0.DebugPtr)->Alpha;
  uVar8 = uVar5;
  if (((this->Effector_DEPRECATED).field0_0x0.DebugPtr)->bEnablePosition == false) {
    uVar8 = 0;
  }
  *(undefined4 *)(puVar2 + 0x28) = uVar8;
  if (((this->Effector_DEPRECATED).field0_0x0.DebugPtr)->bEnableRotation == false) {
    puVar2[0x2c] = '\0';
    puVar2[0x2d] = '\0';
    puVar2[0x2e] = '\0';
    puVar2[0x2f] = '\0';
    return;
  }
  *(undefined4 *)(puVar2 + 0x2c) = uVar5;
  return;
}

// GetPrivateStaticClass @ 14df3dd60

UClass * __cdecl UIKRig_SetTransform::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_SetTransform.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_SetTransform",
               &Z_Registration_Info_UClass_UIKRig_SetTransform.InnerSingleton,
               StaticRegisterNativesUIKRig_SetTransform,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRig_SetTransform>,
               InternalVTableHelperCtorCaller<UIKRig_SetTransform>,local_res8,
               UIKRigSolver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_SetTransform.InnerSingleton;
}

// StaticRegisterNativesUIKRig_SetTransform @ 14df5a340

void __cdecl UIKRig_SetTransform::StaticRegisterNativesUIKRig_SetTransform(void)

{
  return;
}

