// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 7

// StaticClass @ 14def40f0

UClass * __cdecl UCurveRemapOp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveRemapOp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"CurveRemapOp",
               &Z_Registration_Info_UClass_UCurveRemapOp.InnerSingleton,
               StaticRegisterNativesUCurveRemapOp,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCurveRemapOp>,InternalVTableHelperCtorCaller<UCurveRemapOp>,
               local_res8,URetargetOpBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveRemapOp.InnerSingleton;
}

// UCurveRemapOp @ 14df18e80

UCurveRemapOp * __thiscall UCurveRemapOp::UCurveRemapOp(UCurveRemapOp *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UCurveRemapOp__6B_;
  (this->CurvesToRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurvesToRemap).ArrayNum = 0;
  (this->CurvesToRemap).ArrayMax = 0;
  this->bCopyAllSourceCurves = true;
  return this;
}

// UCurveRemapOp @ 14df18ec0

UCurveRemapOp * __thiscall
UCurveRemapOp::UCurveRemapOp(UCurveRemapOp *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UCurveRemapOp__6B_;
  (this->CurvesToRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurvesToRemap).ArrayNum = 0;
  (this->CurvesToRemap).ArrayMax = 0;
  this->bCopyAllSourceCurves = true;
  return this;
}

// ~UCurveRemapOp @ 14df1c190

void __thiscall UCurveRemapOp::~UCurveRemapOp(UCurveRemapOp *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCurveRemapOp__6B_;
  pFVar1 = (this->CurvesToRemap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7URetargetOpBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertToInstancedStruct @ 14df2b190

void __thiscall
UCurveRemapOp::ConvertToInstancedStruct(UCurveRemapOp *this,FInstancedStruct *param_1)

{
  int iVar1;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetCurveRemapOp,(UObject *)pUVar6,
                         L"IKRetargetCurveRemapOp");
  }
  FInstancedStruct::InitializeAs
            (param_1,Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOp.OuterSingleton,
             (uchar *)0x0);
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
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetCurveRemapOp,(UObject *)pUVar6,
                         L"IKRetargetCurveRemapOp");
    if (Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOp.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14df2b271;
  }
  else {
LAB_14df2b271:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOp.OuterSingleton)->
                 _padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FIKRetargetCurveRemapOp.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_14df2b2bb;
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
LAB_14df2b2bb:
  puVar2[8] = (uchar)this->_padding_;
  TArray<FCurveRemapPair,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FCurveRemapPair,TSizedDefaultAllocator<32>_> *)(puVar2 + 0x40),
             &this->CurvesToRemap);
  puVar2[0x38] = this->bCopyAllSourceCurves;
  return;
}

// GetPrivateStaticClass @ 14df3bec0

UClass * __cdecl UCurveRemapOp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveRemapOp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"CurveRemapOp",
               &Z_Registration_Info_UClass_UCurveRemapOp.InnerSingleton,
               StaticRegisterNativesUCurveRemapOp,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCurveRemapOp>,InternalVTableHelperCtorCaller<UCurveRemapOp>,
               local_res8,URetargetOpBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveRemapOp.InnerSingleton;
}

// StaticRegisterNativesUCurveRemapOp @ 14df59bc0

void __cdecl UCurveRemapOp::StaticRegisterNativesUCurveRemapOp(void)

{
  return;
}

