// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 9

// StaticClass @ 146326bd0

UClass * __cdecl UWaveScalar::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWaveScalar.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"WaveScalar",
               &Z_Registration_Info_UClass_UWaveScalar.InnerSingleton,
               StaticRegisterNativesUWaveScalar,0xf0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<UWaveScalar>,
               InternalVTableHelperCtorCaller<UWaveScalar>,local_res8,UFieldNodeFloat::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWaveScalar.InnerSingleton;
}

// UWaveScalar @ 14632b460

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWaveScalar * __thiscall UWaveScalar::UWaveScalar(UWaveScalar *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UWaveScalar @ 14632bc10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWaveScalar::~UWaveScalar(UWaveScalar *this)

{
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 146330af0

UClass * __cdecl UWaveScalar::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWaveScalar.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"WaveScalar",
               &Z_Registration_Info_UClass_UWaveScalar.InnerSingleton,
               StaticRegisterNativesUWaveScalar,0xf0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<UWaveScalar>,
               InternalVTableHelperCtorCaller<UWaveScalar>,local_res8,UFieldNodeFloat::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWaveScalar.InnerSingleton;
}

// NewEvaluationGraph @ 146332fb0

FFieldNodeBase * __thiscall
UWaveScalar::NewEvaluationGraph
          (UWaveScalar *this,TArray<UFieldNodeBase_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FFieldNodeBase *pFVar5;
  FWaveScalar *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  UWaveScalar *local_18 [2];
  
  pFVar7 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar7 + (longlong)param_1->ArrayNum * 8;
  do {
    if (pFVar7 == pFVar1) {
LAB_146332ff7:
      pFVar1 = (param_1->AllocatorInstance).Data;
      local_18[0] = this;
      if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FFieldNodeBase *)(*pcVar2)();
        return pFVar5;
      }
      iVar4 = param_1->ArrayNum;
      if (iVar4 == param_1->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar4;
      }
      param_1->ArrayNum = iVar4 + 1;
      *(UWaveScalar **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
      pFVar6 = ::operator_new(0x40);
      if (pFVar6 == (FWaveScalar *)0x0) {
        return (FFieldNodeBase *)0x0;
      }
      pFVar6 = FWaveScalar::FWaveScalar
                         (pFVar6,this->Magnitude,&this->Position,this->Wavelength,this->Period,
                          (uint)(this->Function).Value,(uint)(this->Falloff).Value);
      return (FFieldNodeBase *)pFVar6;
    }
    if (*(UWaveScalar **)pFVar7 == this) {
      local_res8[0] = 0;
      bVar3 = `UWaveScalar::NewEvaluationGraph'::__l3::<lambda_1>::operator()(local_res8);
      if (!bVar3) {
        return (FFieldNodeBase *)0x0;
      }
      goto LAB_146332ff7;
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// SetWaveScalar @ 146334030

UWaveScalar * __thiscall
UWaveScalar::SetWaveScalar
          (UWaveScalar *this,float param_1,TVector<double> *param_2,float param_3,float param_4,
          float param_5,EWaveFunctionType param_6,EFieldFalloffType param_7)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  (this->Function).Value = (undefined1)param_6;
  (this->Position).field0_0x0._s_0.X = dVar1;
  (this->Position).field0_0x0._s_0.Y = dVar2;
  (this->Falloff).Value = (undefined1)param_7;
  this->Magnitude = param_1;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  this->Period = param_4;
  this->Wavelength = param_3;
  (this->Position).field0_0x0._s_0.Z = dVar1;
  return this;
}

// StaticRegisterNativesUWaveScalar @ 1463345d0

void __cdecl UWaveScalar::StaticRegisterNativesUWaveScalar(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UWaveScalar_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetWaveScalar @ 146337420

void __cdecl UWaveScalar::execSetWaveScalar(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_res18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_48 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_44 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_44,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_44);
  }
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[4].field_0x20 = local_res18[0];
  *(undefined8 *)(param_1 + 5) = local_40;
  *(undefined8 *)&param_1[5].field_0x8 = uStack_38;
  param_1[5].field_0x20 = local_res8[0];
  *(undefined8 *)&param_1[5].field_0x10 = local_30;
  *(undefined4 *)&param_1[5].field_0x1c = local_48;
  *(undefined4 *)&param_1[5].field_0x18 = local_res20[0];
  param_1[5].field_0x21 = local_res10[0];
  *(UObject **)param_3 = param_1;
  return;
}

// operator() @ 1504e9e00

bool __thiscall `UWaveScalar::NewEvaluationGraph'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3094132317354983538>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3094132317354983538>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

