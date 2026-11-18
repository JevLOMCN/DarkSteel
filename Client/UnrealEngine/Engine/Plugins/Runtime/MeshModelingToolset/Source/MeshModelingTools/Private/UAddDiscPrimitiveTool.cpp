// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 9

// StaticClass @ 14cbd3210

UClass * __cdecl UAddDiscPrimitiveTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddDiscPrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddDiscPrimitiveTool",
               &Z_Registration_Info_UClass_UAddDiscPrimitiveTool.InnerSingleton,
               StaticRegisterNativesUAddDiscPrimitiveTool,0x160,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAddDiscPrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddDiscPrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddDiscPrimitiveTool.InnerSingleton;
}

// UAddDiscPrimitiveTool @ 14cbdc0c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAddDiscPrimitiveTool * __thiscall
UAddDiscPrimitiveTool::UAddDiscPrimitiveTool(UAddDiscPrimitiveTool *this,FVTableHelper *param_1)

{
  UAddPrimitiveTool::UAddPrimitiveTool((UAddPrimitiveTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  return this;
}

// UAddDiscPrimitiveTool @ 14cbdc120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAddDiscPrimitiveTool * __thiscall
UAddDiscPrimitiveTool::UAddDiscPrimitiveTool
          (UAddDiscPrimitiveTool *this,FObjectInitializer *param_1)

{
  FName FVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FName *pFVar4;
  UClass *pUVar5;
  FText *pFVar6;
  FName local_res8;
  FText local_18;
  
  pFVar4 = ::FName::FName(&local_res8,L"ShapeSettings");
  FVar1 = *pFVar4;
  pUVar5 = UProceduralDiscToolProperties::StaticClass();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,pUVar5,(TArrayView<FName_const_,int> *)0x0);
  UAddPrimitiveTool::UAddPrimitiveTool((UAddPrimitiveTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  ::FString::operator=((FString *)&this->field_0x110,L"Disc");
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UAddPrimitiveTool",L"DiscToolName",L"Create Disc");
  pIVar2 = *(ITextData **)&this->field_0x98;
  pIVar3 = (pFVar6->TextData).Reference;
  if (pIVar2 != pIVar3) {
    *(ITextData **)&this->field_0x98 = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  *(uint *)&this->field_0xa0 = pFVar6->Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return this;
}

// ~UAddDiscPrimitiveTool @ 14cbdfe50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAddDiscPrimitiveTool::~UAddDiscPrimitiveTool(UAddDiscPrimitiveTool *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  UAddPrimitiveTool::~UAddPrimitiveTool((UAddPrimitiveTool *)this);
  return;
}

// operator() @ 14cbe2bd0

void __thiscall
`UAddDiscPrimitiveTool::Setup'::__l2::<lambda_2>::operator()(void *this,float param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  float fVar7;
  
  lVar3 = *(longlong *)this;
  if (*(int *)(lVar3 + 0xc0) == 1) {
    fVar7 = *(float *)(lVar3 + 0xd0);
    if (param_1 <= *(float *)(lVar3 + 0xd0)) {
      fVar7 = param_1;
    }
    *(float *)(lVar3 + 0xd0) = fVar7;
    lVar3 = *(longlong *)this;
    uVar2 = *(uint *)((longlong)this + 8);
    piVar1 = (int *)(lVar3 + 0x30);
    if ((((int)uVar2 < 0) || (*piVar1 <= (int)uVar2)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("i >= 0 && i < PropertyWatchers.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\InteractiveTool.h"
                           ,0xc9,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = 0;
    if ((int)uVar2 < *piVar1) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 0x28) + (longlong)(int)uVar2 * 8) + 0x10))();
  }
  return;
}

// GenerateMesh @ 14cbecef0

void __thiscall
UAddDiscPrimitiveTool::GenerateMesh(UAddDiscPrimitiveTool *this,FDynamicMesh3 *param_1)

{
  undefined1 *this_00;
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  undefined1 local_e8 [176];
  int local_38;
  int local_34;
  bool local_28;
  float local_18;
  
  this_00 = &this->field_0xe8;
  if (*(longlong *)this_00 != 0) {
    pUVar2 = UProceduralDiscToolProperties::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (bVar1) {
      lVar3 = *(longlong *)this_00;
      goto LAB_14cbecf37;
    }
  }
  lVar3 = 0;
LAB_14cbecf37:
  if (*(int *)(lVar3 + 0xc0) == 0) {
    UE::Geometry::FDiscMeshGenerator::FDiscMeshGenerator((FDiscMeshGenerator *)local_e8);
    local_38 = *(int *)(lVar3 + 200);
    local_e8._160_4_ = *(undefined4 *)(lVar3 + 0xc4);
    local_34 = *(int *)(lVar3 + 0xcc);
    local_28 = *(char *)(*(longlong *)this_00 + 0xb0) != '\x02';
    UE::Geometry::FDiscMeshGenerator::Generate((FDiscMeshGenerator *)local_e8);
  }
  else {
    if (*(int *)(lVar3 + 0xc0) != 1) {
      return;
    }
    UE::Geometry::FPuncturedDiscMeshGenerator::FPuncturedDiscMeshGenerator
              ((FPuncturedDiscMeshGenerator *)local_e8);
    local_38 = *(int *)(lVar3 + 200);
    local_e8._160_4_ = *(undefined4 *)(lVar3 + 0xc4);
    local_34 = *(int *)(lVar3 + 0xcc);
    local_18 = (float)local_e8._160_4_ * __real_3f7fbe77;
    if (*(float *)(lVar3 + 0xd0) <= (float)local_e8._160_4_ * __real_3f7fbe77) {
      local_18 = *(float *)(lVar3 + 0xd0);
    }
    local_28 = *(char *)(*(longlong *)this_00 + 0xb0) != '\x02';
    UE::Geometry::FPuncturedDiscMeshGenerator::Generate((FPuncturedDiscMeshGenerator *)local_e8);
  }
  UE::Geometry::FDynamicMesh3::Copy(param_1,(FMeshShapeGenerator *)local_e8);
  local_e8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((FScriptContainerElement *)local_e8._136_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._136_8_);
  }
  if ((FScriptContainerElement *)local_e8._120_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._120_8_);
  }
  if ((FScriptContainerElement *)local_e8._104_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._104_8_);
  }
  if ((FScriptContainerElement *)local_e8._88_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._88_8_);
  }
  if ((FScriptContainerElement *)local_e8._72_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._72_8_);
  }
  if ((FScriptContainerElement *)local_e8._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._56_8_);
  }
  if ((FScriptContainerElement *)local_e8._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._40_8_);
  }
  if ((FScriptContainerElement *)local_e8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._24_8_);
  }
  if ((FScriptContainerElement *)local_e8._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._8_8_);
  }
  return;
}

// GetPrivateStaticClass @ 14cbeea80

UClass * __cdecl UAddDiscPrimitiveTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddDiscPrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddDiscPrimitiveTool",
               &Z_Registration_Info_UClass_UAddDiscPrimitiveTool.InnerSingleton,
               StaticRegisterNativesUAddDiscPrimitiveTool,0x160,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAddDiscPrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddDiscPrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddDiscPrimitiveTool.InnerSingleton;
}

// Setup @ 14cbf41b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAddDiscPrimitiveTool::Setup(UAddDiscPrimitiveTool *this)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  code *local_38 [2];
  undefined **local_28;
  longlong local_20;
  int local_18;
  undefined8 local_10;
  
  UAddPrimitiveTool::Setup((UAddPrimitiveTool *)this);
  if (*(longlong *)&this->field_0xe8 != 0) {
    pUVar2 = UProceduralDiscToolProperties::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->field_0xe8,pUVar2);
    if (bVar1) {
      lVar3 = *(longlong *)&this->field_0xe8;
      goto LAB_14cbf41ef;
    }
  }
  lVar3 = 0;
LAB_14cbf41ef:
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UAddDiscPrimitiveTool::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UAddDiscPrimitiveTool::Setup'::__l2::<lambda_1>,void,float_const_&>
                ::Call;
  local_20 = lVar3;
  local_18 = FWatchablePropertySet::WatchProperty<float>
                       ((FWatchablePropertySet *)(lVar3 + 0x28),(float *)(lVar3 + 0xd0),
                        (TFunction<void___cdecl(float_const_&)> *)local_38);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UAddDiscPrimitiveTool::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UAddDiscPrimitiveTool::Setup'::__l2::<lambda_2>,void,float_const_&>
                ::Call;
  local_10 = 0;
  local_20 = lVar3;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)(lVar3 + 0x28),(float *)(lVar3 + 0xc4),
             (TFunction<void___cdecl(float_const_&)> *)local_38);
  return;
}

// StaticRegisterNativesUAddDiscPrimitiveTool @ 14cbf69f0

void __cdecl UAddDiscPrimitiveTool::StaticRegisterNativesUAddDiscPrimitiveTool(void)

{
  return;
}

